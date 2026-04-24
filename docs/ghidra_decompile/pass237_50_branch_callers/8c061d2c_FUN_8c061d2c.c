// entry: 8c061d2c
// name: FUN_8c061d2c
// signature: undefined FUN_8c061d2c(void)


void FUN_8c061d2c(double param_1,double param_2,byte *param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  puVar1 = PTR_FUN_8c061e28;
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),(undefined4)DAT_8c061e1c);
  }
  fVar3 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    param_1 = (double)CONCAT44((float)((ulonglong)param_1 >> 0x20) * fVar3,SUB84(param_1,0));
  }
  else {
    param_1 = param_1 * param_2;
  }
  dVar4 = (double)CONCAT44(DAT_8c061e1c._4_4_,fVar3);
  fVar2 = (float)((ulonglong)param_1 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar5 = fVar2 < DAT_8c061e1c._4_4_;
  }
  else {
    bVar5 = param_1 < dVar4;
  }
  if (!bVar5) {
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c061e1c._4_4_ + DAT_8c061e1c._4_4_,fVar3);
      param_1 = (double)CONCAT44(fVar2 - (DAT_8c061e1c._4_4_ + DAT_8c061e1c._4_4_),SUB84(param_1,0))
      ;
    }
    else {
      dVar4 = dVar4 + dVar4;
      param_1 = param_1 - dVar4;
    }
  }
  fVar3 = (float)((ulonglong)param_1 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    uVar6 = (uint)fVar3;
    param_1 = (double)CONCAT44(fVar3,SUB84(param_1,0) * SUB84(dVar4,0));
  }
  else {
    uVar6 = (uint)param_1;
    param_1 = param_1 * dVar4;
  }
  dVar4 = (double)CONCAT44(DAT_8c061e1c._4_4_,SUB84(dVar4,0));
  if (in_FPSCR_PR == '\0') {
    bVar5 = SUB84(param_1,0) < DAT_8c061e1c._4_4_;
  }
  else {
    bVar5 = param_1 < dVar4;
  }
  if (!bVar5) {
    if (in_FPSCR_PR == '\0') {
      param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                 SUB84(param_1,0) - (DAT_8c061e1c._4_4_ + DAT_8c061e1c._4_4_));
    }
    else {
      param_1 = param_1 - (dVar4 + dVar4);
    }
  }
  (*(code *)PTR_FUN_8c061e24)(param_1,0,2);
  (*(code *)puVar1)();
  (*(code *)PTR_FUN_8c061e24)();
  (*(code *)puVar1)();
  if (((uVar6 & 7) == 0) && ((uVar6 & 0xf) != 0)) {
    *param_3 = *param_3 & (byte)DAT_8c061e16 | 0x10;
    (*(code *)puVar1)();
  }
  else {
    *param_3 = *param_3 & (byte)DAT_8c061e16;
    (*(code *)puVar1)(uVar6 & 0xf);
  }
  return;
}

