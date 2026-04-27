// entry: 8c0193ac
// name: FUN_8c0193ac


/* WARNING: Removing unreachable block (ram,0x8c019872) */
/* WARNING: Removing unreachable block (ram,0x8c019776) */
/* WARNING: Removing unreachable block (ram,0x8c019460) */
/* WARNING: Removing unreachable block (ram,0x8c01983c) */
/* WARNING: Removing unreachable block (ram,0x8c019904) */
/* WARNING: Removing unreachable block (ram,0x8c019886) */
/* WARNING: Removing unreachable block (ram,0x8c01984a) */
/* WARNING: Removing unreachable block (ram,0x8c019850) */
/* WARNING: Removing unreachable block (ram,0x8c019854) */
/* WARNING: Removing unreachable block (ram,0x8c01987c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0193ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  double dVar12;
  uint uVar13;
  double dVar14;
  undefined8 uVar15;
  float fVar17;
  undefined8 uVar16;
  float fVar18;
  float fVar22;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 in_dr14;
  double in_xd6;
  double in_xd8;
  bool bVar23;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar11 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar11 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(DAT_8c01953c + 0x34),param_1);
  }
  else {
    dVar14 = *(double *)(DAT_8c01953c + 0x34);
  }
  dVar19 = dVar14;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),(int)in_dr14);
  }
  piVar6 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c019526);
  (*(code *)piVar6[2])(param_3 + *piVar6);
  iVar5 = (*(code *)PTR_FUN_8c019540)(*(undefined4 *)(*(int *)(param_3 + 0x58) + 4),3);
  if (iVar5 != 0) {
    return;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(DAT_8c019544,*(undefined4 *)(DAT_8c019528 + param_3));
  }
  else {
    in_xd8 = *(double *)(DAT_8c019528 + param_3);
    dVar20 = (double)CONCAT44(_DAT_8c019548,DAT_8c019544);
  }
  fVar18 = SUB84(dVar20,0);
  fVar22 = (float)((ulonglong)dVar20 >> 0x20);
  if (in_FPSCR_PR == '\0' && fVar18 < fVar22) {
LAB_8c019634:
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) + (float)((ulonglong)dVar19 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 + dVar19,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(DAT_8c0196b8 + param_3) = fVar18;
    }
    else {
      *(double *)(DAT_8c0196b8 + param_3) = in_xd8;
    }
                    /* WARNING: Read-only address (ram,0x8c0196e0) is written */
                    /* WARNING: Read-only address (ram,0x8c0197d0) is written */
                    /* WARNING: Read-only address (ram,0x8c019900) is written */
    return;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(_DAT_8c019548,param_2);
  }
  else {
    dVar21 = (double)CONCAT44(PTR_FUN_8c01954c,_DAT_8c019548);
  }
  if (in_FPSCR_PR == '\0') {
    bVar23 = fVar18 < (float)((ulonglong)dVar21 >> 0x20);
  }
  else {
    bVar23 = dVar20 < dVar21;
  }
  if (bVar23) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((undefined4)DAT_8c0197b8,0x3f800000);
      dVar14 = (double)CONCAT44(DAT_8c0197b8._4_4_,SUB84(dVar14,0));
    }
    else {
      dVar21 = (double)CONCAT44(DAT_8c0197b8._4_4_,(undefined4)DAT_8c0197b8);
      dVar14 = (double)CONCAT44(DAT_8c0197c0,DAT_8c0197b8._4_4_);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(fVar22,fVar18 + (float)((ulonglong)dVar21 >> 0x20));
    }
    else {
      dVar20 = dVar20 + dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      in_xd6 = (double)CONCAT44(SUB84(dVar21,0),SUB84(dVar21,0));
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar20,0) / (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar18 = SUB84(dVar20 / dVar20,0);
    }
    dVar20 = in_xd8;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(fVar18,fVar18);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = (float)((ulonglong)dVar20 >> 0x20) * (float)((ulonglong)dVar14 >> 0x20);
      dVar21 = (double)CONCAT44(fVar18,SUB84(dVar20,0) + SUB84(in_xd6,0));
      in_xd6 = (double)CONCAT44((float)((ulonglong)in_xd6 >> 0x20) - fVar18,SUB84(in_xd6,0));
    }
    else {
      dVar21 = dVar20 * dVar14 + in_xd6;
      in_xd6 = in_xd6 - dVar21;
    }
    dVar20 = in_xd8;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(SUB84(dVar21,0),SUB84(dVar21,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar20,0),SUB84(dVar20,0)
                               );
    }
    else {
      dVar20 = dVar20 * dVar20;
    }
    uVar10 = (undefined4)((ulonglong)in_xd6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),DAT_8c0197c0);
      *(undefined4 *)((int)puVar11 + -0x58) = uVar10;
    }
    else {
      in_xd8 = (double)CONCAT44(PTR_FUN_8c0197c4,DAT_8c0197c0);
      *(double *)((int)puVar11 + -0x58) = in_xd6;
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar20,0),SUB84(dVar20,0)
                               );
    }
    else {
      dVar20 = dVar20 * dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(*(undefined4 *)((int)puVar11 + -0x58),SUB84(dVar14,0));
      *(int *)((int)puVar11 + -0x54) = (int)((ulonglong)dVar20 >> 0x20);
      *(undefined4 *)((int)puVar11 + -0x50) = uVar10;
    }
    else {
      uVar15 = *(undefined8 *)((int)puVar11 + -0x58);
      *(double *)((int)puVar11 + -0x54) = dVar20;
      *(double *)((int)puVar11 + -0x50) = in_xd6;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),*(undefined4 *)((int)puVar11 + -0x54));
      uVar16 = CONCAT44(*(undefined4 *)((int)puVar11 + -0x50),SUB84(in_xd6,0));
    }
    else {
      uVar16 = *(undefined8 *)((int)puVar11 + -0x50);
    }
    (*(code *)PTR_FUN_8c0197c4)(uVar15,uVar16,*(undefined4 *)(param_3 + 0x58));
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                *(undefined4 *)(DAT_8c0197b0 + param_3));
    }
    else {
      in_xd8 = *(double *)(DAT_8c0197b0 + param_3);
    }
    goto LAB_8c019634;
  }
  iVar5 = *(int *)(DAT_8c01952a + param_3);
  *(int *)((int)puVar11 + -0x28) = iVar5;
  iVar5 = *(int *)(DAT_8c01952e + iVar5) + (int)DAT_8c01952c * (uint)*(ushort *)(param_3 + 0x54);
  if (*(char *)(iVar5 + 0x19) == '\0') {
    if (*(char *)(iVar5 + 0x1a) == '\0') {
      (*(code *)PTR_FUN_8c0196d8)(*(undefined4 *)(param_3 + 0x58),0);
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c0196dc,*(undefined4 *)(DAT_8c0196b8 + param_3));
      }
      else {
        in_xd8 = *(double *)(DAT_8c0196b8 + param_3);
        dVar20 = (double)CONCAT44(uRam8c0196e0,DAT_8c0196dc);
      }
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar20 >> 0x20) <= SUB84(dVar20,0)) {
        iVar5 = *(int *)(DAT_8c0196bc + param_3);
        cVar1 = *(char *)(iVar5 + 0x30);
        *(int *)((int)puVar11 + -0xc) = iVar5;
        if (cVar1 == '\x01') {
          if ((*(byte *)((int)DAT_8c0197ae + iVar5 + DAT_8c0197ac) & 0x40) == 0) {
            (*(code *)PTR_FUN_8c0197b4)(param_3 + 0x10,3);
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                        *(undefined4 *)(DAT_8c0197b0 + param_3));
            }
            else {
              in_xd8 = *(double *)(DAT_8c0197b0 + param_3);
            }
          }
          else {
            (*(code *)PTR_FUN_8c0197b4)(param_3 + 0x10,0);
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                        *(undefined4 *)(DAT_8c0197b0 + param_3));
            }
            else {
              in_xd8 = *(double *)(DAT_8c0197b0 + param_3);
            }
          }
        }
        else if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
          if ((*(byte *)((int)DAT_8c0196c0 + iVar5 + DAT_8c0196be) & 0x40) == 0) {
            (*(code *)PTR_FUN_8c0196d0)(param_3 + 0x10,3);
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                        *(undefined4 *)(DAT_8c0196b8 + param_3));
            }
            else {
              in_xd8 = *(double *)(DAT_8c0196b8 + param_3);
            }
          }
          else {
            (*(code *)PTR_FUN_8c0197b4)(param_3 + 0x10,0);
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                        *(undefined4 *)(DAT_8c0197b0 + param_3));
            }
            else {
              in_xd8 = *(double *)(DAT_8c0197b0 + param_3);
            }
          }
        }
      }
    }
    else if ((*(byte *)((int)DAT_8c0196c0 + *(int *)(DAT_8c0196bc + param_3) + (int)DAT_8c0196be) &
             0x40) == 0) {
      (*(code *)PTR_FUN_8c0196d0)(param_3 + 0x10,3);
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                  *(undefined4 *)(DAT_8c0196b8 + param_3));
      }
      else {
        in_xd8 = *(double *)(DAT_8c0196b8 + param_3);
      }
    }
    else {
      (*(code *)PTR_FUN_8c0196d0)(param_3 + 0x10,0);
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                  *(undefined4 *)(DAT_8c0196b8 + param_3));
      }
      else {
        in_xd8 = *(double *)(DAT_8c0196b8 + param_3);
      }
    }
    goto LAB_8c019634;
  }
  iVar5 = (*(code *)PTR_FUN_8c01954c)();
  uVar13 = SUB84(dVar14,0);
  if (iVar5 < (int)(*(int *)(*(int *)((int)puVar11 + -0x28) + 0x20) +
                   (uint)(*(int *)(*(int *)((int)puVar11 + -0x28) + 0x20) < 0)) >> 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44((undefined4)DAT_8c019550,SUB84(dVar20,0));
    }
    else {
      dVar19 = (double)CONCAT44(DAT_8c019550._4_4_,(undefined4)DAT_8c019550);
    }
    *(undefined1 *)(DAT_8c019530 + param_3) = 1;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(DAT_8c0196d4,SUB84(dVar20,0));
    }
    else {
      dVar19 = (double)CONCAT44(PTR_FUN_8c0196d8,DAT_8c0196d4);
    }
    *(undefined1 *)(DAT_8c0196ba + param_3) = 2;
  }
  uVar10 = (undefined4)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(uVar10,uVar10);
    *(undefined4 *)(DAT_8c019532 + param_3) = uVar10;
  }
  else {
    *(double *)(DAT_8c019532 + param_3) = dVar19;
    in_xd8 = dVar19;
  }
  uVar7 = *(uint *)(param_3 + 0x2c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c019534 + param_3) = uVar10;
  }
  else {
    *(double *)(DAT_8c019534 + param_3) = dVar19;
  }
  uVar9 = (uint)DAT_8c019536;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(*(undefined4 *)(DAT_8c019532 + param_3),SUB84(dVar19,0));
  }
  else {
    dVar19 = *(double *)(DAT_8c019532 + param_3);
  }
  uVar7 = uVar7 | uVar9;
  fVar18 = (float)((ulonglong)dVar19 >> 0x20);
  *(uint *)(param_3 + 0x2c) = uVar7;
  if ((uVar7 & uVar9) == 0 && SUB84(dVar19,0) == fVar18) goto LAB_8c0195da;
  iVar5 = *(int *)(param_3 + 0x58);
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(*(undefined4 *)(DAT_8c019534 + param_3),SUB84(dVar21,0));
  }
  else {
    dVar20 = *(double *)(DAT_8c019534 + param_3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)(DAT_8c019532 + param_3),extraout_fr1);
  }
  else {
    dVar21 = *(double *)(DAT_8c019532 + param_3);
  }
  uVar10 = *(undefined4 *)(iVar5 + 0x5c);
  fVar22 = (float)((ulonglong)dVar21 >> 0x20);
  fVar17 = (float)((ulonglong)dVar20 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar23 = fVar17 == fVar22;
  }
  else {
    bVar23 = dVar20 == dVar21;
  }
  *(undefined4 *)((int)puVar11 + -0x4c) = *(undefined4 *)(iVar5 + 0x58);
  uVar8 = *(undefined4 *)(iVar5 + 0x60);
  *(undefined4 *)((int)puVar11 + -0x48) = uVar10;
  if (in_FPSCR_SZ == '\0') {
    *(float *)((int)puVar11 + -0x24) = fVar22;
  }
  else {
    *(double *)((int)puVar11 + -0x24) = dVar21;
  }
  *(undefined4 *)((int)puVar11 + -0x44) = uVar8;
  if (!bVar23) {
    dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
    if (in_FPSCR_PR == '\0') {
      bVar23 = fVar22 == 0.0;
    }
    else {
      bVar23 = dVar21 == dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar11 + -0x20) = fVar17;
      dVar19 = (double)CONCAT44(fVar18,fVar17);
      dVar14 = (double)(ulonglong)(uint)fVar22;
    }
    else {
      *(double *)((int)puVar11 + -0x20) = dVar20;
      in_xd8 = dVar20;
    }
    fVar18 = SUB84(dVar19,0);
    if (bVar23) {
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(DAT_8c019550._4_4_,fVar18);
      }
      else {
        dVar19 = (double)CONCAT44(DAT_8c019558,DAT_8c019550._4_4_);
      }
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar17 < (float)((ulonglong)dVar19 >> 0x20);
      }
      else {
        bVar23 = dVar20 < dVar19;
      }
      if ((!bVar23) && (in_FPSCR_SZ == '\0')) {
        dVar14 = (double)(ulonglong)DAT_8c019558;
      }
    }
    else if (fVar18 == 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44((undefined4)DAT_8c0197c8,fVar18);
      }
      else {
        dVar19 = (double)CONCAT44(DAT_8c0197c8._4_4_,(undefined4)DAT_8c0197c8);
      }
      fVar18 = (float)((ulonglong)dVar19 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar22 < fVar18;
      }
      else {
        bVar23 = dVar21 < dVar19;
      }
      if (!bVar23) {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(fVar18,DAT_8c0197c8._4_4_);
        }
        else {
          in_xd8 = (double)CONCAT44(uRam8c0197d0,DAT_8c0197c8._4_4_);
        }
      }
    }
    uVar10 = *(undefined4 *)(PTR_DAT_8c01955c + 4);
    *(undefined4 *)((int)puVar11 + -0x40) = *(undefined4 *)PTR_DAT_8c01955c;
    *(undefined4 *)((int)puVar11 + -0x3c) = uVar10;
    uVar10 = *(undefined4 *)(PTR_DAT_8c01955c + 0xc);
    *(undefined4 *)((int)puVar11 + -0x38) = *(undefined4 *)(PTR_DAT_8c01955c + 8);
    *(undefined4 *)((int)puVar11 + -0x34) = uVar10;
    uVar10 = *(undefined4 *)(PTR_DAT_8c01955c + 0x14);
    *(undefined4 *)((int)puVar11 + -0x30) = *(undefined4 *)(PTR_DAT_8c01955c + 0x10);
    *(undefined4 *)((int)puVar11 + -0x2c) = uVar10;
    uVar13 = (uint)*(ushort *)(param_3 + 0x54);
    if ((*(uint *)(param_3 + 0x2c) & (int)DAT_8c019538) == 0) {
      cVar1 = *(char *)(*(int *)((int)DAT_8c01952e + *(int *)(DAT_8c01952a + param_3)) +
                        (int)DAT_8c01952c * uVar13 + 0x18);
      if (cVar1 == '\x01') {
        iVar5 = 5;
      }
      else if (cVar1 == '\x02') {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(DAT_8c0198ec + param_3);
        *(uint *)((int)puVar11 + -8) = uVar13;
        iVar5 = iVar5 + DAT_8c0198ee;
        if (((*(short *)(iVar5 + uVar13 * 0x1e + 0x18) == 0) &&
            (*(short *)(iVar5 + DAT_8c0198f0 + *(int *)((int)puVar11 + -8) * 0x1e + 0x18) == 0)) &&
           (*(short *)(iVar5 + DAT_8c0198f2 + *(int *)((int)puVar11 + -8) * 0x1e + 0x18) == 0)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          *(int *)((int)puVar11 + -0x1c) = (int)*(short *)(iVar5 + DAT_8c019a58 + uVar13 * 0x1e + 4)
          ;
          iVar5 = *(int *)((int)puVar11 + -0x1c) +
                  (int)*(short *)(iVar5 + DAT_8c0198f2 + uVar13 * 0x1e + 4);
          *(int *)((int)puVar11 + -0x1c) = iVar5;
        }
        else {
          *(int *)((int)puVar11 + -0x18) = iVar5 + DAT_8c019a58;
          *(int *)((int)puVar11 + -0x14) = iVar5 + DAT_8c019a5a;
          sVar2 = *(short *)(iVar5 + uVar13 * 0x1e + 4);
          iVar5 = *(int *)((int)puVar11 + -0x18);
          *(uint *)((int)puVar11 + -0x18) = iVar5 + uVar13 * 0x1e;
          sVar3 = *(short *)(iVar5 + uVar13 * 0x1e + 4);
          iVar5 = *(int *)((int)puVar11 + -0x14);
          *(uint *)((int)puVar11 + -0x14) = iVar5 + uVar13 * 0x1e;
          iVar5 = (int)sVar2 + (int)sVar3 + (int)*(short *)(iVar5 + uVar13 * 0x1e + 4);
        }
        if (4 < iVar5) {
          iVar5 = 4;
        }
      }
    }
    else {
      iVar5 = *(int *)(DAT_8c01953a + param_3);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + iVar5 * 4 + -0x40),DAT_8c019560);
    }
    else {
      dVar20 = *(double *)((int)puVar11 + iVar5 * 4 + -0x40);
      in_xd6 = (double)CONCAT44(DAT_8c019564,DAT_8c019560);
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = SUB84(dVar19,0) - SUB84(dVar14,0);
    }
    else {
      fVar18 = SUB84(dVar19 - dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar10 = SUB84(dVar20,0);
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)DAT_8c019564);
      dVar21 = in_xd6;
      in_xd6 = (double)CONCAT44(uVar10,fVar18);
    }
    else {
      dVar21 = *DAT_8c019564;
    }
    if (in_FPSCR_PR == '\0') {
      iVar5 = (int)SUB84(in_xd6,0);
      fVar18 = (float)((ulonglong)in_xd6 >> 0x20) / SUB84(dVar20,0);
      in_xd6 = (double)CONCAT44(fVar18,SUB84(in_xd6,0));
      dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar18,SUB84(dVar20,0));
    }
    else {
      iVar5 = (int)in_xd6;
      in_xd6 = in_xd6 / dVar20;
      dVar20 = dVar20 * in_xd6;
    }
    uVar10 = SUB84(in_xd6,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar11 + -0x10) = (int)((ulonglong)dVar20 >> 0x20);
    }
    else {
      *(double *)((int)puVar11 + -0x10) = dVar20;
    }
    iVar5 = (*(code *)PTR__abs_8c019568)(iVar5);
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)iVar5,uVar10);
    }
    else {
      dVar19 = (double)iVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x10),SUB84(dVar20,0));
    }
    else {
      dVar20 = *(double *)((int)puVar11 + -0x10);
    }
    fVar18 = (float)((ulonglong)dVar20 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar23 = fVar18 < (float)((ulonglong)dVar19 >> 0x20);
    }
    else {
      bVar23 = dVar20 < dVar19;
    }
    if (bVar23) {
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44((undefined4)DAT_8c0198f4,SUB84(dVar19,0));
        dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x24),extraout_fr1_00);
      }
      else {
        dVar19 = (double)CONCAT44(DAT_8c0198f4._4_4_,(undefined4)DAT_8c0198f4);
        dVar12 = *(double *)((int)puVar11 + -0x24);
      }
      fVar22 = (float)((ulonglong)dVar12 >> 0x20);
      fVar17 = (float)((ulonglong)dVar19 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar22 == fVar17;
      }
      else {
        bVar23 = dVar12 == dVar19;
      }
      if (bVar23) {
        dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(fVar18,*(undefined4 *)((int)puVar11 + -0x20));
        }
        else {
          dVar21 = *(double *)((int)puVar11 + -0x20);
        }
        fVar18 = SUB84(dVar20,0);
        if (in_FPSCR_PR == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar20 < dVar14;
        }
        fVar22 = (float)((ulonglong)dVar20 >> 0x20);
        if (bVar23) {
LAB_8c0198d6:
          if (in_FPSCR_PR == '\0') {
            bVar23 = (float)((ulonglong)dVar19 >> 0x20) < fVar18;
          }
          else {
            bVar23 = dVar19 < dVar20;
          }
          if (bVar23) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = (double)CONCAT44(DAT_8c0198fc,SUB84(dVar19,0));
            }
            else {
              dVar19 = (double)CONCAT44(uRam8c019900,DAT_8c0198fc);
            }
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar18 < (float)((ulonglong)dVar19 >> 0x20);
            }
            else {
              bVar23 = dVar20 < dVar19;
            }
            if (bVar23) goto LAB_8c0198e2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44(fVar22,fVar18 + fVar22);
          }
          else {
            dVar20 = dVar20 + dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar11 + -0x20) = SUB84(dVar20,0);
          }
          else {
            *(double *)((int)puVar11 + -0x20) = dVar21;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(fVar17,DAT_8c0198f4._4_4_);
          }
          else {
            in_xd8 = (double)CONCAT44(DAT_8c0198fc,DAT_8c0198f4._4_4_);
          }
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar18 < SUB84(dVar19,0);
          }
          else {
            bVar23 = dVar20 < dVar19;
          }
          if (!bVar23) goto LAB_8c0198d6;
