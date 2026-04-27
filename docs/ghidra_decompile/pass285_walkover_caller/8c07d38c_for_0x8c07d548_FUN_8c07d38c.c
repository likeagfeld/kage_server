// query addr: 0x8c07d548
// containing entry: 8c07d38c
// name: FUN_8c07d38c
// signature: undefined FUN_8c07d38c(void)
// body addrs: 1190


/* WARNING: Removing unreachable block (ram,0x8c07d562) */

void FUN_8c07d38c(float param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  undefined1 *puVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  float fVar20;
  undefined8 in_dr12;
  double dVar21;
  undefined8 in_dr14;
  undefined8 in_xd8;
  bool bVar22;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_34 [8];
  undefined8 local_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar14 = (undefined1 *)((int)&local_2c + 4);
    local_2c = CONCAT44((int)in_dr14,(undefined4)local_2c);
  }
  else {
    puVar14 = local_34;
    uStack_24 = in_dr12;
    local_2c = in_dr14;
  }
  *(undefined4 *)(puVar14 + -4) = in_PR;
  iVar8 = *(int *)(param_4 + 4);
  if (in_FPSCR_SZ == '\0') {
    *(float *)(param_4 + 0x1c) = param_1;
    dVar17 = (double)CONCAT44(*(undefined4 *)(param_4 + 0x18),param_3);
  }
  else {
    *(ulonglong *)(param_4 + 0x1c) = CONCAT44(param_1,param_2);
    dVar17 = *(double *)(param_4 + 0x18);
  }
  puVar3 = PTR_DAT_8c07d510;
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + param_1,SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 + (double)CONCAT44(param_1,param_2);
  }
  *(int *)(puVar14 + -0x20) = param_4;
  uVar10 = (undefined4)((ulonglong)dVar17 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(param_4 + 0x18) = uVar10;
    dVar17 = (double)CONCAT44(uVar10,*(undefined4 *)(param_4 + 0x14));
  }
  else {
    *(double *)(param_4 + 0x18) = dVar17;
    in_xd8 = *(undefined8 *)(param_4 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    param_1 = SUB84(dVar17,0) - param_1;
  }
  else {
    param_1 = SUB84(dVar17 - (double)CONCAT44(param_1,param_2),0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(param_4 + 0x14) = param_1;
  }
  else {
    *(undefined8 *)(param_4 + 0x14) = in_xd8;
  }
  iVar8 = (uint)*(byte *)(DAT_8c07d4fc + iVar8) * 4;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)(puVar3 + iVar8),param_1);
  }
  else {
    uVar18 = *(undefined8 *)(puVar3 + iVar8);
  }
  if (in_FPSCR_PR == '\0' && (float)uVar18 < (float)((ulonglong)uVar18 >> 0x20)) {
    **(uint **)(puVar14 + -0x20) = **(uint **)(puVar14 + -0x20) | 4;
  }
  iVar8 = *(int *)(puVar14 + -0x20);
  (*(code *)PTR__memset_8c07d514)(iVar8 + DAT_8c07d4fe,0,4);
  uVar10 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  dVar17 = (double)CONCAT44(uVar10,0x3f800000);
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44(uVar10,0x40000000);
  }
  else {
    dVar17 = dVar17 + dVar17;
  }
  (*(code *)PTR__memset_8c07d514)(iVar8 + DAT_8c07d500,0,0xf);
  iVar5 = (int)DAT_8c07d502;
  *(undefined4 *)(iVar8 + 0x38) = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x1c),*(undefined4 *)(iVar5 + iVar8));
  }
  else {
    in_xd8 = *(undefined8 *)(iVar5 + iVar8);
    dVar19 = *(double *)(iVar8 + 0x1c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)((ulonglong)dVar19 >> 0x20);
    fVar15 = SUB84(dVar19,0) + fVar16;
    dVar19 = (double)CONCAT44(fVar16,fVar15);
    bVar22 = fVar15 < SUB84(dVar17,0);
  }
  else {
    dVar19 = dVar19 + dVar19;
    fVar15 = SUB84(dVar19,0);
    bVar22 = dVar19 < dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(DAT_8c07d502 + iVar8) = fVar15;
  }
  else {
    *(undefined8 *)(DAT_8c07d502 + iVar8) = in_xd8;
  }
  if (!bVar22) {
    if (*(int *)((int)DAT_8c07d504 + *(int *)(puVar14 + -0x20)) == 0) {
      uVar7 = *(int *)((int)DAT_8c07d894 + *(int *)(puVar14 + -0x20)) + 3;
      if ((int)uVar7 < 0) {
        uVar7 = ~(~uVar7 + 1 & 3) + 1;
      }
      else {
        uVar7 = uVar7 & 3;
      }
      *(uint *)((int)DAT_8c07d894 + *(int *)(puVar14 + -0x20)) = uVar7;
    }
    else {
      uVar7 = *(int *)((int)DAT_8c07d506 + *(int *)(puVar14 + -0x20)) + 1;
      if ((int)uVar7 < 0) {
        uVar7 = ~(~uVar7 + 1 & 3) + 1;
      }
      else {
        uVar7 = uVar7 & 3;
      }
      *(uint *)((int)DAT_8c07d506 + *(int *)(puVar14 + -0x20)) = uVar7;
    }
    dVar17 = (double)((ulonglong)dVar17 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)DAT_8c07d502 + *(int *)(puVar14 + -0x20)) = 0;
    }
    else {
      *(double *)((int)DAT_8c07d502 + *(int *)(puVar14 + -0x20)) = dVar17;
    }
  }
  iVar8 = 8;
  iVar12 = 0;
  iVar11 = (int)DAT_8c07d50a;
  iVar5 = *(int *)((int)DAT_8c07d508 + *(int *)(puVar14 + -0x20));
  do {
    if (*(char *)(iVar12 + *(int *)(*(int *)(puVar14 + -0x20) + 4) + 0xe) != '\x03') {
      *(undefined2 *)(iVar5 + 0x12) = *(undefined2 *)(iVar5 + 0x10);
      *(undefined2 *)(iVar5 + 0x10) = *(undefined2 *)(iVar5 + 2);
    }
    iVar8 = iVar8 + -1;
    iVar12 = iVar12 + 1;
    iVar5 = iVar5 + iVar11;
  } while (iVar8 != 0);
  iVar11 = *(int *)(puVar14 + -0x20);
  dVar17 = (double)((ulonglong)dVar17 & 0xffffffff);
  (*(code *)PTR_FUN_8c07d518)(iVar11,iVar5);
  iVar8 = 0;
  *(undefined4 *)(puVar14 + -0x1c) = 0;
  iVar11 = *(int *)(DAT_8c07d508 + iVar11);
  iVar5 = 8;
  do {
    if (*(char *)(iVar8 + *(int *)(*(int *)(puVar14 + -0x20) + 4) + 0xe) != '\x03') {
      bVar1 = *(byte *)(iVar11 + 8);
      if ((bVar1 & 4) == 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(iVar11 + 0x14))
          ;
        }
        else {
          in_xd8 = *(undefined8 *)(iVar11 + 0x14);
        }
        fVar15 = (float)((ulonglong)dVar17 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar22 = fVar15 < SUB84(dVar19,0);
        }
        else {
          bVar22 = dVar17 < dVar19;
        }
        if (bVar22) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar14 + -0x20) + 0x1c),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(*(int *)(puVar14 + -0x20) + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = (float)((ulonglong)dVar19 >> 0x20);
            fVar16 = SUB84(dVar19,0) - fVar20;
            dVar19 = (double)CONCAT44(fVar20,fVar16);
            bVar22 = fVar15 < fVar16;
          }
          else {
            dVar19 = dVar19 - dVar19;
            fVar16 = SUB84(dVar19,0);
            bVar22 = dVar17 < dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(iVar11 + 0x14) = fVar16;
          }
          else {
            *(undefined8 *)(iVar11 + 0x14) = in_xd8;
          }
          if (!bVar22) {
            iVar8 = *(int *)(puVar14 + -0x20);
            if (in_FPSCR_SZ == '\0') {
              *(float *)(iVar11 + 0x14) = fVar15;
            }
            else {
              *(double *)(iVar11 + 0x14) = dVar17;
            }
            if (*(char *)((int)DAT_8c07d50c + *(int *)(iVar8 + 4)) == '\0') {
              *(undefined1 *)(iVar11 + 0x18) = 0;
            }
          }
        }
        if ((bVar1 & 0x20) != 0) {
          if (*(char *)(iVar11 + 9) == *(char *)(iVar11 + 10)) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar14 + -0x20) + 0x1c),
                                        *(undefined4 *)(iVar11 + 0xc));
            }
            else {
              in_xd8 = *(undefined8 *)(iVar11 + 0xc);
              dVar19 = *(double *)(*(int *)(puVar14 + -0x20) + 0x1c);
            }
            if (in_FPSCR_PR == '\0') {
              fVar16 = SUB84(dVar19,0) - (float)((ulonglong)dVar19 >> 0x20);
            }
            else {
              fVar16 = SUB84(dVar19 - dVar19,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(iVar11 + 0xc) = fVar16;
            }
            else {
              *(undefined8 *)(iVar11 + 0xc) = in_xd8;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar14 + -0x20) + 0x1c),
                                        *(undefined4 *)(iVar11 + 0xc));
            }
            else {
              in_xd8 = *(undefined8 *)(iVar11 + 0xc);
              dVar19 = *(double *)(*(int *)(puVar14 + -0x20) + 0x1c);
            }
            if (in_FPSCR_PR == '\0') {
              fVar16 = SUB84(dVar19,0) - (float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar17,0);
            }
            else {
              fVar16 = SUB84(dVar19 * dVar17 - dVar19 * dVar17,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(iVar11 + 0xc) = fVar16;
            }
            else {
              *(undefined8 *)(iVar11 + 0xc) = in_xd8;
            }
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(iVar11 + 0xc),fVar16);
          }
          else {
            dVar19 = *(double *)(iVar11 + 0xc);
          }
          if (in_FPSCR_PR == '\0') {
            bVar22 = fVar15 < (float)((ulonglong)dVar19 >> 0x20);
          }
          else {
            bVar22 = dVar17 < dVar19;
          }
          if (!bVar22) {
            *(byte *)(iVar11 + 8) = bVar1 & 0xdf;
            if (in_FPSCR_SZ == '\0') {
              *(float *)(iVar11 + 0xc) = fVar15;
            }
            else {
              *(double *)(iVar11 + 0xc) = dVar17;
            }
          }
        }
        uVar10 = *(undefined4 *)(puVar14 + -0x20);
        (*(code *)PTR_FUN_8c07d668)(uVar10,iVar11);
        (*(code *)PTR_FUN_8c07d66c)(uVar10,iVar11);
        bVar1 = *(byte *)(iVar11 + 8);
      }
      fVar15 = (float)((ulonglong)dVar17 >> 0x20);
      if ((bVar1 & 0x80) != 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(iVar11 + 0x20))
          ;
        }
        else {
          in_xd8 = *(undefined8 *)(iVar11 + 0x20);
        }
        if (SUB84(dVar19,0) != fVar15) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar14 + -0x20) + 0x1c),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(*(int *)(puVar14 + -0x20) + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = (float)((ulonglong)dVar19 >> 0x20);
            fVar16 = SUB84(dVar19,0) - fVar20;
            dVar19 = (double)CONCAT44(fVar20,fVar16);
            bVar22 = fVar15 < fVar16;
          }
          else {
            dVar19 = dVar19 - dVar19;
            fVar16 = SUB84(dVar19,0);
            bVar22 = dVar17 < dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(iVar11 + 0x20) = fVar16;
          }
          else {
            *(undefined8 *)(iVar11 + 0x20) = in_xd8;
          }
          uVar4 = DAT_8c07d660;
          if (!bVar22) {
            if (in_FPSCR_SZ == '\0') {
              *(float *)(iVar11 + 0x20) = fVar15;
            }
            else {
              *(double *)(iVar11 + 0x20) = dVar17;
            }
            *(byte *)(iVar11 + 8) = bVar1 & (byte)uVar4;
          }
        }
      }
      bVar1 = *(byte *)(iVar11 + 0x19);
      if ((1 < bVar1) && (((bVar1 == 2 || (bVar1 == 3)) || (bVar1 == 7)))) {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(iVar11 + 0xc));
        }
        else {
          in_xd8 = *(undefined8 *)(iVar11 + 0xc);
        }
        if (in_FPSCR_PR == '\0') {
          bVar22 = fVar15 < SUB84(dVar19,0);
        }
        else {
          bVar22 = dVar17 < dVar19;
        }
        if (bVar22) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar14 + -0x20) + 0x1c),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(*(int *)(puVar14 + -0x20) + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = (float)((ulonglong)dVar19 >> 0x20);
            fVar16 = SUB84(dVar19,0) - fVar20;
            dVar19 = (double)CONCAT44(fVar20,fVar16);
            bVar22 = fVar15 < fVar16;
          }
          else {
            dVar19 = dVar19 - dVar19;
            fVar16 = SUB84(dVar19,0);
            bVar22 = dVar17 < dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(iVar11 + 0xc) = fVar16;
          }
          else {
            *(undefined8 *)(iVar11 + 0xc) = in_xd8;
          }
          if (!bVar22) {
            if (in_FPSCR_SZ == '\0') {
              *(float *)(iVar11 + 0xc) = fVar15;
            }
            else {
              *(double *)(iVar11 + 0xc) = dVar17;
            }
          }
        }
      }
      if ((*(char *)(iVar11 + 0x1a) != '\0') && (*(char *)(iVar11 + 0x1a) == '\x05')) {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(iVar11 + 0xc));
        }
        else {
          in_xd8 = *(undefined8 *)(iVar11 + 0xc);
        }
        if (in_FPSCR_PR == '\0') {
          bVar22 = fVar15 < SUB84(dVar19,0);
        }
        else {
          bVar22 = dVar17 < dVar19;
        }
        if (bVar22) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar14 + -0x20) + 0x1c),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(*(int *)(puVar14 + -0x20) + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = (float)((ulonglong)dVar19 >> 0x20);
            fVar16 = SUB84(dVar19,0) - fVar20;
            dVar19 = (double)CONCAT44(fVar20,fVar16);
            bVar22 = fVar15 < fVar16;
          }
          else {
            dVar19 = dVar19 - dVar19;
            fVar16 = SUB84(dVar19,0);
            bVar22 = dVar17 < dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(iVar11 + 0xc) = fVar16;
          }
          else {
            *(undefined8 *)(iVar11 + 0xc) = in_xd8;
          }
          if (!bVar22) {
            if (in_FPSCR_SZ == '\0') {
              *(float *)(iVar11 + 0xc) = fVar15;
            }
            else {
              *(double *)(iVar11 + 0xc) = dVar17;
            }
          }
        }
      }
      *(undefined1 *)(iVar11 + 10) = *(undefined1 *)(iVar11 + 9);
    }
    uVar10 = (undefined4)in_dr12;
    iVar5 = iVar5 + -1;
    iVar8 = *(int *)(puVar14 + -0x1c) + 1;
    *(int *)(puVar14 + -0x1c) = iVar8;
    iVar11 = iVar11 + DAT_8c07d662;
  } while (iVar5 != 0);
  iVar5 = *(int *)(puVar14 + -0x20);
  FUN_8c07e2fc(iVar5);
  uVar4 = DAT_8c07d666;
  iVar8 = *(int *)(iVar5 + 0x28);
  puVar13 = *(ushort **)(DAT_8c07d664 + iVar5);
  iVar5 = 0;
  if (0 < iVar8) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((undefined4)DAT_8c07d670,uVar10);
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),DAT_8c07d670._4_4_);
    }
    else {
      dVar21 = (double)CONCAT44(DAT_8c07d670._4_4_,(undefined4)DAT_8c07d670);
    }
    do {
      puVar3 = PTR_FUN_8c07d89c;
      if ((*puVar13 & 1) != 0) {
        if ((*(byte *)((int)puVar13 + 9) & 8) == 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar14 + -0x20) + 0x1c),
                                      *(undefined4 *)(puVar13 + 6));
          }
          else {
            in_xd8 = *(undefined8 *)(puVar13 + 6);
            dVar19 = *(double *)(*(int *)(puVar14 + -0x20) + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = (float)((ulonglong)dVar19 >> 0x20);
            fVar15 = SUB84(dVar19,0) + fVar16;
            dVar19 = (double)CONCAT44(fVar16,fVar15);
            bVar22 = fVar15 < (float)((ulonglong)dVar21 >> 0x20);
          }
          else {
            dVar19 = dVar19 + dVar19;
            fVar15 = SUB84(dVar19,0);
            bVar22 = dVar19 < dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar13 + 6) = fVar15;
          }
          else {
            *(undefined8 *)(puVar13 + 6) = in_xd8;
          }
          if (!bVar22) {
            *(byte *)((int)puVar13 + 9) = *(byte *)((int)puVar13 + 9) & (byte)uVar4 | 8;
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar13 + 6) = (int)((ulonglong)dVar17 >> 0x20);
            }
            else {
              *(double *)(puVar13 + 6) = dVar17;
            }
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(puVar13 + 6))
            ;
          }
          else {
            in_xd8 = *(undefined8 *)(puVar13 + 6);
          }
          fVar15 = SUB84(dVar19,0);
          if (in_FPSCR_PR == '\0') {
            bVar22 = SUB84(dVar17,0) < fVar15;
          }
          else {
            bVar22 = dVar17 < dVar19;
          }
          if (bVar22) {
            *(uint *)(puVar14 + -0x18) =
                 *(int *)((int)DAT_8c07d896 + *(int *)(puVar14 + -0x20)) + (uint)puVar13[2] * 0x10;
            iVar11 = (*(code *)PTR_FUN_8c07d89c)();
            iVar12 = (*(code *)puVar3)();
            *(undefined4 *)
             ((*(int *)(*(int *)(puVar14 + -0x20) + 0x20) * iVar11 + iVar12) * 4 +
             *(int *)((int)DAT_8c07d89a + *(int *)(puVar14 + -0x20))) = 0;
            *puVar13 = *puVar13 & 0xfffe;
          }
          else {
            if (in_FPSCR_PR == '\0') {
              bVar22 = SUB84(dVar17,0) < fVar15;
            }
            else {
              bVar22 = dVar17 < dVar19;
            }
            if (!bVar22) {
              if (in_FPSCR_SZ == '\0') {
                dVar19 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar14 + -0x20) + 0x1c),fVar15);
              }
              else {
                dVar19 = *(double *)(*(int *)(puVar14 + -0x20) + 0x1c);
              }
              if (in_FPSCR_PR == '\0') {
                fVar15 = (float)((ulonglong)dVar19 >> 0x20);
                dVar19 = (double)CONCAT44(fVar15,SUB84(dVar19,0) + fVar15);
              }
              else {
                dVar19 = dVar19 + dVar19;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar13 + 6) = SUB84(dVar19,0);
              }
              else {
                *(undefined8 *)(puVar13 + 6) = in_xd8;
              }
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      puVar13 = puVar13 + 8;
    } while (iVar5 < iVar8);
  }
  iVar5 = *(int *)(puVar14 + -0x20);
  iVar8 = 0;
  puVar13 = *(ushort **)(DAT_8c07d7c2 + iVar5);
  iVar5 = *(int *)(iVar5 + 0x24) * *(int *)(iVar5 + 0x20);
  *(int *)(puVar14 + -0x14) = iVar5;
  if (0 < iVar5) {
    do {
      puVar3 = PTR_FUN_8c07d7d0;
      if ((*puVar13 & 1) != 0) {
        uVar2 = puVar13[8];
        iVar5 = 0;
        *(int *)(puVar14 + -0x24) = iVar8;
        *(byte *)(puVar13 + 8) = (byte)uVar2 & (byte)DAT_8c07d7c4;
        *(ushort **)(puVar14 + -0x10) = puVar13 + 1;
        uVar7 = (*(code *)puVar3)();
        iVar8 = 8;
        uVar4 = (*(code *)puVar3)();
        *(undefined2 *)(puVar14 + -0xc) = uVar4;
        do {
          puVar9 = (ushort *)
                   (*(int *)((int)DAT_8c07d7ca + *(int *)(puVar14 + -0x20)) + DAT_8c07d7c8 * iVar5);
          *(ushort **)(puVar14 + -8) = puVar9;
          if (((puVar9 != (ushort *)0x0) && ((*puVar9 & 1) != 0)) &&
             (uVar6 = (*(code *)puVar3)(puVar9 + 1), uVar6 == (uVar7 & 0xffff))) {
            iVar11 = (*(code *)puVar3)();
            if ((0 < (int)(iVar11 - (uint)*(ushort *)(puVar14 + -0xc))) &&
               ((int)(iVar11 - (uint)*(ushort *)(puVar14 + -0xc)) < 3)) {
              *(byte *)(puVar13 + 8) = (byte)puVar13[8] & (byte)DAT_8c07d7c4 | 0x20;
            }
          }
          iVar8 = iVar8 + -1;
          iVar5 = iVar5 + 1;
        } while (iVar8 != 0);
        iVar5 = *(int *)(puVar14 + -0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x1c),*(undefined4 *)(puVar13 + 6));
        }
        else {
          in_xd8 = *(undefined8 *)(puVar13 + 6);
          dVar17 = *(double *)(iVar5 + 0x1c);
        }
        iVar8 = *(int *)(puVar14 + -0x24);
        if (in_FPSCR_PR == '\0') {
          fVar15 = SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          fVar15 = SUB84(dVar17 + dVar17,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar13 + 6) = fVar15;
          uVar18 = CONCAT44(*(undefined4 *)(iVar5 + 0x3c),fVar15);
        }
        else {
          *(undefined8 *)(puVar13 + 6) = in_xd8;
          uVar18 = *(undefined8 *)(iVar5 + 0x3c);
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar18 >> 0x20) <= (float)uVar18) {
          iVar12 = *(int *)(puVar14 + -0x20);
          iVar5 = (*(code *)puVar3)();
          iVar11 = (*(code *)puVar3)();
          *(undefined4 *)
           ((*(int *)(iVar12 + 0x20) * iVar5 + iVar11) * 4 + *(int *)(DAT_8c07d7cc + iVar12)) = 0;
          *puVar13 = *puVar13 & 0xfffe;
        }
      }
      iVar8 = iVar8 + 1;
      puVar13 = puVar13 + 10;
    } while (iVar8 < *(int *)(puVar14 + -0x14));
  }
  iVar8 = *(int *)(puVar14 + -0x20);
  FUN_8c07dd36(iVar8);
  (*(code *)PTR_FUN_8c07d7d4)(iVar8);
  (*(code *)PTR_FUN_8c07d7d8)(iVar8);
  (*(code *)PTR_FUN_8c07d7dc)(iVar8);
  (*(code *)PTR_FUN_8c07d7e0)(iVar8);
  (*(code *)PTR_FUN_8c07d7e4)(iVar8);
  (*(code *)PTR_FUN_8c07d7e8)(iVar8);
  (**(code **)(*(int *)(DAT_8c07d7ce + iVar8) + 0x50))
            (iVar8 + *(int *)(*(int *)(DAT_8c07d7ce + iVar8) + 0x48));
  return;
}

