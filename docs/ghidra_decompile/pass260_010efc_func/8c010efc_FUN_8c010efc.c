// entry: 8c010efc
// name: FUN_8c010efc
// signature: undefined FUN_8c010efc(void)


/* WARNING: Removing unreachable block (ram,0x8c010fee) */

void FUN_8c010efc(ulonglong param_1,undefined4 param_2,double param_3,uint *param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  uint uVar4;
  double dVar5;
  float fVar7;
  double dVar6;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  double dVar12;
  float fVar14;
  ulonglong in_dr14;
  double in_xd6;
  double in_xd8;
  undefined4 in_PR;
  int iVar15;
  int iVar16;
  int iVar17;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  undefined4 uVar13;
  
  uVar4 = (uint)param_1;
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar3 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar3 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    param_1 = in_dr14 & 0xffffffff;
  }
  if ((*param_4 & 1) != 0) {
    if ((*param_4 & 2) != 0) {
      *(int *)((int)puVar3 + -0xc) = *(int *)(param_4[1] + 0x14) + 0x10;
      (*(code *)PTR_FUN_8c011060)();
      (*(code *)PTR_FUN_8c011064)(*(undefined4 *)((int)puVar3 + -0xc),param_4 + 0x13);
      if ((*param_4 & 4) != 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(param_4[0x15],uVar4);
          fVar7 = *(float *)(DAT_8c011068 + 8);
          param_3 = (double)CONCAT44((int)((ulonglong)param_3 >> 0x20),fVar7);
          dVar6 = (double)CONCAT44(fVar7,param_2);
        }
        else {
          dVar5 = *(double *)(param_4 + 0x15);
          in_xd8 = *(double *)(DAT_8c011068 + 8);
          fVar7 = (float)((ulonglong)in_xd8 >> 0x20);
          dVar6 = in_xd8;
        }
        fVar14 = (float)((ulonglong)dVar5 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar9 = SUB84(param_3,0) - fVar14;
        }
        else {
          fVar9 = SUB84(param_3 - dVar5,0);
        }
        pdVar1 = *(double **)PTR_DAT_8c01106c;
        if (in_FPSCR_SZ == '\0') {
          uVar11 = CONCAT44(*(undefined4 *)((int)pdVar1 + 4),fVar9);
        }
        else {
          uVar11 = *(undefined8 *)((int)pdVar1 + 4);
        }
        fVar9 = (float)uVar11;
        if (in_FPSCR_PR == '\0' && fVar9 < (float)((ulonglong)uVar11 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)((int)pdVar1 + 0xc),fVar9);
            *(undefined4 *)((int)puVar3 + -8) = *(undefined4 *)((int)pdVar1 + 0xc);
          }
          else {
            dVar12 = *(double *)((int)pdVar1 + 0xc);
            *(double *)((int)puVar3 + -8) = dVar12;
          }
        }
        else {
          if (in_FPSCR_PR == '\0') {
            dVar6 = (double)CONCAT44(fVar7 + fVar14,SUB84(dVar6,0));
          }
          else {
            dVar6 = dVar6 + dVar5;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)pdVar1);
          }
          else {
            in_xd6 = *pdVar1;
          }
          fVar7 = SUB84(dVar6,0);
          fVar8 = (float)((ulonglong)dVar6 >> 0x20);
          if (in_FPSCR_PR != '\0' || fVar8 <= fVar7) {
            if (in_FPSCR_SZ == '\0') {
              uVar11 = CONCAT44(*(undefined4 *)((int)pdVar1 + 4),fVar7);
            }
            else {
              uVar11 = *(undefined8 *)((int)pdVar1 + 4);
              in_xd8 = in_xd6;
            }
            fVar9 = (float)((ulonglong)uVar11 >> 0x20);
            dVar12 = (double)CONCAT44(fVar9,-(float)uVar11);
            pdVar2 = pdVar1 + 1;
            if (in_FPSCR_PR == '\0') {
              dVar5 = (double)CONCAT44(fVar14 + -(float)uVar11,SUB84(dVar5,0));
              dVar6 = (double)CONCAT44(fVar8,fVar7 - fVar9);
            }
            else {
              dVar5 = dVar5 + dVar12;
              dVar6 = dVar6 - dVar12;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar2,*(undefined4 *)((int)pdVar1 + 0xc));
            }
            else {
              dVar12 = *pdVar2;
              in_xd8 = *(double *)((int)pdVar1 + 0xc);
            }
            if (in_FPSCR_PR == '\0') {
              dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - SUB84(dVar12,0),
                                        SUB84(dVar12,0));
              dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),ABS(SUB84(dVar6,0)));
            }
            else {
              dVar12 = dVar12 - dVar12;
              dVar6 = ABS(dVar6);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),*(undefined4 *)pdVar2);
            }
            else {
              in_xd8 = *pdVar2;
            }
            if (in_FPSCR_PR == '\0') {
              fVar7 = (ABS((float)((ulonglong)dVar12 >> 0x20)) * (float)((ulonglong)dVar5 >> 0x20))
                      / SUB84(dVar6,0);
              dVar12 = (double)CONCAT44(fVar7,SUB84(dVar12,0) + fVar7);
            }
            else {
              dVar12 = (ABS(dVar12) * dVar5) / dVar6;
              dVar12 = dVar12 + dVar12;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar3 + -8) = SUB84(dVar12,0);
            }
            else {
              *(double *)((int)puVar3 + -8) = in_xd8;
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            uVar13 = *(undefined4 *)(pdVar1 + 1);
            dVar12 = (double)CONCAT44(uVar13,fVar9);
            *(undefined4 *)((int)puVar3 + -8) = uVar13;
          }
          else {
            dVar12 = pdVar1[1];
            *(double *)((int)puVar3 + -8) = dVar12;
          }
        }
        uVar4 = SUB84(dVar5,0);
        uVar13 = SUB84(dVar6,0);
        uVar10 = SUB84(dVar12,0);
        (*(code *)PTR_FUN_8c011074)(*(undefined4 *)((int)puVar3 + -0xc),DAT_8c011070);
        if (in_FPSCR_SZ == '\0') {
          uVar10 = *(undefined4 *)((int)puVar3 + -8);
        }
        else {
          in_xd8 = *(double *)((int)puVar3 + -8);
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd8 = (double)CONCAT44(uVar10,DAT_8c01107c);
          dVar5 = (double)CONCAT44(DAT_8c011080,uVar13);
        }
        else {
          dVar5 = (double)CONCAT44(PTR_FUN_8c011084,DAT_8c011080);
        }
        if (in_FPSCR_PR == '\0') {
          iVar15 = (int)(((float)((ulonglong)in_xd8 >> 0x20) * SUB84(in_xd8,0)) /
                        (float)((ulonglong)dVar5 >> 0x20));
        }
        else {
          iVar15 = (int)((in_xd8 * in_xd8) / dVar5);
        }
        (*(code *)PTR_FUN_8c011084)(*(undefined4 *)((int)puVar3 + -0xc),*DAT_8c011078 - iVar15);
        param_2 = SUB84(dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(param_4[0x16],DAT_8c01107c);
        dVar6 = (double)CONCAT44(DAT_8c011080,param_2);
      }
      else {
        dVar5 = *(double *)(param_4 + 0x16);
        dVar6 = (double)CONCAT44(PTR_FUN_8c011084,DAT_8c011080);
      }
      fVar7 = (float)((ulonglong)dVar6 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar14 = ((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0)) / fVar7;
        dVar5 = (double)CONCAT44(fVar14,SUB84(dVar5,0));
        iVar15 = (int)fVar14;
      }
      else {
        dVar5 = (dVar5 * dVar5) / dVar6;
        iVar15 = (int)dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(param_4[0x17],SUB84(dVar5,0));
      }
      else {
        dVar5 = *(double *)(param_4 + 0x17);
      }
      if (in_FPSCR_PR == '\0') {
        fVar14 = ((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0)) / fVar7;
        dVar5 = (double)CONCAT44(fVar14,SUB84(dVar5,0));
        iVar16 = (int)fVar14;
      }
      else {
        dVar5 = (dVar5 * dVar5) / dVar6;
        iVar16 = (int)dVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(param_4[0x18],SUB84(dVar5,0));
      }
      else {
        dVar5 = *(double *)(param_4 + 0x18);
      }
      if (in_FPSCR_PR == '\0') {
        iVar17 = (int)(((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0)) / fVar7);
      }
      else {
        iVar17 = (int)((dVar5 * dVar5) / dVar6);
      }
      (*(code *)PTR_FUN_8c011088)(*(undefined4 *)((int)puVar3 + -0xc),iVar15,iVar16,iVar17);
      (*(code *)PTR_FUN_8c01108c)(*(undefined4 *)((int)puVar3 + -0xc),param_4 + 0x19);
      *param_4 = *param_4 & 0xfffffffd;
    }
    if (in_FPSCR_SZ == '\0') {
      param_1 = (ulonglong)uVar4;
    }
    (*(code *)PTR_FUN_8c011090)(param_1,param_4[1]);
  }
  return;
}

