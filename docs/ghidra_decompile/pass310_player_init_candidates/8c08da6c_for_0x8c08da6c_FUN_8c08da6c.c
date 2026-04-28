// query addr: 0x8c08da6c
// containing entry: 8c08da6c
// name: FUN_8c08da6c
// signature: undefined FUN_8c08da6c(void)
// body addrs: 1962


/* WARNING: Removing unreachable block (ram,0x8c08dc86) */
/* WARNING: Removing unreachable block (ram,0x8c08dcb6) */

void FUN_8c08da6c(double param_1,double param_2,undefined4 param_3,ulonglong param_4,int param_5,
                 int param_6,int param_7,uint param_8,int param_9)

{
  byte bVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  double extraout_dr0;
  double extraout_dr0_00;
  double dVar17;
  double extraout_dr0_01;
  undefined4 in_fr3;
  ulonglong uVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  float fVar28;
  double dVar26;
  double dVar27;
  float fVar29;
  undefined8 in_xd6;
  undefined8 in_xd8;
  bool bVar30;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined2 local_6c [2];
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float local_4c;
  undefined4 uStack_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined8 uStack_34;
  code *pcStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  dVar17 = param_1;
  if (in_FPSCR_SZ == '\0') {
    uStack_34 = (double)CONCAT44(uStack_34._4_4_,(int)((ulonglong)param_1 >> 0x20));
    dVar17 = uStack_34;
  }
  uStack_34 = dVar17;
  uVar14 = 0;
  local_44 = param_5;
  local_40 = param_6;
  local_3c = param_7;
  local_38 = param_8;
  (*(code *)PTR___bfswu_8c08dbf0)(param_6 + 0x10);
  dVar17 = uStack_34;
  uStack_34 = (double)((ulonglong)uStack_34 & 0xffffffff);
  uVar18 = (ulonglong)uStack_34;
  if (param_7 == 1) {
    uVar15 = -local_38;
  }
  else {
    uVar15 = local_38;
    if (param_7 != 2) {
      uStack_34._0_4_ = SUB84(dVar17,0);
      uVar15 = uVar14;
      if (param_7 == 4) {
        uStack_34 = (double)CONCAT44(-local_38,(undefined4)uStack_34);
        uVar18 = (ulonglong)uStack_34;
      }
      else if (param_7 == 8) {
        uStack_34 = (double)CONCAT44(local_38,(undefined4)uStack_34);
        uVar18 = (ulonglong)uStack_34;
      }
    }
  }
  uStack_34 = (double)uVar18;
  (*(code *)PTR___bfswu_8c08dbf0)(local_38 & 0xffff);
  uVar14 = (uint)(param_4 >> 0x20);
  local_6c[0] = *(undefined2 *)(param_6 + 2);
  if (param_9 != 0) {
    pcStack_2c = (code *)PTR_FUN_8c08dbf4;
    iVar5 = (*(code *)PTR_FUN_8c08dbf4)();
    uVar14 = (uint)(param_4 >> 0x20);
    if (iVar5 == 5) {
      pfVar11 = (float *)(param_6 + 100);
      if (in_FPSCR_SZ == '\0') {
        param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar11);
      }
      else {
        in_xd6 = *(undefined8 *)pfVar11;
      }
      dVar17 = (double)(param_4 & 0xffffffff00000000);
      fVar20 = SUB84(param_2,0);
      if (in_FPSCR_PR == '\0') {
        bVar30 = 0.0 < fVar20;
      }
      else {
        bVar30 = dVar17 < param_2;
      }
      pfVar10 = (float *)(param_6 + 0x6c);
      uVar8 = SUB84(param_1,0);
      dVar24 = extraout_dr0;
      if (bVar30) {
        if (in_FPSCR_PR == '\0') {
          param_1 = (double)CONCAT44(0x40000000,uVar8);
        }
        else {
          param_1 = (double)CONCAT44(0x3f800000,uVar8) + (double)CONCAT44(0x3f800000,uVar8);
        }
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),DAT_8c08dbf8);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x20),fVar20);
        }
        else {
          param_2 = (double)*(int *)(param_5 + 0x20);
        }
        dVar25 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),param_3);
        }
        fVar20 = (float)((ulonglong)param_1 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar23 = (float)((ulonglong)dVar25 >> 0x20) / fVar20 + SUB84(param_1,0);
          dVar25 = (double)CONCAT44(fVar23,SUB84(dVar25,0));
          bVar30 = SUB84(param_2,0) < fVar23;
        }
        else {
          dVar25 = dVar25 / param_1 + param_1;
          bVar30 = param_2 < dVar25;
        }
        param_3 = SUB84(dVar25,0);
        while (!bVar30) {
                    /* WARNING: Read-only address (ram,0x8c08e084) is written */
                    /* WARNING: Read-only address (ram,0x8c08e198) is written */
          if (in_FPSCR_PR == '\0') {
            fVar23 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
          }
          else {
            fVar23 = SUB84(param_2 - param_2,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar11 = fVar23;
          }
          else {
            *(undefined8 *)pfVar11 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x20),fVar23);
          }
          else {
            param_2 = (double)*(int *)(param_5 + 0x20);
          }
          dVar27 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar25,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar23 = (float)((ulonglong)dVar27 >> 0x20) / fVar20 + SUB84(param_1,0);
            dVar25 = (double)CONCAT44(fVar23,SUB84(dVar27,0));
            bVar30 = SUB84(param_2,0) < fVar23;
          }
          else {
            dVar25 = dVar27 / param_1 + param_1;
            bVar30 = param_2 < dVar25;
          }
          param_3 = SUB84(dVar25,0);
        }
      }
      else {
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar20 < 0.0;
        }
        else {
          bVar30 = param_2 < dVar17;
        }
        if (bVar30) {
          if (in_FPSCR_PR == '\0') {
            param_1 = (double)CONCAT44(0x40000000,uVar8);
          }
          else {
            param_1 = (double)CONCAT44(0x3f800000,uVar8) + (double)CONCAT44(0x3f800000,uVar8);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(DAT_8c08e080,SUB84(extraout_dr0,0));
          }
          else {
            dVar24 = (double)CONCAT44(uRam8c08e084,DAT_8c08e080);
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x20),fVar20);
          }
          else {
            param_2 = (double)*(int *)(param_5 + 0x20);
          }
          dVar25 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar25 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),param_3);
          }
          fVar23 = (float)((ulonglong)param_1 >> 0x20);
          fVar20 = (float)((ulonglong)dVar24 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            fVar22 = -((float)((ulonglong)dVar25 >> 0x20) / fVar23 + fVar20);
            dVar25 = (double)CONCAT44(fVar22,SUB84(dVar25,0));
            bVar30 = fVar22 < SUB84(param_2,0);
          }
          else {
            dVar25 = -(dVar25 / param_1 + dVar24);
            bVar30 = dVar25 < param_2;
          }
          param_3 = SUB84(dVar25,0);
          while (!bVar30) {
            if (in_FPSCR_PR == '\0') {
              fVar22 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
            }
            else {
              fVar22 = SUB84(param_2 + param_2,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *pfVar11 = fVar22;
            }
            else {
              *(undefined8 *)pfVar11 = in_xd6;
            }
            if (in_FPSCR_PR == '\0') {
              param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x20),fVar22);
            }
            else {
              param_2 = (double)*(int *)(param_5 + 0x20);
            }
            dVar27 = param_2;
            if (in_FPSCR_SZ == '\0') {
              dVar27 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar25,0));
            }
            if (in_FPSCR_PR == '\0') {
              fVar22 = -((float)((ulonglong)dVar27 >> 0x20) / fVar23 + fVar20);
              dVar25 = (double)CONCAT44(fVar22,SUB84(dVar27,0));
              bVar30 = fVar22 < SUB84(param_2,0);
            }
            else {
              dVar25 = -(dVar27 / param_1 + dVar24);
              bVar30 = dVar25 < param_2;
            }
            param_3 = SUB84(dVar25,0);
          }
        }
      }
      if (in_FPSCR_SZ == '\0') {
        param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar10);
      }
      else {
        in_xd6 = *(undefined8 *)pfVar10;
      }
      fVar20 = SUB84(param_2,0);
      if (in_FPSCR_PR == '\0') {
        bVar30 = 0.0 < fVar20;
      }
      else {
        bVar30 = dVar17 < param_2;
      }
      uVar8 = SUB84(param_1,0);
      if (bVar30) {
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44(0x40000000,uVar8);
        }
        else {
          dVar24 = (double)CONCAT44(0x3f800000,uVar8) + (double)CONCAT44(0x3f800000,uVar8);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),DAT_8c08dbf8);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x24),fVar20);
        }
        else {
          param_2 = (double)*(int *)(param_5 + 0x24);
        }
        dVar25 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),param_3);
        }
        fVar20 = (float)((ulonglong)dVar24 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar23 = (float)((ulonglong)dVar25 >> 0x20) / fVar20 + SUB84(dVar24,0);
          dVar25 = (double)CONCAT44(fVar23,SUB84(dVar25,0));
          bVar30 = SUB84(param_2,0) < fVar23;
        }
        else {
          dVar25 = dVar25 / dVar24 + dVar24;
          bVar30 = param_2 < dVar25;
        }
        param_3 = SUB84(dVar25,0);
        while (!bVar30) {
                    /* WARNING: Read-only address (ram,0x8c08e084) is written */
                    /* WARNING: Read-only address (ram,0x8c08e198) is written */
          if (in_FPSCR_PR == '\0') {
            fVar23 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
          }
          else {
            fVar23 = SUB84(param_2 - param_2,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar10 = fVar23;
          }
          else {
            *(undefined8 *)pfVar10 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x24),fVar23);
          }
          else {
            param_2 = (double)*(int *)(param_5 + 0x24);
          }
          dVar27 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar25,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar23 = (float)((ulonglong)dVar27 >> 0x20) / fVar20 + SUB84(dVar24,0);
            dVar25 = (double)CONCAT44(fVar23,SUB84(dVar27,0));
            bVar30 = SUB84(param_2,0) < fVar23;
          }
          else {
            dVar25 = dVar27 / dVar24 + dVar24;
            bVar30 = param_2 < dVar25;
          }
          param_3 = SUB84(dVar25,0);
        }
      }
      else {
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar20 < 0.0;
        }
        else {
          bVar30 = param_2 < dVar17;
        }
        if (bVar30) {
          if (in_FPSCR_PR == '\0') {
            dVar25 = (double)CONCAT44(0x40000000,uVar8);
          }
          else {
            dVar25 = (double)CONCAT44(0x3f800000,uVar8) + (double)CONCAT44(0x3f800000,uVar8);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar24 = (double)CONCAT44(DAT_8c08e080,SUB84(dVar24,0));
          }
          else {
            dVar24 = (double)CONCAT44(uRam8c08e084,DAT_8c08e080);
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x24),fVar20);
          }
          else {
            param_2 = (double)*(int *)(param_5 + 0x24);
          }
          dVar27 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar27 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),param_3);
          }
          fVar23 = (float)((ulonglong)dVar25 >> 0x20);
          fVar20 = (float)((ulonglong)dVar24 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            fVar22 = -((float)((ulonglong)dVar27 >> 0x20) / fVar23 + fVar20);
            dVar27 = (double)CONCAT44(fVar22,SUB84(dVar27,0));
            bVar30 = fVar22 < SUB84(param_2,0);
          }
          else {
            dVar27 = -(dVar27 / dVar25 + dVar24);
            bVar30 = dVar27 < param_2;
          }
          param_3 = SUB84(dVar27,0);
          while (!bVar30) {
            if (in_FPSCR_PR == '\0') {
              fVar22 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
            }
            else {
              fVar22 = SUB84(param_2 + param_2,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *pfVar10 = fVar22;
            }
            else {
              *(undefined8 *)pfVar10 = in_xd6;
            }
            if (in_FPSCR_PR == '\0') {
              param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x24),fVar22);
            }
            else {
              param_2 = (double)*(int *)(param_5 + 0x24);
            }
            dVar19 = param_2;
            if (in_FPSCR_SZ == '\0') {
              dVar19 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar27,0));
            }
            if (in_FPSCR_PR == '\0') {
              fVar22 = -((float)((ulonglong)dVar19 >> 0x20) / fVar23 + fVar20);
              dVar27 = (double)CONCAT44(fVar22,SUB84(dVar19,0));
              bVar30 = fVar22 < SUB84(param_2,0);
            }
            else {
              dVar27 = -(dVar19 / dVar25 + dVar24);
              bVar30 = dVar27 < param_2;
            }
            param_3 = SUB84(dVar27,0);
          }
        }
      }
      if (in_FPSCR_SZ == '\0') {
        param_1 = (double)CONCAT44(*(undefined4 *)(param_6 + 100),*(undefined4 *)(param_6 + 0x6c));
      }
      else {
        param_1 = *(double *)(param_6 + 100);
      }
      (*(code *)PTR_FUN_8c08dbfc)(param_5,(undefined2 *)(param_6 + 2));
      uVar14 = (uint)((ulonglong)dVar17 >> 0x20);
      iVar5 = (*pcStack_2c)();
      iStack_28 = (*pcStack_2c)();
      iStack_28 = iVar5 - iStack_28;
      iVar5 = (*pcStack_2c)();
      iVar7 = (*pcStack_2c)();
      iVar12 = (*(code *)PTR__abs_8c08dc00)(iStack_28);
      iVar5 = (*(code *)PTR__abs_8c08dc00)(iVar5 - iVar7);
      if (iVar5 < iVar12) {
        (*pcStack_2c)();
        (*(code *)PTR___bfswu_8c08dd88)();
      }
      else {
        (*pcStack_2c)();
        (*(code *)PTR___bfswu_8c08df08)();
      }
      local_6c[0] = *(undefined2 *)(param_6 + 2);
    }
    else {
      (*(code *)PTR__memcpy_8c08df0c)(local_6c,param_9,2);
    }
  }
  puVar2 = PTR_FUN_8c08dd90;
  (*(code *)PTR_FUN_8c08dd8c)(*(undefined4 *)(param_5 + 8),local_6c,&uStack_68,&uStack_60);
  iVar5 = (*(code *)puVar2)();
  if (iVar5 == 5) {
    pcVar13 = (code *)PTR_FUN_8c08dd98;
    pcVar16 = (code *)PTR_FUN_8c08dd94;
    if (in_FPSCR_SZ == '\0') {
      local_64 = *(undefined4 *)(param_6 + 0x68);
    }
    else {
      uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(param_6 + 0x68) >> 0x20);
      local_64 = (undefined4)*(undefined8 *)(param_6 + 0x68);
    }
  }
  else {
    iVar5 = (*(code *)puVar2)();
    pcVar13 = (code *)PTR_FUN_8c08df10;
    iVar7 = (*(code *)puVar2)();
    (*pcVar13)(param_5,iVar5,iVar7,1);
    iVar12 = *(int *)((*(int *)(param_5 + 0x20) * iVar7 + iVar5) * 4 +
                     *(int *)(DAT_8c08defe + param_5));
    if (iVar12 == 0) {
      bVar30 = false;
    }
    else {
      bVar30 = *(int *)(iVar12 + 8) == 2;
    }
    if (bVar30) {
      local_64 = DAT_8c08df00;
      if (in_FPSCR_SZ != '\0') {
        in_xd8 = CONCAT44(PTR_FUN_8c08df04,DAT_8c08df00);
        local_64 = param_3;
      }
    }
    else if (*(int *)((*(int *)(param_5 + 0x20) * iVar7 + iVar5) * 4 +
                     *(int *)(DAT_8c08e292 + param_5)) == 0) {
      iVar12 = (*(code *)PTR_FUN_8c08e298)(param_5,iVar5,iVar7);
      if ((iVar12 == 0) || ((*(byte *)(iVar12 + 9) & 0x7f) != 0)) {
        bVar1 = *(byte *)(iVar5 + *(int *)(param_5 + 0x20) * iVar7 +
                         *(int *)(DAT_8c08e294 + param_5));
        if ((bVar1 < 0x1c) || (0x4b < bVar1)) {
          if ((bVar1 < 0x10) || (0x1b < bVar1)) {
            if (bVar1 == 0) {
              local_64 = (undefined4)DAT_8c08e29c;
              if (in_FPSCR_SZ != '\0') {
                in_xd8 = CONCAT44(DAT_8c08e29c._4_4_,(undefined4)DAT_8c08e29c);
                local_64 = param_3;
              }
            }
            else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
              local_64 = (undefined4)DAT_8c08e29c;
              if (in_FPSCR_SZ != '\0') {
                in_xd8 = CONCAT44(DAT_8c08e29c._4_4_,(undefined4)DAT_8c08e29c);
                local_64 = param_3;
              }
            }
            else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) || (bVar1 == 0x66)) {
              local_64 = DAT_8c08e29c._4_4_;
              if (in_FPSCR_SZ != '\0') {
                in_xd8 = CONCAT44((undefined4)DAT_8c08e2a4,DAT_8c08e29c._4_4_);
                local_64 = param_3;
              }
            }
            else if (bVar1 == 0x67) {
              local_64 = DAT_8c08e29c._4_4_;
              if (in_FPSCR_SZ != '\0') {
                in_xd8 = CONCAT44((undefined4)DAT_8c08e2a4,DAT_8c08e29c._4_4_);
                local_64 = param_3;
              }
            }
            else {
              local_64 = 0;
            }
          }
          else {
            local_64 = DAT_8c08e29c._4_4_;
            if (in_FPSCR_SZ != '\0') {
              in_xd8 = CONCAT44((undefined4)DAT_8c08e2a4,DAT_8c08e29c._4_4_);
              local_64 = param_3;
            }
          }
        }
        else if ((**(char **)(param_5 + 4) == '\x04') && ((*(char **)(param_5 + 4))[1] == '\x03')) {
          local_64 = 0;
        }
        else if (*(short *)(*(int *)(param_5 + 8) + 0x18) == 0) {
          local_64 = DAT_8c08e29c._4_4_;
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44((undefined4)DAT_8c08e2a4,DAT_8c08e29c._4_4_);
            local_64 = param_3;
          }
        }
        else {
          local_64 = (undefined4)DAT_8c08e2a4;
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44(DAT_8c08e2a4._4_4_,(undefined4)DAT_8c08e2a4);
            local_64 = param_3;
          }
        }
      }
      else {
        local_64 = (undefined4)DAT_8c08e29c;
        if (in_FPSCR_SZ != '\0') {
          in_xd8 = CONCAT44(DAT_8c08e29c._4_4_,(undefined4)DAT_8c08e29c);
          local_64 = param_3;
        }
      }
    }
    else {
      local_64 = 0x3f800000;
    }
    pcVar16 = (code *)PTR_FUN_8c08df14;
    if (in_FPSCR_SZ != '\0') {
      local_64 = (undefined4)in_xd8;
      uStack_60 = (undefined4)((ulonglong)in_xd8 >> 0x20);
    }
    uVar8 = (*(code *)puVar2)();
    uVar9 = (*(code *)puVar2)();
    iVar5 = (*pcVar16)(*(undefined4 *)(param_5 + 8),uVar8,uVar9);
    if (iVar5 != 0x62) {
      uStack_24 = (*(code *)puVar2)();
      uVar8 = (*(code *)puVar2)();
      iVar5 = (*pcVar16)(*(undefined4 *)(param_5 + 8),uStack_24,uVar8);
      if (iVar5 != 0x5b) goto LAB_8c08dc4e;
    }
    if (in_FPSCR_SZ == '\0') {
      local_64 = 0x3f800000;
    }
    else {
      uStack_60 = 0x3f800000;
      local_64 = in_fr3;
    }
  }