LAB_8c0198e2:
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44(fVar22,fVar18 - fVar22);
          }
          else {
            dVar20 = dVar20 - dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar11 + -0x20) = SUB84(dVar20,0);
          }
          else {
            *(double *)((int)puVar11 + -0x20) = dVar21;
          }
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(fVar17,(undefined4)DAT_8c019a5c);
        }
        else {
          in_xd8 = (double)CONCAT44(DAT_8c019a5c._4_4_,(undefined4)DAT_8c019a5c);
        }
        fVar17 = SUB84(dVar19,0);
        if (fVar22 != fVar17) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((undefined4)DAT_8c019a64,fVar17);
          }
          else {
            dVar19 = (double)CONCAT44(DAT_8c019a64._4_4_,(undefined4)DAT_8c019a64);
          }
          fVar17 = (float)((ulonglong)dVar19 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar22 == fVar17;
          }
          else {
            bVar23 = dVar12 == dVar19;
          }
          if (bVar23) {
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44(fVar18,*(undefined4 *)((int)puVar11 + -0x20));
            }
            else {
              dVar21 = *(double *)((int)puVar11 + -0x20);
            }
            fVar18 = SUB84(dVar20,0);
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar18 < fVar17;
            }
            else {
              bVar23 = dVar20 < dVar19;
            }
            fVar22 = (float)((ulonglong)dVar20 >> 0x20);
            if (bVar23) {
              if (in_FPSCR_PR == '\0') {
                dVar20 = (double)CONCAT44(fVar22,fVar18 + fVar22);
              }
              else {
                dVar20 = dVar20 + dVar20;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar11 + -0x20) = SUB84(dVar20,0);
              }
              else {
                *(double *)((int)puVar11 + -0x20) = dVar21;
              }
            }
            else {
              if (in_FPSCR_PR == '\0') {
                dVar20 = (double)CONCAT44(fVar22,fVar18 - fVar22);
              }
              else {
                dVar20 = dVar20 - dVar20;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar11 + -0x20) = SUB84(dVar20,0);
              }
              else {
                *(double *)((int)puVar11 + -0x20) = dVar21;
              }
            }
          }
          else {
            dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar22 == 0.0;
            }
            else {
              bVar23 = dVar12 == dVar14;
            }
            if (bVar23) {
              if (in_FPSCR_SZ == '\0') {
                dVar20 = (double)CONCAT44(fVar18,*(undefined4 *)((int)puVar11 + -0x20));
              }
              else {
                dVar21 = *(double *)((int)puVar11 + -0x20);
              }
              fVar18 = SUB84(dVar20,0);
              if (in_FPSCR_PR == '\0') {
                bVar23 = fVar18 < fVar17;
              }
              else {
                bVar23 = dVar20 < dVar19;
              }
              fVar22 = (float)((ulonglong)dVar20 >> 0x20);
              if (bVar23) {
                if (in_FPSCR_PR == '\0') {
                  dVar20 = (double)CONCAT44(fVar22,fVar18 - fVar22);
                }
                else {
                  dVar20 = dVar20 - dVar20;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)((int)puVar11 + -0x20) = SUB84(dVar20,0);
                }
                else {
                  *(double *)((int)puVar11 + -0x20) = dVar21;
                }
              }
              else {
                if (in_FPSCR_PR == '\0') {
                  dVar20 = (double)CONCAT44(fVar22,fVar18 + fVar22);
                }
                else {
                  dVar20 = dVar20 + dVar20;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)((int)puVar11 + -0x20) = SUB84(dVar20,0);
                }
                else {
                  *(double *)((int)puVar11 + -0x20) = dVar21;
                }
              }
            }
          }
          goto LAB_8c019594;
        }
        dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(fVar18,*(undefined4 *)((int)puVar11 + -0x20));
        }
        else {
          dVar21 = *(double *)((int)puVar11 + -0x20);
        }
        fVar18 = SUB84(dVar20,0);
        if (in_FPSCR_PR == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar20 < dVar14;
        }
        fVar22 = (float)((ulonglong)dVar20 >> 0x20);
        if (bVar23) {
LAB_8c019916:
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar18 < (float)((ulonglong)dVar19 >> 0x20);
          }
          else {
            bVar23 = dVar20 < dVar19;
          }
          if (!bVar23) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = (double)CONCAT44(DAT_8c019a5c._4_4_,fVar17);
            }
            else {
              dVar19 = (double)CONCAT44((undefined4)DAT_8c019a64,DAT_8c019a5c._4_4_);
            }
            if (in_FPSCR_PR == '\0') {
              bVar23 = fVar18 < (float)((ulonglong)dVar19 >> 0x20);
            }
            else {
              bVar23 = dVar20 < dVar19;
            }
            if (bVar23) goto LAB_8c019922;
          }
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44(fVar22,fVar18 - fVar22);
          }
          else {
            dVar20 = dVar20 - dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar11 + -0x20) = SUB84(dVar20,0);
          }
          else {
            *(double *)((int)puVar11 + -0x20) = dVar21;
          }
        }
        else {
          if (in_FPSCR_PR == '\0') {
            bVar23 = fVar18 < fVar17;
          }
          else {
            bVar23 = dVar20 < dVar19;
          }
          if (!bVar23) goto LAB_8c019916;
LAB_8c019922:
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44(fVar22,fVar18 + fVar22);
          }
          else {
            dVar20 = dVar20 + dVar20;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar11 + -0x20) = SUB84(dVar20,0);
          }
          else {
            *(double *)((int)puVar11 + -0x20) = dVar21;
          }
        }
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar11 + -0x24),extraout_fr1_00);
      *(undefined4 *)((int)puVar11 + -0x20) = *(undefined4 *)((int)puVar11 + -0x24);
    }
    else {
      dVar12 = *(double *)((int)puVar11 + -0x24);
      *(double *)((int)puVar11 + -0x20) = dVar12;
    }
