// entry: 8c06727c
// name: FUN_8c06727c


/* WARNING: Removing unreachable block (ram,0x8c06769a) */

void FUN_8c06727c(undefined8 param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 *puVar12;
  double in_dr2;
  undefined8 uVar13;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined8 in_dr12;
  double dVar20;
  double in_dr14;
  undefined8 in_xd6;
  double in_xd8;
  double dVar21;
  double in_xd12;
  bool bVar22;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte abStack_8040 [32772];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  undefined4 uVar14;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr12;
    puVar12 = auStack_2c;
  }
  else {
    puVar12 = auStack_3c;
    uStack_24 = in_dr12;
  }
  *(undefined4 *)(puVar12 + -4) = in_PR;
  iVar6 = (int)DAT_8c067410;
  dVar20 = 0.0;
  *(undefined4 *)(puVar12 + (int)DAT_8c067416 + iVar6 + -4) =
       *(undefined4 *)((int)DAT_8c067414 + *(int *)(DAT_8c067412 + param_2));
  *(undefined4 *)(puVar12 + (int)DAT_8c06741c + iVar6 + -4) =
       *(undefined4 *)((int)DAT_8c06741a + *(int *)(DAT_8c067418 + param_2));
  (*(code *)PTR__njPushMatrixEx_8c067434)();
  *(undefined4 *)(puVar12 + (int)DAT_8c06741e + iVar6 + -4) = 8;
  do {
    if (((**(ushort **)(puVar12 + (int)DAT_8c067416 + iVar6 + -4) & 1) != 0) &&
       (sVar1 = *(short *)(*(int *)(puVar12 + (int)DAT_8c067416 + iVar6 + -4) + 0x3c),
       *(short **)(puVar12 + (int)DAT_8c067420 + iVar6 + -4) =
            (short *)(*(int *)(puVar12 + (int)DAT_8c067416 + iVar6 + -4) + 0x3c), sVar1 != 0)) {
      uVar2 = *(ushort *)(*(int *)(puVar12 + (int)DAT_8c067420 + iVar6 + -4) + 2);
      *(ushort *)(puVar12 + (int)DAT_8c067422 + iVar6 + -4) = uVar2;
      if (1 < uVar2) {
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar12 + (int)DAT_8c067424 + iVar6 + -4) = SUB84(dVar20,0);
        }
        else {
          *(double *)(puVar12 + (int)DAT_8c067424 + iVar6 + -4) = in_xd12;
        }
        *(undefined4 *)(puVar12 + (int)DAT_8c067428 + iVar6 + -4) = 0;
        iVar11 = *(int *)(puVar12 + (int)DAT_8c067420 + iVar6 + -4) + 4;
        *(int *)(puVar12 + (int)DAT_8c06742a + iVar6 + -4) =
             *(int *)(puVar12 + (int)DAT_8c067420 + iVar6 + -4) + (int)DAT_8c067426;
        iVar7 = (*(code *)PTR_FUN_8c067438)(iVar11 + (uVar2 - 1) * 4);
        iVar5 = (*(code *)PTR_FUN_8c067438)
                          (iVar11 + (*(ushort *)(puVar12 + (int)DAT_8c067422 + iVar6 + -4) - 2) * 4)
        ;
        if (iVar7 == iVar5) {
          *(uint *)(puVar12 + (int)DAT_8c06742c + iVar6 + -4) =
               (uint)(-(((*(byte *)(iVar11 + (*(ushort *)(puVar12 + (int)DAT_8c067422 + iVar6 + -4)
                                             - 1) * 4) & 0x10) == 0) - 1) !=
                     -(((*(byte *)(iVar11 + (*(ushort *)(puVar12 + (int)DAT_8c067422 + iVar6 + -4) -
                                            2) * 4) & 0x10) == 0) - 1));
        }
        else {
          iVar7 = (*(code *)PTR_FUN_8c06754c)
                            (iVar11 + (*(ushort *)(puVar12 + (int)DAT_8c067540 + iVar6 + -4) - 1) *
                                      4);
          iVar5 = (*(code *)PTR_FUN_8c06754c)
                            (iVar11 + (*(ushort *)(puVar12 + (int)DAT_8c067540 + iVar6 + -4) - 2) *
                                      4);
          if (iVar7 == iVar5) {
            *(uint *)(puVar12 + (int)DAT_8c067544 + iVar6 + -4) =
                 (uint)(-(((*(byte *)(iVar11 + (*(ushort *)
                                                 (puVar12 + (int)DAT_8c067540 + iVar6 + -4) - 1) * 4
                                     ) & 0x10) == 0) - 1) ==
                       -(((*(byte *)(iVar11 + (*(ushort *)(puVar12 + (int)DAT_8c067540 + iVar6 + -4)
                                              - 2) * 4) & 0x10) == 0) - 1));
          }
        }
        iVar7 = *(int *)((int)DAT_8c06742e + *(int *)(puVar12 + (int)DAT_8c067420 + iVar6 + -4));
        if (0 < iVar7) {
LAB_8c067390:
          if (**(short **)(puVar12 + (int)DAT_8c06742a + iVar6 + -4) != 0) {
            sVar1 = *(short *)(*(int *)(puVar12 + (int)DAT_8c06742a + iVar6 + -4) + 2);
            uVar9 = (uint)*(ushort *)(puVar12 + (int)DAT_8c067422 + iVar6 + -4);
            if ((int)sVar1 <= (int)(uVar9 - 2)) {
              *(undefined1 **)(puVar12 + (int)DAT_8c067430 + iVar6 + -4) = puVar12 + iVar6 + -4;
              iVar7 = (int)sVar1;
LAB_8c0673ba:
              puVar3 = PTR_FUN_8c067658;
              uVar15 = (undefined4)param_1;
              if (*(char *)(iVar11 + iVar7 * 4 + 3) == '\0') {
                iVar5 = iVar7 + 1;
              }
              else {
                iVar5 = iVar7 + (uint)*(byte *)(iVar11 + iVar7 * 4 + 3);
              }
              if ((((*(byte *)(iVar11 + iVar7 * 4 + 2) & 2) == 0) || ((int)(uVar9 - 1) < iVar5)) ||
                 ((*(byte *)(iVar11 + iVar5 * 4 + 2) & 2) == 0)) {
                dVar16 = 5.26354424712089e-315;
                uVar14 = SUB84(dVar20,0);
                if (in_FPSCR_SZ == '\0') {
                  *(undefined4 *)(puVar12 + iVar6) = uVar14;
                  *(undefined4 *)(puVar12 + iVar6 + 4) = 0x3f800000;
                  *(undefined4 *)(puVar12 + iVar6 + 8) = uVar14;
                  *(undefined4 *)(puVar12 + iVar6 + 0xc) = uVar14;
                  *(undefined4 *)(puVar12 + iVar6 + 0x10) = 0x3f800000;
                  *(undefined4 *)(puVar12 + iVar6 + 0x14) = uVar14;
                }
                else {
                  *(double *)(puVar12 + iVar6) = in_xd12;
                  *(undefined8 *)(puVar12 + iVar6 + 4) = in_xd6;
                  *(double *)(puVar12 + iVar6 + 8) = in_xd12;
                  *(double *)(puVar12 + iVar6 + 0xc) = in_xd12;
                  *(undefined8 *)(puVar12 + iVar6 + 0x10) = in_xd6;
                  *(double *)(puVar12 + iVar6 + 0x14) = in_xd12;
                }
                if (iVar7 == *(short *)(*(int *)(puVar12 + (int)DAT_8c067646 + iVar6 + -4) + 2)) {
                  if (in_FPSCR_SZ == '\0') {
                    uVar14 = *(undefined4 *)
                              (*(int *)(puVar12 + (int)DAT_8c067646 + iVar6 + -4) + 0xc);
                    uVar13 = CONCAT44(uVar14,SUB84(in_dr2,0));
                    *(undefined4 *)(puVar12 + iVar6) = uVar14;
                  }
                  else {
                    uVar13 = *(undefined8 *)
                              (*(int *)(puVar12 + (int)DAT_8c067646 + iVar6 + -4) + 0xc);
                    *(undefined8 *)(puVar12 + iVar6) = uVar13;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    uVar14 = *(undefined4 *)
                              (*(int *)(puVar12 + (int)DAT_8c067646 + iVar6 + -4) + 0x10);
                    in_dr2 = (double)CONCAT44(uVar14,(int)uVar13);
                    *(undefined4 *)(puVar12 + iVar6 + 8) = uVar14;
                  }
                  else {
                    in_dr2 = *(double *)(*(int *)(puVar12 + (int)DAT_8c067646 + iVar6 + -4) + 0x10);
                    *(double *)(puVar12 + iVar6 + 8) = in_dr2;
                  }
                }
                else {
                  (*(code *)PTR_FUN_8c067658)
                            (*(undefined4 *)(puVar12 + (int)DAT_8c06764e + iVar6 + -4),
                             iVar11 + iVar7 * 4,puVar12 + iVar6,puVar12 + iVar6 + 8);
                }
                if ((*(int *)(puVar12 + (int)DAT_8c067648 + iVar6 + -4) == 0) ||
                   (iVar7 != *(ushort *)(*(int *)(puVar12 + (int)DAT_8c06764a + iVar6 + -4) + 2) - 2
                   )) {
                  (*(code *)puVar3)(*(undefined4 *)(puVar12 + (int)DAT_8c06764e + iVar6 + -4),
                                    iVar11 + iVar5 * 4,puVar12 + iVar6 + 0xc,puVar12 + iVar6 + 0x14)
                  ;
                }
                else {
                  *(undefined2 *)(puVar12 + iVar6 + -4) = *(undefined2 *)(iVar11 + (iVar7 + 1) * 4);
                  uVar14 = *(undefined4 *)(puVar12 + (int)DAT_8c06764e + iVar6 + -4);
                  uVar10 = *(undefined4 *)(puVar12 + (int)DAT_8c067652 + iVar6 + -4);
                  puVar12[iVar6 + -4] =
                       (puVar12[iVar6 + -4] & (byte)DAT_8c06764c | 0x10) & (byte)DAT_8c067650 | 8;
                  (*(code *)puVar3)(uVar14,uVar10,puVar12 + iVar6 + 0xc,puVar12 + iVar6 + 0x14);
                }
                if (in_FPSCR_SZ == '\0') {
                  param_1 = CONCAT44(*(undefined4 *)(puVar12 + (int)DAT_8c067654 + iVar6 + -4),
                                     uVar15);
                }
                else {
                  param_1 = *(undefined8 *)(puVar12 + (int)DAT_8c067654 + iVar6 + -4);
                }
                uVar13 = FUN_8c0667b0(param_1,param_2,puVar12 + iVar6,puVar12 + iVar6 + 0xc);
                uVar15 = SUB84(dVar20,0);
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(puVar12 + (int)DAT_8c067654 + iVar6 + -4) =
                       (int)((ulonglong)uVar13 >> 0x20);
                }
                else {
                  *(undefined8 *)(puVar12 + (int)DAT_8c067654 + iVar6 + -4) = uVar13;
                }
                if ((*(int *)(puVar12 + (int)DAT_8c067648 + iVar6 + -4) != 0) &&
                   (iVar7 == *(ushort *)(*(int *)(puVar12 + (int)DAT_8c06764a + iVar6 + -4) + 2) - 2
                   )) {
                  *(undefined4 *)(puVar12 + iVar6) = *(undefined4 *)(puVar12 + iVar6 + 0xc);
                  *(undefined4 *)(puVar12 + iVar6 + 4) = *(undefined4 *)(puVar12 + iVar6 + 0x10);
                  *(undefined4 *)(puVar12 + iVar6 + 8) = *(undefined4 *)(puVar12 + iVar6 + 0x14);
                  dVar20 = in_xd12;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)CONCAT44(uVar15,SUB84(in_dr14,0));
                  }
                  (*(code *)puVar3)(*(undefined4 *)(puVar12 + (int)DAT_8c0677a2 + iVar6 + -4),
                                    iVar11 + (iVar7 + 1) * 4,puVar12 + iVar6 + 0xc,
                                    puVar12 + iVar6 + 0x14);
                  if (in_FPSCR_SZ == '\0') {
                    dVar17 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6 + 0xc),
                                              *(undefined4 *)(puVar12 + iVar6));
                    dVar21 = in_xd8;
                    in_dr14 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),uVar15);
                  }
                  else {
                    dVar21 = *(double *)(puVar12 + iVar6);
                    dVar17 = *(double *)(puVar12 + iVar6 + 0xc);
                    in_dr14 = dVar20;
                  }
                  fVar18 = (float)((ulonglong)dVar17 >> 0x20);
                  dVar20 = in_xd12;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)CONCAT44(uVar15,uVar15);
                  }
                  uVar15 = SUB84(in_dr2,0);
                  in_xd8 = in_xd12;
                  if (SUB84(dVar17,0) == fVar18) {
                    if (in_FPSCR_SZ == '\0') {
                      dVar17 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6 + 0x14),
                                                *(undefined4 *)(puVar12 + iVar6 + 8));
                    }
                    else {
                      dVar21 = *(double *)(puVar12 + iVar6 + 8);
                      dVar17 = *(double *)(puVar12 + iVar6 + 0x14);
                    }
                    fVar18 = SUB84(dVar17,0);
                    fVar19 = (float)((ulonglong)dVar17 >> 0x20);
                    if (in_FPSCR_PR == '\0' && fVar19 < fVar18) {
                      if (in_FPSCR_SZ == '\0') {
                        in_dr2 = (double)CONCAT44(*(undefined4 *)
                                                   (puVar12 + (int)DAT_8c0677a4 + iVar6 + -4),uVar15
                                                 );
                      }
                      else {
                        in_dr2 = *(double *)(puVar12 + (int)DAT_8c0677a4 + iVar6 + -4);
                      }
                      if (in_FPSCR_PR == '\0') {
                        dVar17 = (double)(ulonglong)
                                         (uint)(fVar18 - (float)((ulonglong)in_dr2 >> 0x20));
                      }
                      else {
                        dVar17 = dVar17 - in_dr2;
                      }
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)(puVar12 + iVar6 + 8) = SUB84(dVar17,0);
                        dVar20 = (double)CONCAT44(DAT_8c0677b0,SUB84(dVar20,0));
                      }
                      else {
                        *(double *)(puVar12 + iVar6 + 8) = dVar21;
                        dVar20 = (double)CONCAT44(DAT_8c0677b4,DAT_8c0677b0);
                      }
                      iVar7 = 8;
                      goto LAB_8c0676c2;
                    }
                    if (in_FPSCR_PR == '\0' && fVar18 < fVar19) {
                      if (in_FPSCR_SZ == '\0') {
                        in_dr2 = (double)CONCAT44(*(undefined4 *)
                                                   (puVar12 + (int)DAT_8c0677a4 + iVar6 + -4),uVar15
                                                 );
                      }
                      else {
                        in_dr2 = *(double *)(puVar12 + (int)DAT_8c0677a4 + iVar6 + -4);
                      }
                      if (in_FPSCR_PR == '\0') {
                        dVar17 = (double)(ulonglong)
                                         (uint)(fVar18 + (float)((ulonglong)in_dr2 >> 0x20));
                      }
                      else {
                        dVar17 = dVar17 + in_dr2;
                      }
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)(puVar12 + iVar6 + 8) = SUB84(dVar17,0);
                        dVar20 = (double)CONCAT44(DAT_8c0677b4,SUB84(dVar20,0));
                      }
                      else {
                        *(double *)(puVar12 + iVar6 + 8) = dVar21;
                        dVar20 = (double)CONCAT44(PTR_DAT_8c0677b8,DAT_8c0677b4);
                      }
                      iVar7 = 4;
                      goto LAB_8c0676c2;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      dVar17 = (double)((ulonglong)dVar20 & 0xffffffff);
                      in_xd8 = dVar21;
                    }
                  }
                  else {
                    if (in_FPSCR_SZ == '\0') {
                      dVar16 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6),SUB84(dVar16,0));
                      dVar17 = (double)CONCAT44(fVar18,*(undefined4 *)(puVar12 + iVar6 + 0xc));
                    }
                    else {
                      dVar16 = *(double *)(puVar12 + iVar6);
                      dVar21 = *(double *)(puVar12 + iVar6 + 0xc);
                    }
                    fVar18 = (float)((ulonglong)dVar16 >> 0x20);
                    if (in_FPSCR_PR == '\0') {
                      bVar22 = SUB84(dVar17,0) < fVar18;
                    }
                    else {
                      bVar22 = dVar17 < dVar16;
                    }
                    uVar14 = (undefined4)((ulonglong)in_dr14 >> 0x20);
                    if (bVar22) {
                      iVar7 = 2;
                      if (in_FPSCR_SZ == '\0') {
                        in_dr2 = (double)CONCAT44(*(undefined4 *)
                                                   (puVar12 + (int)DAT_8c0677a4 + iVar6 + -4),uVar15
                                                 );
                        in_dr14 = (double)CONCAT44(uVar14,DAT_8c0677b0);
                      }
                      else {
                        in_dr2 = *(double *)(puVar12 + (int)DAT_8c0677a4 + iVar6 + -4);
                      }
                      if (in_FPSCR_PR == '\0') {
                        dVar16 = (double)CONCAT44(fVar18 - (float)((ulonglong)in_dr2 >> 0x20),
                                                  SUB84(dVar16,0));
                      }
                      else {
                        dVar16 = dVar16 - in_dr2;
                      }
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)(puVar12 + iVar6) = (int)((ulonglong)dVar16 >> 0x20);
                      }
                      else {
                        *(double *)(puVar12 + iVar6) = dVar16;
                      }
