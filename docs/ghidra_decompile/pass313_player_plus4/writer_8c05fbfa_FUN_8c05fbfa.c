// entry: 8c05fbfa
// name: FUN_8c05fbfa


void FUN_8c05fbfa(double param_1,int param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  double *pdVar11;
  undefined1 *puVar12;
  double dVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 in_dr12;
  double dVar16;
  undefined4 in_fr15;
  float fVar18;
  double dVar17;
  double in_xd12;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  puVar2 = PTR_FUN_8c05fd88;
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr12;
    puVar12 = auStack_14;
  }
  else {
    puVar12 = auStack_24;
    uStack_c = in_dr12;
  }
  *(undefined4 *)(puVar12 + -4) = in_PR;
  iVar6 = (*(code *)PTR_FUN_8c05fd84)(0);
  *(int *)(param_2 + 0x30) = iVar6;
  puVar4 = PTR__memset_8c05fd90;
  puVar3 = PTR__malloc_8c05fd8c;
  piVar9 = (int *)(param_2 + 0x34);
  uVar7 = 0;
  (**(code **)(*(int *)(iVar6 + 0x28) + 0x20))(iVar6 + *(int *)(*(int *)(iVar6 + 0x28) + 0x18));
  dVar17 = in_xd12;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(uVar7,in_fr15);
  }
  (*(code *)puVar2)(param_2,*(undefined4 *)(param_2 + 0x30));
  puVar5 = PTR_FUN_8c05fd98;
  iVar6 = (*(code *)PTR_FUN_8c05fd94)(0);
  *(int *)(param_2 + 0x44) = iVar6;
  dVar16 = (double)CONCAT44(0x3f800000,uVar7);
  (**(code **)(*(int *)(iVar6 + 0x28) + 0x20))(iVar6 + *(int *)(*(int *)(iVar6 + 0x28) + 0x18));
  (*(code *)puVar2)(param_2,*(undefined4 *)(param_2 + 0x44));
  iVar6 = (*(code *)PTR_FUN_8c05fd9c)(0);
  *(int *)(param_2 + 0x48) = iVar6;
  (**(code **)(*(int *)(iVar6 + 0x28) + 0x20))(iVar6 + *(int *)(*(int *)(iVar6 + 0x28) + 0x18));
  (*(code *)puVar2)(param_2,*(undefined4 *)(param_2 + 0x48));
  iVar6 = (*(code *)PTR_FUN_8c05fda0)(0);
  *(int *)(param_2 + 0x68) = iVar6;
  (**(code **)(*(int *)(iVar6 + 0x28) + 0x20))(iVar6 + *(int *)(*(int *)(iVar6 + 0x28) + 0x18));
  (*(code *)puVar2)(param_2,*(undefined4 *)(param_2 + 0x68));
  iVar6 = (*(code *)PTR_FUN_8c05fda4)(0);
  *piVar9 = iVar6;
  (**(code **)(*(int *)(iVar6 + 0x28) + 0x20))(*piVar9 + *(int *)(*(int *)(iVar6 + 0x28) + 0x18));
  (*(code *)puVar2)(param_2,*piVar9);
  uVar7 = (*(code *)PTR_FUN_8c05fda8)(0);
  *(undefined4 *)(param_2 + 0x38) = uVar7;
  iVar6 = *(int *)(*(int *)(param_2 + 0x38) + 0x28);
  (**(code **)(iVar6 + 0x20))(*(int *)(param_2 + 0x38) + *(int *)(iVar6 + 0x18));
  (*(code *)puVar2)(param_2,*(undefined4 *)(param_2 + 0x38));
  uVar7 = (*(code *)PTR_FUN_8c05fdac)(0);
  *(undefined4 *)(param_2 + 0x3c) = uVar7;
  iVar6 = *(int *)(*(int *)(param_2 + 0x3c) + 0x28);
  (**(code **)(iVar6 + 0x20))(*(int *)(param_2 + 0x3c) + *(int *)(iVar6 + 0x18));
  (*(code *)puVar2)(param_2,*(undefined4 *)(param_2 + 0x3c));
  uVar7 = (*(code *)PTR_FUN_8c05fdb0)(0);
  *(undefined4 *)(param_2 + 0x40) = uVar7;
  iVar6 = *(int *)(*(int *)(param_2 + 0x40) + 0x28);
  (**(code **)(iVar6 + 0x20))(*(int *)(param_2 + 0x40) + *(int *)(iVar6 + 0x18));
  iVar10 = 2;
  (*(code *)puVar2)(param_2,*(undefined4 *)(param_2 + 0x40));
  iVar6 = (*(code *)PTR_FUN_8c05fdb4)(0);
  *(int *)(param_2 + 100) = iVar6;
  (**(code **)(*(int *)(iVar6 + 0x28) + 0x20))(iVar6 + *(int *)(*(int *)(iVar6 + 0x28) + 0x18));
  (*(code *)puVar2)(param_2,*(undefined4 *)(param_2 + 100));
  uVar7 = (*(code *)puVar3)(8);
  *(undefined4 *)(param_2 + 0x58) = uVar7;
  (*(code *)puVar4)(0,8);
  iVar6 = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),DAT_8c05fdb8);
  }
  do {
    fVar18 = (float)((ulonglong)dVar17 >> 0x20);
    dVar13 = dVar17;
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(fVar18,SUB84(param_1,0));
    }
    if (in_FPSCR_PR == '\0') {
      param_1 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar17,0),
                                 SUB84(dVar13,0));
      dVar17 = (double)CONCAT44(fVar18 + (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar17,0));
    }
    else {
      param_1 = dVar13 * dVar17;
      dVar17 = dVar17 + dVar16;
    }
    uVar7 = (*(code *)puVar5)(param_1,0,4,0x60);
    iVar10 = iVar10 + -1;
    *(undefined4 *)(iVar6 + *(int *)(param_2 + 0x58)) = uVar7;
    iVar6 = iVar6 + 4;
  } while (iVar10 != 0);
  uVar7 = (*(code *)puVar3)(0x14);
  *(undefined4 *)(param_2 + 0x5c) = uVar7;
  (*(code *)puVar4)(0,0x14);
  *(undefined4 *)(param_2 + 0x60) = 5;
  uVar7 = (*(code *)puVar3)(8);
  *(undefined4 *)(param_2 + 0x4c) = uVar7;
  (*(code *)puVar4)(0,8);
  iVar6 = 2;
  iVar10 = 0;
  do {
    uVar7 = (*(code *)puVar3)(0x28);
    *(undefined4 *)(iVar10 + *(int *)(param_2 + 0x4c)) = uVar7;
    puVar1 = (undefined4 *)(iVar10 + *(int *)(param_2 + 0x4c));
    iVar10 = iVar10 + 4;
    (*(code *)puVar4)(*puVar1,0,0x28);
    puVar2 = PTR_FUN_8c05ff00;
    uVar15 = SUB84(dVar16,0);
    uVar7 = SUB84(param_1,0);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar8 = (*(code *)PTR_FUN_8c05fefc)(0);
  *(undefined4 *)(param_2 + 0x50) = uVar8;
  uVar8 = (*(code *)PTR_FUN_8c05ff04)(0);
  *(undefined4 *)(param_2 + 0x54) = uVar8;
  pdVar11 = (double *)**(int **)(param_2 + 0x4c);
  (*(code *)puVar4)(pdVar11,0,0x28);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar11 = uVar15;
    *(undefined4 *)((int)pdVar11 + 4) = uVar15;
  }
  else {
    *pdVar11 = in_xd12;
    *(double *)((int)pdVar11 + 4) = in_xd12;
  }
  *(undefined4 *)(pdVar11 + 3) = 0xffffffff;
  uVar8 = DAT_8c05ff08;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(pdVar11 + 1) = uVar15;
    *(undefined4 *)((int)pdVar11 + 0xc) = uVar15;
  }
  else {
    pdVar11[1] = in_xd12;
    *(double *)((int)pdVar11 + 0xc) = in_xd12;
  }
  *(undefined2 *)(pdVar11 + 2) = 0;
  *(undefined2 *)((int)pdVar11 + 0x12) = 0;
  *(undefined2 *)((int)pdVar11 + 0x14) = 0;
  *(undefined2 *)((int)pdVar11 + 0x16) = 0;
  *(undefined4 *)((int)pdVar11 + 0x1c) = uVar8;
  *(undefined4 *)(pdVar11 + 4) = 0;
  *(undefined4 *)((int)pdVar11 + 0x24) = 0;
  (*(code *)puVar2)(*(undefined4 *)(param_2 + 0x50),**(undefined4 **)(param_2 + 0x4c));
  uVar8 = *(undefined4 *)(param_2 + 0x50);
  *(int *)(puVar12 + -0xc) = (int)DAT_8c05fef2;
  *(undefined4 *)(puVar12 + -8) = 1;
  if (in_FPSCR_SZ == '\0') {
    uVar14 = CONCAT44(DAT_8c05ff0c,uVar7);
  }
  else {
    uVar14 = CONCAT44(PTR_FUN_8c05ff10,DAT_8c05ff0c);
  }
  (*(code *)PTR_FUN_8c05ff10)(uVar14,uVar8,(int)DAT_8c05fef4,(int)DAT_8c05fef6,(int)DAT_8c05fef8);
  uVar7 = (undefined4)uVar14;
  pdVar11 = *(double **)(*(int *)(param_2 + 0x4c) + 4);
  (*(code *)puVar4)(pdVar11,0,0x28);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar11 = uVar15;
    *(undefined4 *)((int)pdVar11 + 4) = uVar15;
  }
  else {
    *pdVar11 = in_xd12;
    *(double *)((int)pdVar11 + 4) = in_xd12;
  }
  *(undefined4 *)(pdVar11 + 3) = 0xffffffff;
  uVar8 = DAT_8c05ff08;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(pdVar11 + 1) = uVar15;
    *(undefined4 *)((int)pdVar11 + 0xc) = uVar15;
  }
  else {
    pdVar11[1] = in_xd12;
    *(double *)((int)pdVar11 + 0xc) = in_xd12;
  }
  *(undefined2 *)(pdVar11 + 2) = 0;
  *(undefined2 *)((int)pdVar11 + 0x12) = 0;
  *(undefined2 *)((int)pdVar11 + 0x14) = 0;
  *(undefined2 *)((int)pdVar11 + 0x16) = 0;
  *(undefined4 *)((int)pdVar11 + 0x1c) = uVar8;
  *(undefined4 *)(pdVar11 + 4) = 0;
  *(undefined4 *)((int)pdVar11 + 0x24) = 0;
  (*(code *)puVar2)(*(undefined4 *)(param_2 + 0x54),*(undefined4 *)(*(int *)(param_2 + 0x4c) + 4));
  (*(code *)PTR_FUN_8c05ff18)(*(undefined4 *)PTR_DAT_8c05ff14);
  (*(code *)PTR_FUN_8c05ff20)(DAT_8c05ff1c);
  (*(code *)PTR_FUN_8c05ff28)(*DAT_8c05ff24,0);
  (*(code *)PTR_FUN_8c05ff30)(*DAT_8c05ff2c);
  if (in_FPSCR_SZ == '\0') {
    in_xd12 = (double)CONCAT44(uVar15,uVar7);
  }
  (*(code *)PTR_FUN_8c05ff34)(in_xd12,param_2 + 0x10,1);
  return;
}