LAB_8c019594:
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),
                                *(undefined4 *)((int)puVar11 + -0x20));
      dVar19 = (double)CONCAT44(DAT_8c0196c4,SUB84(dVar19,0));
    }
    else {
      dVar21 = *(double *)((int)puVar11 + -0x20);
      dVar19 = (double)CONCAT44(_DAT_8c0196c8,DAT_8c0196c4);
    }
    fVar18 = SUB84(dVar20,0);
    fVar22 = (float)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar23 = fVar18 < fVar22;
    }
    else {
      bVar23 = dVar20 < dVar19;
    }
    if (bVar23) {
      dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar18 < 0.0;
      }
      else {
        bVar23 = dVar20 < dVar14;
      }
      if (bVar23) {
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)(ulonglong)(uint)(fVar18 + fVar22);
        }
        else {
          dVar20 = dVar20 + dVar19;
        }
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(_DAT_8c0196c8,SUB84(dVar19,0));
      }
      else {
        dVar19 = (double)CONCAT44(PTR_FUN_8c0196cc,_DAT_8c0196c8);
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)(ulonglong)(uint)(fVar18 + (float)((ulonglong)dVar19 >> 0x20));
      }
      else {
        dVar20 = dVar20 + dVar19;
      }
    }
    uVar13 = SUB84(dVar14,0);
    uVar7 = *(uint *)(param_3 + 0x2c);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c0196b2 + param_3) = SUB84(dVar20,0);
    }
    else {
      *(double *)(DAT_8c0196b2 + param_3) = dVar21;
    }
    uVar9 = (uint)DAT_8c0196b6;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c0196b4 + param_3) = SUB84(dVar20,0);
    }
    else {
      *(double *)(DAT_8c0196b4 + param_3) = dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c0196b2 + param_3) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      *(double *)(DAT_8c0196b2 + param_3) = dVar12;
    }
    iVar5 = (int)DAT_8c0196b4;
    *(uint *)(param_3 + 0x2c) = uVar7 | uVar9 | uVar9;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)(ulonglong)*(uint *)(iVar5 + param_3);
    }
    else {
      in_xd8 = *(double *)(iVar5 + param_3);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar11 + -0x48) = SUB84(dVar19,0);
  }
  else {
    uVar13 = (uint)*(undefined8 *)((int)puVar11 + -0x4c);
    *(double *)((int)puVar11 + -0x48) = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar13 = *(uint *)((int)puVar11 + -0x48);
    uVar15 = CONCAT44(*(undefined4 *)((int)puVar11 + -0x44),SUB84(dVar20,0));
  }
  else {
    uVar15 = *(undefined8 *)((int)puVar11 + -0x44);
  }
  (*(code *)PTR_FUN_8c0196cc)(uVar15,*(undefined4 *)(param_3 + 0x58));
LAB_8c0195da:
  puVar4 = PTR_FUN_8c0196d0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0196b8 + param_3) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c0196b8 + param_3) = (ulonglong)uVar13;
  }
  (*(code *)puVar4)(param_3 + 0x10,0x10);
  return;
}

