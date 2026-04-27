// PTR slot:    0x8c07fdbc
// resolved to: 8c089b1e
// containing:  FUN_8c089b1e @ 8c089b1e (size 102)
// signature: undefined FUN_8c089b1e(void)
// direct callers (refs to entry):
//   8c07fc40@FUN_8c07f510/8c07f510
// callers via ptr slot:
//   8c07fc3e@FUN_8c07f510/8c07f510


undefined4 FUN_8c089b1e(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_2 + 8) == '\t') &&
      (uVar1 = (*(code *)PTR___bfxbu_8c089c7c)(), uVar1 == *(ushort *)(param_1 + 4))) &&
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

