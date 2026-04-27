// entry: 8c10523a
// name: FUN_8c10523a


/* WARNING: Removing unreachable block (ram,0x8c105338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c10523a(double param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined8 uVar13;
  double dVar14;
  float fVar15;
  double in_dr14;
  undefined4 uVar17;
  double dVar16;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_14 [8];
  undefined8 uStack_c;
  
  puVar3 = PTR_FUN_8c105364;
  uVar17 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_c = (double)CONCAT44(uVar17,(undefined4)uStack_c);
    puVar11 = &uStack_c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = SUB84(in_dr14,0);
  }
  else {
    puVar11 = (undefined8 *)local_14;
    uStack_c = in_dr14;
  }
  *(undefined4 *)((int)puVar11 + -4) = in_PR;
  psVar10 = (short *)((int)puVar11 + -0x14);
  piVar8 = *(int **)(param_3 + 0x3c);
  uVar2 = *(undefined2 *)(PTR_DAT_8c105360 + 2);
  *(undefined2 *)((int)puVar11 + -0x14) = *(undefined2 *)PTR_DAT_8c105360;
  iVar9 = 5;
  *(undefined2 *)((int)puVar11 + -0x12) = uVar2;
  iVar4 = *piVar8;
  *(undefined2 *)((int)puVar11 + -0x10) = *(undefined2 *)(PTR_DAT_8c105360 + 4);
  *(undefined2 *)((int)puVar11 + -0xe) = *(undefined2 *)(PTR_DAT_8c105360 + 6);
  *(undefined2 *)((int)puVar11 + -0xc) = *(undefined2 *)(PTR_DAT_8c105360 + 8);
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(iVar4 + 4),param_2);
    in_dr14 = (double)CONCAT44(uVar17,DAT_8c105368);
  }
  else {
    dVar14 = *(double *)(iVar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + SUB84(in_dr14,0),SUB84(dVar14,0))
    ;
  }
  else {
    dVar14 = dVar14 + in_dr14;
  }
  iVar5 = *(int *)(param_3 + 0x40) * 0x3a + (int)DAT_8c105358;
  iVar4 = 0;
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44((float)iVar5 + (float)((ulonglong)dVar14 >> 0x20),SUB84(in_dr14,0));
    psVar10 = (short *)((int)puVar11 + -0x14);
  }
  else {
    dVar16 = (double)iVar5 + dVar14;
  }
  do {
    uVar17 = SUB84(param_1,0);
    iVar5 = *(int *)(param_3 + 0x2c);
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (undefined4)((ulonglong)dVar16 >> 0x20);
    }
    iVar7 = *(int *)(iVar4 + iVar5 + 0x14);
    iVar6 = *(int *)(iVar7 + 0x78);
    sVar1 = *psVar10;
    psVar10 = psVar10 + 1;
    if (in_FPSCR_PR == '\0') {
      param_1 = (double)CONCAT44((float)(int)sVar1,uVar17);
    }
    else {
      param_1 = (double)(int)sVar1;
    }
    (**(code **)(iVar6 + 0x20))(param_1,iVar7 + *(int *)(iVar6 + 0x18));
    (*(code *)puVar3)(*(undefined4 *)(iVar4 + *(int *)(param_3 + 0x2c) + 0x14));
    iVar9 = iVar9 + -1;
    iVar4 = iVar4 + 4;
  } while (iVar9 != 0);
  piVar8 = *(int **)(param_3 + 0x3c);
  *(int *)((int)puVar11 + -8) = iVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(*piVar8 + 4),SUB84(dVar14,0));
  }
  else {
    dVar14 = *(double *)(*piVar8 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + SUB84(dVar16,0),SUB84(dVar14,0));
  }
  else {
    dVar14 = dVar14 + dVar16;
  }
  fVar15 = (float)((ulonglong)dVar14 >> 0x20);
  if (((int)*(char *)(param_3 + 0x4b) & 0x80U) == 0) {
    fVar12 = (float)(*(int *)(param_3 + 0x40) * 0x3a + (int)DAT_8c10535e);
    iVar4 = *(int *)(**(int **)(param_3 + 0x2c) + 0x78);
    if (in_FPSCR_PR == '\0') {
      fVar12 = fVar12 + fVar15;
    }
    else {
      fVar12 = SUB84((double)CONCAT44((int)((ulonglong)param_1 >> 0x20),fVar12) + dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar13 = CONCAT44(_DAT_8c10536c,fVar12);
    }
    else {
      uVar13 = CONCAT44(_LAB_8c105370,_DAT_8c10536c);
    }
    (**(code **)(iVar4 + 0x20))(uVar13,**(int **)(param_3 + 0x2c) + *(int *)(iVar4 + 0x18));
    (*(code *)puVar3)(**(undefined4 **)(param_3 + 0x2c));
  }
  else {
    iVar6 = 5;
    iVar5 = (int)DAT_8c10535c;
    iVar9 = *(int *)(param_3 + 0x40) * 0x3a + (int)DAT_8c10535a;
    iVar4 = 0;
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)((ulonglong)(uint)((float)iVar9 + fVar15) << 0x20);
    }
    else {
      dVar14 = (double)iVar9 + dVar14;
    }
    do {
      uVar17 = SUB84(param_1,0);
      if (in_FPSCR_SZ == '\0') {
        uVar17 = (undefined4)((ulonglong)dVar14 >> 0x20);
      }
      iVar9 = *(int *)(iVar4 + *(int *)(param_3 + 0x2c));
      if (in_FPSCR_PR == '\0') {
        param_1 = (double)CONCAT44((float)iVar5,uVar17);
      }
      else {
        param_1 = (double)iVar5;
      }
      iVar5 = iVar5 + 0x15;
      iVar7 = *(int *)(iVar9 + 0x78);
      (**(code **)(iVar7 + 0x20))(param_1,iVar9 + *(int *)(iVar7 + 0x18));
      (*(code *)puVar3)(*(undefined4 *)(iVar4 + *(int *)(param_3 + 0x2c)));
      iVar6 = iVar6 + -1;
      iVar4 = iVar4 + 4;
    } while (iVar6 != 0);
  }
  return;
}

