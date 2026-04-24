// entry: 8c0470f4
// name: FUN_8c0470f4
// signature: undefined FUN_8c0470f4(void)


/* WARNING: Removing unreachable block (ram,0x8c04762c) */

void FUN_8c0470f4(double param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  double dVar16;
  double in_dr14;
  float fVar17;
  bool bVar18;
  undefined4 in_PR;
  uint uVar19;
  int iVar20;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte abStack_7fe8 [16];
  byte abStack_7fd8 [32692];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar15 = (undefined8 *)((int)&uStack_24 + 4);
    uStack_24 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_24);
  }
  else {
    puVar15 = &uStack_24;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  iVar7 = (int)DAT_8c047286;
  iVar6 = *(int *)(param_2 + 0xc);
  *(int *)((int)puVar15 + iVar7) = param_3;
  iVar10 = *(int *)(DAT_8c047288 + iVar6);
  iVar6 = *(int *)(param_2 + 4);
  *(int *)((int)puVar15 + iVar7 + -4) = param_2;
  iVar11 = *(int *)(param_2 + 8);
  *(int *)((int)puVar15 + iVar7 + 4) = iVar10 + DAT_8c04728a * iVar6;
  *(undefined4 *)((int)puVar15 + iVar7 + 8) = *(undefined4 *)(iVar6 * 4 + iVar11 + DAT_8c04728c);
  if (param_3 == 0) {
    *(undefined4 *)((int)puVar15 + iVar7 + 0xc) = 0x18;
  }
  else {
    *(undefined4 *)((int)puVar15 + iVar7 + 0xc) = 1;
  }
  *(undefined4 *)((int)puVar15 + iVar7 + 0x14) = 0;
  *(undefined4 *)((int)puVar15 + iVar7 + 0x10) = *(undefined4 *)((int)puVar15 + iVar7 + 0xc);
  *(undefined4 *)((int)puVar15 + iVar7 + 0x18) = 4;
  *(int *)((int)puVar15 + iVar7 + 0x1c) = *(int *)((int)puVar15 + iVar7 + -4) + 0x14;
  *(int *)((int)puVar15 + iVar7 + 0x20) = *(int *)((int)puVar15 + iVar7 + -4) + 0x14;
  do {
    piVar13 = *(int **)(*(int *)((int)puVar15 + iVar7 + 0x20) +
                       *(int *)((int)puVar15 + iVar7 + 0x14) * 4);
    *(int **)((int)puVar15 + iVar7 + 0x24) = piVar13;
    if ((piVar13 != (int *)0x0) && (*piVar13 != 1)) {
      *(undefined4 *)((int)puVar15 + iVar7 + 0x28) = 0;
      if (0 < *(int *)((int)puVar15 + iVar7 + 0x10)) {
        iVar6 = *(int *)(*(int *)((int)puVar15 + iVar7 + -4) + 0xc);
        *(undefined4 *)((int)puVar15 + iVar7 + 0x2c) = *(undefined4 *)((int)puVar15 + iVar7 + 0x10);
        if (in_FPSCR_SZ == '\0') {
          in_dr14 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x14),SUB84(in_dr14,0));
        }
        else {
          in_dr14 = *(double *)(iVar6 + 0x14);
        }
        do {
          puVar3 = PTR_FUN_8c047298;
          if (*(int *)((int)puVar15 + iVar7) == 0) {
            iVar6 = *(int *)(PTR_DAT_8c047294 + *(int *)((int)puVar15 + iVar7 + 0x28) * 4);
          }
          else {
            iVar6 = *(int *)((int)puVar15 + iVar7);
          }
          if (*piVar13 == iVar6) {
            uVar12 = **(uint **)((int)puVar15 + iVar7 + -4);
            *(uint *)((int)puVar15 + iVar7 + 0x30) = uVar12 & 4;
            *(uint *)((int)puVar15 + iVar7 + 0x34) = uVar12 & 8;
            *(uint *)((int)puVar15 + iVar7 + 0x38) = uVar12 & 0x10;
            *(undefined1 *)((int)puVar15 + iVar7 + 0x3c) =
                 *(undefined1 *)(*(int *)((int)puVar15 + iVar7 + 4) + 8);
            *(undefined4 *)((int)puVar15 + iVar7 + 0x40) =
                 *(undefined4 *)(*(int *)((int)puVar15 + iVar7 + -4) + 8);
            uVar4 = (*(code *)PTR_FUN_8c047298)();
            *(undefined2 *)((int)puVar15 + iVar7 + 0x44) = uVar4;
            uVar4 = (*(code *)puVar3)();
            *(undefined2 *)((int)puVar15 + iVar7 + 0x48) = uVar4;
            *(undefined1 *)((int)puVar15 + iVar7 + 0x4c) =
                 *(undefined1 *)((int)DAT_8c047290 + *(int *)((int)puVar15 + iVar7 + 8));
            *(undefined4 *)((int)puVar15 + iVar7 + 0x50) =
                 *(undefined4 *)(*(int *)((int)puVar15 + iVar7 + -4) + 0x24);
            *(undefined4 *)((int)puVar15 + iVar7 + 0x54) =
                 *(undefined4 *)(*(int *)((int)puVar15 + iVar7 + -4) + 4);
            uVar4 = (*(code *)puVar3)();
            *(undefined2 *)((int)puVar15 + iVar7 + 0x58) = uVar4;
            uVar5 = (*(code *)puVar3)();
            do {
              bVar9 = false;
              if (iVar6 == 2) {
                if ((uVar12 & 1) != 0) {
                  piVar13 = piVar13 + 3;
                }
              }
              else if (iVar6 == 3) {
                if ((uVar12 & 2) != 0) {
                  piVar13 = piVar13 + 3;
                }
              }
              else if (iVar6 == 4) {
                if (*(int *)((int)puVar15 + iVar7 + 0x30) != 0) {
                  piVar13 = piVar13 + 3;
                }
              }
              else if (iVar6 == 5) {
                if (*(int *)((int)puVar15 + iVar7 + 0x34) != 0) {
                  piVar13 = piVar13 + 3;
                }
              }
              else if (iVar6 == 6) {
                if (*(int *)((int)puVar15 + iVar7 + 0x38) != 0) {
                  piVar13 = piVar13 + 3;
                }
              }
              else if (iVar6 == 7) {
                if ((uVar12 & 0x20) != 0) {
                  piVar13 = piVar13 + 3;
                }
              }
              else if (iVar6 == 8) {
                if ((*(byte *)((int)puVar15 + iVar7 + 0x3c) & 8) != 0) {
                  piVar13 = piVar13 + 3;
                }
              }
              else if (iVar6 == 9) {
                if (((*(byte *)((int)DAT_8c047564 +
                               *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c047562) & 0x40) !=
                     0) && ((*(uint *)((int)DAT_8c047566 +
                                      *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c047562) & 1
                            ) != 0)) {
                  piVar13 = piVar13 + 3;
                  *(int **)((int)puVar15 + iVar7 + 0x24) = piVar13;
                  bVar9 = true;
                  iVar6 = *piVar13;
                }
              }
              else {
                uVar14 = SUB84(param_1,0);
                if (iVar6 == 10) {
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(piVar13[1],uVar14);
                  }
                  else {
                    param_1 = *(double *)(piVar13 + 1);
                  }
                  if (in_FPSCR_PR == '\0') {
                    uVar19 = (uint)(float)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    uVar19 = (uint)param_1;
                  }
                  if (uVar19 == *(ushort *)((int)puVar15 + iVar7 + 0x44)) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[2],SUB84(param_1,0));
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 2);
                    }
                    if (in_FPSCR_PR == '\0') {
                      uVar19 = (uint)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      uVar19 = (uint)param_1;
                    }
                    if (uVar19 == *(ushort *)((int)puVar15 + iVar7 + 0x48)) {
                      piVar13 = piVar13 + 3;
                    }
                  }
                }
                else {
                  fVar17 = (float)((ulonglong)in_dr14 >> 0x20);
                  if (iVar6 == 0xb) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      bVar18 = fVar17 < (float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      bVar18 = in_dr14 < param_1;
                    }
                    if (!bVar18) {
                      piVar13 = piVar13 + 3;
                    }
                  }
                  else if (iVar6 == 0xc) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      bVar18 = (float)((ulonglong)param_1 >> 0x20) < fVar17;
                    }
                    else {
                      bVar18 = param_1 < in_dr14;
                    }
                    if (!bVar18) {
                      piVar13 = piVar13 + 3;
                    }
                  }
                  else if (iVar6 == 0xd) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      uVar19 = (uint)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      uVar19 = (uint)param_1;
                    }
                    if (uVar19 == *(byte *)((int)puVar15 + iVar7 + 0x4c)) {
                      piVar13 = piVar13 + 3;
                      *(int **)((int)puVar15 + iVar7 + 0x24) = piVar13;
                      bVar9 = true;
                      iVar6 = *piVar13;
                    }
                  }
                  else if (iVar6 == 0xe) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar10 = (int)param_1;
                    }
                    if (iVar10 == *(int *)((int)puVar15 + iVar7 + 0x50)) {
                      piVar13 = piVar13 + 3;
                    }
                  }
                  else if (iVar6 == 0xf) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar10 = (int)param_1;
                    }
                    if (iVar10 <= *(int *)((int)puVar15 + iVar7 + 0x50)) {
                      piVar13 = piVar13 + 3;
                    }
                  }
                  else if (iVar6 == 0x10) {
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar10 = (int)param_1;
                    }
                    if (*(int *)((int)puVar15 + iVar7 + 0x50) <= iVar10) {
                      piVar13 = piVar13 + 3;
                    }
                  }
                  else if (iVar6 == 0x11) {
                    *(int *)((int)puVar15 + iVar7 + 100) =
                         *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c047700;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar10 = (int)param_1;
                    }
                    *(int *)((int)puVar15 + iVar7 + 0x68) = iVar10;
                    if (*(short *)(iVar10 * 2 +
                                  *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c047700 +
                                  *(int *)((int)puVar15 + iVar7 + 0x54) * 0x1e) != 0) {
                      FUN_8c0479f2();
                      return;
                    }
                    if (*(short *)(*(int *)((int)puVar15 + iVar7 + 0x68) * 2 +
                                  *(int *)((int)puVar15 + iVar7 + 100) + (int)DAT_8c047702 +
                                  *(int *)((int)puVar15 + iVar7 + 0x54) * 0x1e) != 0) {
                      FUN_8c0479f2(*(int *)((int)puVar15 + iVar7 + 0x68) * 2);
                      return;
                    }
                    if (*(short *)(*(int *)((int)puVar15 + iVar7 + 0x68) * 2 +
                                  *(int *)((int)puVar15 + iVar7 + 100) + (int)DAT_8c047704 +
                                  *(int *)((int)puVar15 + iVar7 + 0x54) * 0x1e) != 0) {
                      FUN_8c0479f2(*(int *)((int)puVar15 + iVar7 + 0x68) * 2);
                      return;
                    }
                  }
                  else if (iVar6 == 0x12) {
                    if (in_FPSCR_SZ == '\0') {
                      dVar16 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      dVar16 = *(double *)(piVar13 + 1);
                    }
                    iVar10 = *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c047700;
                    if (in_FPSCR_PR == '\0') {
                      iVar11 = (int)(float)((ulonglong)dVar16 >> 0x20);
                    }
                    else {
                      iVar11 = (int)dVar16;
                    }
                    *(int *)((int)puVar15 + iVar7 + 0x60) = iVar11;
                    *(int *)((int)puVar15 + (int)DAT_8c047706 + iVar7 + -4) = iVar10;
                    iVar11 = *(int *)((int)puVar15 + iVar7 + 0x54);
                    *(undefined4 *)((int)puVar15 + (int)DAT_8c047708 + iVar7 + -4) =
                         *(undefined4 *)((int)puVar15 + iVar7 + 0x60);
                    *(int *)((int)puVar15 + (int)DAT_8c04770a + iVar7 + -4) = iVar10 + DAT_8c047702;
                    *(undefined4 *)((int)puVar15 + (int)DAT_8c04770c + iVar7 + -4) =
                         *(undefined4 *)((int)puVar15 + iVar7 + 0x60);
                    *(int *)((int)puVar15 + (int)DAT_8c04770e + iVar7 + -4) = iVar10 + DAT_8c047704;
                    *(int *)((int)puVar15 + (int)DAT_8c047710 + iVar7 + -4) = iVar11;
                    iVar8 = *(int *)((int)puVar15 + iVar7 + 0x60);
                    *(int *)((int)puVar15 + (int)DAT_8c047706 + iVar7 + -4) =
                         *(int *)((int)puVar15 + (int)DAT_8c047706 + iVar7 + -4) + iVar11 * 0x1e;
                    iVar10 = *(int *)((int)puVar15 + (int)DAT_8c047708 + iVar7 + -4);
                    *(int *)((int)puVar15 + (int)DAT_8c047708 + iVar7 + -4) = iVar10 * 2;
                    sVar1 = *(short *)(iVar10 * 2 +
                                      *(int *)((int)puVar15 + (int)DAT_8c047706 + iVar7 + -4));
                    *(int *)((int)puVar15 + (int)DAT_8c04770a + iVar7 + -4) =
                         *(int *)((int)puVar15 + (int)DAT_8c04770a + iVar7 + -4) + iVar11 * 0x1e;
                    iVar10 = *(int *)((int)puVar15 + (int)DAT_8c04770c + iVar7 + -4);
                    *(int *)((int)puVar15 + (int)DAT_8c04770c + iVar7 + -4) = iVar10 * 2;
                    sVar2 = *(short *)(iVar10 * 2 +
                                      *(int *)((int)puVar15 + (int)DAT_8c04770a + iVar7 + -4));
                    iVar10 = *(int *)((int)puVar15 + (int)DAT_8c047710 + iVar7 + -4);
                    *(int *)((int)puVar15 + (int)DAT_8c047710 + iVar7 + -4) = iVar10 * 0xf;
                    *(int *)((int)puVar15 + (int)DAT_8c047710 + iVar7 + -4) = iVar10 * 0x1e;
                    iVar11 = *(int *)((int)puVar15 + (int)DAT_8c04770e + iVar7 + -4);
                    iVar10 = *(int *)((int)puVar15 + (int)DAT_8c047710 + iVar7 + -4);
                    *(int *)((int)puVar15 + (int)DAT_8c04770e + iVar7 + -4) = iVar11 + iVar10;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[2],SUB84(dVar16,0));
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 2);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar20 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar20 = (int)param_1;
                    }
                    if ((int)sVar1 + (int)sVar2 + (int)*(short *)(iVar8 * 2 + iVar11 + iVar10) ==
                        iVar20) {
                      piVar13 = piVar13 + 3;
                    }
                  }
                  else if (iVar6 == 0x13) {
                    iVar10 = *(int *)((int)puVar15 + iVar7 + 0x40);
                    *(int *)((int)puVar15 + (int)DAT_8c047870 + iVar7 + -4) = iVar10 + DAT_8c04786e;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar11 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar11 = (int)param_1;
                    }
                    if (*(int *)(*(int *)((int)puVar15 + iVar7 + 0x54) * 4 +
                                iVar10 + DAT_8c04786e + (int)DAT_8c047872) == iVar11) {
                      if (in_FPSCR_SZ == '\0') {
                        param_1 = (double)CONCAT44(piVar13[2],SUB84(param_1,0));
                      }
                      else {
                        param_1 = *(double *)(piVar13 + 2);
                      }
                      if (in_FPSCR_PR == '\0') {
                        iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                      }
                      else {
                        iVar10 = (int)param_1;
                      }
                      if ((iVar10 == 0) &&
                         ((*(byte *)((int)DAT_8c047874 +
                                    *(int *)((int)puVar15 + (int)DAT_8c047870 + iVar7 + -4)) & 0x40)
                          == 0)) {
                        piVar13 = piVar13 + 3;
                      }
                      else if ((iVar10 == 1) &&
                              ((*(byte *)((int)DAT_8c047874 +
                                         *(int *)((int)puVar15 + (int)DAT_8c047870 + iVar7 + -4)) &
                               0x40) != 0)) {
                        piVar13 = piVar13 + 3;
                      }
                    }
                  }
                  else if (iVar6 == 0x14) {
                    *(int *)((int)puVar15 + iVar7 + 0x78) =
                         *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c04786e;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar10 = (int)param_1;
                    }
                    if (iVar10 <= *(int *)(*(int *)((int)puVar15 + iVar7 + 0x54) * 4 +
                                          *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c04786e
                                          + (int)DAT_8c047872)) {
                      if (in_FPSCR_SZ == '\0') {
                        param_1 = (double)CONCAT44(piVar13[2],SUB84(param_1,0));
                      }
                      else {
                        param_1 = *(double *)(piVar13 + 2);
                      }
                      if (in_FPSCR_PR == '\0') {
                        iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                      }
                      else {
                        iVar10 = (int)param_1;
                      }
                      if ((iVar10 == 0) &&
                         ((*(byte *)((int)DAT_8c047874 + *(int *)((int)puVar15 + iVar7 + 0x78)) &
                          0x40) == 0)) {
                        piVar13 = piVar13 + 3;
                      }
                      else if ((iVar10 == 1) &&
                              ((*(byte *)((int)DAT_8c047874 + *(int *)((int)puVar15 + iVar7 + 0x78))
                               & 0x40) != 0)) {
                        piVar13 = piVar13 + 3;
                      }
                    }
                  }
                  else if (iVar6 == 0x15) {
                    *(int *)((int)puVar15 + iVar7 + 0x74) =
                         *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c04786e;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar10 = (int)param_1;
                    }
                    if (*(int *)(*(int *)((int)puVar15 + iVar7 + 0x54) * 4 +
                                *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c04786e +
                                (int)DAT_8c047872) <= iVar10) {
                      if (in_FPSCR_SZ == '\0') {
                        param_1 = (double)CONCAT44(piVar13[2],SUB84(param_1,0));
                      }
                      else {
                        param_1 = *(double *)(piVar13 + 2);
                      }
                      if (in_FPSCR_PR == '\0') {
                        iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                      }
                      else {
                        iVar10 = (int)param_1;
                      }
                      if ((iVar10 == 0) &&
                         ((*(byte *)((int)DAT_8c047874 + *(int *)((int)puVar15 + iVar7 + 0x74)) &
                          0x40) == 0)) {
                        piVar13 = piVar13 + 3;
                      }
                      else if ((iVar10 == 1) &&
                              ((*(byte *)((int)DAT_8c047874 + *(int *)((int)puVar15 + iVar7 + 0x74))
                               & 0x40) != 0)) {
                        piVar13 = piVar13 + 3;
                      }
                    }
                  }
                  else if (iVar6 == 0x16) {
                    *(int *)((int)puVar15 + iVar7 + 0x70) =
                         *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c0479f6;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar10 = (int)param_1;
                    }
                    if (*(int *)(*(int *)((int)puVar15 + iVar7 + 0x54) * 4 +
                                *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c0479f6 +
                                (int)DAT_8c0479f8) == iVar10) {
                      if (in_FPSCR_SZ == '\0') {
                        param_1 = (double)CONCAT44(piVar13[2],SUB84(param_1,0));
                      }
                      else {
                        param_1 = *(double *)(piVar13 + 2);
                      }
                      if (in_FPSCR_PR == '\0') {
                        iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                      }
                      else {
                        iVar10 = (int)param_1;
                      }
                      if ((iVar10 == 0) &&
                         ((*(byte *)((int)DAT_8c0479fa + *(int *)((int)puVar15 + iVar7 + 0x70)) &
                          0x40) == 0)) {
                        piVar13 = piVar13 + 3;
                      }
                      else if ((iVar10 == 1) &&
                              ((*(byte *)((int)DAT_8c0479fa + *(int *)((int)puVar15 + iVar7 + 0x70))
                               & 0x40) != 0)) {
                        piVar13 = piVar13 + 3;
                      }
                    }
                  }
                  else if (iVar6 == 0x17) {
                    *(int *)((int)puVar15 + iVar7 + 0x6c) =
                         *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c0479f6;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (double)CONCAT44(piVar13[1],uVar14);
                    }
                    else {
                      param_1 = *(double *)(piVar13 + 1);
                    }
                    if (in_FPSCR_PR == '\0') {
                      iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                    }
                    else {
                      iVar10 = (int)param_1;
                    }
                    if (iVar10 <= *(int *)(*(int *)((int)puVar15 + iVar7 + 0x54) * 4 +
                                          *(int *)((int)puVar15 + iVar7 + 0x40) + (int)DAT_8c0479f6
                                          + (int)DAT_8c0479f8)) {
                      if (in_FPSCR_SZ == '\0') {
                        param_1 = (double)CONCAT44(piVar13[2],SUB84(param_1,0));
                      }
                      else {
                        param_1 = *(double *)(piVar13 + 2);
                      }
                      if (in_FPSCR_PR == '\0') {
                        iVar10 = (int)(float)((ulonglong)param_1 >> 0x20);
                      }
                      else {
                        iVar10 = (int)param_1;
                      }
                      if ((iVar10 == 0) &&
                         ((*(byte *)((int)DAT_8c0479fa + *(int *)((int)puVar15 + iVar7 + 0x6c)) &
                          0x40) == 0)) {
                        piVar13 = piVar13 + 3;
                      }
                      else if ((iVar10 == 1) &&
                              ((*(byte *)((int)DAT_8c0479fa + *(int *)((int)puVar15 + iVar7 + 0x6c))
                               & 0x40) != 0)) {
                        piVar13 = piVar13 + 3;
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
                        param_1 = (double)CONCAT44(piVar13[1],uVar14);
                      }
                      else {
                        param_1 = *(double *)(piVar13 + 1);
                      }
                      if (in_FPSCR_PR == '\0') {
                        uVar19 = (uint)(float)((ulonglong)param_1 >> 0x20);
                      }
                      else {
                        uVar19 = (uint)param_1;
                      }
                      if (uVar19 == *(ushort *)((int)puVar15 + iVar7 + 0x58)) {
                        if (in_FPSCR_SZ == '\0') {
                          param_1 = (double)CONCAT44(piVar13[2],SUB84(param_1,0));
                        }
                        else {
                          param_1 = *(double *)(piVar13 + 2);
                        }
                        if (in_FPSCR_PR == '\0') {
                          uVar19 = (uint)(float)((ulonglong)param_1 >> 0x20);
                        }
                        else {
                          uVar19 = (uint)param_1;
                        }
                        if (uVar19 == (uVar5 & 0xffff)) {
                          piVar13 = piVar13 + 3;
                          *(int **)((int)puVar15 + iVar7 + 0x24) = piVar13;
                          bVar9 = true;
                          iVar6 = *piVar13;
                        }
                      }
                    }
                  }
                }
              }
            } while (bVar9);
          }
          iVar6 = *(int *)((int)puVar15 + iVar7 + 0x2c);
          *(int *)((int)puVar15 + iVar7 + 0x28) = *(int *)((int)puVar15 + iVar7 + 0x28) + 1;
          *(int *)((int)puVar15 + iVar7 + 0x2c) = iVar6 + -1;
        } while (iVar6 + -1 != 0);
      }
      if (*(int **)((int)puVar15 + iVar7 + 0x24) != piVar13) {
        *(int **)(*(int *)((int)puVar15 + iVar7 + 0x14) * 4 + *(int *)((int)puVar15 + iVar7 + 0x1c))
             = piVar13;
      }
      if (*piVar13 == 1) {
        iVar6 = *(int *)(*(int *)((int)puVar15 + iVar7 + -4) + 8);
        *(int *)((int)puVar15 + (int)DAT_8c0473f0 + iVar7 + -4) = iVar6;
        if ((*(byte *)((int)DAT_8c0473f4 + iVar6 + DAT_8c0473f2) & 0x40) == 0) {
          FUN_8c0479d2();
          return;
        }
        uVar14 = *(undefined4 *)
                  (*(int *)((int)puVar15 + iVar7 + 0x14) * 4 +
                  *(int *)((int)DAT_8c0473f8 + *(int *)(DAT_8c0473f6 + iVar6)) + (int)DAT_8c0473fa);
        iVar10 = *(int *)(*(int *)((int)puVar15 + iVar7 + -4) + 4);
        iVar6 = iVar6 + DAT_8c0473fc;
        iVar8 = (int)DAT_8c0473fe;
        iVar11 = iVar10 * 2;
        sVar1 = *(short *)(iVar11 + iVar6 + DAT_8c047400);
        *(short *)(iVar6 + DAT_8c047400 + iVar11) = *(short *)(iVar11 + iVar6 + DAT_8c047400) + 1;
        *(short *)(iVar6 + iVar8 + iVar10 * 8 + sVar1 * 2) = (short)uVar14 + 0xe;
      }
    }
    iVar6 = *(int *)((int)puVar15 + iVar7 + 0x18);
    *(int *)((int)puVar15 + iVar7 + 0x14) = *(int *)((int)puVar15 + iVar7 + 0x14) + 1;
    *(int *)((int)puVar15 + iVar7 + 0x18) = iVar6 + -1;
    if (iVar6 + -1 == 0) {
      **(uint **)((int)puVar15 + iVar7 + -4) = **(uint **)((int)puVar15 + iVar7 + -4) & 0xffffffc0;
      return;
    }
  } while( true );
}

