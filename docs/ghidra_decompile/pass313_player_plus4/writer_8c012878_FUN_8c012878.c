// entry: 8c012878
// name: FUN_8c012878


/* WARNING: Removing unreachable block (ram,0x8c012b28) */
/* WARNING: Removing unreachable block (ram,0x8c012acc) */
/* WARNING: Removing unreachable block (ram,0x8c012d1e) */
/* WARNING: Removing unreachable block (ram,0x8c012d08) */
/* WARNING: Removing unreachable block (ram,0x8c012aa8) */
/* WARNING: Removing unreachable block (ram,0x8c01294a) */
/* WARNING: Removing unreachable block (ram,0x8c012960) */
/* WARNING: Removing unreachable block (ram,0x8c012c30) */
/* WARNING: Removing unreachable block (ram,0x8c012ce8) */
/* WARNING: Removing unreachable block (ram,0x8c012c36) */
/* WARNING: Removing unreachable block (ram,0x8c012d22) */
/* WARNING: Removing unreachable block (ram,0x8c012d3a) */
/* WARNING: Removing unreachable block (ram,0x8c012afc) */
/* WARNING: Removing unreachable block (ram,0x8c012b40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8c012878(float param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  uint extraout_fr1;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  double in_xd4;
  ulonglong in_xd8;
  bool bVar19;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  int local_18;
  int local_14;
  undefined8 uStack_10;
  
  if (*(char *)(*(int *)(DAT_8c01289e + param_4) + 0x30) != '\x04') {
    uRam8c012a50 = 0xf680f808;
    uRam8c012b8c = 0xe028f691;
    return 4;
  }
  uVar4 = (*(code *)PTR_FUN_8c012a2c)();
  uVar5 = (*(code *)PTR_FUN_8c012a2c)();
  (*(code *)PTR_FUN_8c012a30)(*(undefined4 *)(DAT_8c012a16 + param_4),uVar4,uVar5);
  iVar6 = (*(code *)PTR_FUN_8c012a2c)();
  if (iVar6 == 1) {
    *(undefined1 *)(DAT_8c012b74 + param_4) = 2;
    iVar6 = 0x5a;
  }
  else if (iVar6 == 2) {
    iVar6 = (int)DAT_8c012b76;
    *(undefined1 *)(DAT_8c012b74 + param_4) = 1;
  }
  else if (iVar6 == 4) {
    *(undefined1 *)(DAT_8c012b74 + param_4) = 8;
    iVar6 = 0;
  }
  else if (iVar6 == 8) {
    iVar6 = (int)DAT_8c012a1a;
    *(undefined1 *)(DAT_8c012a18 + param_4) = 4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar18 = (double)CONCAT44((float)iVar6,param_3);
  }
  else {
    dVar18 = (double)iVar6;
  }
  uVar7 = *(uint *)(param_4 + 0x2c);
  uVar9 = (uint)DAT_8c012a1e;
  uVar4 = (undefined4)((ulonglong)dVar18 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c012a1c + param_4) = uVar4;
  }
  else {
    *(double *)(DAT_8c012a1c + param_4) = dVar18;
  }
  uVar7 = uVar7 | uVar9 | uVar9;
  iVar6 = (int)DAT_8c012a20;
  *(uint *)(param_4 + 0x2c) = uVar7;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(iVar6 + param_4) = uVar4;
  }
  else {
    *(double *)(iVar6 + param_4) = dVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c012a1c + param_4) = uVar4;
  }
  else {
    *(double *)(DAT_8c012a1c + param_4) = dVar18;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(DAT_8c012a20 + param_4),param_2);
  }
  else {
    dVar14 = *(double *)(DAT_8c012a20 + param_4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)(DAT_8c012a1c + param_4),SUB84(dVar18,0));
  }
  else {
    dVar18 = *(double *)(DAT_8c012a1c + param_4);
  }
  fVar17 = (float)((ulonglong)dVar14 >> 0x20);
  fVar8 = (float)((ulonglong)dVar18 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar19 = fVar17 == fVar8;
  }
  else {
    bVar19 = dVar14 == dVar18;
  }
  if ((uVar7 & uVar9) == 0 && bVar19) {
    return 0xe;
  }
  iVar6 = *(int *)(param_4 + 0x58);
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(fVar8,*(undefined4 *)(DAT_8c012a20 + param_4));
  }
  else {
    in_xd8 = *(ulonglong *)(DAT_8c012a20 + param_4);
  }
  uVar4 = *(undefined4 *)(iVar6 + 0x5c);
  if (in_FPSCR_SZ == '\0') {
    param_1 = *(float *)(DAT_8c012a1c + param_4);
  }
  else {
    in_xd4 = *(double *)(DAT_8c012a1c + param_4);
  }
  uVar10 = *(undefined4 *)(iVar6 + 0x58);
  fVar8 = SUB84(dVar18,0);
  uVar5 = *(undefined4 *)(iVar6 + 0x60);
  if (in_FPSCR_SZ == '\0') {
    fStack_24 = param_1;
  }
  else {
    fStack_24 = SUB84(in_xd4,0);
    fStack_20 = (float)((ulonglong)in_xd4 >> 0x20);
  }
  if (fVar8 == param_1) goto LAB_8c012a6e;
  if (in_FPSCR_SZ == '\0') {
    fStack_20 = fVar8;
    dVar14 = (double)CONCAT44(fVar17,fVar8);
    dVar11 = (double)CONCAT44(param_1,param_1);
  }
  else {
    fStack_20 = (float)in_xd8;
    local_1c = (float)(in_xd8 >> 0x20);
    dVar11 = in_xd4;
  }
  fVar17 = SUB84(dVar14,0);
  if (param_1 == 0.0) {
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44((undefined4)DAT_8c012a34,fVar8);
    }
    else {
      dVar18 = (double)CONCAT44(DAT_8c012a34._4_4_,(undefined4)DAT_8c012a34);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar18 >> 0x20) <= SUB84(dVar18,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(DAT_8c012a34._4_4_,SUB84(dVar11,0));
      }
      else {
        dVar11 = (double)CONCAT44(PTR_DAT_8c012a3c,DAT_8c012a34._4_4_);
      }
    }
  }
  else if (fVar17 == 0.0) {
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44((undefined4)DAT_8c012b7c,fVar8);
    }
    else {
      dVar18 = (double)CONCAT44(DAT_8c012b7c._4_4_,(undefined4)DAT_8c012b7c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar19 = SUB84(dVar11,0) < (float)((ulonglong)dVar18 >> 0x20);
    }
    else {
      bVar19 = dVar11 < dVar18;
    }
    if ((!bVar19) && (in_FPSCR_SZ == '\0')) {
      fVar17 = DAT_8c012b7c._4_4_;
    }
  }
  uVar16 = SUB84(dVar18,0);
  local_3c._0_4_ = *(undefined4 *)PTR_DAT_8c012a3c;
  local_3c._4_4_ = *(undefined4 *)(PTR_DAT_8c012a3c + 4);
  local_34 = *(undefined4 *)(PTR_DAT_8c012a3c + 8);
  local_30 = *(undefined4 *)(PTR_DAT_8c012a3c + 0xc);
  local_2c = *(undefined4 *)(PTR_DAT_8c012a3c + 0x10);
  local_28 = *(undefined4 *)(PTR_DAT_8c012a3c + 0x14);
  uVar2 = *(ushort *)(param_4 + 0x54);
  uVar7 = (uint)uVar2;
  if ((*(uint *)(param_4 + 0x2c) & (int)DAT_8c012a26) == 0) {
    cVar1 = *(char *)(*(int *)((int)DAT_8c012a22 + *(int *)(DAT_8c012a16 + param_4)) +
                      (int)DAT_8c012a24 * uVar7 + 0x18);
    if (cVar1 == '\x01') {
      fVar8 = 7.00649e-45;
    }
    else if (cVar1 == '\x02') {
      fVar8 = 0.0;
    }
    else {
      uStack_10 = (ulonglong)CONCAT24(uVar2,(undefined4)uStack_10);
      uVar3 = uStack_10;
      iVar6 = *(int *)(DAT_8c012c8e + param_4) + (int)DAT_8c012c90;
      if (((*(short *)(iVar6 + uVar7 * 0x1e + 0x18) == 0) &&
          (uStack_10._4_4_ = (uint)uVar2,
          *(short *)(iVar6 + DAT_8c012c92 + uStack_10._4_4_ * 0x1e + 0x18) == 0)) &&
         (*(short *)(iVar6 + DAT_8c012c94 + uStack_10._4_4_ * 0x1e + 0x18) == 0)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (bVar19) {
        fVar8 = (float)((int)*(short *)(iVar6 + DAT_8c012d4e + uVar7 * 0x1e + 4) +
                       (int)*(short *)(iVar6 + DAT_8c012c94 + uVar7 * 0x1e + 4));
        local_1c = fVar8;
      }
      else {
        local_18 = iVar6 + DAT_8c012d4e + uVar7 * 0x1e;
        local_14 = iVar6 + DAT_8c012d50 + uVar7 * 0x1e;
        fVar8 = (float)((int)*(short *)(iVar6 + uVar7 * 0x1e + 4) + (int)*(short *)(local_18 + 4) +
                       (int)*(short *)(local_14 + 4));
      }
      uStack_10 = uVar3;
      if (4 < (int)fVar8) {
        fVar8 = 5.60519e-45;
      }
    }
  }
  else {
    fVar8 = *(float *)(DAT_8c012a28 + param_4);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar16 = *(undefined4 *)((int)&local_3c + (int)fVar8 * 4);
    dVar18 = (double)CONCAT44(DAT_8c012a40,fVar17);
  }
  else {
    in_xd8 = *(ulonglong *)((int)&local_3c + (int)fVar8 * 4);
    dVar18 = (double)CONCAT44(DAT_8c012a44,DAT_8c012a40);
  }
  if (in_FPSCR_PR == '\0') {
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                              SUB84(dVar18,0) - (float)((ulonglong)dVar11 >> 0x20));
  }
  else {
    dVar18 = dVar18 - dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)DAT_8c012a44,SUB84(dVar18,0));
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),uVar16);
  }
  else {
    dVar14 = *DAT_8c012a44;
  }
  if (in_FPSCR_PR == '\0') {
    iVar6 = (int)SUB84(dVar14,0);
    fVar17 = SUB84(dVar18,0) *
             ((float)((ulonglong)dVar18 >> 0x20) / (float)((ulonglong)dVar14 >> 0x20));
  }
  else {
    iVar6 = (int)dVar14;
    fVar17 = SUB84((dVar18 / dVar14) * (dVar18 / dVar14),0);
  }
  uVar3 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    uStack_10 = CONCAT44(uStack_10._4_4_,fVar17);
    uVar3 = uStack_10;
  }
  uStack_10 = uVar3;
  iVar6 = (*(code *)PTR__abs_8c012a48)(iVar6);
  fVar8 = fStack_20;
  param_1 = SUB84(dVar11,0);
  if (in_FPSCR_PR == '\0') {
    dVar18 = (double)CONCAT44((float)iVar6,fVar17);
  }
  else {
    dVar18 = (double)iVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),(undefined4)uStack_10);
  }
  if (in_FPSCR_PR == '\0' && SUB84(dVar18,0) < (float)((ulonglong)dVar18 >> 0x20)) {
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44(_DAT_8c012b84,SUB84(dVar18,0));
      param_1 = fStack_24;
    }
    else {
      in_xd4 = (double)CONCAT44(fStack_20,fStack_24);
      dVar18 = (double)CONCAT44(DAT_8c012b88,_DAT_8c012b84);
    }
    fVar17 = (float)((ulonglong)dVar18 >> 0x20);
    uVar16 = SUB84(dVar18,0);
    if (param_1 == fVar17) {
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(fStack_20,SUB84(dVar14,0));
      }
      else {
        dVar14 = (double)CONCAT44(local_1c,fStack_20);
      }
      fVar8 = (float)((ulonglong)dVar14 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar19 = fVar8 < 0.0;
      }
      else {
        bVar19 = dVar14 < (double)(ulonglong)extraout_fr1;
      }
      if (bVar19) {
LAB_8c012ae2:
        fVar8 = (float)((ulonglong)dVar14 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar19 = fVar17 < fVar8;
        }
        else {
          bVar19 = dVar18 < dVar14;
        }
        if (bVar19) {
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44(DAT_8c012b7c._4_4_,uVar16);
          }
          else {
            dVar18 = (double)CONCAT44(_DAT_8c012b84,DAT_8c012b7c._4_4_);
          }
          if (in_FPSCR_PR == '\0') {
            bVar19 = fVar8 < (float)((ulonglong)dVar18 >> 0x20);
          }
          else {
            bVar19 = dVar14 < dVar18;
          }
          if (bVar19) goto LAB_8c012aee;
        }
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44(fVar8 + SUB84(dVar18,0),SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + dVar18;
        }
        fVar17 = (float)((ulonglong)dVar14 >> 0x20);
        fStack_20 = fVar17;
        if (in_FPSCR_SZ != '\0') {
          fStack_20 = SUB84(dVar14,0);
          local_1c = fVar17;
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(fVar8,DAT_8c012b88);
        }
        if (in_FPSCR_PR != '\0' || SUB84(dVar14,0) <= (float)((ulonglong)dVar14 >> 0x20))
        goto LAB_8c012ae2;
LAB_8c012aee:
        if (in_FPSCR_PR == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) - SUB84(dVar18,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 - dVar18;
        }
        fVar17 = (float)((ulonglong)dVar14 >> 0x20);
        fStack_20 = fVar17;
        if (in_FPSCR_SZ != '\0') {
          fStack_20 = SUB84(dVar14,0);
          local_1c = fVar17;
        }
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)(ulonglong)DAT_8c012b88;
      }
      fVar8 = SUB84(dVar14,0);
      if (param_1 == fVar8) {
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(fStack_20,fVar8);
        }
        else {
          dVar14 = (double)CONCAT44(local_1c,fStack_20);
        }
        fVar8 = (float)((ulonglong)dVar14 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar19 = fVar8 < 0.0;
        }
        else {
          bVar19 = dVar14 < (double)(ulonglong)extraout_fr1;
        }
        fVar13 = SUB84(dVar14,0);
        if ((bVar19) || (in_FPSCR_PR != '\0' || fVar13 <= fVar8)) {
          if (in_FPSCR_PR == '\0') {
            bVar19 = fVar8 < fVar17;
          }
          else {
            bVar19 = dVar14 < dVar18;
          }
          if (!bVar19) {
            if (in_FPSCR_SZ == '\0') {
              dVar18 = (double)CONCAT44(DAT_8c012b7c._4_4_,uVar16);
            }
            else {
              dVar18 = (double)CONCAT44(_DAT_8c012b84,DAT_8c012b7c._4_4_);
            }
            if (in_FPSCR_PR == '\0') {
              bVar19 = fVar8 < (float)((ulonglong)dVar18 >> 0x20);
            }
            else {
              bVar19 = dVar14 < dVar18;
            }
            if (bVar19) goto LAB_8c012b1a;
          }
          if (in_FPSCR_PR == '\0') {
            dVar14 = (double)CONCAT44(fVar8 - SUB84(dVar18,0),fVar13);
          }
          else {
            dVar14 = dVar14 - dVar18;
          }
          fVar17 = (float)((ulonglong)dVar14 >> 0x20);
          fStack_20 = fVar17;
          if (in_FPSCR_SZ != '\0') {
            fStack_20 = SUB84(dVar14,0);
            local_1c = fVar17;
          }
        }
        else {
LAB_8c012b1a:
          if (in_FPSCR_PR == '\0') {
            dVar14 = (double)CONCAT44(fVar8 + SUB84(dVar18,0),fVar13);
          }
          else {
            dVar14 = dVar14 + dVar18;
          }
          fVar17 = (float)((ulonglong)dVar14 >> 0x20);
          fStack_20 = fVar17;
          if (in_FPSCR_SZ != '\0') {
            fStack_20 = SUB84(dVar14,0);
            local_1c = fVar17;
          }
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((undefined4)DAT_8c012b7c,uVar16);
        }
        else {
          dVar18 = (double)CONCAT44(DAT_8c012b7c._4_4_,(undefined4)DAT_8c012b7c);
        }
        fVar13 = (float)((ulonglong)dVar18 >> 0x20);
        fVar17 = SUB84(dVar18,0);
        if (param_1 == fVar13) {
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(fStack_20,fVar8);
          }
          else {
            dVar14 = (double)CONCAT44(local_1c,fStack_20);
          }
          fVar8 = (float)((ulonglong)dVar14 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar19 = fVar8 < fVar13;
          }
          else {
            bVar19 = dVar14 < dVar18;
          }
          if (bVar19) {
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44(fVar8 + fVar17,SUB84(dVar14,0));
            }
            else {
              dVar14 = dVar14 + dVar18;
            }
            fVar17 = (float)((ulonglong)dVar14 >> 0x20);
            fStack_20 = fVar17;
            if (in_FPSCR_SZ != '\0') {
              fStack_20 = SUB84(dVar14,0);
              local_1c = fVar17;
            }
          }
          else {
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44(fVar8 - fVar17,SUB84(dVar14,0));
            }
            else {
              dVar14 = dVar14 - dVar18;
            }
            fVar17 = (float)((ulonglong)dVar14 >> 0x20);
            fStack_20 = fVar17;
            if (in_FPSCR_SZ != '\0') {
              fStack_20 = SUB84(dVar14,0);
              local_1c = fVar17;
            }
          }
        }
        else if (param_1 == 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(fStack_20,fVar8);
          }
          else {
            dVar14 = (double)CONCAT44(local_1c,fStack_20);
          }
          fVar8 = (float)((ulonglong)dVar14 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar19 = fVar8 < fVar13;
          }
          else {
            bVar19 = dVar14 < dVar18;
          }
          if (bVar19) {
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44(fVar8 - fVar17,SUB84(dVar14,0));
            }
            else {
              dVar14 = dVar14 - dVar18;
            }
            fVar17 = (float)((ulonglong)dVar14 >> 0x20);
            fStack_20 = fVar17;
            if (in_FPSCR_SZ != '\0') {
              fStack_20 = SUB84(dVar14,0);
              local_1c = fVar17;
            }
          }
          else {
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44(fVar8 + fVar17,SUB84(dVar14,0));
            }
            else {
              dVar14 = dVar14 + dVar18;
            }
            fVar17 = (float)((ulonglong)dVar14 >> 0x20);
            fStack_20 = fVar17;
            if (in_FPSCR_SZ != '\0') {
              fStack_20 = SUB84(dVar14,0);
              local_1c = fVar17;
            }
          }
        }
      }
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    fStack_20 = fStack_24;
    param_1 = fStack_24;
  }
  else {
    in_xd4 = (double)CONCAT44(fStack_20,fStack_24);
    fStack_20 = fStack_24;
    local_1c = fVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(fStack_20,SUB84(dVar14,0));
    dVar18 = (double)CONCAT44(DAT_8c012a34._4_4_,SUB84(dVar18,0));
  }
  else {
    dVar14 = (double)CONCAT44(local_1c,fStack_20);
    dVar18 = (double)CONCAT44(PTR_DAT_8c012a3c,DAT_8c012a34._4_4_);
  }
  fVar17 = (float)((ulonglong)dVar14 >> 0x20);
  fVar8 = (float)((ulonglong)dVar18 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar19 = fVar17 < fVar8;
  }
  else {
    bVar19 = dVar14 < dVar18;
  }
  if (bVar19) {
    if (in_FPSCR_PR == '\0') {
      bVar19 = fVar17 < 0.0;
    }
    else {
      bVar19 = dVar14 < (double)(ulonglong)extraout_fr1;
    }
    if (bVar19) {
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44(fVar17 + fVar8,SUB84(dVar14,0));
      }
      else {
        dVar14 = dVar14 + dVar18;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44(DAT_8c012a4c,SUB84(dVar18,0));
    }
    else {
      dVar18 = (double)CONCAT44(uRam8c012a50,DAT_8c012a4c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44(fVar17 + (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar14,0));
    }
    else {
      dVar14 = dVar14 + dVar18;
    }
  }
  uVar7 = *(uint *)(param_4 + 0x2c);
  uVar16 = (undefined4)((ulonglong)dVar14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c012b6e + param_4) = uVar16;
  }
  else {
    *(double *)(DAT_8c012b6e + param_4) = dVar14;
  }
  uVar9 = (uint)DAT_8c012b72;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c012b70 + param_4) = uVar16;
  }
  else {
    *(double *)(DAT_8c012b70 + param_4) = dVar14;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c012b6e + param_4) = param_1;
  }
  else {
    *(double *)(DAT_8c012b6e + param_4) = in_xd4;
  }
  iVar6 = (int)DAT_8c012b70;
  *(uint *)(param_4 + 0x2c) = uVar7 | uVar9 | uVar9;
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(iVar6 + param_4),SUB84(dVar14,0));
  }
  else {
    dVar14 = *(double *)(iVar6 + param_4);
  }
LAB_8c012a6e:
  local_40 = (undefined4)((ulonglong)dVar14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44(uVar10,param_1);
    uStack_44 = local_40;
    local_40 = uVar5;
  }
  else {
    uVar12 = CONCAT44(uVar4,uVar10);
    uStack_44 = SUB84(dVar14,0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),uStack_44);
    uVar15 = CONCAT44(local_40,SUB84(dVar14,0));
  }
  else {
    uVar15 = CONCAT44((undefined4)local_3c,local_40);
  }
  (*(code *)PTR_FUN_8c012b78)(uVar12,uVar15,*(undefined4 *)(param_4 + 0x58));
                    /* WARNING: Read-only address (ram,0x8c012a50) is written */
                    /* WARNING: Read-only address (ram,0x8c012b8c) is written */
  return 0xe;
                    /* WARNING: Read-only address (ram,0x8c012a50) is written */
                    /* WARNING: Read-only address (ram,0x8c012b8c) is written */
}

