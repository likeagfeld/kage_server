// entry: 8c03c7e4
// name: FUN_8c03c7e4


/* WARNING: Removing unreachable block (ram,0x8c03cc88) */

void FUN_8c03c7e4(double param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  ushort *puVar16;
  undefined1 *puVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  undefined8 in_dr12;
  double dVar21;
  uint uVar22;
  undefined8 in_dr14;
  bool bVar23;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_1c [8];
  undefined8 local_14;
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar17 = (undefined1 *)((int)&local_14 + 4);
    local_14 = CONCAT44((int)in_dr14,(undefined4)local_14);
  }
  else {
    puVar17 = auStack_1c;
    uStack_c = in_dr12;
    local_14 = in_dr14;
  }
  *(undefined4 *)(puVar17 + -4) = in_PR;
  iVar8 = (int)DAT_8c03c81e;
  *(int *)(puVar17 + (int)DAT_8c03c820 + iVar8 + -4) = param_3;
  iVar3 = (*(code *)PTR_FUN_8c03c824)(*(undefined4 *)(param_3 + 0x58));
  if (iVar3 == 0xf) {
    iVar3 = *(int *)(puVar17 + (int)DAT_8c03c98c + iVar8 + -4);
    dVar18 = (double)(*(code *)PTR_FUN_8c03c9bc)(*(undefined4 *)(iVar3 + 0x58));
    puVar2 = PTR_DAT_8c03cb38;
    uVar6 = (undefined4)in_dr12;
    uVar22 = (uint)in_dr14;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c03c9c0,param_2);
    }
    else {
      dVar20 = (double)CONCAT44(PTR_FUN_8c03c9c4,DAT_8c03c9c0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) +
                                (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar18,0));
    }
    else {
      dVar18 = dVar18 + dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(undefined4 *)(DAT_8c03c98e + iVar3),SUB84(dVar20,0));
    }
    else {
      dVar20 = *(double *)(DAT_8c03c98e + iVar3);
    }
    fVar19 = (float)((ulonglong)dVar20 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar23 = fVar19 < (float)((ulonglong)dVar18 >> 0x20);
    }
    else {
      bVar23 = dVar20 < dVar18;
    }
    if (bVar23) {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(fVar19,*(undefined4 *)(DAT_8c03cb34 + 0x34));
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 + dVar20;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)DAT_8c03cb20 + *(int *)(puVar17 + (int)DAT_8c03cb18 + iVar8 + -4)) =
             (int)((ulonglong)dVar20 >> 0x20);
      }
      else {
        *(double *)((int)DAT_8c03cb20 + *(int *)(puVar17 + (int)DAT_8c03cb18 + iVar8 + -4)) = dVar20
        ;
      }
      pcVar12 = puVar2 + DAT_8c03cb24;
      cVar1 = *pcVar12;
      *(char **)(puVar17 + (int)DAT_8c03cb26 + iVar8 + -4) = pcVar12;
      if (cVar1 == '\0') {
        *(undefined4 *)(puVar17 + (int)DAT_8c03cb28 + iVar8 + -4) = *DAT_8c03cb48;
      }
      else {
        *(undefined4 *)(puVar17 + (int)DAT_8c03cb28 + iVar8 + -4) = *DAT_8c03cb3c;
      }
      (*(code *)PTR_FUN_8c03cb40)(pcVar12[1]);
      (*(code *)PTR_FUN_8c03cb44)
                (*(undefined4 *)(puVar17 + (int)DAT_8c03cb28 + iVar8 + -4),
                 *(undefined1 *)(*(int *)(puVar17 + (int)DAT_8c03cb26 + iVar8 + -4) + 2),
                 *(undefined1 *)(*(int *)(puVar17 + (int)DAT_8c03cb26 + iVar8 + -4) + 3),0);
    }
    else {
      iVar14 = *(int *)(puVar17 + (int)DAT_8c03c98c + iVar8 + -4);
      iVar3 = *(int *)((int)DAT_8c03c992 + *(int *)(DAT_8c03c990 + iVar14));
      puVar9 = (undefined4 *)(puVar17 + (int)DAT_8c03c994 + iVar8 + -4);
      uVar10 = *(undefined4 *)(iVar3 + 0xb8);
      puVar9[1] = *(undefined4 *)(iVar3 + 0xbc);
      uVar11 = *(undefined4 *)(iVar3 + 0xc0);
      *puVar9 = uVar10;
      puVar9[2] = uVar11;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)(puVar17 + (int)DAT_8c03c996 + iVar8 + -4),
                                  SUB84(dVar20,0));
      }
      else {
        dVar18 = *(double *)(puVar17 + (int)DAT_8c03c996 + iVar8 + -4);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c03c998 + iVar14) = (int)((ulonglong)dVar18 >> 0x20);
      }
      else {
        *(double *)(DAT_8c03c998 + iVar14) = dVar18;
      }
      *(undefined4 *)(puVar17 + (int)DAT_8c03c99a + iVar8 + -4) = 0;
      *(undefined4 *)(puVar17 + (int)DAT_8c03c99c + iVar8 + -4) = 0;
      iVar3 = *(int *)(DAT_8c03c99e + iVar14);
      iVar14 = *(int *)(iVar3 + 0x20);
      *(int *)(puVar17 + (int)DAT_8c03c9a0 + iVar8 + -4) = iVar3;
      uVar10 = *(undefined4 *)(iVar3 + 0x24);
      *(int *)(puVar17 + (int)DAT_8c03c9a2 + iVar8 + -4) = iVar14;
      *(undefined4 *)(puVar17 + (int)DAT_8c03c9a4 + iVar8 + -4) = uVar10;
      *(undefined4 *)(puVar17 + (int)DAT_8c03c9a6 + iVar8 + -4) = 0;
      if (0 < iVar14) {
        if (*(int *)(puVar17 + (int)DAT_8c03c9a4 + iVar8 + -4) < 1) {
          iVar3 = *(int *)(puVar17 + (int)DAT_8c03cccc + iVar8 + -4);
          do {
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(puVar17 + (int)DAT_8c03ccd2 + iVar8 + -4));
        }
        else {
          iVar3 = (int)DAT_8c03c9a8;
          do {
            iVar14 = 0;
            *(undefined1 **)(puVar17 + (int)DAT_8c03c9ac + iVar8 + -4) =
                 puVar17 + (int)DAT_8c03c9aa + iVar8 + -4;
            do {
              iVar13 = *(int *)((int)DAT_8c03c99e +
                               *(int *)(puVar17 + (int)DAT_8c03c98c + iVar8 + -4));
              if (*(char *)(*(int *)(iVar13 + 0x20) * iVar14 +
                            *(int *)(puVar17 + (int)DAT_8c03c9a6 + iVar8 + -4) +
                           *(int *)(DAT_8c03c9ae + iVar13)) == '\x01') {
                iVar4 = 8;
                puVar16 = *(ushort **)(DAT_8c03c9b0 + iVar13);
                *(int *)(puVar17 + (int)DAT_8c03c9b2 + iVar8 + -4) = iVar13;
                iVar13 = *(int *)(puVar17 + (int)DAT_8c03c9a6 + iVar8 + -4);
                do {
                  puVar2 = PTR_FUN_8c03ccd8;
                  if (((((*(byte *)((int)puVar16 + 0xb) & 1) == 0) && ((puVar16[4] & 0x14) == 0)) &&
                      ((*puVar16 & 1) != 0)) &&
                     ((iVar5 = (*(code *)PTR_FUN_8c03ccd8)(), iVar5 == iVar13 &&
                      (iVar5 = (*(code *)puVar2)(), iVar5 == iVar14)))) {
                    uVar6 = *(undefined4 *)(puVar17 + (int)DAT_8c03ccca + iVar8 + -4);
                    bVar23 = true;
                    goto LAB_8c03c8fc;
                  }
                  iVar4 = iVar4 + -1;
                  puVar16 = (ushort *)((int)puVar16 + iVar3);
                } while (iVar4 != 0);
                bVar23 = false;
                uVar6 = *(undefined4 *)(puVar17 + (int)DAT_8c03c9b2 + iVar8 + -4);
LAB_8c03c8fc:
                if (((!bVar23) &&
                    (iVar13 = (*(code *)PTR_FUN_8c03ccdc)
                                        (uVar6,*(undefined4 *)
                                                (puVar17 + (int)DAT_8c03cccc + iVar8 + -4),iVar14),
                    iVar13 != 0)) &&
                   (iVar13 = (*(code *)PTR_FUN_8c03cce0)
                                       (*(undefined4 *)
                                         ((int)DAT_8c03ccc4 +
                                         *(int *)(puVar17 + (int)DAT_8c03ccc2 + iVar8 + -4)),
                                        *(undefined4 *)(puVar17 + (int)DAT_8c03cccc + iVar8 + -4),
                                        iVar14), iVar13 != 0)) {
                  iVar4 = *(int *)(puVar17 + (int)DAT_8c03ccb8 + iVar8 + -4);
                  iVar13 = (int)DAT_8c03ccb8;
                  *(undefined4 *)(iVar4 * 4 + *(int *)(puVar17 + (int)DAT_8c03ccce + iVar8 + -4)) =
                       *(undefined4 *)(puVar17 + (int)DAT_8c03cccc + iVar8 + -4);
                  *(int *)(puVar17 + iVar4 * 4 + iVar8 + -4) = iVar14;
                  *(int *)(puVar17 + iVar13 + iVar8 + -4) = iVar4 + 1;
                  if (10 < iVar4 + 1) {
                    *(undefined4 *)(puVar17 + (int)DAT_8c03ccd0 + iVar8 + -4) = 1;
                  }
                }
              }
              uVar6 = (undefined4)in_dr12;
              uVar22 = (uint)in_dr14;
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(puVar17 + (int)DAT_8c03c9a4 + iVar8 + -4));
            *(int *)(puVar17 + (int)DAT_8c03c9a6 + iVar8 + -4) =
                 *(int *)(puVar17 + (int)DAT_8c03c9a6 + iVar8 + -4) + 1;
          } while (*(int *)(puVar17 + (int)DAT_8c03c9a6 + iVar8 + -4) <
                   *(int *)(puVar17 + (int)DAT_8c03c9a2 + iVar8 + -4));
        }
      }
      if (*(int *)(puVar17 + (int)DAT_8c03c99c + iVar8 + -4) == 0) {
        iVar3 = 0;
        if (0 < *(int *)(puVar17 + (int)DAT_8c03ccb8 + iVar8 + -4)) {
          *(undefined1 **)(puVar17 + (int)DAT_8c03ccba + iVar8 + -4) = puVar17 + iVar8 + -4;
          *(undefined1 **)(puVar17 + (int)DAT_8c03ccbe + iVar8 + -4) =
               puVar17 + (int)DAT_8c03ccbc + iVar8 + -4;
          *(undefined **)(puVar17 + (int)DAT_8c03ccc0 + iVar8 + -4) = PTR_FUN_8c03ccd4;
          do {
            uVar10 = *(undefined4 *)(*(int *)(puVar17 + (int)DAT_8c03ccbe + iVar8 + -4) + iVar3 * 4)
            ;
            uVar11 = *(undefined4 *)(iVar3 * 4 + *(int *)(puVar17 + (int)DAT_8c03ccba + iVar8 + -4))
            ;
            uVar6 = *(undefined4 *)
                     ((int)DAT_8c03ccc4 + *(int *)(puVar17 + (int)DAT_8c03ccc2 + iVar8 + -4));
            pcVar7 = *(code **)(puVar17 + (int)DAT_8c03ccc0 + iVar8 + -4);
            *(code **)(puVar17 + (int)DAT_8c03ccc6 + iVar8 + -4) = pcVar7;
            iVar14 = (*pcVar7)(uVar6,uVar10,uVar11);
            if (iVar14 == 0) {
              if (in_FPSCR_SZ == '\0') {
                dVar18 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c1825f8_4_8c03ccec,SUB84(dVar18,0)
                                         );
              }
              else {
                dVar18 = *(double *)PTR_DAT_8c1825f8_4_8c03ccec;
              }
              if (in_FPSCR_PR == '\0') {
                fVar19 = (float)iVar3 * (float)((ulonglong)dVar18 >> 0x20);
              }
              else {
                fVar19 = SUB84((double)CONCAT44((int)((ulonglong)param_1 >> 0x20),(float)iVar3) *
                               dVar18,0);
              }
              if (in_FPSCR_SZ == '\0') {
                param_1 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03cce4,fVar19);
              }
              else {
                param_1 = *(double *)PTR_DAT_8c03cce4;
              }
              (*(code *)PTR_FUN_8c03cce8)
                        (param_1,*(undefined4 *)
                                  ((int)DAT_8c03ccc4 +
                                  *(int *)(puVar17 + (int)DAT_8c03ccc2 + iVar8 + -4)),uVar10,uVar11)
              ;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(puVar17 + (int)DAT_8c03ccb8 + iVar8 + -4));
        }
      }
      else {
        iVar3 = 0;
        dVar20 = (double)(ulonglong)uVar22;
        *(undefined1 **)(puVar17 + (int)DAT_8c03c9b4 + iVar8 + -4) =
             puVar17 + (int)DAT_8c03c9aa + iVar8 + -4;
        *(undefined1 **)(puVar17 + (int)DAT_8c03c9b6 + iVar8 + -4) = puVar17 + iVar8 + -4;
        *(undefined **)(puVar17 + (int)DAT_8c03c9b8 + iVar8 + -4) = PTR_FUN_8c03c9c4;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((undefined4)DAT_8c03c9c8,uVar6);
          dVar20 = (double)(ulonglong)DAT_8c03c9c8._4_4_;
        }
        else {
          dVar21 = (double)CONCAT44(DAT_8c03c9c8._4_4_,(undefined4)DAT_8c03c9c8);
        }
        do {
          uVar6 = SUB84(dVar18,0);
          iVar14 = (*(code *)PTR__rand_8c03c9d0)();
          if (in_FPSCR_PR != '\0') {
            uVar6 = SUB84(((double)iVar14 / dVar21) * dVar20,0);
          }
          iVar14 = (*(code *)PTR___modls_8c03c9d4)();
          uVar11 = *(undefined4 *)(*(int *)(puVar17 + (int)DAT_8c03c9b4 + iVar8 + -4) + iVar14 * 4);
          uVar15 = *(undefined4 *)(*(int *)(puVar17 + (int)DAT_8c03c9b6 + iVar8 + -4) + iVar14 * 4);
          uVar10 = *(undefined4 *)
                    ((int)DAT_8c03c99e + *(int *)(puVar17 + (int)DAT_8c03c98c + iVar8 + -4));
          pcVar7 = *(code **)(puVar17 + (int)DAT_8c03cb14 + iVar8 + -4);
          *(code **)(puVar17 + (int)DAT_8c03cb16 + iVar8 + -4) = pcVar7;
          iVar14 = (*pcVar7)(uVar10,uVar11,uVar15);
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                       (int)((ulonglong)dVar20 >> 0x20));
            dVar18 = (double)CONCAT44(*(undefined4 *)DAT_8c03cb2c,uVar6);
          }
          else {
            dVar18 = *DAT_8c03cb2c;
          }
          if (in_FPSCR_PR == '\0') {
            param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                       SUB84(param_1,0) * (float)((ulonglong)dVar18 >> 0x20));
          }
          else {
            param_1 = param_1 * dVar18;
          }
          if (iVar14 == 0) {
            iVar3 = iVar3 + 1;
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03cce4,SUB84(param_1,0));
            }
            else {
              param_1 = *(double *)PTR_DAT_8c03cce4;
            }
            (*(code *)PTR_FUN_8c03cce8)
                      (param_1,*(undefined4 *)
                                ((int)DAT_8c03ccc4 +
                                *(int *)(puVar17 + (int)DAT_8c03ccc2 + iVar8 + -4)),uVar11,uVar15);
            if (in_FPSCR_PR == '\0') {
              dVar20 = (double)CONCAT44((float)iVar3,SUB84(dVar20,0));
            }
            else {
              dVar20 = (double)iVar3;
            }
          }
        } while (iVar3 < 5);
      }
      uVar22 = SUB84(dVar18,0);
      iVar3 = *(int *)(*(int *)((int)DAT_8c03cb1a +
                               *(int *)(puVar17 + (int)DAT_8c03cb18 + iVar8 + -4)) + 0x28);
      puVar16 = *(ushort **)
                 ((int)DAT_8c03cb1c +
                 *(int *)((int)DAT_8c03cb1a + *(int *)(puVar17 + (int)DAT_8c03cb18 + iVar8 + -4)));
      iVar14 = 0;
      if (0 < iVar3) {
        iVar13 = (int)DAT_8c03cb1e;
        do {
          puVar2 = PTR_FUN_8c03cb4c;
          if ((*puVar16 & 1) != 0) {
            uVar6 = (*(code *)PTR_FUN_8c03cb4c)();
            uVar10 = (*(code *)puVar2)();
            iVar4 = (*(code *)PTR_FUN_8c03cb50)
                              (*(undefined4 *)
                                ((int)DAT_8c03cb1a +
                                *(int *)(puVar17 + (int)DAT_8c03cb18 + iVar8 + -4)),uVar6,uVar10);
            if (iVar4 == 0) {
              iVar4 = (*(code *)puVar2)();
              if (iVar4 == 4) {
                dVar18 = (double)((ulonglong)dVar18 & 0xffffffff);
                *(byte *)((int)puVar16 + 9) = *(byte *)((int)puVar16 + 9) & 0xf | 0x20;
                if (in_FPSCR_SZ == '\0') {
                  puVar16[10] = 0;
                  puVar16[0xb] = 0;
                  puVar16[6] = 0;
                  puVar16[7] = 0;
                }
                else {
                  *(double *)(puVar16 + 10) = dVar18;
                  *(double *)(puVar16 + 6) = dVar18;
                }
                (*(code *)PTR_FUN_8c03cb54)
                          (*(undefined4 *)
                            ((int)DAT_8c03cb1a + *(int *)(puVar17 + (int)DAT_8c03cb18 + iVar8 + -4))
                           ,puVar16);
              }
            }
            else {
              dVar18 = (double)((ulonglong)dVar18 & 0xffffffff);
              *(byte *)(iVar4 + 9) = *(byte *)(iVar4 + 9) & 0xf | 0x20;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(iVar4 + 0x14) = 0;
                *(undefined4 *)(iVar4 + 0xc) = 0;
              }
              else {
                *(double *)(iVar4 + 0x14) = dVar18;
                *(double *)(iVar4 + 0xc) = dVar18;
              }
            }
          }
          uVar22 = SUB84(dVar18,0);
          iVar14 = iVar14 + 1;
          puVar16 = (ushort *)((int)puVar16 + iVar13);
        } while (iVar14 < iVar3);
      }
      puVar2 = PTR_DAT_8c03cb30;
      iVar8 = *(int *)(puVar17 + (int)DAT_8c03cb18 + iVar8 + -4);
      iVar3 = (int)DAT_8c03cb22;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(DAT_8c03cb20 + iVar8) = 0;
      }
      else {
        *(ulonglong *)(DAT_8c03cb20 + iVar8) = (ulonglong)uVar22;
      }
      puVar9 = (undefined4 *)(iVar8 + iVar3);
      uVar10 = *(undefined4 *)puVar2;
      puVar9[1] = *(undefined4 *)(puVar2 + 4);
      uVar6 = *(undefined4 *)(puVar2 + 8);
      *puVar9 = uVar10;
      puVar9[2] = uVar6;
    }
  }
  return;
}

