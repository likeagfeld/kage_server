// entry: 8c0695d0
// name: FUN_8c0695d0
// signature: undefined FUN_8c0695d0(void)


/* WARNING: Removing unreachable block (ram,0x8c069772) */
/* WARNING: Removing unreachable block (ram,0x8c0698dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0695d0(double param_1,double param_2,int param_3,int param_4)

{
  undefined *puVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  float fVar6;
  undefined4 uVar7;
  double in_dr2;
  double dVar8;
  float fVar9;
  uint uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar17;
  float fVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double in_dr14;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd8;
  undefined8 uVar22;
  bool bVar23;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_18;
  undefined4 uVar15;
  float fVar16;
  
  puVar1 = PTR_FUN_8c06978c;
  uVar7 = SUB84(in_dr2,0);
  if (in_FPSCR_SZ == '\0') {
    puVar5 = (undefined8 *)((int)&local_18 + 4);
    local_18 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_18);
  }
  else {
    puVar5 = &local_18;
    local_18 = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = in_PR;
  if (*(int *)(*(int *)(DAT_8c069612 + param_3) + 4) != 0) {
    iVar4 = *(int *)(DAT_8c069780 + param_3);
    *(int *)((int)puVar5 + -0x10) = iVar4;
    iVar3 = *(int *)(*(int *)(param_4 * 4 + param_3 + DAT_8c069782) + 0x58);
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44(*(undefined4 *)(iVar3 + 0x4c),SUB84(param_2,0));
      uVar11 = CONCAT44(*(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x54));
      *(undefined4 *)((int)puVar5 + -0x50) = *(undefined4 *)(iVar3 + 0x50);
    }
    else {
      param_2 = *(double *)(iVar3 + 0x4c);
      uVar11 = *(undefined8 *)(iVar3 + 0x50);
      in_xd8 = *(undefined8 *)(iVar3 + 0x54);
      *(undefined8 *)((int)puVar5 + -0x50) = uVar11;
    }
    uVar17 = (undefined4)uVar11;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x78),SUB84(param_1,0));
      *(undefined4 *)((int)puVar5 + -0x4c) = uVar17;
    }
    else {
      dVar12 = *(double *)(iVar4 + 0x78);
      *(undefined8 *)((int)puVar5 + -0x4c) = in_xd8;
    }
    *(undefined4 *)((int)puVar5 + -0x44) = *(undefined4 *)((int)puVar5 + -0x50);
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44(-(float)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0));
    }
    else {
      dVar12 = -dVar12;
    }
    uVar15 = (undefined4)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar5 + -0xc) = uVar15;
    }
    else {
      *(double *)((int)puVar5 + -0xc) = dVar12;
    }
    *(undefined4 *)((int)puVar5 + -0x40) = *(undefined4 *)((int)puVar5 + -0x4c);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar5 + -0x54) = (int)((ulonglong)param_2 >> 0x20);
    }
    else {
      *(double *)((int)puVar5 + -0x54) = param_2;
    }
    *(byte *)((int)puVar5 + -0x3b) = *(byte *)((int)puVar5 + -0x3b) & 3 | 0x18;
    *(ushort *)((int)puVar5 + -0x3c) = *(ushort *)((int)puVar5 + -0x3c) & (ushort)DAT_8c069790;
    *(undefined4 *)((int)puVar5 + -0x48) = *(undefined4 *)((int)puVar5 + -0x54);
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(uVar15,SUB84(in_dr14,0));
    }
    in_dr14 = dVar12;
    *(byte *)((int)puVar5 + -0x3c) =
         *(byte *)((int)puVar5 + -0x3c) & (byte)DAT_8c069784 & (byte)DAT_8c069786;
    (*(code *)PTR_FUN_8c06978c)
              (*(undefined4 *)((int)DAT_8c069788 + *(int *)((int)puVar5 + -0x10)),
               (undefined1 *)((int)puVar5 + -0x3c),(undefined1 *)((int)puVar5 + -0x38),
               (undefined1 *)((int)puVar5 + -0x30));
    (*(code *)PTR_FUN_8c069794)(*(int *)(*(int *)(DAT_8c06978a + param_3) + 0x20) + -7);
    (*(code *)puVar1)(*(undefined4 *)((int)DAT_8c069788 + *(int *)(DAT_8c069780 + param_3)),
                      (undefined1 *)((int)puVar5 + -0x3c),(undefined1 *)((int)puVar5 + -0x34),
                      (undefined1 *)((int)puVar5 + -0x30));
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)((ulonglong)*(uint *)((int)puVar5 + -0xc) << 0x20);
      dVar12 = (double)CONCAT44(*(undefined4 *)((int)puVar5 + -0x48),uVar17);
      in_dr2 = (double)CONCAT44(DAT_8c069798,uVar7);
    }
    else {
      dVar8 = *(double *)((int)puVar5 + -0xc);
      dVar12 = *(double *)((int)puVar5 + -0x48);
      in_dr2 = (double)CONCAT44(_DAT_8c06979c,DAT_8c069798);
    }
    fVar18 = (float)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      param_1 = (double)CONCAT44(ABS((float)((ulonglong)dVar8 >> 0x20) - fVar18) +
                                 (float)((ulonglong)in_dr2 >> 0x20),SUB84(dVar8,0));
    }
    else {
      param_1 = ABS(dVar8 - dVar12) + in_dr2;
    }
    fVar16 = SUB84(param_1,0);
    fVar9 = (float)((ulonglong)param_1 >> 0x20);
    if (in_FPSCR_PR == '\0' && fVar16 < fVar9) {
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(_DAT_8c06979c,extraout_fr1);
      }
      else {
        dVar8 = (double)CONCAT44(PTR_FUN_8c0697a0,_DAT_8c06979c);
      }
      fVar6 = (float)((ulonglong)dVar8 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar6 < fVar9;
      }
      else {
        bVar23 = dVar8 < param_1;
      }
      uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
      if (bVar23) {
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44(uVar7,fVar6);
          dVar8 = in_xd6;
        }
      }
      else {
        dVar8 = param_1;
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44(uVar7,fVar9);
          dVar8 = in_xd6;
        }
      }
      fVar9 = (float)((ulonglong)in_dr14 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar18 < fVar9;
      }
      else {
        bVar23 = dVar12 < in_dr14;
      }
      uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
      in_xd6 = dVar8;
      if (bVar23) {
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(fVar18,fVar9);
        }
        if (in_FPSCR_PR == '\0') {
          fVar18 = SUB84(dVar12,0) - SUB84(param_2,0);
        }
        else {
          fVar18 = SUB84(dVar12 - param_2,0);
        }
        pdVar2 = (double *)((int)puVar5 + -0x38);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(*(undefined4 *)pdVar2,fVar18);
        }
        else {
          dVar12 = *pdVar2;
        }
        if (in_FPSCR_PR == '\0' && SUB84(dVar12,0) < (float)((ulonglong)dVar12 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar12,0));
          }
          else {
            dVar12 = *pdVar2;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr14 = (double)CONCAT44(fVar9 - (float)((ulonglong)dVar12 >> 0x20),SUB84(in_dr14,0));
          }
          else {
            in_dr14 = in_dr14 - dVar12;
          }
          in_xd6 = in_dr14;
          if (in_FPSCR_SZ == '\0') {
            param_2 = (double)CONCAT44(uVar7,(int)((ulonglong)in_dr14 >> 0x20));
            in_xd6 = dVar8;
          }
        }
        fVar18 = SUB84(param_2,0);
        if (in_FPSCR_PR == '\0') {
          bVar23 = fVar16 < fVar18;
        }
        else {
          bVar23 = param_1 < param_2;
        }
        if (bVar23) {
          param_1 = in_xd6;
          param_2 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(fVar18,fVar16);
            param_2 = (double)CONCAT44(fVar16,fVar18);
          }
          (*(code *)PTR_FUN_8c0697a0)(param_1,iVar4 + 0x48);
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(fVar18,fVar9);
        }
        if (in_FPSCR_PR == '\0') {
          fVar18 = SUB84(dVar12,0) + SUB84(param_2,0);
        }
        else {
          fVar18 = SUB84(dVar12 + param_2,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar11 = CONCAT44(*(undefined4 *)((int)puVar5 + -0x34),fVar18);
        }
        else {
          uVar11 = *(undefined8 *)((int)puVar5 + -0x34);
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar11 >> 0x20) < (float)uVar11) {
          if (in_FPSCR_SZ == '\0') {
            param_2 = (double)CONCAT44(uVar7,*(undefined4 *)((int)puVar5 + -0x34));
          }
          else {
            dVar8 = *(double *)((int)puVar5 + -0x34);
          }
          in_xd6 = dVar8;
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(param_2,0) - fVar9);
          }
          else {
            param_2 = param_2 - in_dr14;
          }
        }
        if (in_FPSCR_PR == '\0') {
          bVar23 = fVar16 < SUB84(param_2,0);
        }
        else {
          bVar23 = param_1 < param_2;
        }
        if (bVar23) {
          fVar18 = -SUB84(param_2,0);
          param_2 = in_xd4;
          param_1 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            param_2 = (double)(ulonglong)(uint)fVar18;
            param_1 = (double)CONCAT44(fVar18,fVar16);
          }
          (*(code *)PTR_FUN_8c0697a0)(iVar4 + 0x48);
        }
      }
    }
  }
  puVar1 = PTR_FUN_8c069900;
  uVar7 = SUB84(in_dr2,0);
  uVar10 = (uint)((ulonglong)param_1 >> 0x20);
  if (*(int *)(*(int *)(DAT_8c069612 + param_3) + 8) != 0) {
    iVar4 = *(int *)(DAT_8c0698ea + param_3);
    *(int *)((int)puVar5 + -0x10) = iVar4;
    iVar3 = *(int *)(*(int *)(param_4 * 4 + param_3 + DAT_8c0698ec) + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar17 = *(undefined4 *)(iVar3 + 0x50);
      uVar15 = *(undefined4 *)(iVar3 + 0x54);
      uVar11 = CONCAT44(uVar15,SUB84(param_2,0));
      *(undefined4 *)((int)puVar5 + -0x2c) = *(undefined4 *)(iVar3 + 0x4c);
      *(undefined4 *)((int)puVar5 + -0x28) = uVar17;
      *(undefined4 *)((int)puVar5 + -0x24) = uVar15;
    }
    else {
      uVar19 = *(undefined8 *)(iVar3 + 0x4c);
      uVar22 = *(undefined8 *)(iVar3 + 0x50);
      uVar11 = *(undefined8 *)(iVar3 + 0x54);
      *(undefined8 *)((int)puVar5 + -0x2c) = uVar19;
      *(undefined8 *)((int)puVar5 + -0x28) = uVar22;
      uVar17 = (undefined4)uVar19;
      *(undefined8 *)((int)puVar5 + -0x24) = uVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x78),(int)uVar11);
    }
    else {
      dVar12 = *(double *)(iVar4 + 0x78);
    }
    *(undefined4 *)((int)puVar5 + -0x48) = *(undefined4 *)((int)puVar5 + -0x2c);
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44(-(float)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0));
    }
    else {
      dVar12 = -dVar12;
    }
    uVar15 = (undefined4)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar5 + -8) = uVar15;
    }
    else {
      *(double *)((int)puVar5 + -8) = dVar12;
    }
    *(undefined4 *)((int)puVar5 + -0x40) = *(undefined4 *)((int)puVar5 + -0x24);
    *(byte *)((int)puVar5 + -0x1f) = *(byte *)((int)puVar5 + -0x1f) & 3;
    *(undefined4 *)((int)puVar5 + -0x44) = *(undefined4 *)((int)puVar5 + -0x28);
    *(ushort *)((int)puVar5 + -0x20) =
         *(ushort *)((int)puVar5 + -0x20) & (ushort)DAT_8c0698fc | DAT_8c0698ee;
    dVar8 = dVar12;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(uVar15,SUB84(in_dr14,0));
    }
    *(byte *)((int)puVar5 + -0x20) =
         (*(byte *)((int)puVar5 + -0x20) & (byte)DAT_8c0698f0 | 0x10) & (byte)DAT_8c0698f2;
    (*(code *)PTR_FUN_8c069900)
              (*(undefined4 *)((int)DAT_8c0698f4 + *(int *)((int)puVar5 + -0x10)),
               (undefined1 *)((int)puVar5 + -0x20),(undefined1 *)((int)puVar5 + -0x1c),
               (undefined1 *)((int)puVar5 + -0x18));
    uVar15 = SUB84(dVar12,0);
    (*(code *)PTR_FUN_8c069904)();
    (*(code *)puVar1)(*(undefined4 *)((int)DAT_8c0698f4 + *(int *)(DAT_8c0698ea + param_3)),
                      (undefined1 *)((int)puVar5 + -0x20),(undefined1 *)((int)puVar5 + -0x1c),
                      (undefined1 *)((int)puVar5 + -0x14));
    dVar12 = (double)((ulonglong)uVar10 << 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)((int)puVar5 + -8),uVar15);
      dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar5 + -0x48),uVar17);
      dVar14 = (double)CONCAT44(DAT_8c069908,uVar7);
    }
    else {
      dVar13 = *(double *)((int)puVar5 + -8);
      dVar20 = *(double *)((int)puVar5 + -0x48);
      dVar14 = (double)CONCAT44(_DAT_8c06990c,DAT_8c069908);
    }
    fVar18 = (float)((ulonglong)dVar20 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar16 = ABS((float)((ulonglong)dVar13 >> 0x20) - fVar18) + (float)((ulonglong)dVar14 >> 0x20)
      ;
      dVar14 = (double)CONCAT44(fVar16,SUB84(dVar13,0));
      bVar23 = 0.0 < fVar16;
    }
    else {
      dVar14 = ABS(dVar13 - dVar20) + dVar14;
      fVar16 = (float)((ulonglong)dVar14 >> 0x20);
      bVar23 = dVar12 < dVar14;
    }
    if (bVar23) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(_DAT_8c06990c,extraout_fr1_00);
      }
      else {
        dVar13 = (double)CONCAT44(PTR_FUN_8c069910,_DAT_8c06990c);
      }
      fVar9 = (float)((ulonglong)dVar13 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar9 < fVar16;
      }
      else {
        bVar23 = dVar13 < dVar14;
      }
      if (bVar23) {
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(fVar16,fVar9);
          dVar13 = in_xd6;
        }
      }
      else {
        dVar13 = dVar14;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(fVar16,fVar16);
          dVar13 = in_xd6;
        }
      }
      fVar16 = (float)((ulonglong)dVar8 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar23 = fVar18 < fVar16;
      }
      else {
        bVar23 = dVar20 < dVar8;
      }
      uVar7 = (undefined4)((ulonglong)dVar14 >> 0x20);
      if (bVar23) {
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(fVar18,fVar16);
        }
        if (in_FPSCR_PR == '\0') {
          fVar18 = SUB84(dVar20,0) - SUB84(dVar14,0);
        }
        else {
          fVar18 = SUB84(dVar20 - dVar14,0);
        }
        pdVar2 = (double *)((int)puVar5 + -0x18);
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)pdVar2,fVar18);
        }
        else {
          dVar20 = *pdVar2;
        }
        dVar21 = dVar13;
        if (in_FPSCR_PR == '\0' && SUB84(dVar20,0) < (float)((ulonglong)dVar20 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar20,0));
          }
          else {
            dVar21 = *pdVar2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44(fVar16 - (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar8,0));
          }
          else {
            dVar21 = dVar8 - dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(uVar7,(int)((ulonglong)dVar21 >> 0x20));
            dVar21 = dVar13;
          }
        }
        fVar18 = SUB84(dVar14,0);
        if (in_FPSCR_PR == '\0') {
          bVar23 = 0.0 < fVar18;
        }
        else {
          bVar23 = dVar12 < dVar14;
        }
        if (bVar23) {
          if (in_FPSCR_SZ == '\0') {
            in_xd4 = 0.0;
            dVar21 = (double)CONCAT44(fVar18,fVar18);
          }
          (*(code *)PTR_FUN_8c069910)(in_xd4,dVar21,iVar4 + 0x48);
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(fVar18,fVar16);
        }
        if (in_FPSCR_PR == '\0') {
          fVar18 = SUB84(dVar20,0) + SUB84(dVar14,0);
        }
        else {
          fVar18 = SUB84(dVar20 + dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar11 = CONCAT44(*(undefined4 *)((int)puVar5 + -0x14),fVar18);
        }
        else {
          uVar11 = *(undefined8 *)((int)puVar5 + -0x14);
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar11 >> 0x20) < (float)uVar11) {
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)CONCAT44(uVar7,*(undefined4 *)((int)puVar5 + -0x14));
          }
          else {
            dVar13 = *(double *)((int)puVar5 + -0x14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar14,0) - fVar16);
          }
          else {
            dVar14 = dVar14 - dVar8;
          }
        }
        if (in_FPSCR_PR == '\0') {
          bVar23 = 0.0 < SUB84(dVar14,0);
        }
        else {
          bVar23 = dVar12 < dVar14;
        }
        if (bVar23) {
          fVar18 = -SUB84(dVar14,0);
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(fVar18,fVar18);
            in_xd4 = 0.0;
          }
          (*(code *)PTR_FUN_8c069910)(in_xd4,dVar13,iVar4 + 0x48);
        }
      }
    }
  }
  return;
}

