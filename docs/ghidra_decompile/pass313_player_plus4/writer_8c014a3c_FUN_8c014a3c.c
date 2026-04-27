// entry: 8c014a3c
// name: FUN_8c014a3c


/* WARNING: Removing unreachable block (ram,0x8c014d60) */

undefined1
FUN_8c014a3c(double param_1,uint param_2,double param_3,int param_4,undefined2 *param_5,
            undefined4 *param_6)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  double *pdVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  code *pcVar17;
  int iVar18;
  undefined4 uVar19;
  byte *pbVar20;
  char *pcVar21;
  int iVar22;
  int iVar23;
  byte bVar24;
  int iVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  undefined4 in_fr3;
  double dVar28;
  float fVar29;
  double dVar30;
  float in_fr13;
  undefined4 in_fr12;
  double in_dr14;
  double in_xd4;
  undefined8 in_xd8;
  double in_xd12;
  undefined8 in_xd14;
  bool bVar31;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte abStack_7fec [4];
  byte abStack_7fe8 [8];
  byte abStack_7fe0 [8];
  byte abStack_7fd8 [4];
  undefined1 auStack_7fd4 [32696];
  undefined1 auStack_1c [8];
  undefined8 local_14;
  
  if (in_FPSCR_SZ == '\0') {
    puVar26 = (undefined1 *)((int)&local_14 + 4);
    local_14 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)local_14);
  }
  else {
    puVar26 = auStack_1c;
    local_14 = in_dr14;
  }
  *(undefined4 *)(puVar26 + -4) = in_PR;
  iVar11 = (int)DAT_8c014b70;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar26 + iVar11 + 0x20) = (int)((ulonglong)param_1 >> 0x20);
    uVar27 = CONCAT44(DAT_8c014b88,in_fr3);
  }
  else {
    *(double *)(puVar26 + iVar11 + 0x20) = param_1;
    uVar27 = CONCAT44(PTR_FUN_8c014b8c,DAT_8c014b88);
  }
  *(int *)(puVar26 + iVar11 + 0x1c) = param_4;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar26 + iVar11 + 0x2c) = (int)((ulonglong)uVar27 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar26 + iVar11 + 0x2c) = uVar27;
  }
  *(undefined2 *)(puVar26 + iVar11) = *param_5;
  *(undefined4 **)(puVar26 + iVar11 + 0x28) = param_6;
  uVar12 = *(undefined4 *)(DAT_8c014b72 + param_4);
  *(undefined2 **)(puVar26 + iVar11 + 0x24) = param_5;
  uVar7 = (*(code *)PTR_FUN_8c014b8c)(uVar12,puVar26 + iVar11,0);
  puVar26[iVar11 + 0x30] = uVar7;
  bVar24 = *(byte *)((int)param_5 + 3);
  puVar26[iVar11 + 0x34] = bVar24;
  *(undefined4 *)(puVar26 + iVar11 + 0x38) =
       *(undefined4 *)
        ((int)DAT_8c014b7a + *(int *)((int)DAT_8c014b78 + *(int *)(DAT_8c014b76 + param_4)));
  bVar2 = *(byte *)(DAT_8c014b7c + param_4);
  puVar26[iVar11 + 0x3c] = bVar2;
  iVar25 = *(int *)(DAT_8c014b72 + param_4);
  iVar18 = *(int *)(DAT_8c014b7e + iVar25) + (int)DAT_8c014b74 * (uint)*(ushort *)(param_4 + 0x54);
  *(int *)(puVar26 + iVar11 + 0x40) = iVar18;
  puVar26[iVar11 + 0x44] = bVar24;
  if ((*(byte *)(iVar18 + 8) & 2) != 0) {
    puVar15 = (undefined4 *)(param_4 + DAT_8c014b82);
    dVar28 = (double)CONCAT44(0x3f800000,(int)uVar27);
    if (in_FPSCR_SZ == '\0') {
      dVar30 = (double)CONCAT44(*(undefined4 *)(*(int *)(DAT_8c014b80 + param_4) + 0x14),
                                SUB84(param_3,0));
    }
    else {
      dVar30 = *(double *)(*(int *)(DAT_8c014b80 + param_4) + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44(0x40000000,(int)uVar27);
    }
    else {
      dVar28 = dVar28 + dVar28;
    }
    uVar12 = puVar15[1];
    *(undefined4 *)(puVar26 + iVar11 + 4) = *puVar15;
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) *
                                (float)((ulonglong)dVar28 >> 0x20),SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44(DAT_8c014b90,SUB84(dVar28,0));
    }
    else {
      dVar28 = (double)CONCAT44(PTR_FUN_8c014b94,DAT_8c014b90);
    }
    *(undefined4 *)(puVar26 + iVar11 + 0xc) = puVar15[2];
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) /
                                (float)((ulonglong)dVar28 >> 0x20),SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 / dVar28;
    }
    *(undefined4 *)(puVar26 + iVar11 + 8) = uVar12;
    fVar29 = (float)((ulonglong)dVar30 >> 0x20);
    if (bVar2 == 1) {
      if (in_FPSCR_PR == '\0') {
        dVar30 = (double)CONCAT44(-fVar29,SUB84(dVar30,0));
      }
      else {
        dVar30 = -dVar30;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar30 = (double)((ulonglong)dVar30 >> 0x20);
      }
      dVar30 = (double)((ulonglong)dVar30 & 0xffffffff);
    }
    else if (bVar2 == 2) {
      if (in_FPSCR_SZ == '\0') {
        dVar30 = (double)(ulonglong)(uint)fVar29;
      }
      dVar30 = (double)((ulonglong)dVar30 & 0xffffffff);
    }
    else if (bVar2 == 4) {
      if (in_FPSCR_PR == '\0') {
        dVar30 = (double)((ulonglong)(uint)-fVar29 << 0x20);
      }
      else {
        dVar30 = -(double)((ulonglong)(uint)fVar29 << 0x20);
      }
    }
    else if (bVar2 == 8) {
      dVar30 = (double)((ulonglong)(uint)fVar29 << 0x20);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = (double)CONCAT44(*(undefined4 *)(puVar26 + iVar11 + 4),SUB84(param_1,0));
    }
    else {
      dVar28 = *(double *)(puVar26 + iVar11 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) + SUB84(dVar30,0),SUB84(dVar28,0)
                               );
    }
    else {
      dVar28 = dVar28 + dVar30;
    }
    uVar12 = (undefined4)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar26 + iVar11 + 4) = uVar12;
      dVar28 = (double)CONCAT44(uVar12,*(undefined4 *)(puVar26 + iVar11 + 0xc));
    }
    else {
      *(double *)(puVar26 + iVar11 + 4) = dVar28;
      in_xd4 = *(double *)(puVar26 + iVar11 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar29 = SUB84(dVar28,0) + (float)((ulonglong)dVar30 >> 0x20);
    }
    else {
      fVar29 = SUB84(dVar28 + dVar30,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar26 + iVar11 + 0xc) = fVar29;
    }
    else {
      *(double *)(puVar26 + iVar11 + 0xc) = in_xd4;
    }
    (*(code *)PTR_FUN_8c014b94)(*(undefined4 *)(puVar26 + iVar11 + 0x38),param_5,0);
    uVar19 = *(undefined4 *)(puVar26 + iVar11 + 4);
    param_6[1] = *(undefined4 *)(puVar26 + iVar11 + 8);
    uVar12 = *(undefined4 *)(puVar26 + iVar11 + 0xc);
    iVar18 = (int)DAT_8c014b7c;
    *param_6 = uVar19;
    param_6[2] = uVar12;
    puVar26[iVar11 + 0x48] = *(undefined1 *)(iVar18 + param_4);
    goto LAB_8c014b38;
  }
  if (((bVar24 & 0xf) == 0) && (*(char *)(iVar18 + 0x18) == '\x06')) {
    *(byte *)((int)param_5 + 3) = bVar24 | bVar2;
    iVar25 = *(int *)(DAT_8c014cf2 + param_4);
  }
  uVar12 = (*(code *)PTR_FUN_8c014cfc)();
  uVar19 = (*(code *)PTR_FUN_8c014cfc)();
  uVar12 = (*(code *)PTR_FUN_8c014d00)(iVar25,uVar12,uVar19);
  *(undefined4 *)(puVar26 + iVar11 + 0x4c) = uVar12;
  uVar27 = (*(code *)PTR_FUN_8c014d04)(param_4,param_4 + DAT_8c014cf6);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar26 + iVar11 + 0x50) = (int)((ulonglong)uVar27 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar26 + iVar11 + 0x50) = uVar27;
  }
  if (((*(byte *)((int)param_5 + 3) & 0xf) == 0) && (*(int *)(puVar26 + iVar11 + 0x4c) != 0)) {
    uVar27 = (*(code *)PTR_FUN_8c014fb0)
                       (*(undefined4 *)((int)DAT_8c014fac + *(int *)(puVar26 + iVar11 + 0x1c)));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar26 + iVar11 + 0x50) = (int)((ulonglong)uVar27 >> 0x20);
    }
    else {
      *(undefined8 *)(puVar26 + iVar11 + 0x50) = uVar27;
    }
  }
  puVar5 = PTR_FUN_8c014cfc;
  if (in_FPSCR_SZ == '\0') {
    param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),
                               *(undefined4 *)(puVar26 + iVar11 + 0x50));
  }
  else {
    in_xd8 = *(undefined8 *)(puVar26 + iVar11 + 0x50);
  }
  if (in_FPSCR_PR == '\0') {
    bVar31 = 0.0 < SUB84(param_3,0);
  }
  else {
    bVar31 = (double)(ulonglong)param_2 < param_3;
  }
  if (bVar31) {
    iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
    *(int *)(puVar26 + iVar11 + 0x54) = iVar18 + DAT_8c014cf8;
    if (in_FPSCR_SZ == '\0') {
      in_fr13 = *(float *)(puVar26 + iVar11 + 0x2c);
    }
    else {
      in_xd12 = *(double *)(puVar26 + iVar11 + 0x2c);
    }
    uVar9 = (uint)(byte)puVar26[iVar11 + 0x30];
    do {
      uVar9 = *(byte *)(*(int *)(puVar26 + iVar11 + 0x24) + 3) & 0xf & uVar9;
      if (uVar9 == 0) {
        uVar9 = *(byte *)(*(int *)(puVar26 + iVar11 + 0x24) + 3) & 0xf;
      }
      uVar12 = (*(code *)puVar5)();
      uVar19 = (*(code *)puVar5)();
      iVar25 = (*(code *)PTR_FUN_8c014d00)(*(undefined4 *)(DAT_8c014cf2 + iVar18),uVar12,uVar19);
      fVar29 = in_fr13;
      if (iVar25 != 0) {
        if (uVar9 == 0) {
          uVar9 = (*(code *)PTR_FUN_8c014fb4)
                            (*(undefined4 *)(DAT_8c014fac + iVar18),puVar26 + iVar11);
        }
        fVar29 = DAT_8c014d08;
        if (in_FPSCR_SZ != '\0') {
          in_xd12 = (double)CONCAT44(PTR_FUN_8c014d0c,DAT_8c014d08);
          fVar29 = in_fr13;
        }
      }
      in_fr13 = fVar29;
      if ((*(byte *)(*(int *)(puVar26 + iVar11 + 0x24) + 3) & 0xf) != 0) {
        uVar9 = uVar9 & (*(byte *)(DAT_8c014cfa + iVar18) ^ 0xf);
        if ((uVar9 == 0) && ((*(byte *)(*(int *)(puVar26 + iVar11 + 0x24) + 3) & 0xf) != 0)) {
          uVar9 = (uint)*(byte *)(DAT_8c014cfa + iVar18);
        }
      }
      if ((uVar9 & 1) == 0) {
        if ((uVar9 & 2) == 0) {
          if ((uVar9 & 4) == 0) {
            if ((uVar9 & 8) != 0) {
              uVar9 = (*(code *)PTR_FUN_8c014fb8)(iVar18,3,puVar26 + iVar11,puVar26[iVar11 + 0x30]);
            }
          }
          else {
            uVar9 = (*(code *)PTR_FUN_8c014fb8)(iVar18,2,puVar26 + iVar11,puVar26[iVar11 + 0x30]);
          }
        }
        else {
          uVar9 = (*(code *)PTR_FUN_8c014fb8)(iVar18,1,puVar26 + iVar11,puVar26[iVar11 + 0x30]);
        }
      }
      else {
        uVar9 = (*(code *)PTR_FUN_8c014fb8)(iVar18,0,puVar26 + iVar11,puVar26[iVar11 + 0x30]);
      }
      puVar6 = PTR_FUN_8c014d0c;
      uVar12 = SUB84(param_1,0);
      uVar19 = SUB84(in_dr14,0);
      uVar7 = (undefined1)uVar9;
      if ((uVar9 & (byte)puVar26[iVar11 + 0x30]) != 0) {
        uVar14 = uVar9 & (byte)puVar26[iVar11 + 0x30];
        if ((uVar14 & 1) == 0) {
          if ((uVar14 & 2) == 0) {
            if ((uVar14 & 4) == 0) {
              if ((uVar14 & 8) != 0) {
                if (in_FPSCR_SZ == '\0') {
                  in_dr14 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar26 + iVar11 + 0x28) + 8),
                                             uVar19);
                }
                else {
                  in_dr14 = *(double *)(*(int *)(puVar26 + iVar11 + 0x28) + 8);
                }
                dVar28 = (double)(*(code *)PTR_FUN_8c014fbc)
                                           (*(undefined4 *)(DAT_8c014fac + iVar18),puVar26 + iVar11,
                                            uVar9);
                if (in_FPSCR_SZ == '\0') {
                  fVar29 = in_fr13;
                  param_3 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(param_3,0));
                }
                else {
                  fVar29 = (float)((ulonglong)in_xd12 >> 0x20);
                  param_3 = dVar28;
                }
                if (in_FPSCR_PR == '\0') {
                  in_dr14 = (double)CONCAT44(fVar29 * (float)((ulonglong)param_3 >> 0x20) +
                                             (float)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0));
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(*(int *)(puVar26 + iVar11 + 0x28) + 8) =
                       (int)((ulonglong)in_dr14 >> 0x20);
                }
                else {
                  *(double *)(*(int *)(puVar26 + iVar11 + 0x28) + 8) = in_dr14;
                }
              }
            }
            else {
              if (in_FPSCR_SZ == '\0') {
                uVar19 = *(undefined4 *)(*(int *)(puVar26 + iVar11 + 0x28) + 8);
              }
              else {
                in_xd14 = *(undefined8 *)(*(int *)(puVar26 + iVar11 + 0x28) + 8);
              }
              dVar28 = in_xd12;
              if (in_FPSCR_SZ == '\0') {
                dVar28 = (double)CONCAT44(in_fr13,uVar19);
              }
              dVar30 = (double)(*(code *)PTR_FUN_8c014fbc)
                                         (*(undefined4 *)(DAT_8c014fac + iVar18),puVar26 + iVar11,
                                          uVar9);
              if (in_FPSCR_PR == '\0') {
                dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) *
                                          (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar28,0));
              }
              else {
                dVar28 = dVar28 * dVar30;
              }
              if (in_FPSCR_PR == '\0') {
                in_dr14 = (double)(ulonglong)
                                  (uint)(SUB84(dVar28,0) - (float)((ulonglong)dVar28 >> 0x20));
              }
              else {
                in_dr14 = dVar28 - dVar28;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(*(int *)(puVar26 + iVar11 + 0x28) + 8) = SUB84(in_dr14,0);
              }
              else {
                *(undefined8 *)(*(int *)(puVar26 + iVar11 + 0x28) + 8) = in_xd14;
              }
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              in_dr14 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar26 + iVar11 + 0x28),uVar19
                                        );
            }
            else {
              in_dr14 = **(double **)(puVar26 + iVar11 + 0x28);
            }
            dVar28 = (double)(*(code *)PTR_FUN_8c014fbc)
                                       (*(undefined4 *)(DAT_8c014fac + iVar18),puVar26 + iVar11,
                                        uVar9);
            if (in_FPSCR_SZ == '\0') {
              fVar29 = in_fr13;
              param_3 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(param_3,0));
            }
            else {
              fVar29 = (float)((ulonglong)in_xd12 >> 0x20);
              param_3 = dVar28;
            }
            if (in_FPSCR_PR == '\0') {
              in_dr14 = (double)CONCAT44(fVar29 * (float)((ulonglong)param_3 >> 0x20) +
                                         (float)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0));
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)*(double **)(puVar26 + iVar11 + 0x28) = (int)((ulonglong)in_dr14 >> 0x20);
            }
            else {
              **(double **)(puVar26 + iVar11 + 0x28) = in_dr14;
            }
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)*(undefined8 **)(puVar26 + iVar11 + 0x28);
          }
          else {
            in_xd14 = **(undefined8 **)(puVar26 + iVar11 + 0x28);
          }
          dVar28 = in_xd12;
          if (in_FPSCR_SZ == '\0') {
            dVar28 = (double)CONCAT44(in_fr13,uVar19);
          }
          dVar30 = (double)(*(code *)PTR_FUN_8c014fbc)
                                     (*(undefined4 *)(DAT_8c014fac + iVar18),puVar26 + iVar11,uVar9)
          ;
          if (in_FPSCR_PR == '\0') {
            dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) *
                                      (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar28,0));
          }
          else {
            dVar28 = dVar28 * dVar30;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr14 = (double)(ulonglong)
                              (uint)(SUB84(dVar28,0) - (float)((ulonglong)dVar28 >> 0x20));
          }
          else {
            in_dr14 = dVar28 - dVar28;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)*(undefined8 **)(puVar26 + iVar11 + 0x28) = SUB84(in_dr14,0);
          }
          else {
            **(undefined8 **)(puVar26 + iVar11 + 0x28) = in_xd14;
          }
        }
        if (*(int *)(iVar18 + 0x24) == 1) {
          iVar25 = *(int *)(DAT_8c014e7e + iVar18);
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)*(double **)(puVar26 + iVar11 + 0x28),uVar12);
          }
          else {
            param_1 = **(double **)(puVar26 + iVar11 + 0x28);
          }
          if (in_FPSCR_PR == '\0') {
            fVar29 = (float)*(int *)(iVar25 + 0x20);
            dVar28 = (double)CONCAT44(fVar29,SUB84(param_3,0));
            bVar31 = (float)((ulonglong)param_1 >> 0x20) < fVar29;
          }
          else {
            dVar28 = (double)*(int *)(iVar25 + 0x20);
            bVar31 = param_1 < dVar28;
          }
          if (!bVar31) {
            iVar22 = (int)DAT_8c014e7e;
            iVar25 = *(int *)(iVar25 + 0x20) + -1;
            if (in_FPSCR_PR == '\0') {
              param_1 = (double)CONCAT44((float)iVar25,SUB84(param_1,0));
            }
            else {
              param_1 = (double)iVar25;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)*(double **)(puVar26 + iVar11 + 0x28) = (int)((ulonglong)param_1 >> 0x20);
            }
            else {
              **(double **)(puVar26 + iVar11 + 0x28) = param_1;
            }
            iVar25 = *(int *)(iVar22 + iVar18);
          }
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                       *(undefined4 *)(*(int *)(puVar26 + iVar11 + 0x28) + 8));
          }
          else {
            in_xd4 = *(double *)(*(int *)(puVar26 + iVar11 + 0x28) + 8);
          }
          if (in_FPSCR_PR == '\0') {
            fVar29 = (float)*(int *)(iVar25 + 0x24);
            param_3 = (double)CONCAT44(fVar29,SUB84(dVar28,0));
            bVar31 = SUB84(param_1,0) < fVar29;
          }
          else {
            param_3 = (double)*(int *)(iVar25 + 0x24);
            bVar31 = param_1 < param_3;
          }
          if (!bVar31) {
            fVar29 = (float)(*(int *)(iVar25 + 0x24) + -1);
            param_1 = (double)(ulonglong)(uint)fVar29;
            if (in_FPSCR_SZ == '\0') {
              *(float *)(*(int *)(puVar26 + iVar11 + 0x28) + 8) = fVar29;
            }
            else {
              *(double *)(*(int *)(puVar26 + iVar11 + 0x28) + 8) = in_xd4;
            }
          }
          (*(code *)puVar6)(*(undefined4 *)(puVar26 + iVar11 + 0x38),puVar26 + iVar11,1);
        }
        else {
          pdVar8 = *(double **)(puVar26 + iVar11 + 0x28);
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)(ulonglong)*(uint *)(pdVar8 + 1);
          }
          else {
            param_1 = *pdVar8;
            in_xd4 = pdVar8[1];
          }
          (*(code *)puVar6)(*(undefined4 *)(puVar26 + iVar11 + 0x38),puVar26 + iVar11,0);
        }
        *(undefined1 *)(DAT_8c014e80 + iVar18) = uVar7;
      }
      uVar12 = (*(code *)puVar5)();
      uVar19 = (*(code *)puVar5)();
      iVar25 = (*(code *)PTR_FUN_8c014e88)(*(undefined4 *)(DAT_8c014e7e + iVar18),uVar12,uVar19);
      uVar9 = SUB84(param_1,0);
      if (iVar25 != 0) {
        bVar2 = **(byte **)(puVar26 + iVar11 + 0x24);
        if ((bVar2 & 0xf) < 8) {
          if ((bVar2 & 0xf) < 5) {
LAB_8c015958:
            bVar31 = false;
          }
          else {
            bVar31 = true;
          }
        }
        else {
          if (0xb < (bVar2 & 0xf)) goto LAB_8c015958;
          bVar31 = true;
        }
        if (bVar31) {
          bVar2 = **(byte **)(puVar26 + iVar11 + 0x54);
          if ((bVar2 & 0xf) < 8) {
            if ((bVar2 & 0xf) < 5) {
LAB_8c015946:
              bVar31 = false;
            }
            else {
              bVar31 = true;
            }
          }
          else {
            if (0xb < (bVar2 & 0xf)) goto LAB_8c015946;
            bVar31 = true;
          }
          if (!bVar31) {
            puVar26[iVar11 + 0x34] = uVar7;
            iVar22 = *(int *)(puVar26 + iVar11 + 0x24);
            *(byte *)(iVar22 + 2) = *(byte *)(iVar22 + 2) | 0x10;
            uVar12 = (*(code *)puVar5)();
            iVar25 = (int)DAT_8c015106;
            uVar19 = (*(code *)puVar5)();
            uVar13 = *(undefined4 *)(DAT_8c015108 + iVar18);
            *(int *)(puVar26 + iVar11 + -4) = *(int *)(puVar26 + iVar11 + 0x40) + iVar25;
            (*(code *)PTR_FUN_8c01511c)
                      (uVar13,uVar12,uVar19,*(int *)(puVar26 + iVar11 + 0x40) + (int)DAT_8c01510a);
            if ((*(byte *)(iVar22 + 2) & 8) != 0) {
              iVar25 = (*(code *)PTR_FUN_8c015134)
                                 (*(undefined4 *)(DAT_8c015108 + iVar18),
                                  *(undefined2 *)(iVar18 + 0x54),5);
              uVar12 = DAT_8c015138;
              iVar22 = (int)DAT_8c01510c;
              iVar23 = *(int *)((int)DAT_8c01510e + *(int *)(DAT_8c015108 + iVar18));
              uVar3 = *(ushort *)(iVar18 + 0x54);
              *(byte *)(iVar25 + 0x11) = *(byte *)(iVar25 + 0x11) & (byte)DAT_8c015110;
              *(ushort *)(iVar25 + 0x10) =
                   *(ushort *)(iVar25 + 0x10) & (ushort)uVar12 | DAT_8c015112;
              *(byte *)(iVar25 + 0x11) = *(byte *)(iVar25 + 0x11) & 0xf;
              bVar2 = *(byte *)(DAT_8c015114 + iVar18);
              if ((bVar2 & 1) == 0) {
                if ((bVar2 & 2) == 0) {
                  if ((bVar2 & 4) == 0) {
                    if ((bVar2 & 8) != 0) {
                      *(byte *)(iVar25 + 0x11) = *(byte *)(iVar25 + 0x11) & 0xf | (byte)DAT_8c0159be
                      ;
                    }
                  }
                  else {
                    *(byte *)(iVar25 + 0x11) = *(byte *)(iVar25 + 0x11) & 0xf | 0x40;
                  }
                }
                else {
                  *(byte *)(iVar25 + 0x11) = *(byte *)(iVar25 + 0x11) & 0xf | 0x20;
                }
              }
              else {
                *(byte *)(iVar25 + 0x11) = *(byte *)(iVar25 + 0x11) & 0xf | 0x10;
              }
              uVar12 = (*(code *)puVar5)();
              uVar19 = (*(code *)puVar5)();
              uVar13 = *(undefined4 *)(DAT_8c015108 + iVar18);
              *(uint *)(puVar26 + iVar11 + -4) = iVar23 + iVar22 * (uint)uVar3 + 2;
              uVar14 = param_2;
              if (in_FPSCR_SZ == '\0') {
                uVar14 = uVar9;
              }
              uVar9 = uVar14;
              (*(code *)PTR_FUN_8c01513c)(uVar14,uVar13,iVar25,uVar12,uVar19);
              iVar25 = *(int *)(puVar26 + iVar11 + 0x24);
              *(byte *)(*(int *)(puVar26 + iVar11 + 0x40) + 8) =
                   *(byte *)(*(int *)(puVar26 + iVar11 + 0x40) + 8) & 0xf7;
              *(byte *)(iVar25 + 2) = *(byte *)(iVar25 + 2) & 0xf7;
            }
            puVar5 = PTR_DAT_8c015120;
            if (PTR_DAT_8c015120[8] == '\0') {
              uVar12 = *DAT_8c015140;
            }
            else {
              uVar12 = *DAT_8c015124;
            }
            (*(code *)PTR_FUN_8c015128)(uVar12,PTR_DAT_8c015120[9]);
            (*(code *)PTR_FUN_8c01512c)(uVar12,puVar5[10],puVar5[0xb],0);
            uVar14 = param_2;
            if (in_FPSCR_SZ == '\0') {
              uVar14 = uVar9;
            }
            (*(code *)PTR_FUN_8c015130)(uVar14,iVar18 + 0x10,8);
            goto LAB_8c014e10;
          }
        }
      }
      uVar9 = (*(code *)PTR_FUN_8c014e8c)(*(undefined4 *)(DAT_8c014e7e + iVar18),puVar26 + iVar11,0)
      ;
      puVar26[iVar11 + 0x30] = (char)uVar9;
      if (in_FPSCR_SZ == '\0') {
        param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),
                                   *(undefined4 *)(puVar26 + iVar11 + 0x50));
      }
      else {
        in_xd8 = *(undefined8 *)(puVar26 + iVar11 + 0x50);
      }
      if (in_FPSCR_PR == '\0') {
        fVar29 = SUB84(param_3,0) - in_fr13;
        param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),fVar29);
        bVar31 = 0.0 < fVar29;
      }
      else {
        param_3 = param_3 - (double)CONCAT44(in_fr12,in_fr13);
        fVar29 = SUB84(param_3,0);
        bVar31 = (double)(ulonglong)param_2 < param_3;
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar26 + iVar11 + 0x50) = fVar29;
      }
      else {
        *(undefined8 *)(puVar26 + iVar11 + 0x50) = in_xd8;
      }
    } while (bVar31);
    puVar26[iVar11 + 0x34] = uVar7;
    puVar26[iVar11 + 0x30] = (char)uVar9;
  }
