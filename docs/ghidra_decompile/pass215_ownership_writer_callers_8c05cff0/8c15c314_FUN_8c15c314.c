// entry: 8c15c314
// name: FUN_8c15c314
// signature: undefined FUN_8c15c314(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c15c314(undefined8 param_1,undefined *param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
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
  
  puVar1 = PTR_FUN_8c15c4d8;
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_20);
    puVar16 = &uStack_20;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_20._0_4_ = (int)in_dr14;
  }
  else {
    puVar16 = (undefined8 *)auStack_28;
    uStack_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  iVar7 = (int)DAT_8c15c4b2;
  puVar23 = PTR_DAT_8c15c4d4;
  puVar19 = DAT_8c15c4d0;
  if (in_FPSCR_SZ == '\0') {
    puVar23 = DAT_8c15c4d0;
    puVar19 = param_2;
  }
  (*(code *)PTR_FUN_8c15c4d8)();
  iVar13 = (int)DAT_8c15c4b8;
  (*(code *)puVar1)((int)DAT_8c15c4b4);
  puVar2 = PTR_FUN_8c15c4e8;
  puVar8 = (undefined4 *)((int)puVar16 + iVar13 + iVar7 + -4);
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c4e0 + 4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c15c4e0;
  puVar8[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c4e0 + 0xc);
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c15c4e0 + 8);
  puVar8[3] = uVar10;
  uVar11 = *(undefined4 *)(PTR_DAT_8c15c4e0 + 0x14);
  puVar8[4] = *(undefined4 *)(PTR_DAT_8c15c4e0 + 0x10);
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c4e0 + 0x18);
  puVar8[5] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c15c4e0 + 0x1c);
  puVar8[6] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c4e0 + 0x20);
  puVar8[7] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c15c4e0 + 0x24);
  puVar8[8] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c4e0 + 0x28);
  puVar8[9] = uVar11;
  puVar8[10] = uVar10;
  (*(code *)puVar1)((int)DAT_8c15c4bc);
  puVar1 = PTR_FUN_8c15c4f0;
  puVar8 = (undefined4 *)((int)puVar16 + (int)DAT_8c15c4be + iVar7 + -4);
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c4ec + 4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c15c4ec;
  puVar8[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c4ec + 0xc);
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c15c4ec + 8);
  puVar8[3] = uVar10;
  uVar11 = *(undefined4 *)(PTR_DAT_8c15c4ec + 0x14);
  puVar8[4] = *(undefined4 *)(PTR_DAT_8c15c4ec + 0x10);
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c4ec + 0x18);
  puVar8[5] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c15c4ec + 0x1c);
  puVar8[6] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c4ec + 0x20);
  puVar8[7] = uVar11;
  puVar8[8] = uVar10;
  puVar8[10] = *(undefined4 *)(PTR_DAT_8c15c4ec + 0x28);
  puVar8[9] = param_4;
  *(undefined4 *)((int)puVar16 + iVar13 + iVar7 + 0x20) = param_4;
  uVar10 = (*(code *)PTR_FUN_8c15c4f0)(0,9,(undefined1 *)((int)puVar16 + iVar7 + -4),param_4);
  iVar4 = (int)DAT_8c15c4b4;
  *(undefined4 *)(param_3 + 0x2c) = uVar10;
  lVar21 = ZEXT48(puVar23) << 0x20;
  uVar10 = (*(code *)puVar1)(0,6,(undefined1 *)((int)puVar16 + iVar4 + iVar7 + -4),param_4);
  puVar23 = PTR_FUN_8c15c4f4;
  *(undefined4 *)(param_3 + 0x30) = uVar10;
  uVar10 = (*(code *)puVar23)(0,(undefined1 *)((int)puVar16 + iVar13 + iVar7 + -4));
  iVar4 = (int)DAT_8c15c4bc;
  *(undefined4 *)(param_3 + 0x34) = uVar10;
  iVar13 = (int)DAT_8c15c4c0;
  uVar10 = (*(code *)puVar1)(0,3,(undefined1 *)((int)puVar16 + iVar4 + iVar7 + -4),param_4);
  iVar4 = (int)DAT_8c15c4be;
  *(undefined4 *)(param_3 + 0x38) = uVar10;
  uVar10 = (*(code *)puVar23)(0,(undefined1 *)((int)puVar16 + iVar4 + iVar7 + -4));
  *(undefined4 *)(param_3 + 0x3c) = uVar10;
  iVar15 = 3;
  iVar14 = (int)DAT_8c15c4c2;
  iVar4 = 0;
  do {
    iVar3 = (*(code *)puVar2)(*(undefined4 *)(param_3 + 0x38),iVar4);
    uVar10 = (undefined4)param_1;
    puVar8 = (undefined4 *)((int)puVar16 + iVar14 + iVar7 + -4);
    uVar11 = (undefined4)((ulonglong)lVar21 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + (int)DAT_8c15c4c2 + iVar7 + -4) = uVar11;
    }
    else {
      *(longlong *)((int)puVar16 + (int)DAT_8c15c4c2 + iVar7 + -4) = lVar21;
    }
    puVar9 = (undefined4 *)(iVar3 + iVar13);
    iVar15 = iVar15 + -1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + (int)DAT_8c15c4c4 + iVar7 + -4) = uVar11;
    }
    else {
      *(longlong *)((int)puVar16 + (int)DAT_8c15c4c4 + iVar7 + -4) = lVar21;
    }
    uVar20 = (undefined4)lVar21;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + (int)DAT_8c15c4c6 + iVar7 + -4) = uVar20;
    }
    else {
      *(undefined8 *)((int)puVar16 + (int)DAT_8c15c4c6 + iVar7 + -4) = in_xd14;
    }
    uVar12 = *puVar8;
    puVar9[1] = puVar8[1];
    uVar5 = puVar8[2];
    *puVar9 = uVar12;
    puVar9[2] = uVar5;
    puVar1 = PTR_FUN_8c15c4f8;
    iVar4 = iVar4 + 1;
  } while (iVar15 != 0);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c15c4c8 + iVar7 + -4) = uVar11;
  }
  else {
    *(longlong *)((int)puVar16 + (int)DAT_8c15c4c8 + iVar7 + -4) = lVar21;
  }
  puVar8 = (undefined4 *)((int)puVar16 + (int)DAT_8c15c4c8 + iVar7 + -4);
  iVar4 = *(int *)(param_3 + 0x3c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c15c4ca + iVar7 + -4) = uVar11;
  }
  else {
    *(longlong *)((int)puVar16 + (int)DAT_8c15c4ca + iVar7 + -4) = lVar21;
  }
  puVar9 = (undefined4 *)(iVar4 + iVar13);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c15c4cc + iVar7 + -4) = uVar20;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c15c4cc + iVar7 + -4) = in_xd14;
  }
  uVar5 = *puVar8;
  puVar9[1] = puVar8[1];
  uVar11 = puVar8[2];
  *puVar9 = uVar5;
  puVar9[2] = uVar11;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = uVar20;
  }
  uVar22 = CONCAT44(0x3f800000,uVar20);
  uVar17 = uVar22;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(0x3f800000,uVar10);
  }
  (*(code *)puVar1)(uVar17,*(undefined4 *)(param_3 + 0x2c),1,0x10,3);
  (*(code *)puVar1)(uVar22,*(undefined4 *)(param_3 + 0x30),1,0x10,3);
  (*(code *)PTR_FUN_8c15c4fc)(uVar22,*(undefined4 *)(param_3 + 0x34),1,0x10,3);
  (*(code *)puVar1)(uVar22,*(undefined4 *)(param_3 + 0x38),1,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)PTR_DAT_8c15c500,(int)uVar22);
  }
  else {
    uVar17 = *(ulonglong *)PTR_DAT_8c15c500;
  }
  (*(code *)PTR_FUN_8c15c4fc)(uVar17,*(undefined4 *)(param_3 + 0x3c),1,8,3);
  puVar8 = (undefined4 *)((int)puVar16 + (int)DAT_8c15c656 + iVar7 + -4);
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c66c + 4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c15c66c;
  puVar8[1] = uVar10;
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c15c66c + 8);
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c670 + 4);
  puVar8 = (undefined4 *)((int)puVar16 + (int)DAT_8c15c658 + iVar7 + -4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c15c670;
  puVar8[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c670 + 0xc);
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c15c670 + 8);
  puVar8[3] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c670 + 0x14);
  puVar8[4] = *(undefined4 *)(PTR_DAT_8c15c670 + 0x10);
  puVar8[5] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c670 + 0x1c);
  puVar8[6] = *(undefined4 *)(PTR_DAT_8c15c670 + 0x18);
  puVar8[7] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c670 + 0x24);
  puVar8[8] = *(undefined4 *)(PTR_DAT_8c15c670 + 0x20);
  puVar8[9] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15c670 + 0x2c);
  puVar8[10] = *(undefined4 *)(PTR_DAT_8c15c670 + 0x28);
  puVar8[0xb] = uVar10;
  puVar8[0xc] = *(undefined4 *)(PTR_DAT_8c15c670 + 0x30);
  (*(code *)PTR_FUN_8c15c678)((int)DAT_8c15c65a);
  iVar13 = *(int *)((int)puVar16 + (int)DAT_8c15c656 + iVar7 + -4);
  uVar10 = *(undefined4 *)((int)puVar16 + iVar13 * 4 + (int)DAT_8c15c658 + iVar7 + -4);
  iVar4 = *(int *)(param_3 + 0x34) + 0xc;
  iVar14 = 4;
  do {
    iVar14 = iVar14 + -1;
    *(undefined4 *)(iVar4 + 0x14) = uVar10;
    iVar4 = iVar4 + 0x18;
  } while (iVar14 != 0);
  iVar4 = (int)DAT_8c15c65a + iVar7 + -4;
  iVar14 = 3;
  (*(code *)PTR_FUN_8c15c67c)
            (*(undefined4 *)(param_3 + 0x34),(int)*(short *)((int)puVar16 + iVar13 * 4 + iVar4),
             (int)*(short *)((int)puVar16 + iVar13 * 4 + iVar4 + 2));
  iVar4 = 0;
  do {
    uVar10 = (undefined4)uVar17;
    iVar13 = (*(code *)puVar2)(*(undefined4 *)(param_3 + 0x38),iVar4);
    uVar24 = (uint)(uVar22 >> 0x20);
    uVar17 = uVar22;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(uVar24,uVar10);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar24;
    }
    (**(code **)(*(int *)(iVar13 + 0x78) + 0x38))
              (uVar17,iVar13 + *(int *)(*(int *)(iVar13 + 0x78) + 0x30));
    uVar10 = (undefined4)uVar17;
    iVar14 = iVar14 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar14 != 0);
  iVar4 = (*(code *)puVar2)(*(undefined4 *)(param_3 + 0x38),0);
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((undefined4)DAT_8c15c680,uVar10);
  }
  else {
    uVar18 = CONCAT44(DAT_8c15c680._4_4_,(undefined4)DAT_8c15c680);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar18 = CONCAT44(uVar10,uVar10);
  }
  (**(code **)(*(int *)(iVar4 + 0x78) + 0x38))
            (uVar18,iVar4 + *(int *)(*(int *)(iVar4 + 0x78) + 0x30));
  iVar4 = *(int *)(param_3 + 0x3c);
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(DAT_8c15c680._4_4_,puVar19);
  }
  else {
    uVar18 = CONCAT44(DAT_8c15c688,DAT_8c15c680._4_4_);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + (int)DAT_8c15c65c + iVar7 + -4) = (int)((ulonglong)uVar18 >> 0x20);
    uVar18 = CONCAT44(DAT_8c15c688,(int)uVar18);
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c15c65c + iVar7 + -4) = uVar18;
    uVar18 = CONCAT44(DAT_8c15c68c,DAT_8c15c688);
  }
  uVar10 = (undefined4)((ulonglong)uVar18 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c15c65e + iVar7 + -4) = uVar10;
    uVar18 = CONCAT44(uVar10,DAT_8c15c68c);
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c15c65e + iVar7 + -4) = uVar18;
    in_xd8 = CONCAT44(DAT_8c15c690,DAT_8c15c68c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + (int)DAT_8c15c660 + iVar7 + -4) = (int)uVar18;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c15c660 + iVar7 + -4) = in_xd8;
  }
  uVar10 = (undefined4)((ulonglong)uVar18 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c15c662 + iVar7 + -4) = uVar10;
    uVar18 = CONCAT44(uVar10,DAT_8c15c690);
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c15c662 + iVar7 + -4) = uVar18;
    in_xd8 = CONCAT44(_DAT_8c15c694,DAT_8c15c690);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + (int)DAT_8c15c664 + iVar7 + -4) = (int)uVar18;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c15c664 + iVar7 + -4) = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + (int)DAT_8c15c666 + iVar7 + -4) = (int)((ulonglong)uVar18 >> 0x20);
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c15c666 + iVar7 + -4) = uVar18;
  }
  iVar13 = *(int *)(iVar4 + 0x78);
  puVar6 = (undefined8 *)((int)puVar16 + (int)DAT_8c15c65c + iVar7 + -4);
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)puVar6,*(undefined4 *)((int)puVar6 + 4));
  }
  else {
    uVar18 = *puVar6;
  }
  (**(code **)(iVar13 + 0x20))(uVar18,iVar4 + *(int *)(iVar13 + 0x18));
  uVar17 = uVar22;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)_DAT_8c15c694;
  }
  (*(code *)PTR_FUN_8c15c698)(uVar17,uVar22,*(undefined4 *)(param_3 + 0x30));
  return;
}

