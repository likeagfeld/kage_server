// entry: 8c01b734
// name: FUN_8c01b734


/* WARNING: Removing unreachable block (ram,0x8c01b938) */
/* WARNING: Removing unreachable block (ram,0x8c01bb12) */
/* WARNING: Removing unreachable block (ram,0x8c01bafc) */
/* WARNING: Removing unreachable block (ram,0x8c01b8ee) */
/* WARNING: Removing unreachable block (ram,0x8c01b76c) */
/* WARNING: Removing unreachable block (ram,0x8c01b7a6) */
/* WARNING: Removing unreachable block (ram,0x8c01ba2c) */
/* WARNING: Removing unreachable block (ram,0x8c01badc) */
/* WARNING: Removing unreachable block (ram,0x8c01ba32) */
/* WARNING: Removing unreachable block (ram,0x8c01bb1e) */
/* WARNING: Removing unreachable block (ram,0x8c01bb36) */
/* WARNING: Removing unreachable block (ram,0x8c01b968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c01b734(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  double dVar12;
  float fVar14;
  undefined8 uVar13;
  double dVar15;
  float fVar17;
  undefined8 uVar16;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined8 in_dr14;
  float fVar22;
  double dVar21;
  double in_xd8;
  bool bVar23;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar11 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar11 + -4) = in_PR;
  if ((**(uint **)(DAT_8c01b8a2 + param_4) & 4) != 0) {
    (*(code *)PTR_FUN_8c01b9b0)(param_4 + 0x10,0x13);
    return;
  }
  piVar5 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c01b8a4);
  (*(code *)piVar5[2])(param_4 + *piVar5);
  if (in_FPSCR_SZ == '\0') {
    param_3 = *(undefined4 *)(DAT_8c01b8a6 + param_4);
  }
  else {
    in_xd8 = *(double *)(DAT_8c01b8a6 + param_4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(*(undefined4 *)(DAT_8c01b8a8 + param_4),param_3);
  }
  else {
    dVar19 = *(double *)(DAT_8c01b8a8 + param_4);
  }
  fVar18 = (float)((ulonglong)dVar19 >> 0x20);
  if ((*(uint *)(param_4 + 0x2c) & (int)DAT_8c01b8aa) == 0 && SUB84(dVar19,0) == fVar18)
  goto LAB_8c01b882;
  iVar9 = *(int *)(param_4 + 0x58);
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(DAT_8c01b8a6 + param_4),param_2);
  }
  else {
    dVar15 = *(double *)(DAT_8c01b8a6 + param_4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(DAT_8c01b8a8 + param_4),param_1);
  }
  else {
    dVar12 = *(double *)(DAT_8c01b8a8 + param_4);
  }
  uVar8 = *(undefined4 *)(iVar9 + 0x5c);
  fVar14 = (float)((ulonglong)dVar12 >> 0x20);
  fVar17 = (float)((ulonglong)dVar15 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar23 = fVar17 == fVar14;
  }
  else {
    bVar23 = dVar15 == dVar12;
  }
  *(undefined4 *)((int)puVar11 + -0x40) = *(undefined4 *)(iVar9 + 0x58);
  uVar6 = *(undefined4 *)(iVar9 + 0x60);
  *(undefined4 *)((int)puVar11 + -0x3c) = uVar8;
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar11 + -0x1c) = fVar14;
  }
  else {
    *(double *)((int)puVar11 + -0x1c) = dVar12;
  }
  *(undefined4 *)((int)puVar11 + -0x38) = uVar6;
  if (!bVar23) {
    dVar12 = dVar15;
    dVar21 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(fVar18,fVar17);
      dVar15 = (double)(ulonglong)(uint)fVar14;
      dVar12 = in_xd8;
      dVar21 = (double)CONCAT44(fVar17,(int)in_dr14);
    }
    in_xd8 = dVar12;
    uVar8 = SUB84(dVar15,0);
    fVar18 = SUB84(dVar19,0);
    if (fVar14 == 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44((undefined4)DAT_8c01b8b8,fVar18);
      }
      else {
        dVar19 = (double)CONCAT44(DAT_8c01b8b8._4_4_,(undefined4)DAT_8c01b8b8);
      }
      if (in_FPSCR_PR == '\0') {
        bVar23 = (float)((ulonglong)dVar21 >> 0x20) < (float)((ulonglong)dVar19 >> 0x20);
      }
      else {
        bVar23 = dVar21 < dVar19;
      }
      if ((!bVar23) && (in_FPSCR_SZ == '\0')) {
        uVar8 = DAT_8c01b8b8._4_4_;
      }
    }
    else if (fVar18 == 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44((undefined4)DAT_8c01b9b4,fVar18);
      }
      else {
        dVar19 = (double)CONCAT44(DAT_8c01b9b4._4_4_,(undefined4)DAT_8c01b9b4);
      }
      fVar18 = (float)((ulonglong)dVar19 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar14 < fVar18;
      }
      else {
        bVar23 = (double)((ulonglong)(uint)fVar14 << 0x20) < dVar19;
      }
      if (!bVar23) {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(fVar18,DAT_8c01b9b4._4_4_);
        }
        else {
          in_xd8 = (double)CONCAT44(_DAT_8c01b9bc,DAT_8c01b9b4._4_4_);
        }
      }
    }
    uVar6 = *(undefined4 *)(PTR_DAT_8c01b8c0 + 4);
    *(undefined4 *)((int)puVar11 + -0x34) = *(undefined4 *)PTR_DAT_8c01b8c0;
    *(undefined4 *)((int)puVar11 + -0x30) = uVar6;
    uVar6 = *(undefined4 *)(PTR_DAT_8c01b8c0 + 0xc);
    *(undefined4 *)((int)puVar11 + -0x2c) = *(undefined4 *)(PTR_DAT_8c01b8c0 + 8);
    *(undefined4 *)((int)puVar11 + -0x28) = uVar6;
    uVar6 = *(undefined4 *)(PTR_DAT_8c01b8c0 + 0x14);
    *(undefined4 *)((int)puVar11 + -0x24) = *(undefined4 *)(PTR_DAT_8c01b8c0 + 0x10);
    iVar9 = *(int *)(DAT_8c01b8a2 + param_4);
    *(undefined4 *)((int)puVar11 + -0x20) = uVar6;
    uVar7 = (uint)*(ushort *)(param_4 + 0x54);
    if ((*(uint *)(param_4 + 0x2c) & (int)DAT_8c01b8b0) == 0) {
      cVar1 = *(char *)(*(int *)(DAT_8c01b8ac + iVar9) + (int)DAT_8c01b8ae * uVar7 + 0x18);
      if (cVar1 == '\x01') {
        iVar9 = 5;
      }
      else if (cVar1 == '\x02') {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(DAT_8c01bb16 + param_4);
        *(uint *)((int)puVar11 + -8) = uVar7;
        iVar9 = iVar9 + DAT_8c01bb18;
        if (((*(short *)(iVar9 + uVar7 * 0x1e + 0x18) == 0) &&
            (*(short *)(iVar9 + DAT_8c01bb1a + *(int *)((int)puVar11 + -8) * 0x1e + 0x18) == 0)) &&
           (*(short *)(iVar9 + DAT_8c01bb1c + *(int *)((int)puVar11 + -8) * 0x1e + 0x18) == 0)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          *(int *)((int)puVar11 + -0x18) = (int)*(short *)(iVar9 + DAT_8c01bb1a + uVar7 * 0x1e + 4);
          iVar9 = *(int *)((int)puVar11 + -0x18) +
                  (int)*(short *)(iVar9 + DAT_8c01bb1c + uVar7 * 0x1e + 4);
          *(int *)((int)puVar11 + -0x18) = iVar9;
        }
        else {
          *(int *)((int)puVar11 + -0x14) = iVar9 + DAT_8c01bb1a;
          *(int *)((int)puVar11 + -0x10) = iVar9 + DAT_8c01bb1c;
          sVar2 = *(short *)(iVar9 + uVar7 * 0x1e + 4);
          iVar9 = *(int *)((int)puVar11 + -0x14);
          *(uint *)((int)puVar11 + -0x14) = iVar9 + uVar7 * 0x1e;
          sVar3 = *(short *)(iVar9 + uVar7 * 0x1e + 4);
          sVar4 = *(short *)(*(int *)((int)puVar11 + -0x10) + uVar7 * 0x1e + 4);
          *(uint *)((int)puVar11 + -0x10) = *(int *)((int)puVar11 + -0x10) + uVar7 * 0x1e;
          iVar9 = (int)sVar2 + (int)sVar3 + (int)sVar4;
        }
        if (4 < iVar9) {
          iVar9 = 4;
        }
      }
    }
    else {
      iVar9 = *(int *)(DAT_8c01b8b2 + param_4);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + iVar9 * 4 + -0x34),uVar8);
      dVar12 = (double)((ulonglong)DAT_8c01b8c4 << 0x20);
    }
    else {
      dVar15 = *(double *)((int)puVar11 + iVar9 * 4 + -0x34);
      dVar12 = (double)CONCAT44(DAT_8c01b8c8,DAT_8c01b8c4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar19,0) - SUB84(dVar15,0);
    }
    else {
      fVar18 = SUB84(dVar19 - dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(*(undefined4 *)DAT_8c01b8c8,SUB84(dVar12,0));
      dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar18);
    }
    else {
      dVar19 = *DAT_8c01b8c8;
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)SUB84(dVar12,0);
      fVar18 = (float)((ulonglong)dVar12 >> 0x20) / (float)((ulonglong)dVar19 >> 0x20);
      dVar12 = (double)CONCAT44(fVar18,SUB84(dVar12,0));
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * fVar18,SUB84(dVar15,0));
    }
    else {
      iVar9 = (int)dVar12;
      dVar12 = dVar12 / dVar19;
      dVar15 = dVar15 * dVar12;
    }
    uVar8 = SUB84(dVar12,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar11 + -0xc) = (int)((ulonglong)dVar15 >> 0x20);
    }
    else {
      *(double *)((int)puVar11 + -0xc) = dVar15;
    }
    iVar9 = (*(code *)PTR__abs_8c01b8cc)(iVar9);
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((float)iVar9,uVar8);
    }
    else {
      dVar20 = (double)iVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0xc),SUB84(dVar15,0));
    }
    else {
      dVar15 = *(double *)((int)puVar11 + -0xc);
    }
    fVar18 = (float)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar23 = fVar18 < (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      bVar23 = dVar15 < dVar20;
    }
    uVar8 = SUB84(dVar21,0);
    if (bVar23) {
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x1c),SUB84(dVar19,0));
        dVar20 = (double)CONCAT44(_DAT_8c01b9bc,SUB84(dVar20,0));
      }
      else {
        dVar12 = *(double *)((int)puVar11 + -0x1c);
        dVar20 = (double)CONCAT44(DAT_8c01b9c0,_DAT_8c01b9bc);
      }
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      fVar17 = (float)((ulonglong)dVar20 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar14 == fVar17;
      }
      else {
        bVar23 = dVar12 == dVar20;
      }
      fVar22 = (float)((ulonglong)dVar21 >> 0x20);
      if (bVar23) {
        dVar12 = (double)((ulonglong)(uint)fVar14 << 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar23 = fVar22 < 0.0;
        }
        else {
          bVar23 = dVar21 < dVar12;
        }
        if (bVar23) {
LAB_8c01b924:
          if (in_FPSCR_PR == '\0') {
            bVar23 = (float)((ulonglong)dVar20 >> 0x20) < fVar22;
          }
          else {
            bVar23 = dVar20 < dVar21;
          }
          if (bVar23) {
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44(DAT_8c01b9b4._4_4_,SUB84(dVar20,0));
            }
            else {
              dVar20 = (double)CONCAT44(_DAT_8c01b9bc,DAT_8c01b9b4._4_4_);
            }
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar22 < (float)((ulonglong)dVar20 >> 0x20);
            }
            else {
              bVar23 = dVar21 < dVar20;
            }
            if (bVar23) goto LAB_8c01b930;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar22 + fVar18,uVar8);
          }
          else {
            dVar21 = dVar21 + dVar15;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)CONCAT44(fVar17,DAT_8c01b9c0);
          }
          else {
            in_xd8 = (double)CONCAT44(uRam8c01b9c4,DAT_8c01b9c0);
          }
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar22 < SUB84(dVar20,0);
          }
          else {
            bVar23 = dVar21 < dVar20;
          }
          if (!bVar23) goto LAB_8c01b924;
LAB_8c01b930:
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar22 - fVar18,uVar8);
          }
          else {
            dVar21 = dVar21 - dVar15;
          }
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(fVar17,DAT_8c01b9c0);
        }
        else {
          in_xd8 = (double)CONCAT44(uRam8c01b9c4,DAT_8c01b9c0);
        }
        fVar17 = SUB84(dVar20,0);
        if (fVar14 != fVar17) {
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)CONCAT44((undefined4)DAT_8c01b9b4,fVar17);
          }
          else {
            dVar20 = (double)CONCAT44(DAT_8c01b9b4._4_4_,(undefined4)DAT_8c01b9b4);
          }
          fVar17 = (float)((ulonglong)dVar20 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar14 == fVar17;
          }
          else {
            bVar23 = dVar12 == dVar20;
          }
          if (bVar23) {
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar22 < fVar17;
            }
            else {
              bVar23 = dVar21 < dVar20;
            }
            if (bVar23) {
              if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44(fVar22 + fVar18,uVar8);
              }
              else {
                dVar21 = dVar21 + dVar15;
              }
            }
            else if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44(fVar22 - fVar18,uVar8);
            }
            else {
              dVar21 = dVar21 - dVar15;
            }
          }
          else {
            dVar12 = (double)((ulonglong)(uint)fVar14 << 0x20);
            if (fVar14 == 0.0) {
              if (in_FPSCR_PR == '\0') {
                bVar23 = fVar22 < fVar17;
              }
              else {
                bVar23 = dVar21 < dVar20;
              }
              if (bVar23) {
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44(fVar22 - fVar18,uVar8);
                }
                else {
                  dVar21 = dVar21 - dVar15;
                }
              }
              else if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44(fVar22 + fVar18,uVar8);
              }
              else {
                dVar21 = dVar21 + dVar15;
              }
            }
          }
          goto LAB_8c01b840;
        }
        dVar12 = (double)((ulonglong)(uint)fVar14 << 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar23 = fVar22 < 0.0;
        }
        else {
          bVar23 = dVar21 < dVar12;
        }
        if (bVar23) {
LAB_8c01b946:
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar22 < (float)((ulonglong)dVar20 >> 0x20);
          }
          else {
            bVar23 = dVar21 < dVar20;
          }
          if (!bVar23) {
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44(DAT_8c01b9b4._4_4_,fVar17);
            }
            else {
              dVar20 = (double)CONCAT44(_DAT_8c01b9bc,DAT_8c01b9b4._4_4_);
            }
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar22 < (float)((ulonglong)dVar20 >> 0x20);
            }
            else {
              bVar23 = dVar21 < dVar20;
            }
            if (bVar23) goto LAB_8c01b952;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar22 - fVar18,uVar8);
          }
          else {
            dVar21 = dVar21 - dVar15;
          }
        }
        else {
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar22 < fVar17;
          }
          else {
            bVar23 = dVar21 < dVar20;
          }
          if (!bVar23) goto LAB_8c01b946;
LAB_8c01b952:
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar22 + fVar18,uVar8);
          }
          else {
            dVar21 = dVar21 + dVar15;
          }
        }
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x1c),SUB84(dVar19,0));
      dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x1c),uVar8);
    }
    else {
      dVar12 = *(double *)((int)puVar11 + -0x1c);
      dVar21 = dVar12;
    }
LAB_8c01b840:
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(DAT_8c01b8b8._4_4_,SUB84(dVar20,0));
    }
    else {
      dVar19 = (double)CONCAT44(PTR_DAT_8c01b8c0,DAT_8c01b8b8._4_4_);
    }
    fVar18 = (float)((ulonglong)dVar19 >> 0x20);
    fVar14 = (float)((ulonglong)dVar21 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar23 = fVar14 < fVar18;
    }
    else {
      bVar23 = dVar21 < dVar19;
    }
    if (bVar23) {
      dVar12 = (double)((ulonglong)dVar12 & 0xffffffff00000000);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar14 < 0.0;
      }
      else {
        bVar23 = dVar21 < dVar12;
      }
      if (bVar23) {
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44(fVar14 + fVar18,SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 + dVar19;
        }
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(DAT_8c01b8d0,SUB84(dVar19,0));
      }
      else {
        dVar19 = (double)CONCAT44(PTR_FUN_8c01b8d4,DAT_8c01b8d0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 + dVar19;
      }
    }
    uVar7 = *(uint *)(param_4 + 0x2c);
    uVar8 = (undefined4)((ulonglong)dVar21 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c01b8a8 + param_4) = uVar8;
    }
    else {
      *(double *)(DAT_8c01b8a8 + param_4) = dVar21;
    }
    uVar10 = (uint)DAT_8c01b8aa;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c01b8a6 + param_4) = uVar8;
    }
    else {
      *(double *)(DAT_8c01b8a6 + param_4) = dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c01b8a8 + param_4) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      *(double *)(DAT_8c01b8a8 + param_4) = dVar12;
    }
    iVar9 = (int)DAT_8c01b8a6;
    *(uint *)(param_4 + 0x2c) = uVar7 | uVar10 | uVar10;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)(ulonglong)*(uint *)(iVar9 + param_4);
    }
    else {
      in_xd8 = *(double *)(iVar9 + param_4);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)((int)puVar11 + -0x40),SUB84(dVar12,0));
    *(int *)((int)puVar11 + -0x3c) = SUB84(dVar19,0);
  }
  else {
    uVar13 = *(undefined8 *)((int)puVar11 + -0x40);
    *(double *)((int)puVar11 + -0x3c) = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),*(undefined4 *)((int)puVar11 + -0x3c));
    uVar16 = CONCAT44(*(undefined4 *)((int)puVar11 + -0x38),SUB84(dVar15,0));
  }
  else {
    uVar16 = *(undefined8 *)((int)puVar11 + -0x38);
  }
  (*(code *)PTR_FUN_8c01b8d4)(uVar13,uVar16,*(undefined4 *)(param_4 + 0x58));
  param_1 = (undefined4)uVar13;
LAB_8c01b882:
  piVar5 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c01b8b4);
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)(DAT_8c01b8d8 + 0x34),param_1);
  }
  else {
    uVar13 = *(undefined8 *)(DAT_8c01b8d8 + 0x34);
  }
  (*(code *)piVar5[2])(uVar13,param_4 + *piVar5);
                    /* WARNING: Read-only address (ram,0x8c01b9c4) is written */
  return;
}

