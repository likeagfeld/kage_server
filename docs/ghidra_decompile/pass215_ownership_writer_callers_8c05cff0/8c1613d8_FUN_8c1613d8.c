// entry: 8c1613d8
// name: FUN_8c1613d8
// signature: undefined FUN_8c1613d8(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c1613d8(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined8 in_dr14;
  undefined *puVar23;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar24;
  undefined8 in_xd8;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  
  puVar1 = PTR_FUN_8c16159c;
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_20);
    puVar15 = &uStack_20;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_20._0_4_ = (int)in_dr14;
  }
  else {
    puVar15 = (undefined8 *)auStack_28;
    uStack_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  iVar7 = (int)DAT_8c161576;
  puVar23 = PTR_DAT_8c161598;
  puVar18 = DAT_8c161594;
  if (in_FPSCR_SZ == '\0') {
    puVar23 = DAT_8c161594;
    puVar18 = param_3;
  }
  (*(code *)PTR_FUN_8c16159c)();
  iVar12 = (int)DAT_8c16157c;
  (*(code *)puVar1)((int)DAT_8c161578);
  puVar2 = PTR_FUN_8c1615ac;
  puVar9 = (undefined4 *)((int)puVar15 + iVar12 + iVar7 + -4);
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615a4 + 4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c1615a4;
  puVar9[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615a4 + 0xc);
  puVar9[2] = *(undefined4 *)(PTR_DAT_8c1615a4 + 8);
  puVar9[3] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615a4 + 0x14);
  puVar9[4] = *(undefined4 *)(PTR_DAT_8c1615a4 + 0x10);
  puVar9[5] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615a4 + 0x1c);
  puVar9[6] = *(undefined4 *)(PTR_DAT_8c1615a4 + 0x18);
  puVar9[7] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615a4 + 0x24);
  puVar9[8] = *(undefined4 *)(PTR_DAT_8c1615a4 + 0x20);
  puVar9[9] = uVar10;
  puVar9[10] = *(undefined4 *)(PTR_DAT_8c1615a4 + 0x28);
  (*(code *)puVar1)((int)DAT_8c161580);
  puVar1 = PTR_FUN_8c1615b4;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615b0 + 4);
  puVar9 = (undefined4 *)((int)puVar15 + (int)DAT_8c161582 + iVar7 + -4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c1615b0;
  puVar9[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615b0 + 0xc);
  puVar9[2] = *(undefined4 *)(PTR_DAT_8c1615b0 + 8);
  puVar9[3] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615b0 + 0x14);
  puVar9[4] = *(undefined4 *)(PTR_DAT_8c1615b0 + 0x10);
  puVar9[5] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615b0 + 0x1c);
  puVar9[6] = *(undefined4 *)(PTR_DAT_8c1615b0 + 0x18);
  puVar9[7] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1615b0 + 0x28);
  puVar9[8] = *(undefined4 *)(PTR_DAT_8c1615b0 + 0x20);
  puVar9[10] = uVar10;
  puVar9[9] = param_5;
  *(undefined4 *)((int)puVar15 + iVar12 + iVar7 + 0x20) = param_5;
  uVar10 = (*(code *)PTR_FUN_8c1615b4)(0,9,(undefined1 *)((int)puVar15 + iVar7 + -4),param_5);
  iVar4 = (int)DAT_8c161578;
  *(undefined4 *)(param_4 + 0x2c) = uVar10;
  lVar21 = ZEXT48(puVar23) << 0x20;
  uVar10 = (*(code *)puVar1)(0,6,(undefined1 *)((int)puVar15 + iVar4 + iVar7 + -4),param_5);
  puVar23 = PTR_FUN_8c1615b8;
  *(undefined4 *)(param_4 + 0x30) = uVar10;
  uVar10 = (*(code *)puVar23)(0,(undefined1 *)((int)puVar15 + iVar12 + iVar7 + -4));
  iVar4 = (int)DAT_8c161580;
  *(undefined4 *)(param_4 + 0x34) = uVar10;
  iVar12 = (int)DAT_8c161584;
  uVar10 = (*(code *)puVar1)(0,4,(undefined1 *)((int)puVar15 + iVar4 + iVar7 + -4),param_5);
  iVar4 = (int)DAT_8c161582;
  *(undefined4 *)(param_4 + 0x38) = uVar10;
  uVar10 = (*(code *)puVar23)(0,(undefined1 *)((int)puVar15 + iVar4 + iVar7 + -4));
  *(undefined4 *)(param_4 + 0x3c) = uVar10;
  iVar14 = 4;
  iVar13 = (int)DAT_8c161586;
  iVar4 = 0;
  do {
    iVar3 = (*(code *)puVar2)(*(undefined4 *)(param_4 + 0x38),iVar4);
    uVar10 = (undefined4)param_1;
    puVar9 = (undefined4 *)((int)puVar15 + iVar13 + iVar7 + -4);
    uVar6 = (undefined4)((ulonglong)lVar21 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + (int)DAT_8c161586 + iVar7 + -4) = uVar6;
    }
    else {
      *(longlong *)((int)puVar15 + (int)DAT_8c161586 + iVar7 + -4) = lVar21;
    }
    puVar8 = (undefined4 *)(iVar3 + iVar12);
    iVar14 = iVar14 + -1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + (int)DAT_8c161588 + iVar7 + -4) = uVar6;
    }
    else {
      *(longlong *)((int)puVar15 + (int)DAT_8c161588 + iVar7 + -4) = lVar21;
    }
    uVar20 = (undefined4)lVar21;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + (int)DAT_8c16158a + iVar7 + -4) = uVar20;
    }
    else {
      *(undefined8 *)((int)puVar15 + (int)DAT_8c16158a + iVar7 + -4) = in_xd14;
    }
    uVar11 = puVar9[1];
    *puVar8 = *puVar9;
    uVar5 = puVar9[2];
    puVar8[1] = uVar11;
    puVar8[2] = uVar5;
    puVar1 = PTR_FUN_8c1615bc;
    iVar4 = iVar4 + 1;
  } while (iVar14 != 0);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c16158c + iVar7 + -4) = uVar6;
  }
  else {
    *(longlong *)((int)puVar15 + (int)DAT_8c16158c + iVar7 + -4) = lVar21;
  }
  puVar9 = (undefined4 *)((int)puVar15 + (int)DAT_8c16158c + iVar7 + -4);
  iVar4 = *(int *)(param_4 + 0x3c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c16158e + iVar7 + -4) = uVar6;
  }
  else {
    *(longlong *)((int)puVar15 + (int)DAT_8c16158e + iVar7 + -4) = lVar21;
  }
  puVar8 = (undefined4 *)(iVar4 + iVar12);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c161590 + iVar7 + -4) = uVar20;
  }
  else {
    *(undefined8 *)((int)puVar15 + (int)DAT_8c161590 + iVar7 + -4) = in_xd14;
  }
  uVar5 = *puVar9;
  puVar8[1] = puVar9[1];
  uVar6 = puVar9[2];
  *puVar8 = uVar5;
  puVar8[2] = uVar6;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = uVar20;
  }
  uVar22 = CONCAT44(0x3f800000,uVar20);
  uVar16 = uVar22;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(0x3f800000,uVar10);
  }
  (*(code *)puVar1)(uVar16,*(undefined4 *)(param_4 + 0x2c),1,0x10,3);
  (*(code *)puVar1)(uVar22,*(undefined4 *)(param_4 + 0x30),1,0x10,3);
  (*(code *)PTR_FUN_8c1615c0)(uVar22,*(undefined4 *)(param_4 + 0x34),1,0x10,3);
  (*(code *)puVar1)(uVar22,*(undefined4 *)(param_4 + 0x38),1,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(*(undefined4 *)PTR_DAT_8c1615c4,(int)uVar22);
  }
  else {
    uVar16 = *(ulonglong *)PTR_DAT_8c1615c4;
  }
  (*(code *)PTR_FUN_8c1615c0)(uVar16,*(undefined4 *)(param_4 + 0x3c),1,8,3);
  puVar9 = (undefined4 *)((int)puVar15 + (int)DAT_8c16172c + iVar7 + -4);
  uVar10 = *(undefined4 *)(PTR_DAT_8c161744 + 4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c161744;
  puVar9[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c161744 + 0xc);
  puVar9[2] = *(undefined4 *)(PTR_DAT_8c161744 + 8);
  puVar9[3] = uVar10;
  puVar9 = (undefined4 *)((int)puVar15 + (int)DAT_8c16172e + iVar7 + -4);
  uVar10 = *(undefined4 *)(PTR_DAT_8c161748 + 4);
  *puVar9 = *(undefined4 *)PTR_DAT_8c161748;
  puVar9[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c161748 + 0xc);
  puVar9[2] = *(undefined4 *)(PTR_DAT_8c161748 + 8);
  puVar9[3] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c161748 + 0x14);
  puVar9[4] = *(undefined4 *)(PTR_DAT_8c161748 + 0x10);
  puVar9[5] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c161748 + 0x1c);
  puVar9[6] = *(undefined4 *)(PTR_DAT_8c161748 + 0x18);
  puVar9[7] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c161748 + 0x24);
  puVar9[8] = *(undefined4 *)(PTR_DAT_8c161748 + 0x20);
  puVar9[9] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c161748 + 0x2c);
  puVar9[10] = *(undefined4 *)(PTR_DAT_8c161748 + 0x28);
  puVar9[0xb] = uVar10;
  puVar9[0xc] = *(undefined4 *)(PTR_DAT_8c161748 + 0x30);
  (*(code *)PTR_FUN_8c161750)((int)DAT_8c161730);
  iVar12 = *(int *)((int)puVar15 + DAT_8c16172c + iVar7 + 4);
  uVar10 = *(undefined4 *)((int)puVar15 + iVar12 * 4 + (int)DAT_8c16172e + iVar7 + -4);
  iVar4 = *(int *)(param_4 + 0x34) + 0xc;
  iVar13 = 4;
  do {
    iVar13 = iVar13 + -1;
    *(undefined4 *)(iVar4 + 0x14) = uVar10;
    iVar4 = iVar4 + 0x18;
  } while (iVar13 != 0);
  iVar4 = (int)DAT_8c161730 + iVar7 + -4;
  iVar13 = 4;
  (*(code *)PTR_FUN_8c161754)
            (*(undefined4 *)(param_4 + 0x34),(int)*(short *)((int)puVar15 + iVar12 * 4 + iVar4),
             (int)*(short *)((int)puVar15 + iVar12 * 4 + iVar4 + 2));
  iVar4 = 0;
  do {
    uVar10 = (undefined4)uVar16;
    iVar12 = (*(code *)puVar2)(*(undefined4 *)(param_4 + 0x38),iVar4);
    uVar24 = (uint)(uVar22 >> 0x20);
    uVar16 = uVar22;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(uVar24,uVar10);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar16 = (ulonglong)uVar24;
    }
    (**(code **)(*(int *)(iVar12 + 0x78) + 0x38))
              (uVar16,iVar12 + *(int *)(*(int *)(iVar12 + 0x78) + 0x30));
    uVar6 = (undefined4)param_2;
    uVar10 = (undefined4)uVar16;
    iVar13 = iVar13 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar13 != 0);
  iVar4 = (*(code *)puVar2)(*(undefined4 *)(param_4 + 0x38),2);
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44((undefined4)DAT_8c161758,uVar10);
  }
  else {
    uVar17 = CONCAT44(DAT_8c161758._4_4_,(undefined4)DAT_8c161758);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar17 = CONCAT44(uVar10,uVar10);
  }
  (**(code **)(*(int *)(iVar4 + 0x78) + 0x38))
            (uVar17,iVar4 + *(int *)(*(int *)(iVar4 + 0x78) + 0x30));
  iVar4 = *(int *)(param_4 + 0x3c);
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(DAT_8c161758._4_4_,uVar6);
  }
  else {
    uVar17 = CONCAT44(DAT_8c161760,DAT_8c161758._4_4_);
  }
  uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c161732 + iVar7 + -4) = uVar10;
    uVar19 = CONCAT44(DAT_8c161760,puVar18);
  }
  else {
    *(undefined8 *)((int)puVar15 + (int)DAT_8c161732 + iVar7 + -4) = uVar17;
    uVar19 = CONCAT44(DAT_8c161764,DAT_8c161760);
  }
  uVar6 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c161734 + iVar7 + -4) = uVar6;
    uVar19 = CONCAT44(uVar6,DAT_8c161764);
  }
  else {
    *(undefined8 *)((int)puVar15 + (int)DAT_8c161734 + iVar7 + -4) = uVar19;
    in_xd8 = CONCAT44(DAT_8c161768,DAT_8c161764);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar15 + (int)DAT_8c161736 + iVar7 + -4) = (int)uVar19;
  }
  else {
    *(undefined8 *)((int)puVar15 + (int)DAT_8c161736 + iVar7 + -4) = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar15 + (int)DAT_8c161738 + iVar7 + -4) = (int)((ulonglong)uVar19 >> 0x20);
  }
  else {
    *(undefined8 *)((int)puVar15 + (int)DAT_8c161738 + iVar7 + -4) = uVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c16173a + iVar7 + -4) = uVar10;
    uVar17 = CONCAT44(DAT_8c161768,(int)uVar19);
  }
  else {
    *(undefined8 *)((int)puVar15 + (int)DAT_8c16173a + iVar7 + -4) = uVar17;
    uVar17 = CONCAT44(_DAT_8c16176c,DAT_8c161768);
  }
  uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c16173c + iVar7 + -4) = uVar10;
  }
  else {
    *(undefined8 *)((int)puVar15 + (int)DAT_8c16173c + iVar7 + -4) = uVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar15 + (int)DAT_8c16173e + iVar7 + -4) = (int)uVar17;
  }
  else {
    *(undefined8 *)((int)puVar15 + (int)DAT_8c16173e + iVar7 + -4) = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + (int)DAT_8c161740 + iVar7 + -4) = uVar10;
  }
  else {
    *(undefined8 *)((int)puVar15 + (int)DAT_8c161740 + iVar7 + -4) = uVar17;
  }
  iVar12 = *(int *)(iVar4 + 0x78);
  iVar7 = (int)DAT_8c161732 + iVar7 + -4;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)((int)puVar15 + iVar7 + 0x10),
                      *(undefined4 *)((int)puVar15 + iVar7 + 0x14));
  }
  else {
    uVar17 = *(undefined8 *)((int)puVar15 + iVar7 + 0x10);
  }
  (**(code **)(iVar12 + 0x20))(uVar17,iVar4 + *(int *)(iVar12 + 0x18));
  uVar16 = uVar22;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)_DAT_8c16176c;
  }
  (*(code *)PTR_FUN_8c161770)(uVar16,uVar22,*(undefined4 *)(param_4 + 0x30));
  return;
}

