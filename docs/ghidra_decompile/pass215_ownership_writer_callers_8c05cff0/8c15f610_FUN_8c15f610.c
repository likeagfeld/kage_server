// entry: 8c15f610
// name: FUN_8c15f610
// signature: undefined FUN_8c15f610(void)


void FUN_8c15f610(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 in_dr14;
  ulonglong uVar14;
  ulonglong in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 local_1c [8];
  undefined8 uStack_14;
  
  puVar1 = PTR_FUN_8c15f7c4;
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_14);
    puVar9 = &uStack_14;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_14._0_4_ = (int)in_dr14;
  }
  else {
    puVar9 = (undefined8 *)local_1c;
    uStack_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar9 + -4) = in_PR;
  iVar5 = (int)DAT_8c15f7aa;
  uVar13 = 0x3f800000;
  (*(code *)PTR_FUN_8c15f7c4)();
  uVar14 = (ulonglong)uVar13;
  (*(code *)puVar1)((int)DAT_8c15f7ac);
  (*(code *)puVar1)((int)DAT_8c15f7b0);
  (*(code *)puVar1)((int)DAT_8c15f7b2);
  (*(code *)puVar1)((int)DAT_8c15f7b4);
  (*(code *)puVar1)((int)DAT_8c15f7b8);
  puVar1 = PTR_FUN_8c15f7e0;
  puVar7 = (undefined4 *)((int)puVar9 + (int)DAT_8c15f7bc + iVar5 + -4);
  uVar3 = *(undefined4 *)(PTR_DAT_8c15f7dc + 4);
  *puVar7 = *(undefined4 *)PTR_DAT_8c15f7dc;
  puVar7[1] = uVar3;
  uVar3 = *(undefined4 *)(PTR_DAT_8c15f7dc + 0xc);
  puVar7[2] = *(undefined4 *)(PTR_DAT_8c15f7dc + 8);
  puVar7[3] = uVar3;
  uVar3 = *(undefined4 *)(PTR_DAT_8c15f7dc + 0x14);
  puVar7[4] = *(undefined4 *)(PTR_DAT_8c15f7dc + 0x10);
  puVar7[5] = uVar3;
  uVar3 = *(undefined4 *)(PTR_DAT_8c15f7dc + 0x1c);
  puVar7[6] = *(undefined4 *)(PTR_DAT_8c15f7dc + 0x18);
  puVar7[7] = uVar3;
  uVar3 = *(undefined4 *)(PTR_DAT_8c15f7dc + 0x28);
  puVar7[8] = *(undefined4 *)(PTR_DAT_8c15f7dc + 0x20);
  puVar7[10] = uVar3;
  puVar7[9] = param_2;
  uVar3 = (*(code *)PTR_FUN_8c15f7e0)(0,0xc,(undefined1 *)((int)puVar9 + iVar5 + -4),param_2);
  iVar4 = (int)DAT_8c15f7ac;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar3 = (*(code *)puVar1)(0,7,(undefined1 *)((int)puVar9 + iVar4 + iVar5 + -4),param_2);
  iVar4 = (int)DAT_8c15f7b0;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar3 = (*(code *)puVar1)(0,2,(undefined1 *)((int)puVar9 + iVar4 + iVar5 + -4),param_2);
  iVar4 = (int)DAT_8c15f7b2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar3 = (*(code *)puVar1)(0,2,(undefined1 *)((int)puVar9 + iVar4 + iVar5 + -4),param_2);
  iVar4 = (int)DAT_8c15f7b4;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  uVar3 = (*(code *)puVar1)(0,0xb,(undefined1 *)((int)puVar9 + iVar4 + iVar5 + -4),param_2);
  iVar4 = (int)DAT_8c15f7b8;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  puVar2 = PTR_FUN_8c15f7e4;
  uVar3 = (*(code *)puVar1)(0,10,(undefined1 *)((int)puVar9 + iVar4 + iVar5 + -4),param_2);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  puVar1 = PTR_DAT_8c15f7e8;
  uVar3 = (*(code *)PTR_FUN_8c15f7ec)
                    (0,(undefined1 *)((int)puVar9 + (int)DAT_8c15f7bc + iVar5 + -4));
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  uVar11 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)puVar2)(uVar11,*(undefined4 *)(param_1 + 0x2c),1,0x10,3);
  uVar11 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)puVar2)(uVar11,*(undefined4 *)(param_1 + 0x30),1,0x10,3);
  uVar11 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)puVar2)(uVar11,*(undefined4 *)(param_1 + 0x34),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(*(undefined4 *)puVar1,(int)(uVar14 >> 0x20));
  }
  else {
    uVar10 = *(undefined8 *)puVar1;
  }
  (*(code *)PTR_FUN_8c15f7f0)(uVar10,*(undefined4 *)(param_1 + 0x34),8,3);
  (*(code *)PTR_FUN_8c15f7f4)(*(undefined4 *)(param_1 + 0x34),8);
  uVar11 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)puVar2)(uVar11,*(undefined4 *)(param_1 + 0x38),1,0x10,3);
  uVar11 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)puVar2)(uVar11,*(undefined4 *)(param_1 + 0x3c),1,0x10,3);
  uVar12 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = uVar11 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar12 = uVar14 >> 0x20;
  }
  (*(code *)puVar2)(uVar12,*(undefined4 *)(param_1 + 0x40),1,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    in_xd14 = CONCAT44((int)uVar14,(int)(uVar14 >> 0x20));
  }
  (*(code *)PTR_FUN_8c15f7f8)(in_xd14,*(undefined4 *)(param_1 + 0x44),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(*(undefined4 *)puVar1,(int)(uVar14 >> 0x20));
  }
  else {
    uVar10 = *(undefined8 *)puVar1;
  }
  (*(code *)PTR_FUN_8c15f7fc)(uVar10,*(undefined4 *)(param_1 + 0x44),8,3);
  (*(code *)PTR_FUN_8c15f8dc)(*(undefined4 *)(param_1 + 0x44),8);
  iVar4 = *(int *)(param_1 + 0x44);
  puVar7 = (undefined4 *)((int)puVar9 + (int)DAT_8c15f8d0 + iVar5 + -4);
  uVar3 = (undefined4)(uVar14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar9 + (int)DAT_8c15f8d0 + iVar5 + -4) = uVar3;
  }
  else {
    *(ulonglong *)((int)puVar9 + (int)DAT_8c15f8d0 + iVar5 + -4) = uVar14;
  }
  puVar6 = (undefined4 *)(iVar4 + DAT_8c15f8d2);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar9 + (int)DAT_8c15f8d4 + iVar5 + -4) = uVar3;
  }
  else {
    *(ulonglong *)((int)puVar9 + (int)DAT_8c15f8d4 + iVar5 + -4) = uVar14;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar9 + (int)DAT_8c15f8d6 + iVar5 + -4) = uVar3;
  }
  else {
    *(ulonglong *)((int)puVar9 + (int)DAT_8c15f8d6 + iVar5 + -4) = uVar14;
  }
  uVar8 = puVar7[1];
  *puVar6 = *puVar7;
  uVar3 = puVar7[2];
  puVar6[1] = uVar8;
  puVar6[2] = uVar3;
  return;
}

