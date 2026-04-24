// entry: 8c0461d8
// name: FUN_8c0461d8
// signature: undefined FUN_8c0461d8(void)


/* WARNING: Removing unreachable block (ram,0x8c046226) */

void FUN_8c0461d8(double param_1,double param_2,double *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 in_fr1;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  bool bVar14;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fVar9;
  
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(param_3 + 3),in_fr1);
  }
  else {
    dVar5 = param_3[3];
  }
  fVar11 = (float)((ulonglong)param_1 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + fVar11,SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + param_1;
  }
  fVar6 = (float)((ulonglong)dVar5 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(float *)(param_3 + 3) = fVar6;
  }
  else {
    param_3[3] = dVar5;
  }
  if (*(int *)(param_3 + 2) == 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar13 = CONCAT44(*(undefined4 *)DAT_8c046278,SUB84(param_2,0));
    }
    else {
      uVar13 = *DAT_8c046278;
    }
    iVar3 = (*(code *)PTR_FUN_8c046288)(uVar13);
    *(int *)((int)param_3 + 0x14) = iVar3 + 1;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),DAT_8c04627c);
      param_1 = (double)CONCAT44(fVar11,*(undefined4 *)DAT_8c046278);
    }
    fVar11 = SUB84(param_1,0);
    if (in_FPSCR_PR == '\0') {
      fVar10 = SUB84(param_2,0) / fVar11;
      bVar14 = fVar6 < fVar10;
    }
    else {
      fVar10 = SUB84(param_2 / param_1,0);
      bVar14 = dVar5 < param_2 / param_1;
    }
    if (bVar14) {
      if (in_FPSCR_PR == '\0') {
        fVar9 = (float)*(int *)(PTR_DAT_8c046280 + 0x14) / fVar11;
        dVar7 = (double)((ulonglong)(uint)fVar9 << 0x20);
        bVar14 = fVar6 < fVar9;
      }
      else {
        dVar7 = (double)*(int *)(PTR_DAT_8c046280 + 0x14) / param_1;
        bVar14 = dVar5 < dVar7;
      }
      uVar1 = (undefined4)((ulonglong)dVar7 >> 0x20);
      puVar4 = PTR_DAT_8c046280;
      puVar2 = PTR_DAT_8c046280;
      while (!bVar14) {
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)*(int *)(puVar2 + 0x24) / fVar11;
          dVar7 = (double)((ulonglong)(uint)fVar9 << 0x20);
          bVar14 = fVar6 < fVar9;
        }
        else {
          dVar7 = (double)*(int *)(puVar2 + 0x24) / param_1;
          bVar14 = dVar5 < dVar7;
        }
        uVar1 = (undefined4)((ulonglong)dVar7 >> 0x20);
        puVar4 = puVar4 + 0x10;
        puVar2 = puVar2 + 0x10;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(puVar4 + 8),fVar11);
        dVar12 = (double)CONCAT44(*(undefined4 *)(puVar2 + 0x18),fVar10);
      }
      else {
        dVar7 = *(double *)(puVar4 + 8);
        dVar12 = *(double *)(puVar2 + 0x18);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar6);
      }
      fVar11 = (float)((ulonglong)dVar7 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - fVar11,SUB84(dVar12,0));
      }
      else {
        dVar12 = dVar12 - dVar7;
      }
      if (in_FPSCR_PR == '\0') {
        dVar8 = (double)CONCAT44(uVar1,(float)*(int *)(puVar4 + 4) / SUB84(dVar7,0));
      }
      else {
        dVar8 = (double)CONCAT44(uVar1,(float)*(int *)(puVar4 + 4)) / dVar7;
      }
      *(undefined4 *)(param_3 + 5) = *(undefined4 *)(puVar4 + 0xc);
      if (in_FPSCR_PR == '\0') {
        fVar9 = (float)((ulonglong)dVar12 >> 0x20);
        fVar10 = ((SUB84(dVar12,0) - SUB84(dVar8,0)) * fVar9) /
                 ((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0));
        dVar12 = (double)CONCAT44(fVar9,fVar10);
        dVar7 = (double)CONCAT44(fVar11 + fVar10,SUB84(dVar7,0));
      }
      else {
        dVar12 = ((dVar12 - dVar8) * (dVar12 - dVar8)) / (dVar8 - dVar8);
        dVar7 = dVar7 + dVar12;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(param_3 + 4) = (int)((ulonglong)dVar7 >> 0x20);
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),DAT_8c046284);
      }
      else {
        param_3[4] = dVar7;
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar12,0) / SUB84(dVar7,0);
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar11);
        bVar14 = fVar6 < fVar11;
      }
      else {
        dVar12 = dVar12 / dVar7;
        fVar11 = SUB84(dVar12,0);
        bVar14 = dVar5 < dVar12;
      }
      if (bVar14) {
        if (in_FPSCR_PR == '\0') {
          dVar5 = (double)CONCAT44(fVar6 / fVar11,SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 / dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)param_3 = (int)((ulonglong)dVar5 >> 0x20);
        }
        else {
          *param_3 = dVar5;
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)param_3 = 0x3f800000;
      }
      else {
        *param_3 = (double)CONCAT44(0x3f800000,fVar11);
      }
    }
    else {
      *(undefined4 *)((int)param_3 + 0x1c) = 0;
    }
  }
  return;
}

