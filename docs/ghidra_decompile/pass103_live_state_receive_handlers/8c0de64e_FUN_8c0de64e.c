// entry: 8c0de64e
// name: FUN_8c0de64e
// signature: undefined FUN_8c0de64e(void)


void FUN_8c0de64e(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 local_8;
  
  iVar3 = (int)DAT_8c0de784;
  iVar2 = (*(code *)PTR_FUN_8c0de790)(param_2);
  *(int *)(param_1 + 0x58) = iVar2;
  if ((iVar2 < -1) || (1 < iVar2)) {
    (*(code *)PTR_FUN_8c0de798)(&stack0xfffffffc + iVar3,0,8);
    (&stack0xfffffffd)[iVar3] = (&stack0xfffffffd)[iVar3] & 1 | 10;
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    *(ushort *)(&stack0xfffffffc + iVar3) =
         *(ushort *)(&stack0xfffffffc + iVar3) & (ushort)DAT_8c0de7a0 | 4;
    (*(code *)PTR_FUN_8c0de79c)(uVar4);
    puVar1 = PTR_FUN_8c0de790;
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x54) = iVar2;
    uVar4 = (*(code *)puVar1)(*(int *)(param_1 + 0x50) + iVar2);
    puVar1 = PTR_FUN_8c0de7a4;
    *(undefined4 *)(&stack0x00000000 + iVar3) = uVar4;
    *(undefined4 *)(param_1 + 0x34) = 0xf;
    iVar2 = (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x5c),&stack0xfffffffc + iVar3,8);
    if (iVar2 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x60);
      pcVar5 = *(code **)(*(int *)(param_1 + 0x28) + 0x68);
      *(undefined **)((int)&local_8 + iVar3) = PTR_s_OUT>_CalcTimer_Next___SendFastTo_8c0de7a8;
      (*pcVar5)(param_1 + iVar2);
    }
  }
  else {
    (*(code *)PTR_FUN_8c0de794)(0,param_1 + 0x10,4);
  }
  return;
}

