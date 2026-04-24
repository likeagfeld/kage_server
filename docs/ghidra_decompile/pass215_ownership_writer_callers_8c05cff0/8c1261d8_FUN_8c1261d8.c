// entry: 8c1261d8
// name: FUN_8c1261d8
// signature: undefined FUN_8c1261d8(void)


void FUN_8c1261d8(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 local_1c [8];
  undefined8 uStack_14;
  
  puVar1 = PTR_FUN_8c12637c;
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_14);
    puVar10 = &uStack_14;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_14._0_4_ = (int)in_dr14;
  }
  else {
    puVar10 = (undefined8 *)local_1c;
    uStack_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar10 + -4) = in_PR;
  iVar4 = (int)DAT_8c12635e;
  (*(code *)PTR_FUN_8c126378)();
  uVar15 = 0x3f800000;
  (*(code *)PTR_FUN_8c126378)((int)DAT_8c126360);
  uVar7 = *(undefined4 *)(PTR_DAT_8c126384 + 4);
  puVar5 = (undefined4 *)((int)puVar10 + (int)DAT_8c126364 + iVar4 + -4);
  *puVar5 = *(undefined4 *)PTR_DAT_8c126384;
  puVar5[1] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c126384 + 0xc);
  puVar5[2] = *(undefined4 *)(PTR_DAT_8c126384 + 8);
  puVar5[3] = uVar7;
  uVar8 = *(undefined4 *)(PTR_DAT_8c126384 + 0x14);
  puVar5[4] = *(undefined4 *)(PTR_DAT_8c126384 + 0x10);
  uVar7 = *(undefined4 *)(PTR_DAT_8c126384 + 0x18);
  puVar5[5] = uVar8;
  uVar8 = *(undefined4 *)(PTR_DAT_8c126384 + 0x1c);
  puVar5[6] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c126384 + 0x20);
  puVar5[7] = uVar8;
  puVar5[8] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c126388 + 4);
  puVar5[10] = *(undefined4 *)(PTR_DAT_8c126384 + 0x28);
  puVar5[9] = param_2;
  puVar5 = (undefined4 *)((int)puVar10 + (int)DAT_8c126366 + iVar4 + -4);
  uVar14 = (ulonglong)uVar15;
  *puVar5 = *(undefined4 *)PTR_DAT_8c126388;
  puVar5[1] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c126388 + 0xc);
  puVar5[2] = *(undefined4 *)(PTR_DAT_8c126388 + 8);
  puVar5[3] = uVar7;
  uVar8 = *(undefined4 *)(PTR_DAT_8c126388 + 0x14);
  puVar5[4] = *(undefined4 *)(PTR_DAT_8c126388 + 0x10);
  uVar7 = *(undefined4 *)(PTR_DAT_8c126388 + 0x18);
  puVar5[5] = uVar8;
  uVar8 = *(undefined4 *)(PTR_DAT_8c126388 + 0x1c);
  puVar5[6] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c126388 + 0x20);
  puVar5[7] = uVar8;
  puVar5[8] = uVar7;
  puVar5[10] = *(undefined4 *)(PTR_DAT_8c126388 + 0x28);
  puVar5[9] = param_2;
  uVar7 = (*(code *)puVar1)(0,0xe,(undefined1 *)((int)puVar10 + iVar4 + -4),param_2);
  iVar3 = (int)DAT_8c126360;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  puVar2 = PTR_FUN_8c12638c;
  uVar7 = (*(code *)puVar1)(0,7,(undefined1 *)((int)puVar10 + iVar3 + iVar4 + -4),param_2);
  puVar1 = PTR_FUN_8c126390;
  iVar3 = (int)DAT_8c126364;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  uVar7 = (*(code *)puVar1)(0,(undefined1 *)((int)puVar10 + iVar3 + iVar4 + -4));
  puVar1 = PTR_FUN_8c126390;
  iVar3 = (int)DAT_8c126366;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  uVar7 = (*(code *)puVar1)(0,(undefined1 *)((int)puVar10 + iVar3 + iVar4 + -4));
  puVar1 = PTR_FUN_8c126394;
  *(undefined4 *)(param_1 + 0x38) = uVar7;
  uVar11 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)puVar1)(uVar11,*(undefined4 *)(param_1 + 0x2c),1,1,3);
  uVar11 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)PTR_FUN_8c126394)(uVar11,*(undefined4 *)(param_1 + 0x30),2,0x11,3);
  uVar11 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)PTR_FUN_8c126398)(uVar11,*(undefined4 *)(param_1 + 0x34),1,1,3);
  if (in_FPSCR_SZ == '\0') {
    in_xd14 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)PTR_FUN_8c126398)(in_xd14,*(undefined4 *)(param_1 + 0x38),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(*(undefined4 *)PTR_DAT_8c12639c,(int)(uVar14 >> 0x20));
  }
  else {
    uVar11 = *(undefined8 *)PTR_DAT_8c12639c;
  }
  (*(code *)PTR_FUN_8c1263a0)(uVar11,*(undefined4 *)(param_1 + 0x38),8,3);
  uVar7 = (undefined4)uVar11;
  (*(code *)PTR_FUN_8c1263a4)(*(undefined4 *)(param_1 + 0x38),8);
  uVar8 = (undefined4)(uVar14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar10 + (int)DAT_8c126368 + iVar4 + -4) = uVar8;
  }
  else {
    *(ulonglong *)((int)puVar10 + (int)DAT_8c126368 + iVar4 + -4) = uVar14;
  }
  puVar5 = (undefined4 *)((int)puVar10 + (int)DAT_8c126368 + iVar4 + -4);
  iVar3 = *(int *)(param_1 + 0x38);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar10 + (int)DAT_8c12636a + iVar4 + -4) = uVar8;
  }
  else {
    *(ulonglong *)((int)puVar10 + (int)DAT_8c12636a + iVar4 + -4) = uVar14;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar10 + (int)DAT_8c12636c + iVar4 + -4) = uVar8;
  }
  else {
    *(ulonglong *)((int)puVar10 + (int)DAT_8c12636c + iVar4 + -4) = uVar14;
  }
  puVar6 = (undefined4 *)(iVar3 + DAT_8c12636e);
  uVar9 = *puVar5;
  puVar6[1] = puVar5[1];
  uVar8 = puVar5[2];
  *puVar6 = uVar9;
  puVar6[2] = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44(DAT_8c1263a8,uVar7);
  }
  else {
    uVar12 = CONCAT44(PTR_FUN_8c1263ac,DAT_8c1263a8);
  }
  (*(code *)puVar2)(uVar12,*(undefined4 *)(param_1 + 0x30));
  uVar13 = uVar14;
  if (in_FPSCR_SZ == '\0') {
    uVar13 = uVar12 & 0xffffffff;
  }
  uVar15 = (uint)uVar13;
  (*(code *)PTR_FUN_8c1263ac)(uVar13,*(undefined4 *)(param_1 + 0x38));
  uVar12 = uVar14;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = (ulonglong)uVar15;
  }
  uVar15 = (uint)uVar12;
  (*(code *)puVar2)(uVar12,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x38));
  if (in_FPSCR_SZ == '\0') {
    uVar14 = (ulonglong)uVar15;
  }
  (*(code *)puVar2)(uVar14,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x38));
  FUN_8c126486(param_1,0);
  return;
}

