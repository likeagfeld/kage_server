// entry: 8c09023a
// name: FUN_8c09023a
// signature: undefined FUN_8c09023a(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_8c09023a(uint param_1,double param_2,int param_3,undefined4 param_4,double *param_5,
                   double *param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr1_01;
  undefined4 extraout_fr1_02;
  undefined4 extraout_fr1_03;
  undefined4 extraout_fr1_04;
  double dVar7;
  float fVar8;
  undefined *puVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong in_dr14;
  double in_xd8;
  bool bVar14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_20;
  
  if (in_FPSCR_SZ == '\0') {
    puVar6 = (undefined8 *)((int)&local_20 + 4);
    local_20 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_20);
  }
  else {
    puVar6 = &local_20;
    local_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar6 + -4) = in_PR;
  if (param_5 == (double *)0x0) {
    (*(code *)PTR_FUN_8c090308)
              (*(undefined4 *)(param_3 + 8),param_4,(undefined1 *)((int)puVar6 + -0x30),
               (undefined1 *)((int)puVar6 + -0x28));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar6 + -0x2c) = 0;
      param_5 = (double *)((int)puVar6 + -0x30);
    }
    else {
      *(ulonglong *)((int)puVar6 + -0x2c) = (ulonglong)param_1;
      param_5 = (double *)((int)puVar6 + -0x30);
    }
  }
  puVar9 = PTR_FUN_8c0902f4;
  iVar2 = (*(code *)PTR_FUN_8c0902f4)();
  uVar5 = (undefined4)in_dr14;
  uVar3 = extraout_fr1;
  if (iVar2 < *(int *)(param_3 + 0x20)) {
    iVar2 = (*(code *)puVar9)();
    uVar5 = (undefined4)in_dr14;
    uVar3 = extraout_fr1_00;
    if (iVar2 < *(int *)(param_3 + 0x24)) {
      uVar3 = (*(code *)puVar9)();
      *(undefined4 *)((int)puVar6 + -0x24) = uVar3;
      uVar3 = (*(code *)puVar9)();
      *(undefined4 *)((int)puVar6 + -0x20) = uVar3;
      iVar2 = (*(code *)PTR_FUN_8c090438)(param_3,*(undefined4 *)((int)puVar6 + -0x24),uVar3);
      uVar3 = (undefined4)in_dr14;
      if (iVar2 != 0) {
        (*(code *)PTR_FUN_8c09043c)(param_3,iVar2);
        uVar3 = (undefined4)in_dr14;
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44(*(undefined4 *)((int)param_5 + 4),SUB84(param_2,0));
        }
        else {
          param_2 = *(double *)((int)param_5 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          bVar14 = (float)((ulonglong)param_2 >> 0x20) < 0.0;
        }
        else {
          bVar14 = param_2 < (double)(ulonglong)param_1;
        }
        if (bVar14) {
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)(in_dr14 & 0xffffffff);
          }
          else {
            dVar11 = (double)(ulonglong)param_1;
          }
        }
        else {
          uVar5 = (*(code *)puVar9)();
          *(undefined4 *)((int)puVar6 + -0x10) = uVar5;
          uVar5 = (*(code *)puVar9)();
          *(undefined4 *)((int)puVar6 + -8) = uVar5;
          (*(code *)PTR_FUN_8c090440)(param_3,*(undefined4 *)((int)puVar6 + -0x10),uVar5,1);
          iVar4 = *(int *)((*(int *)(param_3 + 0x20) * *(int *)((int)puVar6 + -8) +
                           *(int *)((int)puVar6 + -0x10)) * 4 + *(int *)(DAT_8c090434 + param_3));
          if ((iVar4 == 0) || (*(int *)(iVar4 + 8) != 2)) {
            if (*(int *)((*(int *)(param_3 + 0x20) * *(int *)((int)puVar6 + -8) +
                         *(int *)((int)puVar6 + -0x10)) * 4 + *(int *)(DAT_8c090432 + param_3)) == 0
               ) {
              iVar4 = (*(code *)PTR_FUN_8c090448)
                                (param_3,*(undefined4 *)((int)puVar6 + -0x10),
                                 *(undefined4 *)((int)puVar6 + -8));
              uVar5 = SUB84(param_2,0);
              if ((iVar4 == 0) || ((*(byte *)(iVar4 + 9) & 0x7f) != 0)) {
                bVar1 = *(byte *)(*(int *)((int)puVar6 + -0x10) +
                                  *(int *)(param_3 + 0x20) * *(int *)((int)puVar6 + -8) +
                                 *(int *)(DAT_8c090436 + param_3));
                *(int *)((int)puVar6 + -0x10) =
                     *(int *)((int)puVar6 + -0x10) +
                     *(int *)(param_3 + 0x20) * *(int *)((int)puVar6 + -8);
                if (bVar1 < 0x1c) {
                  if (bVar1 < 0x10) {
LAB_8c0904b2:
                    if (bVar1 == 0) {
                      if (in_FPSCR_SZ == '\0') {
                        param_2 = (double)CONCAT44(DAT_8c09059c._4_4_,uVar5);
                      }
                      else {
                        param_2 = (double)CONCAT44(DAT_8c0905a4,DAT_8c09059c._4_4_);
                      }
                    }
                    else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
                      if (in_FPSCR_SZ == '\0') {
                        param_2 = (double)CONCAT44(DAT_8c09059c._4_4_,uVar5);
                      }
                      else {
                        param_2 = (double)CONCAT44(DAT_8c0905a4,DAT_8c09059c._4_4_);
                      }
                    }
                    else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) ||
                            (bVar1 == 0x66)) {
                      if (in_FPSCR_SZ == '\0') {
                        param_2 = (double)CONCAT44(DAT_8c0905a4,uVar5);
                      }
                      else {
                        param_2 = (double)CONCAT44(uRam8c0905a8,DAT_8c0905a4);
                      }
                    }
                    else if (bVar1 == 0x67) {
                      if (in_FPSCR_SZ == '\0') {
                        param_2 = (double)CONCAT44(DAT_8c0905a4,uVar5);
                      }
                      else {
                        param_2 = (double)CONCAT44(uRam8c0905a8,DAT_8c0905a4);
                      }
                    }
                    else {
                      param_2 = (double)((ulonglong)param_2 & 0xffffffff);
                    }
                  }
                  else if (in_FPSCR_SZ == '\0') {
                    param_2 = (double)CONCAT44(DAT_8c09044c,uVar5);
                  }
                  else {
                    param_2 = (double)CONCAT44(uRam8c090450,DAT_8c09044c);
                  }
                }
                else {
                  if (0x4b < bVar1) goto LAB_8c0904b2;
                  if ((**(char **)(param_3 + 4) == '\x04') &&
                     ((*(char **)(param_3 + 4))[1] == '\x03')) {
                    param_2 = (double)((ulonglong)param_2 & 0xffffffff);
                  }
                  else if (*(short *)(*(int *)(param_3 + 8) + 0x18) == 0) {
                    if (in_FPSCR_SZ == '\0') {
                      param_2 = (double)CONCAT44(DAT_8c0905a4,uVar5);
                    }
                    else {
                      param_2 = (double)CONCAT44(uRam8c0905a8,DAT_8c0905a4);
                    }
                  }
                  else if (in_FPSCR_SZ == '\0') {
                    param_2 = (double)CONCAT44((undefined4)DAT_8c09059c,uVar5);
                  }
                  else {
                    param_2 = (double)CONCAT44(DAT_8c09059c._4_4_,(undefined4)DAT_8c09059c);
                  }
                }
              }
              else if (in_FPSCR_SZ == '\0') {
                param_2 = (double)CONCAT44(DAT_8c09059c._4_4_,uVar5);
              }
              else {
                param_2 = (double)CONCAT44(DAT_8c0905a4,DAT_8c09059c._4_4_);
              }
            }
            else {
              param_2 = (double)CONCAT44(0x3f800000,SUB84(param_2,0));
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            param_2 = (double)CONCAT44(DAT_8c090444,SUB84(param_2,0));
          }
          else {
            param_2 = (double)CONCAT44(PTR_FUN_8c090448,DAT_8c090444);
          }
          dVar11 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar11 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar3);
          }
        }
        *(int *)((int)puVar6 + -0x1c) = iVar2 + 2;
        iVar4 = (*(code *)puVar9)();
        *(int *)((int)puVar6 + -0x18) = *(int *)(param_3 + 0x20) * iVar4;
        iVar4 = (*(code *)puVar9)();
        *(int *)((*(int *)((int)puVar6 + -0x18) + iVar4) * 4 + *(int *)(DAT_8c090432 + param_3)) =
             iVar2;
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)((int)param_5 + 4),extraout_fr1_02);
        }
        else {
          dVar7 = *(double *)((int)param_5 + 4);
        }
        goto LAB_8c090282;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)((int)param_5 + 4),extraout_fr1_01);
      }
      else {
        dVar7 = *(double *)((int)param_5 + 4);
      }
      if (in_FPSCR_PR == '\0') {
        bVar14 = (float)((ulonglong)dVar7 >> 0x20) < 0.0;
      }
      else {
        bVar14 = dVar7 < (double)(ulonglong)param_1;
      }
      if (bVar14) {
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)(in_dr14 & 0xffffffff);
        }
        else {
          dVar11 = (double)(ulonglong)param_1;
        }
        goto LAB_8c090282;
      }
      uVar5 = (*(code *)puVar9)();
      *(undefined4 *)((int)puVar6 + -0x14) = uVar5;
      uVar5 = (*(code *)puVar9)();
      *(undefined4 *)((int)puVar6 + -0xc) = uVar5;
      (*(code *)PTR_FUN_8c0906ec)(param_3,*(undefined4 *)((int)puVar6 + -0x14),uVar5,1);
      iVar2 = *(int *)((*(int *)(param_3 + 0x20) * *(int *)((int)puVar6 + -0xc) +
                       *(int *)((int)puVar6 + -0x14)) * 4 + *(int *)(DAT_8c0906d4 + param_3));
      uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 2)) {
        if (*(int *)((*(int *)(param_3 + 0x20) * *(int *)((int)puVar6 + -0xc) +
                     *(int *)((int)puVar6 + -0x14)) * 4 + *(int *)(DAT_8c0906d0 + param_3)) == 0) {
          iVar2 = (*(code *)PTR_FUN_8c0906e4)
                            (param_3,*(undefined4 *)((int)puVar6 + -0x14),
                             *(undefined4 *)((int)puVar6 + -0xc));
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)((int)param_5 + 4),extraout_fr1_03);
          }
          else {
            dVar7 = *(double *)((int)param_5 + 4);
          }
          uVar13 = (uint)((ulonglong)param_2 >> 0x20);
          if ((iVar2 == 0) || ((*(byte *)(iVar2 + 9) & 0x7f) != 0)) {
            bVar1 = *(byte *)(*(int *)((int)puVar6 + -0x14) +
                              *(int *)(param_3 + 0x20) * *(int *)((int)puVar6 + -0xc) +
                             *(int *)(DAT_8c0906ce + param_3));
            *(int *)((int)puVar6 + -0x14) =
                 *(int *)((int)puVar6 + -0x14) +
                 *(int *)(param_3 + 0x20) * *(int *)((int)puVar6 + -0xc);
            if (bVar1 < 0x1c) {
              if (bVar1 < 0x10) {
LAB_8c090552:
                if (bVar1 == 0) {
                  if (in_FPSCR_SZ == '\0') {
                    param_2 = (double)CONCAT44(uVar13,DAT_8c09059c._4_4_);
                  }
                  else {
                    in_xd8 = (double)CONCAT44(DAT_8c0905a4,DAT_8c09059c._4_4_);
                  }
                }
                else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
                  if (in_FPSCR_SZ == '\0') {
                    param_2 = (double)CONCAT44(uVar13,DAT_8c09059c._4_4_);
                  }
                  else {
                    in_xd8 = (double)CONCAT44(DAT_8c0905a4,DAT_8c09059c._4_4_);
                  }
                }
                else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) || (bVar1 == 0x66))
                {
                  if (in_FPSCR_SZ == '\0') {
                    param_2 = (double)CONCAT44(uVar13,DAT_8c0905a4);
                  }
                  else {
                    in_xd8 = (double)CONCAT44(uRam8c0905a8,DAT_8c0905a4);
                  }
                }
                else if (bVar1 == 0x67) {
                  if (in_FPSCR_SZ == '\0') {
                    param_2 = (double)CONCAT44(uVar13,DAT_8c0905a4);
                  }
                  else {
                    in_xd8 = (double)CONCAT44(uRam8c0905a8,DAT_8c0905a4);
                  }
                }
                else {
                  param_2 = (double)((ulonglong)uVar13 << 0x20);
                }
              }
              else if (in_FPSCR_SZ == '\0') {
                param_2 = (double)CONCAT44(uVar13,DAT_8c0905a4);
              }
              else {
                in_xd8 = (double)CONCAT44(uRam8c0905a8,DAT_8c0905a4);
              }
            }
            else {
              if (0x4b < bVar1) goto LAB_8c090552;
              if ((**(char **)(param_3 + 4) == '\x04') && ((*(char **)(param_3 + 4))[1] == '\x03'))
              {
                param_2 = (double)((ulonglong)uVar13 << 0x20);
              }
              else if (*(short *)(*(int *)(param_3 + 8) + 0x18) == 0) {
                if (in_FPSCR_SZ == '\0') {
                  param_2 = (double)CONCAT44(uVar13,DAT_8c0905a4);
                }
                else {
                  in_xd8 = (double)CONCAT44(uRam8c0905a8,DAT_8c0905a4);
                }
              }
              else if (in_FPSCR_SZ == '\0') {
                param_2 = (double)CONCAT44(uVar13,(undefined4)DAT_8c09059c);
              }
              else {
                in_xd8 = (double)CONCAT44(DAT_8c09059c._4_4_,(undefined4)DAT_8c09059c);
              }
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            param_2 = (double)CONCAT44(uVar13,DAT_8c09059c._4_4_);
          }
          else {
            in_xd8 = (double)CONCAT44(DAT_8c0905a4,DAT_8c09059c._4_4_);
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)((int)param_5 + 4),extraout_fr1_04);
          }
          else {
            dVar7 = *(double *)((int)param_5 + 4);
          }
          param_2 = (double)CONCAT44(uVar5,0x3f800000);
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        param_2 = (double)CONCAT44(uVar5,DAT_8c0906e8);
        dVar7 = (double)CONCAT44(*(undefined4 *)((int)param_5 + 4),extraout_fr1_04);
      }
      else {
        in_xd8 = (double)CONCAT44(PTR_FUN_8c0906ec,DAT_8c0906e8);
        dVar7 = *(double *)((int)param_5 + 4);
      }
      dVar11 = in_xd8;
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(SUB84(param_2,0),uVar3);
      }
      goto LAB_8c090282;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)((int)param_5 + 4),uVar3);
    dVar11 = (double)CONCAT44(DAT_8c0902f8,uVar5);
  }
  else {
    dVar7 = *(double *)((int)param_5 + 4);
    dVar11 = (double)CONCAT44(DAT_8c0902fc,DAT_8c0902f8);
  }
