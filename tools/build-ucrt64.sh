#!/usr/bin/env bash
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")/.." && pwd)"
PREFIX_DIR="$ROOT_DIR/local/ucrt64"
BUILD_DIR="$ROOT_DIR/deps/libdcserver/build-ucrt64"
STATE_DIR="$ROOT_DIR/tools/state"
PACKAGES=(
  mingw-w64-ucrt-x86_64-gcc
  mingw-w64-ucrt-x86_64-cmake
  mingw-w64-ucrt-x86_64-ninja
  mingw-w64-ucrt-x86_64-make
  mingw-w64-ucrt-x86_64-asio
  mingw-w64-ucrt-x86_64-curl
  mingw-w64-ucrt-x86_64-sqlite3
)

mkdir -p "$PREFIX_DIR" "$BUILD_DIR" "$STATE_DIR" "$ROOT_DIR/logs" "$ROOT_DIR/data"

echo "==> Installing required UCRT64 packages"
pacman -Sy --noconfirm --needed "${PACKAGES[@]}"

echo "==> Building libdcserver"
cmake -S "$ROOT_DIR/deps/libdcserver" -B "$BUILD_DIR" -G Ninja \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_C_COMPILER=gcc \
  -DCMAKE_CXX_COMPILER=g++ \
  -DCMAKE_INSTALL_PREFIX="$PREFIX_DIR" \
  -DLOCALSTATEDIR="$ROOT_DIR/local/state"
cmake --build "$BUILD_DIR"
cmake --install "$BUILD_DIR"

echo "==> Building kage_server"
make -f Makefile.win clean
make -f Makefile.win

echo "==> Build finished"
