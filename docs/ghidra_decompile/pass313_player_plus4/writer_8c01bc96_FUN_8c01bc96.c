// entry: 8c01bc96
// name: FUN_8c01bc96


/* WARNING: Removing unreachable block (ram,0x8c01c0c4) */
/* WARNING: Removing unreachable block (ram,0x8c01c06c) */
/* WARNING: Removing unreachable block (ram,0x8c01c014) */
/* WARNING: Removing unreachable block (ram,0x8c01bfc6) */
/* WARNING: Removing unreachable block (ram,0x8c01bf24) */
/* WARNING: Removing unreachable block (ram,0x8c01bdcc) */
/* WARNING: Removing unreachable block (ram,0x8c01bdda) */
/* WARNING: Removing unreachable block (ram,0x8c01bfd4) */
/* WARNING: Removing unreachable block (ram,0x8c01bfde) */
/* WARNING: Removing unreachable block (ram,0x8c01bfda) */
/* WARNING: Removing unreachable block (ram,0x8c01c00a) */
/* WARNING: Removing unreachable block (ram,0x8c01c000) */
/* WARNING: Removing unreachable block (ram,0x8c01c09a) */
/* WARNING: Removing unreachable block (ram,0x8c01c0da) */

void FUN_8c01bc96(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 extraout_fr1;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar23;
  undefined8 in_dr14;
  float fVar24;
  double in_xd4;
  double in_xd6;
  double dVar25;
  double in_xd8;
  double dVar26;
  bool bVar27;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  undefined4 uVar22;
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar12 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar12 + -4) = in_PR;
  iVar9 = (int)DAT_8c01bd3a;
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(*(undefined4 *)(DAT_8c01bd44 + 0x34),param_1);
  }
  else {
    dVar15 = *(double *)(DAT_8c01bd44 + 0x34);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),(int)in_dr14);
  }
  iVar11 = *(int *)((int)DAT_8c01bd3e + *(int *)(DAT_8c01bd3c + param_3));
  uVar2 = *(ushort *)(param_3 + 0x54);
  iVar5 = *(int *)(param_3 + 0x58);
  if (in_FPSCR_SZ == '\0') {
    uVar22 = *(undefined4 *)(iVar5 + 0x50);
    uVar21 = *(undefined8 *)(iVar5 + 0x4c);
    uVar17 = CONCAT44(*(undefined4 *)(iVar5 + 0x54),param_2);
    *(undefined4 *)((int)puVar12 + -0x68) = *(undefined4 *)(iVar5 + 0x4c);
    *(undefined4 *)((int)puVar12 + -100) = uVar22;
  }
  else {
    in_xd8 = *(double *)(iVar5 + 0x4c);
    uVar21 = *(undefined8 *)(iVar5 + 0x50);
    uVar17 = *(undefined8 *)(iVar5 + 0x54);
    *(double *)((int)puVar12 + -0x68) = in_xd8;
    *(undefined8 *)((int)puVar12 + -100) = uVar21;
  }
  uVar22 = (undefined4)uVar21;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar12 + -0x60) = (int)((ulonglong)uVar17 >> 0x20);
  }
  else {
    *(undefined8 *)((int)puVar12 + -0x60) = uVar17;
  }
  *(undefined4 *)((int)puVar12 + -0x5c) = *(undefined4 *)((int)puVar12 + -0x68);
  *(undefined4 *)((int)puVar12 + -0x58) = *(undefined4 *)((int)puVar12 + -100);
  *(undefined4 *)((int)puVar12 + -0x54) = *(undefined4 *)((int)puVar12 + -0x60);
  piVar6 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c01bd40);
  (*(code *)piVar6[2])(param_3 + *piVar6);
  uVar10 = (undefined4)uVar17;
  iVar5 = (int)DAT_8c01bd42;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)(iVar5 + param_3),extraout_fr1);
  }
  else {
    dVar13 = *(double *)(iVar5 + param_3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) +
                              (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 + dVar15;
  }
  fVar14 = (float)((ulonglong)dVar13 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(float *)(iVar5 + param_3) = fVar14;
    dVar26 = (double)CONCAT44(DAT_8c01bd48,uVar22);
  }
  else {
    *(double *)(iVar5 + param_3) = dVar13;
    dVar26 = (double)CONCAT44(DAT_8c01bd4c,DAT_8c01bd48);
  }
  if (in_FPSCR_PR == '\0') {
    bVar27 = fVar14 < (float)((ulonglong)dVar26 >> 0x20);
  }
  else {
    bVar27 = dVar13 < dVar26;
  }
  if (bVar27) {
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(DAT_8c01bd4c,DAT_8c01bd50);
    }
    else {
      uVar17 = CONCAT44(DAT_8c01bd50,DAT_8c01bd4c);
    }
    if (in_FPSCR_PR == '\0') {
      uVar17 = CONCAT44(fVar14 * (float)uVar17 + (float)((ulonglong)uVar17 >> 0x20),(float)uVar17);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar12 + -0x58) = (int)((ulonglong)uVar17 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar12 + -0x58) = uVar17;
    }
    goto LAB_8c01bd16;
  }
  dVar15 = (double)((ulonglong)dVar15 & 0xffffffff);
  *(undefined1 *)(iVar11 + iVar9 * (uint)uVar2 + 0x19) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar12 + -0x50) = 0;
    *(undefined4 *)((int)puVar12 + -0x4c) = 0;
    *(undefined4 *)((int)puVar12 + -0x48) = 0;
  }
  else {
    *(double *)((int)puVar12 + -0x50) = dVar15;
    *(double *)((int)puVar12 + -0x4c) = dVar15;
    *(double *)((int)puVar12 + -0x48) = dVar15;
  }
  if (in_FPSCR_SZ == '\0') {
    fVar14 = *(float *)((int)puVar12 + -0x4c);
  }
  else {
    in_xd4 = *(double *)((int)puVar12 + -0x4c);
    fVar14 = (float)*(undefined8 *)((int)puVar12 + -0x50);
    uVar10 = (undefined4)*(undefined8 *)((int)puVar12 + -0x48);
  }
  (*(code *)PTR_FUN_8c01befc)(*(undefined4 *)(param_3 + 0x58));
  uVar7 = *(uint *)(param_3 + 0x2c);
  fVar24 = (float)((ulonglong)dVar15 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c01beea + param_3) = fVar24;
  }
  else {
    *(double *)(DAT_8c01beea + param_3) = dVar15;
  }
  uVar8 = (uint)DAT_8c01beee;
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c01beec + param_3) = fVar24;
  }
  else {
    *(double *)(DAT_8c01beec + param_3) = dVar15;
  }
  iVar9 = (int)DAT_8c01beea;
  uVar7 = uVar7 | uVar8;
  *(uint *)(param_3 + 0x2c) = uVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)(iVar9 + param_3),SUB84(dVar26,0));
  }
  else {
    dVar13 = *(double *)(iVar9 + param_3);
  }
  fVar23 = (float)((ulonglong)dVar13 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar27 = fVar24 == fVar23;
  }
  else {
    bVar27 = dVar15 == dVar13;
  }
  dVar26 = dVar15;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(fVar23,fVar24);
    dVar26 = in_xd8;
  }
  if ((uVar7 & uVar8) != 0 || !bVar27) {
    iVar9 = *(int *)(param_3 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44(*(undefined4 *)(DAT_8c01beec + param_3),uVar10);
    }
    else {
      dVar18 = *(double *)(DAT_8c01beec + param_3);
    }
    if (in_FPSCR_SZ == '\0') {
      fVar14 = *(float *)(DAT_8c01beea + param_3);
    }
    else {
      in_xd4 = *(double *)(DAT_8c01beea + param_3);
    }
    uVar10 = *(undefined4 *)(iVar9 + 0x58);
    fVar23 = (float)((ulonglong)dVar18 >> 0x20);
    *(undefined4 *)((int)puVar12 + -0x40) = *(undefined4 *)(iVar9 + 0x5c);
    uVar22 = *(undefined4 *)(iVar9 + 0x60);
    *(undefined4 *)((int)puVar12 + -0x44) = uVar10;
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar12 + -0x20) = fVar14;
    }
    else {
      *(double *)((int)puVar12 + -0x20) = in_xd4;
    }
    *(undefined4 *)((int)puVar12 + -0x3c) = uVar22;
    if (fVar23 != fVar14) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),fVar23);
        *(float *)((int)puVar12 + -0x1c) = fVar23;
        dVar16 = (double)CONCAT44(fVar14,fVar14);
      }
      else {
        *(double *)((int)puVar12 + -0x1c) = dVar18;
        dVar16 = in_xd4;
        dVar26 = dVar18;
      }
      fVar20 = SUB84(dVar13,0);
      if (fVar14 == fVar24) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44((undefined4)DAT_8c01bf00,fVar20);
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c01bf00._4_4_,(undefined4)DAT_8c01bf00);
        }
        if (in_FPSCR_PR == '\0') {
          bVar27 = fVar23 < (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          bVar27 = dVar18 < dVar13;
        }
        if (!bVar27) {
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(DAT_8c01bf00._4_4_,SUB84(dVar16,0));
          }
          else {
            dVar16 = (double)CONCAT44(PTR_DAT_8c01bf08,DAT_8c01bf00._4_4_);
          }
        }
      }
      else if (fVar20 == fVar24) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44((undefined4)DAT_8c01c05c,fVar20);
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c01c05c._4_4_,(undefined4)DAT_8c01c05c);
        }
        fVar14 = (float)((ulonglong)dVar13 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar27 = SUB84(dVar16,0) < fVar14;
        }
        else {
          bVar27 = dVar16 < dVar13;
        }
        if (!bVar27) {
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(fVar14,DAT_8c01c05c._4_4_);
          }
          else {
            dVar26 = (double)CONCAT44(uRam8c01c064,DAT_8c01c05c._4_4_);
          }
        }
      }
      uVar22 = *(undefined4 *)(PTR_DAT_8c01bf08 + 4);
      *(undefined4 *)((int)puVar12 + -0x38) = *(undefined4 *)PTR_DAT_8c01bf08;
      *(undefined4 *)((int)puVar12 + -0x34) = uVar22;
      uVar22 = *(undefined4 *)(PTR_DAT_8c01bf08 + 0xc);
      *(undefined4 *)((int)puVar12 + -0x30) = *(undefined4 *)(PTR_DAT_8c01bf08 + 8);
      *(undefined4 *)((int)puVar12 + -0x2c) = uVar22;
      uVar22 = *(undefined4 *)(PTR_DAT_8c01bf08 + 0x14);
      *(undefined4 *)((int)puVar12 + -0x28) = *(undefined4 *)(PTR_DAT_8c01bf08 + 0x10);
      iVar9 = *(int *)(DAT_8c01bef0 + param_3);
      *(undefined4 *)((int)puVar12 + -0x24) = uVar22;
      uVar7 = (uint)*(ushort *)(param_3 + 0x54);
      if ((*(uint *)(param_3 + 0x2c) & (int)DAT_8c01bef6) == 0) {
        cVar1 = *(char *)(*(int *)(DAT_8c01bef2 + iVar9) + (int)DAT_8c01bef4 * uVar7 + 0x18);
        if (cVar1 == '\x01') {
          iVar9 = 5;
        }
        else if (cVar1 == '\x02') {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(DAT_8c01c054 + param_3);
          *(uint *)((int)puVar12 + -8) = uVar7;
          iVar9 = iVar9 + DAT_8c01c056;
          if (((*(short *)(iVar9 + uVar7 * 0x1e + 0x18) == 0) &&
              (*(short *)(iVar9 + DAT_8c01c058 + *(int *)((int)puVar12 + -8) * 0x1e + 0x18) == 0))
             && (*(short *)(iVar9 + DAT_8c01c05a + *(int *)((int)puVar12 + -8) * 0x1e + 0x18) == 0))
          {
            bVar27 = false;
          }
          else {
            bVar27 = true;
          }
          if (bVar27) {
            *(int *)((int)puVar12 + -0x18) =
                 (int)*(short *)(iVar9 + DAT_8c01c224 + uVar7 * 0x1e + 4);
            iVar9 = *(int *)((int)puVar12 + -0x18) +
                    (int)*(short *)(iVar9 + DAT_8c01c05a + uVar7 * 0x1e + 4);
            *(int *)((int)puVar12 + -0x18) = iVar9;
          }
          else {
            *(int *)((int)puVar12 + -0x14) = iVar9 + DAT_8c01c19c;
            *(int *)((int)puVar12 + -0x10) = iVar9 + DAT_8c01c19e;
            sVar3 = *(short *)(iVar9 + uVar7 * 0x1e + 4);
            iVar9 = *(int *)((int)puVar12 + -0x14);
            *(uint *)((int)puVar12 + -0x14) = iVar9 + uVar7 * 0x1e;
            sVar4 = *(short *)(iVar9 + uVar7 * 0x1e + 4);
            iVar9 = *(int *)((int)puVar12 + -0x10);
            *(uint *)((int)puVar12 + -0x10) = iVar9 + uVar7 * 0x1e;
            iVar9 = (int)sVar3 + (int)sVar4 + (int)*(short *)(iVar9 + uVar7 * 0x1e + 4);
          }
          if (4 < iVar9) {
            iVar9 = 4;
          }
        }
      }
      else {
        iVar9 = *(int *)(DAT_8c01bef8 + param_3);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar12 + iVar9 * 4 + -0x38),DAT_8c01bf0c);
      }
      else {
        dVar18 = *(double *)((int)puVar12 + iVar9 * 4 + -0x38);
        in_xd6 = (double)CONCAT44(DAT_8c01bf10,DAT_8c01bf0c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = SUB84(dVar13,0) - (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar13 - dVar16,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar22 = SUB84(dVar18,0);
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),*(undefined4 *)DAT_8c01bf10);
        dVar25 = in_xd6;
        in_xd6 = (double)CONCAT44(uVar22,fVar14);
      }
      else {
        dVar25 = *DAT_8c01bf10;
      }
      if (in_FPSCR_PR == '\0') {
        iVar9 = (int)SUB84(in_xd6,0);
        fVar14 = (float)((ulonglong)in_xd6 >> 0x20) / SUB84(dVar18,0);
        in_xd6 = (double)CONCAT44(fVar14,SUB84(in_xd6,0));
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) * fVar14,SUB84(dVar18,0));
      }
      else {
        iVar9 = (int)in_xd6;
        in_xd6 = in_xd6 / dVar18;
        dVar18 = dVar18 * in_xd6;
      }
      uVar22 = SUB84(in_xd6,0);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0xc) = (int)((ulonglong)dVar18 >> 0x20);
      }
      else {
        *(double *)((int)puVar12 + -0xc) = dVar18;
      }
      iVar9 = (*(code *)PTR__abs_8c01bf14)(iVar9);
      fVar14 = SUB84(dVar16,0);
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)iVar9,uVar22);
      }
      else {
        dVar13 = (double)iVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)((int)puVar12 + -0xc),SUB84(dVar18,0));
      }
      else {
        dVar18 = *(double *)((int)puVar12 + -0xc);
      }
      fVar24 = (float)((ulonglong)dVar18 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar27 = fVar24 < (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        bVar27 = dVar18 < dVar13;
      }
      fVar23 = (float)((ulonglong)dVar15 >> 0x20);
      if (bVar27) {
        if (in_FPSCR_SZ == '\0') {
          fVar14 = *(float *)((int)puVar12 + -0x20);
          dVar13 = (double)CONCAT44(DAT_8c01c1a0,SUB84(dVar13,0));
        }
        else {
          in_xd4 = *(double *)((int)puVar12 + -0x20);
          dVar13 = (double)CONCAT44(DAT_8c01c1a4,DAT_8c01c1a0);
        }
        fVar20 = (float)((ulonglong)dVar13 >> 0x20);
        if (fVar14 == fVar20) {
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44(fVar24,*(undefined4 *)((int)puVar12 + -0x1c));
          }
          else {
            dVar25 = *(double *)((int)puVar12 + -0x1c);
          }
          fVar24 = SUB84(dVar18,0);
          if (in_FPSCR_PR == '\0') {
            bVar27 = fVar24 < fVar23;
          }
          else {
            bVar27 = dVar18 < dVar15;
          }
          fVar19 = (float)((ulonglong)dVar18 >> 0x20);
          if (bVar27) {
LAB_8c01c080:
            if (in_FPSCR_PR == '\0') {
              bVar27 = (float)((ulonglong)dVar13 >> 0x20) < fVar24;
            }
            else {
              bVar27 = dVar13 < dVar18;
            }
            if (bVar27) {
              if (in_FPSCR_SZ == '\0') {
                dVar13 = (double)CONCAT44(DAT_8c01c1a8,SUB84(dVar13,0));
              }
              else {
                dVar13 = (double)CONCAT44(DAT_8c01c1ac,DAT_8c01c1a8);
              }
              if (in_FPSCR_PR == '\0') {
                bVar27 = fVar24 < (float)((ulonglong)dVar13 >> 0x20);
              }
              else {
                bVar27 = dVar18 < dVar13;
              }
              if (bVar27) goto LAB_8c01c08c;
            }
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44(fVar19,fVar24 + fVar19);
            }
            else {
              dVar18 = dVar18 + dVar18;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar12 + -0x1c) = SUB84(dVar18,0);
            }
            else {
              *(double *)((int)puVar12 + -0x1c) = dVar25;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar13 = (double)CONCAT44(fVar20,DAT_8c01c1a4);
            }
            else {
              dVar26 = (double)CONCAT44(DAT_8c01c1a8,DAT_8c01c1a4);
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar24 < SUB84(dVar13,0);
            }
            else {
              bVar27 = dVar18 < dVar13;
            }
            if (!bVar27) goto LAB_8c01c080;
LAB_8c01c08c:
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44(fVar19,fVar24 - fVar19);
            }
            else {
              dVar18 = dVar18 - dVar18;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar12 + -0x1c) = SUB84(dVar18,0);
            }
            else {
              *(double *)((int)puVar12 + -0x1c) = dVar25;
            }
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(fVar20,DAT_8c01c1a4);
          }
          else {
            dVar26 = (double)CONCAT44(DAT_8c01c1a8,DAT_8c01c1a4);
          }
          fVar20 = SUB84(dVar13,0);
          if (fVar14 != fVar20) {
            if (in_FPSCR_SZ == '\0') {
              dVar13 = (double)CONCAT44(DAT_8c01c1ac,fVar20);
            }
            else {
              dVar13 = (double)CONCAT44(uRam8c01c1b0,DAT_8c01c1ac);
            }
            fVar20 = (float)((ulonglong)dVar13 >> 0x20);
            if (fVar14 == fVar20) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(fVar24,*(undefined4 *)((int)puVar12 + -0x1c));
              }
              else {
                dVar25 = *(double *)((int)puVar12 + -0x1c);
              }
              fVar24 = SUB84(dVar18,0);
              if (in_FPSCR_PR == '\0') {
                bVar27 = fVar24 < fVar20;
              }
              else {
                bVar27 = dVar18 < dVar13;
              }
              fVar20 = (float)((ulonglong)dVar18 >> 0x20);
              if (bVar27) {
                if (in_FPSCR_PR == '\0') {
                  dVar18 = (double)CONCAT44(fVar20,fVar24 + fVar20);
                }
                else {
                  dVar18 = dVar18 + dVar18;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)((int)puVar12 + -0x1c) = SUB84(dVar18,0);
                }
                else {
                  *(double *)((int)puVar12 + -0x1c) = dVar25;
                }
              }
              else {
                if (in_FPSCR_PR == '\0') {
                  dVar18 = (double)CONCAT44(fVar20,fVar24 - fVar20);
                }
                else {
                  dVar18 = dVar18 - dVar18;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)((int)puVar12 + -0x1c) = SUB84(dVar18,0);
                }
                else {
                  *(double *)((int)puVar12 + -0x1c) = dVar25;
                }
              }
            }
            else if (fVar14 == fVar23) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(fVar24,*(undefined4 *)((int)puVar12 + -0x1c));
              }
              else {
                dVar25 = *(double *)((int)puVar12 + -0x1c);
              }
              fVar24 = SUB84(dVar18,0);
              if (in_FPSCR_PR == '\0') {
                bVar27 = fVar24 < fVar20;
              }
              else {
                bVar27 = dVar18 < dVar13;
              }
              fVar20 = (float)((ulonglong)dVar18 >> 0x20);
              if (bVar27) {
                if (in_FPSCR_PR == '\0') {
                  dVar18 = (double)CONCAT44(fVar20,fVar24 - fVar20);
                }
                else {
                  dVar18 = dVar18 - dVar18;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)((int)puVar12 + -0x1c) = SUB84(dVar18,0);
                }
                else {
                  *(double *)((int)puVar12 + -0x1c) = dVar25;
                }
              }
              else {
                if (in_FPSCR_PR == '\0') {
                  dVar18 = (double)CONCAT44(fVar20,fVar24 + fVar20);
                }
                else {
                  dVar18 = dVar18 + dVar18;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)((int)puVar12 + -0x1c) = SUB84(dVar18,0);
                }
                else {
                  *(double *)((int)puVar12 + -0x1c) = dVar25;
                }
              }
            }
            goto LAB_8c01be80;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44(fVar24,*(undefined4 *)((int)puVar12 + -0x1c));
          }
          else {
            dVar25 = *(double *)((int)puVar12 + -0x1c);
          }
          fVar24 = SUB84(dVar18,0);
          if (in_FPSCR_PR == '\0') {
            bVar27 = fVar24 < fVar23;
          }
          else {
            bVar27 = dVar18 < dVar15;
          }
          fVar19 = (float)((ulonglong)dVar18 >> 0x20);
          if (bVar27) {
LAB_8c01c0aa:
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar24 < (float)((ulonglong)dVar13 >> 0x20);
            }
            else {
              bVar27 = dVar18 < dVar13;
            }
            if (!bVar27) {
              if (in_FPSCR_SZ == '\0') {
                dVar13 = (double)CONCAT44(DAT_8c01c1a8,fVar20);
              }
              else {
                dVar13 = (double)CONCAT44(DAT_8c01c1ac,DAT_8c01c1a8);
              }
              if (in_FPSCR_PR == '\0') {
                bVar27 = fVar24 < (float)((ulonglong)dVar13 >> 0x20);
              }
              else {
                bVar27 = dVar18 < dVar13;
              }
              if (bVar27) goto LAB_8c01c0b6;
            }
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44(fVar19,fVar24 - fVar19);
            }
            else {
              dVar18 = dVar18 - dVar18;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar12 + -0x1c) = SUB84(dVar18,0);
            }
            else {
              *(double *)((int)puVar12 + -0x1c) = dVar25;
            }
          }
          else {
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar24 < fVar20;
            }
            else {
              bVar27 = dVar18 < dVar13;
            }
            if (!bVar27) goto LAB_8c01c0aa;
