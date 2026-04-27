// entry: 8c10509e
// name: FUN_8c10509e


/* WARNING: Removing unreachable block (ram,0x8c1051f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c10509e(double param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  undefined1 *puVar11;
  uint uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double in_dr12;
  undefined4 uVar17;
  double dVar16;
  float fVar18;
  float fVar19;
  double in_dr14;
  double dVar20;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_24 [16];
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  puVar3 = PTR_FUN_8c105218;
  uVar17 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_c = (double)CONCAT44(uVar17,(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = SUB84(in_dr12,0);
    puVar11 = auStack_14;
  }
  else {
    puVar11 = local_24;
    uStack_c = in_dr12;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  psVar10 = (short *)(puVar11 + -0x18);
  piVar7 = *(int **)(param_3 + 0x3c);
  uVar2 = *(undefined2 *)(PTR_DAT_8c105214 + 2);
  iVar9 = 5;
  *(undefined2 *)(puVar11 + -0x18) = *(undefined2 *)PTR_DAT_8c105214;
  *(undefined2 *)(puVar11 + -0x16) = uVar2;
  iVar4 = *piVar7;
  *(undefined2 *)(puVar11 + -0x14) = *(undefined2 *)(PTR_DAT_8c105214 + 4);
  iVar8 = *(int *)(param_3 + 0x38);
  *(undefined2 *)(puVar11 + -0x12) = *(undefined2 *)(PTR_DAT_8c105214 + 6);
  *(undefined2 *)(puVar11 + -0x10) = *(undefined2 *)(PTR_DAT_8c105214 + 8);
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(iVar4 + 4),param_2);
  }
  else {
    dVar15 = *(double *)(iVar4 + 4);
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr12 = (double)CONCAT44(uVar17,DAT_8c10521c);
  }
  iVar4 = **(int **)(iVar8 + 4);
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(in_dr12,0),SUB84(dVar15,0))
    ;
  }
  else {
    dVar15 = dVar15 + in_dr12;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(iVar4 + 0xc));
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(in_dr14,0) + (float)((ulonglong)dVar15 >> 0x20);
  }
  else {
    fVar18 = SUB84(in_dr14 + dVar15,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(iVar4 + 8),SUB84(dVar15,0));
  }
  else {
    dVar15 = *(double *)(iVar4 + 8);
  }
  if (in_FPSCR_PR == '\0') {
    iVar4 = (int)(float)((ulonglong)dVar15 >> 0x20);
  }
  else {
    iVar4 = (int)dVar15;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(DAT_8c105220,fVar18);
  }
  else {
    dVar20 = (double)CONCAT44(_DAT_8c105224,DAT_8c105220);
  }
  iVar8 = 0;
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44((float)iVar4,SUB84(in_dr12,0));
    psVar10 = (short *)(puVar11 + -0x18);
  }
  else {
    dVar16 = (double)iVar4;
  }
  do {
    uVar17 = SUB84(param_1,0);
    if (in_FPSCR_SZ == '\0') {
      uVar17 = SUB84(dVar20,0);
    }
    iVar6 = *(int *)(iVar8 + *(int *)(param_3 + 0x2c) + 0x14);
    iVar4 = *(int *)(iVar6 + 0x78);
    sVar1 = *psVar10;
    psVar10 = psVar10 + 1;
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((float)(int)sVar1,uVar17);
    }
    else {
      dVar13 = (double)(int)sVar1;
    }
    (**(code **)(iVar4 + 0x20))(dVar13,iVar6 + *(int *)(iVar4 + 0x18));
    uVar12 = SUB84(dVar13,0);
    iVar4 = *(int *)(param_3 + 0x2c);
    if (in_FPSCR_SZ == '\0') {
      uVar12 = (uint)((ulonglong)dVar16 >> 0x20);
    }
    iVar6 = *(int *)(iVar8 + iVar4 + 0x14);
    param_1 = dVar20;
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)(ulonglong)uVar12;
    }
    iVar5 = *(int *)(iVar6 + 0x78);
    (**(code **)(iVar5 + 0x38))(iVar6 + *(int *)(iVar5 + 0x30));
    (*(code *)puVar3)(*(undefined4 *)(iVar8 + *(int *)(param_3 + 0x2c) + 0x14));
    fVar18 = SUB84(param_1,0);
    iVar9 = iVar9 + -1;
    iVar8 = iVar8 + 4;
  } while (iVar9 != 0);
  piVar7 = *(int **)(param_3 + 0x3c);
  *(int *)(puVar11 + -8) = iVar4;
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(*piVar7 + 4),SUB84(dVar15,0));
  }
  else {
    dVar15 = *(double *)(*piVar7 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar16,0),SUB84(dVar15,0));
  }
  else {
    dVar15 = dVar15 + dVar16;
  }
  iVar4 = *(int *)**(undefined4 **)(param_3 + 0x38);
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar4 + 0xc));
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = SUB84(dVar20,0) + (float)((ulonglong)dVar15 >> 0x20);
  }
  else {
    fVar19 = SUB84(dVar20 + dVar15,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(iVar4 + 8),SUB84(dVar15,0));
  }
  else {
    dVar15 = *(double *)(iVar4 + 8);
  }
  if (in_FPSCR_PR == '\0') {
    iVar4 = (int)(float)((ulonglong)dVar15 >> 0x20);
  }
  else {
    iVar4 = (int)dVar15;
  }
  *(short *)(puVar11 + -0xc) = (short)iVar4;
  if (((int)*(char *)(param_3 + 0x4b) & 0x80U) == 0) {
    if (in_FPSCR_SZ == '\0') {
      fVar18 = fVar19;
    }
    iVar4 = *(int *)(**(int **)(param_3 + 0x2c) + 0x78);
    if (in_FPSCR_SZ == '\0') {
      uVar14 = CONCAT44(DAT_8c105228,fVar18);
    }
    else {
      uVar14 = CONCAT44(_DAT_8c10522c,DAT_8c105228);
    }
    (**(code **)(iVar4 + 0x20))(uVar14,**(int **)(param_3 + 0x2c) + *(int *)(iVar4 + 0x18));
    iVar4 = *(int *)(**(int **)(param_3 + 0x2c) + 0x78);
    if (in_FPSCR_SZ == '\0') {
      uVar14 = CONCAT44(_DAT_8c10522c,(float)(int)*(short *)(puVar11 + -0xc));
    }
    else {
      uVar14 = CONCAT44(uRam8c105230,_DAT_8c10522c);
    }
    (**(code **)(iVar4 + 0x38))(uVar14,**(int **)(param_3 + 0x2c) + *(int *)(iVar4 + 0x30));
    (*(code *)puVar3)(**(undefined4 **)(param_3 + 0x2c));
  }
  else {
    iVar8 = (int)DAT_8c105210;
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)((ulonglong)(uint)(float)iVar4 << 0x20);
    }
    else {
      dVar15 = (double)iVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)(ulonglong)(uint)fVar19;
    }
    else {
      dVar20 = (double)CONCAT44(DAT_8c105228,_DAT_8c105224);
    }
    iVar9 = 5;
    iVar4 = 0;
    do {
      uVar17 = SUB84(param_1,0);
      if (in_FPSCR_SZ == '\0') {
        uVar17 = SUB84(dVar20,0);
      }
      iVar6 = *(int *)(iVar4 + *(int *)(param_3 + 0x2c));
      if (in_FPSCR_PR == '\0') {
        dVar16 = (double)CONCAT44((float)iVar8,uVar17);
      }
      else {
        dVar16 = (double)iVar8;
      }
      iVar8 = iVar8 + 0x15;
      iVar5 = *(int *)(iVar6 + 0x78);
      (**(code **)(iVar5 + 0x20))(dVar16,iVar6 + *(int *)(iVar5 + 0x18));
      uVar12 = SUB84(dVar16,0);
      if (in_FPSCR_SZ == '\0') {
        uVar12 = (uint)((ulonglong)dVar15 >> 0x20);
      }
      iVar6 = *(int *)(iVar4 + *(int *)(param_3 + 0x2c));
      param_1 = dVar20;
      if (in_FPSCR_SZ == '\0') {
        param_1 = (double)(ulonglong)uVar12;
      }
      iVar5 = *(int *)(iVar6 + 0x78);
      (**(code **)(iVar5 + 0x38))(iVar6 + *(int *)(iVar5 + 0x30));
      (*(code *)puVar3)(*(undefined4 *)(iVar4 + *(int *)(param_3 + 0x2c)));
      iVar9 = iVar9 + -1;
      iVar4 = iVar4 + 4;
    } while (iVar9 != 0);
  }
  return;
}

