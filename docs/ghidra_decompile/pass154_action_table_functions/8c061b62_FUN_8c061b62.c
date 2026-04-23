// entry: 8c061b62
// name: FUN_8c061b62
// signature: undefined FUN_8c061b62(void)


undefined4 FUN_8c061b62(int param_1)

{
  if (*(int *)(DAT_8c061cac + param_1) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(DAT_8c061cac + param_1) + 8);
}

