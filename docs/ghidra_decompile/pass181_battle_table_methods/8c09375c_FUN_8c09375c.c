// entry: 8c09375c
// name: FUN_8c09375c
// signature: undefined FUN_8c09375c(void)


void FUN_8c09375c(int param_1)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_8c093834)(*(int *)(param_1 + 0x38) + 8,0,(int)DAT_8c093832);
  (*(code *)PTR_FUN_8c093838)();
  *(undefined4 *)(param_1 + 0x38) = **(undefined4 **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = iVar1;
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 <= iVar1) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x50) < iVar2) {
    iVar1 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar1;
    if (*(int *)(param_1 + 0x54) < iVar1) {
      iVar1 = iVar1 - *(int *)(param_1 + 0x54);
    }
    else {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x48) = iVar1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x48) = iVar1;
    if (iVar1 < 0) {
      *(int *)(param_1 + 0x48) = iVar1 + iVar2;
    }
  }
  return;
}

