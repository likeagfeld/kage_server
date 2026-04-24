// entry: 8c0874b8
// name: FUN_8c0874b8
// signature: undefined FUN_8c0874b8(void)


/* WARNING: Removing unreachable block (ram,0x8c08756e) */
/* WARNING: Removing unreachable block (ram,0x8c087948) */
/* WARNING: Removing unreachable block (ram,0x8c087924) */
/* WARNING: Removing unreachable block (ram,0x8c08792a) */
/* WARNING: Removing unreachable block (ram,0x8c08756c) */
/* WARNING: Removing unreachable block (ram,0x8c08758e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8c0874b8(undefined4 param_1,double param_2,double param_3,int param_4,int param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  double *pdVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  byte *pbVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  double dVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar24;
  double dVar23;
  double in_dr14;
  double dVar25;
  undefined8 in_xd6;
  double in_xd8;
  bool bVar26;
  undefined4 in_PR;
  int iVar27;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_24 [8];
  undefined8 uStack_1c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_1c);
    puVar16 = &uStack_1c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_1c._0_4_ = SUB84(in_dr14,0);
  }
  else {
    puVar16 = (undefined8 *)local_24;
    uStack_1c = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)(param_5 + 0x6c),param_1);
  }
  else {
    uVar18 = *(ulonglong *)(param_5 + 0x6c);
  }
  iVar14 = param_5 + 0x2c;
  pfVar11 = (float *)(param_5 + 0x1c);
  *(int *)((int)puVar16 + -0xc) = param_5;
  *(int *)((int)puVar16 + -0x10) = param_4;
  iVar4 = (*(code *)PTR_FUN_8c087630)(uVar18,iVar14,pfVar11);
  uVar13 = (uint)(uVar18 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (iVar4 == 0) {
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar11);
    }
    else {
      in_xd6 = *(undefined8 *)pfVar11;
    }
    dVar25 = (double)(uVar18 & 0xffffffff00000000);
    fVar19 = SUB84(param_2,0);
    if (in_FPSCR_PR == '\0') {
      bVar26 = 0.0 < fVar19;
    }
    else {
      bVar26 = dVar25 < param_2;
    }
    pfVar8 = (float *)(param_5 + 0x24);
    if (bVar26) {
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44(uVar9,0x40000000);
      }
      else {
        in_dr14 = (double)CONCAT44(uVar9,0x3f800000) + (double)CONCAT44(uVar9,0x3f800000);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = (double)((ulonglong)DAT_8c087634 << 0x20);
      }
      else {
        dVar25 = (double)CONCAT44(_DAT_8c087638,DAT_8c087634);
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
      fVar19 = (float)((ulonglong)dVar25 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar17 >> 0x20) / SUB84(in_dr14,0) + fVar19;
        param_3 = (double)CONCAT44(fVar20,SUB84(dVar17,0));
        bVar26 = SUB84(param_2,0) < fVar20;
      }
      else {
        param_3 = dVar17 / in_dr14 + dVar25;
        bVar26 = param_2 < param_3;
      }
      while (!bVar26) {
                    /* WARNING: Read-only address (ram,0x8c087b44) is written */
        if (in_FPSCR_PR == '\0') {
          fVar20 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar20 = SUB84(param_2 - param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar11 = fVar20;
        }
        else {
          *(undefined8 *)pfVar11 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar20);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar17 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar20 = (float)((ulonglong)dVar17 >> 0x20) / SUB84(in_dr14,0) + fVar19;
          param_3 = (double)CONCAT44(fVar20,SUB84(dVar17,0));
          bVar26 = SUB84(param_2,0) < fVar20;
        }
        else {
          param_3 = dVar17 / in_dr14 + dVar25;
          bVar26 = param_2 < param_3;
        }
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar26 = fVar19 < 0.0;
      }
      else {
        bVar26 = param_2 < dVar25;
      }
      if (bVar26) {
        if (in_FPSCR_PR == '\0') {
          in_dr14 = (double)CONCAT44(uVar9,0x40000000);
        }
        else {
          in_dr14 = (double)CONCAT44(uVar9,0x3f800000) + (double)CONCAT44(uVar9,0x3f800000);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)((ulonglong)DAT_8c087b40 << 0x20);
        }
        else {
          dVar25 = (double)CONCAT44(uRam8c087b44,DAT_8c087b40);
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
        fVar19 = (float)((ulonglong)dVar25 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar20 = -((float)((ulonglong)dVar17 >> 0x20) / SUB84(in_dr14,0) + fVar19);
          param_3 = (double)CONCAT44(fVar20,SUB84(dVar17,0));
          bVar26 = fVar20 < SUB84(param_2,0);
        }
        else {
          param_3 = -(dVar17 / in_dr14 + dVar25);
          bVar26 = param_3 < param_2;
        }
        while (!bVar26) {
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
          }
          else {
            fVar20 = SUB84(param_2 + param_2,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar11 = fVar20;
          }
          else {
            *(undefined8 *)pfVar11 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar20);
          }
          else {
            param_2 = (double)*(int *)(param_4 + 0x20);
          }
          dVar17 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = -((float)((ulonglong)dVar17 >> 0x20) / SUB84(in_dr14,0) + fVar19);
            param_3 = (double)CONCAT44(fVar20,SUB84(dVar17,0));
            bVar26 = fVar20 < SUB84(param_2,0);
          }
          else {
            param_3 = -(dVar17 / in_dr14 + dVar25);
            bVar26 = param_3 < param_2;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar8);
    }
    else {
      in_xd6 = *(undefined8 *)pfVar8;
    }
    fVar19 = SUB84(dVar25,0);
    fVar20 = SUB84(param_2,0);
    if (in_FPSCR_PR == '\0') {
      bVar26 = fVar19 < fVar20;
    }
    else {
      bVar26 = dVar25 < param_2;
    }
    uVar9 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    if (bVar26) {
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44(uVar9,0x40000000);
      }
      else {
        in_dr14 = (double)CONCAT44(uVar9,0x3f800000) + (double)CONCAT44(uVar9,0x3f800000);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = (double)CONCAT44(DAT_8c087634,fVar19);
      }
      else {
        dVar25 = (double)CONCAT44(_DAT_8c087638,DAT_8c087634);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
      }
      else {
        dVar17 = (double)*(int *)(param_4 + 0x24);
      }
      dVar21 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(param_3,0));
      }
      fVar19 = (float)((ulonglong)dVar25 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar21 >> 0x20) / SUB84(in_dr14,0) + fVar19;
        param_3 = (double)CONCAT44(fVar20,SUB84(dVar21,0));
        bVar26 = SUB84(dVar17,0) < fVar20;
      }
      else {
        param_3 = dVar21 / in_dr14 + dVar25;
        bVar26 = dVar17 < param_3;
      }
      while (!bVar26) {
                    /* WARNING: Read-only address (ram,0x8c087b44) is written */
        if (in_FPSCR_PR == '\0') {
          fVar20 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          fVar20 = SUB84(dVar17 - dVar17,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar8 = fVar20;
        }
        else {
          *(undefined8 *)pfVar8 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
        }
        else {
          dVar17 = (double)*(int *)(param_4 + 0x24);
        }
        dVar21 = dVar17;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(param_3,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar20 = (float)((ulonglong)dVar21 >> 0x20) / SUB84(in_dr14,0) + fVar19;
          param_3 = (double)CONCAT44(fVar20,SUB84(dVar21,0));
          bVar26 = SUB84(dVar17,0) < fVar20;
        }
        else {
          param_3 = dVar21 / in_dr14 + dVar25;
          bVar26 = dVar17 < param_3;
        }
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar26 = fVar20 < fVar19;
      }
      else {
        bVar26 = param_2 < dVar25;
      }
      if (bVar26) {
        if (in_FPSCR_PR == '\0') {
          in_dr14 = (double)CONCAT44(uVar9,0x40000000);
        }
        else {
          in_dr14 = (double)CONCAT44(uVar9,0x3f800000) + (double)CONCAT44(uVar9,0x3f800000);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44(DAT_8c087b40,fVar19);
        }
        else {
          dVar25 = (double)CONCAT44(uRam8c087b44,DAT_8c087b40);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
        }
        else {
          dVar17 = (double)*(int *)(param_4 + 0x24);
        }
        dVar21 = dVar17;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(param_3,0));
        }
        fVar19 = (float)((ulonglong)dVar25 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar20 = -((float)((ulonglong)dVar21 >> 0x20) / SUB84(in_dr14,0) + fVar19);
          param_3 = (double)CONCAT44(fVar20,SUB84(dVar21,0));
          bVar26 = fVar20 < SUB84(dVar17,0);
        }
        else {
          param_3 = -(dVar21 / in_dr14 + dVar25);
          bVar26 = param_3 < dVar17;
        }
        while (!bVar26) {
          if (in_FPSCR_PR == '\0') {
            fVar20 = SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20);
          }
          else {
            fVar20 = SUB84(dVar17 + dVar17,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar8 = fVar20;
          }
          else {
            *(undefined8 *)pfVar8 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
          }
          else {
            dVar17 = (double)*(int *)(param_4 + 0x24);
          }
          dVar21 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(param_3,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = -((float)((ulonglong)dVar21 >> 0x20) / SUB84(in_dr14,0) + fVar19);
            param_3 = (double)CONCAT44(fVar20,SUB84(dVar21,0));
            bVar26 = fVar20 < SUB84(dVar17,0);
          }
          else {
            param_3 = -(dVar21 / in_dr14 + dVar25);
            bVar26 = param_3 < dVar17;
          }
        }
      }
    }
    puVar3 = PTR_FUN_8c0877ac;
    puVar2 = PTR_FUN_8c0877a8;
    iVar4 = *(int *)(param_4 + 0x20);
    uVar9 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    dVar17 = (double)CONCAT44(uVar9,0x3f800000);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44(uVar9,0x40000000);
    }
    else {
      dVar17 = dVar17 + dVar17;
    }
    iVar14 = *(int *)(param_4 + 0x24);
    pdVar6 = (double *)((int)puVar16 + -0x20);
    if (in_FPSCR_PR == '\0') {
      fVar19 = (float)iVar4 / SUB84(dVar17,0);
    }
    else {
      fVar19 = SUB84((double)CONCAT44((int)((ulonglong)param_3 >> 0x20),(float)iVar4) / dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x1c),0xbf800000);
      dVar25 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x24),SUB84(dVar25,0));
      dVar22 = (double)CONCAT44(fVar19,fVar19);
    }
    else {
      dVar21 = *(double *)(param_5 + 0x1c);
      dVar25 = *(double *)(param_5 + 0x24);
      dVar22 = in_xd8;
    }
    fVar19 = SUB84(dVar21,0);
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44(-((float)((ulonglong)dVar22 >> 0x20) + fVar19),SUB84(dVar22,0));
    }
    else {
      dVar22 = -(dVar22 + dVar21);
    }
    uVar9 = (undefined4)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)pdVar6 = uVar9;
      *(int *)((int)puVar16 + -0x1c) = SUB84(dVar22,0);
    }
    else {
      *pdVar6 = dVar22;
      *(double *)((int)puVar16 + -0x1c) = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      fVar20 = (float)iVar14 / SUB84(dVar17,0);
    }
    else {
      fVar20 = SUB84((double)CONCAT44(uVar9,(float)iVar14) / dVar17,0);
    }
    dVar17 = in_xd8;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(fVar20,fVar20);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44(-((float)((ulonglong)dVar17 >> 0x20) + fVar19),SUB84(dVar17,0));
    }
    else {
      dVar17 = -(dVar17 + dVar21);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar16 + -0x18) = (int)((ulonglong)dVar17 >> 0x20);
      *(int *)((int)puVar16 + -0x14) = SUB84(dVar17,0);
      dVar17 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar17,0));
    }
    else {
      *(double *)((int)puVar16 + -0x18) = dVar17;
      *(double *)((int)puVar16 + -0x14) = in_xd8;
      dVar17 = *pdVar6;
    }
    if (in_FPSCR_PR == '\0') {
      bVar26 = (float)((ulonglong)dVar21 >> 0x20) < (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      bVar26 = dVar21 < dVar17;
    }
    pbVar10 = (byte *)(param_5 + 2);
    if (bVar26) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar19);
      }
      else {
        dVar21 = *pdVar6;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x1c),SUB84(dVar17,0));
    }
    else {
      dVar17 = *(double *)((int)puVar16 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar26 = (float)((ulonglong)dVar17 >> 0x20) < (float)((ulonglong)dVar21 >> 0x20);
    }
    else {
      bVar26 = dVar17 < dVar21;
    }
    if (bVar26) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x1c),SUB84(dVar21,0));
      }
      else {
        dVar21 = *(double *)((int)puVar16 + -0x1c);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x18),SUB84(dVar17,0));
    }
    else {
      dVar17 = *(double *)((int)puVar16 + -0x18);
    }
    fVar19 = (float)((ulonglong)dVar25 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar26 = fVar19 < (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      bVar26 = dVar25 < dVar17;
    }
    uVar9 = (undefined4)((ulonglong)dVar21 >> 0x20);
    if (bVar26) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(uVar9,*(undefined4 *)((int)puVar16 + -0x18));
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(uVar9,fVar19);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar25 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x14),SUB84(dVar17,0));
    }
    else {
      dVar25 = *(double *)((int)puVar16 + -0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar26 = (float)((ulonglong)dVar25 >> 0x20) < SUB84(dVar21,0);
    }
    else {
      bVar26 = dVar25 < dVar21;
    }
    if ((bVar26) && (in_FPSCR_SZ == '\0')) {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                *(undefined4 *)((int)puVar16 + -0x14));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(_DAT_8c087638,SUB84(dVar21,0));
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar25,0));
    }
    else {
      dVar17 = (double)CONCAT44(DAT_8c08763c,_DAT_8c087638);
    }
    fVar19 = (float)((ulonglong)dVar17 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar20 = (float)((ulonglong)dVar21 >> 0x20) * fVar19;
    }
    else {
      fVar20 = (float)((ulonglong)(dVar21 * dVar17) >> 0x20);
    }
    dVar25 = (double)CONCAT44(fVar20,DAT_8c08763c);
    if (in_FPSCR_PR != '\0' || DAT_8c08763c <= fVar20) {
      if (in_FPSCR_PR == '\0') {
        dVar25 = (double)CONCAT44(fVar20 - (DAT_8c08763c + DAT_8c08763c),DAT_8c08763c + DAT_8c08763c
                                 );
      }
      else {
        dVar25 = (dVar25 + dVar25) - (dVar25 + dVar25);
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar27 = (int)(float)((ulonglong)dVar25 >> 0x20);
      dVar17 = (double)CONCAT44(fVar19,SUB84(dVar17,0) * fVar19);
    }
    else {
      iVar27 = (int)dVar25;
      dVar17 = dVar17 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar25 = (double)((ulonglong)dVar17 & 0xffffffff);
    }
    dVar21 = (double)CONCAT44(DAT_8c08763c,SUB84(dVar25,0));
    uVar13 = ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 0x10 + iVar27;
    if (in_FPSCR_PR == '\0') {
      bVar26 = SUB84(dVar17,0) < DAT_8c08763c;
    }
    else {
      bVar26 = dVar17 < dVar21;
    }
    if (!bVar26) {
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44(DAT_8c08763c + DAT_8c08763c,
                                  SUB84(dVar25,0) - (DAT_8c08763c + DAT_8c08763c));
      }
      else {
        dVar21 = (dVar21 + dVar21) - (dVar21 + dVar21);
      }
    }
    if (in_FPSCR_PR == '\0') {
      iVar27 = (int)SUB84(dVar21,0);
    }
    else {
      iVar27 = (int)dVar21;
    }
    uVar15 = ((int)(iVar14 + (uint)(iVar14 < 0)) >> 1) * 0x10 + iVar27;
    if ((uint)(iVar4 * 0x10) < uVar13) {
      do {
        uVar13 = uVar13 + iVar4 * -0x10;
      } while ((uint)(iVar4 * 0x10) < uVar13);
    }
    if ((uint)(iVar14 << 4) < uVar15) {
      do {
        uVar15 = uVar15 + iVar4 * -0x10;
      } while ((uint)(iVar14 << 4) < uVar15);
    }
    (*(code *)PTR_FUN_8c0877a8)();
    (*(code *)puVar3)();
    (*(code *)puVar2)();
    (*(code *)puVar3)();
    if ((uVar13 & 7) == 0) {
LAB_8c087696:
      if ((uVar13 & 0xf) == 0) goto LAB_8c0876a2;
      *pbVar10 = *pbVar10 & (byte)DAT_8c087bea | 0x10;
      (*(code *)puVar3)();
    }
    else {
      if (((uVar15 & 7) != 0) && (uVar13 < uVar15)) {
        uVar13 = 8;
        goto LAB_8c087696;
      }
LAB_8c0876a2:
      *pbVar10 = *pbVar10 & (byte)DAT_8c087798;
      (*(code *)puVar3)(0xf);
    }
    puVar2 = PTR_FUN_8c0877b0;
    uVar9 = *(undefined4 *)((int)puVar16 + -0xc);
    iVar12 = *(int *)((int)puVar16 + -0x10);
    iVar4 = (*(code *)PTR_FUN_8c0877b0)();
    iVar14 = (*(code *)puVar2)();
    iVar27 = (*(code *)PTR_FUN_8c0877b4)(iVar12,iVar4,iVar14);
    if (((iVar27 == 0) || ((*(byte *)(iVar27 + 9) & 0x7f) == 3)) ||
       ((*(byte *)(iVar27 + 9) & 0x7f) == 4)) {
      iVar27 = iVar4 + *(int *)(iVar12 + 0x20) * iVar14;
      iVar7 = iVar27 * 4;
      if ((((*(int *)(iVar7 + *(int *)(DAT_8c08779c + iVar12)) == 0) &&
           (*(int *)(iVar7 + *(int *)(DAT_8c08779e + iVar12)) == 0)) &&
          ((cVar1 = *(char *)(iVar27 + *(int *)(DAT_8c0877a0 + iVar12)), cVar1 != 'b' &&
           (*(int *)(iVar7 + *(int *)(DAT_8c0877a2 + iVar12)) == 0)))) &&
         ((((iVar27 = *(int *)((*(int *)(iVar12 + 0x20) * iVar14 + iVar4) * 4 +
                              *(int *)(DAT_8c0877a4 + iVar12)), iVar27 == 0 ||
            (*(int *)(iVar27 + 8) != 2)) &&
           ((*(int *)(DAT_8c0877a6 + iVar12) == 0 ||
            (*(int *)((*(int *)(iVar12 + 0x20) * iVar14 + iVar4) * 4 +
                     *(int *)(DAT_8c0877a6 + iVar12)) == 0)))) &&
          (((((cVar1 != '\0' && (cVar1 != '\x02')) && (cVar1 != 'P')) &&
            ((cVar1 != 'Q' && (cVar1 != 'R')))) &&
           ((((cVar1 != 'S' && ((cVar1 != 'T' && (cVar1 != 'U')))) && (cVar1 != 'V')) &&
            ((((cVar1 != 'W' && (cVar1 != 'X')) && (cVar1 != 'Y')) &&
             (((cVar1 != '[' && (cVar1 != ']')) &&
              ((cVar1 != '_' && ((cVar1 != '`' && (cVar1 != 'm')))))))))))))))) {
        *(undefined4 *)((int)puVar16 + -8) = 0;
        goto LAB_8c087872;
      }
    }
    uVar5 = (*(code *)puVar2)();
    *(undefined4 *)((int)puVar16 + -0x24) = 0;
    (*(code *)PTR_FUN_8c087bf4)(iVar12,uVar9,uVar5,1);
    *(undefined4 *)((int)puVar16 + -8) = 1;
    goto LAB_8c087872;
  }
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44(uVar9,0x40000000);
  }
  else {
    dVar25 = (double)CONCAT44(uVar9,0x3f800000) + (double)CONCAT44(uVar9,0x3f800000);
  }
  dVar17 = (double)(*(code *)PTR_FUN_8c0879f4)(iVar14);
  uVar9 = SUB84(param_3,0);
  if (in_FPSCR_PR == '\0') {
    bVar26 = SUB84(dVar25,0) < (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    bVar26 = dVar25 < dVar17;
  }
  if (bVar26) {
    iVar4 = 0xc;
  }
  else {
    iVar4 = 4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x6c),SUB84(dVar25,0));
  }
  else {
    dVar25 = *(double *)(param_5 + 0x6c);
  }
  dVar17 = (double)(*(code *)PTR_FUN_8c0879f4)(iVar14);
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar11);
  }
  else {
    in_xd6 = *(undefined8 *)pfVar11;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = (double)CONCAT44((float)iVar4,uVar9);
  }
  else {
    dVar21 = (double)iVar4;
  }
  dVar22 = (double)((ulonglong)uVar13 << 0x20);
  fVar19 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar26 = 0.0 < fVar19;
    dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) +
                              (float)((ulonglong)dVar17 >> 0x20) /
                              (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar25,0));
  }
  else {
    bVar26 = dVar22 < param_2;
    dVar25 = dVar25 + dVar17 / dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(param_5 + 0x6c) = (int)((ulonglong)dVar25 >> 0x20);
  }
  else {
    *(double *)(param_5 + 0x6c) = dVar25;
  }
  pfVar8 = (float *)(param_5 + 0x24);
  fVar20 = SUB84(dVar25,0);
  if (bVar26) {
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)((ulonglong)(uint)DAT_8c0879f8 << 0x20);
    }
    else {
      dVar22 = (double)CONCAT44(DAT_8c0879f8._4_4_,(uint)DAT_8c0879f8);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar19);
    }
    else {
      param_2 = (double)*(int *)(param_4 + 0x20);
    }
    dVar17 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar21,0));
    }
    fVar19 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar24 = (float)((ulonglong)dVar17 >> 0x20) / fVar20 + fVar19;
      dVar21 = (double)CONCAT44(fVar24,SUB84(dVar17,0));
      bVar26 = SUB84(param_2,0) < fVar24;
    }
    else {
      dVar21 = dVar17 / dVar25 + dVar22;
      bVar26 = param_2 < dVar21;
    }
    while (!bVar26) {
                    /* WARNING: Read-only address (ram,0x8c087b44) is written */
      if (in_FPSCR_PR == '\0') {
        fVar24 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
      }
      else {
        fVar24 = SUB84(param_2 - param_2,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar11 = fVar24;
      }
      else {
        *(undefined8 *)pfVar11 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar24);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar17 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar21,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar24 = (float)((ulonglong)dVar17 >> 0x20) / fVar20 + fVar19;
        dVar21 = (double)CONCAT44(fVar24,SUB84(dVar17,0));
        bVar26 = SUB84(param_2,0) < fVar24;
      }
      else {
        dVar21 = dVar17 / dVar25 + dVar22;
        bVar26 = param_2 < dVar21;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar26 = fVar19 < 0.0;
    }
    else {
      bVar26 = param_2 < dVar22;
    }
    if (bVar26) {
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)((ulonglong)DAT_8c087b40 << 0x20);
      }
      else {
        dVar22 = (double)CONCAT44(uRam8c087b44,DAT_8c087b40);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar19);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar17 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar21,0));
      }
      fVar19 = (float)((ulonglong)dVar22 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar24 = -((float)((ulonglong)dVar17 >> 0x20) / fVar20 + fVar19);
        dVar21 = (double)CONCAT44(fVar24,SUB84(dVar17,0));
        bVar26 = fVar24 < SUB84(param_2,0);
      }
      else {
        dVar21 = -(dVar17 / dVar25 + dVar22);
        bVar26 = dVar21 < param_2;
      }
      while (!bVar26) {
        if (in_FPSCR_PR == '\0') {
          fVar24 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar24 = SUB84(param_2 + param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar11 = fVar24;
        }
        else {
          *(undefined8 *)pfVar11 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar24);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar17 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar21,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar24 = -((float)((ulonglong)dVar17 >> 0x20) / fVar20 + fVar19);
          dVar21 = (double)CONCAT44(fVar24,SUB84(dVar17,0));
          bVar26 = fVar24 < SUB84(param_2,0);
        }
        else {
          dVar21 = -(dVar17 / dVar25 + dVar22);
          bVar26 = dVar21 < param_2;
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar8);
  }
  else {
    in_xd6 = *(undefined8 *)pfVar8;
  }
  fVar19 = SUB84(dVar22,0);
  fVar24 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar26 = fVar19 < fVar24;
  }
  else {
    bVar26 = dVar22 < param_2;
  }
  if (bVar26) {
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44((uint)DAT_8c0879f8,fVar19);
    }
    else {
      dVar22 = (double)CONCAT44(DAT_8c0879f8._4_4_,(uint)DAT_8c0879f8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar24);
    }
    else {
      dVar17 = (double)*(int *)(param_4 + 0x24);
    }
    dVar23 = dVar17;
    if (in_FPSCR_SZ == '\0') {
      dVar23 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar21,0));
    }
    fVar19 = (float)((ulonglong)dVar22 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar24 = (float)((ulonglong)dVar23 >> 0x20) / fVar20 + fVar19;
      dVar21 = (double)CONCAT44(fVar24,SUB84(dVar23,0));
      bVar26 = SUB84(dVar17,0) < fVar24;
    }
    else {
      dVar21 = dVar23 / dVar25 + dVar22;
      bVar26 = dVar17 < dVar21;
    }
    while (!bVar26) {
                    /* WARNING: Read-only address (ram,0x8c087b44) is written */
      if (in_FPSCR_PR == '\0') {
        fVar24 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar24 = SUB84(dVar17 - dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar8 = fVar24;
      }
      else {
        *(undefined8 *)pfVar8 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar24);
      }
      else {
        dVar17 = (double)*(int *)(param_4 + 0x24);
      }
      dVar23 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar21,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar24 = (float)((ulonglong)dVar23 >> 0x20) / fVar20 + fVar19;
        dVar21 = (double)CONCAT44(fVar24,SUB84(dVar23,0));
        bVar26 = SUB84(dVar17,0) < fVar24;
      }
      else {
        dVar21 = dVar23 / dVar25 + dVar22;
        bVar26 = dVar17 < dVar21;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar26 = fVar24 < fVar19;
    }
    else {
      bVar26 = param_2 < dVar22;
    }
    if (bVar26) {
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44(DAT_8c087bf0,fVar19);
      }
      else {
        dVar22 = (double)CONCAT44(PTR_FUN_8c087bf4,DAT_8c087bf0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar24);
      }
      else {
        dVar17 = (double)*(int *)(param_4 + 0x24);
      }
      dVar23 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar21,0));
      }
      fVar19 = (float)((ulonglong)dVar22 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar24 = -((float)((ulonglong)dVar23 >> 0x20) / fVar20 + fVar19);
        dVar21 = (double)CONCAT44(fVar24,SUB84(dVar23,0));
        bVar26 = fVar24 < SUB84(dVar17,0);
      }
      else {
        dVar21 = -(dVar23 / dVar25 + dVar22);
        bVar26 = dVar21 < dVar17;
      }
      while (!bVar26) {
        if (in_FPSCR_PR == '\0') {
          fVar24 = SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          fVar24 = SUB84(dVar17 + dVar17,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar8 = fVar24;
        }
        else {
          *(undefined8 *)pfVar8 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar24);
        }
        else {
          dVar17 = (double)*(int *)(param_4 + 0x24);
        }
        dVar23 = dVar17;
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar21,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar24 = -((float)((ulonglong)dVar23 >> 0x20) / fVar20 + fVar19);
          dVar21 = (double)CONCAT44(fVar24,SUB84(dVar23,0));
          bVar26 = fVar24 < SUB84(dVar17,0);
        }
        else {
          dVar21 = -(dVar23 / dVar25 + dVar22);
          bVar26 = dVar21 < dVar17;
        }
      }
    }
  }
  puVar3 = PTR_FUN_8c087b3c;
  puVar2 = PTR_FUN_8c087b38;
  iVar14 = *(int *)(param_4 + 0x20);
  iVar4 = *(int *)(param_4 + 0x24);
  pdVar6 = (double *)((int)puVar16 + -0x20);
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)iVar14 / fVar20;
  }
  else {
    fVar19 = SUB84((double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),(float)iVar14) / dVar25,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x1c),0xbf800000);
    dVar17 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x24),SUB84(dVar22,0));
    dVar22 = (double)CONCAT44(fVar19,fVar19);
  }
  else {
    dVar21 = *(double *)(param_5 + 0x1c);
    dVar17 = *(double *)(param_5 + 0x24);
    dVar22 = in_xd8;
  }
  fVar19 = SUB84(dVar21,0);
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)CONCAT44(-((float)((ulonglong)dVar22 >> 0x20) + fVar19),SUB84(dVar22,0));
  }
  else {
    dVar22 = -(dVar22 + dVar21);
  }
  uVar9 = (undefined4)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar6 = uVar9;
    *(int *)((int)puVar16 + -0x1c) = SUB84(dVar22,0);
  }
  else {
    *pdVar6 = dVar22;
    *(double *)((int)puVar16 + -0x1c) = in_xd8;
  }
  if (in_FPSCR_PR == '\0') {
    fVar20 = (float)iVar4 / fVar20;
  }
  else {
    fVar20 = SUB84((double)CONCAT44(uVar9,(float)iVar4) / dVar25,0);
  }
  dVar25 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(fVar20,fVar20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44(-((float)((ulonglong)dVar25 >> 0x20) + fVar19),SUB84(dVar25,0));
  }
  else {
    dVar25 = -(dVar25 + dVar21);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + -0x18) = (int)((ulonglong)dVar25 >> 0x20);
    *(int *)((int)puVar16 + -0x14) = SUB84(dVar25,0);
    dVar25 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar25,0));
  }
  else {
    *(double *)((int)puVar16 + -0x18) = dVar25;
    *(double *)((int)puVar16 + -0x14) = in_xd8;
    dVar25 = *pdVar6;
  }
  if (in_FPSCR_PR == '\0') {
    bVar26 = (float)((ulonglong)dVar21 >> 0x20) < (float)((ulonglong)dVar25 >> 0x20);
  }
  else {
    bVar26 = dVar21 < dVar25;
  }
  pbVar10 = (byte *)(param_5 + 2);
  if (bVar26) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar19);
    }
    else {
      dVar21 = *pdVar6;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x1c),SUB84(dVar25,0));
  }
  else {
    dVar25 = *(double *)((int)puVar16 + -0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar26 = (float)((ulonglong)dVar25 >> 0x20) < (float)((ulonglong)dVar21 >> 0x20);
  }
  else {
    bVar26 = dVar25 < dVar21;
  }
  if (bVar26) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x1c),SUB84(dVar21,0));
    }
    else {
      dVar21 = *(double *)((int)puVar16 + -0x1c);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x18),SUB84(dVar25,0));
  }
  else {
    dVar25 = *(double *)((int)puVar16 + -0x18);
  }
  if (in_FPSCR_PR == '\0') {
    bVar26 = (float)((ulonglong)dVar17 >> 0x20) < (float)((ulonglong)dVar25 >> 0x20);
  }
  else {
    bVar26 = dVar17 < dVar25;
  }
  if (bVar26) {
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x18),SUB84(dVar17,0));
    }
    else {
      dVar17 = *(double *)((int)puVar16 + -0x18);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x14),SUB84(dVar25,0));
  }
  else {
    dVar25 = *(double *)((int)puVar16 + -0x14);
  }
  if (in_FPSCR_PR == '\0') {
    bVar26 = (float)((ulonglong)dVar25 >> 0x20) < (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    bVar26 = dVar25 < dVar17;
  }
  if (bVar26) {
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x14),SUB84(dVar17,0));
    }
    else {
      dVar17 = *(double *)((int)puVar16 + -0x14);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)CONCAT44(DAT_8c0879f8._4_4_,SUB84(dVar21,0));
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar25,0));
  }
  else {
    dVar22 = (double)CONCAT44(DAT_8c087a00,DAT_8c0879f8._4_4_);
  }
  fVar19 = (float)((ulonglong)dVar22 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar20 = (float)((ulonglong)dVar21 >> 0x20) * fVar19;
  }
  else {
    fVar20 = (float)((ulonglong)(dVar21 * dVar22) >> 0x20);
  }
  dVar25 = (double)CONCAT44(fVar20,DAT_8c087a00);
  if (in_FPSCR_PR != '\0' || DAT_8c087a00 <= fVar20) {
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44(fVar20 - (DAT_8c087a00 + DAT_8c087a00),DAT_8c087a00 + DAT_8c087a00);
    }
    else {
      dVar25 = (dVar25 + dVar25) - (dVar25 + dVar25);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar27 = (int)(float)((ulonglong)dVar25 >> 0x20);
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * fVar19,SUB84(dVar17,0));
  }
  else {
    iVar27 = (int)dVar25;
    dVar17 = dVar17 * dVar22;
  }
  fVar19 = (float)((ulonglong)dVar17 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)(ulonglong)(uint)fVar19;
  }
  uVar13 = ((int)(iVar14 + (uint)(iVar14 < 0)) >> 1) * 0x10 + iVar27;
  dVar21 = (double)CONCAT44(DAT_8c087a00,SUB84(dVar25,0));
  if (in_FPSCR_PR == '\0') {
    bVar26 = fVar19 < DAT_8c087a00;
  }
  else {
    bVar26 = dVar17 < dVar21;
  }
  if (!bVar26) {
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44(DAT_8c087a00 + DAT_8c087a00,
                                SUB84(dVar25,0) - (DAT_8c087a00 + DAT_8c087a00));
    }
    else {
      dVar21 = (dVar21 + dVar21) - (dVar21 + dVar21);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar27 = (int)SUB84(dVar21,0);
  }
  else {
    iVar27 = (int)dVar21;
  }
  uVar15 = ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 0x10 + iVar27;
  if ((uint)(iVar14 * 0x10) < uVar13) {
    do {
      uVar13 = uVar13 + iVar14 * -0x10;
    } while ((uint)(iVar14 * 0x10) < uVar13);
  }
  if ((uint)(iVar4 << 4) < uVar15) {
    do {
      uVar15 = uVar15 + iVar14 * -0x10;
    } while ((uint)(iVar4 << 4) < uVar15);
  }
  (*(code *)PTR_FUN_8c087b38)();
  (*(code *)puVar3)();
  (*(code *)puVar2)();
  (*(code *)puVar3)();
  if ((uVar13 & 7) == 0) {
LAB_8c087a50:
    if ((uVar13 & 0xf) == 0) goto LAB_8c087a5c;
    *pbVar10 = *pbVar10 & (byte)DAT_8c087bea | 0x10;
    (*(code *)puVar3)();
  }
  else {
    if (((uVar15 & 7) != 0) && (uVar13 < uVar15)) {
      uVar13 = 8;
      goto LAB_8c087a50;
    }
LAB_8c087a5c:
    *pbVar10 = *pbVar10 & (byte)DAT_8c087b34;
    (*(code *)puVar3)(0xf);
  }
  *(undefined4 *)((int)puVar16 + -8) = 1;
LAB_8c087872:
  return *(undefined4 *)((int)puVar16 + -8);
}