LAB_8c014e10:
  bVar2 = puVar26[iVar11 + 0x34];
  puVar16 = *(undefined2 **)(puVar26 + iVar11 + 0x24);
  *puVar16 = *(undefined2 *)(puVar26 + iVar11);
  uVar12 = SUB84(param_3,0);
  if ((bVar2 & 1) == 0) {
    if ((bVar2 & 2) == 0) {
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 8) != 0) {
          if (puVar26[iVar11 + 0x3c] == '\x04') {
            iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
            uVar9 = *(uint *)(iVar18 + 0x2c);
            uVar14 = (uint)DAT_8c015216;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(DAT_8c015214 + iVar18) = 0;
            }
            else {
              *(ulonglong *)(DAT_8c015214 + iVar18) = (ulonglong)param_2;
            }
            iVar25 = (int)DAT_8c015218;
            *(uint *)(iVar18 + 0x2c) = uVar9 | uVar14;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(iVar25 + iVar18) = 0;
            }
            else {
              *(ulonglong *)(iVar25 + iVar18) = (ulonglong)param_2;
            }
          }
          else {
            iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
            uVar14 = (uint)DAT_8c015216;
            uVar9 = *(uint *)(iVar18 + 0x2c);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(DAT_8c015214 + iVar18) = 0;
            }
            else {
              *(ulonglong *)(DAT_8c015214 + iVar18) = (ulonglong)param_2;
            }
            *(uint *)(iVar18 + 0x2c) = uVar9 | uVar14;
          }
          *(undefined1 *)(DAT_8c01521a + iVar18) = 8;
        }
      }
      else {
        if (puVar26[iVar11 + 0x3c] == '\b') {
          iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
          if (in_FPSCR_SZ == '\0') {
            uVar27 = CONCAT44(DAT_8c01521c._4_4_,uVar12);
          }
          else {
            uVar27 = CONCAT44(uRam8c015224,DAT_8c01521c._4_4_);
          }
          uVar9 = *(uint *)(iVar18 + 0x2c);
          uVar14 = (uint)DAT_8c015216;
          uVar12 = (undefined4)((ulonglong)uVar27 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(DAT_8c015214 + iVar18) = uVar12;
          }
          else {
            *(undefined8 *)(DAT_8c015214 + iVar18) = uVar27;
          }
          iVar25 = (int)DAT_8c015218;
          *(uint *)(iVar18 + 0x2c) = uVar9 | uVar14;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(iVar25 + iVar18) = uVar12;
          }
          else {
            *(undefined8 *)(iVar25 + iVar18) = uVar27;
          }
        }
        else {
          iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
          uVar14 = (uint)DAT_8c015216;
          uVar9 = *(uint *)(iVar18 + 0x2c);
          if (in_FPSCR_SZ == '\0') {
            uVar27 = CONCAT44(DAT_8c01521c._4_4_,uVar12);
          }
          else {
            uVar27 = CONCAT44(uRam8c015224,DAT_8c01521c._4_4_);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(DAT_8c015214 + iVar18) = (int)((ulonglong)uVar27 >> 0x20);
          }
          else {
            *(undefined8 *)(DAT_8c015214 + iVar18) = uVar27;
          }
          *(uint *)(iVar18 + 0x2c) = uVar9 | uVar14;
        }
        *(undefined1 *)(DAT_8c01521a + iVar18) = 4;
      }
    }
    else {
      if (puVar26[iVar11 + 0x3c] == '\x01') {
        iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
        if (in_FPSCR_SZ == '\0') {
          uVar27 = CONCAT44((undefined4)DAT_8c01521c,uVar12);
        }
        else {
          uVar27 = CONCAT44(DAT_8c01521c._4_4_,(undefined4)DAT_8c01521c);
        }
        uVar9 = *(uint *)(iVar18 + 0x2c);
        uVar14 = (uint)DAT_8c015216;
        uVar12 = (undefined4)((ulonglong)uVar27 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(DAT_8c015214 + iVar18) = uVar12;
        }
        else {
          *(undefined8 *)(DAT_8c015214 + iVar18) = uVar27;
        }
        iVar25 = (int)DAT_8c015218;
        *(uint *)(iVar18 + 0x2c) = uVar9 | uVar14;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(iVar25 + iVar18) = uVar12;
        }
        else {
          *(undefined8 *)(iVar25 + iVar18) = uVar27;
        }
      }
      else {
        iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
        uVar14 = (uint)DAT_8c015216;
        uVar9 = *(uint *)(iVar18 + 0x2c);
        if (in_FPSCR_SZ == '\0') {
          uVar27 = CONCAT44((undefined4)DAT_8c01521c,uVar12);
        }
        else {
          uVar27 = CONCAT44(DAT_8c01521c._4_4_,(undefined4)DAT_8c01521c);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(DAT_8c015214 + iVar18) = (int)((ulonglong)uVar27 >> 0x20);
        }
        else {
          *(undefined8 *)(DAT_8c015214 + iVar18) = uVar27;
        }
        *(uint *)(iVar18 + 0x2c) = uVar9 | uVar14;
      }
      *(undefined1 *)(DAT_8c01521a + iVar18) = 2;
    }
  }
  else {
    if (puVar26[iVar11 + 0x3c] == '\x02') {
      iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
      if (in_FPSCR_SZ == '\0') {
        uVar27 = CONCAT44(DAT_8c014e90,uVar12);
      }
      else {
        uVar27 = CONCAT44(uRam8c014e94,DAT_8c014e90);
      }
      uVar9 = *(uint *)(iVar18 + 0x2c);
      uVar14 = (uint)DAT_8c014e84;
      uVar12 = (undefined4)((ulonglong)uVar27 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(DAT_8c014e82 + iVar18) = uVar12;
      }
      else {
        *(undefined8 *)(DAT_8c014e82 + iVar18) = uVar27;
      }
      iVar25 = (int)DAT_8c014e86;
      *(uint *)(iVar18 + 0x2c) = uVar9 | uVar14;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(iVar25 + iVar18) = uVar12;
      }
      else {
        *(undefined8 *)(iVar25 + iVar18) = uVar27;
      }
    }
    else {
      iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
      uVar14 = (uint)DAT_8c015118;
      uVar9 = *(uint *)(iVar18 + 0x2c);
      if (in_FPSCR_SZ == '\0') {
        uVar27 = CONCAT44(DAT_8c015144,uVar12);
      }
      else {
        uVar27 = CONCAT44(uRam8c015148,DAT_8c015144);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c01511a + iVar18) = (int)((ulonglong)uVar27 >> 0x20);
      }
      else {
        *(undefined8 *)(DAT_8c01511a + iVar18) = uVar27;
      }
      *(uint *)(iVar18 + 0x2c) = uVar9 | uVar14;
    }
    *(undefined1 *)(DAT_8c014e80 + iVar18) = 1;
  }
  if ((*(byte *)(puVar16 + 1) & 0x10) == 0) {
    uVar9 = (uint)*(ushort *)(*(int *)(puVar26 + iVar11 + 0x1c) + 0x54);
    iVar18 = *(int *)((int)DAT_8c0153b0 + *(int *)(puVar26 + iVar11 + 0x1c)) + (int)DAT_8c0153b2;
    if (((*(short *)(iVar18 + uVar9 * 0x1e + 6) == 0) &&
        (*(short *)(iVar18 + DAT_8c0153b4 + uVar9 * 0x1e + 6) == 0)) &&
       (*(short *)(iVar18 + DAT_8c0153b6 + uVar9 * 0x1e + 6) == 0)) {
      bVar31 = false;
    }
    else {
      bVar31 = true;
    }
    if (bVar31) {
      bVar2 = **(byte **)(puVar26 + iVar11 + 0x24);
      if ((bVar2 & 0xf) < 8) {
        if ((bVar2 & 0xf) < 5) {
LAB_8c015934:
          bVar31 = false;
        }
        else {
          bVar31 = true;
        }
      }
      else {
        if (0xb < (bVar2 & 0xf)) goto LAB_8c015934;
        bVar31 = true;
      }
      if ((bVar31) && (bVar2 = *(byte *)(*(int *)(puVar26 + iVar11 + 0x24) + 3), (bVar2 & 0xf) != 0)
         ) {
        if ((bVar2 & 1) == 0) {
          if ((bVar2 & 2) == 0) {
            if ((bVar2 & 4) == 0) {
              if ((bVar2 & 8) != 0) {
                *(undefined4 *)(puVar26 + iVar11 + 0x58) = 0;
                *(undefined4 *)(puVar26 + iVar11 + 0x5c) = 1;
                *(undefined4 *)(puVar26 + iVar11 + 0x60) = 8;
                *(undefined4 *)(puVar26 + iVar11 + 100) = 8;
              }
            }
            else {
              *(undefined4 *)(puVar26 + iVar11 + 0x58) = 0;
              *(undefined4 *)(puVar26 + iVar11 + 0x5c) = 0xffffffff;
              *(undefined4 *)(puVar26 + iVar11 + 0x60) = 4;
              *(undefined4 *)(puVar26 + iVar11 + 100) = 4;
            }
          }
          else {
            *(undefined4 *)(puVar26 + iVar11 + 0x58) = 1;
            *(undefined4 *)(puVar26 + iVar11 + 0x5c) = 0;
            *(undefined4 *)(puVar26 + iVar11 + 0x60) = 2;
            *(undefined4 *)(puVar26 + iVar11 + 100) = 2;
          }
        }
        else {
          *(undefined4 *)(puVar26 + iVar11 + 0x58) = 0xffffffff;
          *(undefined4 *)(puVar26 + iVar11 + 0x5c) = 0;
          *(undefined4 *)(puVar26 + iVar11 + 0x60) = 1;
          *(undefined4 *)(puVar26 + iVar11 + 100) = 1;
        }
        *(undefined **)(puVar26 + iVar11 + 0x68) = PTR_FUN_8c0153c4;
        uVar12 = (*(code *)PTR_FUN_8c0153c4)();
        *(undefined4 *)(puVar26 + (int)DAT_8c0153b8 + iVar11 + -4) = uVar12;
        iVar18 = (**(code **)(puVar26 + iVar11 + 0x68))();
        iVar18 = (*(code *)PTR_FUN_8c0153c8)
                           (*(undefined4 *)((int)DAT_8c0153bc + *(int *)(puVar26 + iVar11 + 0x1c)),
                            *(int *)(puVar26 + (int)DAT_8c0153b8 + iVar11 + -4) +
                            *(int *)(puVar26 + iVar11 + 0x58),
                            iVar18 + *(int *)(puVar26 + iVar11 + 0x5c));
        *(int *)(puVar26 + iVar11 + 0x6c) = iVar18;
        if (iVar18 != 0) {
          uVar12 = (**(code **)(puVar26 + iVar11 + 0x68))();
          *(undefined4 *)(puVar26 + (int)DAT_8c0153be + iVar11 + -4) = uVar12;
          iVar18 = (**(code **)(puVar26 + iVar11 + 0x68))();
          iVar18 = (*(code *)PTR_FUN_8c0153cc)
                             (*(undefined4 *)((int)DAT_8c0153bc + *(int *)(puVar26 + iVar11 + 0x1c))
                              ,*(int *)(puVar26 + (int)DAT_8c0153be + iVar11 + -4) +
                               *(int *)(puVar26 + iVar11 + 0x58),
                              iVar18 + *(int *)(puVar26 + iVar11 + 0x5c));
          if (iVar18 == 0) {
            *(int *)(puVar26 + iVar11 + 0x70) = *(int *)(puVar26 + iVar11 + 0x6c) + 8;
            pcVar17 = *(code **)(puVar26 + iVar11 + 0x68);
            *(code **)(puVar26 + (int)DAT_8c0153c0 + iVar11 + -4) = pcVar17;
            iVar18 = (*pcVar17)();
            if ((iVar18 == 2) &&
               (uVar9 = (*(code *)PTR_FUN_8c015720)
                                  (*(undefined4 *)
                                    ((int)DAT_8c01570c + *(int *)(puVar26 + iVar11 + 0x1c)),
                                   *(int *)(puVar26 + iVar11 + 0x6c) + 2),
               puVar5 = PTR___bfswu_8c015724, (uVar9 & *(uint *)(puVar26 + iVar11 + 100)) != 0)) {
              iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
              *(byte *)(*(int *)(puVar26 + iVar11 + 0x6c) + 9) =
                   *(byte *)(*(int *)(puVar26 + iVar11 + 0x6c) + 9) & 0xf | 0x40;
              (*(code *)puVar5)(*(undefined2 *)(iVar18 + 0x54));
              (*(code *)PTR___bfswu_8c015724)(*(uint *)(puVar26 + iVar11 + 0x60) & 0xffff);
              if ((*(int *)(*(int *)((int)DAT_8c015710 + *(int *)(puVar26 + iVar11 + 0x1c)) + 0x24)
                   == 1) && (*(int *)(*(int *)(puVar26 + iVar11 + 0x1c) + 0x24) == 0)) {
                uVar12 = (*(code *)PTR_FUN_8c01572c)(*(undefined4 *)(puVar26 + iVar11 + 0x1c));
                (*(code *)PTR_FUN_8c015730)(uVar12);
              }
              cVar1 = *PTR_DAT_8c015728;
              *(undefined **)(puVar26 + iVar11 + 0x74) = PTR_DAT_8c015728;
              if (cVar1 == '\0') {
                *(undefined4 *)(puVar26 + (int)DAT_8c015708 + iVar11 + -4) = *DAT_8c015734;
              }
              else {
                *(undefined4 *)(puVar26 + (int)DAT_8c015708 + iVar11 + -4) = *DAT_8c015714;
              }
              (*(code *)PTR_FUN_8c015718)(PTR_DAT_8c015728[1]);
              (*(code *)PTR_FUN_8c01571c)
                        (*(undefined4 *)(puVar26 + (int)DAT_8c015708 + iVar11 + -4),
                         *(undefined1 *)(*(int *)(puVar26 + iVar11 + 0x74) + 2),
                         *(undefined1 *)(*(int *)(puVar26 + iVar11 + 0x74) + 3),0);
            }
          }
        }
      }
    }
    bVar2 = puVar26[iVar11 + 0x34];
    if ((bVar2 & 0xf) != 0) {
      bVar24 = **(byte **)(puVar26 + iVar11 + 0x24);
      if ((bVar24 & 0xf) < 8) {
        if ((bVar24 & 0xf) < 6) {
LAB_8c015920:
          bVar31 = false;
        }
        else {
          bVar31 = true;
        }
      }
      else {
        if (10 < (bVar24 & 0xf)) goto LAB_8c015920;
        bVar31 = true;
      }
      if (bVar31) {
        puVar15 = *(undefined4 **)(puVar26 + iVar11 + 0x28);
        uVar12 = puVar15[1];
        bVar24 = 0;
        *(undefined4 *)(puVar26 + iVar11 + 0x10) = *puVar15;
        *(undefined4 *)(puVar26 + iVar11 + 0x14) = uVar12;
        *(undefined4 *)(puVar26 + iVar11 + 0x18) = puVar15[2];
        if (((bVar2 & puVar26[iVar11 + 0x30]) == 0) && ((bVar2 & 1) != 0)) {
          *(undefined **)(puVar26 + iVar11 + 0x68) = PTR_FUN_8c015590;
          *(undefined **)(puVar26 + (int)DAT_8c015572 + iVar11 + -4) = PTR_FUN_8c015590;
          uVar12 = (*(code *)PTR_FUN_8c015590)(6);
          *(undefined4 *)(puVar26 + iVar11 + 0x78) = uVar12;
          pcVar17 = *(code **)(puVar26 + iVar11 + 0x68);
          *(code **)(puVar26 + (int)DAT_8c015576 + iVar11 + -4) = pcVar17;
          uVar12 = (*pcVar17)();
          *(undefined4 *)(puVar26 + (int)DAT_8c015578 + iVar11 + -4) = uVar12;
          iVar18 = *(int *)((int)DAT_8c01557a + *(int *)(puVar26 + iVar11 + 0x1c));
          *(int *)(puVar26 + iVar11 + 0x78) = *(int *)(puVar26 + iVar11 + 0x78) + -1;
          iVar25 = *(int *)(DAT_8c01557c + iVar18);
          if (iVar25 == 0) {
            bVar31 = false;
          }
          else {
            bVar31 = *(int *)((*(int *)(iVar18 + 0x20) *
                               *(int *)(puVar26 + (int)DAT_8c015578 + iVar11 + -4) +
                              *(int *)(puVar26 + iVar11 + 0x78)) * 4 + iVar25) != 0;
          }
          if (!bVar31) goto LAB_8c015738;
          bVar24 = 1;
          *(undefined4 *)(puVar26 + (int)DAT_8c01557e + iVar11 + -4) = 0xffffffff;
          *(undefined4 *)(puVar26 + (int)DAT_8c015580 + iVar11 + -4) = 0;
        }
        else {
LAB_8c015738:
          if (((puVar26[iVar11 + 0x34] & puVar26[iVar11 + 0x30]) == 0) &&
             ((puVar26[iVar11 + 0x34] & 2) != 0)) {
            *(undefined **)(puVar26 + iVar11 + 0x68) = PTR_FUN_8c015864;
            *(undefined **)(puVar26 + (int)DAT_8c01584a + iVar11 + -4) = PTR_FUN_8c015864;
            uVar12 = (*(code *)PTR_FUN_8c015864)(6);
            *(undefined4 *)(puVar26 + (int)DAT_8c01584c + iVar11 + -4) = uVar12;
            pcVar17 = *(code **)(puVar26 + iVar11 + 0x68);
            *(code **)(puVar26 + (int)DAT_8c015850 + iVar11 + -4) = pcVar17;
            uVar12 = (*pcVar17)();
            *(undefined4 *)(puVar26 + (int)DAT_8c015852 + iVar11 + -4) = uVar12;
            iVar18 = *(int *)((int)DAT_8c015854 + *(int *)(puVar26 + iVar11 + 0x1c));
            *(int *)(puVar26 + (int)DAT_8c01584c + iVar11 + -4) =
                 *(int *)(puVar26 + (int)DAT_8c01584c + iVar11 + -4) + 1;
            iVar25 = *(int *)(DAT_8c015856 + iVar18);
            if (iVar25 == 0) {
              bVar31 = false;
            }
            else {
              bVar31 = *(int *)((*(int *)(iVar18 + 0x20) *
                                 *(int *)(puVar26 + (int)DAT_8c015852 + iVar11 + -4) +
                                *(int *)(puVar26 + (int)DAT_8c01584c + iVar11 + -4)) * 4 + iVar25)
                       != 0;
            }
            if (bVar31) {
              *(undefined4 *)(puVar26 + (int)DAT_8c015858 + iVar11 + -4) = 1;
              *(undefined4 *)(puVar26 + (int)DAT_8c01585a + iVar11 + -4) = 0;
              bVar24 = 2;
              goto LAB_8c01548a;
            }
          }
          if (((puVar26[iVar11 + 0x34] & puVar26[iVar11 + 0x30]) == 0) &&
             ((puVar26[iVar11 + 0x34] & 4) != 0)) {
            *(undefined **)(puVar26 + iVar11 + 0x68) = PTR_FUN_8c015864;
            *(undefined **)(puVar26 + (int)DAT_8c01585c + iVar11 + -4) = PTR_FUN_8c015864;
            uVar12 = (*(code *)PTR_FUN_8c015864)(6);
            *(undefined4 *)(puVar26 + (int)DAT_8c01585e + iVar11 + -4) = uVar12;
            pcVar17 = *(code **)(puVar26 + iVar11 + 0x68);
            *(code **)(puVar26 + (int)DAT_8c015860 + iVar11 + -4) = pcVar17;
            iVar18 = (*pcVar17)();
            iVar22 = *(int *)((int)DAT_8c015854 + *(int *)(puVar26 + iVar11 + 0x1c));
            iVar25 = *(int *)(DAT_8c015856 + iVar22);
            *(int *)(puVar26 + (int)DAT_8c015862 + iVar11 + -4) = iVar25;
            if (iVar25 == 0) {
              bVar31 = false;
            }
            else {
              bVar31 = *(int *)((*(int *)(iVar22 + 0x20) * (iVar18 + -1) +
                                *(int *)(puVar26 + (int)DAT_8c01585e + iVar11 + -4)) * 4 +
                               *(int *)(puVar26 + (int)DAT_8c015862 + iVar11 + -4)) != 0;
            }
            if (bVar31) {
              *(undefined4 *)(puVar26 + (int)DAT_8c015858 + iVar11 + -4) = 0;
              *(undefined4 *)(puVar26 + (int)DAT_8c01585a + iVar11 + -4) = 0xffffffff;
              bVar24 = 4;
              goto LAB_8c01548a;
            }
          }
          if (((puVar26[iVar11 + 0x34] & puVar26[iVar11 + 0x30]) == 0) &&
             ((puVar26[iVar11 + 0x34] & 8) != 0)) {
            *(undefined **)(puVar26 + iVar11 + 0x68) = PTR_FUN_8c01599c;
            uVar12 = (*(code *)PTR_FUN_8c01599c)(*(undefined4 *)(puVar26 + iVar11 + 0x24));
            uVar19 = *(undefined4 *)(puVar26 + iVar11 + 0x24);
            *(undefined4 *)(puVar26 + (int)DAT_8c01598c + iVar11 + -4) = uVar12;
            iVar18 = (**(code **)(puVar26 + iVar11 + 0x68))(uVar19);
            iVar25 = *(int *)((int)DAT_8c015992 +
                             *(int *)((int)DAT_8c015990 + *(int *)(puVar26 + iVar11 + 0x1c)));
            if (iVar25 == 0) {
              bVar31 = false;
            }
            else {
              bVar31 = *(int *)((*(int *)(*(int *)((int)DAT_8c015990 +
                                                  *(int *)(puVar26 + iVar11 + 0x1c)) + 0x20) *
                                 (iVar18 + 1) + *(int *)(puVar26 + (int)DAT_8c01598c + iVar11 + -4))
                                * 4 + iVar25) != 0;
            }
            if (bVar31) {
              *(undefined4 *)(puVar26 + (int)DAT_8c015994 + iVar11 + -4) = 0;
              *(undefined4 *)(puVar26 + (int)DAT_8c015996 + iVar11 + -4) = 1;
              bVar24 = 8;
            }
          }
        }
LAB_8c01548a:
        if (bVar24 != 0) {
          *(undefined **)(puVar26 + iVar11 + 0x68) = PTR_FUN_8c015590;
          uVar12 = (*(code *)PTR_FUN_8c015590)();
          *(undefined4 *)(puVar26 + (int)DAT_8c015582 + iVar11 + -4) = uVar12;
          iVar18 = (**(code **)(puVar26 + iVar11 + 0x68))();
          iVar18 = (*(code *)PTR_FUN_8c015594)
                             (*(undefined4 *)((int)DAT_8c01557a + *(int *)(puVar26 + iVar11 + 0x1c))
                              ,*(int *)(puVar26 + (int)DAT_8c015582 + iVar11 + -4) +
                               *(int *)(puVar26 + (int)DAT_8c01557e + iVar11 + -4),
                              iVar18 + *(int *)(puVar26 + (int)DAT_8c015580 + iVar11 + -4));
          *(int *)(puVar26 + (int)DAT_8c015584 + iVar11 + -4) = iVar18;
          if (iVar18 != 0) {
            uVar4 = *(undefined2 *)(*(int *)(puVar26 + iVar11 + 0x1c) + 0x54);
            uVar12 = *(undefined4 *)((int)DAT_8c01557a + *(int *)(puVar26 + iVar11 + 0x1c));
            *(undefined4 *)(puVar26 + iVar11 + -4) =
                 *(undefined4 *)(puVar26 + (int)DAT_8c015584 + iVar11 + -4);
            iVar18 = (*(code *)PTR_FUN_8c015598)
                               (uVar12,uVar4,bVar24,*(undefined4 *)(puVar26 + iVar11 + 0x24));
            uVar4 = DAT_8c015586;
            if (iVar18 != 0) {
              pbVar10 = *(byte **)(puVar26 + iVar11 + 0x24);
              uVar12 = *(undefined4 *)(puVar26 + iVar11 + 0x38);
              pbVar10[2] = pbVar10[2] | 2;
              pbVar20 = *(byte **)(puVar26 + iVar11 + 0x24);
              *pbVar20 = *pbVar10 & (byte)uVar4 | 0x10;
              *pbVar10 = *pbVar20 & (byte)DAT_8c015588 | 8;
              puVar5 = PTR_FUN_8c01559c;
              puVar26[iVar11 + 0x34] = bVar24;
              pbVar10[3] = bVar24;
              (*(code *)puVar5)(uVar12,puVar26 + iVar11 + 0x10,puVar26 + iVar11 + 0x18);
              uVar12 = *(undefined4 *)(puVar26 + iVar11 + 0x14);
              puVar15 = *(undefined4 **)(puVar26 + iVar11 + 0x28);
              iVar18 = (int)DAT_8c015584;
              *puVar15 = *(undefined4 *)(puVar26 + iVar11 + 0x10);
              puVar15[1] = uVar12;
              iVar25 = *(int *)(puVar26 + iVar18 + iVar11 + -4);
              puVar15[2] = *(undefined4 *)(puVar26 + iVar11 + 0x18);
              iVar18 = *(int *)(puVar26 + iVar11 + 0x1c);
              uVar19 = *(undefined4 *)(puVar26 + iVar11 + 0x10);
              *(undefined4 *)(DAT_8c01558a + iVar18) = *(undefined4 *)(iVar25 + 0x18);
              puVar5 = PTR_DAT_8c0155a0;
              puVar15 = (undefined4 *)(iVar18 + DAT_8c01558c);
              uVar12 = *(undefined4 *)(puVar26 + iVar11 + 0x14);
              *puVar15 = uVar19;
              pcVar21 = puVar5 + 0x2c;
              puVar15[1] = uVar12;
              iVar18 = (int)DAT_8c01558e;
              puVar15[2] = *(undefined4 *)(puVar26 + iVar11 + 0x18);
              cVar1 = *pcVar21;
              *(char **)(puVar26 + iVar18 + iVar11 + -4) = pcVar21;
              if (cVar1 == '\0') {
                *(undefined4 *)(puVar26 + (int)DAT_8c015998 + iVar11 + -4) = *DAT_8c0159a0;
              }
              else {
                *(undefined4 *)(puVar26 + (int)DAT_8c015708 + iVar11 + -4) = *DAT_8c015714;
              }
              (*(code *)PTR_FUN_8c015718)(puVar5[0x2d]);
              (*(code *)PTR_FUN_8c01571c)
                        (*(undefined4 *)(puVar26 + (int)DAT_8c015708 + iVar11 + -4),
                         *(undefined1 *)(*(int *)(puVar26 + (int)DAT_8c01570a + iVar11 + -4) + 2),
                         *(undefined1 *)(*(int *)(puVar26 + (int)DAT_8c01570a + iVar11 + -4) + 3),0)
              ;
            }
          }
        }
      }
    }
  }
  bVar2 = puVar26[iVar11 + 0x44];
  *(byte *)(*(int *)(puVar26 + iVar11 + 0x24) + 3) = bVar2;
  if ((bVar2 & 0xf) == 0) {
    puVar26[iVar11 + 0x48] = 0;
  }
  else {
    puVar26[iVar11 + 0x48] = puVar26[iVar11 + 0x34];
  }
LAB_8c014b38:
  return puVar26[iVar11 + 0x48];
}

