// entry: 8c05b432
// name: FUN_8c05b432
// signature: undefined FUN_8c05b432(void)


/* WARNING: Removing unreachable block (ram,0x8c05b79a) */
/* WARNING: Removing unreachable block (ram,0x8c05b546) */
/* WARNING: Removing unreachable block (ram,0x8c05b826) */
/* WARNING: Removing unreachable block (ram,0x8c05b8f2) */
/* WARNING: Removing unreachable block (ram,0x8c05b818) */
/* WARNING: Removing unreachable block (ram,0x8c05b776) */
/* WARNING: Removing unreachable block (ram,0x8c05b554) */
/* WARNING: Removing unreachable block (ram,0x8c05b7ac) */

void FUN_8c05b432(float param_1,undefined4 param_2,double param_3,double param_4,int param_5,
                 ushort param_6,int param_7)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  undefined2 *puVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  ushort *puVar14;
  undefined8 *puVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined8 in_dr14;
  double dVar20;
  double in_xd6;
  double in_xd8;
  bool bVar21;
  bool bVar22;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_20;
  
  if (in_FPSCR_SZ == '\0') {
    puVar15 = (undefined8 *)((int)&local_20 + 4);
    local_20 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_20);
  }
  else {
    puVar15 = &local_20;
    local_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    param_2 = (undefined4)in_dr14;
  }
  dVar20 = (double)CONCAT44(param_1,param_2);
  *(ushort *)((int)puVar15 + -0x44) = param_6;
  uVar1 = (ushort)param_7;
  if ((param_6 & 1) != 0) {
    puVar14 = *(ushort **)(param_5 + 4);
    *(ushort **)((int)puVar15 + -0x40) = puVar14;
    if (puVar14 != (ushort *)0x0) {
      if ((param_7 < 0) || ((int)(uint)puVar14[1] <= param_7)) {
        *(undefined4 *)((int)DAT_8c05b590 + (int)puVar14) = 0;
        param_3 = (double)((ulonglong)param_3 & 0xffffffff);
        param_4 = (double)CONCAT44(0x3f800000,SUB84(param_4,0));
        iVar6 = 0;
        iVar3 = 3;
        do {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(puVar14 + iVar6 * 2 + 0xc) = 0;
          }
          else {
            *(double *)(puVar14 + iVar6 * 2 + 0xc) = param_3;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(puVar14 + iVar6 * 2 + 0x12) = 0;
          }
          else {
            *(double *)(puVar14 + iVar6 * 2 + 0x12) = param_3;
          }
          iVar3 = iVar3 + -1;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(puVar14 + iVar6 * 2 + 0x18) = 0x3f800000;
          }
          else {
            *(double *)(puVar14 + iVar6 * 2 + 0x18) = param_4;
          }
          iVar6 = iVar6 + 1;
        } while (iVar3 != 0);
      }
      else {
        iVar3 = (int)DAT_8c05b90c;
        puVar14[2] = uVar1;
        param_3 = (double)((ulonglong)param_3 & 0xffffffff);
        puVar9 = *(ushort **)((int)puVar14 + param_7 * 4 + iVar3);
        iVar3 = (int)DAT_8c05b90e;
        *puVar14 = 4;
        *(ushort **)(iVar3 + (int)puVar14) = puVar9;
        *puVar9 = *puVar9 & 0xfff7;
        if (in_FPSCR_PR == '\0') {
          bVar21 = param_1 < 0.0;
        }
        else {
          bVar21 = dVar20 < param_3;
        }
        puVar9 = *(ushort **)(iVar3 + (int)puVar14);
        if (in_FPSCR_SZ == '\0') {
          param_3 = (double)(ulonglong)*(uint *)(puVar9 + 2);
          param_4 = (double)CONCAT44(param_1,SUB84(param_4,0));
        }
        else {
          in_xd6 = *(double *)(puVar9 + 2);
          param_4 = dVar20;
        }
        if (bVar21) {
          uVar4 = *puVar9;
          *(ushort *)((int)puVar15 + -0x3c) = uVar4;
          iVar3 = (int)(uVar4 & 0xc) >> 2;
        }
        else {
          uVar4 = *puVar9;
          *(ushort *)((int)puVar15 + -0x3c) = uVar4;
          iVar3 = (int)(uVar4 & 0x30) >> 4;
        }
        fVar16 = (float)((ulonglong)param_4 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar21 = fVar16 < 0.0;
        }
        else {
          bVar21 = param_4 < param_3;
        }
        if (bVar21) {
          if (in_FPSCR_PR == '\0') {
            param_4 = (double)CONCAT44(-fVar16,SUB84(param_4,0));
          }
          else {
            param_4 = -param_4;
          }
        }
        fVar16 = SUB84(param_3,0);
        fVar19 = (float)((ulonglong)param_4 >> 0x20);
        if (iVar3 == 0) {
          if (in_FPSCR_PR == '\0') {
            bVar22 = fVar16 < fVar19;
          }
          else {
            bVar22 = param_3 < param_4;
          }
          if (bVar22) {
            dVar18 = in_xd6;
            if (in_FPSCR_SZ == '\0') {
              dVar18 = (double)CONCAT44(fVar16,SUB84(param_4,0));
            }
            param_4 = dVar18;
            *puVar9 = *(ushort *)((int)puVar15 + -0x3c) | 8;
          }
LAB_8c05b82e:
          fVar19 = (float)((ulonglong)param_4 >> 0x20);
          if (bVar21) {
            if (in_FPSCR_PR == '\0') {
              param_4 = (double)CONCAT44(-fVar19,SUB84(param_4,0));
            }
            else {
              param_4 = -param_4;
            }
            param_3 = param_4;
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44((int)((ulonglong)param_4 >> 0x20),fVar16);
            }
          }
          else {
            param_3 = param_4;
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44(fVar19,fVar16);
            }
          }
        }
        else {
          if (iVar3 != 1) goto LAB_8c05b82e;
          if (fVar16 != 0.0) {
            if (in_FPSCR_PR == '\0') {
              bVar22 = fVar16 < fVar19;
            }
            else {
              bVar22 = param_3 < param_4;
            }
            if (bVar22) {
              if (in_FPSCR_PR == '\0') {
                bVar22 = fVar16 < fVar19;
              }
              else {
                bVar22 = param_3 < param_4;
              }
              if (bVar22) {
                dVar18 = in_xd6;
                if (in_FPSCR_SZ == '\0') {
                  param_4 = (double)CONCAT44(fVar19,fVar16);
                  dVar18 = in_xd8;
                }
                param_4 = (double)CONCAT44((int)((ulonglong)param_4 >> 0x20),-SUB84(param_4,0));
                do {
                  if (in_FPSCR_PR == '\0') {
                    fVar19 = (float)((ulonglong)param_4 >> 0x20) + SUB84(param_4,0);
                    param_4 = (double)CONCAT44(fVar19,SUB84(param_4,0));
                    bVar22 = fVar16 < fVar19;
                  }
                  else {
                    param_4 = param_4 + param_4;
                    bVar22 = param_3 < param_4;
                  }
                  in_xd8 = dVar18;
                } while (bVar22);
              }
            }
            goto LAB_8c05b82e;
          }
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar14 + 4) = (int)((ulonglong)param_3 >> 0x20);
        }
        else {
          *(double *)(puVar14 + 4) = param_3;
        }
        iVar3 = *(int *)((int)DAT_8c05b90e + (int)puVar14);
        puVar14[3] = 0;
        sVar2 = *(short *)(iVar3 + 2);
        *(int *)((int)puVar15 + -0x38) = iVar3;
        if (1 < sVar2) {
          if (in_FPSCR_SZ == '\0') {
            param_4 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(puVar14 + 4));
          }
          else {
            in_xd8 = *(double *)(puVar14 + 4);
            param_4 = *(double *)(iVar3 + 0x34);
          }
          iVar3 = iVar3 + 8;
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)param_4 >> 0x20) < SUB84(param_4,0)) {
            do {
              puVar14[3] = puVar14[3] + 1;
              if (in_FPSCR_SZ == '\0') {
                param_4 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x58),SUB84(param_4,0));
              }
              else {
                param_4 = *(double *)(iVar3 + 0x58);
              }
              iVar3 = iVar3 + 0x2c;
            } while (in_FPSCR_PR == '\0' && (float)((ulonglong)param_4 >> 0x20) < SUB84(param_4,0));
          }
        }
        *(undefined **)((int)puVar15 + -0x30) = PTR_FUN_8c05b910;
        *(ushort **)((int)puVar15 + -0x34) = puVar14 + 8;
        (*(code *)PTR_FUN_8c05b910)(0,0x2c);
        (**(code **)((int)puVar15 + -0x30))(puVar14 + 0x1e,0,0x2c);
        (**(code **)((int)puVar15 + -0x30))(puVar14 + 0x34,0,0x2c);
        iVar3 = *(int *)((int)DAT_8c05b90e + (int)puVar14);
        sVar2 = *(short *)(iVar3 + 2);
        *(int *)((int)puVar15 + -0xc) = iVar3;
        if (sVar2 == 1) {
          puVar13 = *(undefined4 **)((int)puVar15 + -0x34);
          uVar11 = *(undefined4 *)(iVar3 + 0xc);
          *puVar13 = *(undefined4 *)(iVar3 + 8);
          uVar10 = *(undefined4 *)(iVar3 + 0x10);
          puVar13[1] = uVar11;
          puVar13[2] = uVar10;
          uVar11 = *(undefined4 *)(iVar3 + 0x14);
          puVar13[4] = *(undefined4 *)(iVar3 + 0x18);
          puVar13[7] = *(undefined4 *)(iVar3 + 0x24);
          uVar10 = *(undefined4 *)(iVar3 + 0x2c);
          puVar13[3] = uVar11;
          uVar11 = *(undefined4 *)(iVar3 + 0x1c);
          puVar13[9] = uVar10;
          uVar10 = *(undefined4 *)(iVar3 + 0x30);
          puVar13[5] = uVar11;
          uVar11 = *(undefined4 *)(iVar3 + 0x20);
          puVar13[10] = uVar10;
          uVar4 = *puVar14;
          puVar13[6] = uVar11;
          puVar13[8] = *(undefined4 *)(iVar3 + 0x28);
          *puVar14 = uVar4 | 8;
        }
      }
      puVar14 = *(ushort **)(param_5 + 4);
      uVar4 = *puVar14;
      *(ushort **)((int)puVar15 + -0x40) = puVar14;
      *puVar14 = uVar4 | 4;
    }
  }
  if ((*(ushort *)((int)puVar15 + -0x44) & 2) == 0) goto LAB_8c05b602;
  puVar14 = *(ushort **)(param_5 + 8);
  *(ushort **)((int)puVar15 + -0x2c) = puVar14;
  if (puVar14 == (ushort *)0x0) goto LAB_8c05b602;
  if ((param_7 < 0) || ((int)(uint)puVar14[1] <= param_7)) {
    puVar14[0x1e] = 0;
    puVar14[0x1f] = 0;
  }
  else {
    puVar9 = *(ushort **)(puVar14 + param_7 * 2 + 0x20);
    *(ushort **)(puVar14 + 0x1e) = puVar9;
    if (puVar9 != (ushort *)0x0) {
      *puVar14 = 4;
      puVar14[2] = uVar1;
      *puVar9 = *puVar9 & 0xfff7;
      iVar3 = *(int *)(puVar14 + 0x1e);
      *(int *)((int)puVar15 + -0x28) = iVar3;
      if (iVar3 != 0) {
        param_3 = (double)((ulonglong)param_3 & 0xffffffff);
        fVar16 = (float)((ulonglong)dVar20 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar21 = fVar16 < 0.0;
        }
        else {
          bVar21 = dVar20 < param_3;
        }
        if (in_FPSCR_SZ == '\0') {
          param_3 = (double)(ulonglong)*(uint *)(*(int *)((int)puVar15 + -0x28) + 4);
          param_4 = (double)CONCAT44(fVar16,SUB84(param_4,0));
        }
        else {
          in_xd6 = *(double *)(*(int *)((int)puVar15 + -0x28) + 4);
          param_4 = dVar20;
        }
        *(undefined **)((int)puVar15 + -0x30) = PTR_FUN_8c05b594;
        if (bVar21) {
          uVar4 = **(ushort **)((int)puVar15 + -0x28);
          iVar3 = (int)(uVar4 & 0xc) >> 2;
        }
        else {
          uVar4 = **(ushort **)((int)puVar15 + -0x28);
          iVar3 = (int)(uVar4 & 0x30) >> 4;
        }
        fVar16 = (float)((ulonglong)param_4 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar21 = fVar16 < 0.0;
        }
        else {
          bVar21 = param_4 < param_3;
        }
        if (bVar21) {
          if (in_FPSCR_PR == '\0') {
            param_4 = (double)CONCAT44(-fVar16,SUB84(param_4,0));
          }
          else {
            param_4 = -param_4;
          }
        }
        fVar16 = SUB84(param_3,0);
        fVar19 = (float)((ulonglong)param_4 >> 0x20);
        if (iVar3 == 0) {
          if (in_FPSCR_PR == '\0') {
            bVar22 = fVar16 < fVar19;
          }
          else {
            bVar22 = param_3 < param_4;
          }
          if (bVar22) {
            if (in_FPSCR_SZ == '\0') {
              in_xd6 = (double)CONCAT44(fVar16,SUB84(param_4,0));
            }
            param_4 = in_xd6;
            **(ushort **)((int)puVar15 + -0x28) = uVar4 | 8;
          }
LAB_8c05b55c:
          fVar19 = (float)((ulonglong)param_4 >> 0x20);
          if (bVar21) {
            if (in_FPSCR_PR == '\0') {
              param_4 = (double)CONCAT44(-fVar19,SUB84(param_4,0));
            }
            else {
              param_4 = -param_4;
            }
            param_3 = param_4;
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44((int)((ulonglong)param_4 >> 0x20),fVar16);
            }
          }
          else {
            param_3 = param_4;
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44(fVar19,fVar16);
            }
          }
        }
        else {
          if (iVar3 != 1) goto LAB_8c05b55c;
          if (fVar16 != 0.0) {
            if (in_FPSCR_PR == '\0') {
              bVar22 = fVar16 < fVar19;
            }
            else {
              bVar22 = param_3 < param_4;
            }
            if (bVar22) {
              if (in_FPSCR_PR == '\0') {
                bVar22 = fVar16 < fVar19;
              }
              else {
                bVar22 = param_3 < param_4;
              }
              if (bVar22) {
                if (in_FPSCR_SZ == '\0') {
                  param_4 = (double)CONCAT44(fVar19,fVar16);
                  in_xd6 = in_xd8;
                }
                param_4 = (double)CONCAT44((int)((ulonglong)param_4 >> 0x20),-SUB84(param_4,0));
                do {
                  if (in_FPSCR_PR == '\0') {
                    fVar19 = (float)((ulonglong)param_4 >> 0x20) + SUB84(param_4,0);
                    param_4 = (double)CONCAT44(fVar19,SUB84(param_4,0));
                    bVar22 = fVar16 < fVar19;
                  }
                  else {
                    param_4 = param_4 + param_4;
                    bVar22 = param_3 < param_4;
                  }
                  in_xd8 = in_xd6;
                } while (bVar22);
              }
            }
            goto LAB_8c05b55c;
          }
        }
        iVar3 = *(int *)(puVar14 + 0x1e);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar14 + 4) = (int)((ulonglong)param_3 >> 0x20);
        }
        else {
          *(double *)(puVar14 + 4) = param_3;
        }
        puVar14[3] = 0;
        sVar2 = *(short *)(iVar3 + 2);
        *(int *)((int)puVar15 + -0x24) = iVar3;
        iVar6 = iVar3 + 8;
        if (1 < sVar2) {
          if (in_FPSCR_SZ == '\0') {
            param_4 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(puVar14 + 4));
          }
          else {
            in_xd8 = *(double *)(puVar14 + 4);
            param_4 = *(double *)(iVar3 + 0x14);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)param_4 >> 0x20) < SUB84(param_4,0)) {
            do {
              puVar14[3] = puVar14[3] + 1;
              if (in_FPSCR_SZ == '\0') {
                param_4 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x18),SUB84(param_4,0));
              }
              else {
                param_4 = *(double *)(iVar6 + 0x18);
              }
              iVar6 = iVar6 + 0xc;
            } while (in_FPSCR_PR == '\0' && (float)((ulonglong)param_4 >> 0x20) < SUB84(param_4,0));
          }
        }
        *(ushort **)((int)puVar15 + -0x20) = puVar14 + 8;
        (**(code **)((int)puVar15 + -0x30))(0,0xc);
        (**(code **)((int)puVar15 + -0x30))(puVar14 + 0xe,0,0xc);
        (**(code **)((int)puVar15 + -0x30))(puVar14 + 0x14,0,0xc);
        iVar3 = *(int *)(puVar14 + 0x1e);
        sVar2 = *(short *)(iVar3 + 2);
        *(int *)((int)puVar15 + -0x28) = iVar3;
        if (sVar2 == 1) {
          puVar13 = *(undefined4 **)((int)puVar15 + -0x20);
          uVar10 = *(undefined4 *)(iVar3 + 0xc);
          *puVar13 = *(undefined4 *)(iVar3 + 8);
          uVar4 = *puVar14;
          puVar13[1] = uVar10;
          puVar13[2] = *(undefined4 *)(iVar3 + 0x10);
          *puVar14 = uVar4 | 8;
        }
      }
    }
  }
  puVar14 = *(ushort **)(param_5 + 8);
  uVar4 = *puVar14;
  *(ushort **)((int)puVar15 + -0x2c) = puVar14;
  *puVar14 = uVar4 | 4;
