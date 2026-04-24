// entry: 8c15b922
// name: FUN_8c15b922
// signature: undefined FUN_8c15b922(void)


void FUN_8c15b922(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 in_dr14;
  ulonglong uVar11;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_10 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_10);
    puVar8 = &uStack_10;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_10._0_4_ = (int)in_dr14;
  }
  else {
    puVar8 = (undefined8 *)local_18;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar8 + -4) = in_PR;
  iVar3 = (int)DAT_8c15ba46;
  uVar10 = 0x3f800000;
  (*(code *)PTR_FUN_8c15ba68)();
  uVar6 = *(undefined4 *)(PTR_DAT_8c15ba6c + 4);
  puVar4 = (undefined4 *)((int)puVar8 + (int)DAT_8c15ba48 + iVar3 + -4);
  *puVar4 = *(undefined4 *)PTR_DAT_8c15ba6c;
  puVar4[1] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c15ba6c + 0xc);
  puVar4[2] = *(undefined4 *)(PTR_DAT_8c15ba6c + 8);
  puVar4[3] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c15ba6c + 0x14);
  puVar4[4] = *(undefined4 *)(PTR_DAT_8c15ba6c + 0x10);
  puVar4[5] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c15ba6c + 0x1c);
  puVar4[6] = *(undefined4 *)(PTR_DAT_8c15ba6c + 0x18);
  puVar4[7] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c15ba70 + 4);
  puVar4[8] = *(undefined4 *)(PTR_DAT_8c15ba6c + 0x20);
  uVar11 = (ulonglong)uVar10;
  puVar4[10] = *(undefined4 *)(PTR_DAT_8c15ba6c + 0x28);
  puVar4[9] = param_2;
  puVar4 = (undefined4 *)((int)puVar8 + (int)DAT_8c15ba4a + iVar3 + -4);
  *puVar4 = *(undefined4 *)PTR_DAT_8c15ba70;
  puVar4[1] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c15ba70 + 0xc);
  puVar4[2] = *(undefined4 *)(PTR_DAT_8c15ba70 + 8);
  puVar4[3] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c15ba70 + 0x14);
  puVar4[4] = *(undefined4 *)(PTR_DAT_8c15ba70 + 0x10);
  puVar4[5] = uVar6;
  uVar7 = *(undefined4 *)(PTR_DAT_8c15ba70 + 0x1c);
  puVar4[6] = *(undefined4 *)(PTR_DAT_8c15ba70 + 0x18);
  uVar6 = *(undefined4 *)(PTR_DAT_8c15ba70 + 0x20);
  puVar4[7] = uVar7;
  puVar4[8] = uVar6;
  puVar4[10] = *(undefined4 *)(PTR_DAT_8c15ba70 + 0x28);
  puVar4[9] = param_2;
  uVar6 = (*(code *)PTR_FUN_8c15ba74)(0,0x26,(undefined1 *)((int)puVar8 + iVar3 + -4),param_2);
  puVar1 = PTR_FUN_8c15ba78;
  iVar2 = (int)DAT_8c15ba48;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  uVar6 = (*(code *)puVar1)(0,(undefined1 *)((int)puVar8 + iVar2 + iVar3 + -4));
  puVar1 = PTR_FUN_8c15ba78;
  iVar2 = (int)DAT_8c15ba4a;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  uVar6 = (*(code *)puVar1)(0,(undefined1 *)((int)puVar8 + iVar2 + iVar3 + -4));
  puVar1 = PTR_FUN_8c15ba7c;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  uVar9 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44((int)uVar11,(int)(uVar11 >> 0x20));
  }
  (*(code *)puVar1)(uVar9,*(undefined4 *)(param_1 + 0x2c),1,0x10,3);
  uVar9 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44((int)uVar11,(int)(uVar11 >> 0x20));
  }
  (*(code *)PTR_FUN_8c15ba80)(uVar9,*(undefined4 *)(param_1 + 0x30),1,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    in_xd14 = CONCAT44((int)uVar11,(int)(uVar11 >> 0x20));
  }
  (*(code *)PTR_FUN_8c15ba80)(in_xd14,*(undefined4 *)(param_1 + 0x34),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44(*(undefined4 *)PTR_DAT_8c15ba84,(int)(uVar11 >> 0x20));
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_8c15ba84;
  }
  (*(code *)PTR_FUN_8c15ba88)(uVar9,*(undefined4 *)(param_1 + 0x34),8,3);
  uVar6 = (undefined4)(uVar11 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar8 + (int)DAT_8c15ba4c + iVar3 + -4) = uVar6;
  }
  else {
    *(ulonglong *)((int)puVar8 + (int)DAT_8c15ba4c + iVar3 + -4) = uVar11;
  }
  puVar4 = (undefined4 *)((int)puVar8 + (int)DAT_8c15ba4c + iVar3 + -4);
  iVar2 = *(int *)(param_1 + 0x30);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar8 + (int)DAT_8c15ba4e + iVar3 + -4) = uVar6;
  }
  else {
    *(ulonglong *)((int)puVar8 + (int)DAT_8c15ba4e + iVar3 + -4) = uVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar8 + (int)DAT_8c15ba50 + iVar3 + -4) = uVar6;
  }
  else {
    *(ulonglong *)((int)puVar8 + (int)DAT_8c15ba50 + iVar3 + -4) = uVar11;
  }
  puVar5 = (undefined4 *)(iVar2 + DAT_8c15ba52);
  uVar7 = *puVar4;
  puVar5[1] = puVar4[1];
  uVar6 = puVar4[2];
  *puVar5 = uVar7;
  puVar5[2] = uVar6;
  return;
}

