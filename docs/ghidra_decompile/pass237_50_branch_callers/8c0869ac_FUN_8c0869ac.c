// entry: 8c0869ac
// name: FUN_8c0869ac
// signature: undefined FUN_8c0869ac(void)


/* WARNING: Removing unreachable block (ram,0x8c086a5e) */
/* WARNING: Removing unreachable block (ram,0x8c086cba) */
/* WARNING: Removing unreachable block (ram,0x8c086c9c) */
/* WARNING: Removing unreachable block (ram,0x8c086c9e) */
/* WARNING: Removing unreachable block (ram,0x8c086a5c) */
/* WARNING: Removing unreachable block (ram,0x8c086a7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8c0869ac(undefined4 param_1,double param_2,double param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  byte *pbVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint extraout_fr1;
  double dVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar19;
  double dVar18;
  undefined8 in_xd6;
  double in_xd8;
  bool bVar20;
  undefined4 in_PR;
  int iVar21;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_30;
  undefined4 uStackY_2c;
  undefined4 local_28;
  undefined4 uStackY_24;
  undefined4 local_20;
  
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x60),param_1);
  }
  else {
    dVar15 = *(double *)(param_5 + 0x60);
  }
  pfVar7 = (float *)(param_5 + 100);
  iVar3 = (*(code *)PTR_FUN_8c086b24)(dVar15,param_5 + 0x20,pfVar7,FUN_8c09e7e4);
  local_20 = in_PR;
  if (iVar3 != 0) {
    dVar11 = (double)(*(code *)PTR_FUN_8c086d60)(param_5 + 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(DAT_8c086d68,*(undefined4 *)(param_5 + 0x60));
      dVar16 = (double)CONCAT44(*(undefined4 *)DAT_8c086d64,*pfVar7);
    }
    else {
      in_xd8 = *(double *)(param_5 + 0x60);
      dVar17 = (double)CONCAT44(DAT_8c086d6c,DAT_8c086d68);
      in_xd6 = *(undefined8 *)pfVar7;
      dVar16 = *DAT_8c086d64;
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) /
                                (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 / dVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(DAT_8c086d6c,SUB84(dVar16,0));
    }
    else {
      dVar16 = (double)CONCAT44(_DAT_8c086d70,DAT_8c086d6c);
    }
    fVar12 = (float)((ulonglong)dVar11 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)((ulonglong)dVar17 >> 0x20) * fVar12 * (float)((ulonglong)dVar16 >> 0x20);
      fVar12 = fVar12 / fVar19;
      dVar11 = (double)CONCAT44(fVar12,SUB84(dVar11,0));
      dVar17 = (double)CONCAT44(fVar19,SUB84(dVar17,0) + fVar12);
    }
    else {
      dVar17 = dVar17 * dVar11 * dVar16;
      dVar11 = dVar11 / dVar17;
      dVar17 = dVar17 + dVar11;
    }
    dVar11 = (double)((ulonglong)dVar11 & 0xffffffff);
    fVar12 = SUB84(dVar16,0);
    if (in_FPSCR_PR == '\0') {
      bVar20 = 0.0 < fVar12;
    }
    else {
      bVar20 = dVar11 < dVar16;
    }
    uVar14 = SUB84(dVar17,0);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(param_5 + 0x60) = uVar14;
    }
    else {
      *(double *)(param_5 + 0x60) = in_xd8;
    }
    pfVar4 = (float *)(param_5 + 0x6c);
    uVar13 = (undefined4)((ulonglong)dVar15 >> 0x20);
    if (bVar20) {
      dVar15 = (double)CONCAT44(uVar13,0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar13 = 0x40000000;
      }
      else {
        uVar13 = SUB84(dVar15 + dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(_DAT_8c086d70,uVar13);
      }
      else {
        dVar15 = (double)CONCAT44(_DAT_8c086d74,_DAT_8c086d70);
      }
      if (in_FPSCR_PR == '\0') {
        dVar16 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar12);
      }
      else {
        dVar16 = (double)*(int *)(param_4 + 0x20);
      }
      dVar17 = dVar16;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uVar14);
      }
      fVar12 = (float)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar19 = (float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12;
        dVar17 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
        bVar20 = SUB84(dVar16,0) < fVar19;
      }
      else {
        dVar17 = dVar17 / dVar15 + dVar15;
        bVar20 = dVar16 < dVar17;
      }
      while (!bVar20) {
                    /* WARNING: Read-only address (ram,0x8c086ec0) is written */
        if (in_FPSCR_PR == '\0') {
          fVar19 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          fVar19 = SUB84(dVar16 - dVar16,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar7 = fVar19;
        }
        else {
          *(undefined8 *)pfVar7 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar19);
        }
        else {
          dVar16 = (double)*(int *)(param_4 + 0x20);
        }
        dVar18 = dVar16;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar17,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar19 = (float)((ulonglong)dVar18 >> 0x20) / SUB84(dVar15,0) + fVar12;
          dVar17 = (double)CONCAT44(fVar19,SUB84(dVar18,0));
          bVar20 = SUB84(dVar16,0) < fVar19;
        }
        else {
          dVar17 = dVar18 / dVar15 + dVar15;
          bVar20 = dVar16 < dVar17;
        }
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar20 = fVar12 < 0.0;
      }
      else {
        bVar20 = dVar16 < dVar11;
      }
      if (bVar20) {
        dVar15 = (double)CONCAT44(uVar13,0x3f800000);
        if (in_FPSCR_PR == '\0') {
          uVar13 = 0x40000000;
        }
        else {
          uVar13 = SUB84(dVar15 + dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c086ebc,uVar13);
        }
        else {
          dVar15 = (double)CONCAT44(uRam8c086ec0,DAT_8c086ebc);
        }
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar12);
        }
        else {
          dVar16 = (double)*(int *)(param_4 + 0x20);
        }
        dVar17 = dVar16;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uVar14);
        }
        fVar12 = (float)((ulonglong)dVar15 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar19 = -((float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12);
          dVar17 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
          bVar20 = fVar19 < SUB84(dVar16,0);
        }
        else {
          dVar17 = -(dVar17 / dVar15 + dVar15);
          bVar20 = dVar17 < dVar16;
        }
        while (!bVar20) {
          if (in_FPSCR_PR == '\0') {
            fVar19 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
          }
          else {
            fVar19 = SUB84(dVar16 + dVar16,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar7 = fVar19;
          }
          else {
            *(undefined8 *)pfVar7 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar19);
          }
          else {
            dVar16 = (double)*(int *)(param_4 + 0x20);
          }
          dVar18 = dVar16;
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar17,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar19 = -((float)((ulonglong)dVar18 >> 0x20) / SUB84(dVar15,0) + fVar12);
            dVar17 = (double)CONCAT44(fVar19,SUB84(dVar18,0));
            bVar20 = fVar19 < SUB84(dVar16,0);
          }
          else {
            dVar17 = -(dVar18 / dVar15 + dVar15);
            bVar20 = dVar17 < dVar16;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*pfVar4);
    }
    else {
      in_xd6 = *(undefined8 *)pfVar4;
    }
    fVar12 = SUB84(dVar16,0);
    if (in_FPSCR_PR == '\0') {
      bVar20 = 0.0 < fVar12;
    }
    else {
      bVar20 = dVar11 < dVar16;
    }
    uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
    if (bVar20) {
      dVar15 = (double)CONCAT44(uVar14,0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar14 = 0x40000000;
      }
      else {
        uVar14 = SUB84(dVar15 + dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(_DAT_8c086d70,uVar14);
      }
      else {
        dVar15 = (double)CONCAT44(_DAT_8c086d74,_DAT_8c086d70);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar12);
      }
      else {
        dVar11 = (double)*(int *)(param_4 + 0x24);
      }
      dVar16 = dVar11;
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar17,0));
      }
      fVar12 = (float)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar19 = (float)((ulonglong)dVar16 >> 0x20) / SUB84(dVar15,0) + fVar12;
        dVar17 = (double)CONCAT44(fVar19,SUB84(dVar16,0));
        bVar20 = SUB84(dVar11,0) < fVar19;
      }
      else {
        dVar17 = dVar16 / dVar15 + dVar15;
        bVar20 = dVar11 < dVar17;
      }
      while (!bVar20) {
                    /* WARNING: Read-only address (ram,0x8c086ec0) is written */
        if (in_FPSCR_PR == '\0') {
          fVar19 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          fVar19 = SUB84(dVar11 - dVar11,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar4 = fVar19;
        }
        else {
          *(undefined8 *)pfVar4 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar11 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar19);
        }
        else {
          dVar11 = (double)*(int *)(param_4 + 0x24);
        }
        dVar16 = dVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar17,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar19 = (float)((ulonglong)dVar16 >> 0x20) / SUB84(dVar15,0) + fVar12;
          dVar17 = (double)CONCAT44(fVar19,SUB84(dVar16,0));
          bVar20 = SUB84(dVar11,0) < fVar19;
        }
        else {
          dVar17 = dVar16 / dVar15 + dVar15;
          bVar20 = dVar11 < dVar17;
        }
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar20 = fVar12 < 0.0;
      }
      else {
        bVar20 = dVar16 < dVar11;
      }
      if (bVar20) {
        dVar15 = (double)CONCAT44(uVar14,0x3f800000);
        if (in_FPSCR_PR == '\0') {
          uVar14 = 0x40000000;
        }
        else {
          uVar14 = SUB84(dVar15 + dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c086f5c,uVar14);
        }
        else {
          dVar15 = (double)CONCAT44(DAT_8c086f60,DAT_8c086f5c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar11 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar12);
        }
        else {
          dVar11 = (double)*(int *)(param_4 + 0x24);
        }
        dVar16 = dVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar17,0));
        }
        fVar12 = (float)((ulonglong)dVar15 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar19 = -((float)((ulonglong)dVar16 >> 0x20) / SUB84(dVar15,0) + fVar12);
          dVar17 = (double)CONCAT44(fVar19,SUB84(dVar16,0));
          bVar20 = fVar19 < SUB84(dVar11,0);
        }
        else {
          dVar17 = -(dVar16 / dVar15 + dVar15);
          bVar20 = dVar17 < dVar11;
        }
        while (!bVar20) {
          if (in_FPSCR_PR == '\0') {
            fVar19 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
          }
          else {
            fVar19 = SUB84(dVar11 + dVar11,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar4 = fVar19;
          }
          else {
            *(undefined8 *)pfVar4 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            dVar11 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar19);
          }
          else {
            dVar11 = (double)*(int *)(param_4 + 0x24);
          }
          dVar16 = dVar11;
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar17,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar19 = -((float)((ulonglong)dVar16 >> 0x20) / SUB84(dVar15,0) + fVar12);
            dVar17 = (double)CONCAT44(fVar19,SUB84(dVar16,0));
            bVar20 = fVar19 < SUB84(dVar11,0);
          }
          else {
            dVar17 = -(dVar16 / dVar15 + dVar15);
            bVar20 = dVar17 < dVar11;
          }
        }
      }
    }
    puVar2 = PTR_FUN_8c086eb8;
    puVar1 = PTR_FUN_8c086eb4;
    iVar3 = *(int *)(param_4 + 0x20);
    uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
    dVar15 = (double)CONCAT44(uVar14,0x3f800000);
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44(uVar14,0x40000000);
    }
    else {
      dVar15 = dVar15 + dVar15;
    }
    iVar5 = *(int *)(param_4 + 0x24);
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(*(undefined4 *)(param_5 + 100),0xbf800000);
    }
    else {
      dVar11 = *(double *)(param_5 + 100);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (float)iVar3 / SUB84(dVar15,0);
    }
    else {
      fVar12 = SUB84((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),(float)iVar3) / dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x6c),SUB84(dVar15,0));
      dVar17 = (double)CONCAT44(fVar12,fVar12);
    }
    else {
      dVar15 = *(double *)(param_5 + 0x6c);
      dVar17 = in_xd8;
    }
    fVar12 = SUB84(dVar11,0);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44(-((float)((ulonglong)dVar17 >> 0x20) + fVar12),SUB84(dVar17,0));
    }
    else {
      dVar17 = -(dVar17 + dVar11);
    }
    uVar14 = (undefined4)((ulonglong)dVar17 >> 0x20);
    uStackY_2c = SUB84(in_xd8,0);
    uStackY_24 = uStackY_2c;
    local_30 = SUB84(dVar17,0);
    if (in_FPSCR_SZ == '\0') {
      local_30 = uVar14;
      uStackY_2c = SUB84(dVar17,0);
    }
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)iVar5 / SUB84(dVar15,0);
    }
    else {
      fVar19 = SUB84((double)CONCAT44(uVar14,(float)iVar5) / dVar15,0);
    }
    dVar17 = in_xd8;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(fVar19,fVar19);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44(-((float)((ulonglong)dVar17 >> 0x20) + fVar12),SUB84(dVar17,0));
    }
    else {
      dVar17 = -(dVar17 + dVar11);
    }
    uVar14 = SUB84(dVar17,0);
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(local_30,uVar14);
      local_28 = (int)((ulonglong)dVar17 >> 0x20);
      uStackY_24 = uVar14;
    }
    else {
      local_20 = (undefined4)((ulonglong)in_xd8 >> 0x20);
      dVar16 = (double)CONCAT44(uStackY_2c,local_30);
      local_28 = uVar14;
    }
    if (in_FPSCR_PR == '\0') {
      bVar20 = (float)((ulonglong)dVar11 >> 0x20) < (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      bVar20 = dVar11 < dVar16;
    }
    pbVar6 = (byte *)(param_5 + 2);
    if (bVar20) {
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(local_30,fVar12);
      }
      else {
        dVar11 = (double)CONCAT44(uStackY_2c,local_30);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(uStackY_2c,SUB84(dVar16,0));
    }
    else {
      dVar17 = (double)CONCAT44(local_28,uStackY_2c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar20 = (float)((ulonglong)dVar17 >> 0x20) < (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      bVar20 = dVar17 < dVar11;
    }
    if (bVar20) {
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(uStackY_2c,SUB84(dVar11,0));
      }
      else {
        dVar11 = (double)CONCAT44(local_28,uStackY_2c);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(local_28,SUB84(dVar17,0));
    }
    else {
      dVar17 = (double)CONCAT44(uStackY_24,local_28);
    }
    if (in_FPSCR_PR == '\0') {
      bVar20 = (float)((ulonglong)dVar15 >> 0x20) < (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      bVar20 = dVar15 < dVar17;
    }
    if (bVar20) {
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(local_28,SUB84(dVar15,0));
      }
      else {
        dVar15 = (double)CONCAT44(uStackY_24,local_28);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(uStackY_24,SUB84(dVar17,0));
    }
    else {
      dVar17 = (double)CONCAT44(local_20,uStackY_24);
    }
    if (in_FPSCR_PR == '\0') {
      bVar20 = (float)((ulonglong)dVar17 >> 0x20) < (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      bVar20 = dVar17 < dVar15;
    }
    if (bVar20) {
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(uStackY_24,SUB84(dVar15,0));
      }
      else {
        dVar15 = (double)CONCAT44(local_20,uStackY_24);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(_DAT_8c086d74,SUB84(dVar11,0));
      dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar17,0));
    }
    else {
      dVar16 = (double)CONCAT44(DAT_8c086d78,_DAT_8c086d74);
    }
    fVar12 = (float)((ulonglong)dVar16 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)((ulonglong)dVar11 >> 0x20) * fVar12;
    }
    else {
      fVar19 = (float)((ulonglong)(dVar11 * dVar16) >> 0x20);
    }
    dVar11 = (double)CONCAT44(fVar19,DAT_8c086d78);
    if (in_FPSCR_PR != '\0' || DAT_8c086d78 <= fVar19) {
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44(fVar19 - (DAT_8c086d78 + DAT_8c086d78),DAT_8c086d78 + DAT_8c086d78
                                 );
      }
      else {
        dVar11 = (dVar11 + dVar11) - (dVar11 + dVar11);
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar21 = (int)(float)((ulonglong)dVar11 >> 0x20);
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * fVar12,SUB84(dVar15,0));
    }
    else {
      iVar21 = (int)dVar11;
      dVar15 = dVar15 * dVar16;
    }
    fVar12 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)(ulonglong)(uint)fVar12;
    }
    uVar8 = ((int)(iVar3 + (uint)(iVar3 < 0)) >> 1) * 0x10 + iVar21;
    dVar17 = (double)CONCAT44(DAT_8c086d78,SUB84(dVar11,0));
    if (in_FPSCR_PR == '\0') {
      bVar20 = fVar12 < DAT_8c086d78;
    }
    else {
      bVar20 = dVar15 < dVar17;
    }
    if (!bVar20) {
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c086d78 + DAT_8c086d78,
                                  SUB84(dVar11,0) - (DAT_8c086d78 + DAT_8c086d78));
      }
      else {
        dVar17 = (dVar17 + dVar17) - (dVar17 + dVar17);
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar21 = (int)SUB84(dVar17,0);
    }
    else {
      iVar21 = (int)dVar17;
    }
    uVar9 = ((int)(iVar5 + (uint)(iVar5 < 0)) >> 1) * 0x10 + iVar21;
    if ((uint)(iVar3 * 0x10) < uVar8) {
      do {
        uVar8 = uVar8 + iVar3 * -0x10;
      } while ((uint)(iVar3 * 0x10) < uVar8);
    }
    if ((uint)(iVar5 << 4) < uVar9) {
      do {
        uVar9 = uVar9 + iVar3 * -0x10;
      } while ((uint)(iVar5 << 4) < uVar9);
    }
    (*(code *)PTR_FUN_8c086eb4)();
    (*(code *)puVar2)();
    (*(code *)puVar1)();
    (*(code *)puVar2)();
    if ((uVar8 & 7) != 0) {
      if (((uVar9 & 7) == 0) || (uVar9 <= uVar8)) goto LAB_8c086dd8;
      uVar8 = 8;
    }
    if ((uVar8 & 0xf) != 0) {
      *pbVar6 = *pbVar6 & (byte)DAT_8c086f58 | 0x10;
      (*(code *)puVar2)();
      return 1;
    }