LAB_8c0676c2:
                      iVar8 = (int)DAT_8c0677a8;
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)(puVar12 + (int)DAT_8c0677a6 + iVar6 + -4) = SUB84(dVar20,0);
                      }
                      else {
                        *(double *)(puVar12 + (int)DAT_8c0677a6 + iVar6 + -4) = in_xd12;
                      }
                      if (in_FPSCR_SZ == '\0') {
                        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),DAT_8c0677b4);
                      }
                      else {
                        in_xd12 = (double)CONCAT44(PTR_DAT_8c0677b8,DAT_8c0677b4);
                      }
LAB_8c0676d4:
                      puVar3 = PTR_DAT_8c0677b8;
                      if (in_FPSCR_SZ == '\0') {
                        dVar17 = (double)(ulonglong)*(uint *)(puVar12 + iVar6);
                        dVar16 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6 + 8),
                                                  SUB84(dVar16,0));
                      }
                      else {
                        dVar21 = *(double *)(puVar12 + iVar6);
                        dVar16 = *(double *)(puVar12 + iVar6 + 8);
                      }
                      fVar18 = (float)((ulonglong)in_dr14 >> 0x20);
                      if (in_FPSCR_PR == '\0') {
                        dVar17 = (double)(ulonglong)
                                         (uint)(fVar18 * SUB84(in_dr14,0) + SUB84(dVar17,0));
                        dVar16 = (double)CONCAT44(fVar18 * (float)((ulonglong)dVar20 >> 0x20) +
                                                  (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0)
                                                 );
                      }
                      uVar15 = SUB84(dVar17,0);
                      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
                      in_xd8 = dVar21;
                      if (iVar7 == 1) {
                        if (in_FPSCR_SZ == '\0') {
                          dVar17 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6 + 0xc),uVar15);
                        }
                        else {
                          dVar17 = *(double *)(puVar12 + iVar6 + 0xc);
                        }
                        if (in_FPSCR_PR == '\0' &&
                            (float)((ulonglong)dVar17 >> 0x20) < SUB84(dVar17,0)) break;
                      }
                      else if (iVar7 == 2) {
                        if (in_FPSCR_SZ == '\0') {
                          dVar17 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6 + 0xc),uVar15);
                        }
                        else {
                          dVar17 = *(double *)(puVar12 + iVar6 + 0xc);
                        }
                        fVar19 = (float)((ulonglong)dVar17 >> 0x20);
                        if (in_FPSCR_PR == '\0' && SUB84(dVar17,0) < fVar19) {
                          if (in_FPSCR_PR == '\0') {
                            dVar17 = (double)CONCAT44(fVar19,SUB84(dVar17,0) - fVar19);
                          }
                          else {
                            dVar17 = dVar17 - dVar17;
                          }
                          if (in_FPSCR_SZ == '\0') {
                            dVar20 = (double)(ulonglong)
                                             *(uint *)(puVar12 + (int)DAT_8c067926 + iVar6 + -4);
                          }
                          else {
                            in_xd12 = *(double *)(puVar12 + (int)DAT_8c067926 + iVar6 + -4);
                          }
                          if (in_FPSCR_PR == '\0') {
                            dVar17 = (double)(ulonglong)(uint)ABS(SUB84(dVar17,0));
                          }
                          else {
                            dVar17 = ABS(dVar17);
                          }
                          goto LAB_8c067780;
                        }
                      }
                      else if (iVar7 == 4) {
                        if (in_FPSCR_SZ == '\0') {
                          dVar17 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6 + 0x14),uVar15);
                        }
                        else {
                          dVar17 = *(double *)(puVar12 + iVar6 + 0x14);
                        }
                        fVar19 = (float)((ulonglong)dVar17 >> 0x20);
                        if (in_FPSCR_PR == '\0') {
                          bVar22 = fVar19 < fVar18;
                        }
                        else {
                          bVar22 = dVar17 < dVar16;
                        }
                        if (bVar22) {
                          if (in_FPSCR_PR == '\0') {
                            dVar16 = (double)CONCAT44(fVar18 - fVar19,SUB84(dVar16,0));
                          }
                          else {
                            dVar16 = dVar16 - dVar17;
                          }
                          if (in_FPSCR_SZ == '\0') {
                            dVar20 = (double)(ulonglong)
                                             *(uint *)(puVar12 + (int)DAT_8c067926 + iVar6 + -4);
                          }
                          else {
                            in_xd12 = *(double *)(puVar12 + (int)DAT_8c067926 + iVar6 + -4);
                          }
                          if (in_FPSCR_PR == '\0') {
                            in_xd8 = (double)CONCAT44(ABS((float)((ulonglong)dVar16 >> 0x20)),
                                                      SUB84(dVar16,0));
                          }
                          else {
                            in_xd8 = ABS(dVar16);
                          }
                          if (in_FPSCR_SZ == '\0') {
                            dVar17 = (double)((ulonglong)in_xd8 >> 0x20);
                            in_xd8 = dVar21;
                          }
                          goto LAB_8c067780;
                        }
                      }
                      else if (iVar7 == 8) {
                        if (in_FPSCR_SZ == '\0') {
                          dVar17 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6 + 0x14),uVar15);
                        }
                        else {
                          dVar17 = *(double *)(puVar12 + iVar6 + 0x14);
                        }
                        fVar19 = (float)((ulonglong)dVar17 >> 0x20);
                        if (in_FPSCR_PR == '\0') {
                          bVar22 = fVar18 < fVar19;
                        }
                        else {
                          bVar22 = dVar16 < dVar17;
                        }
                        if (bVar22) {
                          if (in_FPSCR_PR == '\0') {
                            dVar16 = (double)CONCAT44(fVar18 - fVar19,SUB84(dVar16,0));
                          }
                          else {
                            dVar16 = dVar16 - dVar17;
                          }
                          if (in_FPSCR_SZ == '\0') {
                            dVar20 = (double)(ulonglong)
                                             *(uint *)(puVar12 + (int)DAT_8c067926 + iVar6 + -4);
                          }
                          else {
                            in_xd12 = *(double *)(puVar12 + (int)DAT_8c067926 + iVar6 + -4);
                          }
                          if (in_FPSCR_PR == '\0') {
                            in_xd8 = (double)CONCAT44(ABS((float)((ulonglong)dVar16 >> 0x20)),
                                                      SUB84(dVar16,0));
                          }
                          else {
                            in_xd8 = ABS(dVar16);
                          }
                          if (in_FPSCR_SZ == '\0') {
                            dVar17 = (double)((ulonglong)in_xd8 >> 0x20);
                            in_xd8 = dVar21;
                          }
                          goto LAB_8c067780;
                        }
                      }
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)(DAT_8c0677a8 + param_2) = SUB84(dVar17,0);
                      }
                      else {
                        *(double *)(DAT_8c0677a8 + param_2) = dVar21;
                      }
                      puVar4 = PTR_FUN_8c0677bc;
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)(DAT_8c0677aa + param_2) = SUB84(dVar20,0);
                      }
                      else {
                        *(double *)(DAT_8c0677aa + param_2) = in_xd12;
                      }
                      if (in_FPSCR_SZ == '\0') {
                        *(float *)(DAT_8c0677ac + param_2) = fVar18;
                      }
                      else {
                        *(double *)(DAT_8c0677ac + param_2) = dVar16;
                      }
                      *(undefined **)(puVar12 + (int)DAT_8c0677ae + iVar6 + -4) = puVar3;
                      (*(code *)puVar4)(puVar12 + iVar6 + 0x18,param_2 + iVar8,0,0);
                      uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
                      (*(code *)PTR_FUN_8c0677c0)(puVar12 + iVar6 + 0x18);
                      dVar16 = (double)CONCAT44(uVar15,0x3f800000);
                      *(undefined **)(puVar12 + (int)DAT_8c0677ae + iVar6 + -4) = PTR_DAT_8c0677c4;
                      if (in_FPSCR_PR == '\0') {
                        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) + 1.0,
                                                   SUB84(in_dr14,0));
                      }
                      else {
                        in_dr14 = in_dr14 + dVar16;
                      }
                      goto LAB_8c0676d4;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      dVar17 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6),SUB84(dVar17,0));
                    }
                    else {
                      dVar17 = *(double *)(puVar12 + iVar6);
                    }
                    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar17 >> 0x20) < SUB84(dVar17,0))
                    {
                      iVar7 = 1;
                      if (in_FPSCR_SZ == '\0') {
                        in_dr2 = (double)CONCAT44(*(undefined4 *)
                                                   (puVar12 + (int)DAT_8c0677a4 + iVar6 + -4),uVar15
                                                 );
                        in_dr14 = (double)CONCAT44(uVar14,DAT_8c0677b4);
                      }
                      else {
                        in_dr2 = *(double *)(puVar12 + (int)DAT_8c0677a4 + iVar6 + -4);
                      }
                      if (in_FPSCR_PR == '\0') {
                        dVar16 = (double)CONCAT44(fVar18 + (float)((ulonglong)in_dr2 >> 0x20),
                                                  SUB84(dVar16,0));
                      }
                      else {
                        dVar16 = dVar16 + in_dr2;
                      }
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)(puVar12 + iVar6) = (int)((ulonglong)dVar16 >> 0x20);
                      }
                      else {
                        *(double *)(puVar12 + iVar6) = dVar16;
                      }
                      goto LAB_8c0676c2;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      dVar17 = (double)((ulonglong)dVar20 & 0xffffffff);
                      in_xd8 = dVar21;
                    }
                  }
                  goto LAB_8c067780;
                }
                goto LAB_8c067602;
              }
              goto LAB_8c067444;
            }
            goto LAB_8c067454;
          }
          *(int *)(puVar12 + (int)DAT_8c067536 + iVar6 + -4) =
               *(int *)(puVar12 + (int)DAT_8c067536 + iVar6 + -4) + 0x14;
          goto LAB_8c067464;
        }
      }
    }
