// entry: 8c15dc94
// name: FUN_8c15dc94
// signature: undefined FUN_8c15dc94(void)


void FUN_8c15dc94(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 in_dr14;
  ulonglong uVar17;
  ulonglong in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 local_24 [8];
  undefined8 uStack_1c;
  
  puVar1 = PTR_FUN_8c15de58;
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_1c);
    puVar13 = &uStack_1c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_1c._0_4_ = (int)in_dr14;
  }
  else {
    puVar13 = (undefined8 *)local_24;
    uStack_1c = in_dr14;
  }
  *(undefined4 *)((int)puVar13 + -4) = in_PR;
  iVar7 = (int)DAT_8c15de3c;
  iVar12 = (int)DAT_8c15de40;
  (*(code *)PTR_FUN_8c15de58)();
  iVar11 = (int)DAT_8c15de44;
  (*(code *)puVar1)((int)DAT_8c15de3e);
  uVar16 = 0x3f800000;
  (*(code *)puVar1)((int)DAT_8c15de46);
  puVar8 = (undefined4 *)((int)puVar13 + iVar12 + iVar7 + -4);
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de64 + 4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c15de64;
  puVar8[1] = uVar4;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15de64 + 0xc);
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c15de64 + 8);
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de64 + 0x10);
  puVar8[3] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15de64 + 0x14);
  puVar8[4] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de64 + 0x18);
  puVar8[5] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15de64 + 0x1c);
  puVar8[6] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de64 + 0x20);
  puVar8[7] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15de64 + 0x24);
  puVar8[8] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de64 + 0x28);
  puVar8[9] = uVar10;
  puVar8[10] = uVar4;
  puVar8 = (undefined4 *)((int)puVar13 + iVar11 + iVar7 + -4);
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de68 + 4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c15de68;
  puVar8[1] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de68 + 0xc);
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c15de68 + 8);
  puVar8[3] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de68 + 0x14);
  puVar8[4] = *(undefined4 *)(PTR_DAT_8c15de68 + 0x10);
  puVar8[5] = uVar4;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15de68 + 0x1c);
  puVar8[6] = *(undefined4 *)(PTR_DAT_8c15de68 + 0x18);
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de68 + 0x20);
  puVar8[7] = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c15de68 + 0x24);
  puVar8[8] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de68 + 0x28);
  puVar8[9] = uVar10;
  puVar8[10] = uVar4;
  uVar17 = (ulonglong)uVar16;
  (*(code *)puVar1)((int)DAT_8c15de4c);
  puVar1 = PTR_FUN_8c15de74;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de70 + 4);
  puVar8 = (undefined4 *)((int)puVar13 + (int)DAT_8c15de4e + iVar7 + -4);
  *puVar8 = *(undefined4 *)PTR_DAT_8c15de70;
  puVar8[1] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de70 + 0xc);
  puVar8[2] = *(undefined4 *)(PTR_DAT_8c15de70 + 8);
  puVar8[3] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de70 + 0x14);
  puVar8[4] = *(undefined4 *)(PTR_DAT_8c15de70 + 0x10);
  puVar8[5] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de70 + 0x1c);
  puVar8[6] = *(undefined4 *)(PTR_DAT_8c15de70 + 0x18);
  puVar8[7] = uVar4;
  uVar4 = *(undefined4 *)(PTR_DAT_8c15de70 + 0x28);
  puVar8[8] = *(undefined4 *)(PTR_DAT_8c15de70 + 0x20);
  puVar8[10] = uVar4;
  puVar8[9] = param_2;
  *(undefined4 *)((int)puVar13 + iVar12 + iVar7 + 0x20) = param_2;
  *(undefined4 *)((int)puVar13 + iVar11 + iVar7 + 0x20) = param_2;
  uVar4 = (*(code *)PTR_FUN_8c15de74)(0,0x1e,(undefined1 *)((int)puVar13 + iVar7 + -4),param_2);
  iVar5 = (int)DAT_8c15de3e;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  uVar4 = (*(code *)puVar1)(0,10,(undefined1 *)((int)puVar13 + iVar5 + iVar7 + -4),param_2);
  iVar5 = (int)DAT_8c15de46;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  uVar4 = (*(code *)puVar1)(0,9,(undefined1 *)((int)puVar13 + iVar5 + iVar7 + -4),param_2);
  puVar2 = PTR_FUN_8c15de78;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  uVar4 = (*(code *)puVar2)(0,(undefined1 *)((int)puVar13 + iVar12 + iVar7 + -4));
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  uVar4 = (*(code *)puVar2)(0,(undefined1 *)((int)puVar13 + iVar11 + iVar7 + -4));
  iVar5 = (int)DAT_8c15de4c;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  puVar3 = PTR_FUN_8c15de7c;
  uVar4 = (*(code *)puVar1)(0,0x19,(undefined1 *)((int)puVar13 + iVar5 + iVar7 + -4),param_2);
  *(undefined4 *)(DAT_8c15de50 + param_1) = uVar4;
  puVar1 = PTR_FUN_8c15de80;
  uVar4 = (*(code *)puVar2)(0,(undefined1 *)((int)puVar13 + (int)DAT_8c15de4e + iVar7 + -4));
  uVar10 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(DAT_8c15de52 + param_1) = uVar4;
  uVar14 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar14 = CONCAT44((int)uVar17,(int)(uVar17 >> 0x20));
  }
  (*(code *)puVar3)(uVar14,uVar10,1,0x10,3);
  uVar14 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar14 = CONCAT44((int)uVar17,(int)(uVar17 >> 0x20));
  }
  (*(code *)puVar3)(uVar14,*(undefined4 *)(param_1 + 0x30),1,0x10,3);
  uVar14 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar14 = CONCAT44((int)uVar17,(int)(uVar17 >> 0x20));
  }
  (*(code *)puVar3)(uVar14,*(undefined4 *)(param_1 + 0x34),1,0x10,3);
  uVar14 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar14 = CONCAT44((int)uVar17,(int)(uVar17 >> 0x20));
  }
  (*(code *)puVar1)(uVar14,*(undefined4 *)(param_1 + 0x38),1,0x10,3);
  uVar14 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar14 = CONCAT44((int)uVar17,(int)(uVar17 >> 0x20));
  }
  (*(code *)puVar1)(uVar14,*(undefined4 *)(param_1 + 0x3c),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar14 = CONCAT44(*(undefined4 *)PTR_DAT_8c15de84,(int)(uVar17 >> 0x20));
  }
  else {
    uVar14 = *(ulonglong *)PTR_DAT_8c15de84;
  }
  (*(code *)PTR_FUN_8c15df9c)(uVar14,*(undefined4 *)(param_1 + 0x3c),8,3);
  uVar15 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar15 = uVar14 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar15 = uVar17 >> 0x20;
  }
  uVar16 = (uint)uVar15;
  (*(code *)puVar3)(uVar15,*(undefined4 *)(DAT_8c15df84 + param_1),1,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    in_xd14 = (ulonglong)uVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd14 = uVar17 >> 0x20;
  }
  iVar5 = 8;
  (*(code *)puVar1)(in_xd14,*(undefined4 *)(DAT_8c15df86 + param_1),1,0x10,3);
  uVar4 = (undefined4)(uVar17 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar13 + (int)DAT_8c15df88 + iVar7 + -4) = uVar4;
  }
  else {
    *(ulonglong *)((int)puVar13 + (int)DAT_8c15df88 + iVar7 + -4) = uVar17;
  }
  puVar8 = (undefined4 *)((int)puVar13 + (int)DAT_8c15df88 + iVar7 + -4);
  iVar11 = *(int *)(param_1 + 0x38);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar13 + (int)DAT_8c15df8a + iVar7 + -4) = uVar4;
  }
  else {
    *(ulonglong *)((int)puVar13 + (int)DAT_8c15df8a + iVar7 + -4) = uVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar13 + (int)DAT_8c15df8c + iVar7 + -4) = uVar4;
  }
  else {
    *(ulonglong *)((int)puVar13 + (int)DAT_8c15df8c + iVar7 + -4) = uVar17;
  }
  puVar9 = (undefined4 *)(iVar11 + DAT_8c15df8e);
  uVar10 = puVar8[1];
  *puVar9 = *puVar8;
  uVar4 = puVar8[2];
  iVar7 = (int)DAT_8c15df84;
  puVar9[1] = uVar10;
  puVar9[2] = uVar4;
  puVar1 = PTR_FUN_8c15dfa0;
  (*(code *)PTR_FUN_8c15dfa0)(*(undefined4 *)(iVar7 + param_1),0);
  *(uint *)((int)DAT_8c15df90 + *(int *)(DAT_8c15df86 + param_1)) =
       *(uint *)((int)DAT_8c15df90 + *(int *)(DAT_8c15df86 + param_1)) & 0xfffffffe | 1;
  piVar6 = (int *)(param_1 + DAT_8c15df92);
  do {
    (*(code *)puVar1)(*(undefined4 *)(*(int *)(DAT_8c15df94 + param_1) + 0x38),0);
    (*(code *)puVar1)(*(undefined4 *)(*(int *)(DAT_8c15df96 + param_1) + 0x38),0);
    iVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    (*(code *)puVar1)(*(undefined4 *)(iVar7 + 0x38),0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x34),0);
  return;
}

