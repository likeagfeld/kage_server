// entry: 8c0479d2
// name: FUN_8c0479d2
// signature: undefined FUN_8c0479d2(void)


/* WARNING: Removing unreachable block (ram,0x8c04762c) */

void FUN_8c0479d2(double param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int *param_11,int param_12,
                 int param_13,uint param_14,uint param_15,uint param_16,byte param_17,uint param_18,
                 ushort param_19,ushort param_20,byte param_21,uint param_22,uint param_23,
                 ushort param_24,int param_25,int param_26,int param_27,int param_28,int param_29,
                 int param_30,int param_31)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int unaff_r13;
  double dVar12;
  float fVar13;
  double in_dr14;
  bool bVar14;
  uint uVar15;
  int iVar16;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  (*(code *)PTR_FUN_8c047a04)
            (param_2[3],
             *(undefined4 *)
              (param_7 * 4 +
              *(int *)((int)DAT_8c0479fe + *(int *)(DAT_8c0479fc + unaff_r13)) + (int)DAT_8c047a00))
  ;
  do {
    do {
      param_8 = param_8 + -1;
      param_7 = param_7 + 1;
      if (param_8 == 0) {
        *param_2 = *param_2 & 0xffffffc0;
        return;
      }
      piVar8 = *(int **)(param_10 + param_7 * 4);
    } while ((piVar8 == (int *)0x0) || (*piVar8 == 1));
    param_12 = 0;
    param_11 = piVar8;
    if (0 < param_6) {
      param_13 = param_6;
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(*(undefined4 *)(param_2[3] + 0x14),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = *(double *)(param_2[3] + 0x14);
      }
      do {
        puVar4 = PTR_FUN_8c047298;
        iVar6 = param_3;
        if (param_3 == 0) {
          iVar6 = *(int *)(PTR_DAT_8c047294 + param_12 * 4);
        }
        if (*piVar8 == iVar6) {
          uVar5 = *param_2;
          param_14 = uVar5 & 4;
          param_15 = uVar5 & 8;
          param_16 = uVar5 & 0x10;
          param_17 = *(byte *)(param_4 + 8);
          param_18 = param_2[2];
          param_19 = (*(code *)PTR_FUN_8c047298)();
          param_20 = (*(code *)puVar4)();
          param_21 = *(byte *)(DAT_8c047290 + param_5);
          param_22 = param_2[9];
          param_23 = param_2[1];
          param_24 = (*(code *)puVar4)();
          uVar10 = (*(code *)puVar4)();
          do {
            bVar3 = false;
            if (iVar6 == 2) {
              if ((uVar5 & 1) != 0) {
                piVar8 = piVar8 + 3;
              }
            }
            else if (iVar6 == 3) {
              if ((uVar5 & 2) != 0) {
                piVar8 = piVar8 + 3;
              }
            }
            else if (iVar6 == 4) {
              if (param_14 != 0) {
                piVar8 = piVar8 + 3;
              }
            }
            else if (iVar6 == 5) {
              if (param_15 != 0) {
                piVar8 = piVar8 + 3;
              }
            }
            else if (iVar6 == 6) {
              if (param_16 != 0) {
                piVar8 = piVar8 + 3;
              }
            }
            else if (iVar6 == 7) {
              if ((uVar5 & 0x20) != 0) {
                piVar8 = piVar8 + 3;
              }
            }
            else if (iVar6 == 8) {
              if ((param_17 & 8) != 0) {
                piVar8 = piVar8 + 3;
              }
            }
            else if (iVar6 == 9) {
              if (((*(byte *)((int)DAT_8c047564 + param_18 + (int)DAT_8c047562) & 0x40) != 0) &&
                 ((*(uint *)((int)DAT_8c047566 + param_18 + (int)DAT_8c047562) & 1) != 0)) {
                piVar8 = piVar8 + 3;
                param_11 = piVar8;
                bVar3 = true;
                iVar6 = *piVar8;
              }
            }
            else {
              uVar9 = SUB84(param_1,0);
              if (iVar6 == 10) {
                if (in_FPSCR_SZ == '\0') {
                  param_1 = (double)CONCAT44(piVar8[1],uVar9);
                }
                else {
                  param_1 = *(double *)(piVar8 + 1);
                }
                if (in_FPSCR_PR == '\0') {
                  uVar15 = (uint)(float)((ulonglong)param_1 >> 0x20);
                }
                else {
                  uVar15 = (uint)param_1;
                }
                if (uVar15 == param_19) {
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[2],SUB84(param_1,0));
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 2);
                  }
                  if (in_FPSCR_PR == '\0') {
                    uVar15 = (uint)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    uVar15 = (uint)param_1;
                  }
                  if (uVar15 == param_20) {
                    piVar8 = piVar8 + 3;
                  }
                }
              }
              else {
                fVar13 = (float)((ulonglong)in_dr14 >> 0x20);
                if (iVar6 == 0xb) {
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    bVar14 = fVar13 < (float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    bVar14 = in_dr14 < param_1;
                  }
                  if (!bVar14) {
                    piVar8 = piVar8 + 3;
                  }
                }
                else if (iVar6 == 0xc) {
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    bVar14 = (float)((ulonglong)param_1 >> 0x20) < fVar13;
                  }
                  else {
                    bVar14 = param_1 < in_dr14;
                  }
                  if (!bVar14) {
                    piVar8 = piVar8 + 3;
                  }
                }
                else if (iVar6 == 0xd) {
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    uVar15 = (uint)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    uVar15 = (uint)param_1;
                  }
                  if (uVar15 == param_21) {
                    piVar8 = piVar8 + 3;
                    param_11 = piVar8;
                    bVar3 = true;
                    iVar6 = *piVar8;
                  }
                }
                else if (iVar6 == 0xe) {
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    uVar15 = (uint)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    uVar15 = (uint)param_1;
                  }
                  if (uVar15 == param_22) {
                    piVar8 = piVar8 + 3;
                  }
                }
                else if (iVar6 == 0xf) {
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    iVar7 = (int)param_1;
                  }
                  if (iVar7 <= (int)param_22) {
                    piVar8 = piVar8 + 3;
                  }
                }
                else if (iVar6 == 0x10) {
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    iVar7 = (int)param_1;
                  }
                  if ((int)param_22 <= iVar7) {
                    piVar8 = piVar8 + 3;
                  }
                }
                else if (iVar6 == 0x11) {
                  param_26 = param_18 + (int)DAT_8c047700;
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    param_27 = (int)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    param_27 = (int)param_1;
                  }
                  if (*(short *)(param_27 * 2 + param_26 + param_23 * 0x1e) != 0) {
                    FUN_8c0479f2();
                    return;
                  }
                  if (*(short *)(param_27 * 2 + param_26 + DAT_8c047702 + param_23 * 0x1e) != 0) {
                    FUN_8c0479f2(param_27 * 2);
                    return;
                  }
                  if (*(short *)(param_27 * 2 + param_26 + DAT_8c047704 + param_23 * 0x1e) != 0) {
                    FUN_8c0479f2(param_27 * 2);
                    return;
                  }
                }
                else if (iVar6 == 0x12) {
                  if (in_FPSCR_SZ == '\0') {
                    dVar12 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    dVar12 = *(double *)(piVar8 + 1);
                  }
                  iVar7 = param_18 + (int)DAT_8c047700;
                  if (in_FPSCR_PR == '\0') {
                    param_25 = (int)(float)((ulonglong)dVar12 >> 0x20);
                  }
                  else {
                    param_25 = (int)dVar12;
                  }
                  *(int *)((int)&param_2 + (int)DAT_8c047706) = iVar7;
                  uVar15 = param_23;
                  *(int *)((int)&param_2 + (int)DAT_8c047708) = param_25;
                  *(int *)((int)&param_2 + (int)DAT_8c04770a) = iVar7 + DAT_8c047702;
                  *(int *)((int)&param_2 + (int)DAT_8c04770c) = param_25;
                  *(int *)((int)&param_2 + (int)DAT_8c04770e) = iVar7 + DAT_8c047704;
                  *(uint *)((int)&param_2 + (int)DAT_8c047710) = uVar15;
                  iVar7 = param_25;
                  *(uint *)((int)&param_2 + (int)DAT_8c047706) =
                       *(int *)((int)&param_2 + (int)DAT_8c047706) + uVar15 * 0x1e;
                  iVar11 = *(int *)((int)&param_2 + (int)DAT_8c047708) * 2;
                  *(int *)((int)&param_2 + (int)DAT_8c047708) = iVar11;
                  sVar1 = *(short *)(iVar11 + *(int *)((int)&param_2 + (int)DAT_8c047706));
                  *(uint *)((int)&param_2 + (int)DAT_8c04770a) =
                       *(int *)((int)&param_2 + (int)DAT_8c04770a) + uVar15 * 0x1e;
                  iVar11 = *(int *)((int)&param_2 + (int)DAT_8c04770c) * 2;
                  *(int *)((int)&param_2 + (int)DAT_8c04770c) = iVar11;
                  sVar2 = *(short *)(iVar11 + *(int *)((int)&param_2 + (int)DAT_8c04770a));
                  iVar11 = *(int *)((int)&param_2 + (int)DAT_8c047710);
                  *(int *)((int)&param_2 + (int)DAT_8c047710) = iVar11 * 0xf;
                  *(int *)((int)&param_2 + (int)DAT_8c047710) = iVar11 * 0x1e;
                  iVar11 = *(int *)((int)&param_2 + (int)DAT_8c04770e) +
                           *(int *)((int)&param_2 + (int)DAT_8c047710);
                  *(int *)((int)&param_2 + (int)DAT_8c04770e) = iVar11;
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[2],SUB84(dVar12,0));
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 2);
                  }
                  if (in_FPSCR_PR == '\0') {
                    iVar16 = (int)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    iVar16 = (int)param_1;
                  }
                  if ((int)sVar1 + (int)sVar2 + (int)*(short *)(iVar7 * 2 + iVar11) == iVar16) {
                    piVar8 = piVar8 + 3;
                  }
                }
                else if (iVar6 == 0x13) {
                  iVar7 = param_18 + (int)DAT_8c04786e;
                  *(int *)((int)&param_2 + (int)DAT_8c047870) = iVar7;
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    iVar11 = (int)param_1;
                  }
                  if (*(int *)(param_23 * 4 + iVar7 + DAT_8c047872) == iVar11) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar8[2],SUB84(param_1,0));
                    }
                    else {
                      param_1 = *(double *)(piVar8 + 2);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar7 = (int)param_1;
                    }
                    if ((iVar7 == 0) &&
                       ((*(byte *)((int)DAT_8c047874 + *(int *)((int)&param_2 + (int)DAT_8c047870))
                        & 0x40) == 0)) {
                      piVar8 = piVar8 + 3;
                    }
                    else if ((iVar7 == 1) &&
                            ((*(byte *)((int)DAT_8c047874 +
                                       *(int *)((int)&param_2 + (int)DAT_8c047870)) & 0x40) != 0)) {
                      piVar8 = piVar8 + 3;
                    }
                  }
                }
                else if (iVar6 == 0x14) {
                  param_31 = param_18 + (int)DAT_8c04786e;
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    iVar7 = (int)param_1;
                  }
                  if (iVar7 <= *(int *)(param_23 * 4 + param_31 + DAT_8c047872)) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar8[2],SUB84(param_1,0));
                    }
                    else {
                      param_1 = *(double *)(piVar8 + 2);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar7 = (int)param_1;
                    }
                    if ((iVar7 == 0) && ((*(byte *)(DAT_8c047874 + param_31) & 0x40) == 0)) {
                      piVar8 = piVar8 + 3;
                    }
                    else if ((iVar7 == 1) && ((*(byte *)(DAT_8c047874 + param_31) & 0x40) != 0)) {
                      piVar8 = piVar8 + 3;
                    }
                  }
                }
                else if (iVar6 == 0x15) {
                  param_30 = param_18 + (int)DAT_8c04786e;
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    iVar7 = (int)param_1;
                  }
                  if (*(int *)(param_23 * 4 + param_30 + DAT_8c047872) <= iVar7) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar8[2],SUB84(param_1,0));
                    }
                    else {
                      param_1 = *(double *)(piVar8 + 2);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar7 = (int)param_1;
                    }
                    if ((iVar7 == 0) && ((*(byte *)(DAT_8c047874 + param_30) & 0x40) == 0)) {
                      piVar8 = piVar8 + 3;
                    }
                    else if ((iVar7 == 1) && ((*(byte *)(DAT_8c047874 + param_30) & 0x40) != 0)) {
                      piVar8 = piVar8 + 3;
                    }
                  }
                }
                else if (iVar6 == 0x16) {
                  param_29 = param_18 + (int)DAT_8c0479f6;
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    iVar7 = (int)param_1;
                  }
                  if (*(int *)(param_23 * 4 + param_29 + DAT_8c0479f8) == iVar7) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar8[2],SUB84(param_1,0));
                    }
                    else {
                      param_1 = *(double *)(piVar8 + 2);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar7 = (int)param_1;
                    }
                    if ((iVar7 == 0) && ((*(byte *)(DAT_8c0479fa + param_29) & 0x40) == 0)) {
                      piVar8 = piVar8 + 3;
                    }
                    else if ((iVar7 == 1) && ((*(byte *)(DAT_8c0479fa + param_29) & 0x40) != 0)) {
                      piVar8 = piVar8 + 3;
                    }
                  }
                }
                else if (iVar6 == 0x17) {
                  param_28 = param_18 + (int)DAT_8c0479f6;
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar8[1],uVar9);
                  }
                  else {
                    param_1 = *(double *)(piVar8 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    iVar7 = (int)param_1;
                  }
                  if (iVar7 <= *(int *)(param_23 * 4 + param_28 + DAT_8c0479f8)) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar8[2],SUB84(param_1,0));
                    }
                    else {
                      param_1 = *(double *)(piVar8 + 2);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar7 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar7 = (int)param_1;
                    }
                    if ((iVar7 == 0) && ((*(byte *)(DAT_8c0479fa + param_28) & 0x40) == 0)) {
                      piVar8 = piVar8 + 3;
                    }
                    else if ((iVar7 == 1) && ((*(byte *)(DAT_8c0479fa + param_28) & 0x40) != 0)) {
                      piVar8 = piVar8 + 3;
                    }
                  }
                }
                else {
                  if (iVar6 == 0x18) {
                    FUN_8c04795e();
                    return;
                  }
                  if (iVar6 == 0x19) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar8[1],uVar9);
                    }
                    else {
                      param_1 = *(double *)(piVar8 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      uVar15 = (uint)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      uVar15 = (uint)param_1;
                    }
                    if (uVar15 == param_24) {
                      if (in_FPSCR_SZ == '\0') {
                        param_1 = (double)CONCAT44(piVar8[2],SUB84(param_1,0));
                      }
                      else {
                        param_1 = *(double *)(piVar8 + 2);
                      }
                      if (in_FPSCR_PR == '\0') {
                        uVar15 = (uint)(float)((ulonglong)param_1 >> 0x20);
                      }
                      else {
                        uVar15 = (uint)param_1;
                      }
                      if (uVar15 == (uVar10 & 0xffff)) {
                        piVar8 = piVar8 + 3;
                        param_11 = piVar8;
                        bVar3 = true;
                        iVar6 = *piVar8;
                      }
                    }
                  }
                }
              }
            }
          } while (bVar3);
        }
        param_13 = param_13 + -1;
        param_12 = param_12 + 1;
      } while (param_13 != 0);
    }
    if (param_11 != piVar8) {
      *(int **)(param_7 * 4 + param_9) = piVar8;
    }
    if (*piVar8 == 1) {
      uVar10 = param_2[2];
      *(uint *)((int)&param_2 + (int)DAT_8c0473f0) = uVar10;
      if ((*(byte *)((int)DAT_8c0473f4 + uVar10 + (int)DAT_8c0473f2) & 0x40) == 0) {
        FUN_8c0479d2();
        return;
      }
      uVar9 = *(undefined4 *)
               (param_7 * 4 +
               *(int *)((int)DAT_8c0473f8 + *(int *)((int)DAT_8c0473f6 + uVar10)) +
               (int)DAT_8c0473fa);
      uVar5 = param_2[1];
      iVar11 = uVar10 + (int)DAT_8c0473fc;
      iVar7 = (int)DAT_8c0473fe;
      iVar6 = uVar5 * 2;
      sVar1 = *(short *)(iVar6 + iVar11 + DAT_8c047400);
      *(short *)(iVar11 + DAT_8c047400 + iVar6) = *(short *)(iVar6 + iVar11 + DAT_8c047400) + 1;
      *(short *)(iVar11 + iVar7 + uVar5 * 8 + sVar1 * 2) = (short)uVar9 + 0xe;
    }
  } while( true );
}

