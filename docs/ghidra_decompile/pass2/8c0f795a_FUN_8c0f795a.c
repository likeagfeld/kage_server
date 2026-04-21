// entry: 8c0f795a
// name: FUN_8c0f795a
// signature: undefined FUN_8c0f795a(void)


undefined4 FUN_8c0f795a(int *param_1)

{
  int iVar1;
  undefined4 local_c;
  int *local_8;
  
  local_c = 1;
  local_8 = param_1;
  iVar1 = (*(code *)PTR_FUN_8c0f79b0)(&local_c);
  if (iVar1 != 0) {
    return 0xfffffffd;
  }
  *local_8 = (int)DAT_8c0f799e + *(int *)PTR_DAT_8c0f79a0;
  return 0;
}

