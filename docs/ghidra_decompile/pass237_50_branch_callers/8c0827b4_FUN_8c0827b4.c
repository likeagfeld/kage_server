// entry: 8c0827b4
// name: FUN_8c0827b4
// signature: undefined FUN_8c0827b4(void)


void FUN_8c0827b4(int param_1,int param_2,ushort *param_3)

{
  undefined2 uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined2 local_10;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20);
  pbVar2 = *(byte **)((int)DAT_8c082858 + *(int *)(param_1 + 8));
  if (0 < iVar4) {
    do {
      if ((uint)*pbVar2 == (*(int *)(param_2 * 4 + param_1 + DAT_8c082856) + 4U & 0xff)) {
        uVar1 = (*(code *)PTR_FUN_8c082860)();
        (*(code *)PTR_FUN_8c08285c)(uVar1);
        uVar1 = (*(code *)PTR_FUN_8c082864)();
        (*(code *)PTR_FUN_8c08285c)(uVar1);
        local_10 = CONCAT11(local_10._1_1_,
                            ((byte)local_10 & (byte)DAT_8c08284c | 0x10) & (byte)DAT_8c08284e) | 8;
        *param_3 = local_10;
        return;
      }
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar3 < iVar4);
  }
  *param_3 = local_10;
  return;
}

