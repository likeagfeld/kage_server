// entry: 8c0685b0
// name: FUN_8c0685b0
// signature: undefined FUN_8c0685b0(void)


/* WARNING: Removing unreachable block (ram,0x8c068718) */
/* WARNING: Removing unreachable block (ram,0x8c0686d8) */
/* WARNING: Removing unreachable block (ram,0x8c0686de) */
/* WARNING: Removing unreachable block (ram,0x8c0686e2) */
/* WARNING: Removing unreachable block (ram,0x8c06870e) */

void FUN_8c0685b0(double param_1,double param_2,double param_3,int param_4)

{
  short sVar1;
  undefined *puVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  short *psVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  short *psVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined4 uVar19;
  double dVar20;
  float fVar21;
  undefined8 in_dr12;
  undefined8 in_dr14;
  double dVar22;
  undefined8 in_xd8;
  double in_xd14;
  bool bVar23;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  char acStack_48 [20];
  undefined1 auStack_34 [8];
  undefined8 local_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar13 = (undefined1 *)((int)&local_2c + 4);
    local_2c = CONCAT44((int)in_dr14,(undefined4)local_2c);
  }
  else {
    puVar13 = auStack_34;
    uStack_24 = in_dr12;
    local_2c = in_dr14;
  }
  *(undefined4 *)(puVar13 + -4) = in_PR;
  cVar7 = *(char *)(param_4 + 0x30);
  if (cVar7 != '\x01') {
    if (cVar7 == '\x02') {
      psVar12 = *(short **)((int)DAT_8c0687ac + *(int *)(DAT_8c0687aa + param_4));
      iVar9 = 0;
      uVar15 = 0;
      do {
        puVar2 = PTR_FUN_8c068ac4;
        uVar5 = SUB84(param_2,0);
        if (*psVar12 != 0) {
          iVar11 = (*(code *)PTR_FUN_8c068acc)
                             (*(undefined4 *)(DAT_8c068aa2 + param_4),(int)(char)psVar12[0xe],
                              (int)*(char *)((int)psVar12 + 0x1d),0);
          uVar10 = *(undefined4 *)(iVar11 + 4);
          (*(code *)PTR_FUN_8c068aa4)();
          if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(*(undefined4 *)(psVar12 + 6),*(undefined4 *)(psVar12 + 8));
            param_2 = (double)CONCAT44(*(undefined4 *)(psVar12 + 10),uVar5);
          }
          else {
            uVar17 = *(undefined8 *)(psVar12 + 6);
            param_2 = *(double *)(psVar12 + 10);
          }
          (*(code *)PTR_FUN_8c068aa8)(uVar17,param_2,0);
          if (in_FPSCR_SZ == '\0') {
            uVar14 = (uint)uVar17;
          }
          else {
            uVar14 = (uint)*(undefined8 *)(psVar12 + 2);
          }
          (*(code *)PTR_FUN_8c068ab8)(uVar10,7,(int)(char)psVar12[0xf]);
          param_1 = in_xd14;
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)(ulonglong)uVar14;
          }
          (*(code *)PTR_FUN_8c068abc)(uVar10);
          iVar11 = (*(code *)PTR_FUN_8c068ad0)(uVar10,7);
          if (iVar11 != 0) {
            (*(code *)PTR_FUN_8c068ac0)(uVar10);
          }
          (*(code *)puVar2)();
        }
        iVar9 = iVar9 + 1;
        psVar12 = psVar12 + 0x10;
      } while (iVar9 < 0x14);
      uVar10 = (undefined4)uVar15;
                    /* WARNING: Read-only address (ram,0x8c0686c8) is written */
      iVar9 = *(int *)(DAT_8c0687aa + param_4);
      *(undefined4 *)(puVar13 + -0x10) = 8;
      psVar12 = *(short **)(DAT_8c0687ae + iVar9);
      iVar9 = 0;
      uVar5 = (*(code *)PTR_FUN_8c0687b8)
                        (*(undefined4 *)(DAT_8c0687b0 + param_4),(int)(char)psVar12[0xe],
                         (int)*(char *)((int)psVar12 + 0x1d));
      if (0 < *(int *)(puVar13 + -0x10)) {
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44(DAT_8c0687bc,uVar10);
        }
        else {
          dVar22 = (double)CONCAT44(PTR_FUN_8c0687c0,DAT_8c0687bc);
        }
        do {
          puVar2 = PTR_FUN_8c0687c0;
          if ((*psVar12 != 0) && (iVar11 = 0, 0 < psVar12[0xf])) {
            do {
              psVar8 = psVar12 + iVar11 * 8 + 0x10;
              uVar10 = *(undefined4 *)psVar8;
              *(undefined4 *)(puVar13 + -0x60) = *(undefined4 *)(psVar8 + 2);
              *(undefined4 *)(puVar13 + -100) = uVar10;
              if (in_FPSCR_SZ == '\0') {
                param_3 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0x60),SUB84(param_3,0));
              }
              else {
                param_3 = *(double *)(puVar13 + -0x60);
              }
              if (in_FPSCR_PR == '\0') {
                param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) +
                                           (float)((ulonglong)dVar22 >> 0x20),SUB84(param_3,0));
              }
              else {
                param_3 = param_3 + dVar22;
              }
              *(undefined4 *)(puVar13 + -0x5c) = *(undefined4 *)(psVar8 + 4);
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar13 + -0x60) = (int)((ulonglong)param_3 >> 0x20);
                param_1 = (double)CONCAT44(*(undefined4 *)(psVar12 + iVar11 * 8 + 0x16),
                                           SUB84(param_1,0));
              }
              else {
                *(double *)(puVar13 + -0x60) = param_3;
                param_1 = *(double *)(psVar12 + iVar11 * 8 + 0x16);
              }
              iVar11 = iVar11 + 1;
              if (in_FPSCR_SZ == '\0') {
                param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                           *(undefined4 *)((int)DAT_8c0687b2 + (int)psVar12));
              }
              (*(code *)puVar2)(param_1,puVar13 + -100,uVar5);
            } while (iVar11 < psVar12[0xf]);
          }
          iVar9 = iVar9 + 1;
          psVar12 = (short *)((int)psVar12 + (int)DAT_8c0687b4);
        } while (iVar9 < *(int *)(puVar13 + -0x10));
      }
    }
    else if (cVar7 == '\x03') {
      uVar15 = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar13 + -0x3c) = 0;
      }
      else {
        *(double *)(puVar13 + -0x3c) = in_xd14;
      }
      iVar11 = 0;
      iVar9 = *(int *)((int)DAT_8c068926 + *(int *)(DAT_8c068924 + param_4));
      sVar1 = *(short *)(iVar9 + 8);
      *(int *)(puVar13 + -0x38) = iVar9;
      iVar9 = (int)*(short *)(iVar9 + 10) * (int)sVar1;
      *(int *)(puVar13 + -0x34) = iVar9;
      if (0 < iVar9) {
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44(DAT_8c068934,(int)in_dr12);
        }
        else {
          dVar22 = (double)CONCAT44(PTR_FUN_8c068938,DAT_8c068934);
        }
        do {
          iVar9 = *(int *)((int)DAT_8c06892a + *(int *)(DAT_8c068928 + param_4));
          puVar4 = (ushort *)
                   (**(code **)(DAT_8c06892e + iVar9))
                             (*(int *)(DAT_8c068928 + param_4) + *(int *)(DAT_8c06892c + iVar9),
                              iVar11);
          uVar10 = SUB84(param_2,0);
          uVar19 = SUB84(param_3,0);
          uVar5 = SUB84(param_1,0);
          if (puVar4 == (ushort *)0x0) {
            return;
          }
          if (((*puVar4 & 1) != 0) && ((char)puVar4[6] != '\0')) {
            (*(code *)PTR_FUN_8c068938)();
            sVar1 = *(short *)(*(int *)(puVar13 + -0x38) + 8);
            *(undefined **)(puVar13 + -0x44) = PTR_FUN_8c06893c;
            iVar9 = -((int)((int)sVar1 + (uint)(sVar1 < 0)) >> 1);
            if (in_FPSCR_PR == '\0') {
              dVar16 = (double)CONCAT44((float)iVar9,uVar5);
            }
            else {
              dVar16 = (double)iVar9;
            }
            *(ushort **)(puVar13 + -0x2c) = puVar4 + 1;
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar13 + -0x30) = (int)((ulonglong)dVar16 >> 0x20);
            }
            else {
              *(double *)(puVar13 + -0x30) = dVar16;
            }
            uVar3 = (*(code *)PTR_FUN_8c06893c)();
            if (in_FPSCR_PR == '\0') {
              dVar20 = (double)CONCAT44((float)uVar3,uVar19);
            }
            else {
              dVar20 = (double)uVar3;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar16 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0x30),SUB84(dVar16,0));
            }
            else {
              dVar16 = *(double *)(puVar13 + -0x30);
            }
            if (in_FPSCR_PR == '\0') {
              dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) +
                                        (float)((ulonglong)dVar20 >> 0x20) +
                                        (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar20 + dVar22;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar13 + -0x30) = (int)((ulonglong)dVar16 >> 0x20);
            }
            else {
              *(double *)(puVar13 + -0x30) = dVar16;
            }
            iVar9 = -((int)((int)*(short *)(*(int *)(puVar13 + -0x38) + 10) +
                           (uint)(*(short *)(*(int *)(puVar13 + -0x38) + 10) < 0)) >> 1);
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44((float)iVar9,uVar10);
            }
            else {
              dVar18 = (double)iVar9;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar13 + -0x28) = (int)((ulonglong)dVar18 >> 0x20);
            }
            else {
              *(double *)(puVar13 + -0x28) = dVar18;
            }
            uVar3 = (**(code **)(puVar13 + -0x44))();
            uVar14 = SUB84(dVar16,0);
            if (in_FPSCR_SZ == '\0') {
              uVar14 = (uint)uVar15;
            }
            if (in_FPSCR_PR == '\0') {
              param_3 = (double)CONCAT44((float)uVar3,SUB84(dVar20,0));
            }
            else {
              param_3 = (double)uVar3;
            }
            if (in_FPSCR_SZ == '\0') {
              param_2 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0x28),SUB84(dVar18,0));
            }
            else {
              param_2 = *(double *)(puVar13 + -0x28);
              uVar14 = (uint)*(undefined8 *)(puVar13 + -0x30);
            }
            if (in_FPSCR_PR == '\0') {
              param_2 = (double)((ulonglong)param_2 & 0xffffffff);
            }
            else {
              param_2 = param_2 + param_3 + dVar22;
            }
            (*(code *)PTR_FUN_8c068940)(0);
            cVar7 = (char)puVar4[6];
            *(undefined **)(puVar13 + -0x24) = PTR_FUN_8c068944;
            if (cVar7 == '\x01') {
              *(ushort **)(puVar13 + -0x1c) = puVar4 + 7;
              iVar9 = (**(code **)(puVar13 + -0x44))();
              if (iVar9 == 0xf) {
                *(undefined4 *)(puVar13 + -0x18) = 0;
              }
              else {
                iVar9 = (**(code **)(puVar13 + -0x44))();
                *(int *)(puVar13 + -0x18) = iVar9 + 1;
              }
              if (in_FPSCR_SZ == '\0') {
                param_3 = (double)CONCAT44(*(undefined4 *)(puVar4 + 4),(undefined4)DAT_8c068c44);
              }
              else {
                in_xd8 = CONCAT44(DAT_8c068c44._4_4_,(undefined4)DAT_8c068c44);
                param_3 = *(double *)(puVar4 + 4);
              }
              if (in_FPSCR_PR == '\0') {
                param_3 = (double)(ulonglong)
                                  (uint)(SUB84(param_3,0) - (float)((ulonglong)param_3 >> 0x20));
              }
              else {
                param_3 = param_3 - param_3;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar13 + -0x3c) = SUB84(param_3,0);
              }
              else {
                *(undefined8 *)(puVar13 + -0x3c) = in_xd8;
              }
              *(undefined4 *)(puVar13 + -0x20) = 0;
            }
            else if (cVar7 == '\x02') {
              *(uint *)(puVar13 + -0x18) = ((int)*(char *)((int)puVar4 + 0xf) & 0xfU) + 1;
              *(undefined4 *)(puVar13 + -0x20) = 1;
            }
            else if (cVar7 == '\x03') {
              *(ushort **)(puVar13 + -0x1c) = puVar4 + 7;
              iVar9 = (**(code **)(puVar13 + -0x44))();
              if (iVar9 == 0xf) {
                *(undefined4 *)(puVar13 + -0x18) = 0;
              }
              else {
                iVar9 = (**(code **)(puVar13 + -0x44))();
                *(int *)(puVar13 + -0x18) = iVar9 + 1;
              }
              *(undefined4 *)(puVar13 + -0x20) = 1;
            }
            else if (cVar7 == '\x04') {
              *(undefined4 *)(puVar13 + -0x20) = 2;
              if (in_FPSCR_SZ == '\0') {
                param_3 = (double)CONCAT44(*(undefined4 *)(puVar4 + 4),(undefined4)DAT_8c068c44);
              }
              else {
                in_xd8 = CONCAT44(DAT_8c068c44._4_4_,(undefined4)DAT_8c068c44);
                param_3 = *(double *)(puVar4 + 4);
              }
              if (in_FPSCR_PR == '\0') {
                fVar21 = (float)((ulonglong)param_3 >> 0x20);
                param_3 = (double)CONCAT44(fVar21,SUB84(param_3,0) - fVar21);
              }
              else {
                param_3 = param_3 - param_3;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar13 + -0x3c) = SUB84(param_3,0);
              }
              else {
                *(undefined8 *)(puVar13 + -0x3c) = in_xd8;
              }
              *(ushort **)(puVar13 + -0x1c) = puVar4 + 7;
              iVar9 = (**(code **)(puVar13 + -0x44))();
              if (iVar9 == 0xf) {
                *(uint *)(puVar13 + -0x18) = (int)*(char *)((int)puVar4 + 0xf) & 0xf;
              }
              else {
                iVar9 = (**(code **)(puVar13 + -0x44))();
                if (iVar9 == 0) {
                  cVar7 = *(char *)((int)puVar4 + 0xf);
                  *(uint *)(puVar13 + -0x18) = ((int)cVar7 & 0xfU) + 7;
                }
                else {
                  iVar9 = (**(code **)(puVar13 + -0x44))();
                  cVar7 = *(char *)((int)puVar4 + 0xf);
                  puVar13[-0x14] = cVar7;
                  *(uint *)(puVar13 + -0x18) = iVar9 * 7 + ((int)cVar7 & 0xfU) + 7;
                  iVar9 = (**(code **)(puVar13 + -0x44))();
                  cVar7 = puVar13[-0x14];
                  if ((int)((int)cVar7 & 0xfU) < iVar9) {
                    *(int *)(puVar13 + -0x18) = *(int *)(puVar13 + -0x18) + 1;
                  }
                }
                *(uint *)(puVar13 + -0xc) = (int)cVar7 & 0xf;
                iVar9 = (**(code **)(puVar13 + -0x44))();
                if (*(int *)(puVar13 + -0xc) == iVar9) {
                  *(undefined4 *)(puVar13 + -0x18) = 0xffffffff;
                }
              }
            }
            uVar5 = (**(code **)(puVar13 + -0x44))();
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)(ulonglong)uVar14;
            }
            else {
              param_1 = *(double *)(puVar13 + -0x3c);
            }
            (*(code *)PTR_FUN_8c068948)
                      (*(undefined4 *)(DAT_8c068924 + param_4),*(undefined4 *)(puVar13 + -0x20),
                       *(undefined4 *)(puVar13 + -0x18),uVar5);
            *(code **)(puVar13 + -8) = *(code **)(puVar13 + -0x24);
            (**(code **)(puVar13 + -0x24))();
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(puVar13 + -0x34));
      }
    }
    else if (cVar7 == '\x04') {
      iVar11 = 8;
      iVar9 = 0;
      dVar22 = 0.0;
      *(undefined4 *)(puVar13 + -0x58) = *(undefined4 *)(DAT_8c0686a6 + param_4);
      do {
        uVar5 = SUB84(param_3,0);
        psVar12 = (short *)(*(int *)((int)DAT_8c0686a8 + *(int *)(puVar13 + -0x58)) + iVar9);
        if (*psVar12 != -1) {
          iVar6 = (*(code *)PTR_FUN_8c06894c)(*(undefined4 *)(DAT_8c068924 + param_4),4,1,0);
          uVar10 = *(undefined4 *)(iVar6 + 4);
          dVar16 = (double)(*(code *)PTR_FUN_8c068950)(iVar6);
          uVar14 = SUB84(param_2,0);
          if (in_FPSCR_SZ == '\0') {
            param_3 = (double)CONCAT44(*(undefined4 *)(psVar12 + 2),uVar5);
          }
          else {
            param_3 = *(double *)(psVar12 + 2);
          }
          if (in_FPSCR_PR == '\0') {
            bVar23 = (float)((ulonglong)dVar16 >> 0x20) < (float)((ulonglong)param_3 >> 0x20);
          }
          else {
            bVar23 = dVar16 < param_3;
          }
          if (bVar23) {
            *psVar12 = -1;
          }
          else {
            (*(code *)PTR_FUN_8c068aa4)();
            if (in_FPSCR_SZ == '\0') {
              param_2 = (double)(ulonglong)uVar14;
              uVar15 = CONCAT44(*(undefined4 *)(psVar12 + 6),SUB84(dVar22,0));
            }
            else {
              uVar15 = *(undefined8 *)(psVar12 + 6);
              param_2 = *(double *)(psVar12 + 10);
            }
            (*(code *)PTR_FUN_8c068aa8)(uVar15,0);
            uVar14 = (uint)uVar15;
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44(*(undefined4 *)(psVar12 + 8),DAT_8c068ab0);
            }
            else {
              param_3 = *(double *)(psVar12 + 8);
            }
            if (in_FPSCR_PR == '\0') {
              param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) * SUB84(param_3,0),
                                         SUB84(param_3,0));
            }
            else {
              param_3 = param_3 * param_3;
            }
            if (in_FPSCR_SZ == '\0') {
              param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),DAT_8c068ab4);
            }
            if (in_FPSCR_PR == '\0') {
              fVar21 = (float)((ulonglong)param_3 >> 0x20) / SUB84(param_3,0);
              param_3 = (double)CONCAT44(fVar21,SUB84(param_3,0));
              iVar6 = (int)fVar21;
            }
            else {
              param_3 = param_3 / param_3;
              iVar6 = (int)param_3;
            }
            (*(code *)PTR_FUN_8c068aac)(0,iVar6);
            if (in_FPSCR_SZ != '\0') {
              uVar14 = (uint)*(undefined8 *)(psVar12 + 2);
            }
            (*(code *)PTR_FUN_8c068ab8)(uVar10,7,0);
            param_1 = in_xd14;
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)(ulonglong)uVar14;
            }
            (*(code *)PTR_FUN_8c068abc)(uVar10);
            (*(code *)PTR_FUN_8c068ac0)(uVar10);
            (*(code *)PTR_FUN_8c068ac4)();
          }
        }
        uVar10 = (undefined4)in_dr12;
        uVar5 = SUB84(param_1,0);
        iVar11 = iVar11 + -1;
        iVar9 = iVar9 + 0x1c;
      } while (iVar11 != 0);
      iVar11 = 0;
      iVar9 = *(int *)((int)DAT_8c0686aa + *(int *)(DAT_8c0686a4 + param_4));
      sVar1 = *(short *)(iVar9 + 8);
      *(int *)(puVar13 + -0x54) = iVar9;
      *(int *)(puVar13 + -0x50) = (int)*(short *)(iVar9 + 10) * (int)sVar1;
      iVar9 = (*(code *)PTR_FUN_8c0686b4)(4,0,0);
      if (in_FPSCR_SZ == '\0') {
        uVar15 = CONCAT44(*(undefined4 *)(DAT_8c0686b8 + 0x34),uVar5);
      }
      else {
        uVar15 = *(undefined8 *)(DAT_8c0686b8 + 0x34);
      }
      *(undefined4 *)(puVar13 + -0x4c) = *(undefined4 *)(iVar9 + 4);
      (*(code *)PTR_FUN_8c0686bc)(uVar15,4,0);
      if (in_FPSCR_SZ == '\0') {
        in_xd14 = (double)CONCAT44(SUB84(dVar22,0),(int)uVar15);
      }
      (*(code *)PTR_FUN_8c0686c0)(in_xd14,*(undefined4 *)(puVar13 + -0x4c));
      if (0 < *(int *)(puVar13 + -0x50)) {
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44(DAT_8c0686c4,uVar10);
        }
        else {
          dVar16 = (double)CONCAT44(uRam8c0686c8,DAT_8c0686c4);
        }
        do {
          iVar9 = *(int *)((int)DAT_8c0686ac + *(int *)(DAT_8c0686a6 + param_4));
          puVar4 = (ushort *)
                   (**(code **)(DAT_8c0686b0 + iVar9))
                             (*(int *)(DAT_8c0686a6 + param_4) + *(int *)(DAT_8c0686ae + iVar9),
                              iVar11);
          uVar14 = SUB84(in_xd14,0);
          uVar5 = SUB84(param_2,0);
          uVar10 = SUB84(param_3,0);
          uVar19 = SUB84(dVar22,0);
          if ((puVar4 != (ushort *)0x0) && ((*puVar4 & 1) != 0)) {
            *(ushort **)(puVar13 + -0x48) = puVar4 + 1;
            (*(code *)PTR_FUN_8c068aa4)();
            sVar1 = *(short *)(*(int *)(puVar13 + -0x54) + 8);
            *(undefined **)(puVar13 + -0x44) = PTR_FUN_8c068ac8;
            iVar9 = -((int)((int)sVar1 + (uint)(sVar1 < 0)) >> 1);
            if (in_FPSCR_PR == '\0') {
              dVar22 = (double)CONCAT44((float)iVar9,uVar19);
            }
            else {
              dVar22 = (double)iVar9;
            }
            uVar3 = (*(code *)PTR_FUN_8c068ac8)(iVar9);
            if (in_FPSCR_PR == '\0') {
              dVar20 = (double)CONCAT44((float)uVar3,uVar10);
            }
            else {
              dVar20 = (double)uVar3;
            }
            iVar9 = -((int)((int)*(short *)(*(int *)(puVar13 + -0x54) + 10) +
                           (uint)(*(short *)(*(int *)(puVar13 + -0x54) + 10) < 0)) >> 1);
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44((float)iVar9,uVar5);
              dVar22 = (double)((ulonglong)dVar22 & 0xffffffff);
            }
            else {
              dVar18 = (double)iVar9;
              dVar22 = dVar22 + dVar20 + dVar16;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar13 + -0x40) = (int)((ulonglong)dVar18 >> 0x20);
            }
            else {
              *(double *)(puVar13 + -0x40) = dVar18;
            }
            uVar3 = (**(code **)(puVar13 + -0x44))();
            if (in_FPSCR_SZ == '\0') {
              uVar14 = SUB84(dVar22,0);
            }
            if (in_FPSCR_PR == '\0') {
              param_3 = (double)CONCAT44((float)uVar3,SUB84(dVar20,0));
            }
            else {
              param_3 = (double)uVar3;
            }
            if (in_FPSCR_SZ == '\0') {
              param_2 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0x40),SUB84(dVar18,0));
              in_xd14 = (double)(ulonglong)uVar14;
            }
            else {
              param_2 = *(double *)(puVar13 + -0x40);
              in_xd14 = dVar22;
            }
            if (in_FPSCR_PR == '\0') {
              param_2 = (double)((ulonglong)param_2 & 0xffffffff);
            }
            else {
              param_2 = param_2 + param_3 + dVar16;
            }
            (*(code *)PTR_FUN_8c068aa8)(in_xd14,0);
            (*(code *)PTR_FUN_8c068ac0)(*(undefined4 *)(puVar13 + -0x4c));
            (*(code *)PTR_FUN_8c068ac4)();
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(puVar13 + -0x50));
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x8c0686c8) is written */
  return;
}

