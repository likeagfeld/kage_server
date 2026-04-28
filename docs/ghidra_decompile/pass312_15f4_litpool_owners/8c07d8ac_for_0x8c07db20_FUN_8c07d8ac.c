// query addr: 0x8c07db20
// containing entry: 8c07d8ac
// name: FUN_8c07d8ac
// signature: undefined FUN_8c07d8ac(void)
// body addrs: 1120


/* WARNING: Removing unreachable block (ram,0x8c07dbd0) */
/* WARNING: Removing unreachable block (ram,0x8c07da52) */
/* WARNING: Removing unreachable block (ram,0x8c07dbda) */
/* WARNING: Removing unreachable block (ram,0x8c07dbe0) */
/* WARNING: Removing unreachable block (ram,0x8c07dc0c) */
/* WARNING: Removing unreachable block (ram,0x8c07dc16) */
/* WARNING: Removing unreachable block (ram,0x8c07dc1c) */

void FUN_8c07d8ac(double param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar15;
  double dVar14;
  ulonglong in_dr14;
  ulonglong uVar16;
  double dVar17;
  float fVar18;
  undefined8 in_xd8;
  bool bVar19;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_14 [8];
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)uStack_c);
    puVar12 = &uStack_c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr14;
  }
  else {
    puVar12 = (undefined8 *)local_14;
    uStack_c = in_dr14;
  }
  *(undefined4 *)((int)puVar12 + -4) = in_PR;
  iVar6 = 8;
  *(int *)((int)puVar12 + -0x18) = param_2;
  iVar11 = 0;
  iVar5 = *(int *)(DAT_8c07da0c + param_2);
  iVar9 = (int)DAT_8c07da0e;
  do {
    if (*(char *)(iVar11 + *(int *)(*(int *)((int)puVar12 + -0x18) + 4) + 0xe) != '\x03') {
      *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
      *(undefined2 *)(iVar5 + 0x10) = *(undefined2 *)(iVar5 + 2);
    }
    iVar6 = iVar6 + -1;
    iVar11 = iVar11 + 1;
    iVar5 = iVar5 + iVar9;
  } while (iVar6 != 0);
  iVar9 = 0;
  iVar6 = 8;
  iVar5 = 0;
  do {
    iVar11 = *(int *)((int)puVar12 + -0x18);
    *(undefined4 *)((int)puVar12 + iVar9 * 4 + -0x3c) = 0;
    iVar11 = *(int *)(DAT_8c07da0c + iVar11);
    if (((*(ushort *)(iVar5 + iVar11) & 1) != 0) && ((*(byte *)(iVar5 + iVar11 + 8) & 4) == 0)) {
      *(undefined4 *)((int)puVar12 + iVar9 * 4 + -0x3c) = 1;
    }
    iVar6 = iVar6 + -1;
    iVar9 = iVar9 + 1;
    iVar5 = iVar5 + DAT_8c07da0e;
  } while (iVar6 != 0);
  uVar16 = in_dr14 & 0xffffffff;
  *(undefined4 *)((int)puVar12 + -0x14) = 8;
  iVar5 = 0;
  do {
    if (*(int *)((int)puVar12 + iVar5 * 4 + -0x3c) != 0) {
      iVar10 = 0;
      iVar11 = 8;
      iVar6 = (int)DAT_8c07da0e;
      iVar7 = *(int *)((int)DAT_8c07da0c + *(int *)((int)puVar12 + -0x18));
      iVar9 = iVar7 + DAT_8c07da0e * iVar5;
      *(int *)((int)puVar12 + -0x1c) = iVar7;
      do {
        if ((*(int *)((int)puVar12 + iVar10 * 4 + -0x3c) != 0) &&
           (*(short *)(iVar7 + 4) != *(short *)(iVar9 + 4))) {
          iVar4 = (*(code *)PTR_FUN_8c07dcb0)
                            (*(undefined4 *)((int)puVar12 + -0x18),iVar9 + 0x12,iVar7 + 0x12);
          if (iVar4 == 0) {
            *(int *)((int)puVar12 + -0x40) = iVar7 + 0x10;
            iVar4 = (*(code *)PTR_FUN_8c07dcb4)
                              (*(undefined4 *)((int)puVar12 + -0x18),iVar9 + 0x12,iVar9 + 0x10,
                               iVar7 + 0x12);
            if ((iVar4 != 0) && (cVar1 = *(char *)(iVar9 + 0x18), cVar1 != '\0')) {
              if (*(char *)((int)DAT_8c07dca8 + *(int *)(*(int *)((int)puVar12 + -0x18) + 4)) ==
                  '\x01') {
                if (*(char *)(iVar7 + 0x18) == '\0') {
                  cVar1 = *(char *)(iVar9 + 0x1b);
                  iVar11 = *(int *)((int)puVar12 + -0x1c);
                  *(undefined2 *)((int)puVar12 + -0x10) = *(undefined2 *)(iVar7 + 4);
                  (*(code *)PTR_FUN_8c07dcb8)
                            (*(int *)((int)DAT_8c07dcaa + *(int *)((int)puVar12 + -0x18)) +
                             cVar1 * 0x74 + 9);
                  *(undefined2 *)
                   (*(int *)(*(int *)((int)puVar12 + -0x18) + 0x10) + (int)DAT_8c07dd34 +
                    (uint)*(ushort *)(iVar9 + 4) * 0x1e + 0x16) = 0;
                  *(undefined2 *)((int)puVar12 + -0x10) = *(undefined2 *)(iVar7 + 4);
                  *(undefined2 *)
                   (*(int *)(*(int *)((int)puVar12 + -0x18) + 0x10) + (int)DAT_8c07dd34 +
                    (uint)*(ushort *)((int)puVar12 + -0x10) * 0x1e + 0x16) = 1;
                  *(undefined1 *)(iVar7 + 0x18) = *(undefined1 *)(iVar9 + 0x18);
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x14),SUB84(param_1,0));
                    *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar9 + 0x14);
                  }
                  else {
                    param_1 = *(double *)(iVar9 + 0x14);
                    *(double *)(iVar7 + 0x14) = param_1;
                  }
                  *(undefined1 *)(iVar7 + 0x1b) = *(undefined1 *)(iVar9 + 0x1b);
                  *(undefined1 *)(iVar9 + 0x18) = 0;
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(iVar9 + 0x14) = (int)(uVar16 >> 0x20);
                  }
                  else {
                    *(ulonglong *)(iVar9 + 0x14) = uVar16;
                  }
                  *(undefined1 *)(iVar9 + 0x1b) = 0;
                  *(undefined4 *)((int)puVar12 + iVar5 * 4 + -0x3c) = 0;
                  goto LAB_8c07d97e;
                }
              }
              else {
                if (*(char *)(iVar7 + 0x18) != '\0') {
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)(ulonglong)*(uint *)(iVar9 + 0x14);
                  }
                  else {
                    in_xd8 = *(undefined8 *)(iVar9 + 0x14);
                  }
                  *(char *)(iVar9 + 0x18) = *(char *)(iVar7 + 0x18);
                  if (in_FPSCR_SZ == '\0') {
                    param_1 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x14),SUB84(param_1,0));
                  }
                  else {
                    param_1 = *(double *)(iVar7 + 0x14);
                  }
                  iVar11 = *(int *)((int)puVar12 + -0x1c);
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(iVar9 + 0x14) = (int)((ulonglong)param_1 >> 0x20);
                  }
                  else {
                    *(double *)(iVar9 + 0x14) = param_1;
                  }
                  *(char *)(iVar7 + 0x18) = cVar1;
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(iVar7 + 0x14) = SUB84(param_1,0);
                  }
                  else {
                    *(undefined8 *)(iVar7 + 0x14) = in_xd8;
                  }
                  *(undefined4 *)((int)puVar12 + iVar5 * 4 + -0x3c) = 0;
                  goto LAB_8c07d97e;
                }
                *(char *)(iVar7 + 0x18) = cVar1;
                if (in_FPSCR_SZ == '\0') {
                  param_1 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x14),SUB84(param_1,0));
                  *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar9 + 0x14);
                }
                else {
                  param_1 = *(double *)(iVar9 + 0x14);
                  *(double *)(iVar7 + 0x14) = param_1;
                }
              }
            }
          }
        }
        iVar11 = iVar11 + -1;
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + iVar6;
      } while (iVar11 != 0);
      iVar11 = *(int *)((int)puVar12 + -0x1c);
    }