LAB_8c05b602:
  if ((*(ushort *)((int)puVar15 + -0x44) & 4) != 0) {
    puVar5 = *(undefined2 **)(param_5 + 0xc);
    *(undefined2 **)((int)puVar15 + -0x1c) = puVar5;
    if (puVar5 != (undefined2 *)0x0) {
      if ((param_7 < 0) || ((int)(uint)(ushort)puVar5[1] <= param_7)) {
        *(undefined4 *)(puVar5 + 8) = 0;
      }
      else {
        puVar14 = *(ushort **)(puVar5 + param_7 * 2 + 10);
        *(ushort **)(puVar5 + 8) = puVar14;
        if (puVar14 != (ushort *)0x0) {
          *puVar5 = 4;
          puVar5[2] = uVar1;
          *puVar14 = *puVar14 & 0xfff7;
          iVar3 = *(int *)(puVar5 + 8);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar5 + 4) = (int)((ulonglong)dVar20 >> 0x20);
          }
          else {
            *(double *)(puVar5 + 4) = dVar20;
          }
          *(int *)((int)puVar15 + -0x18) = iVar3;
          if ((iVar3 != 0) && (iVar3 = 0, 0 < *(int *)(*(int *)((int)puVar15 + -0x18) + 8))) {
            *(int *)((int)puVar15 + -0x14) = *(int *)((int)puVar15 + -0x18) + 0xc;
            do {
              iVar6 = *(int *)((int)puVar15 + -0x14) + iVar3 * 0x30;
              if (in_FPSCR_SZ == '\0') {
                param_4 = (double)CONCAT44((int)((ulonglong)param_4 >> 0x20),
                                           *(undefined4 *)(iVar6 + 4));
              }
              else {
                in_xd8 = *(double *)(iVar6 + 4);
              }
              fVar16 = (float)((ulonglong)dVar20 >> 0x20);
              if (in_FPSCR_PR == '\0') {
                bVar21 = fVar16 < SUB84(param_4,0);
              }
              else {
                bVar21 = dVar20 < param_4;
              }
              dVar18 = dVar20;
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(fVar16,SUB84(param_4,0));
              }
              dVar17 = dVar18;
              if (!bVar21) {
                fVar19 = SUB84(dVar18,0);
                if ((*(byte *)(*(int *)(iVar6 + 0x2c) + (*(short *)(iVar6 + 8) + -1) * 0x14 + 4) &
                    0x40) == 0) {
                  param_3 = (double)((ulonglong)param_3 & 0xffffffff);
                  if (fVar19 == 0.0) {
                    dVar17 = param_3;
                    if (in_FPSCR_SZ == '\0') {
                      dVar17 = (double)((ulonglong)dVar18 & 0xffffffff);
                    }
                  }
                  else {
                    if (in_FPSCR_PR == '\0') {
                      bVar21 = fVar19 < fVar16;
                    }
                    else {
                      bVar21 = dVar18 < dVar20;
                    }
                    if ((bVar21) &&
                       (in_FPSCR_PR == '\0' && fVar19 < (float)((ulonglong)dVar18 >> 0x20))) {
                      if (in_FPSCR_SZ == '\0') {
                        param_3 = (double)((ulonglong)dVar18 & 0xffffffff);
                      }
                      fVar16 = SUB84(param_3,0);
                      param_3 = (double)(ulonglong)(uint)-fVar16;
                      do {
                        if (in_FPSCR_PR == '\0') {
                          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + -fVar16,
                                                    SUB84(dVar18,0));
                        }
                        else {
                          dVar18 = dVar18 + param_3;
                        }
                      } while (in_FPSCR_PR == '\0' &&
                               SUB84(dVar18,0) < (float)((ulonglong)dVar18 >> 0x20));
                    }
                    *(byte *)(iVar6 + 0x1c) = *(byte *)(iVar6 + 0x1c) | 4;
                    dVar17 = dVar18;
                  }
                }
                else {
                  dVar17 = in_xd8;
                  if (in_FPSCR_SZ == '\0') {
                    dVar17 = (double)CONCAT44(fVar19,fVar19);
                  }
                }
              }
              iVar6 = *(int *)((int)puVar15 + -0x14);
              pdVar7 = (double *)(iVar6 + iVar3 * 0x30);
              if (in_FPSCR_SZ == '\0') {
                *(int *)pdVar7 = (int)((ulonglong)dVar17 >> 0x20);
              }
              else {
                *pdVar7 = dVar17;
              }
              pdVar7 = (double *)(iVar6 + iVar3 * 0x30);
              iVar6 = *(int *)((int)pdVar7 + 0x2c);
              *(undefined2 *)((int)pdVar7 + 10) = 0;
              if (in_FPSCR_SZ == '\0') {
                param_4 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x14),*(undefined4 *)pdVar7);
              }
              else {
                in_xd8 = *pdVar7;
                param_4 = *(double *)(iVar6 + 0x14);
              }
              *(double **)((int)puVar15 + -0x10) = pdVar7;
              *(int *)((int)puVar15 + -8) = iVar6;
              if (in_FPSCR_PR == '\0' && (float)((ulonglong)param_4 >> 0x20) < SUB84(param_4,0)) {
                do {
                  if (in_FPSCR_SZ == '\0') {
                    param_4 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x28),SUB84(param_4,0));
                  }
                  else {
                    param_4 = *(double *)(iVar6 + 0x28);
                  }
                  iVar6 = iVar6 + 0x14;
                } while (in_FPSCR_PR == '\0' &&
                         (float)((ulonglong)param_4 >> 0x20) < SUB84(param_4,0));
              }
              sVar2 = (*(code *)PTR_FUN_8c05b724)();
              iVar6 = *(int *)((int)puVar15 + -0x10);
              iVar12 = *(int *)((int)puVar15 + -8);
              *(short *)(iVar6 + 10) = sVar2;
              iVar8 = *(int *)((int)puVar15 + -0x14);
              puVar13 = (undefined4 *)(iVar12 + sVar2 * 0x14);
              iVar12 = *(int *)((int)puVar15 + -0x18);
              uVar10 = puVar13[1];
              *(undefined4 *)(iVar6 + 0x18) = *puVar13;
              *(undefined4 *)(iVar6 + 0x1c) = uVar10;
              uVar10 = puVar13[3];
              *(undefined4 *)(iVar6 + 0x20) = puVar13[2];
              *(undefined4 *)(iVar6 + 0x24) = uVar10;
              *(undefined4 *)(iVar6 + 0x28) = puVar13[4];
              iVar6 = iVar3 * 0x30;
              iVar3 = iVar3 + 1;
              *(byte *)(iVar8 + iVar6 + 0x1c) = *(byte *)(iVar8 + iVar6 + 0x1c) | 4;
            } while (iVar3 < *(int *)(iVar12 + 8));
          }
        }
      }
      puVar14 = *(ushort **)(param_5 + 0xc);
      uVar1 = *puVar14;
      *(ushort **)((int)puVar15 + -0x1c) = puVar14;
      *puVar14 = uVar1 | 4;
    }
  }
  return;
}

