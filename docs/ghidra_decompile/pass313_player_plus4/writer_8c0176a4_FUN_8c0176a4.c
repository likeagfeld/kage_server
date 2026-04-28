// entry: 8c0176a4
// name: FUN_8c0176a4


/* WARNING: Removing unreachable block (ram,0x8c01789c) */
/* WARNING: Removing unreachable block (ram,0x8c017c8c) */
/* WARNING: Removing unreachable block (ram,0x8c017708) */
/* WARNING: Removing unreachable block (ram,0x8c017a9a) */
/* WARNING: Removing unreachable block (ram,0x8c017c1e) */
/* WARNING: Removing unreachable block (ram,0x8c017bbe) */
/* WARNING: Removing unreachable block (ram,0x8c017bf0) */
/* WARNING: Removing unreachable block (ram,0x8c0176e8) */
/* WARNING: Removing unreachable block (ram,0x8c0176be) */
/* WARNING: Removing unreachable block (ram,0x8c0176fa) */
/* WARNING: Removing unreachable block (ram,0x8c017b5c) */
/* WARNING: Removing unreachable block (ram,0x8c017bba) */
/* WARNING: Removing unreachable block (ram,0x8c017b62) */
/* WARNING: Removing unreachable block (ram,0x8c017c06) */
/* WARNING: Removing unreachable block (ram,0x8c017a8e) */
/* WARNING: Removing unreachable block (ram,0x8c017aa6) */
/* WARNING: Removing unreachable block (ram,0x8c017cec) */
/* WARNING: Removing unreachable block (ram,0x8c017890) */
/* WARNING: Removing unreachable block (ram,0x8c0178a8) */
/* WARNING: Removing unreachable block (ram,0x8c017ca0) */
/* WARNING: Removing unreachable block (ram,0x8c017d16) */
/* WARNING: Removing unreachable block (ram,0x8c017d02) */
/* WARNING: Removing unreachable block (ram,0x8c017ca4) */
/* WARNING: Removing unreachable block (ram,0x8c017c72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0176a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  undefined8 uVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  undefined8 in_dr14;
  double dVar20;
  float fVar22;
  double dVar21;
  undefined8 in_xd8;
  double in_xd14;
  bool bVar23;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  uVar6 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44(uVar6,(undefined4)uStack_c);
    puVar11 = &uStack_c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr14;
  }
  else {
    puVar11 = (undefined8 *)auStack_14;
    uStack_c = in_dr14;
  }
  *(undefined4 *)((int)puVar11 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    param_3 = *(undefined4 *)(DAT_8c017838 + param_4);
  }
  else {
    in_xd8 = *(undefined8 *)(DAT_8c017838 + param_4);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)(DAT_8c01783a + param_4),param_3);
  }
  else {
    dVar18 = *(double *)(DAT_8c01783a + param_4);
  }
  if ((*(uint *)(param_4 + 0x2c) & (int)DAT_8c01783c) == 0 &&
      SUB84(dVar18,0) == (float)((ulonglong)dVar18 >> 0x20)) {
    uRam8c017ae4 = 0xe0388903;
    uRam8c017bf0 = 0x42086623;
    return;
  }
  iVar9 = *(int *)(param_4 + 0x58);
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(DAT_8c017838 + param_4),param_2);
  }
  else {
    dVar15 = *(double *)(DAT_8c017838 + param_4);
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = CONCAT44(uVar6,*(undefined4 *)(DAT_8c01783a + param_4));
  }
  else {
    in_xd14 = *(double *)(DAT_8c01783a + param_4);
  }
  uVar8 = *(undefined4 *)(iVar9 + 0x58);
  fVar19 = (float)((ulonglong)dVar15 >> 0x20);
  fVar14 = (float)in_dr14;
  *(undefined4 *)((int)puVar11 + -0x54) = *(undefined4 *)(iVar9 + 0x5c);
  uVar6 = *(undefined4 *)(iVar9 + 0x60);
  *(undefined4 *)((int)puVar11 + -0x58) = uVar8;
  *(undefined4 *)((int)puVar11 + -0x50) = uVar6;
  if (fVar19 == fVar14) goto LAB_8c0178e8;
  bVar23 = fVar14 == 0.0;
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(fVar19,fVar19);
    dVar12 = (double)(CONCAT44(fVar19,fVar14) << 0x20);
    dVar20 = (double)CONCAT44(fVar19,fVar14);
  }
  else {
    fVar14 = SUB84(dVar15,0);
    dVar12 = in_xd14;
    dVar20 = dVar15;
  }
  fVar19 = SUB84(dVar15,0);
  if (bVar23) {
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44((undefined4)DAT_8c017ac4,fVar19);
    }
    else {
      dVar15 = (double)CONCAT44(DAT_8c017ac4._4_4_,(undefined4)DAT_8c017ac4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar23 = (float)((ulonglong)dVar20 >> 0x20) < (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      bVar23 = dVar20 < dVar15;
    }
    if (!bVar23) {
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c017ac4._4_4_,SUB84(dVar12,0));
      }
      else {
        dVar12 = (double)CONCAT44(PTR_DAT_8c017acc,DAT_8c017ac4._4_4_);
      }
    }
    uVar6 = *(undefined4 *)(PTR_DAT_8c017acc + 4);
    *(undefined4 *)((int)puVar11 + -0x4c) = *(undefined4 *)PTR_DAT_8c017acc;
    *(undefined4 *)((int)puVar11 + -0x48) = uVar6;
    uVar8 = *(undefined4 *)(PTR_DAT_8c017acc + 8);
    uVar6 = *(undefined4 *)(PTR_DAT_8c017acc + 0xc);
    *(undefined4 **)((int)puVar11 + -0x14) = (undefined4 *)((int)puVar11 + -0x4c);
    *(undefined4 *)((int)puVar11 + -0x44) = uVar8;
    *(undefined4 *)((int)puVar11 + -0x40) = uVar6;
    uVar6 = *(undefined4 *)(PTR_DAT_8c017acc + 0x14);
    *(undefined4 *)((int)puVar11 + -0x3c) = *(undefined4 *)(PTR_DAT_8c017acc + 0x10);
    iVar9 = *(int *)(DAT_8c017ab4 + param_4);
    *(undefined4 *)((int)puVar11 + -0x38) = uVar6;
    iVar9 = *(int *)(DAT_8c017ab6 + iVar9);
    uVar2 = *(ushort *)(param_4 + 0x54);
    *(ushort *)((int)puVar11 + -0x1c) = uVar2;
    if ((*(uint *)(param_4 + 0x2c) & (int)DAT_8c017aba) == 0) {
      cVar1 = *(char *)(iVar9 + (int)DAT_8c017ab8 * (uint)uVar2 + 0x18);
      if (cVar1 == '\x01') {
        iVar9 = 5;
      }
      else if (cVar1 == '\x02') {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(DAT_8c017abc + param_4) + (int)DAT_8c017abe;
        uVar7 = (uint)*(ushort *)((int)puVar11 + -0x1c);
        if (((*(short *)(iVar9 + uVar7 * 0x1e + 0x18) == 0) &&
            (*(int *)((int)puVar11 + -0xc) = iVar9 + DAT_8c017ac0,
            *(short *)(iVar9 + DAT_8c017ac0 + uVar7 * 0x1e + 0x18) == 0)) &&
           (*(int *)((int)puVar11 + -8) = iVar9 + DAT_8c017ac2,
           *(short *)(iVar9 + DAT_8c017ac2 + uVar7 * 0x1e + 0x18) == 0)) {
          uVar7 = (uint)*(ushort *)((int)puVar11 + -0x1c);
          sVar4 = *(short *)(iVar9 + uVar7 * 0x1e + 4);
          iVar9 = *(int *)((int)puVar11 + -0xc);
          *(uint *)((int)puVar11 + -0xc) = iVar9 + uVar7 * 0x1e;
          sVar5 = *(short *)(iVar9 + uVar7 * 0x1e + 4);
          iVar9 = *(int *)((int)puVar11 + -8);
          *(uint *)((int)puVar11 + -8) = iVar9 + uVar7 * 0x1e;
          iVar9 = (int)sVar4 + (int)sVar5 + (int)*(short *)(iVar9 + uVar7 * 0x1e + 4);
        }
        else {
          iVar9 = (int)*(short *)(iVar9 + DAT_8c017be0 +
                                  (uint)*(ushort *)((int)puVar11 + -0x1c) * 0x1e + 4) +
                  (int)*(short *)(iVar9 + DAT_8c017bdc +
                                  (uint)*(ushort *)((int)puVar11 + -0x1c) * 0x1e + 4);
        }
        if (4 < iVar9) {
          iVar9 = 4;
        }
      }
    }
    else {
      iVar9 = *(int *)(DAT_8c017bde + param_4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar15,0) - (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar15 - dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)(ulonglong)*(uint *)(iVar9 * 4 + *(int *)((int)puVar11 + -0x14));
      dVar21 = (double)CONCAT44(DAT_8c017ad4,fVar14);
    }
    else {
      in_xd8 = *(undefined8 *)(iVar9 * 4 + *(int *)((int)puVar11 + -0x14));
      dVar21 = (double)CONCAT44(PTR__abs_8c017ad8,DAT_8c017ad4);
    }
    fVar14 = SUB84(dVar21,0);
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)fVar14;
    }
    else {
      iVar9 = (int)dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar18,0));
      dVar15 = (double)CONCAT44(*(undefined4 *)DAT_8c017ad0,fVar14);
    }
    else {
      dVar15 = *DAT_8c017ad0;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = SUB84(dVar21,0) *
               ((float)((ulonglong)dVar21 >> 0x20) / (float)((ulonglong)dVar15 >> 0x20));
    }
    else {
      fVar14 = SUB84((dVar21 / dVar15) * (dVar21 / dVar15),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar11 + -0x18) = fVar14;
      *(float *)((int)puVar11 + -0x20) = fVar14;
    }
    else {
      *(undefined8 *)((int)puVar11 + -0x18) = in_xd8;
      *(undefined8 *)((int)puVar11 + -0x20) = in_xd8;
    }
    iVar9 = (*(code *)PTR__abs_8c017ad8)(iVar9);
    if (in_FPSCR_PR == '\0') {
      dVar18 = (double)CONCAT44((float)iVar9,fVar14);
    }
    else {
      dVar18 = (double)iVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                *(undefined4 *)((int)puVar11 + -0x18));
    }
    else {
      in_xd8 = *(undefined8 *)((int)puVar11 + -0x18);
    }
    if (in_FPSCR_PR == '\0' && SUB84(dVar18,0) < (float)((ulonglong)dVar18 >> 0x20)) {
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44((undefined4)DAT_8c017adc,SUB84(dVar18,0));
      }
      else {
        dVar18 = (double)CONCAT44(DAT_8c017adc._4_4_,(undefined4)DAT_8c017adc);
      }
      fVar14 = (float)((ulonglong)dVar18 >> 0x20);
      fVar19 = SUB84(dVar20,0);
      if (fVar19 == fVar14) {
LAB_8c017c40:
        dVar12 = (double)((ulonglong)dVar12 & 0xffffffff00000000);
        fVar14 = (float)((ulonglong)dVar20 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar23 = fVar14 < 0.0;
        }
        else {
          bVar23 = dVar20 < dVar12;
        }
        if (bVar23) {
LAB_8c017b1e:
          if (in_FPSCR_PR == '\0') {
            bVar23 = (float)((ulonglong)dVar18 >> 0x20) < fVar14;
          }
          else {
            bVar23 = dVar18 < dVar20;
          }
          if (bVar23) {
            if (in_FPSCR_SZ == '\0') {
              dVar18 = (double)CONCAT44(DAT_8c017be4,SUB84(dVar18,0));
            }
            else {
              dVar18 = (double)CONCAT44(_DAT_8c017be8,DAT_8c017be4);
            }
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar14 < (float)((ulonglong)dVar18 >> 0x20);
            }
            else {
              bVar23 = dVar20 < dVar18;
            }
            if (bVar23) goto LAB_8c017b3a;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x20),SUB84(dVar18,0));
          }
          else {
            dVar18 = *(double *)((int)puVar11 + -0x20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar20,0));
          }
          else {
            dVar21 = dVar20 + dVar18;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),_DAT_8c017be8);
          }
          else {
            in_xd8 = CONCAT44(_DAT_8c017bec,_DAT_8c017be8);
          }
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar14 < SUB84(dVar18,0);
          }
          else {
            bVar23 = dVar20 < dVar18;
          }
          if (!bVar23) goto LAB_8c017b1e;
LAB_8c017b3a:
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x20),SUB84(dVar18,0));
          }
          else {
            dVar18 = *(double *)((int)puVar11 + -0x20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar14 - (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar20,0));
          }
          else {
            dVar21 = dVar20 - dVar18;
          }
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44(fVar14,DAT_8c017adc._4_4_);
        }
        else {
          in_xd8 = CONCAT44(uRam8c017ae4,DAT_8c017adc._4_4_);
        }
        fVar14 = SUB84(dVar18,0);
        if (fVar19 != fVar14) {
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44((undefined4)DAT_8c017ac4,SUB84(dVar15,0));
          }
          else {
            dVar15 = (double)CONCAT44(DAT_8c017ac4._4_4_,(undefined4)DAT_8c017ac4);
          }
          fVar17 = (float)((ulonglong)dVar15 >> 0x20);
          if (fVar19 == fVar17) {
LAB_8c0178ac:
            fVar14 = (float)((ulonglong)dVar20 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar14 < (float)((ulonglong)dVar15 >> 0x20);
            }
            else {
              bVar23 = dVar20 < dVar15;
            }
            if (bVar23) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x20),SUB84(dVar18,0));
              }
              else {
                dVar18 = *(double *)((int)puVar11 + -0x20);
              }
              if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar18 >> 0x20),
                                          SUB84(dVar20,0));
              }
              else {
                dVar21 = dVar20 + dVar18;
              }
            }
            else {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x20),SUB84(dVar18,0));
              }
              else {
                dVar18 = *(double *)((int)puVar11 + -0x20);
              }
              if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44(fVar14 - (float)((ulonglong)dVar18 >> 0x20),
                                          SUB84(dVar20,0));
              }
              else {
                dVar21 = dVar20 - dVar18;
              }
            }
          }
          else {
            fVar22 = (float)((ulonglong)dVar20 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar22 < fVar17;
            }
            else {
              bVar23 = dVar20 < dVar15;
            }
            if (bVar23) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x20),fVar14);
              }
              else {
                dVar18 = *(double *)((int)puVar11 + -0x20);
              }
              if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44(fVar22 - (float)((ulonglong)dVar18 >> 0x20),fVar19);
              }
              else {
                dVar21 = dVar20 - dVar18;
              }
            }
            else {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x20),fVar14);
              }
              else {
                dVar18 = *(double *)((int)puVar11 + -0x20);
              }
              if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44(fVar22 + (float)((ulonglong)dVar18 >> 0x20),fVar19);
              }
              else {
                dVar21 = dVar20 + dVar18;
              }
            }
          }
          goto LAB_8c0178ba;
        }
LAB_8c017c32:
        dVar12 = (double)((ulonglong)dVar12 & 0xffffffff00000000);
        fVar14 = (float)((ulonglong)dVar20 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar23 = fVar14 < 0.0;
        }
        else {
          bVar23 = dVar20 < dVar12;
        }
        if (bVar23) {
LAB_8c017afe:
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar14 < (float)((ulonglong)dVar18 >> 0x20);
          }
          else {
            bVar23 = dVar20 < dVar18;
          }
          if (!bVar23) {
            if (in_FPSCR_SZ == '\0') {
              dVar18 = (double)CONCAT44(DAT_8c017be4,SUB84(dVar18,0));
            }
            else {
              dVar18 = (double)CONCAT44(_DAT_8c017be8,DAT_8c017be4);
            }
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar14 < (float)((ulonglong)dVar18 >> 0x20);
            }
            else {
              bVar23 = dVar20 < dVar18;
            }
            if (bVar23) goto LAB_8c017b16;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x20),SUB84(dVar18,0));
          }
          else {
            dVar18 = *(double *)((int)puVar11 + -0x20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar14 - (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar20,0));
          }
          else {
            dVar21 = dVar20 - dVar18;
          }
        }
        else {
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar14 < SUB84(dVar18,0);
          }
          else {
            bVar23 = dVar20 < dVar18;
          }
          if (!bVar23) goto LAB_8c017afe;
LAB_8c017b16:
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x20),SUB84(dVar18,0));
          }
          else {
            dVar18 = *(double *)((int)puVar11 + -0x20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar20,0));
          }
          else {
            dVar21 = dVar20 + dVar18;
          }
        }
      }
    }
    else {
LAB_8c017c4e:
      dVar21 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(SUB84(dVar20,0),SUB84(dVar20,0));
      }
    }
  }
  else {
    if (fVar19 == SUB84(dVar12,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(DAT_8c01784c,fVar19);
      }
      else {
        dVar15 = (double)CONCAT44(DAT_8c017850,DAT_8c01784c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar14 < (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        bVar23 = dVar20 < dVar15;
      }
      if ((!bVar23) && (in_FPSCR_SZ == '\0')) {
        dVar15 = (double)(ulonglong)DAT_8c017850;
      }
    }
    uVar6 = *(undefined4 *)(PTR_DAT_8c017854 + 4);
    *(undefined4 *)((int)puVar11 + -0x4c) = *(undefined4 *)PTR_DAT_8c017854;
    *(undefined4 *)((int)puVar11 + -0x48) = uVar6;
    uVar6 = *(undefined4 *)(PTR_DAT_8c017854 + 0xc);
    *(undefined4 *)((int)puVar11 + -0x44) = *(undefined4 *)(PTR_DAT_8c017854 + 8);
    *(undefined4 *)((int)puVar11 + -0x40) = uVar6;
    uVar6 = *(undefined4 *)(PTR_DAT_8c017854 + 0x14);
    *(undefined4 *)((int)puVar11 + -0x3c) = *(undefined4 *)(PTR_DAT_8c017854 + 0x10);
    *(undefined4 *)((int)puVar11 + -0x38) = uVar6;
    iVar9 = *(int *)((int)DAT_8c017840 + *(int *)(DAT_8c01783e + param_4));
    uVar2 = *(ushort *)(param_4 + 0x54);
    *(undefined4 **)((int)puVar11 + -0x34) = (undefined4 *)((int)puVar11 + -0x4c);
    uVar7 = (uint)uVar2;
    if ((*(uint *)(param_4 + 0x2c) & (int)DAT_8c017844) == 0) {
      cVar1 = *(char *)(iVar9 + (int)DAT_8c017842 * uVar7 + 0x18);
      if (cVar1 == '\x01') {
        iVar9 = 5;
      }
      else if (cVar1 == '\x02') {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(DAT_8c017846 + param_4);
        *(uint *)((int)puVar11 + -0x10) = uVar7;
        iVar9 = iVar9 + DAT_8c017848;
        if (((*(short *)(iVar9 + uVar7 * 0x1e + 0x18) == 0) &&
            (*(int *)((int)puVar11 + -0x30) = iVar9 + DAT_8c017838,
            *(short *)(iVar9 + DAT_8c017838 + *(int *)((int)puVar11 + -0x10) * 0x1e + 0x18) == 0))
           && (*(int *)((int)puVar11 + -0x2c) = iVar9 + DAT_8c01784a,
              *(short *)(iVar9 + DAT_8c01784a + *(int *)((int)puVar11 + -0x10) * 0x1e + 0x18) == 0))
        {
          sVar4 = *(short *)(iVar9 + uVar7 * 0x1e + 4);
          iVar9 = *(int *)((int)puVar11 + -0x30);
          *(uint *)((int)puVar11 + -0x30) = iVar9 + uVar7 * 0x1e;
          sVar5 = *(short *)(iVar9 + uVar7 * 0x1e + 4);
          sVar3 = *(short *)(*(int *)((int)puVar11 + -0x2c) + uVar7 * 0x1e + 4);
          *(uint *)((int)puVar11 + -0x2c) = *(int *)((int)puVar11 + -0x2c) + uVar7 * 0x1e;
          iVar9 = (int)sVar4 + (int)sVar5 + (int)sVar3;
        }
        else {
          *(int *)((int)puVar11 + -0x28) = (int)*(short *)(iVar9 + DAT_8c017d30 + uVar7 * 0x1e + 4);
          iVar9 = *(int *)((int)puVar11 + -0x28) +
                  (int)*(short *)(iVar9 + DAT_8c017d32 + uVar7 * 0x1e + 4);
          *(int *)((int)puVar11 + -0x28) = iVar9;
        }
        if (4 < iVar9) {
          iVar9 = 4;
        }
      }
    }
    else {
      iVar9 = *(int *)(DAT_8c017d34 + param_4);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(iVar9 * 4 + *(int *)((int)puVar11 + -0x34)),
                                SUB84(dVar15,0));
      uVar13 = CONCAT44(DAT_8c017910,SUB84(dVar18,0));
    }
    else {
      dVar15 = *(double *)(iVar9 * 4 + *(int *)((int)puVar11 + -0x34));
      uVar13 = CONCAT44(PTR__abs_8c017914,DAT_8c017910);
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                SUB84(dVar15,0) - (float)((ulonglong)dVar12 >> 0x20));
    }
    else {
      dVar15 = dVar15 - dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44(*(undefined4 *)DAT_8c017858,(int)((ulonglong)uVar13 >> 0x20));
    }
    else {
      dVar18 = *DAT_8c017858;
      in_xd8 = uVar13;
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)SUB84(dVar15,0);
      fVar19 = (float)((ulonglong)dVar18 >> 0x20);
      fVar14 = SUB84(dVar18,0) / fVar19;
      dVar18 = (double)CONCAT44(fVar19,fVar14);
      dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) * fVar14,SUB84(dVar15,0));
    }
    else {
      iVar9 = (int)dVar15;
      dVar18 = dVar18 / dVar18;
      dVar15 = dVar15 * dVar18;
    }
    uVar6 = SUB84(dVar18,0);
    uVar8 = (undefined4)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar11 + -0x24) = uVar8;
      *(undefined4 *)((int)puVar11 + -0x20) = uVar8;
    }
    else {
      *(double *)((int)puVar11 + -0x24) = dVar15;
      *(double *)((int)puVar11 + -0x20) = dVar15;
    }
    iVar9 = (*(code *)PTR__abs_8c017914)(iVar9);
    if (in_FPSCR_PR == '\0') {
      dVar18 = (double)CONCAT44((float)iVar9,uVar6);
    }
    else {
      dVar18 = (double)iVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x24),SUB84(dVar15,0));
    }
    else {
      dVar15 = *(double *)((int)puVar11 + -0x24);
    }
    if (in_FPSCR_PR == '\0') {
      bVar23 = (float)((ulonglong)dVar15 >> 0x20) < (float)((ulonglong)dVar18 >> 0x20);
    }
    else {
      bVar23 = dVar15 < dVar18;
    }
    if (!bVar23) goto LAB_8c017c4e;
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44((undefined4)DAT_8c017918,SUB84(dVar18,0));
    }
    else {
      dVar18 = (double)CONCAT44(DAT_8c017918._4_4_,(undefined4)DAT_8c017918);
    }
    fVar14 = (float)((ulonglong)dVar18 >> 0x20);
    fVar19 = SUB84(dVar20,0);
    if (fVar19 == fVar14) goto LAB_8c017c40;
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44(fVar14,DAT_8c017918._4_4_);
    }
    else {
      in_xd8 = CONCAT44(_DAT_8c017920,DAT_8c017918._4_4_);
    }
    if (fVar19 == SUB84(dVar18,0)) goto LAB_8c017c32;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(_DAT_8c017920,SUB84(dVar15,0));
    }
    else {
      dVar15 = (double)CONCAT44(_DAT_8c017924,_DAT_8c017920);
    }
    dVar21 = dVar20;
    if (fVar19 == (float)((ulonglong)dVar15 >> 0x20)) goto LAB_8c0178ac;
  }
LAB_8c0178ba:
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(_DAT_8c017924,SUB84(dVar18,0));
  }
  else {
    dVar18 = (double)CONCAT44(PTR_FUN_8c017928,_DAT_8c017924);
  }
  fVar14 = (float)((ulonglong)dVar18 >> 0x20);
  fVar19 = (float)((ulonglong)dVar21 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar23 = fVar19 < fVar14;
  }
  else {
    bVar23 = dVar21 < dVar18;
  }
  if (bVar23) {
    dVar12 = (double)((ulonglong)dVar12 & 0xffffffff00000000);
    if (in_FPSCR_PR == '\0') {
      bVar23 = fVar19 < 0.0;
    }
    else {
      bVar23 = dVar21 < dVar12;
    }
    if (bVar23) {
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44(fVar19 + fVar14,SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 + dVar18;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44(_DAT_8c017bec,SUB84(dVar18,0));
    }
    else {
      dVar18 = (double)CONCAT44(uRam8c017bf0,_DAT_8c017bec);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44(fVar19 + (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 + dVar18;
    }
  }
  param_1 = SUB84(dVar12,0);
  uVar7 = *(uint *)(param_4 + 0x2c);
  uVar6 = (undefined4)((ulonglong)dVar21 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c01790a + param_4) = uVar6;
  }
  else {
    *(double *)(DAT_8c01790a + param_4) = dVar21;
  }
  uVar10 = (uint)DAT_8c01790e;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c01790c + param_4) = uVar6;
  }
  else {
    *(double *)(DAT_8c01790c + param_4) = dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c01790a + param_4) = SUB84(dVar21,0);
  }
  else {
    *(double *)(DAT_8c01790a + param_4) = in_xd14;
  }
  iVar9 = (int)DAT_8c01790c;
  *(uint *)(param_4 + 0x2c) = uVar7 | uVar10 | uVar10;
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)(ulonglong)*(uint *)(iVar9 + param_4);
  }
  else {
    in_xd8 = *(undefined8 *)(iVar9 + param_4);
  }
LAB_8c0178e8:
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)((int)puVar11 + -0x58),param_1);
    *(int *)((int)puVar11 + -0x54) = SUB84(dVar18,0);
  }
  else {
    uVar13 = *(undefined8 *)((int)puVar11 + -0x58);
    *(undefined8 *)((int)puVar11 + -0x54) = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),*(undefined4 *)((int)puVar11 + -0x54));
    uVar16 = CONCAT44(*(undefined4 *)((int)puVar11 + -0x50),SUB84(dVar15,0));
  }
  else {
    uVar16 = *(undefined8 *)((int)puVar11 + -0x50);
  }
  (*(code *)PTR_FUN_8c017928)(uVar13,uVar16,*(undefined4 *)(param_4 + 0x58));
                    /* WARNING: Read-only address (ram,0x8c017ae4) is written */
                    /* WARNING: Read-only address (ram,0x8c017bf0) is written */
  return;
}

