// entry: 8c1247ba
// name: FUN_8c1247ba
// signature: undefined FUN_8c1247ba(void)


void FUN_8c1247ba(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 in_dr14;
  ulonglong uVar20;
  ulonglong in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  
  puVar1 = PTR_FUN_8c124980;
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_20);
    puVar15 = &uStack_20;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_20._0_4_ = (int)in_dr14;
  }
  else {
    puVar15 = (undefined8 *)local_28;
    uStack_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  iVar8 = (int)DAT_8c12495c;
  iVar14 = (int)DAT_8c124960;
  (*(code *)PTR_FUN_8c124980)((undefined1 *)((int)puVar15 + iVar8 + -4));
  iVar12 = (int)DAT_8c124964;
  (*(code *)puVar1)((undefined1 *)((int)puVar15 + (int)DAT_8c12495e + iVar8 + -4));
  puVar9 = (undefined4 *)((int)puVar15 + iVar14 + iVar8 + -4);
  iVar13 = (int)DAT_8c124966;
  uVar6 = *(undefined4 *)(PTR_DAT_8c124988 + 4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c124988;
  puVar9[1] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c124988 + 0xc);
  puVar9[2] = *(undefined4 *)(PTR_DAT_8c124988 + 8);
  puVar9[3] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c124988 + 0x14);
  puVar9[4] = *(undefined4 *)(PTR_DAT_8c124988 + 0x10);
  puVar9[5] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c124988 + 0x1c);
  puVar9[6] = *(undefined4 *)(PTR_DAT_8c124988 + 0x18);
  puVar9[7] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c124988 + 0x24);
  puVar9[8] = *(undefined4 *)(PTR_DAT_8c124988 + 0x20);
  puVar9[9] = uVar6;
  puVar9[10] = *(undefined4 *)(PTR_DAT_8c124988 + 0x28);
  puVar9 = (undefined4 *)((int)puVar15 + iVar12 + iVar8 + -4);
  uVar11 = *(undefined4 *)(PTR_DAT_8c12498c + 4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c12498c;
  uVar6 = *(undefined4 *)(PTR_DAT_8c12498c + 8);
  puVar9[1] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c12498c + 0xc);
  puVar9[2] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c12498c + 0x10);
  puVar9[3] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c12498c + 0x14);
  puVar9[4] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c12498c + 0x18);
  puVar9[5] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c12498c + 0x1c);
  puVar9[6] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c12498c + 0x20);
  puVar9[7] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c12498c + 0x24);
  puVar9[8] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c12498c + 0x28);
  puVar9[9] = uVar11;
  puVar9[10] = uVar6;
  puVar9 = (undefined4 *)((int)puVar15 + iVar13 + iVar8 + -4);
  uVar6 = *(undefined4 *)(PTR_DAT_8c124990 + 4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c124990;
  puVar9[1] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c124990 + 0xc);
  puVar9[2] = *(undefined4 *)(PTR_DAT_8c124990 + 8);
  puVar9[3] = uVar6;
  uVar11 = *(undefined4 *)(PTR_DAT_8c124990 + 0x14);
  puVar9[4] = *(undefined4 *)(PTR_DAT_8c124990 + 0x10);
  uVar6 = *(undefined4 *)(PTR_DAT_8c124990 + 0x18);
  puVar9[5] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c124990 + 0x1c);
  puVar9[6] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c124990 + 0x20);
  puVar9[7] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c124990 + 0x24);
  puVar9[8] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c124990 + 0x28);
  puVar9[9] = uVar11;
  puVar9[10] = uVar6;
  uVar20 = 0x3f800000;
  (*(code *)puVar1)((int)DAT_8c12496a,(undefined1 *)((int)puVar15 + (int)DAT_8c124968 + iVar8 + -4))
  ;
  (*(code *)puVar1)((int)DAT_8c12496e,(int)DAT_8c12496c);
  (*(code *)puVar1)((int)DAT_8c12496e,(int)DAT_8c124970);
  (*(code *)puVar1)((int)DAT_8c12496e,(int)DAT_8c124972);
  (*(code *)puVar1)((int)DAT_8c12496e,(int)DAT_8c124974);
  (*(code *)puVar1)((undefined1 *)((int)puVar15 + (int)DAT_8c124976 + iVar8 + -4));
  (*(code *)puVar1)((int)DAT_8c12496a,(int)DAT_8c124978);
  puVar1 = PTR_FUN_8c1249b4;
  uVar6 = *(undefined4 *)(PTR_DAT_8c1249b0 + 4);
  puVar9 = (undefined4 *)((int)puVar15 + (int)DAT_8c12497a + iVar8 + -4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c1249b0;
  puVar9[1] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c1249b0 + 0xc);
  puVar9[2] = *(undefined4 *)(PTR_DAT_8c1249b0 + 8);
  puVar9[3] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c1249b0 + 0x14);
  puVar9[4] = *(undefined4 *)(PTR_DAT_8c1249b0 + 0x10);
  puVar9[5] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c1249b0 + 0x1c);
  puVar9[6] = *(undefined4 *)(PTR_DAT_8c1249b0 + 0x18);
  puVar9[7] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c1249b0 + 0x28);
  puVar9[8] = *(undefined4 *)(PTR_DAT_8c1249b0 + 0x20);
  puVar9[10] = uVar6;
  puVar9[9] = param_2;
  *(undefined4 *)((int)puVar15 + iVar14 + iVar8 + 0x20) = param_2;
  *(undefined4 *)((int)puVar15 + iVar12 + iVar8 + 0x20) = param_2;
  *(undefined4 *)((int)puVar15 + iVar13 + iVar8 + 0x20) = param_2;
  uVar6 = (*(code *)PTR_FUN_8c1249b4)(0,0x15,(undefined1 *)((int)puVar15 + iVar8 + -4),param_2);
  iVar7 = (int)DAT_8c12495e;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  uVar6 = (*(code *)puVar1)(0,9,(undefined1 *)((int)puVar15 + iVar7 + iVar8 + -4),param_2);
  puVar2 = PTR_FUN_8c1249b8;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  uVar6 = (*(code *)puVar2)(0,(undefined1 *)((int)puVar15 + iVar14 + iVar8 + -4));
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  puVar3 = PTR_DAT_8c124b70;
  uVar6 = (*(code *)puVar2)(0,(undefined1 *)((int)puVar15 + iVar12 + iVar8 + -4));
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  puVar4 = PTR_FUN_8c124b74;
  uVar6 = (*(code *)puVar2)(0,(undefined1 *)((int)puVar15 + iVar13 + iVar8 + -4));
  iVar7 = (int)DAT_8c124b60;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  uVar6 = (*(code *)puVar1)(0,3,(undefined1 *)((int)puVar15 + iVar7 + iVar8 + -4),param_2);
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  uVar6 = (*(code *)puVar1)(0,4,(undefined1 *)((int)puVar15 + (int)DAT_8c124b62 + iVar8 + -4),
                            param_2);
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  uVar6 = (*(code *)puVar1)(0,4,(undefined1 *)((int)puVar15 + (int)DAT_8c124b64 + iVar8 + -4),
                            param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  uVar6 = (*(code *)puVar1)(0,4,(undefined1 *)((int)puVar15 + (int)DAT_8c124b66 + iVar8 + -4),
                            param_2);
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  uVar6 = (*(code *)puVar1)(0,4,(undefined1 *)((int)puVar15 + (int)DAT_8c124b68 + iVar8 + -4),
                            param_2);
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  uVar6 = (*(code *)puVar1)(0,4,(undefined1 *)((int)puVar15 + (int)DAT_8c124b6a + iVar8 + -4),
                            param_2);
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  puVar5 = PTR_FUN_8c124b78;
  uVar6 = (*(code *)puVar1)(0,3,(undefined1 *)((int)puVar15 + (int)DAT_8c124b6c + iVar8 + -4),
                            param_2);
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  puVar1 = PTR_FUN_8c124b7c;
  uVar6 = (*(code *)puVar2)(0,(undefined1 *)((int)puVar15 + (int)DAT_8c124b6e + iVar8 + -4));
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)uVar20,(int)(uVar20 >> 0x20));
  }
  (*(code *)puVar5)(uVar18,*(undefined4 *)(param_1 + 0x2c),1,1,3);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)uVar20,(int)(uVar20 >> 0x20));
  }
  (*(code *)puVar5)(uVar18,*(undefined4 *)(param_1 + 0x30),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)puVar3,(int)(uVar20 >> 0x20));
  }
  else {
    uVar17 = *(undefined8 *)puVar3;
  }
  (*(code *)puVar4)(uVar17,*(undefined4 *)(param_1 + 0x30),8,3);
  puVar2 = PTR_FUN_8c124b80;
  (*(code *)PTR_FUN_8c124b80)(*(undefined4 *)(param_1 + 0x30),8);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)uVar20,(int)(uVar20 >> 0x20));
  }
  (*(code *)puVar1)(uVar18,*(undefined4 *)(param_1 + 0x34),2,1,3);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)uVar20,(int)(uVar20 >> 0x20));
  }
  (*(code *)puVar1)(uVar18,*(undefined4 *)(param_1 + 0x38),1,1,3);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((int)uVar20,(int)(uVar20 >> 0x20));
  }
  (*(code *)puVar1)(uVar18,*(undefined4 *)(param_1 + 0x3c),1,0x10,3);
  uVar19 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = uVar18 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar19 = uVar20 >> 0x20;
  }
  uVar6 = (undefined4)uVar19;
  (*(code *)puVar5)(uVar19,*(undefined4 *)(param_1 + 0x40),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)puVar3,uVar6);
  }
  else {
    uVar17 = *(undefined8 *)puVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44((int)((ulonglong)uVar17 >> 0x20),(int)(uVar20 >> 0x20));
  }
  (*(code *)puVar4)(uVar17,*(undefined4 *)(param_1 + 0x40),8,3);
  uVar16 = (uint)uVar17;
  (*(code *)puVar2)(*(undefined4 *)(param_1 + 0x40),8);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = uVar20 >> 0x20;
  }
  uVar16 = (uint)uVar18;
  (*(code *)puVar5)(uVar18,*(undefined4 *)(param_1 + 0x44),1,1,3);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = uVar20 >> 0x20;
  }
  uVar16 = (uint)uVar18;
  (*(code *)puVar5)(uVar18,*(undefined4 *)(param_1 + 0x48),1,1,3);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = uVar20 >> 0x20;
  }
  uVar16 = (uint)uVar18;
  (*(code *)puVar5)(uVar18,*(undefined4 *)(param_1 + 0x4c),1,1,3);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = uVar20 >> 0x20;
  }
  uVar16 = (uint)uVar18;
  (*(code *)puVar5)(uVar18,*(undefined4 *)(param_1 + 0x50),1,1,3);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = uVar20 >> 0x20;
  }
  uVar16 = (uint)uVar18;
  (*(code *)puVar5)(uVar18,*(undefined4 *)(param_1 + 0x54),1,1,3);
  uVar18 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = uVar20 >> 0x20;
  }
  uVar6 = (undefined4)uVar18;
  (*(code *)puVar5)(uVar18,*(undefined4 *)(param_1 + 0x58),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)puVar3,uVar6);
  }
  else {
    uVar17 = *(undefined8 *)puVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44((int)((ulonglong)uVar17 >> 0x20),(int)(uVar20 >> 0x20));
  }
  (*(code *)puVar4)(uVar17,*(undefined4 *)(param_1 + 0x58),8,3);
  puVar3 = PTR_FUN_8c124cf0;
  uVar16 = (uint)uVar17;
  (*(code *)puVar2)(*(undefined4 *)(param_1 + 0x58),8);
  if (in_FPSCR_SZ == '\0') {
    in_xd14 = (ulonglong)uVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd14 = uVar20 >> 0x20;
  }
  uVar16 = (uint)in_xd14;
  (*(code *)puVar1)(in_xd14,*(undefined4 *)(param_1 + 0x5c),1,0x10,3);
  (*(code *)puVar3)(*(undefined4 *)(param_1 + 0x30),0xffffffff);
  (*(code *)puVar3)(*(undefined4 *)(param_1 + 0x40),(int)DAT_8c124ce0);
  (*(code *)puVar3)(*(undefined4 *)(param_1 + 0x58),0xffffffff);
  puVar1 = PTR_FUN_8c124cf4;
  uVar18 = uVar20;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  uVar16 = (uint)uVar18;
  (*(code *)PTR_FUN_8c124cf4)(uVar18,*(undefined4 *)(param_1 + 0x30));
  uVar18 = uVar20;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  uVar16 = (uint)uVar18;
  (*(code *)PTR_FUN_8c124cf8)(uVar18,*(undefined4 *)(param_1 + 0x3c));
  uVar18 = uVar20;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  uVar16 = (uint)uVar18;
  (*(code *)puVar1)(uVar18,*(undefined4 *)(param_1 + 0x40));
  uVar18 = uVar20;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  uVar16 = (uint)uVar18;
  (*(code *)puVar1)(uVar18,*(undefined4 *)(param_1 + 0x58));
  uVar18 = uVar20;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = (ulonglong)uVar16;
  }
  (*(code *)PTR_FUN_8c124cf8)(uVar18,*(undefined4 *)(param_1 + 0x5c));
  uVar6 = (undefined4)(uVar20 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c124ce2 + iVar8 + -4) = uVar6;
  }
  else {
    *(ulonglong *)((int)puVar15 + (int)DAT_8c124ce2 + iVar8 + -4) = uVar20;
  }
  puVar9 = (undefined4 *)((int)puVar15 + (int)DAT_8c124ce2 + iVar8 + -4);
  iVar7 = *(int *)(param_1 + 0x3c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c124ce4 + iVar8 + -4) = uVar6;
  }
  else {
    *(ulonglong *)((int)puVar15 + (int)DAT_8c124ce4 + iVar8 + -4) = uVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c124ce6 + iVar8 + -4) = uVar6;
  }
  else {
    *(ulonglong *)((int)puVar15 + (int)DAT_8c124ce6 + iVar8 + -4) = uVar20;
  }
  puVar10 = (undefined4 *)(iVar7 + DAT_8c124ce8);
  uVar11 = puVar9[1];
  *puVar10 = *puVar9;
  uVar6 = puVar9[2];
  puVar10[1] = uVar11;
  puVar10[2] = uVar6;
  FUN_8c124c2a(param_1,0);
  return;
}

