// entry: 8c0935b0
// name: FUN_8c0935b0
// signature: undefined FUN_8c0935b0(void)


void FUN_8c0935b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 local_8;
  
  iVar1 = (int)DAT_8c09370c;
  iVar2 = (int)DAT_8c09370e + iVar1 + -8;
  puVar3 = &stack0xfffffffc + iVar2 + 8;
  if (((uint)puVar3 & 3) != 0) {
    puVar3 = &stack0x00000000 + iVar2 + 8;
  }
  (*(code *)PTR_FUN_8c09371c)
            ((int)&local_8 + iVar1,*(undefined4 *)((int)&local_8 + DAT_8c09370e + iVar1),puVar3);
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)((int)&local_8 + DAT_8c093710 + iVar1) = (int)&local_8 + iVar1;
  (*(code *)PTR_FUN_8c093720)(iVar2 + 8,0,(int)DAT_8c093710);
  (*(code *)PTR_FUN_8c093724)(*(int *)(param_1 + 0x38) + 8);
  *(undefined4 *)(param_1 + 0x38) = **(undefined4 **)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x4c) + 1;
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 <= iVar2) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x50) < iVar1) {
    iVar2 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar2;
    if (*(int *)(param_1 + 0x54) < iVar2) {
      iVar2 = iVar2 - *(int *)(param_1 + 0x54);
    }
    else {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x48) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x48) = iVar2;
    if (iVar2 < 0) {
      *(int *)(param_1 + 0x48) = iVar2 + iVar1;
    }
  }
  return;
}

