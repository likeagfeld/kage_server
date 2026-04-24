// entry: 8c05cff0
// name: FUN_8c05cff0
// signature: undefined FUN_8c05cff0(void)


int FUN_8c05cff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined8 *param_5)

{
  double *pdVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 in_dr14;
  undefined8 uVar17;
  undefined8 in_xd8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_10;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined8 *)((int)&local_10 + 4);
    local_10 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_10);
  }
  else {
    puVar11 = &local_10;
    local_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar11 + -4) = in_PR;
  *(int *)((int)puVar11 + -8) = param_4;
  if (param_4 == 0) {
    param_4 = (*(code *)PTR_FUN_8c05d18c)((int)DAT_8c05d180);
    *(int *)((int)puVar11 + -8) = param_4;
    if (param_4 == 0) {
      return 0;
    }
  }
  *(undefined **)(param_4 + 0x78) = PTR_DAT_8c05d184;
  puVar2 = PTR_FUN_8c05d188;
  *(undefined4 *)(DAT_8c05d16c + param_4) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)(param_5 + 5),param_1);
    uVar16 = CONCAT44(*(undefined4 *)(param_5 + 5),(int)in_dr14);
  }
  else {
    uVar17 = param_5[5];
    uVar16 = uVar17;
  }
  (*(code *)puVar2)(uVar17,param_4,param_5,0);
  iVar10 = *(int *)((int)puVar11 + -8);
  iVar4 = (int)DAT_8c05d170;
  *(undefined4 *)(DAT_8c05d16e + iVar10) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)((int)param_5 + 4),param_3);
  }
  else {
    uVar17 = *(undefined8 *)((int)param_5 + 4);
  }
  puVar6 = (undefined4 *)(iVar10 + iVar4);
  if (in_FPSCR_SZ == '\0') {
    uVar5 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar17 = CONCAT44(uVar5,*(undefined4 *)param_5);
    *(undefined4 *)((int)puVar11 + -0x1c) = uVar5;
  }
  else {
    in_xd8 = *param_5;
    *(undefined8 *)((int)puVar11 + -0x1c) = uVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar11 + -0x18) = (int)((ulonglong)uVar16 >> 0x20);
  }
  else {
    *(undefined8 *)((int)puVar11 + -0x18) = uVar16;
  }
  puVar6[1] = *(undefined4 *)((int)puVar11 + -0x1c);
  iVar4 = (int)DAT_8c05d172;
  puVar6[2] = *(undefined4 *)((int)puVar11 + -0x18);
  uVar5 = puVar6[1];
  puVar7 = (undefined4 *)(iVar10 + iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar11 + -0x20) = (int)uVar17;
  }
  else {
    *(undefined8 *)((int)puVar11 + -0x20) = in_xd8;
  }
  uVar8 = *(undefined4 *)((int)puVar11 + -0x20);
  puVar7[1] = uVar5;
  uVar5 = puVar6[2];
  *puVar6 = uVar8;
  *puVar7 = uVar8;
  puVar6 = (undefined4 *)((int)puVar11 + -0x14);
  puVar7[2] = uVar5;
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44(0x40000000,param_2);
  }
  else {
    dVar12 = (double)CONCAT44(0x3f800000,param_2) + (double)CONCAT44(0x3f800000,param_2);
  }
  if (in_FPSCR_SZ == '\0') {
    pdVar1 = (double *)(param_5 + 1);
  }
  else {
    in_xd8 = param_5[1];
    pdVar1 = (double *)((int)param_5 + 0xc);
  }
  dVar14 = *pdVar1;
  fVar13 = (float)((ulonglong)dVar12 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0) / fVar13);
  }
  else {
    dVar14 = dVar14 / dVar12;
  }
  puVar7 = (undefined4 *)(iVar10 + DAT_8c05d174);
  iVar4 = (int)DAT_8c05d176;
  if (in_FPSCR_PR == '\0') {
    dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) / fVar13,SUB84(dVar14,0));
  }
  else {
    dVar14 = dVar14 / dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar11 + -0x14) = SUB84(dVar14,0);
  }
  else {
    *(undefined8 *)((int)puVar11 + -0x14) = in_xd8;
  }
  *puVar7 = *puVar6;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar11 + -0x10) = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined4 *)((int)puVar11 + -0xc) = 0;
  }
  else {
    *(ulonglong *)((int)puVar11 + -0x10) = (ulonglong)dVar14 & 0xffffffff00000000;
    *(undefined8 *)((int)puVar11 + -0xc) = in_xd8;
  }
  iVar3 = (int)DAT_8c05d178;
  puVar7[1] = *(undefined4 *)((int)puVar11 + -0x10);
  uVar5 = *(undefined4 *)((int)puVar11 + -0xc);
  *(undefined4 *)(iVar3 + iVar10) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar11 + -0x14) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)puVar11 + -0x14) = 0x3f80000000000000;
  }
  puVar7[2] = uVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar11 + -0x10) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)puVar11 + -0x10) = 0x3f80000000000000;
  }
  puVar7 = (undefined4 *)(iVar10 + iVar4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar11 + -0xc) = 0x3f800000;
  }
  else {
    *(undefined8 *)((int)puVar11 + -0xc) = 0x3f80000000000000;
  }
  *puVar7 = *puVar6;
  uVar5 = *(undefined4 *)((int)puVar11 + -0x10);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar11 + -0x14) = 0;
  }
  else {
    *(undefined8 *)((int)puVar11 + -0x14) = in_xd8;
  }
  iVar4 = (int)DAT_8c05d17a;
  puVar7[2] = *(undefined4 *)((int)puVar11 + -0xc);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar11 + -0x10) = 0;
  }
  else {
    *(undefined8 *)((int)puVar11 + -0x10) = in_xd8;
  }
  uVar8 = *puVar6;
  puVar7[1] = uVar5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar11 + -0xc) = 0;
  }
  else {
    *(undefined8 *)((int)puVar11 + -0xc) = in_xd8;
  }
  puVar6 = (undefined4 *)(iVar10 + iVar4);
  uVar9 = *(undefined4 *)((int)puVar11 + -0x10);
  *puVar6 = uVar8;
  uVar5 = *(undefined4 *)((int)puVar11 + -0xc);
  puVar6[1] = uVar9;
  puVar6[2] = uVar5;
  if (in_FPSCR_SZ == '\0') {
    lVar15 = (ulonglong)*(uint *)(param_5 + 1) << 0x20;
  }
  else {
    lVar15 = param_5[1];
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c05d17c + iVar10) = (int)((ulonglong)lVar15 >> 0x20);
    uVar16 = CONCAT44(*(undefined4 *)((int)param_5 + 0xc),(int)lVar15);
  }
  else {
    *(longlong *)(DAT_8c05d17c + iVar10) = lVar15;
    uVar16 = *(undefined8 *)((int)param_5 + 0xc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c05d17e + iVar10) = (int)((ulonglong)uVar16 >> 0x20);
  }
  else {
    *(undefined8 *)(DAT_8c05d17e + iVar10) = uVar16;
  }
  iVar4 = *(int *)(DAT_8c05d16c + iVar10);
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x18) + 0x14))(iVar4 + *(int *)(*(int *)(iVar4 + 0x18) + 0xc),3);
    iVar10 = *(int *)((int)puVar11 + -8);
    *(undefined4 *)(DAT_8c05d16c + iVar10) = 0;
  }
  return iVar10;
}

