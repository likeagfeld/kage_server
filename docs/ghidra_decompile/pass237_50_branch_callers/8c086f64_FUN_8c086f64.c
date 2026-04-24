// entry: 8c086f64
// name: FUN_8c086f64
// signature: undefined FUN_8c086f64(void)


/* WARNING: Removing unreachable block (ram,0x8c08700e) */
/* WARNING: Removing unreachable block (ram,0x8c0871fc) */
/* WARNING: Removing unreachable block (ram,0x8c08721c) */
/* WARNING: Removing unreachable block (ram,0x8c08702e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8c086f64(undefined4 param_1,double param_2,double param_3,int param_4,int param_5)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_fr0;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double in_xd6;
  double in_xd8;
  bool bVar19;
  undefined4 in_PR;
  int iVar20;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_28;
  undefined4 uStackY_24;
  undefined4 local_20;
  undefined4 uStackY_1c;
  undefined4 local_18;
  
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x60),param_1);
  }
  else {
    dVar10 = *(double *)(param_5 + 0x60);
  }
  pdVar7 = (double *)(param_5 + 100);
  iVar4 = (*(code *)PTR_FUN_8c0870d8)(param_5 + 0x20,pdVar7,FUN_8c09e7e4);
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar14 = SUB84(param_3,0);
  local_18 = (undefined4)((ulonglong)in_xd8 >> 0x20);
  uStackY_24 = SUB84(in_xd8,0);
  uStackY_1c = uStackY_24;
  if (iVar4 == 0) {
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44(uVar13,*(float *)pdVar7);
    }
    else {
      in_xd6 = *pdVar7;
    }
    dVar17 = (double)((ulonglong)extraout_fr0 << 0x20);
    fVar12 = SUB84(param_2,0);
    if (in_FPSCR_PR == '\0') {
      bVar19 = 0.0 < fVar12;
    }
    else {
      bVar19 = dVar17 < param_2;
    }
    pdVar6 = (double *)(param_5 + 0x6c);
    uVar13 = SUB84(dVar10,0);
    if (bVar19) {
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44(0x40000000,uVar13);
      }
      else {
        dVar10 = (double)CONCAT44(0x3f800000,uVar13) + (double)CONCAT44(0x3f800000,uVar13);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),DAT_8c0870dc);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar12);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar11 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar14);
      }
      fVar12 = (float)((ulonglong)dVar10 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar15 = (float)((ulonglong)dVar11 >> 0x20) / fVar12 + SUB84(dVar10,0);
        param_3 = (double)CONCAT44(fVar15,SUB84(dVar11,0));
        bVar19 = SUB84(param_2,0) < fVar15;
      }
      else {
        param_3 = dVar11 / dVar10 + dVar10;
        bVar19 = param_2 < param_3;
      }
      while (!bVar19) {
                    /* WARNING: Read-only address (ram,0x8c087460) is written */
        if (in_FPSCR_PR == '\0') {
          fVar15 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar15 = SUB84(param_2 - param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)pdVar7 = fVar15;
        }
        else {
          *pdVar7 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar15);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar11 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = (float)((ulonglong)dVar11 >> 0x20) / fVar12 + SUB84(dVar10,0);
          param_3 = (double)CONCAT44(fVar15,SUB84(dVar11,0));
          bVar19 = SUB84(param_2,0) < fVar15;
        }
        else {
          param_3 = dVar11 / dVar10 + dVar10;
          bVar19 = param_2 < param_3;
        }
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar19 = fVar12 < 0.0;
      }
      else {
        bVar19 = param_2 < dVar17;
      }
      if (bVar19) {
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)CONCAT44(0x40000000,uVar13);
        }
        else {
          dVar10 = (double)CONCAT44(0x3f800000,uVar13) + (double)CONCAT44(0x3f800000,uVar13);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)((ulonglong)DAT_8c08745c << 0x20);
        }
        else {
          dVar17 = (double)CONCAT44(uRam8c087460,DAT_8c08745c);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar12);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar11 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar14);
        }
        fVar15 = (float)((ulonglong)dVar10 >> 0x20);
        fVar12 = (float)((ulonglong)dVar17 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar18 = -((float)((ulonglong)dVar11 >> 0x20) / fVar15 + fVar12);
          param_3 = (double)CONCAT44(fVar18,SUB84(dVar11,0));
          bVar19 = fVar18 < SUB84(param_2,0);
        }
        else {
          param_3 = -(dVar11 / dVar10 + dVar17);
          bVar19 = param_3 < param_2;
        }
        while (!bVar19) {
          if (in_FPSCR_PR == '\0') {
            fVar18 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
          }
          else {
            fVar18 = SUB84(param_2 + param_2,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)pdVar7 = fVar18;
          }
          else {
            *pdVar7 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar18);
          }
          else {
            param_2 = (double)*(int *)(param_4 + 0x20);
          }
          dVar11 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = -((float)((ulonglong)dVar11 >> 0x20) / fVar15 + fVar12);
            param_3 = (double)CONCAT44(fVar18,SUB84(dVar11,0));
            bVar19 = fVar18 < SUB84(param_2,0);
          }
          else {
            param_3 = -(dVar11 / dVar10 + dVar17);
            bVar19 = param_3 < param_2;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*(float *)pdVar6);
    }
    else {
      in_xd6 = *pdVar6;
    }
    fVar12 = SUB84(dVar17,0);
    fVar15 = SUB84(param_2,0);
    if (in_FPSCR_PR == '\0') {
      bVar19 = fVar12 < fVar15;
    }
    else {
      bVar19 = dVar17 < param_2;
    }
    uVar13 = SUB84(dVar10,0);
    if (bVar19) {
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44(0x40000000,uVar13);
      }
      else {
        dVar10 = (double)CONCAT44(0x3f800000,uVar13) + (double)CONCAT44(0x3f800000,uVar13);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),DAT_8c0870dc);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar15);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x24);
      }
      dVar17 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
      }
      fVar12 = (float)((ulonglong)dVar10 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar15 = (float)((ulonglong)dVar17 >> 0x20) / fVar12 + SUB84(dVar10,0);
        param_3 = (double)CONCAT44(fVar15,SUB84(dVar17,0));
        bVar19 = SUB84(param_2,0) < fVar15;
      }
      else {
        param_3 = dVar17 / dVar10 + dVar10;
        bVar19 = param_2 < param_3;
      }
      while (!bVar19) {
                    /* WARNING: Read-only address (ram,0x8c087460) is written */
        if (in_FPSCR_PR == '\0') {
          fVar15 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar15 = SUB84(param_2 - param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)pdVar6 = fVar15;
        }
        else {
          *pdVar6 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar15);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x24);
        }
        dVar17 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = (float)((ulonglong)dVar17 >> 0x20) / fVar12 + SUB84(dVar10,0);
          param_3 = (double)CONCAT44(fVar15,SUB84(dVar17,0));
          bVar19 = SUB84(param_2,0) < fVar15;
        }
        else {
          param_3 = dVar17 / dVar10 + dVar10;
          bVar19 = param_2 < param_3;
        }
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar19 = fVar15 < fVar12;
      }
      else {
        bVar19 = param_2 < dVar17;
      }
      if (bVar19) {
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)CONCAT44(0x40000000,uVar13);
        }
        else {
          dVar10 = (double)CONCAT44(0x3f800000,uVar13) + (double)CONCAT44(0x3f800000,uVar13);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(DAT_8c08745c,fVar12);
        }
        else {
          dVar17 = (double)CONCAT44(uRam8c087460,DAT_8c08745c);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar15);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x24);
        }
        dVar11 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
        }
        fVar15 = (float)((ulonglong)dVar10 >> 0x20);
        fVar12 = (float)((ulonglong)dVar17 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar18 = -((float)((ulonglong)dVar11 >> 0x20) / fVar15 + fVar12);
          param_3 = (double)CONCAT44(fVar18,SUB84(dVar11,0));
          bVar19 = fVar18 < SUB84(param_2,0);
        }
        else {
          param_3 = -(dVar11 / dVar10 + dVar17);
          bVar19 = param_3 < param_2;
        }
        while (!bVar19) {
          if (in_FPSCR_PR == '\0') {
            fVar18 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
          }
          else {
            fVar18 = SUB84(param_2 + param_2,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)pdVar6 = fVar18;
          }
          else {
            *pdVar6 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar18);
          }
          else {
            param_2 = (double)*(int *)(param_4 + 0x24);
          }
          dVar11 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = -((float)((ulonglong)dVar11 >> 0x20) / fVar15 + fVar12);
            param_3 = (double)CONCAT44(fVar18,SUB84(dVar11,0));
            bVar19 = fVar18 < SUB84(param_2,0);
          }
          else {
            param_3 = -(dVar11 / dVar10 + dVar17);
            bVar19 = param_3 < param_2;
          }
        }
      }
    }
    puVar3 = PTR_FUN_8c087174;
    puVar2 = PTR_FUN_8c087170;
    iVar4 = *(int *)(param_4 + 0x20);
    dVar17 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44(0x40000000,SUB84(dVar10,0));
    }
    else {
      dVar17 = dVar17 + dVar17;
    }
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44(0xbf800000,SUB84(param_2,0));
    }
    else {
      dVar10 = -(double)CONCAT44(0x3f800000,SUB84(param_2,0));
    }
    iVar5 = *(int *)(param_4 + 0x24);
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),*(undefined4 *)(param_5 + 100));
    }
    else {
      in_xd6 = *(double *)(param_5 + 100);
    }
    fVar12 = (float)((ulonglong)dVar17 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (float)iVar4 / fVar12;
    }
    else {
      fVar15 = SUB84((double)CONCAT44((int)((ulonglong)param_3 >> 0x20),(float)iVar4) / dVar17,0);
    }
    dVar11 = in_xd8;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(fVar12,*(undefined4 *)(param_5 + 0x6c));
      dVar11 = (double)CONCAT44(fVar15,fVar15);
    }
    pbVar1 = (byte *)(param_5 + 2);
    fVar12 = (float)((ulonglong)dVar10 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44(-((float)((ulonglong)dVar11 >> 0x20) + fVar12),SUB84(dVar11,0));
    }
    else {
      dVar11 = -(dVar11 + dVar10);
    }
    uVar13 = (undefined4)((ulonglong)dVar11 >> 0x20);
    local_28 = SUB84(dVar11,0);
    if (in_FPSCR_SZ == '\0') {
      local_28 = uVar13;
      uStackY_24 = SUB84(dVar11,0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = (float)iVar5 / (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      fVar15 = SUB84((double)CONCAT44(uVar13,(float)iVar5) / dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      in_xd8 = (double)CONCAT44(fVar15,fVar15);
    }
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44(-((float)((ulonglong)in_xd8 >> 0x20) + fVar12),SUB84(in_xd8,0));
    }
    else {
      dVar11 = -(in_xd8 + dVar10);
    }
    uVar13 = SUB84(dVar11,0);
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(local_28,uVar13);
      local_20 = (int)((ulonglong)dVar11 >> 0x20);
      uStackY_1c = uVar13;
      local_18 = in_PR;
    }
    else {
      dVar16 = (double)CONCAT44(uStackY_24,local_28);
      local_20 = uVar13;
    }
    fVar12 = SUB84(dVar10,0);
    if (in_FPSCR_PR == '\0') {
      bVar19 = fVar12 < (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      bVar19 = dVar10 < dVar16;
    }
    if (bVar19) {
      if (in_FPSCR_SZ == '\0') {
        in_xd6 = (double)CONCAT44(local_28,fVar12);
      }
      else {
        in_xd6 = (double)CONCAT44(uStackY_24,local_28);
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      in_xd6 = (double)CONCAT44(fVar12,fVar12);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(uStackY_24,SUB84(dVar16,0));
    }
    else {
      dVar10 = (double)CONCAT44(local_20,uStackY_24);
    }
    if (in_FPSCR_PR == '\0') {
      bVar19 = (float)((ulonglong)dVar10 >> 0x20) < (float)((ulonglong)in_xd6 >> 0x20);
    }
    else {
      bVar19 = dVar10 < in_xd6;
    }
    if (bVar19) {
      if (in_FPSCR_SZ == '\0') {
        in_xd6 = (double)CONCAT44(uStackY_24,SUB84(in_xd6,0));
      }
      else {
        in_xd6 = (double)CONCAT44(local_20,uStackY_24);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(local_20,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)CONCAT44(uStackY_1c,local_20);
    }
    if (in_FPSCR_PR == '\0') {
      bVar19 = SUB84(dVar17,0) < (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      bVar19 = dVar17 < dVar10;
    }
    uVar13 = (undefined4)((ulonglong)in_xd6 >> 0x20);
    if (bVar19) {
      if (in_FPSCR_SZ == '\0') {
        in_xd6 = (double)CONCAT44(uVar13,local_20);
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      in_xd6 = (double)CONCAT44(uVar13,SUB84(dVar17,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(uStackY_1c,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)CONCAT44(local_18,uStackY_1c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar19 = (float)((ulonglong)dVar10 >> 0x20) < SUB84(in_xd6,0);
    }
    else {
      bVar19 = dVar10 < in_xd6;
    }
    if ((bVar19) && (in_FPSCR_SZ == '\0')) {
      in_xd6 = (double)CONCAT44((int)((ulonglong)in_xd6 >> 0x20),uStackY_1c);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(_DAT_8c0870e0,SUB84(in_xd6,0));
      in_xd6 = (double)CONCAT44((int)((ulonglong)in_xd6 >> 0x20),SUB84(dVar10,0));
    }
    else {
      dVar17 = (double)CONCAT44(DAT_8c0870e4,_DAT_8c0870e0);
    }
    fVar12 = (float)((ulonglong)dVar17 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (float)((ulonglong)in_xd6 >> 0x20) * fVar12;
    }
    else {
      fVar15 = (float)((ulonglong)(in_xd6 * dVar17) >> 0x20);
    }
    dVar10 = (double)CONCAT44(fVar15,DAT_8c0870e4);
    if (in_FPSCR_PR != '\0' || DAT_8c0870e4 <= fVar15) {
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44(fVar15 - (DAT_8c0870e4 + DAT_8c0870e4),DAT_8c0870e4 + DAT_8c0870e4
                                 );
      }
      else {
        dVar10 = (dVar10 + dVar10) - (dVar10 + dVar10);
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar20 = (int)(float)((ulonglong)dVar10 >> 0x20);
      dVar17 = (double)CONCAT44(fVar12,SUB84(dVar17,0) * fVar12);
    }
    else {
      iVar20 = (int)dVar10;
      dVar17 = dVar17 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)((ulonglong)dVar17 & 0xffffffff);
    }
    dVar11 = (double)CONCAT44(DAT_8c0870e4,SUB84(dVar10,0));
    uVar8 = ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 0x10 + iVar20;
    if (in_FPSCR_PR == '\0') {
      bVar19 = SUB84(dVar17,0) < DAT_8c0870e4;
    }
    else {
      bVar19 = dVar17 < dVar11;
    }
    if (!bVar19) {
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44(DAT_8c0870e4 + DAT_8c0870e4,
                                  SUB84(dVar10,0) - (DAT_8c0870e4 + DAT_8c0870e4));
      }
      else {
        dVar11 = (dVar11 + dVar11) - (dVar11 + dVar11);
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar20 = (int)SUB84(dVar11,0);
    }
    else {
      iVar20 = (int)dVar11;
    }
    uVar9 = ((int)(iVar5 + (uint)(iVar5 < 0)) >> 1) * 0x10 + iVar20;
    if ((uint)(iVar4 * 0x10) < uVar8) {
      do {
        uVar8 = uVar8 + iVar4 * -0x10;
      } while ((uint)(iVar4 * 0x10) < uVar8);
    }
    if ((uint)(iVar5 << 4) < uVar9) {
      do {
        uVar9 = uVar9 + iVar4 * -0x10;
      } while ((uint)(iVar5 << 4) < uVar9);
    }
    (*(code *)PTR_FUN_8c087170)();
    (*(code *)puVar3)();
    (*(code *)puVar2)();
    (*(code *)puVar3)();
    if ((uVar8 & 7) != 0) {
      if (((uVar9 & 7) == 0) || (uVar9 <= uVar8)) goto LAB_8c087148;
      uVar8 = 8;
    }
    if ((uVar8 & 0xf) != 0) {
      *pbVar1 = *pbVar1 & (byte)DAT_8c0874b4 | 0x10;
      (*(code *)puVar3)();
      return 0;
    }
LAB_8c087148:
    *pbVar1 = *pbVar1 & (byte)DAT_8c08716c;
    (*(code *)puVar3)(0xf);
    return 0;
                    /* WARNING: Read-only address (ram,0x8c087460) is written */
  }
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44(uVar13,*(float *)pdVar7);
    dVar17 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x60),uVar14);
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),DAT_8c0872e0);
  }
  else {
    in_xd6 = *pdVar7;
    dVar17 = *(double *)(param_5 + 0x60);
  }
  dVar11 = (double)((ulonglong)extraout_fr0 << 0x20);
  fVar12 = SUB84(dVar10,0);
  fVar15 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + fVar12,SUB84(dVar17,0));
    bVar19 = 0.0 < fVar15;
  }
  else {
    dVar17 = dVar17 + dVar10;
    bVar19 = dVar11 < param_2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(param_5 + 0x60) = (int)((ulonglong)dVar17 >> 0x20);
  }
  else {
    *(double *)(param_5 + 0x60) = dVar17;
  }
  pdVar6 = (double *)(param_5 + 0x6c);
  if (bVar19) {
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44(0x40000000,fVar12);
      param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar15);
    }
    else {
      dVar10 = (double)CONCAT44(0x3f800000,fVar12) + (double)CONCAT44(0x3f800000,fVar12);
      param_2 = (double)*(int *)(param_4 + 0x20);
    }
    dVar16 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar17,0));
    }
    fVar12 = (float)((ulonglong)dVar10 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (float)((ulonglong)dVar16 >> 0x20) / fVar12 + SUB84(dVar10,0);
      dVar17 = (double)CONCAT44(fVar15,SUB84(dVar16,0));
      bVar19 = SUB84(param_2,0) < fVar15;
    }
    else {
      dVar17 = dVar16 / dVar10 + dVar10;
      bVar19 = param_2 < dVar17;
    }
    while (!bVar19) {
                    /* WARNING: Read-only address (ram,0x8c087460) is written */
      if (in_FPSCR_PR == '\0') {
        fVar15 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
      }
      else {
        fVar15 = SUB84(param_2 - param_2,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)pdVar7 = fVar15;
      }
      else {
        *pdVar7 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar15);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar16 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar17,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar15 = (float)((ulonglong)dVar16 >> 0x20) / fVar12 + SUB84(dVar10,0);
        dVar17 = (double)CONCAT44(fVar15,SUB84(dVar16,0));
        bVar19 = SUB84(param_2,0) < fVar15;
      }
      else {
        dVar17 = dVar16 / dVar10 + dVar10;
        bVar19 = param_2 < dVar17;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar19 = fVar15 < 0.0;
    }
    else {
      bVar19 = param_2 < dVar11;
    }
    if (bVar19) {
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44(0x40000000,fVar12);
      }
      else {
        dVar10 = (double)CONCAT44(0x3f800000,fVar12) + (double)CONCAT44(0x3f800000,fVar12);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)((ulonglong)DAT_8c08745c << 0x20);
      }
      else {
        dVar11 = (double)CONCAT44(uRam8c087460,DAT_8c08745c);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar15);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar16 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar17,0));
      }
      fVar15 = (float)((ulonglong)dVar10 >> 0x20);
      fVar12 = (float)((ulonglong)dVar11 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar18 = -((float)((ulonglong)dVar16 >> 0x20) / fVar15 + fVar12);
        dVar17 = (double)CONCAT44(fVar18,SUB84(dVar16,0));
        bVar19 = fVar18 < SUB84(param_2,0);
      }
      else {
        dVar17 = -(dVar16 / dVar10 + dVar11);
        bVar19 = dVar17 < param_2;
      }
      while (!bVar19) {
        if (in_FPSCR_PR == '\0') {
          fVar18 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar18 = SUB84(param_2 + param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)pdVar7 = fVar18;
        }
        else {
          *pdVar7 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar18);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar16 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar17,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar18 = -((float)((ulonglong)dVar16 >> 0x20) / fVar15 + fVar12);
          dVar17 = (double)CONCAT44(fVar18,SUB84(dVar16,0));
          bVar19 = fVar18 < SUB84(param_2,0);
        }
        else {
          dVar17 = -(dVar16 / dVar10 + dVar11);
          bVar19 = dVar17 < param_2;
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*(float *)pdVar6);
  }
  else {
    in_xd6 = *pdVar6;
  }
  fVar12 = SUB84(dVar11,0);
  fVar15 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar19 = fVar12 < fVar15;
  }
  else {
    bVar19 = dVar11 < param_2;
  }
  uVar13 = SUB84(dVar10,0);
  if (bVar19) {
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44(0x40000000,uVar13);
      param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar15);
    }
    else {
      dVar10 = (double)CONCAT44(0x3f800000,uVar13) + (double)CONCAT44(0x3f800000,uVar13);
      param_2 = (double)*(int *)(param_4 + 0x24);
    }
    dVar11 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar17,0));
    }
    fVar12 = (float)((ulonglong)dVar10 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (float)((ulonglong)dVar11 >> 0x20) / fVar12 + SUB84(dVar10,0);
      dVar17 = (double)CONCAT44(fVar15,SUB84(dVar11,0));
      bVar19 = SUB84(param_2,0) < fVar15;
    }
    else {
      dVar17 = dVar11 / dVar10 + dVar10;
      bVar19 = param_2 < dVar17;
    }
    while (!bVar19) {
                    /* WARNING: Read-only address (ram,0x8c087460) is written */
      if (in_FPSCR_PR == '\0') {
        fVar15 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
      }
      else {
        fVar15 = SUB84(param_2 - param_2,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)pdVar6 = fVar15;
      }
      else {
        *pdVar6 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar15);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x24);
      }
      dVar11 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar17,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar15 = (float)((ulonglong)dVar11 >> 0x20) / fVar12 + SUB84(dVar10,0);
        dVar17 = (double)CONCAT44(fVar15,SUB84(dVar11,0));
        bVar19 = SUB84(param_2,0) < fVar15;
      }
      else {
        dVar17 = dVar11 / dVar10 + dVar10;
        bVar19 = param_2 < dVar17;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar19 = fVar15 < fVar12;
    }
    else {
      bVar19 = param_2 < dVar11;
    }
    if (bVar19) {
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44(0x40000000,uVar13);
      }
      else {
        dVar10 = (double)CONCAT44(0x3f800000,uVar13) + (double)CONCAT44(0x3f800000,uVar13);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(DAT_8c08745c,fVar12);
      }
      else {
        dVar11 = (double)CONCAT44(uRam8c087460,DAT_8c08745c);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar15);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x24);
      }
      dVar16 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar17,0));
      }
      fVar15 = (float)((ulonglong)dVar10 >> 0x20);
      fVar12 = (float)((ulonglong)dVar11 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar18 = -((float)((ulonglong)dVar16 >> 0x20) / fVar15 + fVar12);
        dVar17 = (double)CONCAT44(fVar18,SUB84(dVar16,0));
        bVar19 = fVar18 < SUB84(param_2,0);
      }
      else {
        dVar17 = -(dVar16 / dVar10 + dVar11);
        bVar19 = dVar17 < param_2;
      }
      while (!bVar19) {
        if (in_FPSCR_PR == '\0') {
          fVar18 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar18 = SUB84(param_2 + param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)pdVar6 = fVar18;
        }
        else {
          *pdVar6 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar18);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x24);
        }
        dVar16 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar17,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar18 = -((float)((ulonglong)dVar16 >> 0x20) / fVar15 + fVar12);
          dVar17 = (double)CONCAT44(fVar18,SUB84(dVar16,0));
          bVar19 = fVar18 < SUB84(param_2,0);
        }
        else {
          dVar17 = -(dVar16 / dVar10 + dVar11);
          bVar19 = dVar17 < param_2;
        }
      }
    }
  }
  puVar3 = PTR_FUN_8c087458;
  puVar2 = PTR_FUN_8c0872ec;
  iVar4 = *(int *)(param_4 + 0x20);
  dVar11 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44(0x40000000,SUB84(dVar10,0));
  }
  else {
    dVar11 = dVar11 + dVar11;
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44(0xbf800000,SUB84(param_2,0));
  }
  else {
    dVar10 = -(double)CONCAT44(0x3f800000,SUB84(param_2,0));
  }
  iVar5 = *(int *)(param_4 + 0x24);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),*(undefined4 *)(param_5 + 100));
  }
  else {
    in_xd6 = *(double *)(param_5 + 100);
  }
  fVar12 = (float)((ulonglong)dVar11 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar15 = (float)iVar4 / fVar12;
  }
  else {
    fVar15 = SUB84((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)iVar4) / dVar11,0);
  }
  dVar17 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(fVar12,*(undefined4 *)(param_5 + 0x6c));
    dVar17 = (double)CONCAT44(fVar15,fVar15);
  }
  pbVar1 = (byte *)(param_5 + 2);
  fVar12 = (float)((ulonglong)dVar10 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44(-((float)((ulonglong)dVar17 >> 0x20) + fVar12),SUB84(dVar17,0));
  }
  else {
    dVar17 = -(dVar17 + dVar10);
  }
  uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
  local_28 = SUB84(dVar17,0);
  if (in_FPSCR_SZ == '\0') {
    local_28 = uVar13;
    uStackY_24 = SUB84(dVar17,0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar15 = (float)iVar5 / (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar15 = SUB84((double)CONCAT44(uVar13,(float)iVar5) / dVar11,0);
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd8 = (double)CONCAT44(fVar15,fVar15);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44(-((float)((ulonglong)in_xd8 >> 0x20) + fVar12),SUB84(in_xd8,0));
  }
  else {
    dVar17 = -(in_xd8 + dVar10);
  }
  uVar13 = SUB84(dVar17,0);
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(local_28,uVar13);
    local_20 = (int)((ulonglong)dVar17 >> 0x20);
    uStackY_1c = uVar13;
    local_18 = in_PR;
  }
  else {
    dVar16 = (double)CONCAT44(uStackY_24,local_28);
    local_20 = uVar13;
  }
  fVar12 = SUB84(dVar10,0);
  if (in_FPSCR_PR == '\0') {
    bVar19 = fVar12 < (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    bVar19 = dVar10 < dVar16;
  }
  if (bVar19) {
    if (in_FPSCR_SZ == '\0') {
      in_xd6 = (double)CONCAT44(local_28,fVar12);
    }
    else {
      in_xd6 = (double)CONCAT44(uStackY_24,local_28);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    in_xd6 = (double)CONCAT44(fVar12,fVar12);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(uStackY_24,SUB84(dVar16,0));
  }
  else {
    dVar10 = (double)CONCAT44(local_20,uStackY_24);
  }
  if (in_FPSCR_PR == '\0') {
    bVar19 = (float)((ulonglong)dVar10 >> 0x20) < (float)((ulonglong)in_xd6 >> 0x20);
  }
  else {
    bVar19 = dVar10 < in_xd6;
  }
  if (bVar19) {
    if (in_FPSCR_SZ == '\0') {
      in_xd6 = (double)CONCAT44(uStackY_24,SUB84(in_xd6,0));
    }
    else {
      in_xd6 = (double)CONCAT44(local_20,uStackY_24);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(local_20,SUB84(dVar10,0));
  }
  else {
    dVar10 = (double)CONCAT44(uStackY_1c,local_20);
  }
  if (in_FPSCR_PR == '\0') {
    bVar19 = SUB84(dVar11,0) < (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    bVar19 = dVar11 < dVar10;
  }
  uVar13 = (undefined4)((ulonglong)in_xd6 >> 0x20);
  if (bVar19) {
    if (in_FPSCR_SZ == '\0') {
      in_xd6 = (double)CONCAT44(uVar13,local_20);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    in_xd6 = (double)CONCAT44(uVar13,SUB84(dVar11,0));
  }
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(uStackY_1c,SUB84(dVar10,0));
  }
  else {
    dVar10 = (double)CONCAT44(local_18,uStackY_1c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar19 = (float)((ulonglong)dVar10 >> 0x20) < SUB84(in_xd6,0);
  }
  else {
    bVar19 = dVar10 < in_xd6;
  }
  if ((bVar19) && (in_FPSCR_SZ == '\0')) {
    in_xd6 = (double)CONCAT44((int)((ulonglong)in_xd6 >> 0x20),uStackY_1c);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c0872e4,SUB84(in_xd6,0));
    in_xd6 = (double)CONCAT44((int)((ulonglong)in_xd6 >> 0x20),SUB84(dVar10,0));
  }
  else {
    dVar17 = (double)CONCAT44(DAT_8c0872e8,_DAT_8c0872e4);
  }
  fVar12 = (float)((ulonglong)dVar17 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar15 = (float)((ulonglong)in_xd6 >> 0x20) * fVar12;
  }
  else {
    fVar15 = (float)((ulonglong)(in_xd6 * dVar17) >> 0x20);
  }
  dVar10 = (double)CONCAT44(fVar15,DAT_8c0872e8);
  if (in_FPSCR_PR != '\0' || DAT_8c0872e8 <= fVar15) {
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44(fVar15 - (DAT_8c0872e8 + DAT_8c0872e8),DAT_8c0872e8 + DAT_8c0872e8);
    }
    else {
      dVar10 = (dVar10 + dVar10) - (dVar10 + dVar10);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar20 = (int)(float)((ulonglong)dVar10 >> 0x20);
    dVar17 = (double)CONCAT44(fVar12,SUB84(dVar17,0) * fVar12);
  }
  else {
    iVar20 = (int)dVar10;
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)((ulonglong)dVar17 & 0xffffffff);
  }
  uVar8 = ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 0x10 + iVar20;
  dVar11 = (double)CONCAT44(DAT_8c0872e8,SUB84(dVar10,0));
  if (in_FPSCR_PR == '\0') {
    bVar19 = SUB84(dVar17,0) < DAT_8c0872e8;
  }
  else {
    bVar19 = dVar17 < dVar11;
  }
  if (!bVar19) {
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c0872e8 + DAT_8c0872e8,
                                SUB84(dVar10,0) - (DAT_8c0872e8 + DAT_8c0872e8));
    }
    else {
      dVar11 = (dVar11 + dVar11) - (dVar11 + dVar11);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar20 = (int)SUB84(dVar11,0);
  }
  else {
    iVar20 = (int)dVar11;
  }
  uVar9 = ((int)(iVar5 + (uint)(iVar5 < 0)) >> 1) * 0x10 + iVar20;
  if ((uint)(iVar4 * 0x10) < uVar8) {
    do {
      uVar8 = uVar8 + iVar4 * -0x10;
    } while ((uint)(iVar4 * 0x10) < uVar8);
  }
  if ((uint)(iVar5 << 4) < uVar9) {
    do {
      uVar9 = uVar9 + iVar4 * -0x10;
    } while ((uint)(iVar5 << 4) < uVar9);
  }
  (*(code *)PTR_FUN_8c0872ec)();
  (*(code *)puVar3)();
  (*(code *)puVar2)();
  (*(code *)puVar3)();
  if ((uVar8 & 7) != 0) {
    if (((uVar9 & 7) == 0) || (uVar9 <= uVar8)) goto LAB_8c087336;
    uVar8 = 8;
  }
  if ((uVar8 & 0xf) != 0) {
    *pbVar1 = *pbVar1 & (byte)DAT_8c0874b4 | 0x10;
    (*(code *)puVar3)();
    return 1;
  }
LAB_8c087336:
  *pbVar1 = *pbVar1 & (byte)DAT_8c087452;
  (*(code *)puVar3)(0xf);
                    /* WARNING: Read-only address (ram,0x8c087460) is written */
  return 1;
                    /* WARNING: Read-only address (ram,0x8c087460) is written */
}

