// entry: 8c0de228
// name: FUN_8c0de228
// signature: undefined FUN_8c0de228(void)


void FUN_8c0de228(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_8;
  
  iVar2 = (int)DAT_8c0de2d4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 5;
  **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x50);
  (*(code *)PTR_FUN_8c0de2dc)(&stack0xfffffffc + iVar2,0,4);
  (&stack0xfffffffd)[iVar2] = (&stack0xfffffffd)[iVar2] & 1 | 8;
  (*(code *)PTR_FUN_8c0de2e0)(*(undefined4 *)(param_1 + 0x48));
  iVar1 = (*(code *)PTR_FUN_8c0de2e4)(*(undefined4 *)(param_1 + 0x5c),&stack0xfffffffc + iVar2,4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x60);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x28) + 0x68);
    *(undefined **)((int)&local_8 + iVar2) = PTR_s_OUT>_Start_SyncTimmer___FAIL____R_8c0de2e8;
    (*pcVar3)(param_1 + iVar1);
    (*(code *)PTR_FUN_8c0de2ec)(0,param_1 + 0x10,1);
  }
  else {
    (*(code *)PTR_FUN_8c0de2ec)(0,param_1 + 0x10,2);
    *(int *)(param_1 + 0x58) = (int)DAT_8c0de2d8;
    *(undefined4 *)(param_1 + 0x34) = 0xf;
  }
  return;
}