LAB_8c07d97e:
    iVar6 = *(int *)((int)puVar12 + -0x14);
    iVar5 = iVar5 + 1;
    *(int *)((int)puVar12 + -0x14) = iVar6 + -1;
    if (iVar6 + -1 == 0) {
      iVar5 = 0;
      iVar6 = 8;
      uVar8 = (undefined4)(uVar16 >> 0x20);
      dVar17 = (double)CONCAT44(uVar8,0x3f800000);
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44(uVar8,0x40000000);
      }
      else {
        dVar17 = dVar17 + dVar17;
      }
      iVar9 = *(int *)((int)DAT_8c07da0c + *(int *)((int)puVar12 + -0x18));
      *(undefined4 *)((int)puVar12 + -0xc) = 0;
      *(int *)((int)puVar12 + -8) = iVar11;
      do {
        if (*(char *)(iVar5 + *(int *)(*(int *)((int)puVar12 + -0x18) + 4) + 0xe) != '\x03') {
          bVar2 = *(byte *)(iVar9 + 8);
          if ((bVar2 & 4) == 0) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                         *(undefined4 *)(iVar9 + 0x14));
            }
            else {
              in_xd8 = *(undefined8 *)(iVar9 + 0x14);
            }
            fVar18 = (float)((ulonglong)dVar17 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              bVar19 = fVar18 < SUB84(param_1,0);
            }
            else {
              bVar19 = dVar17 < param_1;
            }
            if (bVar19) {
              if (in_FPSCR_SZ == '\0') {
                param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar12 + -0x18) + 0x1c),
                                           SUB84(param_1,0));
              }
              else {
                param_1 = *(double *)(*(int *)((int)puVar12 + -0x18) + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar15 = (float)((ulonglong)param_1 >> 0x20);
                fVar13 = SUB84(param_1,0) - fVar15;
                param_1 = (double)CONCAT44(fVar15,fVar13);
                bVar19 = fVar18 < fVar13;
              }
              else {
                param_1 = param_1 - param_1;
                fVar13 = SUB84(param_1,0);
                bVar19 = dVar17 < param_1;
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(iVar9 + 0x14) = fVar13;
              }
              else {
                *(undefined8 *)(iVar9 + 0x14) = in_xd8;
              }
              if (!bVar19) {
                iVar5 = *(int *)((int)puVar12 + -0x18);
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(iVar9 + 0x14) = fVar18;
                }
                else {
                  *(double *)(iVar9 + 0x14) = dVar17;
                }
                if (*(char *)((int)DAT_8c07da10 + *(int *)(iVar5 + 4)) == '\0') {
                  *(undefined1 *)(iVar9 + 0x18) = 0;
                }
              }
            }
            if ((bVar2 & 0x20) != 0) {
              if (*(char *)(iVar9 + 9) == *(char *)(iVar9 + 10)) {
                if (in_FPSCR_SZ == '\0') {
                  dVar14 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar12 + -0x18) + 0x1c),
                                            *(undefined4 *)(iVar9 + 0xc));
                }
                else {
                  in_xd8 = *(undefined8 *)(iVar9 + 0xc);
                  dVar14 = *(double *)(*(int *)((int)puVar12 + -0x18) + 0x1c);
                }
                if (in_FPSCR_PR == '\0') {
                  fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
                }
                else {
                  fVar13 = SUB84(dVar14 - dVar14,0);
                }
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(iVar9 + 0xc) = fVar13;
                }
                else {
                  *(undefined8 *)(iVar9 + 0xc) = in_xd8;
                }
              }
              else {
                if (in_FPSCR_SZ == '\0') {
                  param_1 = (double)(ulonglong)*(uint *)(iVar9 + 0xc);
                }
                else {
                  in_xd8 = *(undefined8 *)(iVar9 + 0xc);
                }
                if (in_FPSCR_SZ == '\0') {
                  dVar14 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar12 + -0x18) + 0x1c),
                                            SUB84(param_1,0));
                }
                else {
                  dVar14 = *(double *)(*(int *)((int)puVar12 + -0x18) + 0x1c);
                }
                if (in_FPSCR_PR == '\0') {
                  fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20) * SUB84(dVar17,0);
                }
                else {
                  fVar13 = SUB84(dVar14 * dVar17 - dVar14 * dVar17,0);
                }
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(iVar9 + 0xc) = fVar13;
                }
                else {
                  *(undefined8 *)(iVar9 + 0xc) = in_xd8;
                }
              }
              if (in_FPSCR_SZ == '\0') {
                param_1 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0xc),fVar13);
              }
              else {
                param_1 = *(double *)(iVar9 + 0xc);
              }
              if (in_FPSCR_PR == '\0') {
                bVar19 = fVar18 < (float)((ulonglong)param_1 >> 0x20);
              }
              else {
                bVar19 = dVar17 < param_1;
              }
              if (!bVar19) {
                *(byte *)(iVar9 + 8) = bVar2 & 0xdf;
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(iVar9 + 0xc) = fVar18;
                }
                else {
                  *(double *)(iVar9 + 0xc) = dVar17;
                }
              }
            }
            uVar8 = *(undefined4 *)((int)puVar12 + -0x18);
            (*(code *)PTR_FUN_8c07db24)(uVar8,iVar9);
            (*(code *)PTR_FUN_8c07db28)(uVar8,iVar9);
            bVar2 = *(byte *)(iVar9 + 8);
          }
          fVar18 = (float)((ulonglong)dVar17 >> 0x20);
          if ((bVar2 & 0x80) != 0) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                         *(undefined4 *)(iVar9 + 0x20));
            }
            else {
              in_xd8 = *(undefined8 *)(iVar9 + 0x20);
            }
            if (SUB84(param_1,0) != fVar18) {
              if (in_FPSCR_SZ == '\0') {
                param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar12 + -0x18) + 0x1c),
                                           SUB84(param_1,0));
              }
              else {
                param_1 = *(double *)(*(int *)((int)puVar12 + -0x18) + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar15 = (float)((ulonglong)param_1 >> 0x20);
                fVar13 = SUB84(param_1,0) - fVar15;
                param_1 = (double)CONCAT44(fVar15,fVar13);
                bVar19 = fVar18 < fVar13;
              }
              else {
                param_1 = param_1 - param_1;
                fVar13 = SUB84(param_1,0);
                bVar19 = dVar17 < param_1;
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(iVar9 + 0x20) = fVar13;
              }
              else {
                *(undefined8 *)(iVar9 + 0x20) = in_xd8;
              }
              uVar3 = DAT_8c07db1e;
              if (!bVar19) {
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(iVar9 + 0x20) = fVar18;
                }
                else {
                  *(double *)(iVar9 + 0x20) = dVar17;
                }
                *(byte *)(iVar9 + 8) = bVar2 & (byte)uVar3;
              }
            }
          }
          bVar2 = *(byte *)(iVar9 + 0x19);
          if ((1 < bVar2) && (((bVar2 == 2 || (bVar2 == 3)) || (bVar2 == 7)))) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                         *(undefined4 *)(iVar9 + 0xc));
            }
            else {
              in_xd8 = *(undefined8 *)(iVar9 + 0xc);
            }
            if (in_FPSCR_PR == '\0') {
              bVar19 = fVar18 < SUB84(param_1,0);
            }
            else {
              bVar19 = dVar17 < param_1;
            }
            if (bVar19) {
              if (in_FPSCR_SZ == '\0') {
                param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar12 + -0x18) + 0x1c),
                                           SUB84(param_1,0));
              }
              else {
                param_1 = *(double *)(*(int *)((int)puVar12 + -0x18) + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar15 = (float)((ulonglong)param_1 >> 0x20);
                fVar13 = SUB84(param_1,0) - fVar15;
                param_1 = (double)CONCAT44(fVar15,fVar13);
                bVar19 = fVar18 < fVar13;
              }
              else {
                param_1 = param_1 - param_1;
                fVar13 = SUB84(param_1,0);
                bVar19 = dVar17 < param_1;
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(iVar9 + 0xc) = fVar13;
              }
              else {
                *(undefined8 *)(iVar9 + 0xc) = in_xd8;
              }
              if (!bVar19) {
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(iVar9 + 0xc) = fVar18;
                }
                else {
                  *(double *)(iVar9 + 0xc) = dVar17;
                }
              }
            }
          }
          if ((*(char *)(iVar9 + 0x1a) != '\0') && (*(char *)(iVar9 + 0x1a) == '\x05')) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                         *(undefined4 *)(iVar9 + 0xc));
            }
            else {
              in_xd8 = *(undefined8 *)(iVar9 + 0xc);
            }
            if (in_FPSCR_PR == '\0') {
              bVar19 = fVar18 < SUB84(param_1,0);
            }
            else {
              bVar19 = dVar17 < param_1;
            }
            if (bVar19) {
              if (in_FPSCR_SZ == '\0') {
                param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)puVar12 + -0x18) + 0x1c),
                                           SUB84(param_1,0));
              }
              else {
                param_1 = *(double *)(*(int *)((int)puVar12 + -0x18) + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar15 = (float)((ulonglong)param_1 >> 0x20);
                fVar13 = SUB84(param_1,0) - fVar15;
                param_1 = (double)CONCAT44(fVar15,fVar13);
                bVar19 = fVar18 < fVar13;
              }
              else {
                param_1 = param_1 - param_1;
                fVar13 = SUB84(param_1,0);
                bVar19 = dVar17 < param_1;
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(iVar9 + 0xc) = fVar13;
              }
              else {
                *(undefined8 *)(iVar9 + 0xc) = in_xd8;
              }
              if (!bVar19) {
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(iVar9 + 0xc) = fVar18;
                }
                else {
                  *(double *)(iVar9 + 0xc) = dVar17;
                }
              }
            }
          }
          *(undefined1 *)(iVar9 + 10) = *(undefined1 *)(iVar9 + 9);
        }
        iVar6 = iVar6 + -1;
        iVar5 = *(int *)((int)puVar12 + -0xc) + 1;
        *(int *)((int)puVar12 + -0xc) = iVar5;
        iVar9 = iVar9 + DAT_8c07db20;
      } while (iVar6 != 0);
      return;
    }
  } while( true );
}