LAB_8c06746c:
    *(int *)(puVar12 + (int)DAT_8c067538 + iVar6 + -4) =
         *(int *)(puVar12 + (int)DAT_8c067538 + iVar6 + -4) + (int)DAT_8c06753a;
    iVar7 = *(int *)(puVar12 + (int)DAT_8c06753c + iVar6 + -4);
    *(int *)(puVar12 + (int)DAT_8c06753c + iVar6 + -4) = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      (*(code *)PTR__njPopMatrixEx_8c067548)();
      return;
    }
  } while( true );
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)(ulonglong)*(uint *)(puVar12 + (int)DAT_8c067926 + iVar6 + -4);
    dVar16 = (double)CONCAT44(*(undefined4 *)(puVar12 + iVar6 + 0xc),SUB84(dVar17,0));
  }
  else {
    in_xd12 = *(double *)(puVar12 + (int)DAT_8c067926 + iVar6 + -4);
    dVar16 = *(double *)(puVar12 + iVar6 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)(ulonglong)(uint)ABS(SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20));
  }
  else {
    dVar17 = ABS(dVar16 - dVar16);
  }
LAB_8c067780:
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar12 + (int)DAT_8c0677a4 + iVar6 + -4) = SUB84(dVar17,0);
  }
  else {
    *(double *)(puVar12 + (int)DAT_8c0677a4 + iVar6 + -4) = in_xd8;
  }
