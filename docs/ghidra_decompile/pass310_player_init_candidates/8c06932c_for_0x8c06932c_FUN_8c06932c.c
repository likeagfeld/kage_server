// query addr: 0x8c06932c
// containing entry: 8c06932c
// name: FUN_8c06932c
// signature: undefined FUN_8c06932c(void)
// body addrs: 408


/* WARNING: Removing unreachable block (ram,0x8c0694ba) */

void FUN_8c06932c(ulonglong param_1,double param_2,double param_3,int param_4)

{
  undefined *puVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined8 in_dr12;
  double dVar18;
  float fVar19;
  double dVar20;
  ulonglong in_xd12;
  undefined8 in_xd14;
  bool bVar21;
  int iVar22;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
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
  iVar9 = 8;
  uVar15 = 0;
  iVar6 = *(int *)(DAT_8c06945a + param_4);
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(DAT_8c069468,DAT_8c06946c);
  }
  else {
    dVar18 = (double)CONCAT44(DAT_8c06946c,DAT_8c069468);
    in_xd14 = CONCAT44(PTR_FUN_8c069470,DAT_8c06946c);
  }
  iVar8 = 0;
  do {
    uVar13 = SUB84(param_3,0);
    psVar10 = (short *)(*(int *)(DAT_8c06945c + iVar6) + iVar8);
    if (*psVar10 != -1) {
      iVar22 = (*(code *)PTR_FUN_8c069470)(*(undefined4 *)(DAT_8c06945e + param_4),4,1,0);
      uVar7 = *(undefined4 *)(iVar22 + 4);
      dVar17 = (double)(*(code *)PTR_FUN_8c069484)(iVar22);
      uVar11 = SUB84(param_2,0);
      if (in_FPSCR_SZ == '\0') {
        param_3 = (double)CONCAT44(*(undefined4 *)(psVar10 + 2),uVar13);
      }
      else {
        param_3 = *(double *)(psVar10 + 2);
      }
      if (in_FPSCR_PR == '\0') {
        bVar21 = (float)((ulonglong)dVar17 >> 0x20) < (float)((ulonglong)param_3 >> 0x20);
      }
      else {
        bVar21 = dVar17 < param_3;
      }
      if (bVar21) {
        *psVar10 = -1;
      }
      else {
        (*(code *)PTR__njPushMatrixEx_8c069488)();
        uVar13 = SUB84(param_3,0);
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44(*(undefined4 *)(psVar10 + 10),uVar11);
          uVar16 = CONCAT44(*(undefined4 *)(psVar10 + 6),(int)uVar15);
        }
        else {
          uVar16 = *(undefined8 *)(psVar10 + 6);
          param_2 = *(double *)(psVar10 + 10);
        }
        (*(code *)PTR__njTranslate_8c06948c)(uVar16,param_2,0);
        uVar14 = (uint)uVar16;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(*(undefined4 *)(psVar10 + 8),uVar13);
        }
        else {
          dVar17 = *(double *)(psVar10 + 8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar19 = ((float)((ulonglong)dVar17 >> 0x20) * (float)((ulonglong)dVar18 >> 0x20)) /
                   SUB84(dVar18,0);
          param_3 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
          iVar22 = (int)fVar19;
        }
        else {
          param_3 = (dVar17 * dVar18) / dVar18;
          iVar22 = (int)param_3;
        }
        (*(code *)PTR__njRotateY_8c069490)(0,iVar22);
        if (in_FPSCR_SZ != '\0') {
          uVar14 = (uint)*(undefined8 *)(psVar10 + 2);
        }
        (*(code *)PTR_FUN_8c069478)(uVar7,7,0);
        param_1 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (ulonglong)uVar14;
        }
        (*(code *)PTR_FUN_8c06947c)(uVar7);
        (*(code *)PTR_FUN_8c069494)(uVar7);
        (*(code *)PTR__njPopMatrixEx_8c069498)();
      }
    }
    uVar7 = (undefined4)uVar15;
    uVar13 = (undefined4)param_1;
    iVar9 = iVar9 + -1;
    iVar8 = iVar8 + 0x1c;
  } while (iVar9 != 0);
  iVar8 = 0;
  iVar9 = *(int *)((int)DAT_8c069460 + *(int *)(DAT_8c06945e + param_4));
  iVar22 = (int)*(short *)(iVar9 + 10) * (int)*(short *)(iVar9 + 8);
  iVar6 = (*(code *)PTR_FUN_8c069470)(4,0,0);
  uVar11 = *(undefined4 *)(iVar6 + 4);
  if (in_FPSCR_SZ == '\0') {
    uVar15 = CONCAT44(*(undefined4 *)(DAT_8c069474 + 0x34),uVar13);
  }
  else {
    uVar15 = *(undefined8 *)(DAT_8c069474 + 0x34);
  }
  *(undefined4 *)(puVar12 + -8) = uVar11;
  (*(code *)PTR_FUN_8c069478)(uVar15,uVar11,4,0);
  if (in_FPSCR_SZ == '\0') {
    in_xd12 = CONCAT44(uVar7,(int)uVar15);
  }
  (*(code *)PTR_FUN_8c06947c)(in_xd12,uVar11);
  if (0 < iVar22) {
    iVar6 = (int)DAT_8c069462;
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44(DAT_8c069480,uVar7);
    }
    else {
      dVar18 = (double)CONCAT44(PTR_FUN_8c069484,DAT_8c069480);
    }
    do {
      piVar4 = (int *)(*(int *)((int)DAT_8c069464 + *(int *)(DAT_8c06945a + param_4)) + iVar6);
      puVar3 = (ushort *)(*(code *)piVar4[2])(*(int *)(DAT_8c06945a + param_4) + *piVar4,iVar8);
      puVar1 = PTR_FUN_8c069618;
      uVar13 = SUB84(param_2,0);
      uVar7 = SUB84(param_3,0);
      if ((puVar3 != (ushort *)0x0) && ((*puVar3 & 1) != 0)) {
        (*(code *)PTR__njPushMatrixEx_8c069614)();
        iVar5 = -((int)((int)*(short *)(iVar9 + 8) + (uint)(*(short *)(iVar9 + 8) < 0)) >> 1);
        fVar19 = (float)iVar5;
        uVar2 = (*(code *)puVar1)(iVar5);
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((float)uVar2,uVar7);
        }
        else {
          dVar17 = (double)uVar2;
        }
        iVar5 = -((int)((int)*(short *)(iVar9 + 10) + (uint)(*(short *)(iVar9 + 10) < 0)) >> 1);
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((float)iVar5,fVar19 + (float)((ulonglong)dVar17 >> 0x20));
        }
        else {
          dVar20 = (double)iVar5;
        }
        uVar2 = (*(code *)puVar1)(dVar17,iVar5);
        fVar19 = (float)((ulonglong)dVar18 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) + fVar19);
          param_3 = (double)CONCAT44((float)uVar2,SUB84(dVar17,0));
        }
        else {
          dVar20 = dVar20 + dVar18;
          param_3 = (double)uVar2;
        }
        uVar15 = in_xd14;
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(SUB84(dVar20,0),SUB84(dVar18,0));
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) +
                                     (float)((ulonglong)param_3 >> 0x20) + fVar19,SUB84(dVar20,0));
        }
        else {
          param_2 = dVar20 + param_3 + dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar13);
        }
        (*(code *)PTR__njTranslate_8c06961c)(uVar15,param_2,0);
        (*(code *)PTR_FUN_8c069620)(*(undefined4 *)(puVar12 + -8));
        (*(code *)PTR__njPopMatrixEx_8c069624)();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar22);
  }
  return;
}

