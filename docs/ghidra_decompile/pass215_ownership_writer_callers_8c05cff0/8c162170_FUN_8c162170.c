// entry: 8c162170
// name: FUN_8c162170
// signature: undefined FUN_8c162170(void)


void FUN_8c162170(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
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
  undefined1 local_1c [8];
  undefined8 uStack_14;
  
  puVar1 = PTR_FUN_8c1622f0;
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_14);
    puVar8 = &uStack_14;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_14._0_4_ = (int)in_dr14;
  }
  else {
    puVar8 = (undefined8 *)local_1c;
    uStack_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar8 + -4) = in_PR;
  iVar4 = (int)DAT_8c1622d8;
  uVar10 = 0x3f800000;
  (*(code *)PTR_FUN_8c1622f0)();
  uVar11 = (ulonglong)uVar10;
  (*(code *)puVar1)((int)DAT_8c1622da);
  (*(code *)puVar1)((int)DAT_8c1622de);
  (*(code *)puVar1)((int)DAT_8c1622e2);
  (*(code *)puVar1)((int)DAT_8c1622e6);
  puVar1 = PTR_FUN_8c162308;
  uVar6 = *(undefined4 *)(PTR_DAT_8c162304 + 4);
  puVar5 = (undefined4 *)((int)puVar8 + (int)DAT_8c1622e8 + iVar4 + -4);
  *puVar5 = *(undefined4 *)PTR_DAT_8c162304;
  puVar5[1] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c162304 + 0xc);
  puVar5[2] = *(undefined4 *)(PTR_DAT_8c162304 + 8);
  puVar5[3] = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c162304 + 0x14);
  puVar5[4] = *(undefined4 *)(PTR_DAT_8c162304 + 0x10);
  puVar5[5] = uVar6;
  uVar7 = *(undefined4 *)(PTR_DAT_8c162304 + 0x1c);
  puVar5[6] = *(undefined4 *)(PTR_DAT_8c162304 + 0x18);
  uVar6 = *(undefined4 *)(PTR_DAT_8c162304 + 0x20);
  puVar5[7] = uVar7;
  puVar5[8] = uVar6;
  puVar5[10] = *(undefined4 *)(PTR_DAT_8c162304 + 0x28);
  puVar5[9] = param_2;
  uVar6 = (*(code *)PTR_FUN_8c162308)(0,0x1f,(undefined1 *)((int)puVar8 + iVar4 + -4),param_2);
  iVar3 = (int)DAT_8c1622da;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  uVar6 = (*(code *)puVar1)(0,7,(undefined1 *)((int)puVar8 + iVar3 + iVar4 + -4),param_2);
  iVar3 = (int)DAT_8c1622de;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  uVar6 = (*(code *)puVar1)(0,5,(undefined1 *)((int)puVar8 + iVar3 + iVar4 + -4),param_2);
  iVar3 = (int)DAT_8c1622e2;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  uVar6 = (*(code *)puVar1)(0,10,(undefined1 *)((int)puVar8 + iVar3 + iVar4 + -4),param_2);
  iVar3 = (int)DAT_8c1622e6;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  puVar2 = PTR_FUN_8c16230c;
  uVar6 = (*(code *)puVar1)(0,2,(undefined1 *)((int)puVar8 + iVar3 + iVar4 + -4),param_2);
  iVar3 = (int)DAT_8c1622e8;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  uVar6 = (*(code *)PTR_FUN_8c162310)(0,(undefined1 *)((int)puVar8 + iVar3 + iVar4 + -4));
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  uVar9 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44((int)uVar11,(int)(uVar11 >> 0x20));
  }
  (*(code *)puVar2)(uVar9,*(undefined4 *)(param_1 + 0x2c),1,0x10,3);
  uVar9 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44((int)uVar11,(int)(uVar11 >> 0x20));
  }
  (*(code *)puVar2)(uVar9,*(undefined4 *)(param_1 + 0x30),1,0x10,3);
  uVar9 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44((int)uVar11,(int)(uVar11 >> 0x20));
  }
  (*(code *)puVar2)(uVar9,*(undefined4 *)(param_1 + 0x34),1,0x10,3);
  uVar9 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44((int)uVar11,(int)(uVar11 >> 0x20));
  }
  (*(code *)puVar2)(uVar9,*(undefined4 *)(param_1 + 0x38),1,0x10,3);
  uVar9 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44((int)uVar11,(int)(uVar11 >> 0x20));
  }
  (*(code *)puVar2)(uVar9,*(undefined4 *)(param_1 + 0x3c),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44(*(undefined4 *)PTR_DAT_8c162314,(int)(uVar11 >> 0x20));
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_8c162314;
  }
  (*(code *)PTR_FUN_8c162318)(uVar9,*(undefined4 *)(param_1 + 0x3c),8,3);
  if (in_FPSCR_SZ == '\0') {
    in_xd14 = CONCAT44((int)uVar11,(int)(uVar11 >> 0x20));
  }
  (*(code *)PTR_FUN_8c16231c)(in_xd14,*(undefined4 *)(param_1 + 0x40),1,0x10,3);
  (*(code *)PTR_FUN_8c162320)(*(undefined4 *)(param_1 + 0x34),DAT_8c162324);
  return;
}

