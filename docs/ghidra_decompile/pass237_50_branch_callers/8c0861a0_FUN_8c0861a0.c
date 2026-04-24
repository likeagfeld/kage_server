// entry: 8c0861a0
// name: FUN_8c0861a0
// signature: undefined FUN_8c0861a0(void)


/* WARNING: Removing unreachable block (ram,0x8c0864a2) */
/* WARNING: Removing unreachable block (ram,0x8c086440) */
/* WARNING: Removing unreachable block (ram,0x8c08683e) */
/* WARNING: Removing unreachable block (ram,0x8c086858) */
/* WARNING: Removing unreachable block (ram,0x8c086454) */
/* WARNING: Removing unreachable block (ram,0x8c0864d0) */

undefined4 FUN_8c0861a0(uint param_1,double param_2,double param_3,int param_4,int param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  byte *pbVar11;
  double *pdVar12;
  int iVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined4 in_fr3;
  double dVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  ulonglong in_dr14;
  double dVar24;
  double in_xd6;
  double in_xd8;
  bool bVar25;
  undefined4 in_PR;
  uint uVar26;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_2c [8];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)uStack_24);
    puVar14 = &uStack_24;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr14;
  }
  else {
    puVar14 = (undefined8 *)local_2c;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar14 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)(ulonglong)param_1;
  }
  else {
    dVar16 = *(double *)(param_5 + 0x60);
  }
  iVar13 = param_5 + 0x20;
  pdVar12 = (double *)(param_5 + 100);
  *(int *)((int)puVar14 + -0x28) = param_5;
  *(int *)((int)puVar14 + -0x2c) = param_4;
  iVar4 = (*(code *)PTR_FUN_8c086324)(iVar13,pdVar12);
  if (iVar4 != 0) {
    uVar6 = (undefined4)(in_dr14 >> 0x20);
    dVar24 = (double)CONCAT44(uVar6,0x3f800000);
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44(uVar6,0x40000000);
    }
    else {
      dVar24 = dVar24 + dVar24;
    }
    dVar15 = (double)(*(code *)PTR_FUN_8c086794)(iVar13);
    uVar6 = SUB84(param_3,0);
    if (in_FPSCR_PR == '\0') {
      bVar25 = SUB84(dVar24,0) < (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      bVar25 = dVar24 < dVar15;
    }
    if (bVar25) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = 4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x60),SUB84(dVar24,0));
    }
    else {
      dVar24 = *(double *)(param_5 + 0x60);
    }
    dVar15 = (double)(*(code *)PTR_FUN_8c086794)(iVar13);
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*(float *)pdVar12);
    }
    else {
      in_xd6 = *pdVar12;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((float)iVar4,uVar6);
      dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) +
                                (float)((ulonglong)dVar15 >> 0x20) / (float)iVar4,SUB84(dVar24,0));
    }
    else {
      dVar22 = (double)iVar4;
      dVar24 = dVar24 + dVar15 / dVar22;
    }
    uVar6 = SUB84(dVar22,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(param_5 + 0x60) = (int)((ulonglong)dVar24 >> 0x20);
    }
    else {
      *(double *)(param_5 + 0x60) = dVar24;
    }
    fVar19 = SUB84(dVar24,0);
    dVar24 = (double)((ulonglong)dVar24 & 0xffffffff);
    fVar18 = SUB84(param_2,0);
    if (in_FPSCR_PR == '\0') {
      bVar25 = 0.0 < fVar18;
    }
    else {
      bVar25 = dVar24 < param_2;
    }
    pdVar10 = (double *)(param_5 + 0x6c);
    if (bVar25) {
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(DAT_8c086798,SUB84(dVar16,0));
      }
      else {
        dVar16 = (double)CONCAT44(PTR_FUN_8c08679c,DAT_8c086798);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar18);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar15 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar6);
      }
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar23 = (float)((ulonglong)dVar15 >> 0x20) / fVar19 + fVar18;
        dVar15 = (double)CONCAT44(fVar23,SUB84(dVar15,0));
        bVar25 = SUB84(param_2,0) < fVar23;
      }
      else {
        dVar15 = dVar15 / dVar24 + dVar16;
        bVar25 = param_2 < dVar15;
      }
      uVar6 = SUB84(dVar15,0);
      while (!bVar25) {
                    /* WARNING: Read-only address (ram,0x8c0864bc) is written */
                    /* WARNING: Read-only address (ram,0x8c08663c) is written */
                    /* WARNING: Read-only address (ram,0x8c0867a4) is written */
                    /* WARNING: Read-only address (ram,0x8c08691c) is written */
        if (in_FPSCR_PR == '\0') {
          fVar23 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar23 = SUB84(param_2 - param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)pdVar12 = fVar23;
        }
        else {
          *pdVar12 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar23);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar22 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar15,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar23 = (float)((ulonglong)dVar22 >> 0x20) / fVar19 + fVar18;
          dVar15 = (double)CONCAT44(fVar23,SUB84(dVar22,0));
          bVar25 = SUB84(param_2,0) < fVar23;
        }
        else {
          dVar15 = dVar22 / dVar24 + dVar16;
          bVar25 = param_2 < dVar15;
        }
        uVar6 = SUB84(dVar15,0);
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar25 = fVar18 < 0.0;
      }
      else {
        bVar25 = param_2 < dVar24;
      }
      if (bVar25) {
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44(DAT_8c0867a0,SUB84(dVar16,0));
        }
        else {
          dVar16 = (double)CONCAT44(uRam8c0867a4,DAT_8c0867a0);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar18);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar15 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar6);
        }
        fVar18 = (float)((ulonglong)dVar16 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar23 = -((float)((ulonglong)dVar15 >> 0x20) / fVar19 + fVar18);
          dVar15 = (double)CONCAT44(fVar23,SUB84(dVar15,0));
          bVar25 = fVar23 < SUB84(param_2,0);
        }
        else {
          dVar15 = -(dVar15 / dVar24 + dVar16);
          bVar25 = dVar15 < param_2;
        }
        uVar6 = SUB84(dVar15,0);
        while (!bVar25) {
          if (in_FPSCR_PR == '\0') {
            fVar23 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
          }
          else {
            fVar23 = SUB84(param_2 + param_2,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)pdVar12 = fVar23;
          }
          else {
            *pdVar12 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar23);
          }
          else {
            param_2 = (double)*(int *)(param_4 + 0x20);
          }
          dVar22 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar15,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar23 = -((float)((ulonglong)dVar22 >> 0x20) / fVar19 + fVar18);
            dVar15 = (double)CONCAT44(fVar23,SUB84(dVar22,0));
            bVar25 = fVar23 < SUB84(param_2,0);
          }
          else {
            dVar15 = -(dVar22 / dVar24 + dVar16);
            bVar25 = dVar15 < param_2;
          }
          uVar6 = SUB84(dVar15,0);
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*(float *)pdVar10);
    }
    else {
      in_xd6 = *pdVar10;
    }
    fVar18 = SUB84(param_2,0);
    if (in_FPSCR_PR == '\0') {
      bVar25 = 0.0 < fVar18;
    }
    else {
      bVar25 = dVar24 < param_2;
    }
    if (bVar25) {
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(DAT_8c086798,SUB84(dVar16,0));
      }
      else {
        dVar16 = (double)CONCAT44(PTR_FUN_8c08679c,DAT_8c086798);
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar18);
      }
      else {
        dVar15 = (double)*(int *)(param_4 + 0x24);
      }
      dVar22 = dVar15;
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uVar6);
      }
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar23 = (float)((ulonglong)dVar22 >> 0x20) / fVar19 + fVar18;
        dVar22 = (double)CONCAT44(fVar23,SUB84(dVar22,0));
        bVar25 = SUB84(dVar15,0) < fVar23;
      }
      else {
        dVar22 = dVar22 / dVar24 + dVar16;
        bVar25 = dVar15 < dVar22;
      }
      while (!bVar25) {
                    /* WARNING: Read-only address (ram,0x8c0864bc) is written */
                    /* WARNING: Read-only address (ram,0x8c08663c) is written */
                    /* WARNING: Read-only address (ram,0x8c0867a4) is written */
                    /* WARNING: Read-only address (ram,0x8c08691c) is written */
        if (in_FPSCR_PR == '\0') {
          fVar23 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar23 = SUB84(dVar15 - dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)pdVar10 = fVar23;
        }
        else {
          *pdVar10 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar23);
        }
        else {
          dVar15 = (double)*(int *)(param_4 + 0x24);
        }
        dVar21 = dVar15;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar22,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar23 = (float)((ulonglong)dVar21 >> 0x20) / fVar19 + fVar18;
          dVar22 = (double)CONCAT44(fVar23,SUB84(dVar21,0));
          bVar25 = SUB84(dVar15,0) < fVar23;
        }
        else {
          dVar22 = dVar21 / dVar24 + dVar16;
          bVar25 = dVar15 < dVar22;
        }
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar25 = fVar18 < 0.0;
      }
      else {
        bVar25 = param_2 < dVar24;
      }
      if (bVar25) {
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44(DAT_8c0869a4,SUB84(dVar16,0));
        }
        else {
          dVar16 = (double)CONCAT44(PTR_FUN_8c0869a8,DAT_8c0869a4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar18);
        }
        else {
          dVar15 = (double)*(int *)(param_4 + 0x24);
        }
        dVar22 = dVar15;
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uVar6);
        }
        fVar18 = (float)((ulonglong)dVar16 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar23 = -((float)((ulonglong)dVar22 >> 0x20) / fVar19 + fVar18);
          dVar22 = (double)CONCAT44(fVar23,SUB84(dVar22,0));
          bVar25 = fVar23 < SUB84(dVar15,0);
        }
        else {
          dVar22 = -(dVar22 / dVar24 + dVar16);
          bVar25 = dVar22 < dVar15;
        }
        while (!bVar25) {
          if (in_FPSCR_PR == '\0') {
            fVar23 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            fVar23 = SUB84(dVar15 + dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)pdVar10 = fVar23;
          }
          else {
            *pdVar10 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar23);
          }
          else {
            dVar15 = (double)*(int *)(param_4 + 0x24);
          }
          dVar21 = dVar15;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar23 = -((float)((ulonglong)dVar21 >> 0x20) / fVar19 + fVar18);
            dVar22 = (double)CONCAT44(fVar23,SUB84(dVar21,0));
            bVar25 = fVar23 < SUB84(dVar15,0);
          }
          else {
            dVar22 = -(dVar21 / dVar24 + dVar16);
            bVar25 = dVar22 < dVar15;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(*(undefined4 *)(param_5 + 100),*(undefined4 *)(param_5 + 0x6c));
    }
    else {
      uVar17 = *(undefined8 *)(param_5 + 100);
    }
    (*(code *)PTR_FUN_8c08679c)(uVar17,param_4,param_5 + 2);
    *(undefined4 *)((int)puVar14 + -0xc) = 1;
    goto LAB_8c086684;
  }
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*(float *)pdVar12);
  }
  else {
    in_xd6 = *pdVar12;
  }
  dVar24 = (double)(in_dr14 & 0xffffffff);
  fVar18 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar25 = 0.0 < fVar18;
  }
  else {
    bVar25 = dVar24 < param_2;
  }
  pdVar10 = (double *)(param_5 + 0x6c);
  if (bVar25) {
    if (in_FPSCR_PR == '\0') {
      dVar24 = 5.30498947741318e-315;
    }
    else {
      dVar24 = 1.05270884942418e-314;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(DAT_8c086328,SUB84(dVar16,0));
    }
    else {
      dVar16 = (double)CONCAT44(PTR_FUN_8c08632c,DAT_8c086328);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar18);
    }
    else {
      param_2 = (double)*(int *)(param_4 + 0x20);
    }
    dVar15 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
    }
    fVar18 = (float)((ulonglong)dVar16 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar24,0) + fVar18;
      param_3 = (double)CONCAT44(fVar19,SUB84(dVar15,0));
      bVar25 = SUB84(param_2,0) < fVar19;
    }
    else {
      param_3 = dVar15 / dVar24 + dVar16;
      bVar25 = param_2 < param_3;
    }
    while (!bVar25) {
                    /* WARNING: Read-only address (ram,0x8c0864bc) is written */
                    /* WARNING: Read-only address (ram,0x8c08663c) is written */
                    /* WARNING: Read-only address (ram,0x8c0867a4) is written */
                    /* WARNING: Read-only address (ram,0x8c08691c) is written */
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
      }
      else {
        fVar19 = SUB84(param_2 - param_2,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)pdVar12 = fVar19;
      }
      else {
        *pdVar12 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar19);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar15 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = (float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar24,0) + fVar18;
        param_3 = (double)CONCAT44(fVar19,SUB84(dVar15,0));
        bVar25 = SUB84(param_2,0) < fVar19;
      }
      else {
        param_3 = dVar15 / dVar24 + dVar16;
        bVar25 = param_2 < param_3;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar25 = fVar18 < 0.0;
    }
    else {
      bVar25 = param_2 < dVar24;
    }
    if (bVar25) {
      if (in_FPSCR_PR == '\0') {
        dVar24 = 5.30498947741318e-315;
      }
      else {
        dVar24 = 1.05270884942418e-314;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(DAT_8c086904,SUB84(dVar16,0));
      }
      else {
        dVar16 = (double)CONCAT44(PTR_FUN_8c086908,DAT_8c086904);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar18);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar15 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
      }
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar19 = -((float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar24,0) + fVar18);
        param_3 = (double)CONCAT44(fVar19,SUB84(dVar15,0));
        bVar25 = fVar19 < SUB84(param_2,0);
      }
      else {
        param_3 = -(dVar15 / dVar24 + dVar16);
        bVar25 = param_3 < param_2;
      }
      while (!bVar25) {
        if (in_FPSCR_PR == '\0') {
          fVar19 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar19 = SUB84(param_2 + param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)pdVar12 = fVar19;
        }
        else {
          *pdVar12 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar19);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar15 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar19 = -((float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar24,0) + fVar18);
          param_3 = (double)CONCAT44(fVar19,SUB84(dVar15,0));
          bVar25 = fVar19 < SUB84(param_2,0);
        }
        else {
          param_3 = -(dVar15 / dVar24 + dVar16);
          bVar25 = param_3 < param_2;
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*(float *)pdVar10);
  }
  else {
    in_xd6 = *pdVar10;
  }
  fVar18 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar25 = 0.0 < fVar18;
  }
  else {
    bVar25 = dVar24 < param_2;
  }
  if (bVar25) {
    if (in_FPSCR_PR == '\0') {
      dVar24 = 5.30498947741318e-315;
    }
    else {
      dVar24 = 1.05270884942418e-314;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(DAT_8c086328,SUB84(dVar16,0));
    }
    else {
      dVar16 = (double)CONCAT44(PTR_FUN_8c08632c,DAT_8c086328);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar18);
    }
    else {
      param_2 = (double)*(int *)(param_4 + 0x24);
    }
    dVar15 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
    }
    fVar18 = (float)((ulonglong)dVar16 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar24,0) + fVar18;
      param_3 = (double)CONCAT44(fVar19,SUB84(dVar15,0));
      bVar25 = SUB84(param_2,0) < fVar19;
    }
    else {
      param_3 = dVar15 / dVar24 + dVar16;
      bVar25 = param_2 < param_3;
    }
    while (!bVar25) {
                    /* WARNING: Read-only address (ram,0x8c0864bc) is written */
                    /* WARNING: Read-only address (ram,0x8c08663c) is written */
                    /* WARNING: Read-only address (ram,0x8c0867a4) is written */
                    /* WARNING: Read-only address (ram,0x8c08691c) is written */
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
      }
      else {
        fVar19 = SUB84(param_2 - param_2,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)pdVar10 = fVar19;
      }
      else {
        *pdVar10 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar19);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x24);
      }
      dVar15 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = (float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar24,0) + fVar18;
        param_3 = (double)CONCAT44(fVar19,SUB84(dVar15,0));
        bVar25 = SUB84(param_2,0) < fVar19;
      }
      else {
        param_3 = dVar15 / dVar24 + dVar16;
        bVar25 = param_2 < param_3;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar25 = fVar18 < 0.0;
    }
    else {
      bVar25 = param_2 < dVar24;
    }
    if (bVar25) {
      if (in_FPSCR_PR == '\0') {
        dVar24 = 5.30498947741318e-315;
      }
      else {
        dVar24 = 1.05270884942418e-314;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(DAT_8c086904,SUB84(dVar16,0));
      }
      else {
        dVar16 = (double)CONCAT44(PTR_FUN_8c086908,DAT_8c086904);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar18);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x24);
      }
      dVar15 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
      }
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar19 = -((float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar24,0) + fVar18);
        param_3 = (double)CONCAT44(fVar19,SUB84(dVar15,0));
        bVar25 = fVar19 < SUB84(param_2,0);
      }
      else {
        param_3 = -(dVar15 / dVar24 + dVar16);
        bVar25 = param_3 < param_2;
      }
      while (!bVar25) {
        if (in_FPSCR_PR == '\0') {
          fVar19 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar19 = SUB84(param_2 + param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)pdVar10 = fVar19;
        }
        else {
          *pdVar10 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar19);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x24);
        }
        dVar15 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar19 = -((float)((ulonglong)dVar15 >> 0x20) / SUB84(dVar24,0) + fVar18);
          param_3 = (double)CONCAT44(fVar19,SUB84(dVar15,0));
          bVar25 = fVar19 < SUB84(param_2,0);
        }
        else {
          param_3 = -(dVar15 / dVar24 + dVar16);
          bVar25 = param_3 < param_2;
        }
      }
    }
  }
  uVar6 = SUB84(param_2,0);
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)(ulonglong)*(uint *)(param_5 + 0x6c);
  }
  else {
    dVar16 = *(double *)(param_5 + 100);
  }
  pbVar11 = (byte *)(param_5 + 2);
  (*(code *)PTR_FUN_8c08632c)(param_4,pbVar11);
  iVar4 = (*(code *)PTR_FUN_8c086330)();
  iVar13 = (*(code *)PTR_FUN_8c086330)();
  iVar5 = (*(code *)PTR_FUN_8c086334)(param_4,iVar4,iVar13);
  uVar9 = SUB84(dVar16,0);
  if (((iVar5 == 0) || ((*(byte *)(iVar5 + 9) & 0x7f) == 3)) || ((*(byte *)(iVar5 + 9) & 0x7f) == 4)
     ) {
    iVar5 = iVar13 * *(int *)(param_4 + 0x20) + iVar4;
    iVar8 = iVar5 * 4;
    if (((((*(int *)(iVar8 + *(int *)(DAT_8c086318 + param_4)) == 0) &&
          (*(int *)(iVar8 + *(int *)(DAT_8c08631a + param_4)) == 0)) &&
         ((cVar1 = *(char *)(iVar5 + *(int *)(DAT_8c08631c + param_4)),
          *(char *)((int)puVar14 + -0x24) = cVar1, cVar1 != 'b' &&
          ((iVar5 = *(int *)((*(int *)(param_4 + 0x20) * iVar13 + iVar4) * 4 +
                            *(int *)(DAT_8c08631e + param_4)), iVar5 == 0 ||
           (*(int *)(iVar5 + 8) != 2)))))) &&
        (((*(int *)(DAT_8c086320 + param_4) == 0 ||
          (*(int *)((*(int *)(param_4 + 0x20) * iVar13 + iVar4) * 4 +
                   *(int *)(DAT_8c086320 + param_4)) == 0)) &&
         (((((cVar1 = *(char *)((int)puVar14 + -0x24), cVar1 != '\0' && (cVar1 != '\x02')) &&
            (cVar1 != 'P')) && ((cVar1 != 'Q' && (cVar1 != 'R')))) &&
          ((cVar1 != 'S' && ((cVar1 != 'T' && (cVar1 != 'U')))))))))) &&
       ((cVar1 != 'V' &&
        (((((cVar1 != 'W' && (cVar1 != 'X')) && (cVar1 != 'Y')) &&
          ((cVar1 != '[' && (cVar1 != ']')))) &&
         ((cVar1 != '_' && ((cVar1 != '`' && (cVar1 != 'm')))))))))) {
      if ((*(byte *)(param_5 + 0x10) & 7) == 1) {
        *(int *)((int)puVar14 + -0x20) = param_5 + 0x10;
        iVar4 = (*(code *)PTR_FUN_8c0864b4)();
        if (iVar4 != 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(float *)pdVar12,uVar6);
          }
          else {
            dVar15 = *pdVar12;
          }
          fVar18 = (float)((ulonglong)dVar15 >> 0x20);
          fVar19 = (float)((ulonglong)dVar24 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar25 = fVar19 < fVar18;
          }
          else {
            bVar25 = dVar24 < dVar15;
          }
          if (bVar25) {
            if (in_FPSCR_PR == '\0') {
              dVar24 = (double)CONCAT44(fVar19,0x40000000);
            }
            else {
              dVar24 = (double)CONCAT44(fVar19,0x3f800000) + (double)CONCAT44(fVar19,0x3f800000);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar16 = (double)CONCAT44(DAT_8c0864b8,SUB84(dVar16,0));
            }
            else {
              dVar16 = (double)CONCAT44(uRam8c0864bc,DAT_8c0864b8);
            }
            dVar15 = (double)CONCAT44(fVar18,(float)*(int *)(param_4 + 0x20));
            dVar22 = in_xd6;
            if (in_FPSCR_SZ == '\0') {
              dVar22 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),SUB84(param_3,0));
            }
            fVar19 = (float)((ulonglong)dVar16 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              fVar23 = (float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar24,0) + fVar19;
              param_3 = (double)CONCAT44(fVar23,SUB84(dVar22,0));
              bVar25 = fVar18 < fVar23;
            }
            else {
              param_3 = dVar22 / dVar24 + dVar16;
              bVar25 = dVar15 < param_3;
            }
            while (!bVar25) {
                    /* WARNING: Read-only address (ram,0x8c0864bc) is written */
                    /* WARNING: Read-only address (ram,0x8c08663c) is written */
                    /* WARNING: Read-only address (ram,0x8c0867a4) is written */
                    /* WARNING: Read-only address (ram,0x8c08691c) is written */
              if (in_FPSCR_PR == '\0') {
                dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) - SUB84(dVar15,0),
                                          SUB84(dVar15,0));
              }
              else {
                dVar15 = dVar15 - dVar15;
              }
              fVar18 = (float)((ulonglong)dVar15 >> 0x20);
              if (in_FPSCR_SZ == '\0') {
                *(float *)pdVar12 = fVar18;
              }
              else {
                *pdVar12 = dVar15;
              }
              dVar15 = (double)CONCAT44(fVar18,(float)*(int *)(param_4 + 0x20));
              dVar22 = in_xd6;
              if (in_FPSCR_SZ == '\0') {
                dVar22 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),SUB84(param_3,0));
              }
              if (in_FPSCR_PR == '\0') {
                fVar23 = (float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar24,0) + fVar19;
                param_3 = (double)CONCAT44(fVar23,SUB84(dVar22,0));
                bVar25 = fVar18 < fVar23;
              }
              else {
                param_3 = dVar22 / dVar24 + dVar16;
                bVar25 = dVar15 < param_3;
              }
            }
          }
          else {
            if (in_FPSCR_PR == '\0') {
              bVar25 = fVar18 < fVar19;
            }
            else {
              bVar25 = dVar15 < dVar24;
            }
            if (bVar25) {
              if (in_FPSCR_PR == '\0') {
                dVar24 = (double)CONCAT44(fVar19,0x40000000);
              }
              else {
                dVar24 = (double)CONCAT44(fVar19,0x3f800000) + (double)CONCAT44(fVar19,0x3f800000);
              }
              if (in_FPSCR_SZ == '\0') {
                dVar16 = (double)CONCAT44(DAT_8c086904,SUB84(dVar16,0));
              }
              else {
                dVar16 = (double)CONCAT44(PTR_FUN_8c086908,DAT_8c086904);
              }
              dVar15 = (double)CONCAT44(fVar18,(float)*(int *)(param_4 + 0x20));
              dVar22 = in_xd6;
              if (in_FPSCR_SZ == '\0') {
                dVar22 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),SUB84(param_3,0));
              }
              fVar19 = (float)((ulonglong)dVar16 >> 0x20);
              if (in_FPSCR_PR == '\0') {
                fVar23 = -((float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar24,0) + fVar19);
                param_3 = (double)CONCAT44(fVar23,SUB84(dVar22,0));
                bVar25 = fVar23 < fVar18;
              }
              else {
                param_3 = -(dVar22 / dVar24 + dVar16);
                bVar25 = param_3 < dVar15;
              }
              while (!bVar25) {
                if (in_FPSCR_PR == '\0') {
                  dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0),
                                            SUB84(dVar15,0));
                }
                else {
                  dVar15 = dVar15 + dVar15;
                }
                fVar18 = (float)((ulonglong)dVar15 >> 0x20);
                if (in_FPSCR_SZ == '\0') {
                  *(float *)pdVar12 = fVar18;
                }
                else {
                  *pdVar12 = dVar15;
                }
                dVar15 = (double)CONCAT44(fVar18,(float)*(int *)(param_4 + 0x20));
                dVar22 = in_xd6;
                if (in_FPSCR_SZ == '\0') {
                  dVar22 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),SUB84(param_3,0));
                }
                if (in_FPSCR_PR == '\0') {
                  fVar23 = -((float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar24,0) + fVar19);
                  param_3 = (double)CONCAT44(fVar23,SUB84(dVar22,0));
                  bVar25 = fVar23 < fVar18;
                }
                else {
                  param_3 = -(dVar22 / dVar24 + dVar16);
                  bVar25 = param_3 < dVar15;
                }
              }
            }
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),*(float *)pdVar10);
          }
          else {
            in_xd6 = *pdVar10;
          }
          fVar18 = SUB84(dVar15,0);
          fVar19 = (float)((ulonglong)dVar24 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar25 = fVar19 < fVar18;
          }
          else {
            bVar25 = dVar24 < dVar15;
          }
          if (bVar25) {
            if (in_FPSCR_PR == '\0') {
              dVar24 = (double)CONCAT44(fVar19,0x40000000);
            }
            else {
              dVar24 = (double)CONCAT44(fVar19,0x3f800000) + (double)CONCAT44(fVar19,0x3f800000);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar16 = (double)CONCAT44(DAT_8c0864b8,SUB84(dVar16,0));
            }
            else {
              dVar16 = (double)CONCAT44(uRam8c0864bc,DAT_8c0864b8);
            }
            if (in_FPSCR_PR == '\0') {
              dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar18);
            }
            else {
              dVar15 = (double)*(int *)(param_4 + 0x24);
            }
            dVar22 = dVar15;
            if (in_FPSCR_SZ == '\0') {
              dVar22 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(param_3,0));
            }
            fVar18 = (float)((ulonglong)dVar16 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              fVar19 = (float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar24,0) + fVar18;
              param_3 = (double)CONCAT44(fVar19,SUB84(dVar22,0));
              bVar25 = SUB84(dVar15,0) < fVar19;
            }
            else {
              param_3 = dVar22 / dVar24 + dVar16;
              bVar25 = dVar15 < param_3;
            }
            while (!bVar25) {
                    /* WARNING: Read-only address (ram,0x8c0864bc) is written */
                    /* WARNING: Read-only address (ram,0x8c08663c) is written */
                    /* WARNING: Read-only address (ram,0x8c0867a4) is written */
                    /* WARNING: Read-only address (ram,0x8c08691c) is written */
              if (in_FPSCR_PR == '\0') {
                fVar19 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
              }
              else {
                fVar19 = SUB84(dVar15 - dVar15,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)pdVar10 = fVar19;
              }
              else {
                *pdVar10 = in_xd6;
              }
              if (in_FPSCR_PR == '\0') {
                dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar19);
              }
              else {
                dVar15 = (double)*(int *)(param_4 + 0x24);
              }
              dVar22 = dVar15;
              if (in_FPSCR_SZ == '\0') {
                dVar22 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(param_3,0));
              }
              if (in_FPSCR_PR == '\0') {
                fVar19 = (float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar24,0) + fVar18;
                param_3 = (double)CONCAT44(fVar19,SUB84(dVar22,0));
                bVar25 = SUB84(dVar15,0) < fVar19;
              }
              else {
                param_3 = dVar22 / dVar24 + dVar16;
                bVar25 = dVar15 < param_3;
              }
            }
          }
          else {
            if (in_FPSCR_PR == '\0') {
              bVar25 = fVar18 < fVar19;
            }
            else {
              bVar25 = dVar15 < dVar24;
            }
            if (bVar25) {
              if (in_FPSCR_PR == '\0') {
                dVar24 = (double)CONCAT44(fVar19,0x40000000);
              }
              else {
                dVar24 = (double)CONCAT44(fVar19,0x3f800000) + (double)CONCAT44(fVar19,0x3f800000);
              }
              if (in_FPSCR_SZ == '\0') {
                dVar16 = (double)CONCAT44(DAT_8c086904,SUB84(dVar16,0));
              }
              else {
                dVar16 = (double)CONCAT44(PTR_FUN_8c086908,DAT_8c086904);
              }
              if (in_FPSCR_PR == '\0') {
                dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar18);
              }
              else {
                dVar15 = (double)*(int *)(param_4 + 0x24);
              }
              dVar22 = dVar15;
              if (in_FPSCR_SZ == '\0') {
                dVar22 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(param_3,0));
              }
              fVar18 = (float)((ulonglong)dVar16 >> 0x20);
              if (in_FPSCR_PR == '\0') {
                fVar19 = -((float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar24,0) + fVar18);
                param_3 = (double)CONCAT44(fVar19,SUB84(dVar22,0));
                bVar25 = fVar19 < SUB84(dVar15,0);
              }
              else {
                param_3 = -(dVar22 / dVar24 + dVar16);
                bVar25 = param_3 < dVar15;
              }
              while (!bVar25) {
                if (in_FPSCR_PR == '\0') {
                  fVar19 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
                }
                else {
                  fVar19 = SUB84(dVar15 + dVar15,0);
                }
                if (in_FPSCR_SZ == '\0') {
                  *(float *)pdVar10 = fVar19;
                }
                else {
                  *pdVar10 = in_xd6;
                }
                if (in_FPSCR_PR == '\0') {
                  dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar19);
                }
                else {
                  dVar15 = (double)*(int *)(param_4 + 0x24);
                }
                dVar22 = dVar15;
                if (in_FPSCR_SZ == '\0') {
                  dVar22 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(param_3,0));
                }
                if (in_FPSCR_PR == '\0') {
                  fVar19 = -((float)((ulonglong)dVar22 >> 0x20) / SUB84(dVar24,0) + fVar18);
                  param_3 = (double)CONCAT44(fVar19,SUB84(dVar22,0));
                  bVar25 = fVar19 < SUB84(dVar15,0);
                }
                else {
                  param_3 = -(dVar22 / dVar24 + dVar16);
                  bVar25 = param_3 < dVar15;
                }
              }
            }
          }
          iVar4 = *(int *)(param_4 + 0x20);
          uVar6 = (undefined4)((ulonglong)dVar24 >> 0x20);
          dVar24 = (double)CONCAT44(uVar6,0x3f800000);
          if (in_FPSCR_PR == '\0') {
            dVar24 = (double)CONCAT44(uVar6,0x40000000);
          }
          else {
            dVar24 = dVar24 + dVar24;
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44(0xbf800000,SUB84(dVar15,0));
          }
          else {
            dVar15 = -(double)CONCAT44(0x3f800000,SUB84(dVar15,0));
          }
          iVar13 = *(int *)(param_4 + 0x24);
          pdVar12 = (double *)((int)puVar14 + -0x3c);
          if (in_FPSCR_PR == '\0') {
            fVar18 = (float)iVar4 / SUB84(dVar24,0);
          }
          else {
            fVar18 = SUB84((double)CONCAT44((int)((ulonglong)param_3 >> 0x20),(float)iVar4) / dVar24
                           ,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      *(undefined4 *)(param_5 + 100));
            dVar16 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x6c),SUB84(dVar16,0));
            dVar22 = (double)CONCAT44(fVar18,fVar18);
          }
          else {
            in_xd6 = *(double *)(param_5 + 100);
            dVar16 = *(double *)(param_5 + 0x6c);
            dVar22 = in_xd8;
          }
          fVar18 = (float)((ulonglong)dVar15 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44(-((float)((ulonglong)dVar22 >> 0x20) + fVar18),SUB84(dVar22,0)
                                     );
          }
          else {
            dVar22 = -(dVar22 + dVar15);
          }
          uVar6 = (undefined4)((ulonglong)dVar22 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)pdVar12 = uVar6;
            *(int *)((int)puVar14 + -0x38) = SUB84(dVar22,0);
          }
          else {
            *pdVar12 = dVar22;
            *(double *)((int)puVar14 + -0x38) = in_xd8;
          }
          if (in_FPSCR_PR == '\0') {
            fVar19 = (float)iVar13 / SUB84(dVar24,0);
          }
          else {
            fVar19 = SUB84((double)CONCAT44(uVar6,(float)iVar13) / dVar24,0);
          }
          dVar22 = in_xd8;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(fVar19,fVar19);
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44(-((float)((ulonglong)dVar22 >> 0x20) + fVar18),SUB84(dVar22,0)
                                     );
          }
          else {
            dVar22 = -(dVar22 + dVar15);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar14 + -0x34) = (int)((ulonglong)dVar22 >> 0x20);
            *(int *)((int)puVar14 + -0x30) = SUB84(dVar22,0);
            dVar22 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar22,0));
          }
          else {
            *(double *)((int)puVar14 + -0x34) = dVar22;
            *(double *)((int)puVar14 + -0x30) = in_xd8;
            dVar22 = *pdVar12;
          }
          fVar18 = SUB84(dVar15,0);
          if (in_FPSCR_PR == '\0') {
            bVar25 = fVar18 < (float)((ulonglong)dVar22 >> 0x20);
          }
          else {
            bVar25 = dVar15 < dVar22;
          }
          if (bVar25) {
            if (in_FPSCR_SZ == '\0') {
              in_xd6 = (double)CONCAT44(*(undefined4 *)pdVar12,fVar18);
            }
            else {
              in_xd6 = *pdVar12;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            in_xd6 = (double)CONCAT44(fVar18,fVar18);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)((int)puVar14 + -0x38),SUB84(dVar22,0));
          }
          else {
            dVar15 = *(double *)((int)puVar14 + -0x38);
          }
          if (in_FPSCR_PR == '\0') {
            bVar25 = (float)((ulonglong)dVar15 >> 0x20) < (float)((ulonglong)in_xd6 >> 0x20);
          }
          else {
            bVar25 = dVar15 < in_xd6;
          }
          if (bVar25) {
            if (in_FPSCR_SZ == '\0') {
              in_xd6 = (double)CONCAT44(*(undefined4 *)((int)puVar14 + -0x38),SUB84(in_xd6,0));
            }
            else {
              in_xd6 = *(double *)((int)puVar14 + -0x38);
            }
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)((int)puVar14 + -0x34),SUB84(dVar15,0));
          }
          else {
            dVar15 = *(double *)((int)puVar14 + -0x34);
          }
          fVar18 = (float)((ulonglong)dVar16 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar25 = fVar18 < (float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            bVar25 = dVar16 < dVar15;
          }
          uVar6 = (undefined4)((ulonglong)in_xd6 >> 0x20);
          if (bVar25) {
            if (in_FPSCR_SZ == '\0') {
              in_xd6 = (double)CONCAT44(uVar6,*(undefined4 *)((int)puVar14 + -0x34));
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            in_xd6 = (double)CONCAT44(uVar6,fVar18);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)((int)puVar14 + -0x30),SUB84(dVar15,0));
          }
          else {
            dVar15 = *(double *)((int)puVar14 + -0x30);
          }
          if (in_FPSCR_PR == '\0') {
            bVar25 = (float)((ulonglong)dVar15 >> 0x20) < SUB84(in_xd6,0);
          }
          else {
            bVar25 = dVar15 < in_xd6;
          }
          if ((bVar25) && (in_FPSCR_SZ == '\0')) {
            in_xd6 = (double)CONCAT44((int)((ulonglong)in_xd6 >> 0x20),
                                      *(undefined4 *)((int)puVar14 + -0x30));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(DAT_8c086624,SUB84(in_xd6,0));
            in_xd6 = (double)CONCAT44((int)((ulonglong)in_xd6 >> 0x20),SUB84(dVar15,0));
          }
          else {
            dVar22 = (double)CONCAT44(DAT_8c086628,DAT_8c086624);
          }
          fVar18 = (float)((ulonglong)dVar22 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            fVar19 = (float)((ulonglong)in_xd6 >> 0x20) * fVar18;
          }
          else {
            fVar19 = (float)((ulonglong)(in_xd6 * dVar22) >> 0x20);
          }
          dVar15 = (double)CONCAT44(fVar19,DAT_8c086628);
          *(int *)((int)puVar14 + -0x1c) = ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) << 4;
          if (in_FPSCR_PR != '\0' || DAT_8c086628 <= fVar19) {
            if (in_FPSCR_PR == '\0') {
              dVar15 = (double)CONCAT44(fVar19 - (DAT_8c086628 + DAT_8c086628),
                                        DAT_8c086628 + DAT_8c086628);
            }
            else {
              dVar15 = (dVar15 + dVar15) - (dVar15 + dVar15);
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar5 = (int)(float)((ulonglong)dVar15 >> 0x20);
          }
          else {
            iVar5 = (int)dVar15;
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)CONCAT44(fVar18,SUB84(dVar22,0) * fVar18);
          }
          else {
            dVar22 = dVar22 * dVar22;
          }
          *(undefined4 *)((int)puVar14 + -0x14) = 0;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)((ulonglong)dVar22 & 0xffffffff);
          }
          dVar21 = (double)CONCAT44(DAT_8c086628,SUB84(dVar15,0));
          *(int *)((int)puVar14 + -0x18) = *(int *)((int)puVar14 + -0x1c) + iVar5;
          if (in_FPSCR_PR == '\0') {
            bVar25 = SUB84(dVar22,0) < DAT_8c086628;
          }
          else {
            bVar25 = dVar22 < dVar21;
          }
          *(int *)((int)puVar14 + -0x1c) = ((int)(iVar13 + (uint)(iVar13 < 0)) >> 1) << 4;
          if (!bVar25) {
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44(DAT_8c086628 + DAT_8c086628,
                                        SUB84(dVar15,0) - (DAT_8c086628 + DAT_8c086628));
            }
            else {
              dVar21 = (dVar21 + dVar21) - (dVar21 + dVar21);
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar5 = (int)SUB84(dVar21,0);
          }
          else {
            iVar5 = (int)dVar21;
          }
          uVar9 = *(int *)((int)puVar14 + -0x1c) + iVar5;
          *(uint *)((int)puVar14 + -0x1c) = uVar9;
          *(uint *)((int)puVar14 + -0x10) = uVar9;
          if ((uint)(iVar4 * 0x10) < *(uint *)((int)puVar14 + -0x18)) {
            do {
              iVar5 = *(int *)((int)puVar14 + -0x18);
              *(int *)((int)puVar14 + -0x18) = iVar5 + iVar4 * -0x10;
            } while ((uint)(iVar4 * 0x10) < (uint)(iVar5 + iVar4 * -0x10));
          }
          if ((uint)(iVar13 << 4) < uVar9) {
            do {
              uVar9 = uVar9 + iVar4 * -0x10;
              *(uint *)((int)puVar14 + -0x10) = uVar9;
            } while ((uint)(iVar13 << 4) < uVar9);
          }
          uVar6 = (*(code *)PTR_FUN_8c08662c)();
          uVar9 = SUB84(dVar16,0);
          uVar20 = SUB84(dVar21,0);
          (*(code *)PTR_FUN_8c086630)(uVar6);
          (*(code *)PTR_FUN_8c08662c)();
          (*(code *)PTR_FUN_8c086630)();
          puVar3 = PTR_FUN_8c0869a8;
          puVar2 = PTR_FUN_8c086630;
          if ((*(uint *)((int)puVar14 + -0x18) & 7) == 0) {
LAB_8c0865e8:
            uVar7 = *(uint *)((int)puVar14 + -0x18);
            uVar26 = 0;
            if ((uVar7 & 0xf) == 0) goto LAB_8c0865f8;
            *pbVar11 = *pbVar11 & (byte)DAT_8c0869a0 | 0x10;
            (*(code *)puVar3)(uVar7 & 0xf);
          }
          else {
            if (((*(uint *)((int)puVar14 + -0x10) & 7) != 0) &&
               (*(uint *)((int)puVar14 + -0x18) < *(uint *)((int)puVar14 + -0x10))) {
              *(undefined4 *)((int)puVar14 + -0x18) = 8;
              goto LAB_8c0865e8;
            }
            uVar26 = *(uint *)((int)puVar14 + -0x18) & 0xf;
LAB_8c0865f8:
            *pbVar11 = *pbVar11 & (byte)DAT_8c08661e;
            (*(code *)puVar2)(uVar26);
          }
          iVar4 = (*(code *)PTR_FUN_8c086634)();
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(DAT_8c086638,in_fr3);
          }
          else {
            dVar16 = (double)CONCAT44(uRam8c08663c,DAT_8c086638);
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44((float)iVar4,uVar20);
          }
          else {
            dVar15 = (double)iVar4;
          }
          *(byte **)((int)puVar14 + -0x40) = pbVar11;
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) /
                                      (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 / dVar16;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(DAT_8c086784,SUB84(dVar16,0));
            dVar24 = (double)(ulonglong)uVar9;
          }
          else {
            dVar16 = (double)CONCAT44(PTR_FUN_8c086788,DAT_8c086784);
          }
          if (in_FPSCR_PR == '\0') {
            uVar9 = (uint)((float)((ulonglong)dVar15 >> 0x20) * (float)((ulonglong)dVar16 >> 0x20));
          }
          else {
            uVar9 = (uint)(dVar15 * dVar16);
          }
          if ((int)uVar9 < 0) {
            iVar4 = 1 >> (~uVar9 & 0x1f) + 1;
          }
          else {
            iVar4 = 1 << (uVar9 & 0x1f);
          }
          (*(code *)PTR_FUN_8c086788)(dVar24,param_4,param_5,iVar4,1);
          (*(code *)PTR_FUN_8c08678c)();
          (*(code *)PTR_FUN_8c086790)();
          *(uint *)(param_4 + DAT_8c08677e) = *(uint *)(param_4 + DAT_8c08677e) | (int)DAT_8c086780;
          FUN_8c085ec0(param_4,param_5);
          *(undefined4 *)((int)puVar14 + -0xc) = 1;
          goto LAB_8c086684;
        }
      }
      iVar4 = *(int *)((int)puVar14 + -0x28);
      FUN_8c085ec0(*(undefined4 *)((int)puVar14 + -0x2c),iVar4);
      *(byte *)(iVar4 + 9) = *(byte *)(iVar4 + 9) & 0xf | 0x20;
      *(undefined4 *)((int)puVar14 + -0xc) = 0;
      goto LAB_8c086684;
    }
  }
  if ((*(byte *)(param_5 + 0x10) & 7) == 1) {
    iVar4 = (*(code *)PTR_FUN_8c086910)();
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((float)iVar4,SUB84(param_3,0));
    }
    else {
      dVar16 = (double)iVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c086914,in_fr3);
    }
    else {
      dVar15 = (double)CONCAT44(DAT_8c086918,DAT_8c086914);
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) /
                                (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 / dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c086918,SUB84(dVar15,0));
    }
    else {
      dVar15 = (double)CONCAT44(uRam8c08691c,DAT_8c086918);
    }
    if (in_FPSCR_PR == '\0') {
      uVar26 = (uint)((float)((ulonglong)dVar16 >> 0x20) * (float)((ulonglong)dVar15 >> 0x20));
    }
    else {
      uVar26 = (uint)(dVar16 * dVar15);
    }
    if ((int)uVar26 < 0) {
      iVar4 = 1 >> (~uVar26 & 0x1f) + 1;
    }
    else {
      iVar4 = 1 << (uVar26 & 0x1f);
    }
  }
  else {
    iVar4 = (*(code *)PTR_FUN_8c086908)();
    *(int *)((int)puVar14 + -8) = iVar4;
  }
  *(undefined4 *)((int)puVar14 + -0x40) = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)(ulonglong)uVar9;
  }
  (*(code *)PTR_FUN_8c08690c)(dVar24,param_4,param_5,iVar4,1);
  *(undefined4 *)((int)puVar14 + -0xc) = 1;
LAB_8c086684:
  return *(undefined4 *)((int)puVar14 + -0xc);
}

