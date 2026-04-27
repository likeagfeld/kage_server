// entry: 8c1e2f34
// name: _njGenerateFogTable3


/* WARNING: Removing unreachable block (ram,0x8c1e2fc4) */
/* WARNING: Removing unreachable block (ram,0x8c1e2fb8) */
/* WARNING: Removing unreachable block (ram,0x8c1e2fd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _njGenerateFogTable3
   
   Library: 10.1 10.1 10.1 */

void _njGenerateFogTable3(double param_1,undefined4 param_2,double *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar8;
  double dVar7;
  float fVar9;
  float fVar10;
  double in_dr2;
  double dVar11;
  double dVar12;
  double dVar14;
  double dVar15;
  float in_fr13;
  undefined4 in_fr12;
  float fVar17;
  undefined8 in_dr14;
  double dVar18;
  double in_xd0;
  double dVar19;
  double in_xd4;
  double in_xd14;
  bool bVar20;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  char acStack_30 [20];
  undefined1 local_1c [4];
  undefined8 uStack_18;
  float fVar13;
  float fVar16;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_18);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_18._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pcVar6 = local_1c;
  }
  else {
    pcVar6 = acStack_30 + 8;
    uStack_18 = in_xd14;
  }
  *(undefined4 *)(pcVar6 + -4) = in_PR;
  uVar8 = SUB84(param_1,0);
  dVar18 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    in_fr13 = (float)((ulonglong)param_1 >> 0x20);
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c1e3040);
    dVar18 = (double)CONCAT44(uVar8,(int)in_dr14);
  }
  if (in_FPSCR_PR == '\0') {
    bVar20 = in_fr13 < SUB84(in_dr2,0);
  }
  else {
    bVar20 = (double)CONCAT44(in_fr12,in_fr13) < in_dr2;
  }
  dVar14 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),uVar8);
    dVar14 = in_xd14;
  }
  iVar5 = 0;
  if (in_FPSCR_PR == '\0') {
    dVar18 = (double)CONCAT44(-(float)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0));
  }
  else {
    dVar18 = -dVar18;
  }
  uVar3 = DAT_8c1e3044;
  if (!bVar20) {
    dVar7 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),uVar8);
    }
    param_1 = (double)(*(code *)PTR_FID_conflict__frexpf_8c1e3048)(dVar7,pcVar6 + -0xc);
    uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
    dVar11 = param_1;
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(uVar8,DAT_8c1e304c);
    }
    iVar1 = *(int *)(pcVar6 + -0xc);
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) * SUB84(dVar11,0),SUB84(dVar11,0)
                               );
    }
    else {
      dVar11 = dVar11 * dVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)CONCAT44(uVar8,SUB84(dVar7,0));
    }
    *(int *)(pcVar6 + -0xc) = iVar1 + -1;
    pcVar6[-8] = (char)(iVar1 + -1);
    if (in_FPSCR_PR == '\0') {
      uVar3 = (uint)(float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      uVar3 = (uint)dVar11;
    }
    uVar3 = uVar3 & DAT_8c1e3050 & 0xffff | (int)pcVar6[-8];
  }
  dVar7 = (double)(*(code *)PTR__kmSetFogDensity_8c1e3054)(param_1,uVar3);
  fVar17 = SUB84(dVar18,0);
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(fVar17,DAT_8c1e3058);
  }
  if (in_FPSCR_PR == '\0') {
    bVar20 = in_fr13 < (float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar14,0);
  }
  else {
    bVar20 = (double)CONCAT44(in_fr12,in_fr13) < dVar14 / dVar14;
  }
  fVar10 = (float)((ulonglong)dVar18 >> 0x20);
  if (bVar20) {
    dVar14 = dVar18;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(fVar10,param_2);
    }
  }
  else {
    dVar14 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(0x3f800000,param_2);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),in_fr13);
    dVar11 = (double)CONCAT44(_DAT_8c1e305c,0x3f800000);
  }
  else {
    dVar11 = (double)CONCAT44(__njGenerateFogTable,_DAT_8c1e305c);
  }
  uVar3 = 0;
  fVar16 = (float)((ulonglong)dVar14 >> 0x20);
  dVar15 = (double)CONCAT44(fVar16,-SUB84(dVar14,0));
  pdVar4 = param_3;
  do {
    uVar2 = (int)uVar3 >> 4;
    if ((int)uVar2 < 0) {
      iVar1 = 1 >> (~uVar2 & 0x1f) + 1;
    }
    else {
      iVar1 = 1 << (uVar2 & 0x1f);
    }
    dVar19 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar16);
      dVar19 = in_xd0;
    }
    fVar9 = (float)((ulonglong)dVar11 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar13 = (float)(uVar3 & 0xf) + fVar9;
      fVar9 = ((float)iVar1 * fVar13) / fVar9;
      dVar12 = (double)CONCAT44(fVar13,fVar9);
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) / fVar9);
    }
    else {
      dVar12 = (double)(uVar3 & 0xf) + dVar11;
      dVar12 = (dVar12 * dVar12) / dVar11;
      dVar7 = dVar7 / dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),SUB84(dVar7,0));
    }
    if (in_FPSCR_PR == '\0') {
      bVar20 = -SUB84(dVar14,0) < SUB84(dVar12,0);
    }
    else {
      bVar20 = dVar15 < dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)pdVar4 = SUB84(dVar7,0);
    }
    else {
      *pdVar4 = dVar19;
    }
    if (bVar20) {
      iVar5 = iVar5 + 1;
    }
    uVar3 = uVar3 + 1;
    pdVar4 = (double *)((int)pdVar4 + 4);
    in_xd0 = dVar19;
  } while ((int)uVar3 < 0x80);
  if (in_FPSCR_PR == '\0') {
    bVar20 = fVar16 == fVar10;
  }
  else {
    bVar20 = dVar15 == dVar18;
  }
  if (bVar20) {
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(iVar5 * 4 + (int)param_3),SUB84(dVar11,0));
    }
    else {
      dVar14 = *(double *)(iVar5 * 4 + (int)param_3);
    }
    iVar1 = 0;
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + fVar17,SUB84(dVar14,0));
    }
    else {
      dVar14 = dVar14 + dVar18;
    }
    if (0 < iVar5) {
      do {
        dVar7 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(SUB84(dVar14,0),*(undefined4 *)param_3);
        }
        iVar1 = iVar1 + 1;
        if (in_FPSCR_PR == '\0') {
          fVar10 = (SUB84(dVar7,0) + fVar17) / (float)((ulonglong)dVar14 >> 0x20);
          dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - fVar10,fVar10);
        }
        else {
          dVar7 = (dVar7 + dVar18) / dVar14;
          dVar7 = dVar7 - dVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)param_3 = (int)((ulonglong)dVar7 >> 0x20);
        }
        else {
          *param_3 = dVar7;
        }
        param_3 = (double *)((int)param_3 + 4);
      } while (iVar1 < iVar5);
    }
    while (iVar5 < 0x80) {
      iVar5 = iVar5 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)param_3 = 0;
      }
      else {
        *param_3 = (double)((ulonglong)dVar14 & 0xffffffff);
      }
      param_3 = (double *)((int)param_3 + 4);
    }
  }
  return;
}

