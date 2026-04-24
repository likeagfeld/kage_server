// entry: 8c08ef24
// name: FUN_8c08ef24
// signature: undefined FUN_8c08ef24(void)


/* WARNING: Removing unreachable block (ram,0x8c08f060) */
/* WARNING: Removing unreachable block (ram,0x8c08f07c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c08ef24(undefined8 param_1,double param_2,ulonglong param_3,float param_4,int param_5,
                 int param_6,undefined2 *param_7)

{
  byte bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 extraout_fr1;
  undefined4 uVar10;
  double in_dr2;
  undefined8 uVar11;
  double dVar12;
  undefined4 uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double in_xd0;
  double in_xd4;
  double in_xd8;
  bool bVar22;
  uint in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  byte local_60;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  uint local_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  int local_34;
  int local_30;
  undefined2 *puStack_2c;
  int iStack_28;
  undefined8 uStack_24;
  
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  *(byte *)(param_5 + 9) = *(byte *)(param_5 + 9) & (byte)DAT_8c08f0ac;
  if (param_7 != (undefined2 *)0x0) {
    *(undefined2 *)(param_5 + 2) = *param_7;
  }
  puVar4 = PTR_FUN_8c08f0bc;
  puVar3 = PTR_FUN_8c08f0b8;
  local_38 = param_4;
  local_34 = param_5;
  local_30 = param_6;
  puStack_2c = param_7;
  iStack_28 = param_5;
  uStack_24._4_4_ = in_PR;
  (*(code *)PTR_FUN_8c08f0b8)
            (*(undefined4 *)((int)param_4 + 8),(undefined2 *)(param_5 + 2),&uStack_6c,&uStack_64);
  iVar5 = (*(code *)puVar4)();
  iVar6 = (*(code *)puVar4)();
  (*(code *)PTR_FUN_8c08f0c0)(param_4,iVar5,iVar6,1);
  iVar7 = *(int *)((*(int *)((int)param_4 + 0x20) * iVar6 + iVar5) * 4 +
                  *(int *)((int)DAT_8c08f0b0 + (int)param_4));
  if ((iVar7 == 0) || (*(int *)(iVar7 + 8) != 2)) {
    if (*(int *)((*(int *)((int)param_4 + 0x20) * iVar6 + iVar5) * 4 +
                *(int *)((int)DAT_8c08f4a4 + (int)param_4)) == 0) {
      iVar7 = (*(code *)PTR_FUN_8c08f4b4)(param_4,iVar5,iVar6);
      uVar13 = (undefined4)param_3;
      if ((iVar7 == 0) || ((*(byte *)(iVar7 + 9) & 0x7f) != 0)) {
        bVar1 = *(byte *)(*(int *)((int)param_4 + 0x20) * iVar6 + iVar5 +
                         *(int *)((int)DAT_8c08f4a6 + (int)param_4));
        if (bVar1 < 0x1c) {
          if (bVar1 < 0x10) {
LAB_8c08f530:
            if (bVar1 == 0) {
              if (in_FPSCR_SZ == '\0') {
                param_3 = CONCAT44((undefined4)DAT_8c08f4ac,uVar13);
              }
              else {
                param_3 = CONCAT44(DAT_8c08f4ac._4_4_,(undefined4)DAT_8c08f4ac);
              }
            }
            else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
              if (in_FPSCR_SZ == '\0') {
                param_3 = CONCAT44((undefined4)DAT_8c08f4ac,uVar13);
              }
              else {
                param_3 = CONCAT44(DAT_8c08f4ac._4_4_,(undefined4)DAT_8c08f4ac);
              }
            }
            else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) || (bVar1 == 0x66)) {
              if (in_FPSCR_SZ == '\0') {
                param_3 = CONCAT44(DAT_8c08f5a8,uVar13);
              }
              else {
                param_3 = CONCAT44(_DAT_8c08f5ac,DAT_8c08f5a8);
              }
            }
            else if (bVar1 == 0x67) {
              if (in_FPSCR_SZ == '\0') {
                param_3 = CONCAT44(DAT_8c08f5a8,uVar13);
              }
              else {
                param_3 = CONCAT44(_DAT_8c08f5ac,DAT_8c08f5a8);
              }
            }
            else {
              param_3 = param_3 & 0xffffffff;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            param_3 = CONCAT44(DAT_8c08f4ac._4_4_,uVar13);
          }
          else {
            param_3 = CONCAT44(PTR_FUN_8c08f4b4,DAT_8c08f4ac._4_4_);
          }
        }
        else {
          if (0x4b < bVar1) goto LAB_8c08f530;
          if ((**(char **)((int)param_4 + 4) == '\x04') &&
             ((*(char **)((int)param_4 + 4))[1] == '\x03')) {
            param_3 = param_3 & 0xffffffff;
          }
          else if (*(short *)(*(int *)((int)param_4 + 8) + 0x18) == 0) {
            if (in_FPSCR_SZ == '\0') {
              param_3 = CONCAT44(DAT_8c08f4ac._4_4_,uVar13);
            }
            else {
              param_3 = CONCAT44(PTR_FUN_8c08f4b4,DAT_8c08f4ac._4_4_);
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            param_3 = CONCAT44(DAT_8c08f4a8,uVar13);
          }
          else {
            param_3 = CONCAT44((undefined4)DAT_8c08f4ac,DAT_8c08f4a8);
          }
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        param_3 = CONCAT44((undefined4)DAT_8c08f4ac,uVar13);
      }
      else {
        param_3 = CONCAT44(DAT_8c08f4ac._4_4_,(undefined4)DAT_8c08f4ac);
      }
    }
    else {
      param_3 = CONCAT44(0x3f800000,(int)param_3);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    param_3 = CONCAT44((undefined4)DAT_8c08f0c4,(int)param_3);
  }
  else {
    param_3 = CONCAT44(DAT_8c08f0c4._4_4_,(undefined4)DAT_8c08f0c4);
  }
  uVar13 = (undefined4)(param_3 >> 0x20);
  local_68 = uVar13;
  if (in_FPSCR_SZ != '\0') {
    local_68 = (undefined4)param_3;
    uStack_64 = uVar13;
  }
  iVar5 = *(int *)((int)DAT_8c08f0b4 + (int)param_4) + DAT_8c08f0b2 * local_30;
  uVar2 = *(undefined2 *)(iVar5 + 2);
  local_60 = (byte)uVar2;
  uStack_5f = (undefined1)((ushort)uVar2 >> 8);
  (*(code *)puVar3)(*(undefined4 *)((int)param_4 + 8),iVar5 + 2,&local_4c,&fStack_44);
  puVar3 = PTR_FUN_8c08f234;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(local_4c,extraout_fr1);
    dVar19 = (double)CONCAT44(local_4c,(int)param_3);
    fStack_48 = local_4c;
  }
  else {
    dVar21 = (double)CONCAT44(fStack_48,local_4c);
    dVar19 = (double)CONCAT44(fStack_48,local_4c);
  }
  local_40 = local_4c;
  dVar12 = (double)((ulonglong)uVar8 << 0x20);
  fVar17 = (float)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar22 = 0.0 < fVar17;
  }
  else {
    bVar22 = dVar12 < dVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(fStack_48,fStack_44);
  }
  else {
    in_xd0 = (double)CONCAT44(local_4c,fStack_44);
    local_38 = local_4c;
  }
  fStack_3c = fStack_44;
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (bVar22) {
    dVar14 = (double)CONCAT44(uVar13,0x3f800000);
    if (in_FPSCR_PR == '\0') {
      uVar13 = 0x40000000;
    }
    else {
      uVar13 = SUB84(dVar14 + dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(DAT_8c08f0c4._4_4_,SUB84(in_dr2,0));
    }
    else {
      in_dr2 = (double)CONCAT44(uRam8c08f0cc,DAT_8c08f0c4._4_4_);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)*(int *)((int)param_4 + 0x20),uVar13);
    }
    else {
      param_2 = (double)*(int *)((int)param_4 + 0x20);
    }
    fVar18 = (float)((ulonglong)param_2 >> 0x20);
    dVar14 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(fVar17,fVar18);
      dVar14 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                SUB84(dVar19,0) / SUB84(param_2,0) +
                                (float)((ulonglong)in_dr2 >> 0x20));
    }
    else {
      dVar19 = dVar19 / param_2 + in_dr2;
    }
    in_xd8 = dVar14;
    if (in_FPSCR_PR != '\0' || SUB84(dVar19,0) <= (float)((ulonglong)dVar19 >> 0x20)) {
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44(-fVar18,SUB84(param_2,0));
      }
      else {
        param_2 = -param_2;
      }
      do {
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) +
                                    (float)((ulonglong)param_2 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 + param_2;
        }
        fVar18 = (float)((ulonglong)dVar19 >> 0x20);
        dVar14 = dVar19;
        local_40 = SUB84(dVar19,0);
        fVar17 = fVar18;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(fVar18,SUB84(dVar21,0));
          local_40 = fVar18;
          fVar17 = fStack_3c;
        }
        fStack_3c = fVar17;
        dVar21 = dVar14;
      } while (in_FPSCR_PR != '\0' || SUB84(dVar19,0) <= fVar18);
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar17 < 0.0;
    }
    else {
      bVar22 = dVar19 < dVar12;
    }
    if (bVar22) {
      dVar12 = (double)CONCAT44(uVar13,0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar13 = 0x40000000;
      }
      else {
        uVar13 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(_DAT_8c08f5ac,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)CONCAT44(uRam8c08f5b0,_DAT_8c08f5ac);
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)((ulonglong)(uint)(float)*(int *)((int)param_4 + 0x20) << 0x20);
      }
      else {
        dVar12 = (double)*(int *)((int)param_4 + 0x20);
      }
      fVar18 = (float)((ulonglong)dVar12 >> 0x20);
      dVar14 = dVar12;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(fVar18,uVar13);
      }
      fVar15 = fStack_44;
      if (in_FPSCR_PR == '\0') {
        fVar16 = -((float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar14,0) +
                  (float)((ulonglong)in_dr2 >> 0x20));
        param_2 = (double)CONCAT44(fVar16,SUB84(dVar14,0));
        bVar22 = fVar16 < fVar17;
      }
      else {
        param_2 = -(dVar14 / dVar14 + in_dr2);
        fVar16 = (float)((ulonglong)param_2 >> 0x20);
        bVar22 = param_2 < dVar19;
      }
      while (fStack_3c = fVar15, !bVar22) {
        dVar14 = dVar19;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar21,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + fVar18,SUB84(dVar14,0));
        }
        else {
          dVar21 = dVar14 + dVar12;
        }
        fStack_3c = (float)((ulonglong)dVar21 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(fStack_3c,SUB84(dVar19,0));
          local_40 = fStack_3c;
          fStack_3c = fVar15;
        }
        else {
          local_40 = SUB84(dVar21,0);
          dVar19 = dVar21;
        }
        fVar15 = fStack_3c;
        if (in_FPSCR_PR == '\0') {
          bVar22 = fVar16 < (float)((ulonglong)dVar19 >> 0x20);
        }
        else {
          bVar22 = param_2 < dVar19;
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(fStack_3c,SUB84(dVar19,0));
  }
  else {
    dVar19 = (double)CONCAT44(local_38,fStack_3c);
  }
  fVar17 = SUB84(dVar12,0);
  fVar18 = (float)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar22 = fVar17 < fVar18;
  }
  else {
    bVar22 = dVar12 < dVar19;
  }
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (bVar22) {
    dVar14 = (double)CONCAT44(uVar13,0x3f800000);
    if (in_FPSCR_PR == '\0') {
      uVar13 = 0x40000000;
    }
    else {
      uVar13 = SUB84(dVar14 + dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(DAT_8c08f0c4._4_4_,SUB84(in_dr2,0));
    }
    else {
      in_dr2 = (double)CONCAT44(uRam8c08f0cc,DAT_8c08f0c4._4_4_);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)*(int *)((int)param_4 + 0x24),uVar13);
    }
    else {
      param_2 = (double)*(int *)((int)param_4 + 0x24);
    }
    fVar17 = (float)((ulonglong)param_2 >> 0x20);
    dVar14 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(fVar18,fVar17);
      dVar14 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                SUB84(dVar19,0) / SUB84(param_2,0) +
                                (float)((ulonglong)in_dr2 >> 0x20));
    }
    else {
      dVar19 = dVar19 / param_2 + in_dr2;
    }
    in_xd8 = dVar14;
    if (in_FPSCR_PR != '\0' || SUB84(dVar19,0) <= (float)((ulonglong)dVar19 >> 0x20)) {
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44(-fVar17,SUB84(param_2,0));
      }
      else {
        param_2 = -param_2;
      }
      do {
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) +
                                    (float)((ulonglong)param_2 >> 0x20),SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 + param_2;
        }
        fVar18 = (float)((ulonglong)dVar19 >> 0x20);
        dVar14 = dVar19;
        fStack_3c = SUB84(dVar19,0);
        fVar17 = fVar18;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),fVar18);
          dVar14 = in_xd0;
          fStack_3c = fVar18;
          fVar17 = local_38;
        }
        local_38 = fVar17;
        in_xd0 = dVar14;
      } while (in_FPSCR_PR != '\0' || SUB84(dVar19,0) <= fVar18);
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar18 < fVar17;
    }
    else {
      bVar22 = dVar19 < dVar12;
    }
    if (bVar22) {
      dVar12 = (double)CONCAT44(uVar13,0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar13 = 0x40000000;
      }
      else {
        uVar13 = SUB84(dVar12 + dVar12,0);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(DAT_8c08f364,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)CONCAT44(PTR_FUN_8c08f368,DAT_8c08f364);
      }
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((float)*(int *)((int)param_4 + 0x24),fVar17);
      }
      else {
        dVar12 = (double)*(int *)((int)param_4 + 0x24);
      }
      fVar17 = (float)((ulonglong)dVar12 >> 0x20);
      dVar14 = dVar12;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(fVar17,uVar13);
      }
      if (in_FPSCR_PR == '\0') {
        fVar15 = -((float)((ulonglong)dVar14 >> 0x20) / SUB84(dVar14,0) +
                  (float)((ulonglong)in_dr2 >> 0x20));
        param_2 = (double)CONCAT44(fVar15,SUB84(dVar14,0));
        bVar22 = fVar15 < fVar18;
      }
      else {
        param_2 = -(dVar14 / dVar14 + in_dr2);
        fVar15 = (float)((ulonglong)param_2 >> 0x20);
        bVar22 = param_2 < dVar19;
      }
      while (!bVar22) {
        dVar14 = dVar19;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),
                                    (int)((ulonglong)dVar19 >> 0x20));
          dVar14 = in_xd0;
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) + fVar17);
        }
        else {
          dVar21 = dVar21 + dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          fStack_3c = SUB84(dVar21,0);
          dVar19 = (double)CONCAT44(fStack_3c,SUB84(dVar19,0));
        }
        else {
          fStack_3c = SUB84(dVar14,0);
          local_38 = (float)((ulonglong)dVar14 >> 0x20);
          dVar19 = dVar14;
        }
        in_xd0 = dVar14;
        if (in_FPSCR_PR == '\0') {
          bVar22 = fVar15 < (float)((ulonglong)dVar19 >> 0x20);
        }
        else {
          bVar22 = param_2 < dVar19;
        }
      }
    }
  }
  iVar5 = *(int *)((int)param_4 + 0x20);
  dVar14 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
  if (in_FPSCR_PR == '\0') {
    uVar13 = 0x40000000;
  }
  else {
    uVar13 = SUB84(dVar14 + dVar14,0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar14 = (double)CONCAT44(0xbf800000,uVar13);
  }
  else {
    dVar14 = -(double)CONCAT44(0x3f800000,uVar13);
  }
  iVar6 = *(int *)((int)param_4 + 0x24);
  if (in_FPSCR_PR == '\0') {
    fVar17 = (float)iVar5 / SUB84(dVar14,0);
  }
  else {
    fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),(float)iVar5) / dVar14,0);
  }
  dVar19 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(fVar17,fVar17);
  }
  fVar17 = (float)((ulonglong)dVar14 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44(-((float)((ulonglong)dVar19 >> 0x20) + fVar17),SUB84(dVar19,0));
  }
  else {
    dVar19 = -(dVar19 + dVar14);
  }
  uVar8 = (uint)((ulonglong)dVar19 >> 0x20);
  uStack_58 = SUB84(in_xd8,0);
  uStack_50 = uStack_58;
  local_5c = SUB84(dVar19,0);
  if (in_FPSCR_SZ == '\0') {
    local_5c = uVar8;
    uStack_58 = SUB84(dVar19,0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (float)iVar6 / SUB84(dVar14,0);
  }
  else {
    fVar18 = SUB84((double)CONCAT44(uVar8,(float)iVar6) / dVar14,0);
  }
  dVar19 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(fVar18,fVar18);
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44(-((float)((ulonglong)dVar19 >> 0x20) + fVar17),SUB84(dVar19,0));
  }
  else {
    dVar19 = -(dVar19 + dVar14);
  }
  uVar8 = SUB84(dVar19,0);
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(local_5c,uVar8);
    local_54 = (uint)((ulonglong)dVar19 >> 0x20);
    uStack_50 = uVar8;
  }
  else {
    local_4c = (float)((ulonglong)in_xd8 >> 0x20);
    dVar20 = (double)CONCAT44(uStack_58,local_5c);
    local_54 = uVar8;
  }
  fVar18 = (float)((ulonglong)dVar21 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar22 = fVar18 < (float)((ulonglong)dVar20 >> 0x20);
  }
  else {
    bVar22 = dVar21 < dVar20;
  }
  if (bVar22) {
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(fVar17,local_5c);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(fVar17,fVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(uStack_58,SUB84(dVar20,0));
  }
  else {
    dVar19 = (double)CONCAT44(local_54,uStack_58);
  }
  if (in_FPSCR_PR == '\0') {
    bVar22 = (float)((ulonglong)dVar19 >> 0x20) < SUB84(dVar14,0);
  }
  else {
    bVar22 = dVar19 < dVar14;
  }
  if ((bVar22) && (in_FPSCR_SZ == '\0')) {
    dVar14 = (double)(ulonglong)uStack_58;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(local_54,SUB84(dVar19,0));
  }
  else {
    dVar19 = (double)CONCAT44(uStack_50,local_54);
  }
  if (in_FPSCR_PR == '\0') {
    bVar22 = SUB84(dVar21,0) < (float)((ulonglong)dVar19 >> 0x20);
  }
  else {
    bVar22 = dVar21 < dVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)((ulonglong)dVar14 & 0xffffffff);
  }
  if (bVar22) {
    if (in_FPSCR_SZ == '\0') {
      in_xd0 = (double)CONCAT44(local_54,SUB84(dVar12,0));
    }
    else {
      in_xd0 = (double)CONCAT44(uStack_50,local_54);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    in_xd0 = (double)CONCAT44(SUB84(dVar21,0),SUB84(dVar12,0));
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(uStack_50,SUB84(dVar19,0));
  }
  else {
    dVar21 = (double)CONCAT44(local_4c,uStack_50);
  }
  if (in_FPSCR_PR == '\0') {
    bVar22 = (float)((ulonglong)dVar21 >> 0x20) < (float)((ulonglong)in_xd0 >> 0x20);
  }
  else {
    bVar22 = dVar21 < in_xd0;
  }
  if (bVar22) {
    if (in_FPSCR_SZ == '\0') {
      in_xd0 = (double)CONCAT44(uStack_50,SUB84(in_xd0,0));
    }
    else {
      in_xd0 = (double)CONCAT44(local_4c,uStack_50);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(DAT_8c08f228,SUB84(dVar14,0));
  }
  else {
    dVar19 = (double)CONCAT44(DAT_8c08f22c,DAT_8c08f228);
  }
  fVar17 = (float)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar21,0) * fVar17;
  }
  else {
    fVar18 = SUB84(dVar21 * dVar19,0);
  }
  dVar21 = (double)CONCAT44(DAT_8c08f22c,fVar18);
  if (in_FPSCR_PR != '\0' || DAT_8c08f22c <= fVar18) {
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44(DAT_8c08f22c + DAT_8c08f22c,fVar18 - (DAT_8c08f22c + DAT_8c08f22c));
    }
    else {
      dVar21 = (dVar21 + dVar21) - (dVar21 + dVar21);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)SUB84(dVar21,0);
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) * fVar17,SUB84(in_xd0,0));
  }
  else {
    iVar7 = (int)dVar21;
    in_xd0 = in_xd0 * dVar19;
  }
  fVar17 = (float)((ulonglong)in_xd0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)(ulonglong)(uint)fVar17;
  }
  dVar19 = (double)CONCAT44(DAT_8c08f22c,SUB84(dVar21,0));
  uVar8 = ((int)(iVar5 + (uint)(iVar5 < 0)) >> 1) * 0x10 + iVar7;
  if (in_FPSCR_PR == '\0') {
    bVar22 = fVar17 < DAT_8c08f22c;
  }
  else {
    bVar22 = in_xd0 < dVar19;
  }
  if (!bVar22) {
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44(DAT_8c08f22c + DAT_8c08f22c,
                                SUB84(dVar21,0) - (DAT_8c08f22c + DAT_8c08f22c));
    }
    else {
      dVar19 = (dVar19 + dVar19) - (dVar19 + dVar19);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)SUB84(dVar19,0);
  }
  else {
    iVar7 = (int)dVar19;
  }
  uVar9 = ((int)(iVar6 + (uint)(iVar6 < 0)) >> 1) * 0x10 + iVar7;
  if ((uint)(iVar5 * 0x10) < uVar8) {
    do {
      uVar8 = uVar8 + iVar5 * -0x10;
    } while ((uint)(iVar5 * 0x10) < uVar8);
  }
  if ((uint)(iVar6 << 4) < uVar9) {
    do {
      uVar9 = uVar9 + iVar5 * -0x10;
    } while ((uint)(iVar6 << 4) < uVar9);
  }
  (*(code *)PTR_FUN_8c08f230)();
  uVar13 = SUB84(in_xd0,0);
  (*(code *)puVar3)();
  (*(code *)PTR_FUN_8c08f230)();
  (*(code *)puVar3)();
  if ((uVar8 & 7) == 0) {
LAB_8c08f19c:
    if ((uVar8 & 0xf) == 0) goto LAB_8c08f1a8;
    local_60 = local_60 & (byte)DAT_8c08f59c | 0x10;
    (*(code *)puVar3)();
  }
  else {
    if (((uVar9 & 7) != 0) && (uVar8 < uVar9)) {
      uVar8 = 8;
      goto LAB_8c08f19c;
    }
LAB_8c08f1a8:
    local_60 = local_60 & (byte)DAT_8c08f222;
    (*(code *)puVar3)(0xf);
  }
  iVar5 = (*(code *)puVar4)();
  iVar6 = (*(code *)puVar4)();
  (*(code *)PTR_FUN_8c08f238)(param_4,iVar5,iVar6,1);
  iVar7 = *(int *)((*(int *)((int)param_4 + 0x20) * iVar6 + iVar5) * 4 +
                  *(int *)((int)DAT_8c08f226 + (int)param_4));
  if ((iVar7 != 0) && (*(int *)(iVar7 + 8) == 2)) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(DAT_8c08f23c,SUB84(in_dr2,0));
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,DAT_8c08f23c);
      dVar21 = uStack_24;
    }
    else {
      in_dr2 = (double)CONCAT44(PTR_FUN_8c08f240,DAT_8c08f23c);
      dVar21 = in_dr2;
    }
    goto LAB_8c08f1fa;
  }
  if (*(int *)((*(int *)((int)param_4 + 0x20) * iVar6 + iVar5) * 4 +
              *(int *)((int)DAT_8c08f358 + (int)param_4)) != 0) {
    in_dr2 = (double)CONCAT44(0x3f800000,SUB84(in_dr2,0));
    dVar21 = in_dr2;
    if (in_FPSCR_SZ == '\0') {
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,0x3f800000);
      dVar21 = uStack_24;
    }
    goto LAB_8c08f1fa;
  }
  iVar7 = (*(code *)PTR_FUN_8c08f368)(param_4,iVar5,iVar6);
  uVar10 = SUB84(in_dr2,0);
  if ((iVar7 != 0) && ((*(byte *)(iVar7 + 9) & 0x7f) == 0)) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44((undefined4)DAT_8c08f4ac,uVar10);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,(undefined4)DAT_8c08f4ac);
      dVar21 = uStack_24;
    }
    else {
      in_dr2 = (double)CONCAT44(DAT_8c08f4ac._4_4_,(undefined4)DAT_8c08f4ac);
      dVar21 = in_dr2;
    }
    goto LAB_8c08f1fa;
  }
  bVar1 = *(byte *)(*(int *)((int)param_4 + 0x20) * iVar6 + iVar5 +
                   *(int *)((int)DAT_8c08f35a + (int)param_4));
  if (bVar1 < 0x1c) {
    if (0xf < bVar1) goto LAB_8c08f316;
  }
  else {
    if (bVar1 < 0x4c) {
      if ((**(char **)((int)param_4 + 4) == '\x04') && ((*(char **)((int)param_4 + 4))[1] == '\x03')
         ) {
        uVar13 = 0;
        dVar21 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          uStack_24 = (double)((ulonglong)uStack_24._4_4_ << 0x20);
          dVar21 = uStack_24;
        }
      }
      else {
        if (*(short *)(*(int *)((int)param_4 + 8) + 0x18) == 0) {
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)CONCAT44(DAT_8c08f4ac._4_4_,uVar10);
          }
          else {
            in_dr2 = (double)CONCAT44(PTR_FUN_8c08f4b4,DAT_8c08f4ac._4_4_);
          }
        }
        else if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)CONCAT44(DAT_8c08f4a8,uVar10);
        }
        else {
          in_dr2 = (double)CONCAT44((undefined4)DAT_8c08f4ac,DAT_8c08f4a8);
        }
        dVar21 = in_dr2;
        if (in_FPSCR_SZ == '\0') {
          uStack_24 = (double)CONCAT44(uStack_24._4_4_,(int)((ulonglong)in_dr2 >> 0x20));
          dVar21 = uStack_24;
        }
      }
      goto LAB_8c08f1fa;
    }
LAB_8c08f316:
    if (bVar1 < 0x1c) {
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(DAT_8c08f4ac._4_4_,uVar10);
        uStack_24 = (double)CONCAT44(uStack_24._4_4_,DAT_8c08f4ac._4_4_);
        dVar21 = uStack_24;
      }
      else {
        in_dr2 = (double)CONCAT44(PTR_FUN_8c08f4b4,DAT_8c08f4ac._4_4_);
        dVar21 = in_dr2;
      }
      goto LAB_8c08f1fa;
    }
  }
  if (bVar1 == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44((undefined4)DAT_8c08f4ac,uVar10);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,(undefined4)DAT_8c08f4ac);
      dVar21 = uStack_24;
    }
    else {
      in_dr2 = (double)CONCAT44(DAT_8c08f4ac._4_4_,(undefined4)DAT_8c08f4ac);
      dVar21 = in_dr2;
    }
  }
  else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44((undefined4)DAT_8c08f4ac,uVar10);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,(undefined4)DAT_8c08f4ac);
      dVar21 = uStack_24;
    }
    else {
      in_dr2 = (double)CONCAT44(DAT_8c08f4ac._4_4_,(undefined4)DAT_8c08f4ac);
      dVar21 = in_dr2;
    }
  }
  else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) || (bVar1 == 0x66)) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(DAT_8c08f4ac._4_4_,uVar10);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,DAT_8c08f4ac._4_4_);
      dVar21 = uStack_24;
    }
    else {
      in_dr2 = (double)CONCAT44(PTR_FUN_8c08f4b4,DAT_8c08f4ac._4_4_);
      dVar21 = in_dr2;
    }
  }
  else if (bVar1 == 0x67) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(DAT_8c08f36c,uVar10);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,DAT_8c08f36c);
      dVar21 = uStack_24;
    }
    else {
      in_dr2 = (double)CONCAT44(uRam8c08f370,DAT_8c08f36c);
      dVar21 = in_dr2;
    }
  }
  else {
    uVar13 = 0;
    dVar21 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      uStack_24 = (double)((ulonglong)uStack_24._4_4_ << 0x20);
      dVar21 = uStack_24;
    }
  }
LAB_8c08f1fa:
  uStack_24 = dVar21;
  iVar5 = iStack_28;
  puVar3 = PTR_FUN_8c08f240;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(iStack_28 + 0x1c) = uStack_6c;
    *(undefined4 *)(iStack_28 + 0x20) = local_68;
    *(undefined4 *)(iStack_28 + 0x24) = uStack_64;
    uVar11 = CONCAT44(DAT_8c08f35c,uVar13);
    dVar21 = (double)CONCAT44((undefined4)uStack_24,SUB84(in_dr2,0));
  }
  else {
    fStack_44 = (float)((ulonglong)uStack_24 >> 0x20);
    *(ulonglong *)(iStack_28 + 0x1c) = CONCAT44(local_68,uStack_6c);
    *(ulonglong *)(iStack_28 + 0x20) = CONCAT44(uStack_64,local_68);
    *(ulonglong *)(iStack_28 + 0x24) =
         CONCAT26(uStack_5e,CONCAT15(uStack_5f,CONCAT14(local_60,uStack_64)));
    uVar11 = CONCAT44(PTR_FUN_8c08f360,DAT_8c08f35c);
    dVar21 = uStack_24;
  }
  fStack_48 = (float)(undefined4)uStack_24;
  (*(code *)puVar3)(uVar11,iStack_28 + 0x2c,&uStack_6c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(iVar5 + 0x6c) = 0;
  }
  else {
    *(ulonglong *)(iVar5 + 0x6c) = (ulonglong)dVar21 & 0xffffffff;
  }
  puVar3 = PTR_FUN_8c08f360;
  *(undefined1 *)(iVar5 + 8) = 0xe;
  (*(code *)puVar3)(local_30);
  return;
}

