// entry: 8c02502a
// name: FUN_8c02502a
// signature: undefined FUN_8c02502a(void)


undefined4 FUN_8c02502a(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  if ((((*(uint *)(param_1 + 0x2c) & (int)DAT_8c025122) != 0) &&
      (iVar1 = (*(code *)PTR_FUN_8c025138)(DAT_8c025134), iVar1 != 0)) &&
     (iVar1 = (*(code *)PTR_FUN_8c025138)(DAT_8c02513c), iVar1 != 0)) {
    local_8 = 1;
  }
  return local_8;
}

