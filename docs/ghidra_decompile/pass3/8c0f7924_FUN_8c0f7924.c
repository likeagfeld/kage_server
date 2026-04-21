// entry: 8c0f7924
// name: FUN_8c0f7924
// signature: undefined FUN_8c0f7924(void)


undefined4 FUN_8c0f7924(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = (*(code *)PTR_FUN_8c0f79ac)();
  if (iVar1 != 0) {
    return 0xfffffffd;
  }
  *param_1 = *(undefined4 *)((int)DAT_8c0f798e + *(int *)PTR_DAT_8c0f79a0);
  return 0;
}

