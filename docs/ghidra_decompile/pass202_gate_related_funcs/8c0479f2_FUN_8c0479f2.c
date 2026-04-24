// entry: 8c0479f2
// name: FUN_8c0479f2
// signature: undefined FUN_8c0479f2(void)


void FUN_8c0479f2(double param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int *param_12,
                 int param_13,int param_14,uint param_15,uint param_16,uint param_17,byte param_18,
                 uint param_19,ushort param_20,ushort param_21,byte param_22,uint param_23,
                 uint param_24,ushort param_25,int param_26,int param_27,int param_28,int param_29,
                 int param_30,int param_31,int param_32)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  int *unaff_r11;
  undefined4 uVar6;
  int unaff_r12;
  uint unaff_r14;
  double dVar7;
  float fVar8;
  double in_dr14;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  bVar9 = true;
  while( true ) {
    if (bVar9) {
      unaff_r11 = unaff_r11 + 3;
    }
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while( true ) {
                                    if (param_2 == 0) {
                                      do {
                                        param_14 = param_14 + -1;
                                        param_13 = param_13 + 1;
                                        if (param_14 == 0) {
                                          do {
                                            if (param_12 != unaff_r11) {
                                              *(int **)(param_8 * 4 + param_10) = unaff_r11;
                                            }
                                            if (*unaff_r11 == 1) {
                                              uVar10 = param_3[2];
                                              *(uint *)((int)&param_3 + (int)DAT_8c0473f0) = uVar10;
                                              if ((*(byte *)((int)DAT_8c0473f4 +
                                                            uVar10 + (int)DAT_8c0473f2) & 0x40) == 0
                                                 ) {
                                                FUN_8c0479d2();
                                                return;
                                              }
                                              uVar6 = *(undefined4 *)
                                                       (param_8 * 4 +
                                                       *(int *)((int)DAT_8c0473f8 +
                                                               *(int *)((int)DAT_8c0473f6 + uVar10))
                                                       + (int)DAT_8c0473fa);
                                              uVar4 = param_3[1];
                                              iVar12 = uVar10 + (int)DAT_8c0473fc;
                                              iVar5 = (int)DAT_8c0473fe;
                                              iVar11 = uVar4 * 2;
                                              sVar1 = *(short *)(iVar11 + iVar12 + DAT_8c047400);
                                              *(short *)(iVar12 + DAT_8c047400 + iVar11) =
                                                   *(short *)(iVar11 + iVar12 + DAT_8c047400) + 1;
                                              *(short *)(iVar12 + iVar5 + uVar4 * 8 + sVar1 * 2) =
                                                   (short)uVar6 + 0xe;
                                            }
                                            do {
                                              param_9 = param_9 + -1;
                                              param_8 = param_8 + 1;
                                              if (param_9 == 0) {
                                                *param_3 = *param_3 & 0xffffffc0;
                                                return;
                                              }
                                              unaff_r11 = *(int **)(param_11 + param_8 * 4);
                                            } while ((unaff_r11 == (int *)0x0) || (*unaff_r11 == 1))
                                            ;
                                            param_13 = 0;
                                            param_12 = unaff_r11;
                                          } while (param_7 < 1);
                                          param_14 = param_7;
                                          if (in_FPSCR_SZ == '\0') {
                                            in_dr14 = (double)CONCAT44(*(undefined4 *)
                                                                        (param_3[3] + 0x14),
                                                                       SUB84(in_dr14,0));
                                          }
                                          else {
                                            in_dr14 = *(double *)(param_3[3] + 0x14);
                                          }
                                        }
                                        puVar3 = PTR_FUN_8c047298;
                                        unaff_r12 = param_4;
                                        if (param_4 == 0) {
                                          unaff_r12 = *(int *)(PTR_DAT_8c047294 + param_13 * 4);
                                        }
                                      } while (*unaff_r11 != unaff_r12);
                                      uVar10 = *param_3;
                                      unaff_r10 = uVar10 & 1;
                                      unaff_r8 = uVar10 & 2;
                                      param_15 = uVar10 & 4;
                                      param_16 = uVar10 & 8;
                                      param_17 = uVar10 & 0x10;
                                      unaff_r9 = uVar10 & 0x20;
                                      param_18 = *(byte *)(param_5 + 8);
                                      param_19 = param_3[2];
                                      param_20 = (*(code *)PTR_FUN_8c047298)();
                                      param_21 = (*(code *)puVar3)();
                                      param_22 = *(byte *)(DAT_8c047290 + param_6);
                                      param_23 = param_3[9];
                                      param_24 = param_3[1];
                                      param_25 = (*(code *)puVar3)();
                                      unaff_r14 = (*(code *)puVar3)();
                                    }
                                    param_2 = 0;
                                    if (unaff_r12 != 2) break;
                                    if (unaff_r10 != 0) {
                                      unaff_r11 = unaff_r11 + 3;
                                    }
                                  }
                                  if (unaff_r12 != 3) break;
                                  if (unaff_r8 != 0) {
                                    unaff_r11 = unaff_r11 + 3;
                                  }
                                }
                                if (unaff_r12 != 4) break;
                                if (param_15 != 0) {
                                  unaff_r11 = unaff_r11 + 3;
                                }
                              }
                              if (unaff_r12 != 5) break;
                              if (param_16 != 0) {
                                unaff_r11 = unaff_r11 + 3;
                              }
                            }
                            if (unaff_r12 != 6) break;
                            if (param_17 != 0) {
                              unaff_r11 = unaff_r11 + 3;
                            }
                          }
                          if (unaff_r12 != 7) break;
                          if (unaff_r9 != 0) {
                            unaff_r11 = unaff_r11 + 3;
                          }
                        }
                        if (unaff_r12 != 8) break;
                        if ((param_18 & 8) != 0) {
                          unaff_r11 = unaff_r11 + 3;
                        }
                      }
                      if (unaff_r12 != 9) break;
                      if (((*(byte *)((int)DAT_8c047564 + param_19 + (int)DAT_8c047562) & 0x40) != 0
                          ) && ((*(uint *)((int)DAT_8c047566 + param_19 + (int)DAT_8c047562) & 1) !=
                                0)) {
                        unaff_r11 = unaff_r11 + 3;
                        param_12 = unaff_r11;
                        param_2 = 1;
                        unaff_r12 = *unaff_r11;
                      }
                    }
                    uVar6 = SUB84(param_1,0);
                    if (unaff_r12 != 10) break;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
                    }
                    else {
                      param_1 = *(double *)(unaff_r11 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      uVar10 = (uint)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      uVar10 = (uint)param_1;
                    }
                    if (uVar10 == param_20) {
                      if (in_FPSCR_SZ == '\0') {
                        param_1 = (double)CONCAT44(unaff_r11[2],SUB84(param_1,0));
                      }
                      else {
                        param_1 = *(double *)(unaff_r11 + 2);
                      }
                      if (in_FPSCR_PR == '\0') {
                        uVar10 = (uint)(float)((ulonglong)param_1 >> 0x20);
                      }
                      else {
                        uVar10 = (uint)param_1;
                      }
                      if (uVar10 == param_21) {
                        unaff_r11 = unaff_r11 + 3;
                      }
                    }
                  }
                  fVar8 = (float)((ulonglong)in_dr14 >> 0x20);
                  if (unaff_r12 != 0xb) break;
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
                  }
                  else {
                    param_1 = *(double *)(unaff_r11 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    bVar9 = fVar8 < (float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    bVar9 = in_dr14 < param_1;
                  }
                  if (!bVar9) {
                    unaff_r11 = unaff_r11 + 3;
                  }
                }
                if (unaff_r12 != 0xc) break;
                if (in_FPSCR_SZ == '\0') {
                  param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
                }
                else {
                  param_1 = *(double *)(unaff_r11 + 1);
                }
                if (in_FPSCR_PR == '\0') {
                  bVar9 = (float)((ulonglong)param_1 >> 0x20) < fVar8;
                }
                else {
                  bVar9 = param_1 < in_dr14;
                }
                if (!bVar9) {
                  unaff_r11 = unaff_r11 + 3;
                }
              }
              if (unaff_r12 != 0xd) break;
              if (in_FPSCR_SZ == '\0') {
                param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
              }
              else {
                param_1 = *(double *)(unaff_r11 + 1);
              }
              if (in_FPSCR_PR == '\0') {
                uVar10 = (uint)(float)((ulonglong)param_1 >> 0x20);
              }
              else {
                uVar10 = (uint)param_1;
              }
              if (uVar10 == param_22) {
                unaff_r11 = unaff_r11 + 3;
                param_12 = unaff_r11;
                param_2 = 1;
                unaff_r12 = *unaff_r11;
              }
            }
            if (unaff_r12 != 0xe) break;
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
            }
            else {
              param_1 = *(double *)(unaff_r11 + 1);
            }
            if (in_FPSCR_PR == '\0') {
              uVar10 = (uint)(float)((ulonglong)param_1 >> 0x20);
            }
            else {
              uVar10 = (uint)param_1;
            }
            if (uVar10 == param_23) {
              unaff_r11 = unaff_r11 + 3;
            }
          }
          if (unaff_r12 != 0xf) break;
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
          }
          else {
            param_1 = *(double *)(unaff_r11 + 1);
          }
          if (in_FPSCR_PR == '\0') {
            iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
          }
          else {
            iVar11 = (int)param_1;
          }
          if (iVar11 <= (int)param_23) {
            unaff_r11 = unaff_r11 + 3;
          }
        }
        if (unaff_r12 != 0x10) break;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
        }
        else {
          param_1 = *(double *)(unaff_r11 + 1);
        }
        if (in_FPSCR_PR == '\0') {
          iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
        }
        else {
          iVar11 = (int)param_1;
        }
        if ((int)param_23 <= iVar11) {
          unaff_r11 = unaff_r11 + 3;
        }
      }
      if (unaff_r12 == 0x11) break;
      if (unaff_r12 == 0x12) {
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(unaff_r11[1],uVar6);
        }
        else {
          dVar7 = *(double *)(unaff_r11 + 1);
        }
        iVar11 = param_19 + (int)DAT_8c047700;
        if (in_FPSCR_PR == '\0') {
          param_26 = (int)(float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          param_26 = (int)dVar7;
        }
        *(int *)((int)&param_3 + (int)DAT_8c047706) = iVar11;
        uVar10 = param_24;
        *(int *)((int)&param_3 + (int)DAT_8c047708) = param_26;
        *(int *)((int)&param_3 + (int)DAT_8c04770a) = iVar11 + DAT_8c047702;
        *(int *)((int)&param_3 + (int)DAT_8c04770c) = param_26;
        *(int *)((int)&param_3 + (int)DAT_8c04770e) = iVar11 + DAT_8c047704;
        *(uint *)((int)&param_3 + (int)DAT_8c047710) = uVar10;
        iVar11 = param_26;
        *(uint *)((int)&param_3 + (int)DAT_8c047706) =
             *(int *)((int)&param_3 + (int)DAT_8c047706) + uVar10 * 0x1e;
        iVar5 = *(int *)((int)&param_3 + (int)DAT_8c047708) * 2;
        *(int *)((int)&param_3 + (int)DAT_8c047708) = iVar5;
        sVar1 = *(short *)(iVar5 + *(int *)((int)&param_3 + (int)DAT_8c047706));
        *(uint *)((int)&param_3 + (int)DAT_8c04770a) =
             *(int *)((int)&param_3 + (int)DAT_8c04770a) + uVar10 * 0x1e;
        iVar5 = *(int *)((int)&param_3 + (int)DAT_8c04770c) * 2;
        *(int *)((int)&param_3 + (int)DAT_8c04770c) = iVar5;
        sVar2 = *(short *)(iVar5 + *(int *)((int)&param_3 + (int)DAT_8c04770a));
        iVar5 = *(int *)((int)&param_3 + (int)DAT_8c047710);
        *(int *)((int)&param_3 + (int)DAT_8c047710) = iVar5 * 0xf;
        *(int *)((int)&param_3 + (int)DAT_8c047710) = iVar5 * 0x1e;
        iVar5 = *(int *)((int)&param_3 + (int)DAT_8c04770e) +
                *(int *)((int)&param_3 + (int)DAT_8c047710);
        *(int *)((int)&param_3 + (int)DAT_8c04770e) = iVar5;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(unaff_r11[2],SUB84(dVar7,0));
        }
        else {
          param_1 = *(double *)(unaff_r11 + 2);
        }
        if (in_FPSCR_PR == '\0') {
          iVar12 = (int)(float)((ulonglong)param_1 >> 0x20);
        }
        else {
          iVar12 = (int)param_1;
        }
        if ((int)sVar1 + (int)sVar2 + (int)*(short *)(iVar11 * 2 + iVar5) == iVar12) {
          unaff_r11 = unaff_r11 + 3;
        }
      }
      else if (unaff_r12 == 0x13) {
        iVar11 = param_19 + (int)DAT_8c04786e;
        *(int *)((int)&param_3 + (int)DAT_8c047870) = iVar11;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
        }
        else {
          param_1 = *(double *)(unaff_r11 + 1);
        }
        if (in_FPSCR_PR == '\0') {
          iVar5 = (int)(float)((ulonglong)param_1 >> 0x20);
        }
        else {
          iVar5 = (int)param_1;
        }
        if (*(int *)(param_24 * 4 + iVar11 + DAT_8c047872) == iVar5) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(unaff_r11[2],SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(unaff_r11 + 2);
          }
          if (in_FPSCR_PR == '\0') {
            iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
          }
          else {
            iVar11 = (int)param_1;
          }
          if ((iVar11 == 0) &&
             ((*(byte *)((int)DAT_8c047874 + *(int *)((int)&param_3 + (int)DAT_8c047870)) & 0x40) ==
              0)) {
            unaff_r11 = unaff_r11 + 3;
          }
          else if ((iVar11 == 1) &&
                  ((*(byte *)((int)DAT_8c047874 + *(int *)((int)&param_3 + (int)DAT_8c047870)) &
                   0x40) != 0)) {
            unaff_r11 = unaff_r11 + 3;
          }
        }
      }
      else if (unaff_r12 == 0x14) {
        param_32 = param_19 + (int)DAT_8c04786e;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
        }
        else {
          param_1 = *(double *)(unaff_r11 + 1);
        }
        if (in_FPSCR_PR == '\0') {
          iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
        }
        else {
          iVar11 = (int)param_1;
        }
        if (iVar11 <= *(int *)(param_24 * 4 + param_32 + DAT_8c047872)) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(unaff_r11[2],SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(unaff_r11 + 2);
          }
          if (in_FPSCR_PR == '\0') {
            iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
          }
          else {
            iVar11 = (int)param_1;
          }
          if ((iVar11 == 0) && ((*(byte *)(DAT_8c047874 + param_32) & 0x40) == 0)) {
            unaff_r11 = unaff_r11 + 3;
          }
          else if ((iVar11 == 1) && ((*(byte *)(DAT_8c047874 + param_32) & 0x40) != 0)) {
            unaff_r11 = unaff_r11 + 3;
          }
        }
      }
      else if (unaff_r12 == 0x15) {
        param_31 = param_19 + (int)DAT_8c04786e;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
        }
        else {
          param_1 = *(double *)(unaff_r11 + 1);
        }
        if (in_FPSCR_PR == '\0') {
          iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
        }
        else {
          iVar11 = (int)param_1;
        }
        if (*(int *)(param_24 * 4 + param_31 + DAT_8c047872) <= iVar11) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(unaff_r11[2],SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(unaff_r11 + 2);
          }
          if (in_FPSCR_PR == '\0') {
            iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
          }
          else {
            iVar11 = (int)param_1;
          }
          if ((iVar11 == 0) && ((*(byte *)(DAT_8c047874 + param_31) & 0x40) == 0)) {
            unaff_r11 = unaff_r11 + 3;
          }
          else if ((iVar11 == 1) && ((*(byte *)(DAT_8c047874 + param_31) & 0x40) != 0)) {
            unaff_r11 = unaff_r11 + 3;
          }
        }
      }
      else if (unaff_r12 == 0x16) {
        param_30 = param_19 + (int)DAT_8c0479f6;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
        }
        else {
          param_1 = *(double *)(unaff_r11 + 1);
        }
        if (in_FPSCR_PR == '\0') {
          iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
        }
        else {
          iVar11 = (int)param_1;
        }
        if (*(int *)(param_24 * 4 + param_30 + DAT_8c0479f8) == iVar11) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(unaff_r11[2],SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(unaff_r11 + 2);
          }
          if (in_FPSCR_PR == '\0') {
            iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
          }
          else {
            iVar11 = (int)param_1;
          }
          if ((iVar11 == 0) && ((*(byte *)(DAT_8c0479fa + param_30) & 0x40) == 0)) {
            unaff_r11 = unaff_r11 + 3;
          }
          else if ((iVar11 == 1) && ((*(byte *)(DAT_8c0479fa + param_30) & 0x40) != 0)) {
            unaff_r11 = unaff_r11 + 3;
          }
        }
      }
      else if (unaff_r12 == 0x17) {
        param_29 = param_19 + (int)DAT_8c0479f6;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
        }
        else {
          param_1 = *(double *)(unaff_r11 + 1);
        }
        if (in_FPSCR_PR == '\0') {
          iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
        }
        else {
          iVar11 = (int)param_1;
        }
        if (iVar11 <= *(int *)(param_24 * 4 + param_29 + DAT_8c0479f8)) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(unaff_r11[2],SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(unaff_r11 + 2);
          }
          if (in_FPSCR_PR == '\0') {
            iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
          }
          else {
            iVar11 = (int)param_1;
          }
          if ((iVar11 == 0) && ((*(byte *)(DAT_8c0479fa + param_29) & 0x40) == 0)) {
            unaff_r11 = unaff_r11 + 3;
          }
          else if ((iVar11 == 1) && ((*(byte *)(DAT_8c0479fa + param_29) & 0x40) != 0)) {
            unaff_r11 = unaff_r11 + 3;
          }
        }
      }
      else {
        if (unaff_r12 == 0x18) {
          FUN_8c04795e();
          return;
        }
        if (unaff_r12 == 0x19) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
          }
          else {
            param_1 = *(double *)(unaff_r11 + 1);
          }
          if (in_FPSCR_PR == '\0') {
            uVar10 = (uint)(float)((ulonglong)param_1 >> 0x20);
          }
          else {
            uVar10 = (uint)param_1;
          }
          if (uVar10 == param_25) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(unaff_r11[2],SUB84(param_1,0));
            }
            else {
              param_1 = *(double *)(unaff_r11 + 2);
            }
            if (in_FPSCR_PR == '\0') {
              uVar10 = (uint)(float)((ulonglong)param_1 >> 0x20);
            }
            else {
              uVar10 = (uint)param_1;
            }
            if (uVar10 == (unaff_r14 & 0xffff)) {
              unaff_r11 = unaff_r11 + 3;
              param_12 = unaff_r11;
              param_2 = 1;
              unaff_r12 = *unaff_r11;
            }
          }
        }
      }
    }
    param_27 = param_19 + (int)DAT_8c047700;
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)CONCAT44(unaff_r11[1],uVar6);
    }
    else {
      param_1 = *(double *)(unaff_r11 + 1);
    }
    if (in_FPSCR_PR == '\0') {
      param_28 = (int)(float)((ulonglong)param_1 >> 0x20);
    }
    else {
      param_28 = (int)param_1;
    }
    if (*(short *)(param_28 * 2 + param_27 + param_24 * 0x1e) != 0) break;
    if (*(short *)(param_28 * 2 + param_27 + DAT_8c047702 + param_24 * 0x1e) != 0) {
      FUN_8c0479f2(param_28 * 2);
      return;
    }
    if (*(short *)(param_28 * 2 + param_27 + DAT_8c047704 + param_24 * 0x1e) != 0) {
      FUN_8c0479f2(param_28 * 2);
      return;
    }
    bVar9 = false;
  }
  FUN_8c0479f2();
  return;
}

