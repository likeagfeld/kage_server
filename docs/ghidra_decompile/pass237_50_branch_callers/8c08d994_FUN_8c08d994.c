// entry: 8c08d994
// name: FUN_8c08d994
// signature: undefined FUN_8c08d994(void)


void FUN_8c08d994(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(code *)PTR_FUN_8c08da68)(FUN_8c09e790);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar2 = (*(code *)PTR_FUN_8c08da68)();
  *(undefined4 *)((iVar3 * iVar1 + iVar2) * 4 + *(int *)(DAT_8c08da66 + param_1)) = param_2;
  return;
}

