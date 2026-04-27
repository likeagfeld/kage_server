// entry: 8c087bf8
// name: FUN_8c087bf8
// signature: undefined FUN_8c087bf8(void)


undefined4
FUN_8c087bf8(undefined4 param_1,double param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint extraout_fr0;
  undefined4 uVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar20;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  undefined8 in_xd6;
  bool bVar22;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_38 [4];
  undefined8 local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float fVar21;
  
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x6c),param_1);
  }
  else {
    dVar12 = *(double *)(param_5 + 0x6c);
  }
  pfVar10 = (float *)(param_5 + 0x1c);
  iVar4 = (*(code *)PTR_FUN_8c087d0c)(param_5 + 0x2c,pfVar10);
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (iVar4 == 0) {
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44(uVar7,*pfVar10);
    }
    else {
      in_xd6 = *(undefined8 *)pfVar10;
    }
    dVar15 = (double)((ulonglong)extraout_fr0 << 0x20);
    fVar14 = SUB84(param_2,0);
    if (in_FPSCR_PR == '\0') {
      bVar22 = 0.0 < fVar14;
    }
    else {
      bVar22 = dVar15 < param_2;
    }
    pfVar9 = (float *)(param_5 + 0x24);
    uVar7 = SUB84(dVar12,0);
    if (bVar22) {
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(0x40000000,uVar7);
      }
      else {
        dVar12 = (double)CONCAT44(0x3f800000,uVar7) + (double)CONCAT44(0x3f800000,uVar7);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),DAT_8c087d10);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar14);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar16 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),param_3);
      }
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar16 >> 0x20) / fVar14 + SUB84(dVar12,0);
        dVar16 = (double)CONCAT44(fVar20,SUB84(dVar16,0));
        bVar22 = SUB84(param_2,0) < fVar20;
      }
      else {
        dVar16 = dVar16 / dVar12 + dVar12;
        bVar22 = param_2 < dVar16;
      }
      param_3 = SUB84(dVar16,0);
      while (!bVar22) {
                    /* WARNING: Read-only address (ram,0x8c087f5c) is written */
                    /* WARNING: Read-only address (ram,0x8c0881a4) is written */
                    /* WARNING: Read-only address (ram,0x8c0882b8) is written */
        if (in_FPSCR_PR == '\0') {
          fVar20 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar20 = SUB84(param_2 - param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar10 = fVar20;
        }
        else {
          *(undefined8 *)pfVar10 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar20);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar18 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar16,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar20 = (float)((ulonglong)dVar18 >> 0x20) / fVar14 + SUB84(dVar12,0);
          dVar16 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
          bVar22 = SUB84(param_2,0) < fVar20;
        }
        else {
          dVar16 = dVar18 / dVar12 + dVar12;
          bVar22 = param_2 < dVar16;
        }
        param_3 = SUB84(dVar16,0);
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar22 = fVar14 < 0.0;
      }
      else {
        bVar22 = param_2 < dVar15;
      }
      if (bVar22) {
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44(0x40000000,uVar7);
        }
        else {
          dVar12 = (double)CONCAT44(0x3f800000,uVar7) + (double)CONCAT44(0x3f800000,uVar7);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)((ulonglong)DAT_8c087f58 << 0x20);
        }
        else {
          dVar15 = (double)CONCAT44(uRam8c087f5c,DAT_8c087f58);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar14);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar16 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),param_3);
        }
        fVar20 = (float)((ulonglong)dVar12 >> 0x20);
        fVar14 = (float)((ulonglong)dVar15 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar21 = -((float)((ulonglong)dVar16 >> 0x20) / fVar20 + fVar14);
          dVar16 = (double)CONCAT44(fVar21,SUB84(dVar16,0));
          bVar22 = fVar21 < SUB84(param_2,0);
        }
        else {
          dVar16 = -(dVar16 / dVar12 + dVar15);
          bVar22 = dVar16 < param_2;
        }
        param_3 = SUB84(dVar16,0);
        while (!bVar22) {
          if (in_FPSCR_PR == '\0') {
            fVar21 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
          }
          else {
            fVar21 = SUB84(param_2 + param_2,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar10 = fVar21;
          }
          else {
            *(undefined8 *)pfVar10 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar21);
          }
          else {
            param_2 = (double)*(int *)(param_4 + 0x20);
          }
          dVar18 = param_2;
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar16,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar21 = -((float)((ulonglong)dVar18 >> 0x20) / fVar20 + fVar14);
            dVar16 = (double)CONCAT44(fVar21,SUB84(dVar18,0));
            bVar22 = fVar21 < SUB84(param_2,0);
          }
          else {
            dVar16 = -(dVar18 / dVar12 + dVar15);
            bVar22 = dVar16 < param_2;
          }
          param_3 = SUB84(dVar16,0);
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar9);
    }
    else {
      in_xd6 = *(undefined8 *)pfVar9;
    }
    fVar14 = SUB84(dVar15,0);
    fVar20 = SUB84(param_2,0);
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar14 < fVar20;
    }
    else {
      bVar22 = dVar15 < param_2;
    }
    uVar7 = SUB84(dVar12,0);
    if (bVar22) {
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(0x40000000,uVar7);
      }
      else {
        dVar12 = (double)CONCAT44(0x3f800000,uVar7) + (double)CONCAT44(0x3f800000,uVar7);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),DAT_8c087d10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
      }
      else {
        dVar15 = (double)*(int *)(param_4 + 0x24);
      }
      dVar16 = dVar15;
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),param_3);
      }
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar16 >> 0x20) / fVar14 + SUB84(dVar12,0);
        dVar16 = (double)CONCAT44(fVar20,SUB84(dVar16,0));
        bVar22 = SUB84(dVar15,0) < fVar20;
      }
      else {
        dVar16 = dVar16 / dVar12 + dVar12;
        bVar22 = dVar15 < dVar16;
      }
      while (!bVar22) {
                    /* WARNING: Read-only address (ram,0x8c087f5c) is written */
                    /* WARNING: Read-only address (ram,0x8c0881a4) is written */
                    /* WARNING: Read-only address (ram,0x8c0882b8) is written */
        if (in_FPSCR_PR == '\0') {
          fVar20 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
        }
        else {
          fVar20 = SUB84(dVar15 - dVar15,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar9 = fVar20;
        }
        else {
          *(undefined8 *)pfVar9 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
        }
        else {
          dVar15 = (double)*(int *)(param_4 + 0x24);
        }
        dVar18 = dVar15;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar16,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar20 = (float)((ulonglong)dVar18 >> 0x20) / fVar14 + SUB84(dVar12,0);
          dVar16 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
          bVar22 = SUB84(dVar15,0) < fVar20;
        }
        else {
          dVar16 = dVar18 / dVar12 + dVar12;
          bVar22 = dVar15 < dVar16;
        }
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar22 = fVar20 < fVar14;
      }
      else {
        bVar22 = param_2 < dVar15;
      }
      if (bVar22) {
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44(0x40000000,uVar7);
        }
        else {
          dVar12 = (double)CONCAT44(0x3f800000,uVar7) + (double)CONCAT44(0x3f800000,uVar7);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = (double)CONCAT44(DAT_8c087f58,fVar14);
        }
        else {
          dVar15 = (double)CONCAT44(uRam8c087f5c,DAT_8c087f58);
        }
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
        }
        else {
          dVar16 = (double)*(int *)(param_4 + 0x24);
        }
        dVar18 = dVar16;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),param_3);
        }
        fVar20 = (float)((ulonglong)dVar12 >> 0x20);
        fVar14 = (float)((ulonglong)dVar15 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar21 = -((float)((ulonglong)dVar18 >> 0x20) / fVar20 + fVar14);
          dVar18 = (double)CONCAT44(fVar21,SUB84(dVar18,0));
          bVar22 = fVar21 < SUB84(dVar16,0);
        }
        else {
          dVar18 = -(dVar18 / dVar12 + dVar15);
          bVar22 = dVar18 < dVar16;
        }
        while (!bVar22) {
          if (in_FPSCR_PR == '\0') {
            fVar21 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
          }
          else {
            fVar21 = SUB84(dVar16 + dVar16,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *pfVar9 = fVar21;
          }
          else {
            *(undefined8 *)pfVar9 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar21);
          }
          else {
            dVar16 = (double)*(int *)(param_4 + 0x24);
          }
          dVar19 = dVar16;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar18,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar21 = -((float)((ulonglong)dVar19 >> 0x20) / fVar20 + fVar14);
            dVar18 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
            bVar22 = fVar21 < SUB84(dVar16,0);
          }
          else {
            dVar18 = -(dVar19 / dVar12 + dVar15);
            bVar22 = dVar18 < dVar16;
          }
        }
      }
    }
    puVar3 = PTR_FUN_8c087d14;
    if (in_FPSCR_SZ == '\0') {
      uVar13 = CONCAT44(*(undefined4 *)(param_5 + 0x1c),*(undefined4 *)(param_5 + 0x24));
    }
    else {
      uVar13 = *(undefined8 *)(param_5 + 0x1c);
    }
    (*(code *)PTR_FUN_8c087d18)(uVar13,param_4,param_5 + 2);
    iVar4 = (*(code *)puVar3)();
    iVar5 = (*(code *)puVar3)();
    iVar6 = (*(code *)PTR_FUN_8c087d1c)(param_4,iVar4,iVar5);
    if (((iVar6 == 0) || ((*(byte *)(iVar6 + 9) & 0x7f) == 3)) ||
       ((*(byte *)(iVar6 + 9) & 0x7f) == 4)) {
      iVar6 = iVar5 * *(int *)(param_4 + 0x20) + iVar4;
      iVar8 = iVar6 * 4;
      if (*(int *)(iVar8 + *(int *)(DAT_8c08807c + param_4)) == 0) {
        if (*(int *)(iVar8 + *(int *)(DAT_8c08807e + param_4)) == 0) {
          cVar1 = *(char *)(iVar6 + *(int *)(DAT_8c088080 + param_4));
          if (cVar1 == 'b') {
            bVar22 = true;
          }
          else if (*(int *)(iVar8 + *(int *)(DAT_8c088082 + param_4)) == 0) {
            iVar6 = *(int *)((*(int *)(param_4 + 0x20) * iVar5 + iVar4) * 4 +
                            *(int *)(DAT_8c088084 + param_4));
            if (iVar6 == 0) {
              bVar22 = false;
            }
            else {
              bVar22 = *(int *)(iVar6 + 8) == 2;
            }
            if (bVar22) {
              bVar22 = true;
            }
            else {
              if (*(int *)(DAT_8c088086 + param_4) == 0) {
                bVar22 = false;
              }
              else {
                bVar22 = *(int *)((*(int *)(param_4 + 0x20) * iVar5 + iVar4) * 4 +
                                 *(int *)(DAT_8c088086 + param_4)) != 0;
              }
              if (bVar22) {
                bVar22 = true;
              }
              else if (((((((cVar1 == '\0') || (cVar1 == '\x02')) || (cVar1 == 'P')) ||
                         ((cVar1 == 'Q' || (cVar1 == 'R')))) ||
                        (((cVar1 == 'S' || ((cVar1 == 'T' || (cVar1 == 'U')))) || (cVar1 == 'V'))))
                       || ((((cVar1 == 'W' || (cVar1 == 'X')) || (cVar1 == 'Y')) ||
                           ((cVar1 == '[' || (cVar1 == ']')))))) ||
                      ((cVar1 == '_' || ((cVar1 == '`' || (cVar1 == 'm')))))) {
                bVar22 = true;
              }
              else {
                bVar22 = false;
              }
            }
          }
          else {
            bVar22 = true;
          }
        }
        else {
          bVar22 = true;
        }
      }
      else {
        bVar22 = true;
      }
    }
    else {
      bVar22 = true;
    }
    if (!bVar22) {
      return 0;
    }
    goto LAB_8c087df8;
  }
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44(uVar7,*pfVar10);
    dVar15 = (double)CONCAT44(*(undefined4 *)(param_5 + 0x6c),param_3);
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),DAT_8c087e74);
  }
  else {
    in_xd6 = *(undefined8 *)pfVar10;
    dVar15 = *(double *)(param_5 + 0x6c);
  }
  dVar16 = (double)((ulonglong)extraout_fr0 << 0x20);
  fVar14 = SUB84(dVar12,0);
  fVar20 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + fVar14,SUB84(dVar15,0));
    bVar22 = 0.0 < fVar20;
  }
  else {
    dVar15 = dVar15 + dVar12;
    bVar22 = dVar16 < param_2;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(param_5 + 0x6c) = (int)((ulonglong)dVar15 >> 0x20);
  }
  else {
    *(double *)(param_5 + 0x6c) = dVar15;
  }
  pfVar9 = (float *)(param_5 + 0x24);
  if (bVar22) {
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44(0x40000000,fVar14);
      param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar20);
    }
    else {
      dVar12 = (double)CONCAT44(0x3f800000,fVar14) + (double)CONCAT44(0x3f800000,fVar14);
      param_2 = (double)*(int *)(param_4 + 0x20);
    }
    dVar18 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar15,0));
    }
    fVar14 = (float)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar20 = (float)((ulonglong)dVar18 >> 0x20) / fVar14 + SUB84(dVar12,0);
      dVar15 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
      bVar22 = SUB84(param_2,0) < fVar20;
    }
    else {
      dVar15 = dVar18 / dVar12 + dVar12;
      bVar22 = param_2 < dVar15;
    }
    while (!bVar22) {
                    /* WARNING: Read-only address (ram,0x8c087f5c) is written */
                    /* WARNING: Read-only address (ram,0x8c0881a4) is written */
                    /* WARNING: Read-only address (ram,0x8c0882b8) is written */
      if (in_FPSCR_PR == '\0') {
        fVar20 = SUB84(param_2,0) - (float)((ulonglong)param_2 >> 0x20);
      }
      else {
        fVar20 = SUB84(param_2 - param_2,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar10 = fVar20;
      }
      else {
        *(undefined8 *)pfVar10 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar20);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar18 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar15,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar18 >> 0x20) / fVar14 + SUB84(dVar12,0);
        dVar15 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
        bVar22 = SUB84(param_2,0) < fVar20;
      }
      else {
        dVar15 = dVar18 / dVar12 + dVar12;
        bVar22 = param_2 < dVar15;
      }
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar20 < 0.0;
    }
    else {
      bVar22 = param_2 < dVar16;
    }
    if (bVar22) {
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(0x40000000,fVar14);
      }
      else {
        dVar12 = (double)CONCAT44(0x3f800000,fVar14) + (double)CONCAT44(0x3f800000,fVar14);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)((ulonglong)DAT_8c087e90 << 0x20);
      }
      else {
        dVar16 = (double)CONCAT44(PTR_FUN_8c087e94,DAT_8c087e90);
      }
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar20);
      }
      else {
        param_2 = (double)*(int *)(param_4 + 0x20);
      }
      dVar18 = param_2;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar15,0));
      }
      fVar20 = (float)((ulonglong)dVar12 >> 0x20);
      fVar14 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar21 = -((float)((ulonglong)dVar18 >> 0x20) / fVar20 + fVar14);
        dVar15 = (double)CONCAT44(fVar21,SUB84(dVar18,0));
        bVar22 = fVar21 < SUB84(param_2,0);
      }
      else {
        dVar15 = -(dVar18 / dVar12 + dVar16);
        bVar22 = dVar15 < param_2;
      }
      while (!bVar22) {
        if (in_FPSCR_PR == '\0') {
          fVar21 = SUB84(param_2,0) + (float)((ulonglong)param_2 >> 0x20);
        }
        else {
          fVar21 = SUB84(param_2 + param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar10 = fVar21;
        }
        else {
          *(undefined8 *)pfVar10 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar21);
        }
        else {
          param_2 = (double)*(int *)(param_4 + 0x20);
        }
        dVar18 = param_2;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar15,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar21 = -((float)((ulonglong)dVar18 >> 0x20) / fVar20 + fVar14);
          dVar15 = (double)CONCAT44(fVar21,SUB84(dVar18,0));
          bVar22 = fVar21 < SUB84(param_2,0);
        }
        else {
          dVar15 = -(dVar18 / dVar12 + dVar16);
          bVar22 = dVar15 < param_2;
        }
      }
    }
  }
  uVar7 = SUB84(dVar15,0);
  if (in_FPSCR_SZ == '\0') {
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),*pfVar9);
  }
  else {
    in_xd6 = *(undefined8 *)pfVar9;
  }
  fVar14 = SUB84(dVar16,0);
  fVar20 = SUB84(param_2,0);
  if (in_FPSCR_PR == '\0') {
    bVar22 = fVar14 < fVar20;
  }
  else {
    bVar22 = dVar16 < param_2;
  }
  uVar11 = SUB84(dVar12,0);
  if (bVar22) {
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44(0x40000000,uVar11);
      dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
    }
    else {
      dVar12 = (double)CONCAT44(0x3f800000,uVar11) + (double)CONCAT44(0x3f800000,uVar11);
      dVar15 = (double)*(int *)(param_4 + 0x24);
    }
    dVar16 = dVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uVar7);
    }
    fVar14 = (float)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar20 = (float)((ulonglong)dVar16 >> 0x20) / fVar14 + SUB84(dVar12,0);
      dVar16 = (double)CONCAT44(fVar20,SUB84(dVar16,0));
      bVar22 = SUB84(dVar15,0) < fVar20;
    }
    else {
      dVar16 = dVar16 / dVar12 + dVar12;
      bVar22 = dVar15 < dVar16;
    }
    uVar7 = SUB84(dVar16,0);
    while (!bVar22) {
                    /* WARNING: Read-only address (ram,0x8c087f5c) is written */
                    /* WARNING: Read-only address (ram,0x8c0881a4) is written */
                    /* WARNING: Read-only address (ram,0x8c0882b8) is written */
      if (in_FPSCR_PR == '\0') {
        fVar20 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar20 = SUB84(dVar15 - dVar15,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *pfVar9 = fVar20;
      }
      else {
        *(undefined8 *)pfVar9 = in_xd6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
      }
      else {
        dVar15 = (double)*(int *)(param_4 + 0x24);
      }
      dVar18 = dVar15;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar16,0));
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar18 >> 0x20) / fVar14 + SUB84(dVar12,0);
        dVar16 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
        bVar22 = SUB84(dVar15,0) < fVar20;
      }
      else {
        dVar16 = dVar18 / dVar12 + dVar12;
        bVar22 = dVar15 < dVar16;
      }
      uVar7 = SUB84(dVar16,0);
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar20 < fVar14;
    }
    else {
      bVar22 = param_2 < dVar16;
    }
    if (bVar22) {
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44(0x40000000,uVar11);
      }
      else {
        dVar12 = (double)CONCAT44(0x3f800000,uVar11) + (double)CONCAT44(0x3f800000,uVar11);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(DAT_8c087f58,fVar14);
      }
      else {
        dVar15 = (double)CONCAT44(uRam8c087f5c,DAT_8c087f58);
      }
      if (in_FPSCR_PR == '\0') {
        dVar16 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar20);
      }
      else {
        dVar16 = (double)*(int *)(param_4 + 0x24);
      }
      dVar18 = dVar16;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),uVar7);
      }
      fVar20 = (float)((ulonglong)dVar12 >> 0x20);
      fVar14 = (float)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar21 = -((float)((ulonglong)dVar18 >> 0x20) / fVar20 + fVar14);
        dVar18 = (double)CONCAT44(fVar21,SUB84(dVar18,0));
        bVar22 = fVar21 < SUB84(dVar16,0);
      }
      else {
        dVar18 = -(dVar18 / dVar12 + dVar15);
        bVar22 = dVar18 < dVar16;
      }
      uVar7 = SUB84(dVar18,0);
      while (!bVar22) {
        if (in_FPSCR_PR == '\0') {
          fVar21 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          fVar21 = SUB84(dVar16 + dVar16,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *pfVar9 = fVar21;
        }
        else {
          *(undefined8 *)pfVar9 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),fVar21);
        }
        else {
          dVar16 = (double)*(int *)(param_4 + 0x24);
        }
        dVar19 = dVar16;
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar18,0));
        }
        if (in_FPSCR_PR == '\0') {
          fVar21 = -((float)((ulonglong)dVar19 >> 0x20) / fVar20 + fVar14);
          dVar18 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
          bVar22 = fVar21 < SUB84(dVar16,0);
        }
        else {
          dVar18 = -(dVar19 / dVar12 + dVar15);
          bVar22 = dVar18 < dVar16;
        }
        uVar7 = SUB84(dVar18,0);
      }
    }
  }
  puVar3 = PTR_FUN_8c087e78;
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)(param_5 + 0x1c),*(undefined4 *)(param_5 + 0x24));
  }
  else {
    uVar13 = *(undefined8 *)(param_5 + 0x1c);
  }
  (*(code *)PTR_FUN_8c087e7c)(uVar13,param_4,param_5 + 2);
  iVar4 = (*(code *)puVar3)();
  iVar5 = (*(code *)puVar3)();
  (*(code *)PTR_FUN_8c087e80)(param_4,iVar4,iVar5,1);
  iVar6 = *(int *)((*(int *)(param_4 + 0x20) * iVar5 + iVar4) * 4 + *(int *)(DAT_8c087e70 + param_4)
                  );
  if ((iVar6 == 0) || (*(int *)(iVar6 + 8) != 2)) {
    if (*(int *)((*(int *)(param_4 + 0x20) * iVar5 + iVar4) * 4 + *(int *)(DAT_8c0882a4 + param_4))
        == 0) {
      iVar6 = (*(code *)PTR_FUN_8c0882ac)(param_4,iVar4,iVar5);
      if ((iVar6 == 0) || ((*(byte *)(iVar6 + 9) & 0x7f) != 0)) {
        bVar2 = *(byte *)(iVar5 * *(int *)(param_4 + 0x20) + iVar4 +
                         *(int *)(DAT_8c0882a6 + param_4));
        if (bVar2 < 0x1c) {
          if (0xf < bVar2) {
LAB_8c08827a:
            if (bVar2 < 0x1c) {
              if (in_FPSCR_SZ == '\0') {
                uVar7 = DAT_8c0882a8;
              }
              goto LAB_8c087dec;
            }
          }
          if (bVar2 == 0) {
            if (in_FPSCR_SZ == '\0') {
              uVar7 = DAT_8c0882b4;
            }
          }
          else if ((bVar2 == 0x5f) || (bVar2 == 0x60)) {
            if (in_FPSCR_SZ == '\0') {
              uVar7 = DAT_8c0882b4;
            }
          }
          else if ((((bVar2 == 99) || (bVar2 == 100)) || (bVar2 == 0x65)) || (bVar2 == 0x66)) {
            if (in_FPSCR_SZ == '\0') {
              uVar7 = DAT_8c0882a8;
            }
          }
          else if (bVar2 == 0x67) {
            if (in_FPSCR_SZ == '\0') {
              uVar7 = DAT_8c0882a8;
            }
          }
          else {
            uVar7 = 0;
          }
        }
        else {
          if (0x4b < bVar2) goto LAB_8c08827a;
          if ((**(char **)(param_4 + 4) == '\x04') && ((*(char **)(param_4 + 4))[1] == '\x03')) {
            uVar7 = 0;
          }
          else if (*(short *)(*(int *)(param_4 + 8) + 0x18) == 0) {
            if (in_FPSCR_SZ == '\0') {
              uVar7 = DAT_8c0882a8;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            uVar7 = DAT_8c0882b0;
          }
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        uVar7 = DAT_8c0882b4;
      }
    }
    else {
      uVar7 = 0x3f800000;
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    uVar7 = DAT_8c087e84;
  }
LAB_8c087dec:
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)(param_5 + 0x20),uVar7);
  }
  else {
    uVar17 = *(ulonglong *)(param_5 + 0x20);
  }
  if (in_FPSCR_PR != '\0' || (float)uVar17 <= (float)(uVar17 >> 0x20)) {
    local_2c = *(int *)(DAT_8c08831e + param_4);
    iVar4 = (*(code *)PTR___bfxbu_8c088328)();
    local_28 = local_2c + DAT_8c088320 * iVar4 + 2;
    (*(code *)PTR_FUN_8c08832c)(*(undefined4 *)(param_4 + 8),auStack_38,(int)&local_34 + 4);
    local_24 = (*(code *)puVar3)();
    local_20 = (*(code *)puVar3)();
    (*(code *)PTR_FUN_8c088330)(param_4,local_24,local_20,1);
    iVar4 = *(int *)((*(int *)(param_4 + 0x20) * local_20 + local_24) * 4 +
                    *(int *)(DAT_8c088324 + param_4));
    if ((iVar4 == 0) || (*(int *)(iVar4 + 8) != 2)) {
      if (*(int *)((*(int *)(param_4 + 0x20) * local_20 + local_24) * 4 +
                  *(int *)(DAT_8c088190 + param_4)) == 0) {
        iVar4 = (*(code *)PTR_FUN_8c088194)(param_4,local_24,local_20);
        uVar7 = (undefined4)uVar17;
        if ((iVar4 == 0) || ((*(byte *)(iVar4 + 9) & 0x7f) != 0)) {
          bVar2 = *(byte *)(local_20 * *(int *)(param_4 + 0x20) + local_24 +
                           *(int *)(DAT_8c088192 + param_4));
          if ((bVar2 < 0x1c) || (0x4b < bVar2)) {
            if ((bVar2 < 0x10) || (0x1b < bVar2)) {
              if (bVar2 == 0) {
                if (in_FPSCR_SZ == '\0') {
                  uVar17 = CONCAT44(DAT_8c088198._4_4_,uVar7);
                }
                else {
                  uVar17 = CONCAT44(DAT_8c0881a0,DAT_8c088198._4_4_);
                }
              }
              else if ((bVar2 == 0x5f) || (bVar2 == 0x60)) {
                if (in_FPSCR_SZ == '\0') {
                  uVar17 = CONCAT44(DAT_8c088198._4_4_,uVar7);
                }
                else {
                  uVar17 = CONCAT44(DAT_8c0881a0,DAT_8c088198._4_4_);
                }
              }
              else if ((((bVar2 == 99) || (bVar2 == 100)) || (bVar2 == 0x65)) || (bVar2 == 0x66)) {
                if (in_FPSCR_SZ == '\0') {
                  uVar17 = CONCAT44((undefined4)DAT_8c088198,uVar7);
                }
                else {
                  uVar17 = CONCAT44(DAT_8c088198._4_4_,(undefined4)DAT_8c088198);
                }
              }
              else if (bVar2 == 0x67) {
                if (in_FPSCR_SZ == '\0') {
                  uVar17 = CONCAT44((undefined4)DAT_8c088198,uVar7);
                }
                else {
                  uVar17 = CONCAT44(DAT_8c088198._4_4_,(undefined4)DAT_8c088198);
                }
              }
              else {
                uVar17 = uVar17 & 0xffffffff;
              }
            }
            else if (in_FPSCR_SZ == '\0') {
              uVar17 = CONCAT44(DAT_8c0882a8,uVar7);
            }
            else {
              uVar17 = CONCAT44(PTR_FUN_8c0882ac,DAT_8c0882a8);
            }
          }
          else if ((**(char **)(param_4 + 4) == '\x04') && ((*(char **)(param_4 + 4))[1] == '\x03'))
          {
            uVar17 = uVar17 & 0xffffffff;
          }
          else if (*(short *)(*(int *)(param_4 + 8) + 0x18) == 0) {
            if (in_FPSCR_SZ == '\0') {
              uVar17 = CONCAT44((undefined4)DAT_8c088198,uVar7);
            }
            else {
              uVar17 = CONCAT44(DAT_8c088198._4_4_,(undefined4)DAT_8c088198);
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            uVar17 = CONCAT44(DAT_8c0881a0,uVar7);
          }
          else {
            uVar17 = CONCAT44(uRam8c0881a4,DAT_8c0881a0);
          }
        }
        else if (in_FPSCR_SZ == '\0') {
          uVar17 = CONCAT44(DAT_8c088198._4_4_,uVar7);
        }
        else {
          uVar17 = CONCAT44(DAT_8c0881a0,DAT_8c088198._4_4_);
        }
      }
      else {
        uVar17 = CONCAT44(0x3f800000,(int)uVar17);
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(DAT_8c087e84,(int)uVar17);
    }
    else {
      uVar17 = CONCAT44(PTR___bfxbu_8c087e88,DAT_8c087e84);
    }
    if (in_FPSCR_SZ == '\0') {
      local_34 = CONCAT44(local_34._4_4_,(int)(uVar17 >> 0x20));
      uVar17 = local_34;
    }
    local_34 = uVar17;
    (*(code *)PTR_FUN_8c087e94)(param_5 + 0x2c,auStack_38);
    return 1;
  }
LAB_8c087df8:
  uVar7 = (*(code *)PTR___bfxbu_8c087e88)();
  (*(code *)PTR_FUN_8c087e8c)(param_4,param_5,uVar7,0);
                    /* WARNING: Read-only address (ram,0x8c087f5c) is written */
                    /* WARNING: Read-only address (ram,0x8c0881a4) is written */
                    /* WARNING: Read-only address (ram,0x8c0882b8) is written */
  return 1;
}

