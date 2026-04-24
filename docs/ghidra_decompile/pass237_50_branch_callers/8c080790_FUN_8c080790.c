// entry: 8c080790
// name: FUN_8c080790
// signature: undefined FUN_8c080790(void)


/* WARNING: Removing unreachable block (ram,0x8c080b10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c080790(double param_1,double param_2,double param_3,uint *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  undefined1 *puVar10;
  double dVar11;
  float fVar12;
  float fVar14;
  double dVar13;
  undefined8 in_dr12;
  double dVar15;
  float fVar16;
  undefined8 in_dr14;
  double dVar17;
  double in_xd8;
  double in_xd14;
  bool bVar18;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [8];
  undefined8 local_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar10 = (undefined1 *)((int)&local_2c + 4);
    local_2c = CONCAT44((int)in_dr14,(undefined4)local_2c);
  }
  else {
    puVar10 = auStack_34;
    uStack_24 = in_dr12;
    local_2c = in_dr14;
  }
  *(undefined4 *)(puVar10 + -4) = in_PR;
  if (((*(char *)param_4[1] == '\0') && ((*param_4 & 0x40) == 0)) &&
     ((*(char *)param_4[2] != '\0' || (((char *)param_4[1])[1] != '\x03')))) {
    puVar9 = *(ushort **)((int)DAT_8c08090c + (int)param_4);
    iVar8 = 0;
    if (0 < (int)param_4[0xc]) {
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44((undefined4)DAT_8c080918,(int)in_dr12);
      }
      else {
        dVar15 = (double)CONCAT44(DAT_8c080918._4_4_,(undefined4)DAT_8c080918);
      }
      *(int *)(puVar10 + -0x48) = (int)param_4 + (int)DAT_8c08090e;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)((ulonglong)DAT_8c080918._4_4_ << 0x20);
      }
      else {
        dVar17 = (double)CONCAT44(_DAT_8c080920,DAT_8c080918._4_4_);
      }
      do {
        if (((*puVar9 & 1) != 0) && (*(int *)(puVar9 + 4) != 2)) {
          if (*(int *)(puVar9 + 4) == 0) {
            if ((*param_4 & 0x20) == 0) {
              if (in_FPSCR_SZ == '\0') {
                param_3 = (double)CONCAT44(param_4[5],*(undefined4 *)(puVar9 + 6));
              }
              else {
                in_xd8 = *(double *)(puVar9 + 6);
                param_3 = *(double *)(param_4 + 5);
              }
              if (in_FPSCR_PR != '\0' || (float)((ulonglong)param_3 >> 0x20) <= SUB84(param_3,0)) {
                puVar9[4] = 1;
                puVar9[5] = 0;
                if (in_FPSCR_SZ == '\0') {
                  dVar13 = (double)CONCAT44(param_4[5],SUB84(param_3,0));
                }
                else {
                  dVar13 = *(double *)(param_4 + 5);
                }
                if (in_FPSCR_PR == '\0') {
                  fVar12 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
                }
                else {
                  fVar12 = SUB84(dVar13 - dVar13,0);
                }
                if (in_FPSCR_SZ == '\0') {
                  *(float *)(puVar9 + 6) = fVar12;
                  param_3 = (double)CONCAT44(DAT_8c080b80,fVar12);
                  *(undefined4 *)(puVar9 + 8) = DAT_8c080b80;
                }
                else {
                  *(double *)(puVar9 + 6) = in_xd8;
                  param_3 = (double)CONCAT44(uRam8c080b84,DAT_8c080b80);
                  *(double *)(puVar9 + 8) = param_3;
                }
              }
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)(puVar9 + 6),SUB84(param_2,0));
              dVar13 = (double)CONCAT44(param_4[7],SUB84(param_3,0));
              param_1 = (double)CONCAT44(*(undefined4 *)_DAT_8c080920,SUB84(param_1,0));
            }
            else {
              dVar11 = *(double *)(puVar9 + 6);
              dVar13 = *(double *)(param_4 + 7);
              param_1 = *_DAT_8c080920;
            }
            iVar5 = 0;
            if (in_FPSCR_PR == '\0') {
              dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) +
                                        (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar11,0));
            }
            else {
              dVar11 = dVar11 + dVar13;
            }
            param_3 = dVar15;
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar13,0));
            }
            if (in_FPSCR_PR == '\0') {
              param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) /
                                         (float)((ulonglong)param_1 >> 0x20),SUB84(param_3,0));
            }
            else {
              param_3 = param_3 / param_1;
            }
            fVar12 = (float)((ulonglong)dVar11 >> 0x20);
            if (in_FPSCR_SZ == '\0') {
              dVar11 = (double)CONCAT44(fVar12,fVar12);
              *(float *)(puVar9 + 6) = fVar12;
            }
            else {
              *(double *)(puVar9 + 6) = dVar11;
            }
            fVar14 = (float)((ulonglong)param_3 >> 0x20);
            fVar16 = SUB84(dVar17,0);
            if (in_FPSCR_PR == '\0') {
              fVar12 = fVar12 * fVar14;
              dVar11 = (double)CONCAT44(fVar12,SUB84(dVar11,0));
              bVar18 = fVar16 < fVar12;
            }
            else {
              dVar11 = dVar11 * param_3;
              fVar12 = (float)((ulonglong)dVar11 >> 0x20);
              bVar18 = dVar17 < dVar11;
            }
            dVar13 = in_xd14;
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44(fVar14,fVar16);
              dVar13 = in_xd8;
            }
            in_xd8 = dVar13;
            if (bVar18) {
              dVar13 = in_xd14;
              if (in_FPSCR_SZ == '\0') {
                dVar13 = (double)((longlong)dVar17 << 0x20);
              }
              do {
                iVar5 = iVar5 + 1;
                if (in_FPSCR_PR == '\0') {
                  param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),
                                             (float)((ulonglong)dVar13 >> 0x20) *
                                             (float)((ulonglong)dVar17 >> 0x20) + SUB84(param_3,0));
                  dVar13 = (double)((ulonglong)(uint)(float)iVar5 << 0x20);
                  bVar18 = (float)iVar5 < fVar12;
                }
                else {
                  dVar13 = (double)iVar5;
                  bVar18 = dVar13 < dVar11;
                }
              } while (bVar18);
            }
            if (in_FPSCR_PR == '\0') {
              param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),
                                         SUB84(param_3,0) / SUB84(dVar11,0));
            }
            else {
              param_3 = param_3 / dVar11;
            }
            if (in_FPSCR_SZ == '\0') {
              param_2 = (double)CONCAT44(*(undefined4 *)(puVar9 + 8),SUB84(dVar11,0));
            }
            else {
              param_2 = *(double *)(puVar9 + 8);
            }
            if (in_FPSCR_PR == '\0') {
              fVar12 = (float)((ulonglong)param_2 >> 0x20) + SUB84(param_3,0);
              param_2 = (double)CONCAT44(fVar12,SUB84(param_2,0));
              bVar18 = fVar16 < fVar12;
            }
            else {
              param_2 = param_2 + param_3;
              fVar12 = (float)((ulonglong)param_2 >> 0x20);
              bVar18 = dVar17 < param_2;
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar9 + 8) = fVar12;
            }
            else {
              *(double *)(puVar9 + 8) = param_2;
            }
            if (!bVar18) {
              puVar6 = *(uint **)(puVar10 + -0x48);
              puVar9[4] = 2;
              puVar9[5] = 0;
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar9 + 8) = fVar16;
              }
              else {
                *(double *)(puVar9 + 8) = in_xd14;
              }
              puVar2 = PTR_FUN_8c080924;
              **(uint **)(puVar10 + -0x48) = *puVar6 | 1;
              uVar3 = (*(code *)puVar2)();
              *(undefined4 *)(puVar10 + -0x44) = uVar3;
              iVar5 = (*(code *)puVar2)();
              puVar2 = PTR_FUN_8c080924;
              *(int *)(puVar10 + -0x40) = iVar5;
              if (((*param_4 & 2) == 0) ||
                 ((((-1 < *(int *)(puVar10 + -0x44) && (*(int *)(puVar10 + -0x44) < (int)param_4[8])
                    ) && (-1 < iVar5)) && (iVar5 < (int)param_4[9])))) {
                *(undefined4 *)(puVar10 + -0x3c) =
                     *(undefined4 *)
                      ((param_4[8] * iVar5 + *(int *)(puVar10 + -0x44)) * 4 +
                      *(int *)((int)DAT_8c080b72 + (int)param_4));
              }
              else {
                *(undefined4 *)(puVar10 + -0x3c) = 0;
              }
              if (*(int *)(puVar10 + -0x3c) != 0) {
                iVar5 = *(int *)(puVar10 + -0x3c);
                *(byte *)(iVar5 + 9) = *(byte *)(iVar5 + 9) & 0xf | 0x30;
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(iVar5 + 0x14) = SUB84(dVar17,0);
                }
                else {
                  *(double *)(iVar5 + 0x14) = in_xd14;
                }
                *(int *)(puVar10 + -0x38) = iVar5 + 2;
                iVar5 = (*(code *)puVar2)();
                *(uint *)(puVar10 + -0x34) = param_4[8] * iVar5;
                iVar5 = (*(code *)puVar2)();
                if (*(char *)(*(int *)(puVar10 + -0x34) + iVar5 +
                             *(int *)((int)DAT_8c080912 + (int)param_4)) == '[') {
                  uVar7 = 0xb;
                }
                else {
                  uVar7 = ((int)*(char *)(*(int *)(puVar10 + -0x3c) + 8) & 0xfU) + 1;
                }
                (*(code *)PTR_FUN_8c080928)();
                if ((int)param_4[0xe] < (int)uVar7) {
                  param_4[0xe] = uVar7;
                }
                puVar2 = PTR_FUN_8c080a84;
                iVar5 = (*(code *)PTR_FUN_8c080a84)();
                *(uint *)(puVar10 + -0x30) = param_4[8] * iVar5;
                iVar5 = (*(code *)puVar2)();
                puVar2 = PTR_FUN_8c080a84;
                if (*(int *)((*(int *)(puVar10 + -0x30) + iVar5) * 4 +
                            *(int *)((int)DAT_8c080a82 + (int)param_4)) == *(int *)(puVar10 + -0x3c)
                   ) {
                  iVar5 = (*(code *)PTR_FUN_8c080a84)();
                  *(uint *)(puVar10 + -0x2c) = param_4[8] * iVar5;
                  iVar5 = (*(code *)puVar2)();
                  *(undefined4 *)
                   ((*(int *)(puVar10 + -0x2c) + iVar5) * 4 +
                   *(int *)((int)DAT_8c080a82 + (int)param_4)) = 0;
                }
                iVar5 = 0;
                if (uVar7 != 0) {
                  *(undefined4 *)(puVar10 + -0x28) = *(undefined4 *)(puVar10 + -0x38);
                  *(undefined4 *)(puVar10 + -0x24) = *(undefined4 *)(puVar10 + -0x38);
                  do {
                    iVar4 = (*(code *)PTR_FUN_8c080a84)();
                    uVar3 = (*(code *)PTR_FUN_8c080a84)();
                    *(undefined4 *)(puVar10 + -0x4c) = 0;
                    iVar4 = (*(code *)PTR_FUN_8c080a88)
                                      (param_4,*(undefined4 *)(puVar10 + -0x3c),iVar4 - iVar5,uVar3)
                    ;
                    if (iVar4 == 0) break;
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)uVar7);
                }
                iVar5 = 1;
                if (1 < uVar7) {
                  *(undefined4 *)(puVar10 + -0x20) = *(undefined4 *)(puVar10 + -0x38);
                  *(undefined4 *)(puVar10 + -0x1c) = *(undefined4 *)(puVar10 + -0x38);
                  do {
                    iVar4 = (*(code *)PTR_FUN_8c080a84)();
                    uVar3 = (*(code *)PTR_FUN_8c080a84)();
                    *(undefined4 *)(puVar10 + -0x4c) = 0;
                    iVar4 = (*(code *)PTR_FUN_8c080a88)
                                      (param_4,*(undefined4 *)(puVar10 + -0x3c),iVar4 + iVar5,uVar3)
                    ;
                    if (iVar4 == 0) break;
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)uVar7);
                }
                iVar5 = 1;
                if (1 < uVar7) {
                  *(undefined4 *)(puVar10 + -0x18) = *(undefined4 *)(puVar10 + -0x38);
                  *(undefined4 *)(puVar10 + -0x14) = *(undefined4 *)(puVar10 + -0x38);
                  do {
                    uVar3 = (*(code *)PTR_FUN_8c080a84)();
                    iVar4 = (*(code *)PTR_FUN_8c080a84)();
                    *(undefined4 *)(puVar10 + -0x4c) = 0;
                    iVar4 = (*(code *)PTR_FUN_8c080a88)
                                      (param_4,*(undefined4 *)(puVar10 + -0x3c),uVar3,iVar4 - iVar5)
                    ;
                    if (iVar4 == 0) break;
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)uVar7);
                }
                iVar5 = 1;
                if (1 < uVar7) {
                  *(undefined4 *)(puVar10 + -0xc) = *(undefined4 *)(puVar10 + -0x38);
                  *(undefined4 *)(puVar10 + -0x10) = *(undefined4 *)(puVar10 + -0x38);
                  do {
                    uVar3 = (*(code *)PTR_FUN_8c080a84)();
                    iVar4 = (*(code *)PTR_FUN_8c080a84)();
                    *(undefined4 *)(puVar10 + -0x4c) = 0;
                    iVar4 = (*(code *)PTR_FUN_8c080a88)
                                      (param_4,*(undefined4 *)(puVar10 + -0x3c),uVar3,iVar4 + iVar5)
                    ;
                    if (iVar4 == 0) break;
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (int)uVar7);
                }
              }
              iVar5 = *(int *)((param_4[8] * *(int *)(puVar10 + -0x40) + *(int *)(puVar10 + -0x44))
                               * 4 + *(int *)((int)DAT_8c080b70 + (int)param_4));
              *(int *)(puVar10 + -8) = iVar5;
              if (iVar5 != 0) {
                (*(code *)PTR_FUN_8c080b74)(param_4,iVar5);
                bVar1 = *(byte *)(*(int *)(puVar10 + -8) + 9);
                if (((int)(char)bVar1 & 0x80U) != 0) {
                  *(byte *)(*(int *)(puVar10 + -8) + 9) = bVar1 & 0x7f;
                }
              }
              iVar5 = (*(code *)PTR_FUN_8c080b78)
                                (param_4,*(undefined4 *)(puVar10 + -0x44),
                                 *(undefined4 *)(puVar10 + -0x40));
              if (iVar5 != 0) {
                (*(code *)PTR_FUN_8c080b7c)(param_4,iVar5,0);
              }
            }
          }
        }
        iVar8 = iVar8 + 1;
        puVar9 = puVar9 + 10;
      } while (iVar8 < (int)param_4[0xc]);
    }
  }
  return;
}