LAB_8c01c0b6:
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44(fVar19,fVar24 + fVar19);
            }
            else {
              dVar18 = dVar18 + dVar18;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar12 + -0x1c) = SUB84(dVar18,0);
            }
            else {
              *(double *)((int)puVar12 + -0x1c) = dVar25;
            }
          }
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        fVar14 = *(float *)((int)puVar12 + -0x20);
        *(float *)((int)puVar12 + -0x1c) = fVar14;
      }
      else {
        in_xd4 = *(double *)((int)puVar12 + -0x20);
        *(double *)((int)puVar12 + -0x1c) = in_xd4;
      }
LAB_8c01be80:
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                  *(undefined4 *)((int)puVar12 + -0x1c));
        dVar13 = (double)CONCAT44(DAT_8c01bf00._4_4_,SUB84(dVar13,0));
      }
      else {
        dVar25 = *(double *)((int)puVar12 + -0x1c);
        dVar13 = (double)CONCAT44(PTR_DAT_8c01bf08,DAT_8c01bf00._4_4_);
      }
      fVar24 = SUB84(dVar18,0);
      fVar20 = (float)((ulonglong)dVar13 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar27 = fVar24 < fVar20;
      }
      else {
        bVar27 = dVar18 < dVar13;
      }
      if (bVar27) {
        if (in_FPSCR_PR == '\0') {
          bVar27 = fVar24 < fVar23;
        }
        else {
          bVar27 = dVar18 < dVar15;
        }
        if (bVar27) {
          if (in_FPSCR_PR == '\0') {
            dVar18 = (double)(ulonglong)(uint)(fVar24 + fVar20);
          }
          else {
            dVar18 = dVar18 + dVar13;
          }
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(DAT_8c01bf18,SUB84(dVar13,0));
        }
        else {
          dVar13 = (double)CONCAT44(PTR_FUN_8c01bf1c,DAT_8c01bf18);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)(ulonglong)(uint)(fVar24 + (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          dVar18 = dVar18 + dVar13;
        }
      }
      uVar7 = *(uint *)(param_3 + 0x2c);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c01beea + param_3) = SUB84(dVar18,0);
      }
      else {
        *(double *)(DAT_8c01beea + param_3) = dVar25;
      }
      uVar8 = (uint)DAT_8c01beee;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c01beec + param_3) = SUB84(dVar18,0);
      }
      else {
        *(double *)(DAT_8c01beec + param_3) = dVar25;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(DAT_8c01beea + param_3) = fVar14;
      }
      else {
        *(double *)(DAT_8c01beea + param_3) = in_xd4;
      }
      iVar9 = (int)DAT_8c01beec;
      *(uint *)(param_3 + 0x2c) = uVar7 | uVar8 | uVar8;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)(ulonglong)*(uint *)(iVar9 + param_3);
      }
      else {
        dVar26 = *(double *)(iVar9 + param_3);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x44),fVar14);
      *(int *)((int)puVar12 + -0x40) = SUB84(dVar13,0);
    }
    else {
      uVar17 = *(undefined8 *)((int)puVar12 + -0x44);
      *(double *)((int)puVar12 + -0x40) = dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44((int)((ulonglong)uVar17 >> 0x20),*(undefined4 *)((int)puVar12 + -0x40));
      uVar21 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x3c),SUB84(dVar18,0));
    }
    else {
      uVar21 = *(undefined8 *)((int)puVar12 + -0x3c);
    }
    (*(code *)PTR_FUN_8c01befc)(uVar17,uVar21,*(undefined4 *)(param_3 + 0x58));
    fVar14 = (float)uVar17;
    uVar10 = (undefined4)uVar21;
  }
  *(undefined1 *)(DAT_8c01befa + param_3) = 0;
  uVar22 = (undefined4)((ulonglong)dVar15 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar12 + -0x58) = uVar22;
    dVar15 = (double)CONCAT44(uVar22,fVar14);
  }
  else {
    *(double *)((int)puVar12 + -0x58) = dVar15;
  }
  (*(code *)PTR_FUN_8c01bf1c)(dVar15,param_3 + 0x10,0);
  (*(code *)PTR_FUN_8c01bf20)(*(undefined4 *)(param_3 + 0x58),0);
LAB_8c01bd16:
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x5c),*(undefined4 *)((int)puVar12 + -0x58));
    uVar21 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x54),uVar10);
  }
  else {
    uVar17 = *(undefined8 *)((int)puVar12 + -0x5c);
    uVar21 = *(undefined8 *)((int)puVar12 + -0x54);
  }
  (*(code *)PTR_FUN_8c01bd54)(uVar17,uVar21,*(undefined4 *)(param_3 + 0x58));
  return;
}

