// entry: 8c089b1e
// name: FUN_8c089b1e
// signature: undefined FUN_8c089b1e(void)


undefined4 FUN_8c089b1e(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_2 + 8) == '\t') &&
      (uVar1 = (*(code *)PTR_FUN_8c089c7c)(), uVar1 == *(ushort *)(param_1 + 4))) &&
     (*(short *)(param_1 + DAT_8c089c76 + (uint)*(ushort *)(param_2 + 4) * 0x14) == 0)) {
    (*(code *)PTR_FUN_8c089c88)
              (*(undefined4 *)PTR_DAT_8c089c84,PTR_s____PanelHasReached__d_Complete__8c089c80,
               (uint)*(ushort *)(param_2 + 4));
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

