// entry: 8c0f4efc
// name: FUN_8c0f4efc
// signature: undefined FUN_8c0f4efc(void)


void FUN_8c0f4efc(int param_1)

{
  if (*(int *)(param_1 + 0x5c) == 0) {
    if (*(int *)(param_1 + 0x60) != 0) {
      (*(code *)PTR_FUN_8c0f4fdc)();
      (*(code *)PTR_FUN_8c0f4fe0)(*(undefined4 *)(param_1 + 0x60));
    }
  }
  else {
    (*(code *)PTR_FUN_8c0f4fd4)();
    (*(code *)PTR_FUN_8c0f4fd8)(*(undefined4 *)(param_1 + 0x5c));
  }
  return;
}

