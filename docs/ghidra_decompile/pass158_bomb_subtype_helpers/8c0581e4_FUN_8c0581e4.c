// entry: 8c0581e4
// name: FUN_8c0581e4
// signature: undefined FUN_8c0581e4(void)


void FUN_8c0581e4(undefined8 param_1,double param_2,int param_3)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  double in_dr2;
  undefined8 uVar6;
  undefined4 uVar8;
  double dVar7;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  float fVar13;
  undefined8 in_dr12;
  double dVar14;
  double dVar15;
  float fVar16;
  double in_xd12;
  undefined4 in_PR;
  int iVar17;
  int iVar18;
  int iVar19;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [8];
  undefined8 uStack_1c;
  float fVar12;
  
  iVar3 = 1;
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_1c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_1c._0_4_ = (int)in_dr12;
    puVar5 = auStack_24;
  }
  else {
    puVar5 = auStack_34;
    uStack_1c = in_dr12;
  }
  *(undefined4 *)(puVar5 + -4) = in_PR;
  iVar2 = *(int *)(param_3 + 8);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar5 + -0x18) = (int)((ulonglong)param_1 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar5 + -0x18) = param_1;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    if (in_FPSCR_SZ == '\0') {
      dVar14 = *(double *)(puVar5 + -0xc);
      dVar15 = (double)CONCAT44(DAT_8c058360,DAT_8c058364);
    }
    else {
      in_xd12 = *(double *)(puVar5 + -0xc);
      dVar14 = *(double *)(puVar5 + -8);
      dVar15 = (double)CONCAT44(DAT_8c058364,DAT_8c058360);
    }
    do {
      iVar17 = param_3 + 0x24;
      uVar10 = SUB84(param_2,0);
      uVar8 = SUB84(in_dr2,0);
      if (iVar4 != 0) {
        if (*(int *)(iVar17 + iVar4 * 0x14 + 8) != 0) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = CONCAT44(*(undefined4 *)(puVar5 + -0x18),(int)param_1);
          }
          else {
            param_1 = *(undefined8 *)(puVar5 + -0x18);
          }
          (*(code *)PTR_FUN_8c058368)(param_1);
        }
        iVar2 = *(int *)(iVar17 + iVar4 * 0x14 + 8);
        iVar3 = *(int *)(iVar2 + 4);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar5 + -0x30) = *(undefined4 *)(iVar3 + 0x18);
          uVar6 = CONCAT44(*(undefined4 *)(iVar3 + 0x1c),uVar8);
          *(undefined4 *)(puVar5 + -0x2c) = *(undefined4 *)(iVar3 + 0x1c);
        }
        else {
          *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(iVar3 + 0x18);
          uVar6 = *(undefined8 *)(iVar3 + 0x1c);
          *(undefined8 *)(puVar5 + -0x2c) = uVar6;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar8 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20);
          uVar6 = CONCAT44(uVar8,(int)uVar6);
          *(undefined4 *)(puVar5 + -0x28) = uVar8;
        }
        else {
          uVar6 = *(undefined8 *)(*(int *)(iVar2 + 4) + 0x20);
          *(undefined8 *)(puVar5 + -0x28) = uVar6;
        }
        iVar3 = *(int *)(iVar2 + 4);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar5 + -0x10) = *(undefined4 *)(iVar3 + 0x24);
          pdVar1 = (double *)(iVar3 + 0x28);
          *(undefined4 *)(puVar5 + -0x24) = *(undefined4 *)(iVar3 + 0x30);
          uVar6 = CONCAT44(*(undefined4 *)(iVar3 + 0x34),(int)uVar6);
          *(undefined4 *)(puVar5 + -0x20) = *(undefined4 *)(iVar3 + 0x34);
        }
        else {
          *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(iVar3 + 0x24);
          in_xd12 = *(double *)(iVar3 + 0x28);
          pdVar1 = (double *)(iVar3 + 0x2c);
          *(undefined8 *)(puVar5 + -0x24) = *(undefined8 *)(iVar3 + 0x30);
          uVar6 = *(undefined8 *)(iVar3 + 0x34);
          *(undefined8 *)(puVar5 + -0x20) = uVar6;
        }
        dVar14 = *pdVar1;
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x38),(int)uVar6);
        }
        else {
          uVar6 = *(undefined8 *)(*(int *)(iVar2 + 4) + 0x38);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar5 + -0x1c) = (int)((ulonglong)uVar6 >> 0x20);
        }
        else {
          *(undefined8 *)(puVar5 + -0x1c) = uVar6;
        }
        iVar2 = *(int *)(iVar17 + iVar4 * 0x14 + 4) + 0x10;
        (*(code *)PTR_FUN_8c05836c)(iVar2);
        uVar8 = (undefined4)uVar6;
        (*(code *)PTR_FUN_8c058370)(iVar2,puVar5 + -0x30);
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)(puVar5 + -0x10),uVar8);
          dVar11 = (double)CONCAT44(SUB84(dVar14,0),uVar10);
        }
        else {
          dVar7 = *(double *)(puVar5 + -0x10);
          dVar11 = in_xd12;
        }
        fVar16 = (float)((ulonglong)dVar15 >> 0x20);
        fVar13 = SUB84(dVar15,0);
        if (in_FPSCR_PR == '\0') {
          fVar9 = ((float)((ulonglong)dVar7 >> 0x20) * fVar16) / fVar13;
          in_dr2 = (double)CONCAT44(fVar9,SUB84(dVar7,0));
          fVar12 = ((float)((ulonglong)dVar11 >> 0x20) * fVar16) / fVar13;
          dVar11 = (double)CONCAT44(fVar12,SUB84(dVar11,0));
          iVar17 = (int)fVar9;
          iVar18 = (int)fVar12;
        }
        else {
          in_dr2 = (dVar7 * dVar15) / dVar15;
          dVar11 = (dVar11 * dVar15) / dVar15;
          iVar17 = (int)in_dr2;
          iVar18 = (int)dVar11;
        }
        dVar7 = dVar14;
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar11,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar13 = ((float)((ulonglong)dVar7 >> 0x20) * fVar16) / fVar13;
          param_2 = (double)CONCAT44(fVar13,SUB84(dVar7,0));
          iVar19 = (int)fVar13;
        }
        else {
          param_2 = (dVar7 * dVar15) / dVar15;
          iVar19 = (int)param_2;
        }
        (*(code *)PTR_FUN_8c058374)(iVar2,iVar17,iVar18,iVar19);
        (*(code *)PTR_FUN_8c058378)(iVar2,puVar5 + -0x24);
        iVar2 = *(int *)(param_3 + 8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
    *(int *)(puVar5 + -0x14) = iVar3;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar5 + -8) = (int)((ulonglong)dVar14 >> 0x20);
      *(int *)(puVar5 + -0xc) = SUB84(dVar14,0);
    }
    else {
      *(double *)(puVar5 + -8) = dVar14;
      *(double *)(puVar5 + -0xc) = in_xd12;
    }
  }
  return;
}

