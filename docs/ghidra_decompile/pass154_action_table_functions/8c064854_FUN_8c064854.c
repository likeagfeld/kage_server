// entry: 8c064854
// name: FUN_8c064854
// signature: undefined FUN_8c064854(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c064854(ulonglong param_1,undefined4 param_2,int param_3)

{
  double *pdVar1;
  double *pdVar3;
  undefined8 *puVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  uint uVar12;
  ulonglong in_dr14;
  undefined4 uVar14;
  double dVar13;
  undefined8 in_xd8;
  undefined4 in_PR;
  int iVar15;
  int iVar16;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  undefined4 *puVar2;
  undefined4 *puVar4;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)uStack_c);
    puVar5 = &uStack_c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr14;
  }
  else {
    puVar5 = (undefined8 *)auStack_14;
    uStack_c = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = param_1 >> 0x20;
  }
  uVar12 = (uint)in_dr14;
  (*(code *)PTR_FUN_8c0649a4)(DAT_8c0649a0);
  uVar8 = (undefined4)param_1;
  dVar13 = (double)(ulonglong)uVar12;
  (*(code *)PTR_FUN_8c0649a8)(DAT_8c0649a0);
  uVar6 = DAT_8c0649ac;
  uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
  pdVar1 = (double *)(DAT_8c0649a0 + 0x1c);
  puVar2 = (undefined4 *)(DAT_8c0649a0 + 0x1c);
  pdVar3 = (double *)(DAT_8c0649a0 + 0xc);
  puVar4 = (undefined4 *)(DAT_8c0649a0 + 0xc);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0649a0 + 0x2c) = uVar14;
    *puVar2 = uVar14;
    *puVar4 = uVar14;
  }
  else {
    *(double *)(DAT_8c0649a0 + 0x2c) = dVar13;
    *pdVar1 = dVar13;
    *pdVar3 = dVar13;
  }
  (*(code *)PTR_FUN_8c0649b0)(uVar6,0,0);
  if (in_FPSCR_SZ == '\0') {
    uVar10 = *(undefined8 *)(param_3 + 0x28);
    uVar9 = CONCAT44(*(undefined4 *)(param_3 + 0x30),param_2);
    *(undefined4 *)((int)puVar5 + -0x24) = *(undefined4 *)(param_3 + 0x2c);
  }
  else {
    in_xd8 = *(undefined8 *)(param_3 + 0x28);
    uVar10 = *(undefined8 *)(param_3 + 0x2c);
    uVar9 = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)((int)puVar5 + -0x24) = uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar5 + -0x20) = (int)((ulonglong)uVar9 >> 0x20);
    *(int *)((int)puVar5 + -0x28) = (int)uVar10;
  }
  else {
    *(undefined8 *)((int)puVar5 + -0x20) = uVar9;
    *(undefined8 *)((int)puVar5 + -0x28) = in_xd8;
  }
  *(undefined4 *)((int)puVar5 + -0x18) = *(undefined4 *)((int)puVar5 + -0x24);
  *(undefined4 *)((int)puVar5 + -0x14) = *(undefined4 *)((int)puVar5 + -0x20);
  *(undefined4 *)((int)puVar5 + -0x10) = *(undefined4 *)((int)puVar5 + -0x28);
  *(undefined4 *)((int)puVar5 + -0x1c) = *(undefined4 *)((int)puVar5 + -0x28);
  *(undefined4 *)((int)puVar5 + -8) = *(undefined4 *)((int)puVar5 + -0x14);
  *(undefined4 *)((int)puVar5 + -0xc) = *(undefined4 *)((int)puVar5 + -0x18);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar5 + -0xc) = (int)((ulonglong)dVar13 >> 0x20);
  }
  else {
    *(double *)((int)puVar5 + -0xc) = dVar13;
  }
  (*(code *)PTR_FUN_8c0649b4)();
  (*(code *)PTR_FUN_8c0649b4)((undefined1 *)((int)puVar5 + -0x10));
  uVar6 = (*(code *)PTR_FUN_8c0649b8)
                    ((undefined1 *)((int)puVar5 + -0x1c),(undefined1 *)((int)puVar5 + -0x10));
  if (in_FPSCR_SZ == '\0') {
    uVar6 = uVar8;
  }
  dVar7 = (double)(*(code *)PTR_FUN_8c0649bc)(uVar6);
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(DAT_8c0649c8,DAT_8c0649c0);
  }
  else {
    dVar11 = (double)CONCAT44(DAT_8c0649cc,DAT_8c0649c8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar11,0),SUB84(dVar7,0));
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) * SUB84(dVar11,0));
  }
  else {
    dVar7 = dVar7 * dVar11;
    dVar13 = dVar13 * dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),DAT_8c0649cc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0) / SUB84(dVar11,0));
    iVar15 = (int)((float)((ulonglong)dVar7 >> 0x20) / (float)((ulonglong)dVar11 >> 0x20));
  }
  else {
    dVar13 = dVar13 / dVar11;
    iVar15 = (int)(dVar7 / dVar11);
  }
  *_DAT_8c0649c4 = iVar15;
  if (in_FPSCR_PR == '\0') {
    iVar16 = (int)SUB84(dVar13,0);
  }
  else {
    iVar16 = (int)dVar13;
  }
  *DAT_8c0649d0 = iVar15 - iVar16;
  return;
}

