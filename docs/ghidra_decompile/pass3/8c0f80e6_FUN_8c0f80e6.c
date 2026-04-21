// entry: 8c0f80e6
// name: FUN_8c0f80e6
// signature: undefined FUN_8c0f80e6(void)


undefined4 FUN_8c0f80e6(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = DAT_8c0f8190;
  if (*(int *)(DAT_8c0f8190 + 4) == 0) {
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    return 0xffffffed;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = *(int *)(DAT_8c0f8190 + 4);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