LAB_8c067602:
  uVar9 = (uint)*(ushort *)(*(int *)(puVar12 + (int)DAT_8c06764a + iVar6 + -4) + 2);
  *(ushort *)(puVar12 + (int)DAT_8c067656 + iVar6 + -4) =
       *(ushort *)(*(int *)(puVar12 + (int)DAT_8c06764a + iVar6 + -4) + 2);
LAB_8c067444:
  iVar7 = iVar5;
  if ((int)(uVar9 - 2) < iVar5) goto code_r0x8c06744c;
  goto LAB_8c0673ba;
code_r0x8c06744c:
  iVar7 = *(int *)((int)DAT_8c067532 + *(int *)(puVar12 + (int)DAT_8c067530 + iVar6 + -4));
LAB_8c067454:
  *(int *)(puVar12 + (int)DAT_8c067534 + iVar6 + -4) =
       *(int *)(puVar12 + (int)DAT_8c067534 + iVar6 + -4) + 1;
  *(int *)(puVar12 + (int)DAT_8c067536 + iVar6 + -4) =
       *(int *)(puVar12 + (int)DAT_8c067536 + iVar6 + -4) + 0x14;
LAB_8c067464:
  if (iVar7 <= *(int *)(puVar12 + (int)DAT_8c067534 + iVar6 + -4)) goto LAB_8c06746c;
  goto LAB_8c067390;
}

