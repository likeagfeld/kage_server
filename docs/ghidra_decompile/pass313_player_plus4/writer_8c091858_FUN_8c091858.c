// entry: 8c091858
// name: FUN_8c091858


undefined4 FUN_8c091858(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 local_20;
  ushort local_1c;
  int local_18;
  uint local_10;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (((*(short *)(iVar4 + param_2 * 0x1e + 10) == 0) &&
      (*(short *)(iVar4 + DAT_8c0919a4 + param_2 * 0x1e + 10) == 0)) &&
     (*(short *)(iVar4 + DAT_8c0919a6 + param_2 * 0x1e + 10) == 0)) {
    uVar1 = *(undefined2 *)(*(int *)(DAT_8c0919a2 + param_1) + DAT_8c0919a0 * param_2 + 2);
    local_20._0_1_ = (byte)uVar1;
    local_20._1_1_ = (undefined1)((ushort)uVar1 >> 8);
    local_20 = CONCAT11(local_20._1_1_,
                        ((byte)local_20 & (byte)DAT_8c0919a8 | 0x10) & (byte)DAT_8c0919a4) | 8;
    iVar4 = (*(code *)PTR_FUN_8c0919b0)(param_1,&local_20,0);
    if (iVar4 == 0) {
      local_1c = (*(code *)PTR_FUN_8c0919b4)();
      local_18 = *(int *)(param_1 + 0x20);
      local_10 = (uint)local_1c;
      uVar2 = (*(code *)PTR_FUN_8c0919b4)();
      iVar4 = *(int *)(DAT_8c0919ac + param_1);
      if (((*(int *)(((uVar2 & 0xffff) + local_18 * local_10) * 4 + iVar4 + -4) == 0) &&
          (*(int *)(((uVar2 & 0xffff) + local_18 * (uint)local_1c) * 4 + iVar4 + 4) == 0)) &&
         ((*(int *)((local_18 * (local_1c - 1) + (uVar2 & 0xffff)) * 4 + iVar4) == 0 &&
          (*(int *)((local_18 * (local_1c + 1) + (uVar2 & 0xffff)) * 4 + iVar4) == 0)))) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

