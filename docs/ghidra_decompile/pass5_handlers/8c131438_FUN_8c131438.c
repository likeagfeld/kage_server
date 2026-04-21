// entry: 8c131438
// name: FUN_8c131438
// signature: undefined FUN_8c131438(void)


void FUN_8c131438(double param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 in_fr3;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined8 in_xd4;
  undefined8 in_xd8;
  undefined8 uVar11;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_14;
  float fStack_10;
  undefined4 uStack_c;
  
  if (param_5 < 0xb) {
    puVar4 = (undefined4 *)(*(int *)(param_4 + 0x5c) + (int)DAT_8c131566);
    puVar5 = (undefined4 *)(*(int *)(param_4 + 0x5c) + (int)DAT_8c131568);
    uVar6 = *puVar4;
    puVar5[1] = puVar4[1];
    uVar2 = puVar4[2];
    *puVar5 = uVar6;
    puVar5[2] = uVar2;
    uVar2 = SUB84(param_1,0);
    iVar3 = *(int *)(*(int *)(param_4 + 0x5c) + 0x78);
    if (in_FPSCR_SZ == '\0') {
      uVar2 = (undefined4)DAT_8c131570;
    }
    (**(code **)(iVar3 + 0x38))
              (CONCAT44(0x3f800000,uVar2),*(int *)(param_4 + 0x5c) + *(int *)(iVar3 + 0x30));
  }
  else {
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44((float)param_5,param_3);
    }
    else {
      dVar10 = (double)param_5;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44((undefined4)DAT_8c131570,in_fr3);
    }
    else {
      uVar7 = CONCAT44(DAT_8c131570._4_4_,(undefined4)DAT_8c131570);
    }
    uVar11 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),(int)((ulonglong)uVar7 >> 0x20));
      uVar11 = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(param_1,0) / (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar8 = SUB84(param_1 / dVar10,0);
    }
    puVar5 = (undefined4 *)(*(int *)(param_4 + 0x5c) + (int)DAT_8c131566);
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44((float)param_6,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)param_6;
    }
    puVar4 = (undefined4 *)(*(int *)(param_4 + 0x5c) + (int)DAT_8c131568);
    uVar6 = *puVar5;
    puVar4[1] = puVar5[1];
    uVar2 = puVar5[2];
    *puVar4 = uVar6;
    puVar4[2] = uVar2;
    iVar3 = *(int *)(param_4 + 0x5c);
    if (in_FPSCR_SZ == '\0') {
      local_14 = 0;
    }
    else {
      fStack_10 = 0.0;
      local_14 = param_2;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar8);
      uVar11 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar10 * dVar10,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(local_14,fVar9);
      uStack_c = 0;
      fStack_10 = fVar9;
    }
    else {
      dVar10 = (double)CONCAT44(fStack_10,local_14);
      fStack_10 = (float)uVar11;
      uStack_c = param_2;
    }
    iVar1 = (int)DAT_8c131568;
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),*(undefined4 *)(iVar1 + iVar3));
    }
    else {
      uVar11 = *(undefined8 *)(iVar1 + iVar3);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar10 + dVar10,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(iVar1 + iVar3) = fVar9;
    }
    else {
      *(undefined8 *)(iVar1 + iVar3) = uVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(DAT_8c13156a + iVar3),fStack_10);
    }
    else {
      dVar10 = *(double *)(DAT_8c13156a + iVar3);
    }
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0),SUB84(dVar10,0)
                               );
    }
    else {
      dVar10 = dVar10 + dVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c13156a + iVar3) = (int)((ulonglong)dVar10 >> 0x20);
    }
    else {
      *(double *)(DAT_8c13156a + iVar3) = dVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(DAT_8c13156c + iVar3),uStack_c);
    }
    else {
      dVar10 = *(double *)(DAT_8c13156c + iVar3);
    }
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0),SUB84(dVar10,0)
                               );
    }
    else {
      dVar10 = dVar10 + dVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c13156c + iVar3) = (int)((ulonglong)dVar10 >> 0x20);
    }
    else {
      *(double *)(DAT_8c13156c + iVar3) = dVar10;
    }
    iVar3 = *(int *)(*(int *)(param_4 + 0x5c) + 0x78);
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(DAT_8c131570._4_4_,(int)uVar7);
    }
    else {
      dVar10 = (double)CONCAT44(DAT_8c131578,DAT_8c131570._4_4_);
    }
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44(0x3f800000,fVar8 * (float)((ulonglong)dVar10 >> 0x20));
    }
    else {
      dVar10 = (double)CONCAT44(0x3f800000,fVar8) * dVar10;
    }
    (**(code **)(iVar3 + 0x38))(dVar10,*(int *)(param_4 + 0x5c) + *(int *)(iVar3 + 0x30));
  }
  return;
}

