// entry: 8c09ec3c
// name: FUN_8c09ec3c
// signature: undefined FUN_8c09ec3c(void)


void FUN_8c09ec3c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_8;
  
  puVar1 = PTR_DAT_8c09ec74;
  iVar2 = (int)DAT_8c09ec6e;
  *(undefined4 *)((int)&local_8 + iVar2) = *(undefined4 *)PTR_DAT_8c09ec74;
  *(int *)PTR_DAT_8c09ec74 = (int)&local_8 + iVar2;
  (&stack0xfffffffc)[iVar2] = 2;
  *(undefined4 *)(&stack0x00000000 + iVar2) = 0;
  if (param_1 != 0) {
    (*(code *)PTR_FUN_8c09ec78)();
  }
  *(undefined4 *)puVar1 = *(undefined4 *)((int)&local_8 + iVar2);
  return;
}

