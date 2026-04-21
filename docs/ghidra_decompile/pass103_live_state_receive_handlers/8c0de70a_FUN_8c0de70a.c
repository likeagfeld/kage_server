// entry: 8c0de70a
// name: FUN_8c0de70a
// signature: undefined FUN_8c0de70a(void)


void FUN_8c0de70a(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c0de790)(param_2);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  return;
}

