// entry: 8c043610
// name: FUN_8c043610
// signature: undefined FUN_8c043610(void)


/* WARNING: Removing unreachable block (ram,0x8c04383e) */

void FUN_8c043610(undefined4 param_1,double param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined1 *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double in_dr12;
  double dVar20;
  undefined8 in_xd8;
  undefined8 in_xd12;
  undefined8 in_xd14;
  bool bVar21;
  undefined4 in_PR;
  uint uVar22;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = SUB84(in_dr12,0);
    puVar14 = auStack_2c;
  }
  else {
    puVar14 = auStack_3c;
    uStack_24 = in_dr12;
  }
  *(undefined4 *)(puVar14 + -4) = in_PR;
  iVar6 = (int)DAT_8c0436d2;
  if (in_FPSCR_SZ == '\0') {
    param_1 = *(undefined4 *)PTR_DAT_8c043704;
  }
  *(undefined4 *)(puVar14 + (int)DAT_8c0436d6 + iVar6 + -4) =
       *(undefined4 *)(param_4 + DAT_8c0436d4 + 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)((ulonglong)*(uint *)(*(int *)(DAT_8c0436d8 + param_4) + 0x18) << 0x20);
  }
  else {
    dVar20 = *(double *)(*(int *)(DAT_8c0436d8 + param_4) + 0x18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(*(undefined4 *)(DAT_8c0436da + param_4),param_3);
  }
  else {
    dVar19 = *(double *)(DAT_8c0436da + param_4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                              (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar20,0));
  }
  else {
    dVar20 = dVar20 - dVar19;
  }
  dVar16 = dVar20;
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),param_1);
  }
  dVar15 = (double)(*(code *)PTR_FID_conflict__fmod_8c043708)();
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)PTR_DAT_8c043704);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar16,0),SUB84(dVar15,0));
  }
  else {
    dVar15 = dVar15 / dVar16;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar14 + iVar6 + -4) = (int)((ulonglong)dVar15 >> 0x20);
    dVar19 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c04370c,SUB84(dVar19,0));
  }
  else {
    *(double *)(puVar14 + iVar6 + -4) = dVar15;
    dVar19 = *(double *)PTR_DAT_8c04370c;
  }
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) -
                              (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar20,0));
  }
  else {
    dVar20 = dVar20 - dVar19;
  }
  fVar18 = (float)((ulonglong)dVar20 >> 0x20);
  dVar17 = dVar20;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(fVar18,SUB84(dVar16,0));
  }
  if (in_FPSCR_PR != '\0' || SUB84(dVar20,0) <= fVar18) {
    dVar16 = (double)(*(code *)PTR_FID_conflict__fmod_8c043708)(dVar17);
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c043704,SUB84(dVar19,0));
    }
    else {
      dVar19 = *(double *)PTR_DAT_8c043704;
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) /
                                (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 / dVar19;
    }
  }
  else if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44(0xbf800000,SUB84(dVar15,0));
  }
  else {
    dVar16 = -(double)CONCAT44(0x3f800000,SUB84(dVar15,0));
  }
  puVar2 = PTR_DAT_8c043710;
  uVar5 = SUB84(dVar20,0);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar14 + iVar6) = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined4 *)(PTR_DAT_8c043710 + 8) = uVar5;
    *(undefined4 *)(puVar2 + 4) = uVar5;
  }
  else {
    *(double *)(puVar14 + iVar6) = dVar16;
    *(undefined8 *)(PTR_DAT_8c043710 + 8) = in_xd14;
    *(undefined8 *)(puVar2 + 4) = in_xd14;
  }
  iVar4 = (int)DAT_8c0436dc;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)puVar2 = uVar5;
  }
  else {
    *(undefined8 *)puVar2 = in_xd14;
  }
  iVar12 = 0;
  iVar11 = 2;
  uVar5 = (*(code *)PTR_FUN_8c043714)
                    (*(undefined4 *)((int)DAT_8c0436de + *(int *)(iVar4 + param_4)),4,3);
  *(undefined4 *)(puVar2 + 0x28) = uVar5;
  do {
    uVar22 = SUB84(param_2,0);
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar12 * 4 + iVar6 + -4),SUB84(dVar19,0));
    }
    else {
      dVar19 = *(double *)(puVar14 + iVar12 * 4 + iVar6 + -4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar21 = (float)((ulonglong)dVar19 >> 0x20) < SUB84(dVar20,0);
    }
    else {
      bVar21 = dVar19 < dVar20;
    }
    if (!bVar21) {
      iVar4 = (*(code *)PTR_FUN_8c04387c)
                        (*(undefined4 *)(puVar14 + (int)DAT_8c04386e + iVar6 + -4),iVar12 + 1);
      uVar10 = *(undefined4 *)(iVar4 + 0x84);
      *(undefined4 *)(puVar14 + iVar6 + 4) = *(undefined4 *)(iVar4 + 0x80);
      uVar5 = *(undefined4 *)(iVar4 + 0x88);
      *(undefined4 *)(puVar14 + iVar6 + 8) = uVar10;
      iVar9 = iVar12 * 0xc;
      *(undefined4 *)(puVar14 + iVar6 + 0xc) = uVar5;
      iVar7 = iVar12 * 4;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar7 + iVar6 + -4),
                                  *(undefined4 *)(DAT_8c043880 + iVar9));
      }
      else {
        in_xd8 = *(undefined8 *)(DAT_8c043880 + iVar9);
        dVar19 = *(double *)(puVar14 + iVar7 + iVar6 + -4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar18 = SUB84(dVar19,0) * (float)((ulonglong)dVar19 >> 0x20);
      }
      else {
        fVar18 = SUB84(dVar19 * dVar19,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar14 + iVar6 + 0x10) = fVar18;
        dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar7 + iVar6 + -4),
                                  *(undefined4 *)(DAT_8c043880 + iVar9 + 4));
      }
      else {
        *(undefined8 *)(puVar14 + iVar6 + 0x10) = in_xd8;
        in_xd8 = *(undefined8 *)(DAT_8c043880 + iVar9 + 4);
        dVar19 = *(double *)(puVar14 + iVar7 + iVar6 + -4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar18 = SUB84(dVar19,0) * (float)((ulonglong)dVar19 >> 0x20);
      }
      else {
        fVar18 = SUB84(dVar19 * dVar19,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar14 + iVar6 + 0x14) = fVar18;
        dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar7 + iVar6 + -4),
                                  *(undefined4 *)(DAT_8c043880 + iVar9 + 8));
      }
      else {
        *(undefined8 *)(puVar14 + iVar6 + 0x14) = in_xd8;
        in_xd8 = *(undefined8 *)(DAT_8c043880 + iVar9 + 8);
        dVar19 = *(double *)(puVar14 + iVar7 + iVar6 + -4);
      }
      pdVar8 = (double *)(puVar14 + iVar6 + 0x1c);
      if (in_FPSCR_PR == '\0') {
        fVar18 = SUB84(dVar19,0) * (float)((ulonglong)dVar19 >> 0x20);
      }
      else {
        fVar18 = SUB84(dVar19 * dVar19,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar14 + iVar6 + 0x18) = fVar18;
      }
      else {
        *(undefined8 *)(puVar14 + iVar6 + 0x18) = in_xd8;
      }
      *(undefined4 *)(puVar14 + iVar6 + 0x20) = *(undefined4 *)(puVar14 + iVar6 + 0x14);
      *(undefined4 *)pdVar8 = *(undefined4 *)(puVar14 + iVar6 + 0x10);
      *(undefined4 *)(puVar14 + iVar6 + 0x24) = *(undefined4 *)(puVar14 + iVar6 + 0x18);
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)pdVar8,fVar18);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                   *(undefined4 *)(puVar14 + iVar6 + 4));
      }
      else {
        dVar19 = *pdVar8;
        in_xd12 = *(undefined8 *)(puVar14 + iVar6 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar18 = SUB84(in_dr12,0) + (float)((ulonglong)dVar19 >> 0x20);
      }
      else {
        fVar18 = SUB84(in_dr12 + dVar19,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar14 + iVar6 + 4) = fVar18;
        dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar6 + 0x20),SUB84(dVar19,0));
        dVar16 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar6 + 8),fVar18);
      }
      else {
        *(undefined8 *)(puVar14 + iVar6 + 4) = in_xd12;
        dVar19 = *(double *)(puVar14 + iVar6 + 0x20);
        dVar16 = *(double *)(puVar14 + iVar6 + 8);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr12 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) +
                                   (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar16,0));
      }
      else {
        in_dr12 = dVar16 + dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar14 + iVar6 + 8) = (int)((ulonglong)in_dr12 >> 0x20);
        dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar6 + 0x24),SUB84(dVar19,0));
        dVar20 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar6 + 0xc),SUB84(dVar20,0));
      }
      else {
        *(double *)(puVar14 + iVar6 + 8) = in_dr12;
        dVar19 = *(double *)(puVar14 + iVar6 + 0x24);
        dVar20 = *(double *)(puVar14 + iVar6 + 0xc);
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) +
                                  (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 + dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar14 + iVar6 + 0xc) = (int)((ulonglong)dVar20 >> 0x20);
      }
      else {
        *(double *)(puVar14 + iVar6 + 0xc) = dVar20;
      }
      (*(code *)PTR__njPushMatrixEx_8c043884)();
      param_2 = dVar20;
      uVar1 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        param_2 = (double)(ulonglong)uVar22;
        uVar1 = CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
      }
      (*(code *)PTR__njTranslate_8c043888)(uVar1,param_2,0);
      (*(code *)PTR_FUN_8c04388c)
                (*(undefined4 *)((int)DAT_8c043872 + *(int *)(DAT_8c043870 + param_4)),1,9,1);
      (*(code *)PTR__njPopMatrixEx_8c043890)();
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)(puVar14 + iVar12 * 4 + iVar6 + -4),
                                  *(undefined4 *)DAT_8c043894);
      }
      else {
        dVar19 = *(double *)(puVar14 + iVar12 * 4 + iVar6 + -4);
        in_xd8 = *DAT_8c043894;
      }
      if (in_FPSCR_PR == '\0') {
        fVar18 = (float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar19,0);
        dVar19 = (double)CONCAT44(fVar18,SUB84(dVar19,0));
        uVar22 = (uint)fVar18;
      }
      else {
        dVar19 = dVar19 * dVar19;
        uVar22 = (uint)dVar19;
      }
      if (uVar22 == 0) {
        pcVar13 = PTR_DAT_8c043898 + DAT_8c043874;
        if (*pcVar13 == '\0') {
          uVar5 = *DAT_8c0438c0;
        }
        else {
          uVar5 = *DAT_8c04389c;
        }
        (*(code *)PTR_FUN_8c0438a0)(uVar5,pcVar13[1]);
        (*(code *)PTR_FUN_8c0438a4)(uVar5,pcVar13[2],pcVar13[3],0);
      }
      puVar3 = PTR_DAT_8c0438b0;
      puVar2 = PTR_DAT_8c0438a8;
      if ((-1 < (int)uVar22) && ((int)uVar22 < 0xf)) {
        iVar7 = (int)DAT_8c043878;
        *(uint *)(PTR_DAT_8c0438a8 + 0x20) =
             (uVar22 & (int)DAT_8c043876) << 0xd | DAT_8c0438ac | (int)DAT_8c04387a;
        *(undefined **)(puVar14 + iVar7 + iVar6 + -4) = puVar3;
        (*(code *)PTR_FUN_8c0438b4)(puVar14 + iVar6 + 0x28,puVar2,iVar4,0);
        (*(code *)PTR_FUN_8c0438b8)(puVar14 + iVar6 + 0x28);
        *(undefined **)(puVar14 + (int)DAT_8c043878 + iVar6 + -4) = PTR_DAT_8c0438bc;
      }
    }
    iVar11 = iVar11 + -1;
    iVar12 = iVar12 + 1;
  } while (iVar11 != 0);
  return;
}

