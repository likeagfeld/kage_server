// entry: 8c0d0dac
// name: FUN_8c0d0dac


/* WARNING: Removing unreachable block (ram,0x8c0d1036) */
/* WARNING: Removing unreachable block (ram,0x8c0d1040) */
/* WARNING: Removing unreachable block (ram,0x8c0d1116) */
/* WARNING: Removing unreachable block (ram,0x8c0d1046) */

undefined4 FUN_8c0d0dac(undefined4 param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  double dVar16;
  ulonglong in_dr14;
  ulonglong uVar17;
  double dVar18;
  bool bVar19;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar15 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar15 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  if (*(int *)((int)DAT_8c0d0ef8 + (int)param_2) == 0) {
    if (*(int *)((int)DAT_8c0d0efa + (int)param_2) == 0) {
      if (*(int *)((int)DAT_8c0d100e + (int)param_2) == 0) {
        dVar18 = (double)(in_dr14 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44(param_2[5],param_1);
        }
        else {
          dVar16 = *(double *)(param_2 + 5);
        }
        if (in_FPSCR_PR == '\0') {
          bVar19 = (float)((ulonglong)dVar16 >> 0x20) < 0.0;
        }
        else {
          bVar19 = dVar16 < dVar18;
        }
        if (bVar19) {
          uVar10 = 0;
          iVar12 = 8;
          do {
            if (*(char *)(uVar10 + param_2[1] + 0xe) != '\x03') {
              if ((int)uVar10 < 0) {
                uVar8 = 1 >> (~uVar10 & 0x1f) + 1;
              }
              else {
                uVar8 = 1 << (uVar10 & 0x1f);
              }
              *(uint *)((int)DAT_8c0d1012 + param_2[3]) =
                   *(uint *)((int)DAT_8c0d1012 + param_2[3]) | uVar8;
              *(int *)(param_2[3] + uVar10 * 0x2c + 8) =
                   *(int *)(param_2[3] + uVar10 * 0x2c + 8) + 1;
            }
            iVar12 = iVar12 + -1;
            uVar10 = uVar10 + 1;
          } while (iVar12 != 0);
          if ((*param_2 & 2) == 0) {
            uVar5 = 1;
          }
          else {
            *(undefined4 *)((int)DAT_8c0d1010 + (int)param_2) = 1;
            *(undefined4 *)((int)DAT_8c0d1014 + (int)param_2) = 0xffffffff;
            uVar5 = 0;
          }
        }
        else {
          uVar10 = param_2[1];
          iVar13 = 0;
          *(uint *)((int)puVar15 + -8) = uVar10;
          *(uint *)((int)puVar15 + -0x1c) = uVar10 + 0xe;
          iVar12 = 8;
          do {
            if ((*(char *)(iVar13 + *(int *)((int)puVar15 + -0x1c)) != '\x03') &&
               (2 < *(short *)(param_2[4] + (int)DAT_8c0d1160 + iVar13 * 0x1e + 0x1a))) {
              iVar11 = *(int *)((int)DAT_8c0d114e + (int)param_2);
              *(int *)((int)puVar15 + -0x18) = iVar11;
              iVar11 = iVar11 + DAT_8c0d114c * iVar13;
              *(int *)((int)puVar15 + -0x14) = iVar11;
              *(int *)((int)puVar15 + -0x10) = iVar11 + 2;
              uVar5 = (*(code *)PTR_FUN_8c0d1164)((int)DAT_8c0d1150);
              *(undefined4 *)((int)puVar15 + -0xc) = uVar5;
              iVar11 = (*(code *)PTR_FUN_8c0d1164)(6);
              if (*(char *)(param_2[8] * *(int *)((int)puVar15 + -0xc) + iVar11 +
                           *(int *)((int)DAT_8c0d1152 + (int)param_2)) == '^') {
                iVar11 = *(int *)((int)puVar15 + -0x18) + DAT_8c0d114c * iVar13;
                bVar2 = *(byte *)(iVar11 + 8);
                *(int *)((int)puVar15 + -0x18) = iVar11;
                *(byte *)(iVar11 + 8) = bVar2 | (byte)DAT_8c0d1154;
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(iVar11 + 0x20) = (int)((ulonglong)dVar18 >> 0x20);
                }
                else {
                  *(double *)(iVar11 + 0x20) = dVar18;
                }
                if ((*param_2 & 2) == 0) {
                  *(int *)((int)DAT_8c0d115a + (int)param_2) = iVar13;
                  *(undefined4 *)((int)DAT_8c0d115c + (int)param_2) = 1;
                  *(undefined4 *)((int)DAT_8c0d115e + (int)param_2) = 1;
                  *(undefined4 *)((int)DAT_8c0d1156 + (int)param_2) = 0;
                  return 0;
                }
                uVar10 = param_2[1];
                *(uint *)((int)puVar15 + -8) = uVar10;
                iVar11 = uVar10 + 0xe;
                cVar1 = *(char *)(iVar13 + iVar11);
                *(int *)((int)puVar15 + -0x1c) = iVar11;
                if (cVar1 != '\x01') {
                  *(undefined4 *)((int)DAT_8c0d1156 + (int)param_2) = 1;
                  *(int *)((int)DAT_8c0d1158 + (int)param_2) = iVar13;
                  return 0;
                }
              }
            }
            iVar12 = iVar12 + -1;
            iVar13 = iVar13 + 1;
          } while (iVar12 != 0);
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      iVar12 = *(int *)((int)DAT_8c0d0efc + (int)param_2);
      if ((-1 < iVar12) && (iVar12 < 8)) {
        iVar13 = 0;
        uVar17 = in_dr14 & 0xffffffff;
        iVar12 = *(int *)((int)DAT_8c0d0f00 + (int)param_2) + DAT_8c0d0efe * iVar12;
        *(byte *)(iVar12 + 8) = *(byte *)(iVar12 + 8) | (byte)DAT_8c0d0f02;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(iVar12 + 0x20) = 0;
        }
        else {
          *(ulonglong *)(iVar12 + 0x20) = uVar17;
        }
        puVar3 = PTR_FUN_8c0d0f0c;
        uVar10 = param_2[9];
        uVar8 = param_2[8];
        *(uint *)((int)puVar15 + -0x28) = uVar10;
        if (0 < (int)uVar10) {
          if ((int)uVar8 < 1) {
            do {
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)((int)puVar15 + -0x28));
          }
          else {
            do {
              iVar12 = 0;
              do {
                iVar11 = (*(code *)puVar3)(param_2,iVar12,iVar13);
                if (iVar11 != 0) {
                  iVar11 = (*(code *)PTR_FUN_8c0d1220)(param_2,iVar12,iVar13,1);
                  if (iVar11 == 0x69) {
                    iVar11 = (*(code *)PTR_FUN_8c0d1234)(param_2,iVar12,iVar13);
                    iVar7 = (*(code *)PTR_FUN_8c0d1238)(4);
                    puVar4 = PTR_FUN_8c0d123c;
                    if (iVar7 == 2) {
                      *(byte *)(iVar11 + 9) = *(byte *)(iVar11 + 9) & 0xf | 0x30;
                      if (in_FPSCR_SZ == '\0') {
                        *(int *)(iVar11 + 0x14) = (int)(uVar17 >> 0x20);
                      }
                      else {
                        *(ulonglong *)(iVar11 + 0x14) = uVar17;
                      }
                      (*(code *)puVar4)(param_2,iVar11);
                    }
                  }
                  else if (iVar11 == 0x6a) {
                    puVar6 = (ushort *)(*(code *)PTR_FUN_8c0d122c)(param_2,iVar12,iVar13);
                    (*(code *)PTR_FUN_8c0d1230)(param_2,puVar6[2]);
                    *puVar6 = *puVar6 & 0xfffe;
                  }
                  else if ((iVar11 == 0x6b) &&
                          (iVar11 = (*(code *)PTR_FUN_8c0d1228)(param_2,iVar12,iVar13),
                          *(char *)(iVar11 + 8) == '\x03')) {
                    *(undefined1 *)(iVar11 + 8) = 4;
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(iVar11 + 0x18) = (int)(uVar17 >> 0x20);
                    }
                    else {
                      *(ulonglong *)(iVar11 + 0x18) = uVar17;
                    }
                  }
                  *(undefined4 *)((int)puVar15 + -0x48) = 0;
                  *(undefined4 *)((int)puVar15 + -0x44) = 1;
                  *(undefined4 *)((int)puVar15 + -0x40) = 1;
                  *(undefined4 *)((int)puVar15 + -0x3c) = 8;
                  *(undefined4 *)((int)puVar15 + -0x38) = 0;
                  (*(code *)PTR_FUN_8c0d1224)(param_2,iVar12,iVar13,0);
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < (int)uVar8);
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)((int)puVar15 + -0x28));
          }
        }
        uVar10 = param_2[1];
        cVar1 = *(char *)(uVar10 + 2);
        *(undefined4 *)((int)puVar15 + -0x24) = *(undefined4 *)((int)DAT_8c0d0efc + (int)param_2);
        *(uint *)((int)puVar15 + -0x20) = uVar10;
        if (cVar1 == '\0') {
          uVar10 = 0;
          *(int *)((int)puVar15 + -0x2c) = *(int *)((int)puVar15 + -0x24);
          if (7 < *(int *)((int)puVar15 + -0x24)) {
            *(undefined4 *)((int)puVar15 + -0x2c) = 8;
          }
          if (0 < *(int *)((int)puVar15 + -0x2c)) {
            iVar12 = *(int *)((int)puVar15 + -0x2c);
            do {
              if (*(char *)(uVar10 + param_2[1] + 0xe) != '\x03') {
                if ((int)uVar10 < 0) {
                  uVar8 = 1 >> (~uVar10 & 0x1f) + 1;
                }
                else {
                  uVar8 = 1 << (uVar10 & 0x1f);
                }
                *(uint *)((int)DAT_8c0d0f04 + param_2[3]) =
                     *(uint *)((int)DAT_8c0d0f04 + param_2[3]) | uVar8;
                *(int *)(param_2[3] + uVar10 * 0x2c + 4) =
                     *(int *)(param_2[3] + uVar10 * 0x2c + 4) + 1;
              }
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < iVar12);
          }
          if (((-1 < *(int *)((int)puVar15 + -0x24)) && (*(int *)((int)puVar15 + -0x24) < 8)) &&
             (*(char *)(*(int *)((int)puVar15 + -0x24) + param_2[1] + 0xe) != '\x03')) {
            uVar10 = *(uint *)((int)puVar15 + -0x24);
            if ((int)uVar10 < 0) {
              uVar8 = 1 >> (~uVar10 & 0x1f) + 1;
            }
            else {
              uVar8 = 1 << (uVar10 & 0x1f);
            }
            *(uint *)((int)DAT_8c0d0f06 + param_2[3]) =
                 *(uint *)((int)DAT_8c0d0f06 + param_2[3]) | uVar8;
            iVar12 = (int)DAT_8c0d0f08;
            *(int *)(param_2[3] + uVar10 * 0x2c) = *(int *)(param_2[3] + uVar10 * 0x2c) + 1;
            uVar8 = param_2[3];
            if (*(int *)(iVar12 + uVar8) < *(int *)(uVar8 + uVar10 * 0x2c)) {
              *(undefined4 *)((int)DAT_8c0d1008 + uVar8) =
                   *(undefined4 *)(uVar8 + *(int *)((int)puVar15 + -0x24) * 0x2c);
            }
          }
          uVar10 = *(int *)((int)puVar15 + -0x24) + 1;
          if ((int)uVar10 < 1) {
            uVar10 = 0;
          }
          for (; (int)uVar10 < 8; uVar10 = uVar10 + 1) {
            if (*(char *)(uVar10 + param_2[1] + 0xe) != '\x03') {
              if ((int)uVar10 < 0) {
                uVar8 = 1 >> (~uVar10 & 0x1f) + 1;
              }
              else {
                uVar8 = 1 << (uVar10 & 0x1f);
              }
              *(uint *)((int)DAT_8c0d100a + param_2[3]) =
                   *(uint *)((int)DAT_8c0d100a + param_2[3]) | uVar8;
              *(int *)(param_2[3] + uVar10 * 0x2c + 4) =
                   *(int *)(param_2[3] + uVar10 * 0x2c + 4) + 1;
            }
          }
        }
        else {
          iVar12 = *(int *)((int)puVar15 + -0x24);
          bVar2 = *(byte *)(iVar12 + uVar10 + 6);
          uVar10 = 0;
          *(int *)((int)puVar15 + -0x30) = iVar12;
          *(uint *)((int)puVar15 + -0x34) = (uint)bVar2;
          if (7 < iVar12) {
            *(undefined4 *)((int)puVar15 + -0x30) = 8;
          }
          if (0 < *(int *)((int)puVar15 + -0x30)) {
            iVar12 = *(int *)((int)puVar15 + -0x30);
            uVar8 = *(uint *)((int)puVar15 + -0x34);
            do {
              uVar14 = param_2[1];
              if (*(char *)(uVar10 + uVar14 + 0xe) != '\x03') {
                if (*(byte *)(uVar10 + uVar14 + 6) == uVar8) {
                  *(int *)(param_2[3] + uVar10 * 0x2c) = *(int *)(param_2[3] + uVar10 * 0x2c) + 1;
                }
                else {
                  *(int *)(param_2[3] + uVar10 * 0x2c + 4) =
                       *(int *)(param_2[3] + uVar10 * 0x2c + 4) + 1;
                }
                if ((int)uVar10 < 0) {
                  uVar9 = 1 >> (~uVar10 & 0x1f) + 1;
                }
                else {
                  uVar9 = 1 << (uVar10 & 0x1f);
                }
                *(uint *)((int)DAT_8c0d138e + param_2[3]) =
                     *(uint *)((int)DAT_8c0d138e + param_2[3]) | uVar9;
              }
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < iVar12);
            *(uint *)((int)puVar15 + -0x20) = uVar14;
          }
          if ((-1 < *(int *)((int)puVar15 + -0x24)) && (*(int *)((int)puVar15 + -0x24) < 8)) {
            uVar10 = param_2[1];
            cVar1 = *(char *)(*(int *)((int)puVar15 + -0x24) + uVar10 + 0xe);
            *(uint *)((int)puVar15 + -0x20) = uVar10;
            if (cVar1 != '\x03') {
              if ((uint)*(byte *)(*(int *)((int)puVar15 + -0x24) + uVar10 + 6) ==
                  *(uint *)((int)puVar15 + -0x34)) {
                *(int *)(param_2[3] + *(int *)((int)puVar15 + -0x24) * 0x2c) =
                     *(int *)(param_2[3] + *(int *)((int)puVar15 + -0x24) * 0x2c) + 1;
              }
              else {
                *(int *)(param_2[3] + *(int *)((int)puVar15 + -0x24) * 0x2c + 4) =
                     *(int *)(param_2[3] + *(int *)((int)puVar15 + -0x24) * 0x2c + 4) + 1;
              }
              uVar10 = *(uint *)((int)puVar15 + -0x24);
              if ((int)uVar10 < 0) {
                uVar10 = 1 >> (~uVar10 & 0x1f) + 1;
              }
              else {
                uVar10 = 1 << (uVar10 & 0x1f);
              }
              *(uint *)((int)DAT_8c0d1390 + param_2[3]) =
                   *(uint *)((int)DAT_8c0d1390 + param_2[3]) | uVar10;
            }
          }
          uVar10 = *(int *)((int)puVar15 + -0x24) + 1;
          if ((int)uVar10 < 1) {
            uVar10 = 0;
          }
          if ((int)uVar10 < 8) {
            uVar8 = *(uint *)((int)puVar15 + -0x34);
            do {
              uVar14 = param_2[1];
              if (*(char *)(uVar10 + uVar14 + 0xe) != '\x03') {
                if (*(byte *)(uVar10 + uVar14 + 6) == uVar8) {
                  *(int *)(param_2[3] + uVar10 * 0x2c) = *(int *)(param_2[3] + uVar10 * 0x2c) + 1;
                }
                else {
                  *(int *)(param_2[3] + uVar10 * 0x2c + 4) =
                       *(int *)(param_2[3] + uVar10 * 0x2c + 4) + 1;
                }
                if ((int)uVar10 < 0) {
                  uVar9 = 1 >> (~uVar10 & 0x1f) + 1;
                }
                else {
                  uVar9 = 1 << (uVar10 & 0x1f);
                }
                *(uint *)((int)DAT_8c0d138e + param_2[3]) =
                     *(uint *)((int)DAT_8c0d138e + param_2[3]) | uVar9;
              }
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < 8);
            *(uint *)((int)puVar15 + -0x20) = uVar14;
          }
          if (*(int *)((int)puVar15 + -0x34) == 1) {
            iVar12 = (int)DAT_8c0d1392;
            *(int *)(iVar12 + param_2[3]) = *(int *)(iVar12 + param_2[3]) + 1;
            uVar10 = param_2[3];
            if (*(int *)((int)DAT_8c0d1394 + uVar10) < *(int *)(iVar12 + uVar10)) {
              *(int *)((int)DAT_8c0d1394 + uVar10) = *(int *)(iVar12 + uVar10);
            }
          }
          else {
            iVar12 = (int)DAT_8c0d143e;
            *(int *)(iVar12 + param_2[3]) = *(int *)(iVar12 + param_2[3]) + 1;
            uVar10 = param_2[3];
            if (*(int *)((int)DAT_8c0d1440 + uVar10) < *(int *)(iVar12 + uVar10)) {
              *(int *)((int)DAT_8c0d1440 + uVar10) = *(int *)(iVar12 + uVar10);
            }
          }
        }
        *(undefined4 *)((int)DAT_8c0d100c + (int)param_2) = 0;
      }
      *(undefined4 *)((int)DAT_8c0d100e + (int)param_2) = 1;
      *(undefined4 *)((int)DAT_8c0d1010 + (int)param_2) = 0;
      uVar5 = 1;
    }
  }
  else {
    uVar5 = *(undefined4 *)((int)DAT_8c0d100e + (int)param_2);
  }
  return uVar5;
}

