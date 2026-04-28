// entry: 8c0d6ae4
// name: FUN_8c0d6ae4


/* WARNING: Removing unreachable block (ram,0x8c0d6bd0) */
/* WARNING: Removing unreachable block (ram,0x8c0d6c1a) */
/* WARNING: Removing unreachable block (ram,0x8c0d6c1c) */
/* WARNING: Removing unreachable block (ram,0x8c0d6c1e) */

void FUN_8c0d6ae4(double param_1,double param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 in_dr2;
  undefined4 uVar12;
  double dVar13;
  float fVar14;
  undefined8 in_dr12;
  double dVar15;
  double in_dr14;
  double in_xd8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_1c [8];
  undefined8 local_14;
  undefined8 uStack_c;
  
  puVar1 = PTR_FUN_8c0d6c60;
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = (undefined1 *)((int)&local_14 + 4);
    local_14 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)local_14);
  }
  else {
    puVar11 = local_1c;
    uStack_c = in_dr12;
    local_14 = in_dr14;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  iVar9 = 9;
  iVar5 = 0;
  do {
    (*(code *)puVar1)(*(undefined4 *)(iVar5 + *(int *)(param_3 + 0x30)));
    iVar9 = iVar9 + -1;
    iVar5 = iVar5 + 4;
  } while (iVar9 != 0);
  iVar9 = 9;
  iVar5 = 0;
  do {
    (*(code *)puVar1)(*(undefined4 *)(iVar5 + *(int *)(param_3 + 0x30) + 0x24));
    iVar9 = iVar9 + -1;
    iVar5 = iVar5 + 4;
  } while (iVar9 != 0);
  dVar15 = (double)CONCAT44(0x3f800000,(int)in_dr12);
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44(0x40000000,(int)in_dr12);
  }
  else {
    dVar15 = dVar15 + dVar15;
  }
  iVar7 = 0;
  iVar9 = 2;
  (*(code *)puVar1)(*(undefined4 *)(*(int *)(param_3 + 0x30) + 0x4c));
  (*(code *)puVar1)(*(undefined4 *)(*(int *)(param_3 + 0x30) + 0x48));
  iVar5 = *(int *)(param_3 + 0x50);
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (double)(ulonglong)DAT_8c0d6c64;
  }
  do {
    uVar12 = SUB84(param_2,0);
    if (iVar7 == iVar5) {
      iVar6 = *(int *)(*(int *)(param_3 + 0x30) + 0x58);
      if (*(int *)(param_3 + 0x54) != 0) {
        iVar2 = *(int *)(param_3 + 0x44);
        uVar4 = *(undefined4 *)(PTR_DAT_8c0d6c68 + 4);
        *(undefined4 *)(puVar11 + -0x24) = *(undefined4 *)PTR_DAT_8c0d6c68;
        *(undefined4 *)(puVar11 + -0x20) = uVar4;
        uVar4 = *(undefined4 *)(PTR_DAT_8c0d6c68 + 0xc);
        *(undefined4 *)(puVar11 + -0x1c) = *(undefined4 *)(PTR_DAT_8c0d6c68 + 8);
        *(undefined4 *)(puVar11 + -0x18) = uVar4;
        uVar4 = *(undefined4 *)(PTR_DAT_8c0d6c68 + 0x14);
        *(undefined4 *)(puVar11 + -0x14) = *(undefined4 *)(PTR_DAT_8c0d6c68 + 0x10);
        *(undefined4 *)(puVar11 + -0x10) = uVar4;
        uVar4 = *(undefined4 *)(PTR_DAT_8c0d6c68 + 0x1c);
        *(undefined4 *)(puVar11 + -0xc) = *(undefined4 *)(PTR_DAT_8c0d6c68 + 0x18);
        *(undefined4 *)(puVar11 + -8) = uVar4;
        iVar3 = iVar7;
        if (iVar2 == 3) {
          iVar3 = iVar7 + 2;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar12 = *(undefined4 *)(**(int **)(param_3 + 0x34) + 8);
        }
        else {
          in_xd8 = *(double *)(**(int **)(param_3 + 0x34) + 8);
        }
        dVar13 = in_xd8;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(uVar12,uVar12);
        }
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) /
                                    (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar13,0));
        }
        else {
          dVar13 = dVar13 / dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(*(undefined4 *)(puVar11 + iVar3 * 8 + -0x24),SUB84(in_dr14,0));
        }
        else {
          param_1 = *(double *)(puVar11 + iVar3 * 8 + -0x24);
        }
        if (in_FPSCR_PR == '\0') {
          param_1 = (double)CONCAT44((float)((ulonglong)param_1 >> 0x20) -
                                     (float)((ulonglong)dVar13 >> 0x20),SUB84(param_1,0));
        }
        else {
          param_1 = param_1 - dVar13;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)(int)*(short *)(puVar11 + iVar3 * 8 + -0x20),
                                     SUB84(dVar13,0));
        }
        else {
          param_2 = (double)(int)*(short *)(puVar11 + iVar3 * 8 + -0x20);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = (float)((ulonglong)param_2 >> 0x20) + SUB84(param_2,0);
          param_2 = (double)CONCAT44(fVar14,SUB84(param_2,0));
          fVar14 = (float)(int)fVar14;
        }
        else {
          param_2 = param_2 + param_2;
          fVar14 = (float)((ulonglong)(double)(int)param_2 >> 0x20);
        }
        (**(code **)(*(int *)(iVar6 + 0x78) + 0x38))
                  (CONCAT44(fVar14,(float)(int)*(short *)(puVar11 + iVar3 * 8 + -0x1e)),param_2,
                   iVar6 + *(int *)(*(int *)(iVar6 + 0x78) + 0x30));
        in_dr14 = param_1;
        (**(code **)(*(int *)(iVar6 + 0x78) + 0x20))
                  (param_1,iVar6 + *(int *)(*(int *)(iVar6 + 0x78) + 0x18));
      }
      (*(code *)puVar1)(iVar6);
    }
    else {
      (*(code *)puVar1)(*(undefined4 *)(iVar7 * 4 + *(int *)(param_3 + 0x30) + 0x50));
    }
    uVar12 = (undefined4)in_dr2;
    uVar4 = SUB84(param_1,0);
    iVar9 = iVar9 + -1;
    iVar7 = iVar7 + 1;
  } while (iVar9 != 0);
  uVar10 = *(uint *)(**(int **)(*(int *)(param_3 + 0x38) + 8) + 0x18);
  uVar8 = **(undefined4 **)(param_3 + 0x40);
  (*(code *)PTR_FUN_8c0d6c6c)(uVar8,uVar10);
  puVar1 = PTR_FUN_8c0d6c80;
  uVar10 = (uVar10 & DAT_8c0d6c70) >> 0x18;
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)uVar10,uVar4);
  }
  else {
    dVar15 = (double)uVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(DAT_8c0d6c78,uVar12);
  }
  else {
    dVar13 = (double)CONCAT44(PTR_FUN_8c0d6c7c,DAT_8c0d6c78);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) /
                              (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar15,0));
  }
  else {
    dVar15 = dVar15 / dVar13;
  }
  (*(code *)PTR_FUN_8c0d6c7c)(dVar15,uVar8);
  (*(code *)puVar1)(**(undefined4 **)(param_3 + 0x40));
  (*(code *)puVar1)(*(undefined4 *)(*(int *)(param_3 + 0x40) + 4));
  (*(code *)puVar1)(*(undefined4 *)(*(int *)(param_3 + 0x40) + 8));
  return;
}

