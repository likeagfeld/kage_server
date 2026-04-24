// entry: 8c089b84
// name: FUN_8c089b84
// signature: undefined FUN_8c089b84(void)


/* WARNING: Removing unreachable block (ram,0x8c089c24) */

void FUN_8c089b84(ulonglong param_1,double param_2,uint *param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  short *psVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  ulonglong in_dr12;
  double dVar17;
  double in_dr14;
  double dVar18;
  undefined8 in_xd8;
  double in_xd14;
  bool bVar19;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_3c [16];
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)(in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr12;
    puVar13 = auStack_2c;
  }
  else {
    puVar13 = local_3c;
    uStack_24 = in_dr12;
  }
  *(undefined4 *)(puVar13 + -4) = in_PR;
  sVar2 = *(short *)(param_4 + 0x3c);
  *(int *)(puVar13 + -0x1c) = param_4;
  iVar11 = 0;
  *(short **)(puVar13 + -0x18) = (short *)(param_4 + 0x3c);
  if (sVar2 != 0) {
    iVar9 = *(int *)((int)DAT_8c089c78 + *(int *)(puVar13 + -0x18));
    psVar12 = (short *)(*(int *)(puVar13 + -0x18) + (int)DAT_8c089c7a);
    if (0 < iVar9) {
      if (in_FPSCR_SZ == '\0') {
        in_dr12 = (ulonglong)(uint)DAT_8c089c8c;
        in_dr14 = (double)(ulonglong)DAT_8c089c8c._4_4_;
      }
      else {
        in_xd14 = (double)CONCAT44(DAT_8c089c94,DAT_8c089c8c._4_4_);
      }
      *(undefined4 *)(puVar13 + -0x14) = *(undefined4 *)(puVar13 + -0x18);
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c089c94,(int)in_dr12);
      }
      else {
        dVar17 = (double)CONCAT44(0xc80260a2,DAT_8c089c94);
      }
      do {
        if (*psVar12 == 1) {
          uVar15 = SUB84(param_2,0);
          if ((*param_3 & 2) == 0) {
            param_2 = dVar17;
            if (in_FPSCR_SZ == '\0') {
              param_2 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar15);
            }
          }
          else {
            param_2 = in_xd14;
            if (in_FPSCR_SZ == '\0') {
              param_2 = (double)CONCAT44(SUB84(in_dr14,0),uVar15);
            }
          }
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44(param_3[6],*(undefined4 *)(psVar12 + 4));
          }
          else {
            dVar18 = *(double *)(param_3 + 6);
            in_xd8 = *(undefined8 *)(psVar12 + 4);
          }
          if (in_FPSCR_PR == '\0') {
            bVar19 = (float)((ulonglong)param_2 >> 0x20) <
                     (float)((ulonglong)dVar18 >> 0x20) - SUB84(dVar18,0);
          }
          else {
            bVar19 = param_2 < dVar18 - dVar18;
          }
          if (bVar19) {
            *psVar12 = 2;
          }
          iVar11 = iVar11 + 1;
        }
        else if (*psVar12 == 2) {
          iVar9 = *(int *)(psVar12 + 2);
          bVar19 = false;
          if ((*(char *)(iVar9 + 8) == '\t') &&
             (uVar5 = (*(code *)PTR_FUN_8c089c7c)(),
             uVar5 == *(ushort *)(*(int *)(puVar13 + -0x1c) + 4))) {
            bVar19 = true;
          }
          uVar15 = SUB84(in_dr14,0);
          iVar6 = (int)psVar12[1];
          if (iVar6 < (int)(*(ushort *)(*(int *)(puVar13 + -0x14) + 2) - 1)) {
            *(int *)(puVar13 + -0x10) = *(int *)(puVar13 + -0x14) + 4;
            if (*(char *)(*(int *)(puVar13 + -0x14) + 4 + iVar6 * 4 + 3) == '\0') {
              *(int *)(puVar13 + -0xc) = iVar6 + 1;
            }
            else {
              *(uint *)(puVar13 + -0xc) =
                   iVar6 + (uint)*(byte *)(*(int *)(puVar13 + -0x10) + iVar6 * 4 + 3);
            }
            if (in_FPSCR_SZ == '\0') {
              uVar14 = CONCAT44(*(undefined4 *)(psVar12 + 6),(int)param_1);
            }
            else {
              uVar14 = *(undefined8 *)(psVar12 + 6);
            }
            if (in_FPSCR_SZ == '\0') {
              uVar14 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),*(undefined4 *)(psVar12 + 8));
            }
            *(undefined2 *)(puVar13 + -0x34) =
                 *(undefined2 *)(*(int *)(puVar13 + -0x10) + *(int *)(puVar13 + -0xc) * 4);
            uVar5 = param_3[2];
            *(undefined1 **)(puVar13 + -8) = puVar13 + -0x34;
            puVar13[-0x34] = (puVar13[-0x34] & (byte)DAT_8c089e46 | 0x10) & (byte)DAT_8c089e48 | 8;
            pbVar10 = puVar13 + -0x30;
            (*(code *)PTR_FUN_8c089e4c)(uVar14,uVar5,puVar13 + -0x30,0);
            if (in_FPSCR_SZ == '\0') {
              dVar18 = (double)CONCAT44(param_3[7],uVar15);
            }
            else {
              dVar18 = *(double *)(param_3 + 7);
            }
            iVar6 = 0;
            (*(code *)PTR_FUN_8c089e50)(param_3[2],pbVar10,puVar13 + -0x2c,puVar13 + -0x28);
            if (in_FPSCR_PR == '\0') {
              in_dr14 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) * SUB84(dVar17,0),
                                         SUB84(dVar18,0));
            }
            else {
              in_dr14 = dVar18 * dVar17;
            }
            (*(code *)PTR_FUN_8c089e50)(param_3[2],puVar13 + -0x34,puVar13 + -0x24,puVar13 + -0x20);
            bVar1 = *pbVar10;
            if ((bVar1 & 0x10) == 0) {
              if (in_FPSCR_SZ == '\0') {
                uVar14 = CONCAT44(*(undefined4 *)(puVar13 + -0x24),*(undefined4 *)(puVar13 + -0x2c))
                ;
              }
              else {
                uVar14 = *(undefined8 *)(puVar13 + -0x24);
                in_xd8 = *(undefined8 *)(puVar13 + -0x2c);
              }
              fVar16 = (float)((ulonglong)uVar14 >> 0x20);
              if (in_FPSCR_PR == '\0' && (float)uVar14 < fVar16) {
                iVar6 = 2;
              }
              else if (in_FPSCR_PR != '\0' || (float)uVar14 <= fVar16) {
                if ((bVar1 & 0xf) == 8) {
                  if (in_FPSCR_SZ == '\0') {
                    uVar14 = CONCAT44(*(undefined4 *)(puVar13 + -0x28),
                                      *(undefined4 *)(puVar13 + -0x20));
                  }
                  else {
                    in_xd8 = *(undefined8 *)(puVar13 + -0x20);
                    uVar14 = *(undefined8 *)(puVar13 + -0x28);
                  }
                  fVar16 = (float)((ulonglong)uVar14 >> 0x20);
                  if (in_FPSCR_PR != '\0' || (float)uVar14 <= fVar16) {
                    if (in_FPSCR_PR == '\0' && (float)uVar14 < fVar16) {
                      iVar6 = 4;
                    }
                  }
                  else {
                    iVar6 = 8;
                  }
                }
              }
              else {
                iVar6 = 1;
              }
            }
            else {
              if (in_FPSCR_SZ == '\0') {
                uVar14 = CONCAT44(*(undefined4 *)(puVar13 + -0x20),*(undefined4 *)(puVar13 + -0x28))
                ;
              }
              else {
                uVar14 = *(undefined8 *)(puVar13 + -0x20);
                in_xd8 = *(undefined8 *)(puVar13 + -0x28);
              }
              fVar16 = (float)((ulonglong)uVar14 >> 0x20);
              if (in_FPSCR_PR != '\0' || fVar16 <= (float)uVar14) {
                if (in_FPSCR_PR != '\0' || (float)uVar14 <= fVar16) {
                  if ((bVar1 & 0xf) == 8) {
                    if (in_FPSCR_SZ == '\0') {
                      uVar14 = CONCAT44(*(undefined4 *)(puVar13 + -0x24),
                                        *(undefined4 *)(puVar13 + -0x2c));
                    }
                    else {
                      uVar14 = *(undefined8 *)(puVar13 + -0x24);
                      in_xd8 = *(undefined8 *)(puVar13 + -0x2c);
                    }
                    fVar16 = (float)((ulonglong)uVar14 >> 0x20);
                    if (in_FPSCR_PR != '\0' || fVar16 <= (float)uVar14) {
                      if (in_FPSCR_PR == '\0' && fVar16 < (float)uVar14) {
                        iVar6 = 1;
                      }
                    }
                    else {
                      iVar6 = 2;
                    }
                  }
                }
                else {
                  iVar6 = 4;
                }
              }
              else {
                iVar6 = 8;
              }
            }
            uVar15 = (undefined4)uVar14;
            fVar16 = (float)((ulonglong)in_dr14 >> 0x20);
            if (iVar6 == 1) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0x2c),uVar15);
              }
              else {
                dVar18 = *(double *)(puVar13 + -0x2c);
              }
              if (in_FPSCR_PR == '\0') {
                dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) - fVar16,
                                          SUB84(dVar18,0));
              }
              else {
                dVar18 = dVar18 - in_dr14;
              }
              uVar15 = (undefined4)((ulonglong)dVar18 >> 0x20);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(puVar13 + -0x2c) = uVar15;
                dVar18 = (double)CONCAT44(uVar15,*(undefined4 *)(puVar13 + -0x24));
              }
              else {
                *(double *)(puVar13 + -0x2c) = dVar18;
                in_xd8 = *(undefined8 *)(puVar13 + -0x24);
              }
              if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar18 >> 0x20) < SUB84(dVar18,0)) {
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(puVar13 + -0x2c) = SUB84(dVar18,0);
                }
                else {
                  *(undefined8 *)(puVar13 + -0x2c) = in_xd8;
                }
              }
            }
            else if (iVar6 == 2) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0x2c),uVar15);
              }
              else {
                dVar18 = *(double *)(puVar13 + -0x2c);
              }
              if (in_FPSCR_PR == '\0') {
                dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + fVar16,
                                          SUB84(dVar18,0));
              }
              else {
                dVar18 = dVar18 + in_dr14;
              }
              uVar15 = (undefined4)((ulonglong)dVar18 >> 0x20);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(puVar13 + -0x2c) = uVar15;
                dVar18 = (double)CONCAT44(uVar15,*(undefined4 *)(puVar13 + -0x24));
              }
              else {
                *(double *)(puVar13 + -0x2c) = dVar18;
                in_xd8 = *(undefined8 *)(puVar13 + -0x24);
              }
              if (in_FPSCR_PR == '\0' && SUB84(dVar18,0) < (float)((ulonglong)dVar18 >> 0x20)) {
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(puVar13 + -0x2c) = SUB84(dVar18,0);
                }
                else {
                  *(undefined8 *)(puVar13 + -0x2c) = in_xd8;
                }
              }
            }
            else if (iVar6 == 4) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0x28),uVar15);
              }
              else {
                dVar18 = *(double *)(puVar13 + -0x28);
              }
              if (in_FPSCR_PR == '\0') {
                dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) - fVar16,
                                          SUB84(dVar18,0));
              }
              else {
                dVar18 = dVar18 - in_dr14;
              }
              uVar15 = (undefined4)((ulonglong)dVar18 >> 0x20);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(puVar13 + -0x28) = uVar15;
                dVar18 = (double)CONCAT44(uVar15,*(undefined4 *)(puVar13 + -0x20));
              }
              else {
                *(double *)(puVar13 + -0x28) = dVar18;
                in_xd8 = *(undefined8 *)(puVar13 + -0x20);
              }
              if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar18 >> 0x20) < SUB84(dVar18,0)) {
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(puVar13 + -0x28) = SUB84(dVar18,0);
                }
                else {
                  *(undefined8 *)(puVar13 + -0x28) = in_xd8;
                }
              }
            }
            else if (iVar6 == 8) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0x28),uVar15);
              }
              else {
                dVar18 = *(double *)(puVar13 + -0x28);
              }
              if (in_FPSCR_PR == '\0') {
                dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + fVar16,
                                          SUB84(dVar18,0));
              }
              else {
                dVar18 = dVar18 + in_dr14;
              }
              uVar15 = (undefined4)((ulonglong)dVar18 >> 0x20);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(puVar13 + -0x28) = uVar15;
                dVar18 = (double)CONCAT44(uVar15,*(undefined4 *)(puVar13 + -0x20));
              }
              else {
                *(double *)(puVar13 + -0x28) = dVar18;
                in_xd8 = *(undefined8 *)(puVar13 + -0x20);
              }
              if (in_FPSCR_PR == '\0' && SUB84(dVar18,0) < (float)((ulonglong)dVar18 >> 0x20)) {
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(puVar13 + -0x28) = SUB84(dVar18,0);
                }
                else {
                  *(undefined8 *)(puVar13 + -0x28) = in_xd8;
                }
              }
            }
            if (in_FPSCR_SZ == '\0') {
              param_1 = (ulonglong)*(uint *)(puVar13 + -0x28);
            }
            else {
              param_1 = *(ulonglong *)(puVar13 + -0x2c);
            }
            (*(code *)PTR_FUN_8c089e4c)(param_3[2],pbVar10,0);
            iVar6 = (*(code *)PTR_FUN_8c089e54)();
            iVar7 = (*(code *)PTR_FUN_8c089e54)();
            if (iVar6 == iVar7) {
              iVar6 = (*(code *)PTR_FUN_8c089e54)();
              iVar7 = (*(code *)PTR_FUN_8c089e54)();
              if ((iVar6 != iVar7) || ((*pbVar10 & 0xf) != (**(byte **)(puVar13 + -8) & 0xf)))
              goto LAB_8c089f26;
              bVar4 = true;
            }
            else {
LAB_8c089f26:
              bVar4 = false;
            }
            if (bVar4) {
              if ((*(byte *)(*(int *)(puVar13 + -0x10) + *(int *)(puVar13 + -0xc) * 4 + 2) & 2) == 0
                 ) {
                puVar13[-0x30] =
                     (puVar13[-0x30] & (byte)DAT_8c089f7e | 0x10) & (byte)DAT_8c089f80 | 8;
                psVar12[1] = (short)*(undefined4 *)(puVar13 + -0xc);
              }
              else {
                puVar8 = (undefined2 *)
                         (*(int *)(puVar13 + -0x10) + (*(int *)(puVar13 + -0xc) + 1) * 4);
                uVar3 = *puVar8;
                *(undefined2 **)(puVar13 + -0x10) = puVar8;
                *(undefined2 *)(puVar13 + -0x30) = uVar3;
                puVar13[-0x30] =
                     (puVar13[-0x30] & (byte)DAT_8c089e46 | 0x10) & (byte)DAT_8c089e48 | 8;
                psVar12[1] = (short)*(int *)(puVar13 + -0xc) + 2;
              }
            }
            (*(code *)PTR_FUN_8c089f84)(param_3[2],puVar13 + -0x30,psVar12 + 6,psVar12 + 8);
            if (bVar19) {
              *(undefined2 *)(iVar9 + 2) = *(undefined2 *)(puVar13 + -0x30);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(psVar12 + 6);
                *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(psVar12 + 8);
              }
              else {
                *(undefined8 *)(iVar9 + 0x1c) = *(undefined8 *)(psVar12 + 6);
                *(undefined8 *)(iVar9 + 0x24) = *(undefined8 *)(psVar12 + 8);
              }
            }
          }
          else {
            iVar6 = *(int *)(puVar13 + -0x1c);
            *psVar12 = 0;
            *(uint *)(iVar9 + 0x70) =
                 *(uint *)(iVar9 + 0x70) & ~(1 << (*(ushort *)(iVar6 + 4) & 0x1f));
            iVar9 = *(int *)((int)DAT_8c089c78 + *(int *)(puVar13 + -0x14)) + -1;
            *(int *)((int)DAT_8c089c78 + *(int *)(puVar13 + -0x14)) = iVar9;
            if (iVar9 == 0) {
              puVar8 = *(undefined2 **)(puVar13 + -0x14);
              *puVar8 = 0;
              puVar8[1] = 0;
            }
          }
          iVar11 = iVar11 + 1;
          iVar9 = *(int *)((int)DAT_8c089c78 + *(int *)(puVar13 + -0x18));
        }
        psVar12 = psVar12 + 10;
      } while (iVar11 < iVar9);
    }
    FUN_8c088ecc(param_3,*(int *)(puVar13 + -0x1c) + 2);
  }
  return;
}