LAB_8c08dc4e:
  if (param_9 == 0) {
    iVar5 = (*(code *)puVar2)();
    iVar7 = (*(code *)puVar2)();
    dVar17 = extraout_dr0_01;
  }
  else {
    iVar5 = (*(code *)puVar2)();
    iVar7 = (*(code *)puVar2)();
    dVar17 = extraout_dr0_00;
  }
  uVar8 = uStack_48;
  fVar20 = local_4c;
  fVar23 = fStack_58;
  iVar12 = (int)(*(int *)(param_5 + 0x20) + (uint)(*(int *)(param_5 + 0x20) < 0)) >> 1;
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((float)iVar12,(float)(int)(iVar5 + uVar15));
  }
  else {
    dVar24 = (double)iVar12;
  }
  if (in_FPSCR_PR == '\0') {
    fVar22 = SUB84(dVar24,0) - (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    fVar22 = SUB84(dVar24 - dVar24,0);
  }
  iVar5 = (int)(*(int *)(param_5 + 0x24) + (uint)(*(int *)(param_5 + 0x24) < 0)) >> 1;
  local_5c = (float)in_xd8;
  local_54 = local_5c;
  fStack_58 = (float)((ulonglong)in_xd8 >> 0x20);
  fVar28 = fStack_58;
  if (in_FPSCR_SZ == '\0') {
    param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),DAT_8c08dd9c);
    local_5c = fVar22;
    fStack_58 = fVar23;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(DAT_8c08dda0,in_fr3);
  }
  else {
    dVar24 = (double)CONCAT44(DAT_8c08dda4,DAT_8c08dda0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar23 = (float)(iVar7 + uStack_34._4_4_) - (float)iVar5;
  }
  else {
    dVar25 = (double)iVar5;
    fVar23 = SUB84(dVar25 - dVar25,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(local_5c,fVar23);
    local_54 = fVar23;
  }
  else {
    dVar25 = (double)CONCAT44(fStack_58,local_5c);
    fStack_50 = fVar28;
  }
  fVar23 = SUB84(param_1,0);
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + fVar23,SUB84(dVar25,0));
  }
  else {
    dVar25 = dVar25 + param_1;
  }
  fVar28 = SUB84(dVar25,0);
  fVar22 = (float)((ulonglong)dVar25 >> 0x20);
  local_5c = fVar28;
  if (in_FPSCR_SZ == '\0') {
    local_5c = fVar22;
    fVar22 = fStack_58;
  }
  fStack_58 = fVar22;
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * 1.0,fVar28);
  }
  else {
    dVar25 = (double)CONCAT44(0x3f800000,fVar28) * dVar24;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(DAT_8c08dda4,SUB84(dVar24,0));
    dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),local_54);
  }
  else {
    dVar24 = (double)CONCAT44(PTR_FUN_8c08dda8,DAT_8c08dda4);
    in_xd8 = CONCAT44(fStack_50,local_54);
  }
  if (in_FPSCR_PR == '\0') {
    fVar22 = (float)((ulonglong)dVar25 >> 0x20) / (float)((ulonglong)dVar24 >> 0x20);
    dVar25 = (double)CONCAT44(fVar22,SUB84(dVar25,0) + fVar22);
  }
  else {
    dVar25 = dVar25 / dVar24 + dVar25 / dVar24;
  }
  uVar15 = SUB84(dVar25,0);
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),fStack_50);
    local_54 = (float)uVar15;
  }
  else {
    local_54 = (float)in_xd8;
    fStack_50 = (float)((ulonglong)in_xd8 >> 0x20);
    in_xd6 = CONCAT44(local_4c,fStack_50);
  }
  fVar22 = fStack_50;
  fVar28 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar30 = 0.0 < fVar28;
  }
  else {
    bVar30 = (double)((ulonglong)uVar14 << 0x20) < param_2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)(ulonglong)(uint)local_54;
    dVar27 = (double)((ulonglong)(uint)local_5c << 0x20);
  }
  else {
    dVar27 = (double)CONCAT44(fStack_58,local_5c);
  }
  fVar29 = SUB84(dVar27,0);
  fStack_50 = (float)in_xd6;
  fVar3 = fStack_50;
  local_4c = (float)((ulonglong)in_xd6 >> 0x20);
  fVar4 = local_4c;
  fStack_50 = fVar22;
  if (bVar30) {
    if (in_FPSCR_PR == '\0') {
      param_1 = (double)CONCAT44(0x40000000,fVar23);
      param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x20),fVar28);
    }
    else {
      param_1 = (double)CONCAT44(0x3f800000,fVar23) + (double)CONCAT44(0x3f800000,fVar23);
      param_2 = (double)*(int *)(param_5 + 0x20);
    }
    dVar25 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar25 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar15);
    }
    fVar23 = (float)((ulonglong)param_1 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar22 = (float)((ulonglong)dVar25 >> 0x20) / fVar23 + SUB84(param_1,0);
      dVar25 = (double)CONCAT44(fVar22,SUB84(dVar25,0));
      bVar30 = SUB84(param_2,0) < fVar22;
    }
    else {
      dVar25 = dVar25 / param_1 + param_1;
      bVar30 = param_2 < dVar25;
    }
    while (local_4c = fVar20, !bVar30) {
      if (in_FPSCR_PR == '\0') {
        fVar22 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
      }
      else {
        fVar22 = SUB84(param_2 - param_2,0);
      }
      fStack_50 = fVar3;
      local_4c = fVar4;
      if (in_FPSCR_SZ == '\0') {
        fStack_50 = fVar22;
        local_4c = fVar20;
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x20),fVar22);
      }
      else {
        param_2 = (double)*(int *)(param_5 + 0x20);
      }
      dVar19 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar25,0));
      }
      fVar20 = local_4c;
      if (in_FPSCR_PR == '\0') {
        fVar22 = (float)((ulonglong)dVar19 >> 0x20) / fVar23 + SUB84(param_1,0);
        dVar25 = (double)CONCAT44(fVar22,SUB84(dVar19,0));
        bVar30 = SUB84(param_2,0) < fVar22;
      }
      else {
        dVar25 = dVar19 / param_1 + param_1;
        bVar30 = param_2 < dVar25;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar28 < fVar29;
    }
    else {
      bVar30 = param_2 < dVar27;
    }
    local_4c = fVar20;
    if (bVar30) {
      if (in_FPSCR_PR == '\0') {
        param_1 = (double)CONCAT44(0x40000000,fVar23);
      }
      else {
        param_1 = (double)CONCAT44(0x3f800000,fVar23) + (double)CONCAT44(0x3f800000,fVar23);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c08e080,SUB84(dVar17,0));
      }
      else {
        dVar17 = (double)CONCAT44(uRam8c08e084,DAT_8c08e080);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x20),fVar28);
      }
      else {
        param_2 = (double)*(int *)(param_5 + 0x20);
      }
      dVar25 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar25 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar15);
      }
      fVar22 = (float)((ulonglong)param_1 >> 0x20);
      fVar23 = (float)((ulonglong)dVar17 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar28 = -((float)((ulonglong)dVar25 >> 0x20) / fVar22 + fVar23);
        dVar25 = (double)CONCAT44(fVar28,SUB84(dVar25,0));
        bVar30 = fVar28 < SUB84(param_2,0);
      }
      else {
        dVar25 = -(dVar25 / param_1 + dVar17);
        bVar30 = dVar25 < param_2;
      }
      while (local_4c = fVar20, !bVar30) {
        if (in_FPSCR_PR == '\0') {
          fVar28 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar28 = SUB84(param_2 + param_2,0);
        }
        fStack_50 = fVar3;
        local_4c = fVar4;
        if (in_FPSCR_SZ == '\0') {
          fStack_50 = fVar28;
          local_4c = fVar20;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_5 + 0x20),fVar28);
        }
        else {
          param_2 = (double)*(int *)(param_5 + 0x20);
        }
        dVar19 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar25,0));
        }
        fVar20 = local_4c;
        if (in_FPSCR_PR == '\0') {
          fVar28 = -((float)((ulonglong)dVar19 >> 0x20) / fVar22 + fVar23);
          dVar25 = (double)CONCAT44(fVar28,SUB84(dVar19,0));
          bVar30 = fVar28 < SUB84(param_2,0);
        }
        else {
          dVar25 = -(dVar19 / param_1 + dVar17);
          bVar30 = dVar25 < param_2;
        }
      }
    }
  }
  fVar20 = local_4c;
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),local_4c);
  }
  else {
    in_xd6 = CONCAT44(uStack_48,local_4c);
  }
  fVar23 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar30 = fVar29 < fVar23;
  }
  else {
    bVar30 = dVar27 < param_2;
  }
  uVar6 = SUB84(param_1,0);
  local_4c = (float)in_xd6;
  fVar22 = local_4c;
  uStack_48 = (undefined4)((ulonglong)in_xd6 >> 0x20);
  uVar9 = uStack_48;
  local_4c = fVar20;
  if (bVar30) {
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44(0x40000000,uVar6);
      dVar21 = (double)CONCAT44((float)*(int *)(param_5 + 0x24),fVar23);
    }
    else {
      dVar19 = (double)CONCAT44(0x3f800000,uVar6) + (double)CONCAT44(0x3f800000,uVar6);
      dVar21 = (double)*(int *)(param_5 + 0x24);
    }
    dVar26 = dVar21;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar25,0));
    }
    fVar20 = (float)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar23 = (float)((ulonglong)dVar26 >> 0x20) / fVar20 + SUB84(dVar19,0);
      dVar25 = (double)CONCAT44(fVar23,SUB84(dVar26,0));
      bVar30 = SUB84(dVar21,0) < fVar23;
    }
    else {
      dVar25 = dVar26 / dVar19 + dVar19;
      bVar30 = dVar21 < dVar25;
    }
    while (uStack_48 = uVar8, !bVar30) {
      if (in_FPSCR_PR == '\0') {
        fVar23 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
      }
      else {
        fVar23 = SUB84(dVar21 - dVar21,0);
      }
      local_4c = fVar22;
      uStack_48 = uVar9;
      if (in_FPSCR_SZ == '\0') {
        local_4c = fVar23;
        uStack_48 = uVar8;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((float)*(int *)(param_5 + 0x24),fVar23);
      }
      else {
        dVar21 = (double)*(int *)(param_5 + 0x24);
      }
      dVar26 = dVar21;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar25,0));
      }
      uVar8 = uStack_48;
      if (in_FPSCR_PR == '\0') {
        fVar23 = (float)((ulonglong)dVar26 >> 0x20) / fVar20 + SUB84(dVar19,0);
        dVar25 = (double)CONCAT44(fVar23,SUB84(dVar26,0));
        bVar30 = SUB84(dVar21,0) < fVar23;
      }
      else {
        dVar25 = dVar26 / dVar19 + dVar19;
        bVar30 = dVar21 < dVar25;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar23 < fVar29;
    }
    else {
      bVar30 = param_2 < dVar27;
    }
    uStack_48 = uVar8;
    if (bVar30) {
      if (in_FPSCR_PR == '\0') {
        dVar19 = (double)CONCAT44(0x40000000,uVar6);
      }
      else {
        dVar19 = (double)CONCAT44(0x3f800000,uVar6) + (double)CONCAT44(0x3f800000,uVar6);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c08e080,SUB84(dVar17,0));
      }
      else {
        dVar17 = (double)CONCAT44(uRam8c08e084,DAT_8c08e080);
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((float)*(int *)(param_5 + 0x24),fVar23);
      }
      else {
        dVar21 = (double)*(int *)(param_5 + 0x24);
      }
      dVar26 = dVar21;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar25,0));
      }
      fVar23 = (float)((ulonglong)dVar19 >> 0x20);
      fVar20 = (float)((ulonglong)dVar17 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar28 = -((float)((ulonglong)dVar26 >> 0x20) / fVar23 + fVar20);
        dVar25 = (double)CONCAT44(fVar28,SUB84(dVar26,0));
        bVar30 = fVar28 < SUB84(dVar21,0);
      }
      else {
        dVar25 = -(dVar26 / dVar19 + dVar17);
        bVar30 = dVar25 < dVar21;
      }
      while (uStack_48 = uVar8, !bVar30) {
        if (in_FPSCR_PR == '\0') {
          fVar28 = SUB84(dVar21,0) + (float)((ulonglong)dVar21 >> 0x20);
        }
        else {
          fVar28 = SUB84(dVar21 + dVar21,0);
        }
        local_4c = fVar22;
        uStack_48 = uVar9;
        if (in_FPSCR_SZ == '\0') {
          local_4c = fVar28;
          uStack_48 = uVar8;
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((float)*(int *)(param_5 + 0x24),fVar28);
        }
        else {
          dVar21 = (double)*(int *)(param_5 + 0x24);
        }
        dVar26 = dVar21;
        if (in_FPSCR_SZ == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar25,0));
        }
        uVar8 = uStack_48;
        if (in_FPSCR_PR == '\0') {
          fVar28 = -((float)((ulonglong)dVar26 >> 0x20) / fVar23 + fVar20);
          dVar25 = (double)CONCAT44(fVar28,SUB84(dVar26,0));
          bVar30 = fVar28 < SUB84(dVar21,0);
        }
        else {
          dVar25 = -(dVar26 / dVar19 + dVar17);
          bVar30 = dVar25 < dVar21;
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)CONCAT44((int)((ulonglong)dVar27 >> 0x20),SUB84(dVar17,0));
  }
  (*(code *)PTR_FUN_8c08dda8)(dVar27,param_5,&uStack_48);
  uVar14 = SUB84(dVar24,0);
  uVar8 = SUB84(dVar27,0);
  iVar5 = (*(code *)puVar2)();
  iVar7 = (*(code *)puVar2)();
  (*pcVar13)(param_5,iVar5,iVar7,1);
  iVar12 = *(int *)((*(int *)(param_5 + 0x20) * iVar7 + iVar5) * 4 +
                   *(int *)(DAT_8c08dd84 + param_5));
  if (iVar12 == 0) {
    bVar30 = false;
  }
  else {
    bVar30 = *(int *)(iVar12 + 8) == 2;
  }
  if (bVar30) {
    if (in_FPSCR_SZ == '\0') {
      uVar18 = CONCAT44(DAT_8c08df00,SUB84(dVar25,0));
    }
    else {
      uVar18 = CONCAT44(PTR_FUN_8c08df04,DAT_8c08df00);
    }
  }
  else if (*(int *)((*(int *)(param_5 + 0x20) * iVar7 + iVar5) * 4 +
                   *(int *)(DAT_8c08e182 + param_5)) == 0) {
    iVar12 = (*(code *)PTR_FUN_8c08e188)(param_5,iVar5,iVar7);
    uVar9 = SUB84(dVar25,0);
    if ((iVar12 == 0) || ((*(byte *)(iVar12 + 9) & 0x7f) != 0)) {
      bVar1 = *(byte *)(iVar5 + iVar7 * *(int *)(param_5 + 0x20) + *(int *)(DAT_8c08e184 + param_5))
      ;
      if ((bVar1 < 0x1c) || (0x4b < bVar1)) {
        if ((bVar1 < 0x10) || (0x1b < bVar1)) {
          if (bVar1 == 0) {
            if (in_FPSCR_SZ == '\0') {
              uVar18 = CONCAT44((undefined4)DAT_8c08e18c,uVar9);
            }
            else {
              uVar18 = CONCAT44(DAT_8c08e18c._4_4_,(undefined4)DAT_8c08e18c);
            }
          }
          else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
            if (in_FPSCR_SZ == '\0') {
              uVar18 = CONCAT44((undefined4)DAT_8c08e18c,uVar9);
            }
            else {
              uVar18 = CONCAT44(DAT_8c08e18c._4_4_,(undefined4)DAT_8c08e18c);
            }
          }
          else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) || (bVar1 == 0x66)) {
            if (in_FPSCR_SZ == '\0') {
              uVar18 = CONCAT44(DAT_8c08e18c._4_4_,uVar9);
            }
            else {
              uVar18 = CONCAT44(DAT_8c08e194,DAT_8c08e18c._4_4_);
            }
          }
          else if (bVar1 == 0x67) {
            if (in_FPSCR_SZ == '\0') {
              uVar18 = CONCAT44(DAT_8c08e18c._4_4_,uVar9);
            }
            else {
              uVar18 = CONCAT44(DAT_8c08e194,DAT_8c08e18c._4_4_);
            }
          }
          else {
            uVar18 = (ulonglong)dVar25 & 0xffffffff;
          }
        }
        else if (in_FPSCR_SZ == '\0') {
          uVar18 = CONCAT44(DAT_8c08e18c._4_4_,uVar9);
        }
        else {
          uVar18 = CONCAT44(DAT_8c08e194,DAT_8c08e18c._4_4_);
        }
      }
      else if ((**(char **)(param_5 + 4) == '\x04') && ((*(char **)(param_5 + 4))[1] == '\x03')) {
        uVar18 = (ulonglong)dVar25 & 0xffffffff;
      }
      else if (*(short *)(*(int *)(param_5 + 8) + 0x18) == 0) {
        if (in_FPSCR_SZ == '\0') {
          uVar18 = CONCAT44(DAT_8c08e18c._4_4_,uVar9);
        }
        else {
          uVar18 = CONCAT44(DAT_8c08e194,DAT_8c08e18c._4_4_);
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(DAT_8c08e194,uVar9);
      }
      else {
        uVar18 = CONCAT44(uRam8c08e198,DAT_8c08e194);
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      uVar18 = CONCAT44((undefined4)DAT_8c08e18c,uVar9);
    }
    else {
      uVar18 = CONCAT44(DAT_8c08e18c._4_4_,(undefined4)DAT_8c08e18c);
    }
  }
  else {
    uVar18 = CONCAT44(0x3f800000,SUB84(dVar25,0));
  }
  uVar15 = (uint)(uVar18 >> 0x20);
  fStack_58 = (float)uVar15;
  if (in_FPSCR_SZ != '\0') {
    fStack_58 = (float)uVar18;
    local_54 = (float)uVar15;
  }
  uVar9 = (*(code *)puVar2)();
  uVar6 = (*(code *)puVar2)();
  iVar5 = (*pcVar16)(*(undefined4 *)(param_5 + 8),uVar9,uVar6);
  if (iVar5 != 0x62) {
    uVar9 = (*(code *)puVar2)();
    uVar6 = (*(code *)puVar2)();
    iVar5 = (*pcVar16)(*(undefined4 *)(param_5 + 8),uVar9,uVar6);
    if (iVar5 != 0x5b) goto LAB_8c08ddfe;
  }
  if (in_FPSCR_SZ == '\0') {
    fStack_58 = 1.0;
  }
  else {
    local_54 = 1.0;
    fStack_58 = (float)uVar14;
  }
LAB_8c08ddfe:
  iVar5 = local_40;
  puVar2 = PTR_FUN_8c08df04;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(local_40 + 100) = uStack_68;
    *(undefined4 *)(local_40 + 0x68) = local_64;
    *(undefined4 *)(local_40 + 0x6c) = uStack_60;
    uVar18 = CONCAT44((undefined4)uStack_34,uVar8);
  }
  else {
    *(ulonglong *)(local_40 + 100) = CONCAT44(local_64,uStack_68);
    *(ulonglong *)(local_40 + 0x68) = CONCAT44(uStack_60,local_64);
    *(ulonglong *)(local_40 + 0x6c) = CONCAT44(local_5c,uStack_60);
    uVar18 = (ulonglong)uStack_34;
  }
  (*(code *)puVar2)(uVar18,local_40 + 0x20,&local_5c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(iVar5 + 0x60) = 0;
  }
  else {
    *(ulonglong *)(iVar5 + 0x60) = (ulonglong)uVar14;
  }
  *(byte *)(iVar5 + 9) = *(byte *)(iVar5 + 9) & 0xf | 0x60;
  return;
}