LAB_8c090282:
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),DAT_8c0902fc);
  }
  else {
    in_xd8 = (double)CONCAT44(_DAT_8c090300,DAT_8c0902fc);
  }
  fVar8 = (float)((ulonglong)dVar7 >> 0x20);
  fVar10 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar14 = fVar10 < fVar8;
  }
  else {
    bVar14 = param_2 < dVar7;
  }
  if (bVar14) {
    if (in_FPSCR_SZ == '\0') {
      in_xd8 = (double)CONCAT44(fVar10,SUB84(dVar7,0));
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar14 = fVar8 < 0.0;
    }
    else {
      bVar14 = dVar7 < (double)(ulonglong)param_1;
    }
    in_xd8 = dVar7;
    if (bVar14) {
      if (in_FPSCR_SZ == '\0') {
        in_xd8 = (double)CONCAT44(_DAT_8c090300,SUB84(dVar7,0));
      }
      else {
        in_xd8 = (double)CONCAT44(DAT_8c090304,_DAT_8c090300);
      }
    }
  }
  fVar8 = (float)((ulonglong)dVar11 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    in_xd8 = (double)CONCAT44((float)((ulonglong)in_xd8 >> 0x20) - fVar8,SUB84(in_xd8,0));
  }
  else {
    in_xd8 = in_xd8 - dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)param_5,fVar10);
    *(undefined4 *)param_6 = *(undefined4 *)param_5;
  }
  else {
    dVar7 = *param_5;
    *param_6 = dVar7;
  }
  if (in_FPSCR_PR == '\0') {
    in_xd8 = (double)CONCAT44(ABS((float)((ulonglong)in_xd8 >> 0x20)),SUB84(in_xd8,0));
  }
  else {
    in_xd8 = ABS(in_xd8);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)param_6 + 4) = fVar8;
  }
  else {
    *(double *)((int)param_6 + 4) = dVar11;
  }
  if (in_FPSCR_PR == '\0') {
    in_xd8 = (double)CONCAT44((float)((ulonglong)in_xd8 >> 0x20) / SUB84(dVar7,0),SUB84(in_xd8,0));
  }
  else {
    in_xd8 = in_xd8 / dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)(param_5 + 1),SUB84(dVar7,0));
    *(undefined4 *)(param_6 + 1) = *(undefined4 *)(param_5 + 1);
    puVar9 = DAT_8c090304;
  }
  else {
    dVar11 = param_5[1];
    param_6[1] = dVar11;
    puVar9 = PTR_FUN_8c090308;
  }
  uVar12 = CONCAT44(0x3f800000,SUB84(dVar11,0));
  if (in_FPSCR_PR == '\0') {
    uVar12 = CONCAT44((float)((ulonglong)in_xd8 >> 0x20) * (float)puVar9 + 1.0,SUB84(dVar11,0));
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)*(undefined8 **)((int)puVar6 + 0x1c) = (int)((ulonglong)uVar12 >> 0x20);
  }
  else {
    **(undefined8 **)((int)puVar6 + 0x1c) = uVar12;
  }
  return in_xd8;
}

