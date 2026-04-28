// entry: 8c08ae18
// name: FUN_8c08ae18


/* WARNING: Removing unreachable block (ram,0x8c08b172) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c08ae18(double param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  double in_dr2;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 in_dr12;
  double dVar15;
  float fVar16;
  undefined4 in_fr15;
  double dVar17;
  double in_xd8;
  undefined8 in_xd12;
  bool bVar18;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_3c [16];
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr12;
    puVar11 = auStack_2c;
  }
  else {
    puVar11 = local_3c;
    uStack_24 = in_dr12;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  *(int *)(puVar11 + -0x24) = param_2;
  iVar7 = *(int *)(DAT_8c08ae94 + param_2);
  *(undefined4 *)(puVar11 + -0x20) = 0;
  if (0 < *(int *)(DAT_8c08ae96 + param_2)) {
    uVar10 = _DAT_8c08aea0;
    if (in_FPSCR_SZ == '\0') {
      uVar10 = DAT_8c08ae9c;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(_DAT_8c08aea0,in_fr15);
    }
    else {
      dVar17 = (double)CONCAT44(DAT_8c08aea4,_DAT_8c08aea0);
    }
    *(int *)(puVar11 + -0x1c) = *(int *)(puVar11 + -0x24) + (int)DAT_8c08ae98;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),DAT_8c08aea4);
    }
    dVar15 = (double)((ulonglong)uVar10 << 0x20);
    *(int *)(puVar11 + -0x18) = *(int *)(puVar11 + -0x24) + 0x44;
    do {
      if ((*(int *)(iVar7 + 0x18) == iVar7) && (*(char *)(iVar7 + 8) == '\x01')) {
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar11 + -0x24) + 0x1c),
                                    *(undefined4 *)(iVar7 + 0x14));
        }
        else {
          in_xd8 = *(double *)(iVar7 + 0x14);
          dVar14 = *(double *)(*(int *)(puVar11 + -0x24) + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = (float)((ulonglong)dVar14 >> 0x20);
          dVar14 = (double)CONCAT44(fVar12,SUB84(dVar14,0) + fVar12);
        }
        else {
          dVar14 = dVar14 + dVar14;
        }
        fVar12 = SUB84(dVar14,0);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(iVar7 + 0x14) = fVar12;
        }
        else {
          *(double *)(iVar7 + 0x14) = in_xd8;
        }
        iVar4 = -1;
        uVar3 = SUB84(param_1,0);
        fVar16 = (float)((ulonglong)dVar15 >> 0x20);
        fVar13 = (float)((ulonglong)dVar17 >> 0x20);
        param_1 = in_xd8;
        if ((*(byte *)(iVar7 + 9) & 8) == 0) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(fVar12,uVar3);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = fVar12 * fVar16;
          }
          else {
            fVar12 = SUB84(dVar14 * dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x10),fVar12);
          }
          else {
            dVar14 = *(double *)(iVar7 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar14,0) / fVar13;
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + fVar13,fVar13);
          }
          else {
            dVar14 = dVar14 / dVar17 + dVar14 / dVar17;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(iVar7 + 0xc) = (int)((ulonglong)dVar14 >> 0x20);
          }
          else {
            *(double *)(iVar7 + 0xc) = dVar14;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(fVar12,uVar3);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = fVar12 * fVar16;
          }
          else {
            fVar12 = SUB84(dVar14 * dVar15,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x10),fVar12);
          }
          else {
            dVar14 = *(double *)(iVar7 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = SUB84(dVar14,0) / fVar13;
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) - fVar13,fVar13);
          }
          else {
            dVar14 = dVar14 / dVar17 - dVar14 / dVar17;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(iVar7 + 0xc) = (int)((ulonglong)dVar14 >> 0x20);
          }
          else {
            *(double *)(iVar7 + 0xc) = dVar14;
          }
        }
        uVar3 = SUB84(dVar14,0);
        fVar12 = (float)((ulonglong)param_1 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar18 = SUB84(dVar17,0) < fVar12;
        }
        else {
          bVar18 = dVar17 < param_1;
        }
        if (bVar18) {
          iVar4 = 0;
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)CONCAT44((undefined4)DAT_8c08b148,SUB84(in_dr2,0));
          }
          else {
            in_dr2 = (double)CONCAT44(DAT_8c08b148._4_4_,(undefined4)DAT_8c08b148);
          }
          if (in_FPSCR_PR == '\0') {
            bVar18 = (float)((ulonglong)in_dr2 >> 0x20) < fVar12;
          }
          else {
            bVar18 = in_dr2 < param_1;
          }
          if (bVar18) {
            iVar4 = 1;
          }
        }
        if (-1 < iVar4) {
          *(undefined4 *)(puVar11 + -0x14) = 4;
          iVar5 = 0;
          do {
            if (*(int *)(iVar7 + 0x1c + iVar5 * 4) != 0) {
              iVar8 = *(int *)(PTR_DAT_8c08b014 +
                              ((((*(byte *)(iVar7 + 9) & 8) == 0) - 1) * -0x10 + iVar5 * 4) * 4 +
                              iVar4 * 8);
              iVar9 = *(int *)(PTR_DAT_8c08b01c +
                              ((((*(byte *)(iVar7 + 9) & 8) == 0) - 1) * -0x10 + iVar5 * 4) * 4 +
                              iVar4 * 8);
              iVar6 = (*(code *)PTR_FUN_8c08b018)();
              iVar2 = (*(code *)PTR_FUN_8c08b018)();
              uVar10 = **(uint **)(puVar11 + -0x24);
              if (((uVar10 & 2) == 0) ||
                 ((((-1 < iVar8 + iVar6 &&
                    (iVar8 + iVar6 < *(int *)(*(int *)(puVar11 + -0x24) + 0x20))) &&
                   (-1 < iVar9 + iVar2)) &&
                  (iVar9 + iVar2 < *(int *)(*(int *)(puVar11 + -0x24) + 0x24))))) {
                iVar6 = *(int *)((*(int *)(*(int *)(puVar11 + -0x24) + 0x20) * (iVar2 + iVar9) +
                                 iVar6 + iVar8) * 4 +
                                *(int *)((int)DAT_8c08b13c + *(int *)(puVar11 + -0x24)));
              }
              else {
                iVar6 = 0;
              }
              if ((iVar6 != 0) && (*(char *)(iVar6 + 8) == '\x03')) {
                iVar6 = (*(code *)PTR_FUN_8c08b018)();
                iVar2 = (*(code *)PTR_FUN_8c08b018)();
                if (((uVar10 & 2) == 0) ||
                   (((-1 < iVar8 + iVar6 &&
                     (iVar8 + iVar6 < *(int *)(*(int *)(puVar11 + -0x24) + 0x20))) &&
                    ((-1 < iVar9 + iVar2 &&
                     (iVar9 + iVar2 < *(int *)(*(int *)(puVar11 + -0x24) + 0x24))))))) {
                  iVar6 = *(int *)((*(int *)(*(int *)(puVar11 + -0x24) + 0x20) * (iVar2 + iVar9) +
                                   iVar6 + iVar8) * 4 +
                                  *(int *)((int)DAT_8c08b13c + *(int *)(puVar11 + -0x24)));
                }
                else {
                  iVar6 = 0;
                }
                if (((**(uint **)(puVar11 + -0x24) & 1) != 0) && (*(char *)(iVar6 + 8) != '\x04')) {
                  cVar1 = *(char *)(iVar6 + 10);
                  if ((cVar1 == '\r') ||
                     ((cVar1 == '\v' &&
                      (*(char *)((int)DAT_8c08b136 + *(int *)(*(int *)(puVar11 + -0x24) + 4)) ==
                       '\x01')))) {
                    if (*(char *)(iVar6 + 8) != '\a') {
                      iVar8 = *(int *)(puVar11 + -0x24);
                      uVar10 = (*(code *)PTR_FUN_8c08b1d4)(*(undefined4 *)(puVar11 + -0x18));
                      *(int *)(puVar11 + -0xc) = iVar6 + 2;
                      *(int *)(puVar11 + -0x10) = 1 << (uVar10 & 3);
                      uVar3 = (*(code *)PTR_FUN_8c08b1d8)();
                      *(undefined4 *)(puVar11 + -8) = uVar3;
                      iVar2 = (*(code *)PTR_FUN_8c08b1d8)(*(undefined4 *)(puVar11 + -0xc));
                      if (*(int *)((*(int *)(iVar8 + 0x20) * *(int *)(puVar11 + -8) + iVar2) * 4 +
                                  *(int *)(DAT_8c08b1d2 + iVar8)) == iVar6) {
                        (*(code *)PTR_FUN_8c08b1e0)(*(undefined4 *)(puVar11 + -0x24),iVar6);
                      }
                      *(undefined4 *)(puVar11 + -0x28) = 0;
                      (*(code *)PTR_FUN_8c08b1dc)
                                (*(undefined4 *)(puVar11 + -0x24),iVar6,
                                 *(undefined4 *)(puVar11 + -0x10),1);
                    }
                  }
                  else {
                    *(undefined1 *)(iVar6 + 8) = 4;
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(iVar6 + 0x18) = SUB84(dVar15,0);
                    }
                    else {
                      *(undefined8 *)(iVar6 + 0x18) = in_xd12;
                    }
                    if (cVar1 == '\v') {
                      **(uint **)(puVar11 + -0x1c) = **(uint **)(puVar11 + -0x1c) | 0x10;
                    }
                    else {
                      **(uint **)(puVar11 + -0x1c) = **(uint **)(puVar11 + -0x1c) | 8;
                    }
                  }
                }
              }
            }
            uVar3 = SUB84(dVar14,0);
            iVar6 = *(int *)(puVar11 + -0x14);
            iVar5 = iVar5 + 1;
            *(int *)(puVar11 + -0x14) = iVar6 + -1;
          } while (iVar6 + -1 != 0);
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x14),SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(iVar7 + 0x14);
          }
        }
        if (in_FPSCR_PR == '\0') {
          bVar18 = (float)((ulonglong)dVar17 >> 0x20) < (float)((ulonglong)param_1 >> 0x20);
        }
        else {
          bVar18 = dVar17 < param_1;
        }
        if (bVar18) {
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0xc),uVar3);
          }
          else {
            dVar14 = *(double *)(iVar7 + 0xc);
          }
          if (in_FPSCR_PR == '\0') {
            bVar18 = (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar15,0);
          }
          else {
            bVar18 = dVar14 < dVar15;
          }
          uVar3 = SUB84(dVar14,0);
          if (bVar18) {
            if (in_FPSCR_SZ == '\0') {
              in_dr2 = (double)CONCAT44(DAT_8c08b148._4_4_,SUB84(in_dr2,0));
            }
            else {
              in_dr2 = (double)CONCAT44(uRam8c08b150,DAT_8c08b148._4_4_);
            }
            if (in_FPSCR_PR != '\0') {
              uVar3 = SUB84(dVar14 + in_dr2,0);
            }
            iVar4 = (*(code *)PTR___divls_8c08b140)();
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44((float)(iVar4 * 0x5a),uVar3);
            }
            else {
              dVar14 = (double)(iVar4 * 0x5a);
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(iVar7 + 0xc) = (int)((ulonglong)dVar14 >> 0x20);
            }
            else {
              *(double *)(iVar7 + 0xc) = dVar14;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              in_dr2 = (double)CONCAT44(DAT_8c08b144,SUB84(in_dr2,0));
            }
            else {
              in_dr2 = (double)CONCAT44((undefined4)DAT_8c08b148,DAT_8c08b144);
            }
            if (in_FPSCR_PR != '\0') {
              uVar3 = SUB84(dVar14 + in_dr2,0);
            }
            iVar4 = (*(code *)PTR___divls_8c08b140)();
            if (in_FPSCR_PR == '\0') {
              dVar14 = (double)CONCAT44((float)(iVar4 * 0x5a),uVar3);
            }
            else {
              dVar14 = (double)(iVar4 * 0x5a);
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(iVar7 + 0xc) = (int)((ulonglong)dVar14 >> 0x20);
            }
            else {
              *(double *)(iVar7 + 0xc) = dVar14;
            }
          }
          iVar5 = *(int *)(puVar11 + -0x24);
          FUN_8c08a28c(iVar5,iVar7);
          iVar4 = (int)DAT_8c08b138;
          *(undefined1 *)(iVar7 + 8) = 0;
          iVar4 = *(int *)(DAT_8c08b13a + iVar5) + iVar4 * ((int)*(char *)(iVar7 + 9) & 7U);
          *(byte *)(iVar4 + 8) = *(byte *)(iVar4 + 8) & 0xfd;
        }
      }
      iVar7 = iVar7 + 0x2c;
      iVar5 = *(int *)(puVar11 + -0x20);
      iVar4 = *(int *)((int)DAT_8c08ae96 + *(int *)(puVar11 + -0x24));
      *(int *)(puVar11 + -0x20) = iVar5 + 1;
    } while (iVar5 + 1 < iVar4);
  }
  return;
}

