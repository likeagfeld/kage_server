// entry: 8c082868
// name: FUN_8c082868
// signature: undefined FUN_8c082868(void)


undefined4 FUN_8c082868(int param_1,int param_2,ushort *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = DAT_8c0829c8;
  uVar1 = DAT_8c0829b6;
  iVar5 = 0;
  iVar6 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20);
  pbVar4 = *(byte **)((int)DAT_8c0829b4 + *(int *)(param_1 + 8));
  if (0 < iVar6) {
    do {
      if ((uint)*pbVar4 == (*(int *)(param_2 * 4 + param_1 + DAT_8c0829b2) + 4U & 0xff)) {
        (*(code *)PTR_FUN_8c0829cc)(8);
        (*(code *)PTR_FUN_8c0829d0)();
        (*(code *)PTR_FUN_8c0829d4)();
        (*(code *)PTR_FUN_8c0829d0)();
        *(byte *)param_3 = ((byte)*param_3 & (byte)DAT_8c0829b6 | 0x10) & (byte)DAT_8c0829b8 | 8;
        return 1;
      }
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar5 < iVar6);
  }
  *(byte *)((int)param_3 + 1) = *(byte *)((int)param_3 + 1) & 3;
  uVar2 = DAT_8c0829b8;
  *param_3 = *param_3 & (ushort)uVar3;
  *(byte *)param_3 = (byte)*param_3 & (byte)uVar1 & (byte)uVar2;
  return 0;
}

