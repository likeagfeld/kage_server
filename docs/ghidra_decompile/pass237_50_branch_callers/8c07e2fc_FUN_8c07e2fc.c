// entry: 8c07e2fc
// name: FUN_8c07e2fc
// signature: undefined FUN_8c07e2fc(void)


/* WARNING: Removing unreachable block (ram,0x8c07e38a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c07e2fc(double param_1,double param_2,double param_3,int param_4)

{
  char cVar1;
  double *pdVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  code *pcVar18;
  int iVar19;
  undefined4 uVar20;
  short sVar21;
  uint *puVar22;
  ushort *puVar23;
  ushort *puVar24;
  code *pcVar25;
  int iVar26;
  undefined1 *puVar27;
  float fVar29;
  undefined8 uVar28;
  double dVar30;
  float fVar31;
  undefined *puVar32;
  ulonglong in_dr12;
  double dVar33;
  undefined *puVar34;
  double in_dr14;
  float fVar35;
  undefined8 in_xd4;
  double in_xd8;
  undefined8 in_xd12;
  double in_xd14;
  bool bVar36;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte abStack_8024 [32744];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)(in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr12;
    puVar27 = auStack_2c;
  }
  else {
    puVar27 = auStack_3c;
    uStack_24 = in_dr12;
  }
  *(undefined4 *)(puVar27 + -4) = in_PR;
  iVar19 = (int)DAT_8c07e450;
  uVar20 = *(undefined4 *)(param_4 + 0x28);
  cVar1 = *(char *)(*(int *)(param_4 + 8) + 1);
  *(int *)(puVar27 + iVar19 + 0x24) = param_4;
  *(undefined4 *)(puVar27 + iVar19 + 0x28) = uVar20;
  if ((cVar1 != '\0') && (iVar12 = (*(code *)PTR_FUN_8c07e54c)(), iVar12 == 0)) {
    (*(code *)PTR_FUN_8c07e550)(*(undefined4 *)(puVar27 + iVar19 + 0x24));
  }
  *(undefined4 *)(puVar27 + iVar19 + 0x30) = 0;
  puVar23 = *(ushort **)((int)DAT_8c07e452 + *(int *)(puVar27 + iVar19 + 0x24));
  if (0 < *(int *)(puVar27 + iVar19 + 0x28)) {
    dVar33 = (double)(in_dr12 & 0xffffffff);
    *(int *)(puVar27 + iVar19 + 0x34) = *(int *)(puVar27 + iVar19 + 0x24) + (int)DAT_8c07e454;
    *(undefined1 **)(puVar27 + iVar19 + 0x38) = puVar27 + iVar19;
    *(undefined1 **)(puVar27 + iVar19 + 0x3c) = puVar27 + iVar19 + 8;
    do {
      if ((*puVar23 & 1) != 0) {
        if (*(short *)((int)DAT_8c07e458 + (int)puVar23) != 0) {
          iVar12 = (*(code *)PTR_FUN_8c07e554)
                             (*(undefined4 *)(puVar27 + iVar19 + 0x24),
                              (int)*(short *)((int)DAT_8c07e458 + (int)puVar23));
          uVar20 = SUB84(param_3,0);
          iVar13 = (*(code *)PTR_FUN_8c07e558)();
          if (iVar13 == 6) {
            param_3 = (double)CONCAT44(0x3f800000,uVar20);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(iVar12 + 8) = 0x3f800000;
            }
            else {
              *(double *)(iVar12 + 8) = param_3;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            param_3 = (double)CONCAT44((undefined4)DAT_8c07e55c,uVar20);
            *(undefined4 *)(iVar12 + 8) = (undefined4)DAT_8c07e55c;
          }
          else {
            param_3 = (double)CONCAT44(DAT_8c07e55c._4_4_,(undefined4)DAT_8c07e55c);
            *(double *)(iVar12 + 8) = param_3;
          }
        }
        if (in_FPSCR_SZ == '\0') {
          param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),
                                     *(undefined4 *)(puVar23 + 0x38));
        }
        else {
          in_xd8 = *(double *)(puVar23 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          bVar36 = (float)((ulonglong)dVar33 >> 0x20) < SUB84(param_3,0);
        }
        else {
          bVar36 = dVar33 < param_3;
        }
        *(ushort **)(puVar27 + iVar19 + 0x40) = puVar23 + 4;
        if (bVar36) {
          if (in_FPSCR_SZ == '\0') {
            dVar30 = (double)CONCAT44(DAT_8c07e464,SUB84(param_3,0));
            param_2 = (double)CONCAT44(*(undefined4 *)DAT_8c07e460,SUB84(param_2,0));
          }
          else {
            dVar30 = (double)CONCAT44(PTR_FUN_8c07e468,DAT_8c07e464);
            param_2 = *DAT_8c07e460;
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) /
                                      (float)((ulonglong)param_2 >> 0x20),SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 / param_2;
          }
          if (SUB84(dVar30,0) == (float)((ulonglong)dVar30 >> 0x20)) {
            **(uint **)(puVar27 + iVar19 + 0x34) =
                 **(uint **)(puVar27 + iVar19 + 0x34) | (int)DAT_8c07e45a;
            if (in_FPSCR_SZ == '\0') {
              dVar30 = (double)(ulonglong)*(uint *)(puVar23 + 0x38);
            }
            else {
              in_xd8 = *(double *)(puVar23 + 0x38);
            }
          }
          if (in_FPSCR_SZ == '\0') {
            param_3 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c),
                                       SUB84(dVar30,0));
          }
          else {
            param_3 = *(double *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar35 = (float)((ulonglong)param_3 >> 0x20);
            param_3 = (double)CONCAT44(fVar35,SUB84(param_3,0) - fVar35);
          }
          else {
            param_3 = param_3 - param_3;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar23 + 0x38) = SUB84(param_3,0);
          }
          else {
            *(double *)(puVar23 + 0x38) = in_xd8;
          }
        }
        iVar12 = (*(code *)PTR_FUN_8c07e468)();
        puVar6 = PTR_FUN_8c07f300;
        puVar5 = PTR_FUN_8c07f184;
        puVar4 = PTR_FUN_8c07f16c;
        puVar3 = PTR_FUN_8c07f158;
        puVar34 = PTR_FUN_8c07eeac;
        puVar32 = PTR_FUN_8c07e6dc;
        uVar14 = SUB84(in_dr14,0);
        uVar20 = SUB84(param_2,0);
        if (iVar12 == 1) {
          iVar12 = (*(code *)PTR_FUN_8c07e558)();
          iVar26 = *(int *)(puVar27 + iVar19 + 0x24);
          iVar13 = (*(code *)PTR_FUN_8c07e558)();
          iVar12 = *(int *)((*(int *)(iVar26 + 0x20) * iVar12 + iVar13) * 4 +
                           *(int *)(DAT_8c07e546 + iVar26));
          fVar35 = (float)((ulonglong)dVar33 >> 0x20);
          if ((iVar12 != 0) && ((*(byte *)(iVar12 + 9) & 8) == 0)) {
            *(byte *)(iVar12 + 9) = *(byte *)(iVar12 + 9) & (byte)DAT_8c07e548 | 8;
            if (in_FPSCR_SZ == '\0') {
              *(float *)(iVar12 + 0xc) = fVar35;
            }
            else {
              *(double *)(iVar12 + 0xc) = dVar33;
            }
          }
          if (in_FPSCR_SZ == '\0') {
            fVar29 = *(float *)(puVar23 + 0xe);
            param_3 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x18),
                                       *(undefined4 *)(puVar23 + 6));
            dVar30 = in_xd8;
          }
          else {
            param_3 = *(double *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x18);
            fVar29 = (float)((ulonglong)*(undefined8 *)(puVar23 + 0xe) >> 0x20);
            dVar30 = *(double *)(puVar23 + 6);
          }
          if (in_FPSCR_PR == '\0') {
            param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) - SUB84(param_3,0),
                                       SUB84(param_3,0));
          }
          else {
            param_3 = param_3 - param_3;
          }
          if (in_FPSCR_SZ == '\0') {
            param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),DAT_8c07e55c._4_4_);
          }
          else {
            dVar30 = (double)CONCAT44(DAT_8c07e564,DAT_8c07e55c._4_4_);
          }
          if (in_FPSCR_PR == '\0') {
            param_3 = (double)CONCAT44(fVar29 * SUB84(param_3,0) +
                                       (float)((ulonglong)param_3 >> 0x20),SUB84(param_3,0));
          }
          in_xd8 = param_3;
          if (in_FPSCR_SZ == '\0') {
            uVar20 = (undefined4)((ulonglong)param_3 >> 0x20);
            param_3 = (double)CONCAT44(uVar20,uVar20);
            in_xd8 = dVar30;
          }
          if (in_FPSCR_PR == '\0') {
            fVar29 = -(float)((ulonglong)param_3 >> 0x20);
            param_3 = (double)CONCAT44(fVar29,SUB84(param_3,0));
            bVar36 = fVar35 < fVar29;
          }
          else {
            param_3 = -param_3;
            bVar36 = dVar33 < param_3;
          }
          if (bVar36) {
            if (in_FPSCR_SZ == '\0') {
              dVar30 = (double)CONCAT44(DAT_8c07e568,SUB84(param_3,0));
              param_2 = (double)CONCAT44(*(undefined4 *)DAT_8c07e564,SUB84(param_2,0));
            }
            else {
              dVar30 = (double)CONCAT44(uRam8c07e56c,DAT_8c07e568);
              param_2 = *DAT_8c07e564;
            }
            if (in_FPSCR_PR == '\0') {
              param_3 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) /
                                         (float)((ulonglong)param_2 >> 0x20) + SUB84(dVar30,0),
                                         SUB84(dVar30,0));
            }
            else {
              param_3 = dVar30 / param_2 + dVar30 / param_2;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar23 + 10) = (int)((ulonglong)param_3 >> 0x20);
            }
            else {
              *(double *)(puVar23 + 10) = param_3;
            }
          }
          else {
            *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf | 0x20;
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar23 + 10) = fVar35;
            }
            else {
              *(double *)(puVar23 + 10) = dVar33;
            }
          }
        }
        else if (iVar12 == 2) {
LAB_8c07e844:
          puVar32 = PTR_FUN_8c07e86c;
          if ((**(uint **)(puVar27 + iVar19 + 0x24) & 0x20) == 0) {
            iVar12 = *(int *)(puVar27 + iVar19 + 0x24);
            if (in_FPSCR_SZ == '\0') {
              in_dr14 = (double)CONCAT44(*(undefined4 *)(puVar23 + 6),SUB84(in_dr14,0));
              param_3 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x18),SUB84(param_3,0));
            }
            else {
              in_dr14 = *(double *)(puVar23 + 6);
              param_3 = *(double *)(iVar12 + 0x18);
            }
            puVar24 = puVar23 + 1;
            if (in_FPSCR_PR == '\0') {
              in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) -
                                         (float)((ulonglong)param_3 >> 0x20),SUB84(in_dr14,0));
            }
            else {
              in_dr14 = in_dr14 - param_3;
            }
            uVar20 = (*(code *)PTR_FUN_8c07e86c)();
            uVar14 = (*(code *)puVar32)();
            iVar12 = (*(code *)PTR_FUN_8c07ea00)(iVar12,uVar20,uVar14);
            puVar32 = PTR_FUN_8c07ea04;
            if (iVar12 == 0) {
              iVar12 = (*(code *)PTR_FUN_8c07ea04)();
              iVar13 = (*(code *)puVar32)();
              puVar34 = PTR_FUN_8c07ec30;
              puVar32 = PTR_FUN_8c07ea04;
              fVar35 = (float)((ulonglong)in_dr14 >> 0x20);
              if ((*(char *)(*(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x20) * iVar12 + iVar13 +
                            *(int *)((int)DAT_8c07e9f4 + *(int *)(puVar27 + iVar19 + 0x24))) !=
                   '\x03') && (((puVar23[8] & 7) == 4 || ((puVar23[8] & 7) == 5)))) {
                param_3 = (double)CONCAT44(0x3f800000,SUB84(param_3,0));
                if (in_FPSCR_PR == '\0') {
                  bVar36 = 1.0 < fVar35;
                }
                else {
                  bVar36 = param_3 < in_dr14;
                }
                if (!bVar36) {
                  uVar20 = (*(code *)PTR_FUN_8c07ea04)();
                  *(undefined4 *)(puVar27 + (int)DAT_8c07e9f6 + iVar19 + -4) = uVar20;
                  iVar12 = (*(code *)puVar32)();
                  *(undefined4 *)
                   ((*(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x20) *
                     *(int *)(puVar27 + (int)DAT_8c07e9f6 + iVar19 + -4) + iVar12) * 4 +
                   *(int *)((int)DAT_8c07e9f8 + *(int *)(puVar27 + iVar19 + 0x24))) = 0;
                  puVar22 = *(uint **)(puVar27 + iVar19 + 0x34);
                  *(byte *)((int)puVar23 + 9) =
                       *(byte *)((int)puVar23 + 9) & 0xf | (byte)DAT_8c07e9fa;
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(puVar23 + 0xc) = (int)((ulonglong)dVar33 >> 0x20);
                  }
                  else {
                    *(double *)(puVar23 + 0xc) = dVar33;
                  }
                  **(uint **)(puVar27 + iVar19 + 0x34) = *puVar22 | DAT_8c07ea08;
                  goto LAB_8c07e420;
                }
              }
              fVar29 = (float)((ulonglong)dVar33 >> 0x20);
              if (in_FPSCR_PR == '\0') {
                bVar36 = fVar29 < fVar35;
              }
              else {
                bVar36 = dVar33 < in_dr14;
              }
              if (bVar36) {
                if (in_FPSCR_SZ == '\0') {
                  param_2 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0xe),0x3f800000);
                  dVar30 = (double)CONCAT44(DAT_8c07ec2c,SUB84(param_3,0));
                }
                else {
                  param_2 = *(double *)(puVar23 + 0xe);
                  dVar30 = (double)CONCAT44(PTR_FUN_8c07ec30,DAT_8c07ec2c);
                }
                if (in_FPSCR_PR == '\0') {
                  fVar29 = (float)((ulonglong)param_2 >> 0x20);
                  param_2 = (double)CONCAT44(fVar29,SUB84(param_2,0) / fVar29);
                }
                else {
                  param_2 = param_2 / param_2;
                }
                dVar7 = param_2;
                if (in_FPSCR_SZ == '\0') {
                  dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),
                                            (int)((ulonglong)param_2 >> 0x20));
                  dVar7 = in_xd8;
                }
                in_xd8 = dVar7;
                if (in_FPSCR_PR == '\0') {
                  fVar29 = (float)((ulonglong)dVar30 >> 0x20);
                  param_3 = (double)CONCAT44(fVar29,(SUB84(dVar30,0) * fVar29 - fVar35) *
                                                    SUB84(param_2,0));
                }
                else {
                  param_3 = (dVar30 * dVar30 - in_dr14) * param_2;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(puVar23 + 10) = SUB84(param_3,0);
                }
                else {
                  *(double *)(puVar23 + 10) = in_xd8;
                }
                uVar20 = (*(code *)puVar34)();
                uVar14 = (*(code *)puVar34)();
                iVar12 = (*(code *)PTR_FUN_8c07ec34)
                                   (*(undefined4 *)(puVar27 + iVar19 + 0x24),uVar20,uVar14);
                puVar32 = PTR_FUN_8c07ec30;
                uVar20 = SUB84(in_dr14,0);
                if (iVar12 != 0) {
                  iVar12 = *(int *)(puVar27 + iVar19 + 0x24);
                  in_dr14 = (double)(*(code *)PTR_FUN_8c07ec38)(iVar12);
                  if (in_FPSCR_SZ == '\0') {
                    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar20);
                  }
                  dVar30 = (double)(*(code *)PTR_FUN_8c07ec38)(iVar12);
                  if (in_FPSCR_PR == '\0') {
                    in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) +
                                               (float)((ulonglong)dVar30 >> 0x20),SUB84(in_dr14,0));
                  }
                  else {
                    in_dr14 = in_dr14 + dVar30;
                  }
                  uVar20 = (*(code *)puVar32)();
                  *(undefined4 *)(puVar27 + (int)DAT_8c07ec26 + iVar19 + -4) = uVar20;
                  iVar13 = (*(code *)puVar32)();
                  fVar35 = (float)((ulonglong)dVar33 >> 0x20);
                  fVar29 = (float)((ulonglong)in_dr14 >> 0x20);
                  if (in_FPSCR_PR == '\0') {
                    bVar36 = fVar35 < fVar29;
                  }
                  else {
                    bVar36 = dVar33 < in_dr14;
                  }
                  *(undefined4 *)
                   ((*(int *)(iVar12 + 0x20) * *(int *)(puVar27 + (int)DAT_8c07ec26 + iVar19 + -4) +
                    iVar13) * 4 + *(int *)(DAT_8c07ec28 + iVar12)) = 0;
                  puVar32 = PTR_FUN_8c07ec3c;
                  if (in_FPSCR_SZ == '\0') {
                    in_dr14 = (double)CONCAT44(fVar29,*(undefined4 *)(puVar23 + 0x32));
                    dVar33 = (double)CONCAT44(fVar35,*(undefined4 *)(puVar23 + 0x36));
                  }
                  else {
                    in_xd14 = *(double *)(puVar23 + 0x32);
                    in_xd12 = *(undefined8 *)(puVar23 + 0x36);
                  }
                  if (bVar36) {
                    do {
                      uVar20 = *(undefined4 *)(puVar27 + iVar19 + 0x24);
                      uVar15 = (*(code *)PTR_FUN_8c07ec40)(uVar20,puVar24);
                      uVar16 = (*(code *)PTR_FUN_8c07ec44)(uVar20,puVar24);
                      (*(code *)puVar32)(uVar16 & uVar15);
                      uVar15 = (*(code *)PTR_FUN_8c07ec30)();
                      if ((uVar15 & 1) == 0) {
                        uVar15 = (*(code *)PTR_FUN_8c07ec30)();
                        if ((uVar15 & 2) == 0) {
                          uVar15 = (*(code *)PTR_FUN_8c07ec30)();
                          if ((uVar15 & 4) == 0) {
                            uVar15 = (*(code *)PTR_FUN_8c07ece4)();
                            if ((uVar15 & 8) == 0) break;
                            if (in_FPSCR_SZ == '\0') {
                              dVar30 = (double)CONCAT44(DAT_8c07ece8,SUB84(param_3,0));
                            }
                            else {
                              dVar30 = (double)CONCAT44(PTR_FUN_8c07ecec,DAT_8c07ece8);
                            }
                            if (in_FPSCR_PR == '\0') {
                              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                                        SUB84(dVar33,0) +
                                                        (float)((ulonglong)dVar30 >> 0x20));
                              pcVar18 = (code *)PTR_FUN_8c07ecec;
                              pcVar25 = (code *)PTR_FUN_8c07ecf0;
                            }
                            else {
                              dVar33 = dVar33 + dVar30;
                              pcVar18 = (code *)PTR_FUN_8c07ecec;
                              pcVar25 = (code *)PTR_FUN_8c07ecf0;
                            }
                          }
                          else {
                            if (in_FPSCR_SZ == '\0') {
                              dVar30 = (double)CONCAT44(DAT_8c07ec48,SUB84(param_3,0));
                            }
                            else {
                              dVar30 = (double)CONCAT44(PTR_FUN_8c07ec4c,DAT_8c07ec48);
                            }
                            pcVar18 = (code *)PTR_FUN_8c07ec4c;
                            pcVar25 = (code *)PTR_FUN_8c07ec50;
                            if (in_FPSCR_PR == '\0') {
                              dVar33 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),
                                                        SUB84(dVar33,0) +
                                                        (float)((ulonglong)dVar30 >> 0x20));
                            }
                            else {
                              dVar33 = dVar33 + dVar30;
                            }
                          }
                        }
                        else {
                          if (in_FPSCR_SZ == '\0') {
                            dVar30 = (double)CONCAT44(DAT_8c07ec5c,SUB84(param_3,0));
                          }
                          else {
                            dVar30 = (double)CONCAT44(uRam8c07ec60,DAT_8c07ec5c);
                          }
                          pcVar18 = (code *)PTR_FUN_8c07ec4c;
                          pcVar25 = (code *)PTR_FUN_8c07ec50;
                          if (in_FPSCR_PR == '\0') {
                            in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                                       SUB84(in_dr14,0) +
                                                       (float)((ulonglong)dVar30 >> 0x20));
                          }
                          else {
                            in_dr14 = in_dr14 + dVar30;
                          }
                        }
                      }
                      else {
                        if (in_FPSCR_SZ == '\0') {
                          dVar30 = (double)CONCAT44(DAT_8c07ec48,SUB84(param_3,0));
                        }
                        else {
                          dVar30 = (double)CONCAT44(PTR_FUN_8c07ec4c,DAT_8c07ec48);
                        }
                        pcVar18 = (code *)PTR_FUN_8c07ec4c;
                        pcVar25 = (code *)PTR_FUN_8c07ec50;
                        if (in_FPSCR_PR == '\0') {
                          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                                     SUB84(in_dr14,0) +
                                                     (float)((ulonglong)dVar30 >> 0x20));
                        }
                        else {
                          in_dr14 = in_dr14 + dVar30;
                        }
                      }
                      uVar20 = SUB84(dVar30,0);
                      dVar30 = in_xd14;
                      if (in_FPSCR_SZ == '\0') {
                        dVar30 = (double)CONCAT44(SUB84(in_dr14,0),SUB84(param_1,0));
                      }
                      param_1 = dVar30;
                      uVar28 = in_xd12;
                      if (in_FPSCR_SZ == '\0') {
                        param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),SUB84(dVar33,0)
                                                  );
                        uVar28 = in_xd4;
                      }
                      in_xd4 = uVar28;
                      (*pcVar18)(*(undefined4 *)(*(int *)(puVar27 + iVar19 + 0x24) + 8),puVar24,0);
                      uVar14 = (*(code *)PTR_FUN_8c07ec30)();
                      uVar17 = (*(code *)PTR_FUN_8c07ec30)();
                      iVar12 = (*pcVar25)(*(undefined4 *)(puVar27 + iVar19 + 0x24),uVar14,uVar17);
                      if (iVar12 != 0) {
                        uVar14 = (*(code *)PTR_FUN_8c07ec30)();
                        (*(code *)PTR_FUN_8c07ec54)
                                  (*(undefined4 *)(puVar27 + iVar19 + 0x24),iVar12,uVar14);
                      }
                      if (in_FPSCR_SZ == '\0') {
                        param_3 = (double)CONCAT44(DAT_8c07ec48,uVar20);
                      }
                      else {
                        param_3 = (double)CONCAT44(PTR_FUN_8c07ec4c,DAT_8c07ec48);
                      }
                      if (in_FPSCR_PR == '\0') {
                        fVar35 = (float)((ulonglong)in_dr14 >> 0x20) +
                                 (float)((ulonglong)param_3 >> 0x20);
                        in_dr14 = (double)CONCAT44(fVar35,SUB84(in_dr14,0));
                        bVar36 = (float)((ulonglong)dVar33 >> 0x20) < fVar35;
                      }
                      else {
                        in_dr14 = in_dr14 + param_3;
                        bVar36 = dVar33 < in_dr14;
                      }
                    } while (bVar36);
                  }
                  (*(code *)PTR_FUN_8c07ec58)(*(undefined4 *)(puVar27 + iVar19 + 0x24),puVar23);
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(puVar23 + 0x32) = SUB84(in_dr14,0);
                    *(int *)(puVar23 + 0x36) = SUB84(dVar33,0);
                  }
                  else {
                    *(double *)(puVar23 + 0x32) = in_xd14;
                    *(undefined8 *)(puVar23 + 0x36) = in_xd12;
                  }
                }
              }
              else {
                bVar9 = *(byte *)((int)puVar23 + 9);
                uVar20 = *(undefined4 *)(puVar27 + iVar19 + 0x24);
                *(undefined4 *)(puVar27 + iVar19 + -4) = 1;
                *(byte *)((int)puVar23 + 9) = bVar9 & 0xf | 0x30;
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(puVar23 + 10) = fVar29;
                }
                else {
                  *(double *)(puVar23 + 10) = dVar33;
                }
                (*(code *)PTR_FUN_8c07ead4)(uVar20,puVar23,0,0);
              }
            }
            else {
              bVar9 = *(byte *)((int)puVar23 + 9);
              uVar20 = *(undefined4 *)(puVar27 + iVar19 + 0x24);
              *(undefined4 *)(puVar27 + iVar19 + -4) = 1;
              *(byte *)((int)puVar23 + 9) = bVar9 & 0xf | 0x30;
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar23 + 10) = (int)((ulonglong)dVar33 >> 0x20);
              }
              else {
                *(double *)(puVar23 + 10) = dVar33;
              }
              (*(code *)PTR_FUN_8c07ead4)(uVar20,puVar23,0,0);
            }
          }
        }
        else if (iVar12 == 3) {
          if (*(short *)((int)DAT_8c07ece2 + (int)puVar23) != 0) {
            (*(code *)PTR_FUN_8c07ecfc)
                      (*(undefined4 *)(puVar27 + iVar19 + 0x24),
                       (int)*(short *)((int)DAT_8c07ece2 + (int)puVar23));
            *(undefined2 *)((int)DAT_8c07ece2 + (int)puVar23) = 0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar30 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c),
                                      *(undefined4 *)(puVar23 + 10));
          }
          else {
            in_xd8 = *(double *)(puVar23 + 10);
            dVar30 = *(double *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar35 = SUB84(dVar30,0) + (float)((ulonglong)dVar30 >> 0x20);
          }
          else {
            fVar35 = SUB84(dVar30 + dVar30,0);
          }
          if (in_FPSCR_SZ == '\0') {
            param_2 = (double)CONCAT44(*(undefined4 *)DAT_8c07ecf4,uVar20);
            *(float *)(puVar23 + 10) = fVar35;
            param_3 = (double)CONCAT44(DAT_8c07ecf8,fVar35);
          }
          else {
            param_2 = *DAT_8c07ecf4;
            *(double *)(puVar23 + 10) = in_xd8;
            param_3 = (double)CONCAT44(PTR_FUN_8c07ecfc,DAT_8c07ecf8);
          }
          if (in_FPSCR_PR == '\0') {
            param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) /
                                       (float)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
          }
          else {
            param_3 = param_3 / param_2;
          }
          if (in_FPSCR_PR != '\0' || (float)((ulonglong)param_3 >> 0x20) <= SUB84(param_3,0)) {
            *puVar23 = *puVar23 & 0xfffe;
            *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf;
          }
        }
        else {
          if (iVar12 == 4) {
            iVar26 = *(int *)(puVar27 + iVar19 + 0x24);
            (*(code *)PTR_FUN_8c07e6d8)(iVar26,(int)*(short *)((int)DAT_8c07e6d0 + (int)puVar23));
            *(ushort **)(puVar27 + (int)DAT_8c07e6d2 + iVar19 + -4) = puVar23 + 1;
            iVar12 = (*(code *)puVar32)();
            iVar13 = (*(code *)puVar32)();
            pdVar2 = DAT_8c07e6e0;
            *(undefined4 *)
             ((*(int *)(iVar26 + 0x20) * iVar12 + iVar13) * 4 + *(int *)(DAT_8c07e6d4 + iVar26)) = 0
            ;
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44((undefined4)DAT_8c07e6e4,*(undefined4 *)pdVar2);
            }
            else {
              param_3 = (double)CONCAT44(DAT_8c07e6e4._4_4_,(undefined4)DAT_8c07e6e4);
              in_xd8 = *pdVar2;
            }
            if (in_FPSCR_PR == '\0') {
              param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) / SUB84(param_3,0),
                                         SUB84(param_3,0));
            }
            else {
              param_3 = param_3 / param_3;
            }
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),DAT_8c07e6e4._4_4_);
            }
            else {
              in_xd8 = (double)CONCAT44(PTR_FUN_8c07e6ec,DAT_8c07e6e4._4_4_);
            }
            if (in_FPSCR_PR == '\0') {
              fVar35 = (float)((ulonglong)param_3 >> 0x20) * SUB84(param_3,0);
              param_3 = (double)CONCAT44(fVar35,SUB84(param_3,0));
              bVar36 = fVar35 < (float)((ulonglong)dVar33 >> 0x20);
            }
            else {
              param_3 = param_3 * param_3;
              fVar35 = (float)((ulonglong)param_3 >> 0x20);
              bVar36 = param_3 < dVar33;
            }
            in_dr14 = param_3;
            if (in_FPSCR_SZ == '\0') {
              in_dr14 = (double)CONCAT44(fVar35,uVar14);
            }
            if (!bVar36) {
              *(undefined4 *)(puVar27 + iVar19 + 100) =
                   *(undefined4 *)(puVar27 + (int)DAT_8c07e6d2 + iVar19 + -4);
              *(ushort **)(puVar27 + iVar19 + 0x68) = puVar23 + 0x32;
              *(ushort **)(puVar27 + iVar19 + 0x6c) = puVar23 + 0x36;
              *(undefined4 *)(puVar27 + iVar19 + 0x70) = *(undefined4 *)(puVar27 + iVar19 + 0x40);
              do {
                iVar12 = (*(code *)PTR_FUN_8c07e6dc)();
                puVar32 = PTR_FUN_8c07e6dc;
                if (iVar12 != 4) break;
                uVar14 = *(undefined4 *)(puVar27 + iVar19 + 0x24);
                uVar8 = (*(code *)PTR_FUN_8c07e6dc)();
                puVar34 = PTR_FUN_8c07e6f0;
                uVar20 = *(undefined4 *)(puVar27 + iVar19 + 100);
                (*(code *)PTR_FUN_8c07e6ec)(uVar14,uVar20,uVar8);
                (*(code *)puVar34)();
                bVar9 = (*(code *)PTR_FUN_8c07e6f4)(uVar14,uVar20);
                puVar3 = PTR_FUN_8c07e6f8;
                bVar10 = (*(code *)puVar32)();
                puVar32 = PTR_FUN_8c07e6fc;
                bVar9 = bVar9 & bVar10;
                if (((puVar23[8] & 7) == 1) && (bVar9 == 0)) {
                  (*(code *)PTR_FUN_8c07e6dc)();
                  (*(code *)puVar34)();
                  bVar9 = (*(code *)PTR_FUN_8c07e6f4)
                                    (*(undefined4 *)(puVar27 + iVar19 + 0x24),
                                     *(undefined4 *)(puVar27 + iVar19 + 100));
                  bVar10 = (*(code *)PTR_FUN_8c07e6dc)();
                  bVar9 = bVar9 & bVar10;
                }
                if (bVar9 == 0) {
                  iVar12 = *(int *)(puVar27 + iVar19 + 0x24);
                  *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf | 0x20;
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x32),
                                               *(undefined4 *)(puVar23 + 0x36));
                  }
                  else {
                    param_1 = *(double *)(puVar23 + 0x32);
                    in_xd4 = *(undefined8 *)(puVar23 + 0x36);
                  }
                  uVar20 = *(undefined4 *)(puVar27 + iVar19 + 100);
                  (*(code *)puVar32)(*(undefined4 *)(iVar12 + 8),uVar20,0);
                  puVar32 = PTR_FUN_8c07ea0c;
                  *(byte *)(puVar23 + 1) =
                       ((byte)puVar23[1] & (byte)DAT_8c07e9fc | 0x10) & (byte)DAT_8c07e9fe | 8;
                  (*(code *)puVar32)(*(undefined4 *)(iVar12 + 8),uVar20,
                                     *(undefined4 *)(puVar27 + iVar19 + 0x68),
                                     *(undefined4 *)(puVar27 + iVar19 + 0x6c));
                }
                else {
                  if (bVar9 == 1) {
                    if (in_FPSCR_SZ == '\0') {
                      param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x32),DAT_8c07ea10);
                    }
                    else {
                      param_3 = *(double *)(puVar23 + 0x32);
                      in_xd8 = (double)CONCAT44(_DAT_8c07ea14,DAT_8c07ea10);
                    }
                    if (in_FPSCR_PR == '\0') {
                      param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) +
                                                 SUB84(param_3,0),SUB84(param_3,0));
                    }
                    else {
                      param_3 = param_3 + param_3;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar23 + 0x32) = (int)((ulonglong)param_3 >> 0x20);
                    }
                    else {
                      *(double *)(puVar23 + 0x32) = param_3;
                    }
                  }
                  else if (bVar9 == 2) {
                    if (in_FPSCR_SZ == '\0') {
                      param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x32),_DAT_8c07ea14);
                    }
                    else {
                      param_3 = *(double *)(puVar23 + 0x32);
                      in_xd8 = (double)CONCAT44(PTR_FUN_8c07ea18,_DAT_8c07ea14);
                    }
                    if (in_FPSCR_PR == '\0') {
                      param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) +
                                                 SUB84(param_3,0),SUB84(param_3,0));
                    }
                    else {
                      param_3 = param_3 + param_3;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar23 + 0x32) = (int)((ulonglong)param_3 >> 0x20);
                    }
                    else {
                      *(double *)(puVar23 + 0x32) = param_3;
                    }
                  }
                  else if (bVar9 == 4) {
                    if (in_FPSCR_SZ == '\0') {
                      param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x36),DAT_8c07ea10);
                    }
                    else {
                      param_3 = *(double *)(puVar23 + 0x36);
                      in_xd8 = (double)CONCAT44(_DAT_8c07ea14,DAT_8c07ea10);
                    }
                    if (in_FPSCR_PR == '\0') {
                      param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) +
                                                 SUB84(param_3,0),SUB84(param_3,0));
                    }
                    else {
                      param_3 = param_3 + param_3;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar23 + 0x36) = (int)((ulonglong)param_3 >> 0x20);
                    }
                    else {
                      *(double *)(puVar23 + 0x36) = param_3;
                    }
                  }
                  else if (bVar9 == 8) {
                    if (in_FPSCR_SZ == '\0') {
                      param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x36),DAT_8c07e700);
                    }
                    else {
                      param_3 = *(double *)(puVar23 + 0x36);
                      in_xd8 = (double)CONCAT44(uRam8c07e704,DAT_8c07e700);
                    }
                    if (in_FPSCR_PR == '\0') {
                      param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) +
                                                 SUB84(param_3,0),SUB84(param_3,0));
                    }
                    else {
                      param_3 = param_3 + param_3;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar23 + 0x36) = (int)((ulonglong)param_3 >> 0x20);
                    }
                    else {
                      *(double *)(puVar23 + 0x36) = param_3;
                    }
                  }
                  if (*(short *)((int)DAT_8c07e866 + (int)puVar23) != 0) {
                    iVar12 = (*(code *)PTR_FUN_8c07ea18)
                                       (*(undefined4 *)(puVar27 + iVar19 + 0x24),
                                        (int)*(short *)((int)DAT_8c07e866 + (int)puVar23));
                    if (in_FPSCR_SZ == '\0') {
                      *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(puVar23 + 0x32);
                      *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(puVar23 + 0x34);
                      *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(puVar23 + 0x36);
                      param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 10),SUB84(param_3,0));
                      *(undefined4 *)(iVar12 + 0x18) = *(undefined4 *)(puVar23 + 10);
                    }
                    else {
                      *(undefined8 *)(iVar12 + 0xc) = *(undefined8 *)(puVar23 + 0x32);
                      *(undefined8 *)(iVar12 + 0x10) = *(undefined8 *)(puVar23 + 0x34);
                      *(undefined8 *)(iVar12 + 0x14) = *(undefined8 *)(puVar23 + 0x36);
                      param_3 = *(double *)(puVar23 + 10);
                      *(double *)(iVar12 + 0x18) = param_3;
                    }
                  }
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x32),
                                               *(undefined4 *)(puVar23 + 0x36));
                  }
                  else {
                    param_1 = *(double *)(puVar23 + 0x32);
                    in_xd4 = *(undefined8 *)(puVar23 + 0x36);
                  }
                  (*(code *)puVar32)(*(undefined4 *)(*(int *)(puVar27 + iVar19 + 0x24) + 8),
                                     *(undefined4 *)(puVar27 + iVar19 + 100),0);
                }
                puVar32 = PTR_FUN_8c07e86c;
                uVar20 = (*(code *)PTR_FUN_8c07e86c)();
                uVar14 = (*(code *)puVar32)();
                iVar12 = (*(code *)puVar3)(*(undefined4 *)(puVar27 + iVar19 + 0x24),uVar20,uVar14);
                if ((iVar12 != 0) && (*(char *)(iVar12 + 8) == '\x03')) {
                  (*(code *)PTR_FUN_8c07eacc)(*(undefined4 *)(puVar27 + iVar19 + 0x24),0);
                }
                puVar32 = PTR_FUN_8c07e86c;
                uVar20 = (*(code *)PTR_FUN_8c07e86c)();
                uVar14 = (*(code *)puVar32)();
                iVar12 = (*(code *)PTR_FUN_8c07e870)
                                   (*(undefined4 *)(puVar27 + iVar19 + 0x24),uVar20,uVar14);
                puVar32 = PTR_FUN_8c07e86c;
                if (iVar12 != 0) {
                  iVar12 = (*(code *)PTR_FUN_8c07e86c)();
                  iVar13 = (*(code *)puVar32)();
                  puVar32 = PTR_FUN_8c07ead0;
                  if (((**(uint **)(puVar27 + iVar19 + 0x24) & 2) == 0) ||
                     ((((-1 < iVar12 &&
                        (iVar12 < *(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x20))) &&
                       (-1 < iVar13)) &&
                      (iVar13 < *(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x24))))) {
                    iVar12 = *(int *)((*(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x20) * iVar13 +
                                      iVar12) * 4 +
                                     *(int *)((int)DAT_8c07f3c6 + *(int *)(puVar27 + iVar19 + 0x24))
                                     );
                  }
                  else {
                    iVar12 = 0;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    param_3 = (double)CONCAT44(*(undefined4 *)
                                                (*(int *)(puVar27 + iVar19 + 0x24) + 0x40),
                                               *(undefined4 *)(iVar12 + 0xc));
                  }
                  else {
                    in_xd8 = *(double *)(iVar12 + 0xc);
                    param_3 = *(double *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x40);
                  }
                  if (in_FPSCR_PR == '\0' && SUB84(param_3,0) < (float)((ulonglong)param_3 >> 0x20))
                  {
                    uVar20 = *(undefined4 *)(puVar27 + iVar19 + 0x24);
                    *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf | 0x30;
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar23 + 10) = (int)((ulonglong)dVar33 >> 0x20);
                    }
                    else {
                      *(double *)(puVar23 + 10) = dVar33;
                    }
                    (*(code *)puVar32)(uVar20,puVar23);
                    bVar9 = *(byte *)((int)puVar23 + 9);
                    *(undefined4 *)(puVar27 + iVar19 + -4) = 1;
                    *(byte *)((int)puVar23 + 9) = bVar9 & 0xf | 0x30;
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar23 + 10) = (int)((ulonglong)dVar33 >> 0x20);
                    }
                    else {
                      *(double *)(puVar23 + 10) = dVar33;
                    }
                    (*(code *)PTR_FUN_8c07ead4)(uVar20,puVar23,0,0);
                  }
                }
                puVar32 = PTR_FUN_8c07e86c;
                uVar20 = (*(code *)PTR_FUN_8c07e86c)();
                uVar14 = (*(code *)puVar32)();
                iVar12 = (*(code *)PTR_FUN_8c07e874)
                                   (*(undefined4 *)(puVar27 + iVar19 + 0x24),uVar20,uVar14);
                if (iVar12 != 0) {
                  *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf | 0x20;
                  break;
                }
                if (in_FPSCR_SZ == '\0') {
                  param_3 = (double)CONCAT44(*(undefined4 *)(DAT_8c07e878 + 0x34),SUB84(param_3,0));
                }
                else {
                  param_3 = *(double *)(DAT_8c07e878 + 0x34);
                }
                if (in_FPSCR_PR == '\0') {
                  fVar35 = (float)((ulonglong)in_dr14 >> 0x20) - (float)((ulonglong)param_3 >> 0x20)
                  ;
                  in_dr14 = (double)CONCAT44(fVar35,SUB84(in_dr14,0));
                  bVar36 = fVar35 < (float)((ulonglong)dVar33 >> 0x20);
                }
                else {
                  in_dr14 = in_dr14 - param_3;
                  bVar36 = in_dr14 < dVar33;
                }
              } while (!bVar36);
            }
            iVar12 = (*(code *)PTR_FUN_8c07e86c)();
            puVar32 = PTR_FUN_8c07e86c;
            if (iVar12 != 3) {
              iVar12 = (*(code *)PTR_FUN_8c07e86c)();
              iVar13 = (*(code *)puVar32)();
              if (*(ushort **)
                   ((*(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x20) * iVar12 + iVar13) * 4 +
                   *(int *)((int)DAT_8c07e86a + *(int *)(puVar27 + iVar19 + 0x24))) != puVar23) {
                (*(code *)PTR_FUN_8c07ead0)(*(undefined4 *)(puVar27 + iVar19 + 0x24),puVar23);
              }
            }
            goto LAB_8c07e844;
          }
          if (iVar12 == 5) {
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 6),
                                         *(undefined4 *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c));
            }
            else {
              param_3 = *(double *)(puVar23 + 6);
              in_xd8 = *(double *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c);
            }
            if (in_FPSCR_PR == '\0') {
              param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) + SUB84(param_3,0),
                                         SUB84(param_3,0));
            }
            else {
              param_3 = param_3 + param_3;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar23 + 6) = (int)((ulonglong)param_3 >> 0x20);
            }
            else {
              *(double *)(puVar23 + 6) = param_3;
            }
          }
          else if (iVar12 == 6) {
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c),
                                         *(undefined4 *)(puVar23 + 6));
            }
            else {
              in_xd8 = *(double *)(puVar23 + 6);
              param_3 = *(double *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c);
            }
            if (in_FPSCR_PR == '\0') {
              fVar35 = (float)((ulonglong)param_3 >> 0x20);
              param_3 = (double)CONCAT44(fVar35,SUB84(param_3,0) + fVar35);
            }
            else {
              param_3 = param_3 + param_3;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar23 + 6) = SUB84(param_3,0);
            }
            else {
              *(double *)(puVar23 + 6) = in_xd8;
            }
            (*(code *)puVar3)((int)*(short *)((int)DAT_8c07f14e + (int)puVar23));
            if (*(short *)((int)DAT_8c07f14e + (int)puVar23) != 0) {
              iVar12 = (*(code *)PTR_FUN_8c07f168)
                                 (*(undefined4 *)(puVar27 + iVar19 + 0x24),
                                  (int)*(short *)((int)DAT_8c07f14e + (int)puVar23));
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(puVar23 + 0x32);
                *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(puVar23 + 0x34);
                *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(puVar23 + 0x36);
                param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 10),SUB84(param_3,0));
                *(undefined4 *)(iVar12 + 0x18) = *(undefined4 *)(puVar23 + 10);
              }
              else {
                *(undefined8 *)(iVar12 + 0xc) = *(undefined8 *)(puVar23 + 0x32);
                *(undefined8 *)(iVar12 + 0x10) = *(undefined8 *)(puVar23 + 0x34);
                *(undefined8 *)(iVar12 + 0x14) = *(undefined8 *)(puVar23 + 0x36);
                param_3 = *(double *)(puVar23 + 10);
                *(double *)(iVar12 + 0x18) = param_3;
              }
            }
            iVar12 = (*(code *)PTR_FUN_8c07f15c)(*(undefined4 *)(puVar27 + iVar19 + 0x24),puVar23);
            if ((iVar12 == 0) &&
               (iVar12 = (*(code *)PTR_FUN_8c07f160)(), puVar32 = PTR_FUN_8c07f164, iVar12 == 2)) {
              uVar20 = *(undefined4 *)(puVar27 + iVar19 + 0x24);
              *(byte *)(puVar23 + 1) =
                   ((byte)puVar23[1] & (byte)DAT_8c07f150 | 0x10) & (byte)DAT_8c07f152 | 8;
              *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf | 0x20;
              (*(code *)puVar32)(uVar20,puVar23);
            }
          }
          else {
            fVar35 = (float)((ulonglong)dVar33 >> 0x20);
            if (iVar12 == 7) {
              in_dr14 = dVar33;
              if (in_FPSCR_SZ == '\0') {
                in_dr14 = (double)CONCAT44(fVar35,uVar14);
              }
              *(ushort **)(puVar27 + iVar19 + 0x44) = puVar23 + 1;
              uVar14 = (*(code *)PTR_FUN_8c07f300)();
              uVar17 = SUB84(param_1,0);
              *(undefined4 *)(puVar27 + iVar19 + 0x74) = uVar14;
              uVar14 = (*(code *)puVar6)();
              iVar12 = *(int *)(puVar27 + iVar19 + 0x24);
              uVar28 = (*(code *)PTR_FUN_8c07f304)
                                 (iVar12,*(undefined4 *)(puVar27 + iVar19 + 0x74),uVar14);
              pdVar2 = DAT_8c07f308;
              uVar14 = (undefined4)((ulonglong)uVar28 >> 0x20);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(puVar27 + iVar19 + 0x60) = uVar14;
                dVar30 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x1c),
                                          *(undefined4 *)(puVar23 + 6));
                uVar20 = uVar14;
              }
              else {
                *(undefined8 *)(puVar27 + iVar19 + 0x60) = uVar28;
                in_xd8 = *(double *)(puVar23 + 6);
                dVar30 = *(double *)(iVar12 + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar35 = SUB84(dVar30,0) + (float)((ulonglong)dVar30 >> 0x20);
              }
              else {
                fVar35 = SUB84(dVar30 + dVar30,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar23 + 6) = fVar35;
                dVar30 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x1c),
                                          *(undefined4 *)(puVar23 + 10));
              }
              else {
                *(double *)(puVar23 + 6) = in_xd8;
                in_xd8 = *(double *)(puVar23 + 10);
                dVar30 = *(double *)(iVar12 + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar35 = SUB84(dVar30,0) + (float)((ulonglong)dVar30 >> 0x20);
              }
              else {
                fVar35 = SUB84(dVar30 + dVar30,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar23 + 10) = fVar35;
                dVar30 = (double)CONCAT44(DAT_8c07f30c,fVar35);
                param_1 = (double)CONCAT44(*(undefined4 *)pdVar2,uVar17);
                param_2 = (double)CONCAT44(fVar35,uVar20);
              }
              else {
                *(double *)(puVar23 + 10) = in_xd8;
                dVar30 = (double)CONCAT44(DAT_8c07f310,DAT_8c07f30c);
                param_1 = *pdVar2;
                param_2 = in_xd8;
                fVar35 = DAT_8c07f30c;
              }
              fVar29 = (float)((ulonglong)dVar33 >> 0x20);
              if (in_FPSCR_PR == '\0') {
                fVar31 = (float)((ulonglong)dVar30 >> 0x20) / (float)((ulonglong)param_1 >> 0x20);
                fVar35 = fVar35 * fVar31;
                dVar30 = (double)CONCAT44(fVar31,fVar35);
                bVar36 = fVar29 < fVar35;
              }
              else {
                dVar30 = (dVar30 / param_1) * (dVar30 / param_1);
                fVar35 = SUB84(dVar30,0);
                bVar36 = dVar33 < dVar30;
              }
              iVar12 = 0;
              if (bVar36) {
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(puVar27 + iVar19 + 0x2c) = fVar29;
                  puVar32 = SUB84(dVar33,0);
                  dVar33 = (double)((ulonglong)(uint)fVar29 << 0x20);
                  puVar34 = DAT_8c07f310;
                }
                else {
                  *(double *)(puVar27 + iVar19 + 0x2c) = dVar33;
                  puVar32 = DAT_8c07f310;
                  puVar34 = PTR_FUN_8c07f314;
                }
                do {
                  iVar12 = iVar12 + 1;
                  if (in_FPSCR_PR == '\0') {
                    in_dr14 = (double)CONCAT44((float)((ulonglong)dVar33 >> 0x20) * (float)puVar34 +
                                               (float)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0))
                    ;
                    dVar33 = (double)((ulonglong)(uint)(float)iVar12 << 0x20);
                    bVar36 = (float)iVar12 < fVar35;
                  }
                  else {
                    dVar33 = (double)iVar12;
                    bVar36 = dVar33 < dVar30;
                  }
                } while (bVar36);
                if (in_FPSCR_SZ == '\0') {
                  dVar33 = (double)CONCAT44(*(undefined4 *)(puVar27 + iVar19 + 0x2c),puVar32);
                }
                else {
                  dVar33 = *(double *)(puVar27 + iVar19 + 0x2c);
                }
              }
              if (in_FPSCR_PR == '\0') {
                in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) /
                                           (float)((ulonglong)param_2 >> 0x20),SUB84(in_dr14,0));
              }
              else {
                in_dr14 = in_dr14 / param_2;
              }
              if (in_FPSCR_SZ == '\0') {
                param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x30),fVar35);
              }
              else {
                param_3 = *(double *)(puVar23 + 0x30);
              }
              if (in_FPSCR_PR == '\0') {
                fVar35 = (float)((ulonglong)param_3 >> 0x20) + (float)((ulonglong)in_dr14 >> 0x20);
                param_3 = (double)CONCAT44(fVar35,SUB84(param_3,0));
                bVar36 = SUB84(param_2,0) < fVar35;
              }
              else {
                param_3 = param_3 + in_dr14;
                fVar35 = (float)((ulonglong)param_3 >> 0x20);
                bVar36 = param_2 < param_3;
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar23 + 0x30) = fVar35;
              }
              else {
                *(double *)(puVar23 + 0x30) = param_3;
              }
              if ((bVar36) ||
                 (iVar12 = (*(code *)PTR_FUN_8c07f314)
                                     (*(undefined4 *)(puVar27 + iVar19 + 0x24),puVar23),
                 puVar32 = PTR_FUN_8c07f300, iVar12 == 0)) {
                if (in_FPSCR_SZ == '\0') {
                  param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x30),SUB84(param_3,0));
                  *(undefined4 *)(puVar23 + 0x34) = *(undefined4 *)(puVar23 + 0x30);
                }
                else {
                  param_3 = *(double *)(puVar23 + 0x30);
                  *(double *)(puVar23 + 0x34) = param_3;
                }
              }
              else {
                uVar20 = (*(code *)PTR_FUN_8c07f300)();
                *(undefined4 *)(puVar27 + iVar19 + 0x48) = uVar20;
                iVar12 = (*(code *)puVar32)();
                puVar34 = PTR_FUN_8c07f3c8;
                puVar32 = PTR_FUN_8c07f318;
                if (*(int *)((*(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x20) *
                              *(int *)(puVar27 + iVar19 + 0x48) + iVar12) * 4 +
                            *(int *)((int)DAT_8c07f2f8 + *(int *)(puVar27 + iVar19 + 0x24))) == 0) {
                  uVar20 = (*(code *)PTR_FUN_8c07f3c8)();
                  *(undefined4 *)(puVar27 + iVar19 + 0x48) = uVar20;
                  uVar20 = (*(code *)puVar34)();
                  iVar12 = (*(code *)PTR_FUN_8c07f3cc)
                                     (*(undefined4 *)(puVar27 + iVar19 + 0x24),
                                      *(undefined4 *)(puVar27 + iVar19 + 0x48),uVar20,0x69);
                  puVar34 = PTR_FUN_8c07f3e0;
                  puVar32 = PTR_FUN_8c07f3d0;
                  if (iVar12 == 0) {
                    uVar20 = *(undefined4 *)(puVar27 + iVar19 + 0x24);
                    *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf | 0x20;
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar23 + 10) = (int)((ulonglong)dVar33 >> 0x20);
                      param_2 = (double)(ulonglong)*(uint *)(puVar27 + iVar19 + 0x60);
                      *(uint *)(puVar23 + 0x34) = *(uint *)(puVar27 + iVar19 + 0x60);
                    }
                    else {
                      *(double *)(puVar23 + 10) = dVar33;
                      *(undefined8 *)(puVar23 + 0x34) = *(undefined8 *)(puVar27 + iVar19 + 0x60);
                    }
                    (*(code *)puVar34)(uVar20,puVar23);
                  }
                  else {
                    if (in_FPSCR_SZ == '\0') {
                      param_2 = (double)(ulonglong)*(uint *)(puVar27 + iVar19 + 0x60);
                      *(uint *)(puVar23 + 0x34) = *(uint *)(puVar27 + iVar19 + 0x60);
                    }
                    else {
                      *(undefined8 *)(puVar23 + 0x34) = *(undefined8 *)(puVar27 + iVar19 + 0x60);
                    }
                    iVar12 = (*(code *)puVar32)();
                    if (in_FPSCR_PR == '\0') {
                      param_3 = (double)CONCAT44((float)iVar12,SUB84(param_3,0));
                    }
                    else {
                      param_3 = (double)iVar12;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),DAT_8c07f3d4);
                    }
                    else {
                      in_xd8 = (double)CONCAT44(DAT_8c07f3d8,DAT_8c07f3d4);
                    }
                    if (in_FPSCR_PR == '\0') {
                      param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) /
                                                 SUB84(param_3,0),SUB84(param_3,0));
                    }
                    else {
                      param_3 = param_3 / param_3;
                    }
                    if (in_FPSCR_SZ == '\0') {
                      param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),DAT_8c07f3d8);
                    }
                    else {
                      in_xd8 = (double)CONCAT44(PTR_FUN_8c07f3dc,DAT_8c07f3d8);
                    }
                    if (in_FPSCR_PR == '\0') {
                      fVar35 = (float)((ulonglong)param_3 >> 0x20) * SUB84(param_3,0);
                      param_3 = (double)CONCAT44(fVar35,SUB84(param_3,0));
                      uVar15 = (uint)fVar35;
                    }
                    else {
                      param_3 = param_3 * param_3;
                      uVar15 = (uint)param_3;
                    }
                    if ((int)uVar15 < 0) {
                      iVar12 = 1 >> (~uVar15 & 0x1f) + 1;
                    }
                    else {
                      iVar12 = 1 << (uVar15 & 0x1f);
                    }
                    *(undefined4 *)(puVar27 + iVar19 + -4) = 0;
                    dVar30 = dVar33;
                    if (in_FPSCR_SZ == '\0') {
                      dVar30 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(param_1,0));
                    }
                    param_1 = dVar30;
                    (*(code *)PTR_FUN_8c07f3dc)
                              (*(undefined4 *)(puVar27 + iVar19 + 0x24),puVar23,iVar12,1);
                  }
                }
                else {
                  if (in_FPSCR_SZ == '\0') {
                    param_2 = (double)(ulonglong)*(uint *)(puVar27 + iVar19 + 0x60);
                    *(uint *)(puVar23 + 0x34) = *(uint *)(puVar27 + iVar19 + 0x60);
                  }
                  else {
                    *(undefined8 *)(puVar23 + 0x34) = *(undefined8 *)(puVar27 + iVar19 + 0x60);
                  }
                  iVar12 = (*(code *)puVar32)();
                  if (in_FPSCR_PR == '\0') {
                    param_3 = (double)CONCAT44((float)iVar12,SUB84(param_3,0));
                  }
                  else {
                    param_3 = (double)iVar12;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),DAT_8c07f31c);
                  }
                  else {
                    in_xd8 = (double)CONCAT44(DAT_8c07f320,DAT_8c07f31c);
                  }
                  if (in_FPSCR_PR == '\0') {
                    param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) /
                                               SUB84(param_3,0),SUB84(param_3,0));
                  }
                  else {
                    param_3 = param_3 / param_3;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),DAT_8c07f320);
                  }
                  else {
                    in_xd8 = (double)CONCAT44(PTR_FUN_8c07f324,DAT_8c07f320);
                  }
                  if (in_FPSCR_PR == '\0') {
                    fVar35 = (float)((ulonglong)param_3 >> 0x20) * SUB84(param_3,0);
                    param_3 = (double)CONCAT44(fVar35,SUB84(param_3,0));
                    uVar15 = (uint)fVar35;
                  }
                  else {
                    param_3 = param_3 * param_3;
                    uVar15 = (uint)param_3;
                  }
                  if ((int)uVar15 < 0) {
                    iVar12 = 1 >> (~uVar15 & 0x1f) + 1;
                  }
                  else {
                    iVar12 = 1 << (uVar15 & 0x1f);
                  }
                  *(undefined4 *)(puVar27 + iVar19 + -4) = 0;
                  dVar30 = dVar33;
                  if (in_FPSCR_SZ == '\0') {
                    dVar30 = (double)CONCAT44((int)((ulonglong)dVar33 >> 0x20),SUB84(param_1,0));
                  }
                  param_1 = dVar30;
                  (*(code *)PTR_FUN_8c07f324)
                            (*(undefined4 *)(puVar27 + iVar19 + 0x24),puVar23,iVar12,1);
                }
              }
            }
            else if (iVar12 == 9) {
              iVar12 = *(int *)(puVar27 + iVar19 + 0x24);
              if (in_FPSCR_SZ == '\0') {
                dVar30 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x1c),
                                          *(undefined4 *)(puVar23 + 6));
              }
              else {
                in_xd8 = *(double *)(puVar23 + 6);
                dVar30 = *(double *)(iVar12 + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar35 = SUB84(dVar30,0) + (float)((ulonglong)dVar30 >> 0x20);
              }
              else {
                fVar35 = SUB84(dVar30 + dVar30,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar23 + 6) = fVar35;
                dVar30 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x1c),
                                          *(undefined4 *)(puVar23 + 0xc));
              }
              else {
                *(double *)(puVar23 + 6) = in_xd8;
                in_xd8 = *(double *)(puVar23 + 0xc);
                dVar30 = *(double *)(iVar12 + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar35 = SUB84(dVar30,0) + (float)((ulonglong)dVar30 >> 0x20);
              }
              else {
                fVar35 = SUB84(dVar30 + dVar30,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar23 + 0xc) = fVar35;
                param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                           *(undefined4 *)(puVar23 + 0x34));
                dVar30 = (double)CONCAT44(DAT_8c07f170,fVar35);
              }
              else {
                *(double *)(puVar23 + 0xc) = in_xd8;
                in_xd4 = *(undefined8 *)(puVar23 + 0x34);
                dVar30 = (double)CONCAT44(PTR_FUN_8c07f174,DAT_8c07f170);
              }
              if (in_FPSCR_PR == '\0') {
                fVar35 = SUB84(param_1,0) + (float)((ulonglong)dVar30 >> 0x20);
              }
              else {
                fVar35 = SUB84(param_1 + dVar30,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar23 + 0x34) = fVar35;
                param_1 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x32),fVar35);
              }
              else {
                *(undefined8 *)(puVar23 + 0x34) = in_xd4;
                param_1 = *(double *)(puVar23 + 0x32);
              }
              *(ushort **)(puVar27 + iVar19 + 0x44) = puVar23 + 1;
              (*(code *)puVar4)(iVar12);
              (*(code *)PTR_FUN_8c07f174)
                        (*(undefined4 *)(iVar12 + 8),*(undefined4 *)(puVar27 + iVar19 + 0x44),
                         puVar23 + 0x32,puVar23 + 0x34);
              if (in_FPSCR_SZ == '\0') {
                param_3 = (double)CONCAT44(DAT_8c07f17c,*(undefined4 *)(puVar23 + 0xc));
                param_2 = (double)CONCAT44(*(undefined4 *)DAT_8c07f178,uVar20);
              }
              else {
                in_xd8 = *(double *)(puVar23 + 0xc);
                param_3 = (double)CONCAT44(_DAT_8c07f180,DAT_8c07f17c);
                param_2 = *DAT_8c07f178;
              }
              if (in_FPSCR_PR == '\0') {
                param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) /
                                           (float)((ulonglong)param_2 >> 0x20),SUB84(param_3,0));
              }
              else {
                param_3 = param_3 / param_2;
              }
              if (in_FPSCR_PR != '\0' || (float)((ulonglong)param_3 >> 0x20) <= SUB84(param_3,0)) {
                (*_DAT_8c07f180)(*(undefined4 *)(puVar27 + iVar19 + 0x24),puVar23);
              }
            }
            else if (iVar12 == 10) {
              if (in_FPSCR_SZ == '\0') {
                param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 6),
                                           *(undefined4 *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c)
                                          );
              }
              else {
                param_3 = *(double *)(puVar23 + 6);
                in_xd8 = *(double *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) + SUB84(param_3,0),
                                           SUB84(param_3,0));
              }
              else {
                param_3 = param_3 + param_3;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar23 + 6) = (int)((ulonglong)param_3 >> 0x20);
              }
              else {
                *(double *)(puVar23 + 6) = param_3;
              }
              iVar12 = (*(code *)puVar5)(puVar23);
              puVar32 = PTR_FUN_8c07f164;
              if (iVar12 == 0) {
                uVar20 = *(undefined4 *)(puVar27 + iVar19 + 0x24);
                *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf | (byte)DAT_8c07f154
                ;
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(puVar23 + 0xc) = (int)((ulonglong)dVar33 >> 0x20);
                }
                else {
                  *(double *)(puVar23 + 0xc) = dVar33;
                }
                (*(code *)puVar32)(uVar20,puVar23);
              }
            }
            else if (iVar12 == 0xb) {
              iVar12 = *(int *)(puVar27 + iVar19 + 0x24);
              if (in_FPSCR_SZ == '\0') {
                dVar30 = (double)CONCAT44(*(undefined4 *)(puVar23 + 6),
                                          *(undefined4 *)(iVar12 + 0x1c));
              }
              else {
                dVar30 = *(double *)(puVar23 + 6);
                in_xd8 = *(double *)(iVar12 + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + SUB84(dVar30,0),
                                          SUB84(dVar30,0));
              }
              else {
                dVar30 = dVar30 + dVar30;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar23 + 6) = (int)((ulonglong)dVar30 >> 0x20);
                dVar30 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x1c),
                                          *(undefined4 *)(puVar23 + 0xc));
              }
              else {
                *(double *)(puVar23 + 6) = dVar30;
                in_xd8 = *(double *)(puVar23 + 0xc);
                dVar30 = *(double *)(iVar12 + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar29 = SUB84(dVar30,0) + (float)((ulonglong)dVar30 >> 0x20);
              }
              else {
                fVar29 = SUB84(dVar30 + dVar30,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar23 + 0xc) = fVar29;
                param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 0x34),DAT_8c07f2fc);
              }
              else {
                *(double *)(puVar23 + 0xc) = in_xd8;
                param_3 = *(double *)(puVar23 + 0x34);
                in_xd8 = (double)CONCAT44(PTR_FUN_8c07f300,DAT_8c07f2fc);
              }
              if (in_FPSCR_PR == '\0') {
                fVar29 = (float)((ulonglong)param_3 >> 0x20) + SUB84(param_3,0);
                param_3 = (double)CONCAT44(fVar29,SUB84(param_3,0));
                bVar36 = fVar29 < fVar35;
              }
              else {
                param_3 = param_3 + param_3;
                fVar29 = (float)((ulonglong)param_3 >> 0x20);
                bVar36 = param_3 < dVar33;
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar23 + 0x34) = fVar29;
              }
              else {
                *(double *)(puVar23 + 0x34) = param_3;
              }
              if (!bVar36) {
                *(byte *)(puVar23 + 8) = (byte)puVar23[8] & (byte)DAT_8c07f2f6;
                *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf | 0x20;
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(puVar23 + 0xc) = fVar35;
                  *(float *)(puVar23 + 0x34) = fVar35;
                }
                else {
                  *(double *)(puVar23 + 0xc) = dVar33;
                  *(double *)(puVar23 + 0x34) = dVar33;
                }
              }
            }
            else if (iVar12 == 0xe) {
              if (in_FPSCR_SZ == '\0') {
                param_3 = (double)CONCAT44(*(undefined4 *)(puVar23 + 6),
                                           *(undefined4 *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c)
                                          );
              }
              else {
                param_3 = *(double *)(puVar23 + 6);
                in_xd8 = *(double *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) + SUB84(param_3,0),
                                           SUB84(param_3,0));
              }
              else {
                param_3 = param_3 + param_3;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar23 + 6) = (int)((ulonglong)param_3 >> 0x20);
              }
              else {
                *(double *)(puVar23 + 6) = param_3;
              }
              iVar12 = (*(code *)puVar34)(puVar23);
              puVar32 = PTR_FUN_8c07eeb0;
              if (iVar12 == 0) {
                *(ushort **)(puVar27 + iVar19 + 0x44) = puVar23 + 1;
                uVar20 = (*(code *)PTR_FUN_8c07eeb0)();
                *(undefined4 *)(puVar27 + iVar19 + 0x48) = uVar20;
                iVar12 = (*(code *)puVar32)();
                puVar32 = PTR_FUN_8c07eff4;
                if (*(int *)((*(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x20) *
                              *(int *)(puVar27 + iVar19 + 0x48) + iVar12) * 4 +
                            *(int *)((int)DAT_8c07eea4 + *(int *)(puVar27 + iVar19 + 0x24))) == 0) {
                  uVar20 = (*(code *)PTR_FUN_8c07eff4)();
                  *(undefined4 *)(puVar27 + iVar19 + 0x4c) = uVar20;
                  uVar20 = (*(code *)puVar32)();
                  iVar12 = (*(code *)PTR_FUN_8c07eff8)
                                     (*(undefined4 *)(puVar27 + iVar19 + 0x24),
                                      *(undefined4 *)(puVar27 + iVar19 + 0x4c),uVar20);
                  if (iVar12 != 0) {
                    (*(code *)PTR_FUN_8c07effc)(*(undefined4 *)(puVar27 + iVar19 + 0x24),puVar23);
                    *(byte *)(puVar23 + 1) =
                         ((byte)puVar23[1] & (byte)DAT_8c07efe2 | 0x10) & (byte)DAT_8c07efe4 | 8;
                    uVar11 = DAT_8c07efe6;
                    *(byte *)((int)puVar23 + 9) = *(byte *)((int)puVar23 + 9) & 0xf | 0x20;
                    *(byte *)(puVar23 + 8) = (byte)puVar23[8] & (byte)uVar11 | 4;
                    goto LAB_8c07e420;
                  }
                }
                puVar32 = PTR_FUN_8c07eeb0;
                uVar20 = SUB84(param_3,0);
                uVar11 = (*(code *)PTR_FUN_8c07eeb0)();
                *(undefined2 *)(puVar27 + iVar19 + 0x50) = uVar11;
                uVar11 = (*(code *)puVar32)();
                *(undefined2 *)(puVar27 + iVar19 + 0x78) = uVar11;
                iVar12 = (*(code *)puVar32)();
                puVar32 = PTR_FUN_8c07eeb4;
                *(undefined **)(puVar27 + iVar19 + 0x54) = PTR_FUN_8c07eeb4;
                if (iVar12 == 4) {
                  sVar21 = *(short *)(puVar27 + iVar19 + 0x78) + -1;
                  *(short *)(puVar27 + iVar19 + 0x58) = sVar21;
                  if (sVar21 < 1) {
                    *(short *)(puVar27 + iVar19 + 0x58) = *(short *)(puVar27 + iVar19 + 0x78) + 1;
                    *(byte *)((int)puVar23 + 0x11) =
                         *(byte *)((int)puVar23 + 0x11) & 0xf | (byte)DAT_8c07efe8;
                  }
                }
                else if (iVar12 == 8) {
                  iVar12 = *(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x24);
                  sVar21 = *(short *)(puVar27 + iVar19 + 0x78) + 1;
                  *(short *)(puVar27 + iVar19 + 0x58) = sVar21;
                  if (iVar12 + -1 <= (int)sVar21) {
                    *(short *)(puVar27 + iVar19 + 0x58) = *(short *)(puVar27 + iVar19 + 0x78) + -1;
                    *(byte *)((int)puVar23 + 0x11) = *(byte *)((int)puVar23 + 0x11) & 0xf | 0x40;
                  }
                }
                else {
                  sVar21 = *(short *)(puVar27 + iVar19 + 0x78);
                  if ((int)(*(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x24) +
                           (uint)(*(int *)(*(int *)(puVar27 + iVar19 + 0x24) + 0x24) < 0)) >> 1 <
                      (int)sVar21) {
                    *(byte *)((int)puVar23 + 0x11) = *(byte *)((int)puVar23 + 0x11) & 0xf | 0x40;
                    *(short *)(puVar27 + iVar19 + 0x58) = sVar21 + -1;
                  }
                  else {
                    *(byte *)((int)puVar23 + 0x11) =
                         *(byte *)((int)puVar23 + 0x11) & 0xf | (byte)DAT_8c07efe8;
                    *(short *)(puVar27 + iVar19 + 0x58) = sVar21 + 1;
                  }
                }
                puVar34 = PTR_FUN_8c07eeb0;
                iVar12 = *(int *)(puVar27 + iVar19 + 0x24);
                (*(code *)puVar32)((int)*(short *)(puVar27 + iVar19 + 0x50));
                (**(code **)(puVar27 + iVar19 + 0x54))(*(undefined2 *)(puVar27 + iVar19 + 0x58));
                uVar14 = *(undefined4 *)(iVar12 + 8);
                puVar27[iVar19 + 0x18] =
                     (puVar27[iVar19 + 0x18] & (byte)DAT_8c07eea6 | 0x10) & (byte)DAT_8c07eea8 | 8;
                (*(code *)PTR_FUN_8c07eeb8)
                          (uVar14,*(undefined4 *)(puVar27 + iVar19 + 0x44),
                           *(undefined4 *)(puVar27 + iVar19 + 0x38),
                           *(undefined4 *)(puVar27 + iVar19 + 0x3c));
                uVar14 = (*(code *)puVar34)();
                *(undefined4 *)(puVar27 + iVar19 + 0x48) = uVar14;
                uVar14 = (*(code *)puVar34)();
                uVar28 = (*(code *)PTR_FUN_8c07eebc)
                                   (iVar12,*(undefined4 *)(puVar27 + iVar19 + 0x48),uVar14);
                uVar14 = *(undefined4 *)(iVar12 + 8);
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(puVar27 + iVar19 + 4) = (int)((ulonglong)uVar28 >> 0x20);
                }
                else {
                  *(undefined8 *)(puVar27 + iVar19 + 4) = uVar28;
                }
                *(undefined1 **)(puVar27 + iVar19 + 0x5c) = puVar27 + iVar19 + 0x18;
                (*(code *)PTR_FUN_8c07eeb8)
                          (uVar14,*(undefined4 *)(puVar27 + iVar19 + 0x5c),puVar27 + iVar19 + 0xc,
                           puVar27 + iVar19 + 0x14);
                if (in_FPSCR_SZ == '\0') {
                  *(undefined4 *)(puVar27 + iVar19 + 0x1c) = *(undefined4 *)(puVar27 + iVar19 + 0xc)
                  ;
                  uVar28 = CONCAT44(*(undefined4 *)(puVar27 + iVar19 + 0x14),uVar20);
                }
                else {
                  *(undefined8 *)(puVar27 + iVar19 + 0x1c) = *(undefined8 *)(puVar27 + iVar19 + 0xc)
                  ;
                  uVar28 = *(undefined8 *)(puVar27 + iVar19 + 0x14);
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(puVar27 + iVar19 + 0x20) = (int)((ulonglong)uVar28 >> 0x20);
                }
                else {
                  *(undefined8 *)(puVar27 + iVar19 + 0x20) = uVar28;
                }
                (*(code *)PTR_FUN_8c07eec0)(iVar12,puVar27 + iVar19 + 0x1c,puVar27 + iVar19 + 0x20);
                uVar20 = (undefined4)uVar28;
                if (in_FPSCR_SZ == '\0') {
                  uVar14 = *(undefined4 *)(puVar27 + iVar19 + 0x20);
                }
                else {
                  uVar14 = (undefined4)*(undefined8 *)(puVar27 + iVar19 + 0x1c);
                  in_xd4 = *(undefined8 *)(puVar27 + iVar19 + 0x20);
                }
                (*(code *)PTR_FUN_8c07eec4)(iVar12,*(undefined4 *)(puVar27 + iVar19 + 0x5c));
                uVar17 = (*(code *)puVar34)();
                *(undefined4 *)(puVar27 + iVar19 + 0x74) = uVar17;
                uVar17 = (*(code *)puVar34)();
                uVar28 = (*(code *)PTR_FUN_8c07efec)
                                   (iVar12,*(undefined4 *)(puVar27 + iVar19 + 0x74),uVar17);
                puVar32 = PTR_FUN_8c07eff0;
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(puVar27 + iVar19 + 0x10) = (int)((ulonglong)uVar28 >> 0x20);
                  *(undefined4 *)(puVar23 + 0x32) = *(undefined4 *)(puVar27 + iVar19);
                  uVar28 = CONCAT44(*(undefined4 *)(puVar27 + iVar19 + 4),uVar20);
                }
                else {
                  *(undefined8 *)(puVar27 + iVar19 + 0x10) = uVar28;
                  *(undefined8 *)(puVar23 + 0x32) = *(undefined8 *)(puVar27 + iVar19);
                  uVar28 = *(undefined8 *)(puVar27 + iVar19 + 4);
                }
                param_1 = (double)CONCAT44(0x3f800000,uVar14);
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(puVar23 + 0x34) = (int)((ulonglong)uVar28 >> 0x20);
                  param_3 = (double)CONCAT44(*(undefined4 *)(puVar27 + iVar19 + 8),(int)uVar28);
                  *(undefined4 *)(puVar23 + 0x36) = *(undefined4 *)(puVar27 + iVar19 + 8);
                }
                else {
                  *(undefined8 *)(puVar23 + 0x34) = uVar28;
                  param_3 = *(double *)(puVar27 + iVar19 + 8);
                  *(double *)(puVar23 + 0x36) = param_3;
                }
                (*(code *)puVar32)(puVar23 + 0x10);
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(puVar23 + 0x30) = (int)((ulonglong)dVar33 >> 0x20);
                }
                else {
                  *(double *)(puVar23 + 0x30) = dVar33;
                }
              }
            }
          }
        }
      }
LAB_8c07e420:
      *(int *)(puVar27 + iVar19 + 0x30) = *(int *)(puVar27 + iVar19 + 0x30) + 1;
      puVar23 = (ushort *)((int)puVar23 + (int)DAT_8c07e45c);
    } while (*(int *)(puVar27 + iVar19 + 0x30) < *(int *)(puVar27 + iVar19 + 0x28));
  }
  return;
}