LAB_8c086dd8:
    *pbVar6 = *pbVar6 & (byte)DAT_8c086eb0;
    (*(code *)puVar2)();
                    /* WARNING: Read-only address (ram,0x8c086ec0) is written */
    return 1;
                    /* WARNING: Read-only address (ram,0x8c086ec0) is written */
  }
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar7);
  }
  else {
    in_xd6 = *(undefined8 *)pfVar7;
  }
  dVar11 = (double)(ulonglong)extraout_fr1;
  fVar12 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar20 = 0.0 < fVar12;
  }
  else {
    bVar20 = dVar11 < param_2;
  }
  pfVar4 = (float *)(param_5 + 0x6c);
  uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
  if (bVar20) {
    dVar15 = (double)CONCAT44(uVar14,0x3f800000);
    if (in_FPSCR_PR == '\0') {
      uVar14 = 0x40000000;
    }
    else {
      uVar14 = SUB84(dVar15 + dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c086b28,uVar14);
    }
    else {
      dVar15 = (double)CONCAT44(_DAT_8c086b2c,DAT_8c086b28);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar12);
    }
    else {
      param_2 = (double)*(int *)(param_4 + 0x20);
    }
    dVar17 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
    }
    fVar12 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12;
      param_3 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
      bVar20 = SUB84(param_2,0) < fVar19;
    }
    else {
      param_3 = dVar17 / dVar15 + dVar15;
      bVar20 = param_2 < param_3;
    }
    while (!bVar20) {
                    /* WARNING: Read-only address (ram,0x8c086ec0) is written */
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
      }
      else {
        fVar19 = SUB84(param_2 - param_2,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar7 = fVar19;
      }
      else {
        *(undefined8 *)pfVar7 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar19);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar17 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = (float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12;
        param_3 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
        bVar20 = SUB84(param_2,0) < fVar19;
      }
      else {
        param_3 = dVar17 / dVar15 + dVar15;
        bVar20 = param_2 < param_3;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar20 = fVar12 < 0.0;
    }
    else {
      bVar20 = param_2 < dVar11;
    }
    if (bVar20) {
      dVar15 = (double)CONCAT44(uVar14,0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar14 = 0x40000000;
      }
      else {
        uVar14 = SUB84(dVar15 + dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(DAT_8c086ebc,uVar14);
      }
      else {
        dVar15 = (double)CONCAT44(uRam8c086ec0,DAT_8c086ebc);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar12);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar17 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
      }
      fVar12 = (float)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar19 = -((float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12);
        param_3 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
        bVar20 = fVar19 < SUB84(param_2,0);
      }
      else {
        param_3 = -(dVar17 / dVar15 + dVar15);
        bVar20 = param_3 < param_2;
      }
      while (!bVar20) {
        if (in_FPSCR_PR == '\0') {
          fVar19 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar19 = SUB84(param_2 + param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar7 = fVar19;
        }
        else {
          *(undefined8 *)pfVar7 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar19);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar17 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar19 = -((float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12);
          param_3 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
          bVar20 = fVar19 < SUB84(param_2,0);
        }
        else {
          param_3 = -(dVar17 / dVar15 + dVar15);
          bVar20 = param_3 < param_2;
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar4);
  }
  else {
    in_xd6 = *(undefined8 *)pfVar4;
  }
  fVar12 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar20 = 0.0 < fVar12;
  }
  else {
    bVar20 = dVar11 < param_2;
  }
  uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
  if (bVar20) {
    dVar15 = (double)CONCAT44(uVar14,0x3f800000);
    if (in_FPSCR_PR == '\0') {
      uVar14 = 0x40000000;
    }
    else {
      uVar14 = SUB84(dVar15 + dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(DAT_8c086b28,uVar14);
    }
    else {
      dVar15 = (double)CONCAT44(_DAT_8c086b2c,DAT_8c086b28);
    }
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar12);
    }
    else {
      dVar11 = (double)*(int *)(param_4 + 0x24);
    }
    dVar17 = dVar11;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(param_3,0));
    }
    fVar12 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12;
      param_3 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
      bVar20 = SUB84(dVar11,0) < fVar19;
    }
    else {
      param_3 = dVar17 / dVar15 + dVar15;
      bVar20 = dVar11 < param_3;
    }
    while (!bVar20) {
                    /* WARNING: Read-only address (ram,0x8c086ec0) is written */
      if (in_FPSCR_PR == '\0') {
        fVar19 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar19 = SUB84(dVar11 - dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar4 = fVar19;
      }
      else {
        *(undefined8 *)pfVar4 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar19);
      }
      else {
        dVar11 = (double)*(int *)(param_4 + 0x24);
      }
      dVar17 = dVar11;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(param_3,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = (float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12;
        param_3 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
        bVar20 = SUB84(dVar11,0) < fVar19;
      }
      else {
        param_3 = dVar17 / dVar15 + dVar15;
        bVar20 = dVar11 < param_3;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar20 = fVar12 < 0.0;
    }
    else {
      bVar20 = param_2 < dVar11;
    }
    if (bVar20) {
      dVar15 = (double)CONCAT44(uVar14,0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar14 = 0x40000000;
      }
      else {
        uVar14 = SUB84(dVar15 + dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(DAT_8c086ebc,uVar14);
      }
      else {
        dVar15 = (double)CONCAT44(uRam8c086ec0,DAT_8c086ebc);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar12);
      }
      else {
        dVar11 = (double)*(int *)(param_4 + 0x24);
      }
      dVar17 = dVar11;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(param_3,0));
      }
      fVar12 = (float)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar19 = -((float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12);
        param_3 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
        bVar20 = fVar19 < SUB84(dVar11,0);
      }
      else {
        param_3 = -(dVar17 / dVar15 + dVar15);
        bVar20 = param_3 < dVar11;
      }
      while (!bVar20) {
        if (in_FPSCR_PR == '\0') {
          fVar19 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          fVar19 = SUB84(dVar11 + dVar11,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar4 = fVar19;
        }
        else {
          *(undefined8 *)pfVar4 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar11 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar19);
        }
        else {
          dVar11 = (double)*(int *)(param_4 + 0x24);
        }
        dVar17 = dVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(param_3,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar19 = -((float)((ulonglong)dVar17 >> 0x20) / SUB84(dVar15,0) + fVar12);
          param_3 = (double)CONCAT44(fVar19,SUB84(dVar17,0));
          bVar20 = fVar19 < SUB84(dVar11,0);
        }
        else {
          param_3 = -(dVar17 / dVar15 + dVar15);
          bVar20 = param_3 < dVar11;
        }
      }
    }
  }
  puVar2 = PTR_FUN_8c086bec;
  puVar1 = PTR_FUN_8c086be8;
  iVar3 = *(int *)(param_4 + 0x20);
  uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
  dVar15 = (double)CONCAT44(uVar14,0x3f800000);
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44(uVar14,0x40000000);
  }
  else {
    dVar15 = dVar15 + dVar15;
  }
  iVar5 = *(int *)(param_4 + 0x24);
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)(param_5 + 100),0xbf800000);
  }
  else {
    dVar11 = *(double *)(param_5 + 100);
  }
  if (in_FPSCR_PR == '\0') {
    fVar12 = (float)iVar3 / SUB84(dVar15,0);
  }
  else {
    fVar12 = SUB84((double)CONCAT44((int)((ulonglong)param_3 >> 0x20),(float)iVar3) / dVar15,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x6c),SUB84(dVar15,0));
    dVar17 = (double)CONCAT44(fVar12,fVar12);
  }
  else {
    dVar15 = *(double *)(param_5 + 0x6c);
    dVar17 = in_xd8;
  }
  fVar12 = SUB84(dVar11,0);
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44(-((float)((ulonglong)dVar17 >> 0x20) + fVar12),SUB84(dVar17,0));
  }
  else {
    dVar17 = -(dVar17 + dVar11);
  }
  uVar14 = (undefined4)((ulonglong)dVar17 >> 0x20);
  uStackY_2c = SUB84(in_xd8,0);
  uStackY_24 = uStackY_2c;
  local_30 = SUB84(dVar17,0);
  if (in_FPSCR_SZ == '\0') {
    local_30 = uVar14;
    uStackY_2c = SUB84(dVar17,0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)iVar5 / SUB84(dVar15,0);
  }
  else {
    fVar19 = SUB84((double)CONCAT44(uVar14,(float)iVar5) / dVar15,0);
  }
  dVar17 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(fVar19,fVar19);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44(-((float)((ulonglong)dVar17 >> 0x20) + fVar12),SUB84(dVar17,0));
  }
  else {
    dVar17 = -(dVar17 + dVar11);
  }
  uVar14 = SUB84(dVar17,0);
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(local_30,uVar14);
    local_28 = (int)((ulonglong)dVar17 >> 0x20);
    uStackY_24 = uVar14;
  }
  else {
    local_20 = (undefined4)((ulonglong)in_xd8 >> 0x20);
    dVar16 = (double)CONCAT44(uStackY_2c,local_30);
    local_28 = uVar14;
  }
  if (in_FPSCR_PR == '\0') {
    bVar20 = (float)((ulonglong)dVar11 >> 0x20) < (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    bVar20 = dVar11 < dVar16;
  }
  pbVar6 = (byte *)(param_5 + 2);
  if (bVar20) {
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(local_30,fVar12);
    }
    else {
      dVar11 = (double)CONCAT44(uStackY_2c,local_30);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(uStackY_2c,SUB84(dVar16,0));
  }
  else {
    dVar17 = (double)CONCAT44(local_28,uStackY_2c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar20 = (float)((ulonglong)dVar17 >> 0x20) < (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    bVar20 = dVar17 < dVar11;
  }
  if (bVar20) {
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(uStackY_2c,SUB84(dVar11,0));
    }
    else {
      dVar11 = (double)CONCAT44(local_28,uStackY_2c);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(local_28,SUB84(dVar17,0));
  }
  else {
    dVar17 = (double)CONCAT44(uStackY_24,local_28);
  }
  fVar12 = (float)((ulonglong)dVar15 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar20 = fVar12 < (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    bVar20 = dVar15 < dVar17;
  }
  uVar14 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if (bVar20) {
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(uVar14,local_28);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(uVar14,fVar12);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(uStackY_24,SUB84(dVar17,0));
  }
  else {
    dVar15 = (double)CONCAT44(local_20,uStackY_24);
  }
  if (in_FPSCR_PR == '\0') {
    bVar20 = (float)((ulonglong)dVar15 >> 0x20) < SUB84(dVar11,0);
  }
  else {
    bVar20 = dVar15 < dVar11;
  }
  if ((bVar20) && (in_FPSCR_SZ == '\0')) {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),uStackY_24);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c086b2c,SUB84(dVar11,0));
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),SUB84(dVar15,0));
  }
  else {
    dVar17 = (double)CONCAT44(DAT_8c086b30,_DAT_8c086b2c);
  }
  fVar12 = (float)((ulonglong)dVar17 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)((ulonglong)dVar11 >> 0x20) * fVar12;
  }
  else {
    fVar19 = (float)((ulonglong)(dVar11 * dVar17) >> 0x20);
  }
  dVar15 = (double)CONCAT44(fVar19,DAT_8c086b30);
  if (in_FPSCR_PR != '\0' || DAT_8c086b30 <= fVar19) {
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44(fVar19 - (DAT_8c086b30 + DAT_8c086b30),DAT_8c086b30 + DAT_8c086b30);
    }
    else {
      dVar15 = (dVar15 + dVar15) - (dVar15 + dVar15);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar21 = (int)(float)((ulonglong)dVar15 >> 0x20);
    dVar17 = (double)CONCAT44(fVar12,SUB84(dVar17,0) * fVar12);
  }
  else {
    iVar21 = (int)dVar15;
    dVar17 = dVar17 * dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)((ulonglong)dVar17 & 0xffffffff);
  }
  dVar11 = (double)CONCAT44(DAT_8c086b30,SUB84(dVar15,0));
  uVar8 = ((int)(iVar3 + (uint)(iVar3 < 0)) >> 1) * 0x10 + iVar21;
  if (in_FPSCR_PR == '\0') {
    bVar20 = SUB84(dVar17,0) < DAT_8c086b30;
  }
  else {
    bVar20 = dVar17 < dVar11;
  }
  if (!bVar20) {
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c086b30 + DAT_8c086b30,
                                SUB84(dVar15,0) - (DAT_8c086b30 + DAT_8c086b30));
    }
    else {
      dVar11 = (dVar11 + dVar11) - (dVar11 + dVar11);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar21 = (int)SUB84(dVar11,0);
  }
  else {
    iVar21 = (int)dVar11;
  }
  uVar9 = ((int)(iVar5 + (uint)(iVar5 < 0)) >> 1) * 0x10 + iVar21;
  if ((uint)(iVar3 * 0x10) < uVar8) {
    do {
      uVar8 = uVar8 + iVar3 * -0x10;
    } while ((uint)(iVar3 * 0x10) < uVar8);
  }
  if ((uint)(iVar5 << 4) < uVar9) {
    do {
      uVar9 = uVar9 + iVar3 * -0x10;
    } while ((uint)(iVar5 << 4) < uVar9);
  }
  (*(code *)PTR_FUN_8c086be8)();
  (*(code *)puVar2)();
  (*(code *)puVar1)();
  (*(code *)puVar2)();
  if ((uVar8 & 7) == 0) {
LAB_8c086b88:
    uVar10 = 0;
    if ((uVar8 & 0xf) != 0) {
      *pbVar6 = *pbVar6 & (byte)DAT_8c086f58 | 0x10;
      (*(code *)puVar2)(uVar9 & 0xf);
      goto LAB_8c086ba6;
    }
  }
  else {
    if (((uVar9 & 7) != 0) && (uVar8 < uVar9)) {
      uVar8 = 8;
      goto LAB_8c086b88;
    }
    uVar10 = uVar8 & 0xf;
  }
  *pbVar6 = *pbVar6 & (byte)DAT_8c086be2;
  (*(code *)puVar2)(uVar10);
LAB_8c086ba6:
  uVar14 = (*(code *)PTR_FUN_8c086bf0)();
  uVar13 = (*(code *)PTR_FUN_8c086bf0)();
  iVar3 = (*(code *)PTR_FUN_8c086bf4)(param_4,uVar14,uVar13);
  if (iVar3 == 0) {
    (*DAT_8c086f60)(param_4,param_5);
    return 1;
  }
  return 0;
}

