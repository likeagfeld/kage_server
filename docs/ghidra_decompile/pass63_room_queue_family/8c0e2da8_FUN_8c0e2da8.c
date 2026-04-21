// entry: 8c0e2da8
// name: FUN_8c0e2da8
// signature: undefined FUN_8c0e2da8(void)


undefined4 FUN_8c0e2da8(int param_1)

{
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x38) != 0) && (*(int *)(*(int *)(param_1 + 0x38) + 0x58) != 0)) {
    return 0;
  }
  return 1;
}

