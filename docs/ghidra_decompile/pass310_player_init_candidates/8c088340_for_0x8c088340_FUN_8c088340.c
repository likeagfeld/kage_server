// query addr: 0x8c088340
// containing entry: 8c088340
// name: FUN_8c088340
// signature: undefined FUN_8c088340(void)
// body addrs: 1030


/* WARNING: Removing unreachable block (ram,0x8c088448) */
/* WARNING: Removing unreachable block (ram,0x8c0884b2) */

void FUN_8c088340(undefined4 param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
                 short *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined4 *puVar7;
  short *psVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  short sVar13;
  double *pdVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  double dVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  double dVar22;
  undefined8 uVar23;
  double in_xd0;
  double dVar24;
  double in_xd4;
  undefined8 in_xd8;
  bool bVar25;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar15 = (undefined4)param_3;
  iVar1 = (int)param_6[0xe];
  pdVar14 = (double *)(param_6 + 0x10);
  iVar4 = 0;
  if (0 < iVar1 + -1) {
    if (in_FPSCR_SZ == '\0') {
      param_2 = CONCAT44(*(undefined4 *)(param_6 + 4),(int)param_2);
    }
    else {
      param_2 = *(undefined8 *)(param_6 + 4);
    }
    uVar2 = (int)(iVar1 + -2 + (uint)(iVar1 + -2 < 0)) >> 1;
    psVar5 = param_6 + 0x18;
    fVar16 = (float)((ulonglong)param_2 >> 0x20);
    if ((int)(uVar2 + 1) < 3) {
      if (uVar2 + 1 != 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar23 = CONCAT44(*(undefined4 *)psVar5,uVar15);
          fVar18 = *(float *)(param_5 + 0x1c);
        }
        else {
          uVar23 = *(undefined8 *)psVar5;
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
        }
        if (in_FPSCR_PR == '\0') {
          uVar23 = CONCAT44(fVar18 * fVar16 + (float)((ulonglong)uVar23 >> 0x20),(int)uVar23);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)psVar5 = (int)((ulonglong)uVar23 >> 0x20);
          param_3 = CONCAT44(*(undefined4 *)(param_6 + 0x22),(int)uVar23);
          fVar18 = *(float *)(param_5 + 0x1c);
        }
        else {
          *(undefined8 *)psVar5 = uVar23;
          param_3 = *(undefined8 *)(param_6 + 0x22);
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
        }
        if (in_FPSCR_PR == '\0') {
          param_3 = CONCAT44(fVar18 * fVar16 + (float)((ulonglong)param_3 >> 0x20),(int)param_3);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(param_6 + 0x22) = (int)((ulonglong)param_3 >> 0x20);
        }
        else {
          *(undefined8 *)(param_6 + 0x22) = param_3;
        }
        psVar5 = param_6 + 0x2c;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44(*(undefined4 *)psVar5,(int)param_3);
        fVar18 = *(float *)(param_5 + 0x1c);
      }
      else {
        uVar23 = *(undefined8 *)psVar5;
        fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
      }
      if (in_FPSCR_PR == '\0') {
        uVar23 = CONCAT44(fVar18 * fVar16 + (float)((ulonglong)uVar23 >> 0x20),(int)uVar23);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)psVar5 = (int)((ulonglong)uVar23 >> 0x20);
        uVar23 = CONCAT44(*(undefined4 *)(psVar5 + 10),(int)uVar23);
        fVar18 = *(float *)(param_5 + 0x1c);
      }
      else {
        *(undefined8 *)psVar5 = uVar23;
        uVar23 = *(undefined8 *)(psVar5 + 10);
        fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
      }
      if (in_FPSCR_PR == '\0') {
        uVar23 = CONCAT44(fVar18 * fVar16 + (float)((ulonglong)uVar23 >> 0x20),(int)uVar23);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(psVar5 + 10) = (int)((ulonglong)uVar23 >> 0x20);
      }
      else {
        *(undefined8 *)(psVar5 + 10) = uVar23;
      }
    }
    else {
      uVar9 = uVar2 >> 1;
      if ((uVar2 & 1) != 0) {
        if (in_FPSCR_SZ == '\0') {
          uVar23 = CONCAT44(*(undefined4 *)psVar5,uVar15);
          fVar18 = *(float *)(param_5 + 0x1c);
        }
        else {
          uVar23 = *(undefined8 *)psVar5;
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
        }
        if (in_FPSCR_PR == '\0') {
          uVar23 = CONCAT44(fVar18 * fVar16 + (float)((ulonglong)uVar23 >> 0x20),(int)uVar23);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)psVar5 = (int)((ulonglong)uVar23 >> 0x20);
          uVar23 = CONCAT44(*(undefined4 *)(param_6 + 0x22),(int)uVar23);
          fVar18 = *(float *)(param_5 + 0x1c);
        }
        else {
          *(undefined8 *)psVar5 = uVar23;
          uVar23 = *(undefined8 *)(param_6 + 0x22);
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
        }
        if (in_FPSCR_PR == '\0') {
          uVar23 = CONCAT44(fVar18 * fVar16 + (float)((ulonglong)uVar23 >> 0x20),(int)uVar23);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(param_6 + 0x22) = (int)((ulonglong)uVar23 >> 0x20);
        }
        else {
          *(undefined8 *)(param_6 + 0x22) = uVar23;
        }
        psVar5 = param_6 + 0x2c;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar18 = *(float *)(param_5 + 0x1c);
        uVar23 = CONCAT44(*(undefined4 *)(psVar5 + 10),*(undefined4 *)psVar5);
      }
      else {
        in_xd8 = *(undefined8 *)psVar5;
        fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
        uVar23 = *(undefined8 *)(psVar5 + 10);
      }
      if (in_FPSCR_PR == '\0') {
        uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),fVar18 * fVar16 + (float)uVar23);
      }
      psVar6 = psVar5 + 0x14;
      if (in_FPSCR_SZ == '\0') {
        *(int *)psVar5 = (int)uVar23;
        fVar18 = *(float *)(param_5 + 0x1c);
      }
      else {
        *(undefined8 *)psVar5 = in_xd8;
        fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
      }
      if (in_FPSCR_PR == '\0') {
        uVar23 = CONCAT44(fVar18 * fVar16 + (float)((ulonglong)uVar23 >> 0x20),(int)uVar23);
      }
      do {
        psVar8 = psVar5;
        if (in_FPSCR_SZ == '\0') {
          uVar15 = *(undefined4 *)psVar6;
          *(int *)(psVar8 + 10) = (int)((ulonglong)uVar23 >> 0x20);
          fVar18 = *(float *)(param_5 + 0x1c);
          uVar23 = CONCAT44(*(undefined4 *)(psVar6 + 10),uVar15);
        }
        else {
          in_xd8 = *(undefined8 *)psVar6;
          *(undefined8 *)(psVar8 + 10) = uVar23;
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
          uVar23 = *(undefined8 *)(psVar6 + 10);
        }
        psVar5 = psVar8 + 0x28;
        if (in_FPSCR_PR == '\0') {
          uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),fVar18 * fVar16 + (float)uVar23);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)psVar6 = (int)uVar23;
          fVar18 = *(float *)(param_5 + 0x1c);
        }
        else {
          *(undefined8 *)psVar6 = in_xd8;
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
        }
        if (in_FPSCR_PR == '\0') {
          uVar23 = CONCAT44(fVar18 * fVar16 + (float)((ulonglong)uVar23 >> 0x20),(int)uVar23);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar15 = *(undefined4 *)psVar5;
          *(int *)(psVar6 + 10) = (int)((ulonglong)uVar23 >> 0x20);
          fVar18 = *(float *)(param_5 + 0x1c);
          uVar23 = CONCAT44(*(undefined4 *)(psVar8 + 0x32),uVar15);
        }
        else {
          in_xd8 = *(undefined8 *)psVar5;
          *(undefined8 *)(psVar6 + 10) = uVar23;
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
          uVar23 = *(undefined8 *)(psVar8 + 0x32);
        }
        psVar6 = psVar6 + 0x28;
        if (in_FPSCR_PR == '\0') {
          uVar23 = CONCAT44((int)((ulonglong)uVar23 >> 0x20),fVar18 * fVar16 + (float)uVar23);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)psVar5 = (int)uVar23;
          fVar18 = *(float *)(param_5 + 0x1c);
        }
        else {
          *(undefined8 *)psVar5 = in_xd8;
          fVar18 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
        }
        uVar9 = uVar9 - 1;
        if (in_FPSCR_PR == '\0') {
          uVar23 = CONCAT44(fVar18 * fVar16 + (float)((ulonglong)uVar23 >> 0x20),(int)uVar23);
        }
      } while (0 < (int)uVar9);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(psVar8 + 0x32) = (int)((ulonglong)uVar23 >> 0x20);
      }
      else {
        *(undefined8 *)(psVar8 + 0x32) = uVar23;
      }
    }
    uVar15 = (undefined4)uVar23;
    iVar4 = uVar2 * 2 + 2;
  }
  if (iVar4 < iVar1) {
    if (in_FPSCR_SZ == '\0') {
      fVar16 = *(float *)(param_5 + 0x1c);
      uVar21 = CONCAT44(*(undefined4 *)(param_6 + 4),*(undefined4 *)(param_6 + iVar4 * 10 + 0x18));
    }
    else {
      in_xd8 = *(undefined8 *)(param_6 + iVar4 * 10 + 0x18);
      fVar16 = (float)((ulonglong)*(undefined8 *)(param_5 + 0x1c) >> 0x20);
      uVar21 = *(ulonglong *)(param_6 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      uVar21 = (ulonglong)(uint)(fVar16 * (float)(uVar21 >> 0x20) + (float)uVar21);
    }
    uVar15 = (undefined4)uVar21;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(param_6 + iVar4 * 10 + 0x18) = uVar15;
    }
    else {
      *(undefined8 *)(param_6 + iVar4 * 10 + 0x18) = in_xd8;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)pdVar14,uVar15);
    uVar15 = *(undefined4 *)(param_6 + 6);
    uVar23 = *(undefined8 *)(param_6 + 6);
    dVar24 = (double)CONCAT44(uVar15,(int)param_2);
  }
  else {
    dVar22 = *pdVar14;
    dVar24 = *(double *)(param_6 + 6);
    uVar23 = *(undefined8 *)(param_6 + 8);
    uVar15 = (undefined4)uVar23;
    in_xd0 = dVar24;
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) -
                              (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar24,0));
  }
  else {
    dVar24 = dVar24 - dVar22;
  }
  uVar17 = (undefined4)((ulonglong)uVar23 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)(param_6 + 0x12),SUB84(dVar22,0));
    param_1 = *(undefined4 *)(param_6 + 10);
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),uVar17);
  }
  else {
    dVar22 = *(double *)(param_6 + 0x12);
    in_xd4 = *(double *)(param_6 + 10);
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                              SUB84(dVar24,0) - (float)((ulonglong)dVar22 >> 0x20));
  }
  else {
    dVar24 = dVar24 - dVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)(param_6 + 0x14),SUB84(dVar22,0));
  }
  else {
    dVar22 = *(double *)(param_6 + 0x14);
  }
  dVar19 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(param_1,param_1);
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) -
                              (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 - dVar22;
  }
  if (iVar1 == 0) {
    if (*param_6 == 2) {
LAB_8c08849a:
      if (in_FPSCR_SZ == '\0') {
        param_6[2] = 0;
        param_6[3] = 0;
      }
      else {
        *(ulonglong *)(param_6 + 2) = (ulonglong)param_4;
      }
      *param_6 = 0;
      return;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)(ulonglong)*(uint *)(param_6 + iVar1 * 10 + 0xe);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(*(undefined4 *)((int)DAT_8c0884a8 + (int)param_6),SUB84(dVar22,0));
    }
    else {
      dVar22 = *(double *)((int)DAT_8c0884a8 + (int)param_6);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar22 >> 0x20) <= SUB84(dVar22,0)) {
      sVar13 = (short)(iVar1 + -1);
      param_6[0xe] = sVar13;
      if (*param_6 == 2) {
        if (sVar13 != 0) {
          return;
        }
        goto LAB_8c08849a;
      }
    }
    else if (*param_6 == 2) {
      return;
    }
  }
  fVar16 = SUB84(dVar22,0);
  if (in_FPSCR_PR == '\0') {
    bVar25 = (float)((ulonglong)dVar24 >> 0x20) == 0.0;
  }
  else {
    bVar25 = dVar24 == (double)(ulonglong)param_4;
  }
  if ((bVar25) && (SUB84(dVar24,0) == 0.0)) {
    if (in_FPSCR_PR == '\0') {
      bVar25 = (float)((ulonglong)dVar19 >> 0x20) == 0.0;
    }
    else {
      bVar25 = dVar19 == (double)(ulonglong)param_4;
    }
    if (bVar25) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)DAT_8c0884a6 + (int)param_6) = 0;
        return;
      }
      *(ulonglong *)((int)DAT_8c0884a6 + (int)param_6) = (ulonglong)param_4;
      return;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    fVar16 = *(float *)((int)DAT_8c088646 + (int)param_6);
    dVar22 = (double)CONCAT44(*(undefined4 *)(param_6 + 2),SUB84(dVar24,0));
  }
  else {
    dVar22 = *(double *)(param_6 + 2);
  }
  uVar20 = (undefined4)((ulonglong)dVar22 >> 0x20);
  dVar24 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(uVar20,fVar16);
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) - SUB84(dVar24,0),SUB84(dVar24,0));
  }
  else {
    dVar24 = dVar24 - dVar24;
  }
  if (fVar16 != 0.0) {
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                *(undefined4 *)((int)DAT_8c088648 + (int)param_6));
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar24 >> 0x20) < SUB84(dVar24,0)) {
      return;
    }
  }
  sVar13 = param_6[0xe];
  iVar1 = sVar13 + -1;
  if (0 < iVar1) {
    iVar1 = 1;
  }
  if (0 < iVar1) {
    uVar2 = (int)(iVar1 + -1 + (uint)(iVar1 + -1 < 0)) >> 1;
    iVar4 = iVar1 * 0x14;
    if ((int)(uVar2 + 1) < 3) {
      if (uVar2 + 1 != 1) {
        psVar6 = (short *)((int)pdVar14 + iVar4);
        uVar3 = *(undefined4 *)(psVar6 + 2);
        psVar5 = param_6 + iVar1 * 10 + 0x1a;
        *(undefined4 *)psVar5 = *(undefined4 *)psVar6;
        *(undefined4 *)(psVar5 + 2) = uVar3;
        uVar3 = *(undefined4 *)(psVar6 + 6);
        *(undefined4 *)(psVar5 + 4) = *(undefined4 *)(psVar6 + 4);
        *(undefined4 *)(psVar5 + 6) = uVar3;
        *(undefined4 *)(psVar5 + 8) = *(undefined4 *)(psVar6 + 8);
        psVar5 = param_6 + iVar1 * 10 + 6;
        iVar4 = iVar4 + -0x28;
        uVar3 = *(undefined4 *)(psVar5 + 2);
        *(undefined4 *)psVar6 = *(undefined4 *)psVar5;
        *(undefined4 *)(psVar6 + 2) = uVar3;
        uVar3 = *(undefined4 *)(psVar5 + 6);
        *(undefined4 *)(psVar6 + 4) = *(undefined4 *)(psVar5 + 4);
        *(undefined4 *)(psVar6 + 6) = uVar3;
        *(undefined4 *)(psVar6 + 8) = *(undefined4 *)(psVar5 + 8);
      }
      puVar7 = (undefined4 *)((int)pdVar14 + iVar4);
      puVar12 = (undefined4 *)((int)param_6 + iVar4 + 0x34);
      uVar3 = puVar7[1];
      *puVar12 = *puVar7;
      puVar12[1] = uVar3;
      uVar3 = puVar7[3];
      puVar12[2] = puVar7[2];
      puVar12[3] = uVar3;
      puVar12[4] = puVar7[4];
      puVar12 = (undefined4 *)((int)param_6 + iVar4 + 0xc);
      uVar3 = puVar12[1];
      *puVar7 = *puVar12;
      puVar7[1] = uVar3;
      uVar3 = puVar12[3];
      puVar7[2] = puVar12[2];
      puVar7[3] = uVar3;
      puVar7[4] = puVar12[4];
    }
    else {
      uVar9 = uVar2 >> 1;
      if ((uVar2 & 1) != 0) {
        psVar6 = (short *)((int)pdVar14 + iVar4);
        uVar3 = *(undefined4 *)(psVar6 + 2);
        psVar5 = param_6 + iVar1 * 10 + 0x1a;
        *(undefined4 *)psVar5 = *(undefined4 *)psVar6;
        *(undefined4 *)(psVar5 + 2) = uVar3;
        uVar3 = *(undefined4 *)(psVar6 + 6);
        *(undefined4 *)(psVar5 + 4) = *(undefined4 *)(psVar6 + 4);
        *(undefined4 *)(psVar5 + 6) = uVar3;
        *(undefined4 *)(psVar5 + 8) = *(undefined4 *)(psVar6 + 8);
        psVar5 = param_6 + iVar1 * 10 + 6;
        iVar4 = iVar4 + -0x28;
        uVar3 = *(undefined4 *)(psVar5 + 2);
        *(undefined4 *)psVar6 = *(undefined4 *)psVar5;
        *(undefined4 *)(psVar6 + 2) = uVar3;
        uVar3 = *(undefined4 *)(psVar5 + 6);
        *(undefined4 *)(psVar6 + 4) = *(undefined4 *)(psVar5 + 4);
        *(undefined4 *)(psVar6 + 6) = uVar3;
        *(undefined4 *)(psVar6 + 8) = *(undefined4 *)(psVar5 + 8);
      }
      puVar10 = (undefined4 *)((int)pdVar14 + iVar4);
      puVar7 = (undefined4 *)((int)param_6 + iVar4 + 0x34);
      uVar3 = puVar10[1];
      *puVar7 = *puVar10;
      puVar7[1] = uVar3;
      uVar3 = puVar10[3];
      puVar7[2] = puVar10[2];
      puVar7[3] = uVar3;
      puVar12 = (undefined4 *)((int)param_6 + iVar4 + 0xc);
      puVar7[4] = puVar10[4];
      uVar3 = puVar12[1];
      *puVar10 = *puVar12;
      puVar10[1] = uVar3;
      uVar3 = puVar12[3];
      puVar10[2] = puVar12[2];
      puVar10[3] = uVar3;
      uVar3 = puVar12[4];
      do {
        puVar12 = (undefined4 *)((int)pdVar14 + iVar4 + -0x28);
        puVar10[4] = uVar3;
        puVar7 = (undefined4 *)((int)param_6 + iVar4 + 0xc);
        uVar3 = puVar12[1];
        puVar11 = (undefined4 *)((int)param_6 + iVar4 + -0x1c);
        *puVar7 = *puVar12;
        puVar7[1] = uVar3;
        uVar3 = puVar12[3];
        puVar7[2] = puVar12[2];
        puVar7[3] = uVar3;
        puVar7[4] = puVar12[4];
        uVar3 = puVar11[1];
        *puVar12 = *puVar11;
        puVar12[1] = uVar3;
        uVar3 = puVar11[3];
        puVar12[2] = puVar11[2];
        puVar12[3] = uVar3;
        puVar10 = (undefined4 *)((int)pdVar14 + iVar4 + -0x50);
        puVar12[4] = puVar11[4];
        puVar7 = (undefined4 *)((int)param_6 + iVar4 + -0x1c);
        uVar3 = puVar10[1];
        puVar12 = (undefined4 *)((int)param_6 + iVar4 + -0x44);
        *puVar7 = *puVar10;
        puVar7[1] = uVar3;
        uVar3 = puVar10[3];
        puVar7[2] = puVar10[2];
        puVar7[3] = uVar3;
        puVar7[4] = puVar10[4];
        uVar3 = puVar12[1];
        *puVar10 = *puVar12;
        puVar10[1] = uVar3;
        uVar3 = puVar12[3];
        puVar10[2] = puVar12[2];
        puVar10[3] = uVar3;
        uVar9 = uVar9 - 1;
        uVar3 = puVar12[4];
        iVar4 = iVar4 + -0x50;
      } while (0 < (int)uVar9);
      puVar10[4] = uVar3;
    }
    iVar1 = uVar2 * -2 + iVar1 + -2;
  }
  if (-1 < iVar1) {
    psVar5 = (short *)((int)pdVar14 + iVar1 * 0x14);
    psVar6 = param_6 + iVar1 * 10 + 0x1a;
    uVar3 = *(undefined4 *)(psVar5 + 2);
    *(undefined4 *)psVar6 = *(undefined4 *)psVar5;
    *(undefined4 *)(psVar6 + 2) = uVar3;
    uVar3 = *(undefined4 *)(psVar5 + 6);
    *(undefined4 *)(psVar6 + 4) = *(undefined4 *)(psVar5 + 4);
    *(undefined4 *)(psVar6 + 6) = uVar3;
    *(undefined4 *)(psVar6 + 8) = *(undefined4 *)(psVar5 + 8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar14 = uVar15;
    *(undefined4 *)(param_6 + 0x12) = uVar17;
    *(int *)(param_6 + 0x14) = SUB84(dVar19,0);
    *(undefined4 *)(param_6 + 0x16) = *(undefined4 *)(param_6 + 0xc);
    param_6[0x18] = 0;
    param_6[0x19] = 0;
  }
  else {
    *pdVar14 = in_xd0;
    *(undefined8 *)(param_6 + 0x12) = uVar23;
    *(double *)(param_6 + 0x14) = in_xd4;
    *(undefined8 *)(param_6 + 0x16) = *(undefined8 *)(param_6 + 0xc);
    *(ulonglong *)(param_6 + 0x18) = (ulonglong)param_4;
  }
  if (sVar13 < 3) {
    param_6[0xe] = sVar13 + 1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)DAT_8c088646 + (int)param_6) = uVar20;
  }
  else {
    *(double *)((int)DAT_8c088646 + (int)param_6) = dVar22;
  }
  return;
}

