// entry: 8c08e350
// name: FUN_8c08e350
// signature: undefined FUN_8c08e350(void)


/* WARNING: Removing unreachable block (ram,0x8c08e486) */
/* WARNING: Removing unreachable block (ram,0x8c08e4a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c08e350(undefined8 param_1,double param_2,ulonglong param_3,float param_4,int param_5,
                 byte *param_6,undefined2 *param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 extraout_fr1;
  undefined4 in_fr3;
  undefined4 uVar9;
  double dVar10;
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
  undefined4 uStack_68;
  float local_64;
  float fStack_60;
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
  byte *local_30;
  undefined2 *local_2c;
  int iStack_28;
  undefined8 uStack_24;
  
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  local_38 = param_4;
  local_34 = param_5;
  local_30 = param_6;
  local_2c = param_7;
  iStack_28 = param_5;
  uStack_24._4_4_ = in_PR;
  (*(code *)PTR_FUN_8c08e4d4)();
  if (local_2c != (undefined2 *)0x0) {
    *(undefined2 *)(local_34 + 2) = *local_2c;
  }
  puVar3 = PTR_FUN_8c08e4dc;
  puVar2 = PTR_FUN_8c08e4d8;
  (*(code *)PTR_FUN_8c08e4d8)
            (*(undefined4 *)((int)param_4 + 8),(undefined2 *)(local_34 + 2),&uStack_68,&fStack_60);
  iVar4 = (*(code *)puVar3)();
  iVar5 = (*(code *)puVar3)();
  (*(code *)PTR_FUN_8c08e4e0)(param_4,iVar4,iVar5,1);
  iVar6 = *(int *)((*(int *)((int)param_4 + 0x20) * iVar5 + iVar4) * 4 +
                  *(int *)((int)DAT_8c08e4d2 + (int)param_4));
  if ((iVar6 == 0) || (*(int *)(iVar6 + 8) != 2)) {
    if (*(int *)((*(int *)((int)param_4 + 0x20) * iVar5 + iVar4) * 4 +
                *(int *)((int)DAT_8c08e8c4 + (int)param_4)) == 0) {
      iVar6 = (*(code *)PTR_FUN_8c08e8d4)(param_4,iVar4,iVar5);
      uVar13 = (undefined4)param_3;
      if ((iVar6 == 0) || ((*(byte *)(iVar6 + 9) & 0x7f) != 0)) {
        bVar1 = *(byte *)(iVar5 * *(int *)((int)param_4 + 0x20) + iVar4 +
                         *(int *)((int)DAT_8c08e8c6 + (int)param_4));
        if (bVar1 < 0x1c) {
          if (bVar1 < 0x10) {
LAB_8c08e950:
            if (bVar1 == 0) {
              if (in_FPSCR_SZ == '\0') {
                dVar19 = (double)CONCAT44((undefined4)DAT_8c08e8cc,uVar13);
              }
              else {
                dVar19 = (double)CONCAT44(DAT_8c08e8cc._4_4_,(undefined4)DAT_8c08e8cc);
              }
            }
            else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
              if (in_FPSCR_SZ == '\0') {
                dVar19 = (double)CONCAT44((undefined4)DAT_8c08e8cc,uVar13);
              }
              else {
                dVar19 = (double)CONCAT44(DAT_8c08e8cc._4_4_,(undefined4)DAT_8c08e8cc);
              }
            }
            else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) || (bVar1 == 0x66)) {
              if (in_FPSCR_SZ == '\0') {
                dVar19 = (double)CONCAT44(DAT_8c08e988,uVar13);
              }
              else {
                dVar19 = (double)CONCAT44(_DAT_8c08e98c,DAT_8c08e988);
              }
            }
            else if (bVar1 == 0x67) {
              if (in_FPSCR_SZ == '\0') {
                dVar19 = (double)CONCAT44(DAT_8c08e988,uVar13);
              }
              else {
                dVar19 = (double)CONCAT44(_DAT_8c08e98c,DAT_8c08e988);
              }
            }
            else {
              dVar19 = (double)(param_3 & 0xffffffff);
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(DAT_8c08e8cc._4_4_,uVar13);
          }
          else {
            dVar19 = (double)CONCAT44(PTR_FUN_8c08e8d4,DAT_8c08e8cc._4_4_);
          }
        }
        else {
          if (0x4b < bVar1) goto LAB_8c08e950;
          if ((**(char **)((int)param_4 + 4) == '\x04') &&
             ((*(char **)((int)param_4 + 4))[1] == '\x03')) {
            dVar19 = (double)(param_3 & 0xffffffff);
          }
          else if (*(short *)(*(int *)((int)param_4 + 8) + 0x18) == 0) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = (double)CONCAT44(DAT_8c08e8cc._4_4_,uVar13);
            }
            else {
              dVar19 = (double)CONCAT44(PTR_FUN_8c08e8d4,DAT_8c08e8cc._4_4_);
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(DAT_8c08e8c8,uVar13);
          }
          else {
            dVar19 = (double)CONCAT44((undefined4)DAT_8c08e8cc,DAT_8c08e8c8);
          }
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44((undefined4)DAT_8c08e8cc,uVar13);
      }
      else {
        dVar19 = (double)CONCAT44(DAT_8c08e8cc._4_4_,(undefined4)DAT_8c08e8cc);
      }
    }
    else {
      dVar19 = (double)CONCAT44(0x3f800000,(int)param_3);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44((undefined4)DAT_8c08e4e4,(int)param_3);
  }
  else {
    dVar19 = (double)CONCAT44(DAT_8c08e4e4._4_4_,(undefined4)DAT_8c08e4e4);
  }
  fVar17 = (float)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(DAT_8c08e4e4._4_4_,in_fr3);
  }
  else {
    dVar10 = (double)CONCAT44(DAT_8c08e4ec,DAT_8c08e4e4._4_4_);
    fStack_60 = fVar17;
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44(fVar17 + (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 + dVar10;
  }
  fVar17 = (float)((ulonglong)dVar19 >> 0x20);
  local_64 = fVar17;
  if (in_FPSCR_SZ != '\0') {
    local_64 = SUB84(dVar19,0);
    fStack_60 = fVar17;
  }
  (*(code *)puVar2)(*(undefined4 *)((int)param_4 + 8),param_6,&local_4c,&fStack_44);
  puVar2 = PTR_FUN_8c08e658;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(local_4c,extraout_fr1);
    dVar19 = (double)CONCAT44(local_4c,SUB84(dVar19,0));
    fStack_48 = local_4c;
  }
  else {
    dVar21 = (double)CONCAT44(fStack_48,local_4c);
    dVar19 = (double)CONCAT44(fStack_48,local_4c);
  }
  local_40 = local_4c;
  dVar12 = (double)((ulonglong)uVar7 << 0x20);
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
      dVar10 = (double)CONCAT44(DAT_8c08e4ec,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)CONCAT44(uRam8c08e4f0,DAT_8c08e4ec);
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
                                (float)((ulonglong)dVar10 >> 0x20));
    }
    else {
      dVar19 = dVar19 / param_2 + dVar10;
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
        dVar10 = (double)CONCAT44(_DAT_8c08e98c,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)CONCAT44(_FUN_8c08e990,_DAT_8c08e98c);
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
                  (float)((ulonglong)dVar10 >> 0x20));
        param_2 = (double)CONCAT44(fVar16,SUB84(dVar14,0));
        bVar22 = fVar16 < fVar17;
      }
      else {
        param_2 = -(dVar14 / dVar14 + dVar10);
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
      dVar10 = (double)CONCAT44(DAT_8c08e4ec,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)CONCAT44(uRam8c08e4f0,DAT_8c08e4ec);
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
                                (float)((ulonglong)dVar10 >> 0x20));
    }
    else {
      dVar19 = dVar19 / param_2 + dVar10;
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
        dVar10 = (double)CONCAT44(DAT_8c08e784,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)CONCAT44(PTR_FUN_8c08e788,DAT_8c08e784);
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
                  (float)((ulonglong)dVar10 >> 0x20));
        param_2 = (double)CONCAT44(fVar15,SUB84(dVar14,0));
        bVar22 = fVar15 < fVar18;
      }
      else {
        param_2 = -(dVar14 / dVar14 + dVar10);
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
  iVar4 = *(int *)((int)param_4 + 0x20);
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
  iVar5 = *(int *)((int)param_4 + 0x24);
  if (in_FPSCR_PR == '\0') {
    fVar17 = (float)iVar4 / SUB84(dVar14,0);
  }
  else {
    fVar17 = SUB84((double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),(float)iVar4) / dVar14,0);
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
  uVar7 = (uint)((ulonglong)dVar19 >> 0x20);
  uStack_58 = SUB84(in_xd8,0);
  uStack_50 = uStack_58;
  local_5c = SUB84(dVar19,0);
  if (in_FPSCR_SZ == '\0') {
    local_5c = uVar7;
    uStack_58 = SUB84(dVar19,0);
  }
  if (in_FPSCR_PR == '\0') {
    fVar18 = (float)iVar5 / SUB84(dVar14,0);
  }
  else {
    fVar18 = SUB84((double)CONCAT44(uVar7,(float)iVar5) / dVar14,0);
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
  uVar7 = SUB84(dVar19,0);
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(local_5c,uVar7);
    local_54 = (uint)((ulonglong)dVar19 >> 0x20);
    uStack_50 = uVar7;
  }
  else {
    local_4c = (float)((ulonglong)in_xd8 >> 0x20);
    dVar20 = (double)CONCAT44(uStack_58,local_5c);
    local_54 = uVar7;
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
    dVar19 = (double)CONCAT44(uStack_50,SUB84(dVar19,0));
  }
  else {
    dVar19 = (double)CONCAT44(local_4c,uStack_50);
  }
  if (in_FPSCR_PR == '\0') {
    bVar22 = (float)((ulonglong)dVar19 >> 0x20) < (float)((ulonglong)in_xd0 >> 0x20);
  }
  else {
    bVar22 = dVar19 < in_xd0;
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
    dVar21 = (double)CONCAT44(DAT_8c08e64c,SUB84(dVar14,0));
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c08e650,DAT_8c08e64c);
  }
  fVar17 = (float)((ulonglong)dVar21 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar18 = SUB84(dVar19,0) * fVar17;
  }
  else {
    fVar18 = SUB84(dVar19 * dVar21,0);
  }
  dVar19 = (double)CONCAT44(DAT_8c08e650,fVar18);
  if (in_FPSCR_PR != '\0' || DAT_8c08e650 <= fVar18) {
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44(DAT_8c08e650 + DAT_8c08e650,fVar18 - (DAT_8c08e650 + DAT_8c08e650));
    }
    else {
      dVar19 = (dVar19 + dVar19) - (dVar19 + dVar19);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar6 = (int)SUB84(dVar19,0);
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) * fVar17,SUB84(in_xd0,0));
  }
  else {
    iVar6 = (int)dVar19;
    in_xd0 = in_xd0 * dVar21;
  }
  fVar17 = (float)((ulonglong)in_xd0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)(ulonglong)(uint)fVar17;
  }
  dVar21 = (double)CONCAT44(DAT_8c08e650,SUB84(dVar19,0));
  uVar7 = ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 0x10 + iVar6;
  if (in_FPSCR_PR == '\0') {
    bVar22 = fVar17 < DAT_8c08e650;
  }
  else {
    bVar22 = in_xd0 < dVar21;
  }
  if (!bVar22) {
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44(DAT_8c08e650 + DAT_8c08e650,
                                SUB84(dVar19,0) - (DAT_8c08e650 + DAT_8c08e650));
    }
    else {
      dVar21 = (dVar21 + dVar21) - (dVar21 + dVar21);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar6 = (int)SUB84(dVar21,0);
  }
  else {
    iVar6 = (int)dVar21;
  }
  uVar8 = ((int)(iVar5 + (uint)(iVar5 < 0)) >> 1) * 0x10 + iVar6;
  if ((uint)(iVar4 * 0x10) < uVar7) {
    do {
      uVar7 = uVar7 + iVar4 * -0x10;
    } while ((uint)(iVar4 * 0x10) < uVar7);
  }
  if ((uint)(iVar5 << 4) < uVar8) {
    do {
      uVar8 = uVar8 + iVar4 * -0x10;
    } while ((uint)(iVar5 << 4) < uVar8);
  }
  (*(code *)PTR_FUN_8c08e654)();
  uVar13 = SUB84(in_xd0,0);
  (*(code *)puVar2)();
  (*(code *)PTR_FUN_8c08e654)();
  (*(code *)puVar2)();
  if ((uVar7 & 7) == 0) {
LAB_8c08e5be:
    if ((uVar7 & 0xf) == 0) goto LAB_8c08e5ca;
    *param_6 = *param_6 & (byte)DAT_8c08e984 | 0x10;
    (*(code *)puVar2)();
  }
  else {
    if (((uVar8 & 7) != 0) && (uVar7 < uVar8)) {
      uVar7 = 8;
      goto LAB_8c08e5be;
    }
LAB_8c08e5ca:
    *param_6 = *param_6 & (byte)DAT_8c08e646;
    (*(code *)puVar2)(0xf);
  }
  iVar4 = (*(code *)puVar3)();
  iVar5 = (*(code *)puVar3)();
  (*(code *)PTR_FUN_8c08e65c)(param_4,iVar4,iVar5,1);
  iVar6 = *(int *)((*(int *)((int)param_4 + 0x20) * iVar5 + iVar4) * 4 +
                  *(int *)((int)DAT_8c08e64a + (int)param_4));
  if ((iVar6 != 0) && (*(int *)(iVar6 + 8) == 2)) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(DAT_8c08e660,SUB84(dVar10,0));
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,DAT_8c08e660);
      dVar19 = uStack_24;
    }
    else {
      dVar10 = (double)CONCAT44(PTR_FUN_8c08e664,DAT_8c08e660);
      dVar19 = dVar10;
    }
    goto LAB_8c08e618;
  }
  if (*(int *)((*(int *)((int)param_4 + 0x20) * iVar5 + iVar4) * 4 +
              *(int *)((int)DAT_8c08e77a + (int)param_4)) != 0) {
    dVar10 = (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
    dVar19 = dVar10;
    if (in_FPSCR_SZ == '\0') {
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,0x3f800000);
      dVar19 = uStack_24;
    }
    goto LAB_8c08e618;
  }
  iVar6 = (*(code *)PTR_FUN_8c08e788)(param_4,iVar4,iVar5);
  uVar9 = SUB84(dVar10,0);
  if ((iVar6 != 0) && ((*(byte *)(iVar6 + 9) & 0x7f) == 0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44((undefined4)DAT_8c08e8cc,uVar9);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,(undefined4)DAT_8c08e8cc);
      dVar19 = uStack_24;
    }
    else {
      dVar10 = (double)CONCAT44(DAT_8c08e8cc._4_4_,(undefined4)DAT_8c08e8cc);
      dVar19 = dVar10;
    }
    goto LAB_8c08e618;
  }
  bVar1 = *(byte *)(iVar5 * *(int *)((int)param_4 + 0x20) + iVar4 +
                   *(int *)((int)DAT_8c08e77c + (int)param_4));
  if (bVar1 < 0x1c) {
    if (0xf < bVar1) goto LAB_8c08e736;
  }
  else {
    if (bVar1 < 0x4c) {
      if ((**(char **)((int)param_4 + 4) == '\x04') && ((*(char **)((int)param_4 + 4))[1] == '\x03')
         ) {
        uVar13 = 0;
        dVar19 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          uStack_24 = (double)((ulonglong)uStack_24._4_4_ << 0x20);
          dVar19 = uStack_24;
        }
      }
      else {
        if (*(short *)(*(int *)((int)param_4 + 8) + 0x18) == 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(DAT_8c08e8cc._4_4_,uVar9);
          }
          else {
            dVar10 = (double)CONCAT44(PTR_FUN_8c08e8d4,DAT_8c08e8cc._4_4_);
          }
        }
        else if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(DAT_8c08e8c8,uVar9);
        }
        else {
          dVar10 = (double)CONCAT44((undefined4)DAT_8c08e8cc,DAT_8c08e8c8);
        }
        dVar19 = dVar10;
        if (in_FPSCR_SZ == '\0') {
          uStack_24 = (double)CONCAT44(uStack_24._4_4_,(int)((ulonglong)dVar10 >> 0x20));
          dVar19 = uStack_24;
        }
      }
      goto LAB_8c08e618;
    }
LAB_8c08e736:
    if (bVar1 < 0x1c) {
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c08e8cc._4_4_,uVar9);
        uStack_24 = (double)CONCAT44(uStack_24._4_4_,DAT_8c08e8cc._4_4_);
        dVar19 = uStack_24;
      }
      else {
        dVar10 = (double)CONCAT44(PTR_FUN_8c08e8d4,DAT_8c08e8cc._4_4_);
        dVar19 = dVar10;
      }
      goto LAB_8c08e618;
    }
  }
  if (bVar1 == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44((undefined4)DAT_8c08e8cc,uVar9);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,(undefined4)DAT_8c08e8cc);
      dVar19 = uStack_24;
    }
    else {
      dVar10 = (double)CONCAT44(DAT_8c08e8cc._4_4_,(undefined4)DAT_8c08e8cc);
      dVar19 = dVar10;
    }
  }
  else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44((undefined4)DAT_8c08e8cc,uVar9);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,(undefined4)DAT_8c08e8cc);
      dVar19 = uStack_24;
    }
    else {
      dVar10 = (double)CONCAT44(DAT_8c08e8cc._4_4_,(undefined4)DAT_8c08e8cc);
      dVar19 = dVar10;
    }
  }
  else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) || (bVar1 == 0x66)) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(DAT_8c08e8cc._4_4_,uVar9);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,DAT_8c08e8cc._4_4_);
      dVar19 = uStack_24;
    }
    else {
      dVar10 = (double)CONCAT44(PTR_FUN_8c08e8d4,DAT_8c08e8cc._4_4_);
      dVar19 = dVar10;
    }
  }
  else if (bVar1 == 0x67) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(DAT_8c08e78c,uVar9);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,DAT_8c08e78c);
      dVar19 = uStack_24;
    }
    else {
      dVar10 = (double)CONCAT44(uRam8c08e790,DAT_8c08e78c);
      dVar19 = dVar10;
    }
  }
  else {
    uVar13 = 0;
    dVar19 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      uStack_24 = (double)((ulonglong)uStack_24._4_4_ << 0x20);
      dVar19 = uStack_24;
    }
  }
LAB_8c08e618:
  uStack_24 = dVar19;
  iVar4 = iStack_28;
  puVar2 = PTR_FUN_8c08e664;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(iStack_28 + 100) = uStack_68;
    *(float *)(iStack_28 + 0x68) = local_64;
    *(float *)(iStack_28 + 0x6c) = fStack_60;
    uVar11 = CONCAT44(DAT_8c08e780,uVar13);
    dVar19 = (double)CONCAT44((undefined4)uStack_24,SUB84(dVar10,0));
  }
  else {
    fStack_44 = (float)((ulonglong)uStack_24 >> 0x20);
    *(ulonglong *)(iStack_28 + 100) = CONCAT44(local_64,uStack_68);
    *(ulonglong *)(iStack_28 + 0x68) = CONCAT44(fStack_60,local_64);
    *(ulonglong *)(iStack_28 + 0x6c) = CONCAT44(local_5c,fStack_60);
    uVar11 = CONCAT44(DAT_8c08e784,DAT_8c08e780);
    dVar19 = uStack_24;
  }
  fStack_48 = (float)(undefined4)uStack_24;
  (*(code *)puVar2)(uVar11,iStack_28 + 0x20,&uStack_68);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(iVar4 + 0x60) = 0;
  }
  else {
    *(ulonglong *)(iVar4 + 0x60) = (ulonglong)dVar19 & 0xffffffff;
  }
  *(byte *)(iVar4 + 9) = *(byte *)(iVar4 + 9) & 0xf | (byte)DAT_8c08e778;
  *(byte *)(iVar4 + 0x11) = *(byte *)(iVar4 + 0x11) & 0xf;
  return;
}

