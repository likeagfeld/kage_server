// entry: 8c1605e0
// name: FUN_8c1605e0
// signature: undefined FUN_8c1605e0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c1605e0(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4,
                 undefined4 param_5)

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
  undefined8 uVar19;
  undefined *puVar20;
  undefined4 uVar21;
  undefined8 in_dr14;
  undefined *puVar24;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar25;
  undefined8 in_xd6;
  undefined8 in_xd8;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  
  puVar1 = PTR_FUN_8c1607a0;
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
  iVar7 = (int)DAT_8c16077e;
  puVar24 = PTR_DAT_8c16079c;
  puVar20 = DAT_8c160798;
  if (in_FPSCR_SZ == '\0') {
    puVar24 = DAT_8c160798;
    puVar20 = param_3;
  }
  (*(code *)PTR_FUN_8c1607a0)();
  iVar14 = (int)DAT_8c160784;
  (*(code *)puVar1)((undefined1 *)((int)puVar16 + (int)DAT_8c160780 + iVar7 + -4));
  puVar2 = PTR_FUN_8c1607b0;
  puVar8 = (undefined4 *)((int)puVar16 + iVar14 + iVar7 + -4);
  uVar10 = *(undefined4 *)(PTR_DAT_8c1607a8 + 4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c1607a8;
  puVar8[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1607a8 + 0xc);
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c1607a8 + 8);
  puVar8[3] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1607a8 + 0x14);
  puVar8[4] = *(undefined4 *)(PTR_DAT_8c1607a8 + 0x10);
  puVar8[5] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1607a8 + 0x1c);
  puVar8[6] = *(undefined4 *)(PTR_DAT_8c1607a8 + 0x18);
  puVar8[7] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1607a8 + 0x24);
  puVar8[8] = *(undefined4 *)(PTR_DAT_8c1607a8 + 0x20);
  puVar8[9] = uVar10;
  puVar8[10] = *(undefined4 *)(PTR_DAT_8c1607a8 + 0x28);
  (*(code *)puVar1)((int)DAT_8c160786);
  puVar1 = PTR_FUN_8c1607b8;
  uVar11 = *(undefined4 *)(PTR_DAT_8c1607b4 + 4);
  puVar8 = (undefined4 *)((int)puVar16 + (int)DAT_8c160788 + iVar7 + -4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c1607b4;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1607b4 + 8);
  puVar8[1] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c1607b4 + 0xc);
  puVar8[2] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1607b4 + 0x10);
  puVar8[3] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c1607b4 + 0x14);
  puVar8[4] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1607b4 + 0x18);
  puVar8[5] = uVar11;
  uVar11 = *(undefined4 *)(PTR_DAT_8c1607b4 + 0x1c);
  puVar8[6] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c1607b4 + 0x20);
  puVar8[7] = uVar11;
  puVar8[8] = uVar10;
  lVar22 = ZEXT48(puVar24) << 0x20;
  puVar8[10] = *(undefined4 *)(PTR_DAT_8c1607b4 + 0x28);
  puVar8[9] = param_5;
  *(undefined4 *)((int)puVar16 + iVar14 + iVar7 + 0x20) = param_5;
  uVar10 = (*(code *)PTR_FUN_8c1607b8)(0,9,(undefined1 *)((int)puVar16 + iVar7 + -4),param_5);
  iVar4 = (int)DAT_8c160780;
  *(undefined4 *)(param_4 + 0x2c) = uVar10;
  iVar13 = (int)DAT_8c16078a;
  uVar10 = (*(code *)puVar1)(0,6,(undefined1 *)((int)puVar16 + iVar4 + iVar7 + -4),param_5);
  puVar24 = PTR_FUN_8c1607bc;
  *(undefined4 *)(param_4 + 0x30) = uVar10;
  uVar10 = (*(code *)puVar24)(0,(undefined1 *)((int)puVar16 + iVar14 + iVar7 + -4));
  iVar4 = (int)DAT_8c160786;
  *(undefined4 *)(param_4 + 0x34) = uVar10;
  uVar10 = (*(code *)puVar1)(0,6,(undefined1 *)((int)puVar16 + iVar4 + iVar7 + -4),param_5);
  iVar4 = (int)DAT_8c160788;
  *(undefined4 *)(param_4 + 0x38) = uVar10;
  uVar10 = (*(code *)puVar24)(0,(undefined1 *)((int)puVar16 + iVar4 + iVar7 + -4));
  *(undefined4 *)(param_4 + 0x3c) = uVar10;
  iVar15 = 6;
  iVar14 = (int)DAT_8c16078c;
  iVar4 = 0;
  do {
    iVar3 = (*(code *)puVar2)(*(undefined4 *)(param_4 + 0x38),iVar4);
    uVar10 = (undefined4)param_1;
    puVar8 = (undefined4 *)((int)puVar16 + iVar14 + iVar7 + -4);
    uVar11 = (undefined4)((ulonglong)lVar22 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + (int)DAT_8c16078c + iVar7 + -4) = uVar11;
    }
    else {
      *(longlong *)((int)puVar16 + (int)DAT_8c16078c + iVar7 + -4) = lVar22;
    }
    puVar9 = (undefined4 *)(iVar3 + iVar13);
    iVar15 = iVar15 + -1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + (int)DAT_8c16078e + iVar7 + -4) = uVar11;
    }
    else {
      *(longlong *)((int)puVar16 + (int)DAT_8c16078e + iVar7 + -4) = lVar22;
    }
    uVar21 = (undefined4)lVar22;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + (int)DAT_8c160790 + iVar7 + -4) = uVar21;
    }
    else {
      *(undefined8 *)((int)puVar16 + (int)DAT_8c160790 + iVar7 + -4) = in_xd14;
    }
    uVar12 = *puVar8;
    puVar9[1] = puVar8[1];
    uVar5 = puVar8[2];
    *puVar9 = uVar12;
    puVar9[2] = uVar5;
    puVar1 = PTR_FUN_8c1607c0;
    iVar4 = iVar4 + 1;
  } while (iVar15 != 0);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c160792 + iVar7 + -4) = uVar11;
  }
  else {
    *(longlong *)((int)puVar16 + (int)DAT_8c160792 + iVar7 + -4) = lVar22;
  }
  puVar8 = (undefined4 *)((int)puVar16 + (int)DAT_8c160792 + iVar7 + -4);
  iVar4 = *(int *)(param_4 + 0x3c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c160794 + iVar7 + -4) = uVar11;
  }
  else {
    *(longlong *)((int)puVar16 + (int)DAT_8c160794 + iVar7 + -4) = lVar22;
  }
  puVar9 = (undefined4 *)(iVar4 + iVar13);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c160796 + iVar7 + -4) = uVar21;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c160796 + iVar7 + -4) = in_xd14;
  }
  uVar5 = *puVar8;
  puVar9[1] = puVar8[1];
  uVar11 = puVar8[2];
  *puVar9 = uVar5;
  puVar9[2] = uVar11;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = uVar21;
  }
  uVar23 = CONCAT44(0x3f800000,uVar21);
  uVar17 = uVar23;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(0x3f800000,uVar10);
  }
  (*(code *)puVar1)(uVar17,*(undefined4 *)(param_4 + 0x2c),1,0x10,3);
  (*(code *)puVar1)(uVar23,*(undefined4 *)(param_4 + 0x30),1,0x10,3);
  (*(code *)PTR_FUN_8c1607c4)(uVar23,*(undefined4 *)(param_4 + 0x34),1,0x10,3);
  (*(code *)puVar1)(uVar23,*(undefined4 *)(param_4 + 0x38),1,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)PTR_DAT_8c1607c8,(int)uVar23);
  }
  else {
    uVar17 = *(ulonglong *)PTR_DAT_8c1607c8;
  }
  (*(code *)PTR_FUN_8c1607c4)(uVar17,*(undefined4 *)(param_4 + 0x3c),1,8,3);
  uVar10 = *(undefined4 *)(PTR_DAT_8c160968 + 4);
  puVar8 = (undefined4 *)((int)puVar16 + (int)DAT_8c160946 + iVar7 + -4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c160968;
  puVar8[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c160968 + 0xc);
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c160968 + 8);
  puVar8[3] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c160968 + 0x14);
  puVar8[4] = *(undefined4 *)(PTR_DAT_8c160968 + 0x10);
  puVar8[5] = uVar10;
  puVar8 = (undefined4 *)((int)puVar16 + (int)DAT_8c160948 + iVar7 + -4);
  uVar10 = *(undefined4 *)(PTR_DAT_8c16096c + 4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c16096c;
  puVar8[1] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c16096c + 0xc);
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c16096c + 8);
  puVar8[3] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c16096c + 0x14);
  puVar8[4] = *(undefined4 *)(PTR_DAT_8c16096c + 0x10);
  puVar8[5] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c16096c + 0x1c);
  puVar8[6] = *(undefined4 *)(PTR_DAT_8c16096c + 0x18);
  puVar8[7] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c16096c + 0x24);
  puVar8[8] = *(undefined4 *)(PTR_DAT_8c16096c + 0x20);
  puVar8[9] = uVar10;
  uVar11 = *(undefined4 *)(PTR_DAT_8c16096c + 0x2c);
  puVar8[10] = *(undefined4 *)(PTR_DAT_8c16096c + 0x28);
  uVar10 = *(undefined4 *)(PTR_DAT_8c16096c + 0x30);
  puVar8[0xb] = uVar11;
  puVar8[0xc] = uVar10;
  (*(code *)PTR_FUN_8c160974)((int)DAT_8c16094a);
  iVar13 = *(int *)((int)puVar16 + (int)DAT_8c160946 + iVar7 + -4);
  uVar10 = *(undefined4 *)((int)puVar16 + iVar13 * 4 + (int)DAT_8c160948 + iVar7 + -4);
  iVar4 = *(int *)(param_4 + 0x34) + 0xc;
  iVar14 = 4;
  do {
    iVar14 = iVar14 + -1;
    *(undefined4 *)(iVar4 + 0x14) = uVar10;
    iVar4 = iVar4 + 0x18;
  } while (iVar14 != 0);
  iVar4 = (int)DAT_8c16094a + iVar7 + -4;
  iVar14 = 6;
  (*(code *)PTR_FUN_8c160978)
            (*(undefined4 *)(param_4 + 0x34),(int)*(short *)((int)puVar16 + iVar13 * 4 + iVar4),
             (int)*(short *)((int)puVar16 + iVar13 * 4 + iVar4 + 2));
  iVar4 = 0;
  do {
    uVar10 = (undefined4)uVar17;
    iVar13 = (*(code *)puVar2)(*(undefined4 *)(param_4 + 0x38),iVar4);
    uVar25 = (uint)(uVar23 >> 0x20);
    uVar17 = uVar23;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(uVar25,uVar10);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar25;
    }
    (**(code **)(*(int *)(iVar13 + 0x78) + 0x38))
              (uVar17,iVar13 + *(int *)(*(int *)(iVar13 + 0x78) + 0x30));
    uVar11 = (undefined4)param_2;
    uVar10 = (undefined4)uVar17;
    iVar14 = iVar14 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar14 != 0);
  iVar4 = (*(code *)puVar2)(*(undefined4 *)(param_4 + 0x38),0);
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44((undefined4)DAT_8c16097c,uVar10);
  }
  else {
    uVar18 = CONCAT44(DAT_8c16097c._4_4_,(undefined4)DAT_8c16097c);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar18 = CONCAT44(uVar10,uVar10);
  }
  (**(code **)(*(int *)(iVar4 + 0x78) + 0x38))
            (uVar18,iVar4 + *(int *)(*(int *)(iVar4 + 0x78) + 0x30));
  iVar4 = *(int *)(param_4 + 0x3c);
  uVar10 = DAT_8c16097c._4_4_;
  if (in_FPSCR_SZ != '\0') {
    in_xd6 = CONCAT44(DAT_8c160984,DAT_8c16097c._4_4_);
    uVar10 = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c16094c + iVar7 + -4) = uVar10;
    uVar18 = CONCAT44(DAT_8c160984,puVar20);
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c16094c + iVar7 + -4) = in_xd6;
    uVar18 = CONCAT44(DAT_8c160988,DAT_8c160984);
  }
  uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c16094e + iVar7 + -4) = uVar11;
    uVar19 = CONCAT44(DAT_8c160988,uVar10);
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c16094e + iVar7 + -4) = uVar18;
    uVar19 = CONCAT44(DAT_8c16098c,DAT_8c160988);
  }
  uVar10 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c160950 + iVar7 + -4) = uVar10;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c160950 + iVar7 + -4) = uVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c160952 + iVar7 + -4) = uVar11;
    uVar18 = CONCAT44(uVar11,DAT_8c16098c);
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c160952 + iVar7 + -4) = uVar18;
    in_xd8 = CONCAT44(DAT_8c160990,DAT_8c16098c);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + (int)DAT_8c160954 + iVar7 + -4) = (int)uVar18;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c160954 + iVar7 + -4) = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + (int)DAT_8c160956 + iVar7 + -4) = (int)((ulonglong)uVar18 >> 0x20);
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c160956 + iVar7 + -4) = uVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + (int)DAT_8c160958 + iVar7 + -4) = (int)uVar19;
    uVar18 = CONCAT44(DAT_8c160990,(int)uVar18);
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c160958 + iVar7 + -4) = in_xd6;
    uVar18 = CONCAT44(_DAT_8c160994,DAT_8c160990);
  }
  uVar11 = (undefined4)((ulonglong)uVar18 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c16095a + iVar7 + -4) = uVar11;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c16095a + iVar7 + -4) = uVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c16095c + iVar7 + -4) = uVar10;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c16095c + iVar7 + -4) = uVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c16095e + iVar7 + -4) = uVar11;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c16095e + iVar7 + -4) = uVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + (int)DAT_8c160960 + iVar7 + -4) = (int)uVar18;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c160960 + iVar7 + -4) = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar16 + (int)DAT_8c160962 + iVar7 + -4) = uVar11;
  }
  else {
    *(undefined8 *)((int)puVar16 + (int)DAT_8c160962 + iVar7 + -4) = uVar18;
  }
  iVar13 = *(int *)(iVar4 + 0x78);
  puVar6 = (undefined8 *)((int)puVar16 + (int)DAT_8c16094c + iVar7 + -4);
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)puVar6,*(undefined4 *)((int)puVar6 + 4));
  }
  else {
    uVar18 = *puVar6;
  }
  (**(code **)(iVar13 + 0x20))(uVar18,iVar4 + *(int *)(iVar13 + 0x18));
  uVar17 = uVar23;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)_DAT_8c160994;
  }
  (*(code *)PTR_FUN_8c160998)(uVar17,uVar23,*(undefined4 *)(param_4 + 0x30));
  return;
}

