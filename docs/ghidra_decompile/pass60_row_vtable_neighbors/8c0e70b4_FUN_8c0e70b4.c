// entry: 8c0e70b4
// name: FUN_8c0e70b4
// signature: undefined FUN_8c0e70b4(void)


void FUN_8c0e70b4(int param_1)

{
  (*(code *)PTR_FUN_8c0e7210)(param_1 + 0x3c,0,0);
  if (((*DAT_8c0e7214 != 0) && (*(int *)(param_1 + 0x2c) != 0)) &&
     (((int)*(char *)(*DAT_8c0e7214 + 0x12) & (int)DAT_8c0e720c) == 2)) {
    (*(code *)PTR_FUN_8c0e7218)();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

