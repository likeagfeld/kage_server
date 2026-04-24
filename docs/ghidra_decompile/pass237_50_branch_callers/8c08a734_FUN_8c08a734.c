// entry: 8c08a734
// name: FUN_8c08a734
// signature: undefined FUN_8c08a734(void)


/* WARNING: Removing unreachable block (ram,0x8c08a74c) */
/* WARNING: Removing unreachable block (ram,0x8c08a766) */

void FUN_8c08a734(double param_1,undefined8 param_2,undefined8 param_3,int param_4,byte *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double in_xd8;
  bool bVar12;
  undefined4 in_PR;
  int iVar13;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_24;
  undefined4 uStackY_20;
  undefined4 local_1c;
  undefined4 uStackY_18;
  undefined4 local_14;
  
  puVar1 = PTR_FUN_8c08a890;
  iVar2 = *(int *)(param_4 + 0x20);
  dVar8 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
  if (in_FPSCR_PR == '\0') {
    uVar6 = 0x40000000;
  }
  else {
    uVar6 = SUB84(dVar8 + dVar8,0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44(0xbf800000,uVar6);
  }
  else {
    dVar8 = -(double)CONCAT44(0x3f800000,uVar6);
  }
  iVar3 = *(int *)(param_4 + 0x24);
  fVar7 = SUB84(dVar8,0);
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)iVar2 / fVar7;
  }
  else {
    fVar9 = SUB84((double)CONCAT44((int)((ulonglong)param_3 >> 0x20),(float)iVar2) / dVar8,0);
  }
  dVar11 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(fVar9,fVar9);
  }
  fVar9 = (float)((ulonglong)dVar8 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44(-((float)((ulonglong)dVar11 >> 0x20) + fVar9),SUB84(dVar11,0));
  }
  else {
    dVar11 = -(dVar11 + dVar8);
  }
  uVar6 = (undefined4)((ulonglong)dVar11 >> 0x20);
  uStackY_20 = SUB84(in_xd8,0);
  uStackY_18 = uStackY_20;
  local_24 = SUB84(dVar11,0);
  if (in_FPSCR_SZ == '\0') {
    local_24 = uVar6;
    uStackY_20 = SUB84(dVar11,0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = (float)iVar3 / fVar7;
  }
  else {
    fVar10 = SUB84((double)CONCAT44(uVar6,(float)iVar3) / dVar8,0);
  }
  dVar11 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(fVar10,fVar10);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44(-((float)((ulonglong)dVar11 >> 0x20) + fVar9),SUB84(dVar11,0));
  }
  else {
    dVar8 = -(dVar11 + dVar8);
  }
  uVar6 = SUB84(dVar8,0);
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(local_24,uVar6);
    local_1c = (int)((ulonglong)dVar8 >> 0x20);
    uStackY_18 = uVar6;
    local_14 = in_PR;
  }
  else {
    local_14 = (undefined4)((ulonglong)in_xd8 >> 0x20);
    dVar11 = (double)CONCAT44(uStackY_20,local_24);
    local_1c = uVar6;
  }
  if (in_FPSCR_PR == '\0') {
    bVar12 = (float)((ulonglong)param_1 >> 0x20) < (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    bVar12 = param_1 < dVar11;
  }
  if (bVar12) {
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)CONCAT44(local_24,SUB84(param_1,0));
    }
    else {
      param_1 = (double)CONCAT44(uStackY_20,local_24);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(uStackY_20,SUB84(dVar11,0));
  }
  else {
    dVar8 = (double)CONCAT44(local_1c,uStackY_20);
  }
  if (in_FPSCR_PR == '\0') {
    bVar12 = (float)((ulonglong)dVar8 >> 0x20) < (float)((ulonglong)param_1 >> 0x20);
  }
  else {
    bVar12 = dVar8 < param_1;
  }
  if (bVar12) {
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)CONCAT44(uStackY_20,SUB84(param_1,0));
    }
    else {
      param_1 = (double)CONCAT44(local_1c,uStackY_20);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(local_1c,SUB84(dVar8,0));
  }
  else {
    dVar8 = (double)CONCAT44(uStackY_18,local_1c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar12 = SUB84(param_1,0) < (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    bVar12 = param_1 < dVar8;
  }
  if ((bVar12) && (in_FPSCR_SZ == '\0')) {
    param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),local_1c);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(uStackY_18,SUB84(dVar8,0));
  }
  else {
    dVar8 = (double)CONCAT44(local_14,uStackY_18);
  }
  if (in_FPSCR_PR == '\0') {
    bVar12 = (float)((ulonglong)dVar8 >> 0x20) < SUB84(param_1,0);
  }
  else {
    bVar12 = dVar8 < param_1;
  }
  if ((bVar12) && (in_FPSCR_SZ == '\0')) {
    param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),uStackY_18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c08a884,fVar7);
  }
  else {
    dVar8 = (double)CONCAT44(DAT_8c08a888,DAT_8c08a884);
  }
  fVar7 = (float)((ulonglong)dVar8 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    param_1 = (double)CONCAT44((float)((ulonglong)param_1 >> 0x20) * fVar7,SUB84(param_1,0));
  }
  else {
    param_1 = param_1 * dVar8;
  }
  fVar9 = (float)((ulonglong)param_1 >> 0x20);
  dVar11 = (double)CONCAT44(fVar9,DAT_8c08a888);
  if (in_FPSCR_PR == '\0') {
    bVar12 = fVar9 < DAT_8c08a888;
  }
  else {
    bVar12 = param_1 < dVar11;
  }
  if (!bVar12) {
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44(fVar9 - (DAT_8c08a888 + DAT_8c08a888),DAT_8c08a888 + DAT_8c08a888);
    }
    else {
      dVar11 = (dVar11 + dVar11) - (dVar11 + dVar11);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar13 = (int)(float)((ulonglong)dVar11 >> 0x20);
    param_1 = (double)CONCAT44(fVar9,SUB84(param_1,0) * fVar7);
  }
  else {
    iVar13 = (int)dVar11;
    param_1 = param_1 * dVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)((ulonglong)param_1 & 0xffffffff);
  }
  dVar8 = (double)CONCAT44(DAT_8c08a888,SUB84(dVar11,0));
  uVar4 = ((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) * 0x10 + iVar13;
  if (in_FPSCR_PR == '\0') {
    bVar12 = SUB84(param_1,0) < DAT_8c08a888;
  }
  else {
    bVar12 = param_1 < dVar8;
  }
  if (!bVar12) {
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c08a888 + DAT_8c08a888,
                               SUB84(dVar11,0) - (DAT_8c08a888 + DAT_8c08a888));
    }
    else {
      dVar8 = (dVar8 + dVar8) - (dVar8 + dVar8);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar13 = (int)SUB84(dVar8,0);
  }
  else {
    iVar13 = (int)dVar8;
  }
  uVar5 = ((int)(iVar3 + (uint)(iVar3 < 0)) >> 1) * 0x10 + iVar13;
  if ((uint)(iVar2 * 0x10) < uVar4) {
    do {
      uVar4 = uVar4 + iVar2 * -0x10;
    } while ((uint)(iVar2 * 0x10) < uVar4);
  }
  if ((uint)(iVar3 << 4) < uVar5) {
    do {
      uVar5 = uVar5 + iVar2 * -0x10;
    } while ((uint)(iVar3 << 4) < uVar5);
  }
  (*(code *)PTR_FUN_8c08a88c)(&DAT_8c28561c);
  (*(code *)puVar1)();
  (*(code *)PTR_FUN_8c08a88c)();
  (*(code *)puVar1)();
  if ((uVar4 & 7) != 0) {
    if (((uVar5 & 7) == 0) || (uVar5 <= uVar4)) goto LAB_8c08a85a;
    uVar4 = 8;
  }
  if ((uVar4 & 0xf) != 0) {
    *param_5 = *param_5 & (byte)DAT_8c08a988 | 0x10;
    (*(code *)puVar1)();
    return;
  }
LAB_8c08a85a:
  *param_5 = *param_5 & (byte)DAT_8c08a880;
  (*(code *)puVar1)(0xf);
  return;
}

