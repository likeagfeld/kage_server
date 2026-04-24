// entry: 8c02d630
// name: FUN_8c02d630
// signature: undefined FUN_8c02d630(void)


/* WARNING: Removing unreachable block (ram,0x8c02dd32) */
/* WARNING: Removing unreachable block (ram,0x8c02dc70) */
/* WARNING: Removing unreachable block (ram,0x8c02e328) */
/* WARNING: Removing unreachable block (ram,0x8c02e1fa) */
/* WARNING: Removing unreachable block (ram,0x8c02d742) */
/* WARNING: Removing unreachable block (ram,0x8c02e2ae) */
/* WARNING: Removing unreachable block (ram,0x8c02dc7e) */
/* WARNING: Removing unreachable block (ram,0x8c02dc84) */
/* WARNING: Removing unreachable block (ram,0x8c02dc66) */
/* WARNING: Removing unreachable block (ram,0x8c02d6d8) */

void FUN_8c02d630(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint in_fr3;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  double dVar24;
  float fVar26;
  float fVar27;
  double dVar25;
  bool bVar28;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_20;
  byte local_14 [4];
  
  local_14[0] = 0xf4;
  local_14[1] = 0x15;
  local_14[2] = 0;
  local_14[3] = 0;
  iVar9 = (int)DAT_8c02d7d2;
  *(undefined4 *)(&stack0xfffffff4 + iVar9) = param_4;
  iVar15 = *(int *)(DAT_8c02d7d4 + param_3);
  *(undefined4 *)(&stack0xfffffffc + iVar9) = param_6;
  *(undefined4 *)(&stack0xfffffff8 + iVar9) = param_5;
  *(int *)(&stack0xfffffff0 + iVar9) = param_3;
  if (iVar15 == 0) {
    *(undefined4 *)(DAT_8c02d7d6 + param_3) = 0;
    *(undefined4 *)(DAT_8c02d7d8 + param_3) = 0;
  }
  if (*(int *)(DAT_8c02d7da + param_3) <= iVar15) {
    return;
  }
  if (*(int *)(DAT_8c02d7dc + param_3) != 0) {
    return;
  }
  *(int *)(&stack0x00000000 + iVar9) = *(int *)(&stack0xfffffff4 + iVar9) + -1;
  *(int *)(&stack0x00000004 + iVar9) = *(int *)(&stack0xfffffff8 + iVar9) + -1;
  if (*(int *)(&stack0xfffffff4 + iVar9) + -1 < 0) {
                    /* WARNING: Could not recover jumptable at 0x8c02d68e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_8c02d7e8)();
    return;
  }
  if (*(int *)(DAT_8c02d7de + param_3) <= *(int *)(&stack0x00000000 + iVar9)) {
                    /* WARNING: Could not recover jumptable at 0x8c02d6a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_8c02d7e8)();
    return;
  }
  if (*(int *)(&stack0x00000004 + iVar9) < 0) {
                    /* WARNING: Could not recover jumptable at 0x8c02d6b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_8c02d7ec)();
    return;
  }
  if (*(int *)(DAT_8c02d7e0 + param_3) <= *(int *)(&stack0x00000004 + iVar9)) {
                    /* WARNING: Could not recover jumptable at 0x8c02d6ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_8c02d7ec)();
    return;
  }
  *(int *)(&stack0x00000008 + iVar9) = *(int *)(&stack0xfffffff4 + iVar9) + 1;
  *(int *)(&stack0x0000000c + iVar9) = *(int *)(&stack0xfffffff8 + iVar9) + 1;
  if (*(int *)(&stack0xfffffff4 + iVar9) + 1 < 0) {
                    /* WARNING: Could not recover jumptable at 0x8c02d6f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_8c02d7f0)();
    return;
  }
  if (*(int *)(&stack0x00000008 + iVar9) < *(int *)(DAT_8c02d7de + param_3)) {
    if ((*(int *)(&stack0x0000000c + iVar9) < 0) ||
       (*(int *)(DAT_8c02d7e0 + param_3) <= *(int *)(&stack0x0000000c + iVar9))) {
      bVar28 = false;
    }
    else {
      bVar28 = true;
    }
  }
  else {
    bVar28 = false;
  }
  if (!bVar28) {
    return;
  }
  iVar17 = *(int *)(&stack0xfffffff4 + iVar9) + *(int *)(&stack0xfffffff8 + iVar9) * 0x40;
  dVar25 = (double)(ulonglong)in_fr3;
  *(int *)(&stack0x00000014 + iVar9) = DAT_8c02d7f4;
  iVar13 = DAT_8c02d7f4 + iVar17 * 0x10;
  *(int *)(&stack0x00000010 + iVar9) = iVar17;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)(iVar13 + 4),param_1);
  }
  else {
    dVar21 = *(double *)(iVar13 + 4);
  }
  fVar27 = (float)((ulonglong)dVar21 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar28 = fVar27 == 0.0;
  }
  else {
    bVar28 = dVar21 == dVar25;
  }
  *(int *)(&stack0x00000018 + iVar9) = iVar13;
  if ((bVar28) || (iVar13 = *(int *)(DAT_8c02d7d4 + param_3), iVar13 < 1)) {
    bVar28 = false;
  }
  else {
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((float)iVar13,param_2);
    }
    else {
      dVar24 = (double)iVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                *(undefined4 *)(DAT_8c02d7e2 + param_3));
      dVar25 = (double)CONCAT44(DAT_8c02d7f8,in_fr3);
    }
    else {
      dVar25 = (double)CONCAT44(PTR_FUN_8c02d7fc,DAT_8c02d7f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = (float)((ulonglong)dVar24 >> 0x20) + (float)((ulonglong)dVar25 >> 0x20);
      fVar22 = SUB84(dVar24,0) * fVar26;
      dVar24 = (double)CONCAT44(fVar26,fVar22);
      bVar28 = fVar22 < fVar27;
    }
    else {
      dVar24 = (dVar24 + dVar25) * (dVar24 + dVar25);
      bVar28 = dVar24 < dVar21;
    }
    param_2 = SUB84(dVar24,0);
    bVar28 = (bool)(bVar28 ^ 1);
  }
  uVar16 = SUB84(dVar25,0);
  if (bVar28) {
    *(undefined4 *)(DAT_8c02df74 + param_3) = 1;
    return;
  }
  uVar10 = *(uint *)(&stack0xfffffff4 + iVar9);
  *(int *)(&stack0x0000001c + iVar9) = param_3 + DAT_8c02d7e4;
  *(undefined2 *)(param_3 + DAT_8c02d7e4 + iVar15 * 2) = 0;
  *(int *)(&stack0x00000020 + iVar9) = param_3 + DAT_8c02d7e6;
  iVar15 = *(int *)(DAT_8c02d7d4 + param_3);
  *(int *)(&stack0x00000040 + iVar9) = iVar15;
  (*(code *)PTR_FUN_8c02d7fc)(*(int *)(&stack0x00000020 + iVar9) + iVar15 * 2,6,uVar10 & 0xffff);
  (*(code *)PTR_FUN_8c02d994)(*(uint *)(&stack0xfffffff8 + iVar9) & 0xffff,(int)DAT_8c02d97c);
  bVar12 = 0;
  if (((0x4f < *(byte *)(*(int *)(&stack0x00000018 + iVar9) + 8)) &&
      (*(byte *)(*(int *)(&stack0x00000018 + iVar9) + 8) < 0x5a)) &&
     (0 < *(int *)(&stack0x00000040 + iVar9))) {
    bVar12 = 1;
  }
  *(uint *)(&stack0x00000024 + iVar9) = (uint)bVar12;
  dVar25 = (double)(ulonglong)uVar16;
  iVar15 = *(int *)(&stack0x00000014 + iVar9) + *(int *)(&stack0x00000010 + iVar9) * 0x10;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)(iVar15 + 4),param_2);
  }
  else {
    dVar21 = *(double *)(iVar15 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    bVar28 = (float)((ulonglong)dVar21 >> 0x20) == 0.0;
  }
  else {
    bVar28 = dVar21 == dVar25;
  }
  *(int *)(&stack0x00000014 + iVar9) = iVar15;
  if ((bVar28) && ((**(ushort **)(&stack0x00000014 + iVar9) & 0x20) == 0)) {
    if (*(int *)(DAT_8c02d97e + param_3) != 0) {
      iVar15 = *(int *)(DAT_8c02d980 + param_3) * 3 - *(int *)(&stack0x00000040 + iVar9);
      *(int *)(&stack0x00000028 + iVar9) = iVar15;
      iVar13 = *(int *)(DAT_8c02d982 + param_3);
      if ((iVar13 == iVar15) && (iVar15 != 0)) {
        iVar15 = (*(code *)PTR_FUN_8c02df88)();
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((float)iVar15,SUB84(dVar21,0));
        }
        else {
          dVar21 = (double)iVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44(DAT_8c02df8c,SUB84(dVar25,0));
        }
        else {
          dVar25 = (double)CONCAT44(DAT_8c02df90,DAT_8c02df8c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) /
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 / dVar25;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44(DAT_8c02df90,SUB84(dVar25,0));
        }
        else {
          dVar25 = (double)CONCAT44(PTR_FUN_8c02df94,DAT_8c02df90);
        }
        if (in_FPSCR_PR == '\0') {
          fVar27 = (float)((ulonglong)dVar21 >> 0x20) * (float)((ulonglong)dVar25 >> 0x20);
          dVar21 = (double)CONCAT44(fVar27,SUB84(dVar21,0));
          iVar15 = (int)fVar27;
        }
        else {
          dVar21 = dVar21 * dVar25;
          iVar15 = (int)dVar21;
        }
        iVar13 = *(int *)(DAT_8c02df76 + param_3);
        if (iVar15 < 0x32) {
          *(int *)(&stack0x00000028 + iVar9) = *(int *)(&stack0x00000028 + iVar9) + 1;
        }
      }
      if (iVar13 < *(int *)(&stack0x00000028 + iVar9)) {
        iVar15 = (int)DAT_8c02df78;
        *(int *)(DAT_8c02df76 + param_3) = *(int *)(&stack0x00000028 + iVar9);
        puVar3 = PTR_FUN_8c02df94;
        *(undefined4 *)(DAT_8c02df70 + param_3) = 1;
        uVar14 = *(undefined4 *)(&stack0x0000001c + iVar9);
        iVar13 = *(int *)(DAT_8c02df6e + param_3);
        *(int *)(DAT_8c02df7a + param_3) = iVar13;
        *(int *)(DAT_8c02df7c + param_3) = iVar13;
        *(undefined4 *)(DAT_8c02df80 + param_3) = *(undefined4 *)(DAT_8c02df7e + param_3);
        *(undefined **)(&stack0x0000002c + iVar9) = puVar3;
        (*(code *)puVar3)(param_3 + iVar15,uVar14,(iVar13 + 1) * 2);
        (**(code **)(&stack0x0000002c + iVar9))
                  (param_3 + DAT_8c02df82,*(undefined4 *)(&stack0x00000020 + iVar9),
                   (*(int *)(DAT_8c02df7a + param_3) + 1) * 2);
      }
    }
  }
  else {
    *(undefined4 *)(DAT_8c02df74 + param_3) = 1;
  }
  iVar15 = *(int *)(DAT_8c02d984 + param_3);
  uVar16 = (uint)*(ushort *)(param_3 + 0x54);
  *(int *)(&stack0x00000030 + iVar9) = iVar15 + DAT_8c02d986;
  *(int *)(&stack0x00000034 + iVar9) = iVar15 + DAT_8c02d988;
  sVar1 = *(short *)(iVar15 + uVar16 * 0x1e + 6);
  iVar15 = *(int *)(&stack0x00000030 + iVar9) + uVar16 * 0x1e;
  *(int *)(&stack0x00000030 + iVar9) = iVar15;
  sVar2 = *(short *)(iVar15 + 6);
  iVar15 = *(int *)(&stack0x00000034 + iVar9) + uVar16 * 0x1e;
  *(int *)(&stack0x00000034 + iVar9) = iVar15;
  if ((int)sVar1 + (int)sVar2 + (int)*(short *)(iVar15 + 6) != 0) {
    if (*(int *)((*(int *)(&stack0xfffffff4 + iVar9) +
                 *(int *)(*(int *)(DAT_8c02d98a + param_3) + 0x20) *
                 *(int *)(&stack0xfffffff8 + iVar9)) * 4 +
                *(int *)((int)DAT_8c02d98c + *(int *)(DAT_8c02d98a + param_3)) + 4) == 0) {
LAB_8c02d9aa:
      if (*(int *)((*(int *)(&stack0xfffffff4 + iVar9) +
                   *(int *)(*(int *)(DAT_8c02db22 + param_3) + 0x20) *
                   *(int *)(&stack0xfffffff8 + iVar9)) * 4 +
                  *(int *)((int)DAT_8c02db24 + *(int *)(DAT_8c02db22 + param_3)) + -4) != 0) {
        if ((*(int *)(&stack0xfffffff4 + iVar9) + -2 < 0) ||
           (*(int *)(DAT_8c02db26 + param_3) <= *(int *)(&stack0xfffffff4 + iVar9) + -2)) {
          bVar28 = false;
        }
        else if ((*(int *)(&stack0xfffffff8 + iVar9) < 0) ||
                (*(int *)(DAT_8c02db28 + param_3) <= *(int *)(&stack0xfffffff8 + iVar9))) {
          bVar28 = false;
        }
        else {
          bVar28 = true;
        }
        if (bVar28) {
          uVar4 = (*(code *)PTR_FUN_8c02e110)(*(undefined4 *)(&stack0xfffffff8 + iVar9),1);
          iVar15 = (*(code *)PTR_FUN_8c02e114)(*(undefined4 *)(DAT_8c02e102 + param_3),uVar4);
          if ((iVar15 != 0) &&
             (*(int *)((*(int *)(&stack0xfffffff4 + iVar9) +
                       *(int *)(*(int *)(DAT_8c02e102 + param_3) + 0x20) *
                       *(int *)(&stack0xfffffff8 + iVar9)) * 4 +
                      *(int *)((int)DAT_8c02e104 + *(int *)(DAT_8c02e102 + param_3)) + -8) == 0)) {
            (*(code *)PTR_FUN_8c02e118)
                      (*(undefined4 *)(&stack0x00000000 + iVar9),
                       *(undefined4 *)(&stack0xfffffff8 + iVar9));
            iVar15 = (*(code *)PTR_FUN_8c02e11c)(4);
            if (iVar15 == 2) {
              *(undefined4 *)(DAT_8c02e106 + param_3) = 1;
              iVar15 = *(int *)(DAT_8c02e108 + param_3);
              goto LAB_8c02db34;
            }
          }
        }
      }
      if (*(int *)((*(int *)(*(int *)(DAT_8c02db22 + param_3) + 0x20) *
                    *(int *)(&stack0x0000000c + iVar9) + *(int *)(&stack0xfffffff4 + iVar9)) * 4 +
                  *(int *)((int)DAT_8c02db24 + *(int *)(DAT_8c02db22 + param_3))) != 0) {
        iVar15 = *(int *)(&stack0xfffffff8 + iVar9) + 2;
        *(int *)(&stack0x00000038 + iVar9) = iVar15;
        if ((*(int *)(&stack0xfffffff4 + iVar9) < 0) ||
           (*(int *)(DAT_8c02db26 + param_3) <= *(int *)(&stack0xfffffff4 + iVar9))) {
          bVar28 = false;
        }
        else if ((iVar15 < 0) || (*(int *)(DAT_8c02db28 + param_3) <= iVar15)) {
          bVar28 = false;
        }
        else {
          bVar28 = true;
        }
        if (bVar28) {
          uVar4 = (*(code *)PTR_FUN_8c02e110)(*(undefined4 *)(&stack0xfffffff4 + iVar9),1);
          iVar15 = (*(code *)PTR_FUN_8c02e114)(*(undefined4 *)(DAT_8c02e102 + param_3),uVar4);
          if ((iVar15 != 0) &&
             (*(int *)((*(int *)(*(int *)(DAT_8c02e102 + param_3) + 0x20) *
                        *(int *)(&stack0x00000038 + iVar9) + *(int *)(&stack0xfffffff4 + iVar9)) * 4
                      + *(int *)((int)DAT_8c02e104 + *(int *)(DAT_8c02e102 + param_3))) == 0)) {
            (*(code *)PTR_FUN_8c02e118)
                      (*(undefined4 *)(&stack0xfffffff4 + iVar9),
                       *(undefined4 *)(&stack0x0000000c + iVar9));
            iVar15 = (*(code *)PTR_FUN_8c02e11c)(4);
            if (iVar15 == 2) {
              *(undefined4 *)(DAT_8c02e106 + param_3) = 8;
              iVar15 = *(int *)(DAT_8c02e108 + param_3);
              goto LAB_8c02db34;
            }
          }
        }
      }
      iVar13 = *(int *)(DAT_8c02db22 + param_3);
      iVar15 = *(int *)(iVar13 + 0x20);
      *(int *)(&stack0x0000003c + iVar9) = *(int *)(&stack0xfffffff8 + iVar9) + -2;
      if (*(int *)((iVar15 * (*(int *)(&stack0xfffffff8 + iVar9) + -2) +
                   *(int *)(&stack0xfffffff4 + iVar9)) * 4 + *(int *)(DAT_8c02db24 + iVar13)) != 0)
      {
        if ((*(int *)(&stack0xfffffff4 + iVar9) < 0) ||
           (*(int *)(DAT_8c02db26 + param_3) <= *(int *)(&stack0xfffffff4 + iVar9))) {
          bVar28 = false;
        }
        else if ((*(int *)(&stack0x0000003c + iVar9) < 0) ||
                (*(int *)(DAT_8c02db28 + param_3) <= *(int *)(&stack0x0000003c + iVar9))) {
          bVar28 = false;
        }
        else {
          bVar28 = true;
        }
        if (bVar28) {
          uVar4 = (*(code *)PTR_FUN_8c02e110)
                            (*(undefined4 *)(&stack0xfffffff4 + iVar9),
                             *(undefined4 *)(&stack0x0000003c + iVar9),1);
          iVar15 = (*(code *)PTR_FUN_8c02e114)(*(undefined4 *)(DAT_8c02e102 + param_3),uVar4);
          if ((iVar15 != 0) &&
             (*(int *)((*(int *)(*(int *)(DAT_8c02e102 + param_3) + 0x20) *
                        *(int *)(&stack0x0000003c + iVar9) + *(int *)(&stack0xfffffff4 + iVar9)) * 4
                      + *(int *)((int)DAT_8c02e104 + *(int *)(DAT_8c02e102 + param_3))) == 0)) {
            (*(code *)PTR_FUN_8c02e118)
                      (*(undefined4 *)(&stack0xfffffff4 + iVar9),
                       *(undefined4 *)(&stack0x00000004 + iVar9));
            iVar15 = (*(code *)PTR_FUN_8c02e11c)(4);
            if (iVar15 == 2) {
              *(undefined4 *)(DAT_8c02e106 + param_3) = 4;
              iVar15 = *(int *)(DAT_8c02e108 + param_3);
              goto LAB_8c02db34;
            }
          }
        }
      }
      *(undefined4 *)(DAT_8c02dc9a + param_3) = 0;
      iVar15 = *(int *)(DAT_8c02dc9c + param_3);
    }
    else {
      if ((*(int *)(&stack0xfffffff4 + iVar9) + 2 < 0) ||
         (*(int *)(DAT_8c02d98e + param_3) <= *(int *)(&stack0xfffffff4 + iVar9) + 2)) {
        bVar28 = false;
      }
      else if ((*(int *)(&stack0xfffffff8 + iVar9) < 0) ||
              (*(int *)(DAT_8c02d990 + param_3) <= *(int *)(&stack0xfffffff8 + iVar9))) {
        bVar28 = false;
      }
      else {
        bVar28 = true;
      }
      if (!bVar28) goto LAB_8c02d9aa;
      uVar4 = (*(code *)PTR_FUN_8c02df98)(*(undefined4 *)(&stack0xfffffff8 + iVar9),1);
      iVar15 = (*(code *)PTR_FUN_8c02df9c)(*(undefined4 *)(DAT_8c02df84 + param_3),uVar4);
      if ((iVar15 == 0) ||
         (*(int *)((*(int *)(&stack0xfffffff4 + iVar9) +
                   *(int *)(*(int *)(DAT_8c02df84 + param_3) + 0x20) *
                   *(int *)(&stack0xfffffff8 + iVar9)) * 4 +
                  *(int *)((int)DAT_8c02df86 + *(int *)(DAT_8c02df84 + param_3)) + 8) != 0))
      goto LAB_8c02d9aa;
      (*(code *)PTR_FUN_8c02dfa0)
                (*(undefined4 *)(&stack0x00000008 + iVar9),*(undefined4 *)(&stack0xfffffff8 + iVar9)
                );
      iVar15 = (*(code *)PTR_FUN_8c02dfa4)(4);
      if (iVar15 != 2) goto LAB_8c02d9aa;
      *(undefined4 *)(DAT_8c02df7e + param_3) = 2;
      iVar15 = *(int *)(DAT_8c02df76 + param_3);
    }
LAB_8c02db34:
    uVar14 = SUB84(dVar25,0);
    uVar23 = SUB84(dVar21,0);
    if (*(int *)(DAT_8c02dc9a + param_3) == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(DAT_8c02e10a + param_3) - *(int *)(DAT_8c02e10c + param_3);
    }
    *(int *)(&stack0x00000028 + iVar9) = iVar13;
    if ((iVar15 == iVar13) && (iVar13 != 0)) {
      iVar15 = (*(code *)PTR_FUN_8c02e274)();
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((float)iVar15,uVar23);
      }
      else {
        dVar21 = (double)iVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = (double)CONCAT44(DAT_8c02e278,uVar14);
      }
      else {
        dVar25 = (double)CONCAT44(DAT_8c02e27c,DAT_8c02e278);
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) /
                                  (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 / dVar25;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = (double)CONCAT44(DAT_8c02e27c,SUB84(dVar25,0));
      }
      else {
        dVar25 = (double)CONCAT44(PTR_FUN_8c02e280,DAT_8c02e27c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar27 = (float)((ulonglong)dVar21 >> 0x20) * (float)((ulonglong)dVar25 >> 0x20);
        dVar21 = (double)CONCAT44(fVar27,SUB84(dVar21,0));
        iVar13 = (int)fVar27;
      }
      else {
        dVar21 = dVar21 * dVar25;
        iVar13 = (int)dVar21;
      }
      iVar15 = *(int *)(DAT_8c02e25c + param_3);
      if (iVar13 < 0x32) {
        *(int *)(&stack0x00000028 + iVar9) = *(int *)(&stack0x00000028 + iVar9) + 1;
      }
    }
    iVar13 = *(int *)(&stack0x00000028 + iVar9);
    if (iVar15 < iVar13) {
      iVar19 = *(int *)(&stack0x0000001c + iVar9);
      *(undefined4 *)(DAT_8c02e25e + param_3) = 1;
      puVar3 = PTR_FUN_8c02e280;
      *(int *)(DAT_8c02e25c + param_3) = iVar13;
      *(undefined4 *)(DAT_8c02e260 + param_3) = 1;
      iVar17 = (int)DAT_8c02e264;
      iVar13 = *(int *)(DAT_8c02e262 + param_3);
      iVar15 = (int)DAT_8c02e266;
      *(int *)(iVar15 + param_3) = iVar13;
      *(undefined2 *)(iVar19 + iVar13 * 2) = 2;
      iVar15 = *(int *)(iVar15 + param_3);
      *(int *)(DAT_8c02e268 + param_3) = iVar15;
      *(undefined4 *)(DAT_8c02e26c + param_3) = *(undefined4 *)(DAT_8c02e26a + param_3);
      *(undefined **)(&stack0x0000002c + iVar9) = puVar3;
      (*(code *)puVar3)(param_3 + iVar17,(iVar15 + 1) * 2);
      (**(code **)(&stack0x0000002c + iVar9))
                (param_3 + DAT_8c02e26e,*(undefined4 *)(&stack0x00000020 + iVar9),
                 (*(int *)(DAT_8c02e266 + param_3) + 1) * 2);
      puVar11 = (undefined2 *)
                (*(int *)(&stack0x0000001c + iVar9) + *(int *)(DAT_8c02e262 + param_3) * 2);
      *puVar11 = 0;
      *(undefined2 **)(&stack0x0000001c + iVar9) = puVar11;
    }
  }
  iVar15 = *(int *)(&stack0xfffffff0 + iVar9);
  iVar13 = *(int *)(DAT_8c02dc9e + iVar15);
  *(int *)(&stack0x00000044 + iVar9) = iVar13;
  uVar16 = (uint)*(ushort *)(iVar15 + 0x54);
  if ((int)*(short *)(iVar13 + uVar16 * 0x1e + 10) +
      (int)*(short *)(iVar13 + DAT_8c02dca0 + uVar16 * 0x1e + 10) +
      (int)*(short *)(iVar13 + DAT_8c02dca2 + uVar16 * 0x1e + 10) == 0) goto LAB_8c02dd7a;
  if ((int)*(short *)(iVar13 + uVar16 * 0x1e + 6) +
      (int)*(short *)(iVar13 + DAT_8c02dca0 + uVar16 * 0x1e + 6) +
      (int)*(short *)(iVar13 + DAT_8c02dca2 + uVar16 * 0x1e + 6) == 0) {
    uVar16 = *(uint *)(&stack0xfffffffc + iVar9) & 0xff;
  }
  else {
    iVar13 = *(int *)(&stack0xfffffffc + iVar9);
    if (iVar13 == 7) {
      uVar16 = 4;
    }
    else if (iVar13 == 0xb) {
      uVar16 = 8;
    }
    else if (iVar13 == 0xd) {
      uVar16 = 1;
    }
    else if (iVar13 == 0xe) {
      uVar16 = 2;
    }
    else {
      uVar16 = 0;
    }
  }
  if ((uVar16 & 2) == 0) {
LAB_8c02dc32:
    if ((uVar16 & 1) != 0) {
      iVar13 = *(int *)(&stack0xfffffff4 + iVar9);
      *(undefined4 *)((int)&local_20 + iVar9) = 3;
      (*(code *)PTR_FUN_8c02e414)(iVar15,iVar13 + -1,*(undefined4 *)(&stack0xfffffff8 + iVar9),1);
      if ((*(ushort *)
            (DAT_8c02e418 + (*(int *)(&stack0xfffffff8 + iVar9) * 0x40 + iVar13 + -1) * 0x10) & 0x20
          ) != 0) {
        *(int *)(&stack0x00000048 + iVar9) = iVar15 + DAT_8c02e404;
        *(undefined **)(&stack0x0000004c + iVar9) = PTR_FUN_8c02e41c;
        uVar14 = (*(code *)PTR_FUN_8c02e41c)(6);
        *(undefined4 *)(&stack0x00000054 + iVar9) = uVar14;
        uVar14 = (**(code **)(&stack0x0000004c + iVar9))
                           (*(undefined4 *)(&stack0x00000048 + iVar9),(int)DAT_8c02e406);
        iVar13 = (*(code *)PTR_FUN_8c02e420)
                           (iVar15,*(undefined4 *)(&stack0x00000054 + iVar9),uVar14);
        uVar14 = SUB84(dVar25,0);
        uVar23 = SUB84(dVar21,0);
        if (iVar13 != 0) {
          *(undefined4 *)(DAT_8c02e408 + iVar15) = 1;
          goto LAB_8c02dd52;
        }
      }
    }
    if ((uVar16 & 8) != 0) {
      *(undefined4 *)((int)&local_20 + iVar9) = 3;
      (*(code *)PTR_FUN_8c02e414)
                (iVar15,*(undefined4 *)(&stack0xfffffff4 + iVar9),
                 *(int *)(&stack0xfffffff8 + iVar9) + 1,8);
      if ((*(ushort *)
            (DAT_8c02e418 +
            (*(int *)(&stack0xfffffff8 + iVar9) * 0x40 + *(int *)(&stack0xfffffff4 + iVar9) + 0x40)
            * 0x10) & 0x20) != 0) {
        *(int *)(&stack0x00000048 + iVar9) = iVar15 + DAT_8c02e404;
        *(undefined **)(&stack0x0000004c + iVar9) = PTR_FUN_8c02e41c;
        uVar14 = (*(code *)PTR_FUN_8c02e41c)(6);
        *(undefined4 *)(&stack0x00000058 + iVar9) = uVar14;
        uVar14 = (**(code **)(&stack0x0000004c + iVar9))
                           (*(undefined4 *)(&stack0x00000048 + iVar9),(int)DAT_8c02e406);
        iVar13 = (*(code *)PTR_FUN_8c02e420)
                           (iVar15,*(undefined4 *)(&stack0x00000058 + iVar9),uVar14);
        uVar14 = SUB84(dVar25,0);
        uVar23 = SUB84(dVar21,0);
        if (iVar13 != 0) {
          *(undefined4 *)(DAT_8c02e408 + iVar15) = 8;
          goto LAB_8c02dd52;
        }
      }
    }
    uVar14 = SUB84(dVar25,0);
    uVar23 = SUB84(dVar21,0);
    if ((uVar16 & 4) != 0) {
      iVar13 = *(int *)(&stack0xfffffff8 + iVar9);
      *(int *)((int)&local_20 + DAT_8c02dca6 + iVar9) = iVar15 + DAT_8c02dca4;
      *(undefined4 *)(&stack0x0000005c + iVar9) = 0;
      *(undefined4 *)((int)&local_20 + DAT_8c02e6f0 + iVar9) = 0xffffffff;
      *(undefined4 *)((int)&local_20 + DAT_8c02e6f4 + iVar9) =
           *(undefined4 *)(DAT_8c02e6f2 + iVar15);
      iVar19 = *(int *)(&stack0x0000005c + iVar9);
      iVar20 = 0;
      iVar8 = *(int *)((int)&local_20 + DAT_8c02de00 + iVar9);
      uVar16 = *(int *)(&stack0xfffffff4 + iVar9) + iVar19 * 3;
      iVar17 = *(int *)((int)&local_20 + DAT_8c02de02 + iVar9);
      iVar13 = iVar13 + -1 + iVar8 * 3;
      if (0 < iVar17) {
        do {
          iVar7 = *(int *)(DAT_8c02de04 + iVar15);
          iVar18 = *(int *)(DAT_8c02de06 + iVar15);
          if ((int)uVar16 < 0) {
            uVar16 = uVar16 + iVar7;
          }
          if (iVar13 < 0) {
            iVar13 = iVar13 + iVar18;
          }
          if (iVar7 <= (int)uVar16) {
            uVar16 = uVar16 - iVar7;
          }
          if (iVar18 <= iVar13) {
            iVar13 = iVar13 - iVar18;
          }
          iVar7 = (*(code *)PTR_FUN_8c02de18)(*(undefined4 *)(DAT_8c02de08 + iVar15),uVar16,iVar13);
          uVar14 = SUB84(dVar25,0);
          uVar23 = SUB84(dVar21,0);
          if (iVar7 != 0) break;
          iVar20 = iVar20 + 1;
          uVar16 = uVar16 + iVar19;
          iVar13 = iVar13 + iVar8;
        } while (iVar20 < iVar17);
      }
      puVar3 = PTR_FUN_8c02de1c;
      (*(code *)PTR_FUN_8c02de1c)(uVar16 & 0xffff,6);
      (*(code *)puVar3)((int)DAT_8c02de0c);
      puVar3 = PTR_FUN_8c02e41c;
      if ((*(ushort *)
            (DAT_8c02de20 +
            (*(int *)(&stack0xfffffff8 + iVar9) * 0x40 + *(int *)(&stack0xfffffff4 + iVar9) + -0x40)
            * 0x10) & 0x20) != 0) {
        uVar5 = (*(code *)PTR_FUN_8c02e41c)(6);
        uVar6 = (*(code *)puVar3)((int)DAT_8c02e406);
        iVar13 = (*(code *)PTR_FUN_8c02e420)(iVar15,uVar5,uVar6);
        if (iVar13 != 0) {
          *(undefined4 *)(DAT_8c02e408 + iVar15) = 4;
          goto LAB_8c02dd52;
        }
      }
    }
    *(undefined4 *)(DAT_8c02de0e + iVar15) = 0;
  }
  else {
    iVar13 = *(int *)(&stack0xfffffff4 + iVar9);
    *(undefined4 *)((int)&local_20 + iVar9) = 3;
    (*(code *)PTR_FUN_8c02e284)(iVar15,iVar13 + 1,*(undefined4 *)(&stack0xfffffff8 + iVar9),2);
    if ((*(ushort *)(DAT_8c02e288 + (*(int *)(&stack0xfffffff8 + iVar9) * 0x40 + iVar13 + 1) * 0x10)
        & 0x20) == 0) goto LAB_8c02dc32;
    *(int *)(&stack0x00000048 + iVar9) = iVar15 + DAT_8c02e270;
    *(undefined **)(&stack0x0000004c + iVar9) = PTR_FUN_8c02e28c;
    uVar14 = (*(code *)PTR_FUN_8c02e28c)(6);
    *(undefined4 *)(&stack0x00000050 + iVar9) = uVar14;
    uVar14 = (**(code **)(&stack0x0000004c + iVar9))
                       (*(undefined4 *)(&stack0x00000048 + iVar9),(int)DAT_8c02e272);
    iVar13 = (*(code *)PTR_FUN_8c02e290)(iVar15,*(undefined4 *)(&stack0x00000050 + iVar9),uVar14);
    uVar14 = SUB84(dVar25,0);
    uVar23 = SUB84(dVar21,0);
    if (iVar13 == 0) goto LAB_8c02dc32;
    *(undefined4 *)(DAT_8c02e26a + iVar15) = 2;
  }
LAB_8c02dd52:
  if (*(int *)(DAT_8c02de0e + iVar15) == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(DAT_8c02e40c + iVar15) - *(int *)(DAT_8c02e40e + iVar15);
  }
  iVar17 = *(int *)(DAT_8c02de10 + iVar15);
  if ((iVar17 == iVar13) && (iVar13 != 0)) {
    iVar17 = (*(code *)PTR_FUN_8c02e424)();
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44((float)iVar17,uVar23);
    }
    else {
      dVar25 = (double)iVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(DAT_8c02e428,uVar14);
    }
    else {
      dVar21 = (double)CONCAT44(DAT_8c02e42c,DAT_8c02e428);
    }
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) /
                                (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar25,0));
    }
    else {
      dVar25 = dVar25 / dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(DAT_8c02e42c,SUB84(dVar21,0));
    }
    else {
      dVar21 = (double)CONCAT44(uRam8c02e430,DAT_8c02e42c);
    }
    if (in_FPSCR_PR == '\0') {
      iVar19 = (int)((float)((ulonglong)dVar25 >> 0x20) * (float)((ulonglong)dVar21 >> 0x20));
    }
    else {
      iVar19 = (int)(dVar25 * dVar21);
    }
    iVar17 = *(int *)(DAT_8c02e410 + iVar15);
    if (iVar19 < 0x32) {
      iVar13 = iVar13 + 1;
    }
  }
  if (iVar17 < iVar13) {
    iVar17 = (int)DAT_8c02e4f8;
    *(int *)(DAT_8c02e4f6 + iVar15) = iVar13;
    iVar19 = (int)DAT_8c02e4fc;
    *(undefined4 *)(DAT_8c02e4fa + iVar15) = 1;
    puVar3 = PTR_FUN_8c02e510;
    iVar8 = *(int *)(DAT_8c02e4fe + iVar15);
    *(int *)(DAT_8c02e500 + iVar15) = iVar8;
    iVar13 = (int)DAT_8c02e502;
    *(undefined2 *)(iVar15 + iVar17 + iVar8 * 2) = 3;
    *(int *)((int)&local_20 + iVar13 + iVar9) = iVar15 + iVar17;
    iVar13 = *(int *)(DAT_8c02e500 + iVar15);
    *(int *)(DAT_8c02e504 + iVar15) = iVar13;
    *(undefined4 *)(DAT_8c02e508 + iVar15) = *(undefined4 *)(DAT_8c02e506 + iVar15);
    (*(code *)puVar3)(iVar15 + iVar19,(iVar13 + 1) * 2);
    (*(code *)puVar3)(iVar15 + DAT_8c02e50a,iVar15 + DAT_8c02e50c,
                      (*(int *)(DAT_8c02e500 + iVar15) + 1) * 2);
    *(undefined2 *)
     (*(int *)((int)&local_20 + DAT_8c02e502 + iVar9) + *(int *)(DAT_8c02e4fe + iVar15) * 2) = 0;
  }
LAB_8c02dd7a:
  puVar3 = PTR_FUN_8c02de1c;
  *(int *)(DAT_8c02de12 + iVar15) = *(int *)(DAT_8c02de12 + iVar15) + 1;
  if (*(int *)(&stack0x00000024 + iVar9) == 0) {
    *(undefined4 *)(&stack0xffffffe4 + iVar9) = *(undefined4 *)(&stack0xfffffff4 + iVar9);
    *(undefined4 *)(&stack0xffffffe8 + iVar9) = *(undefined4 *)(&stack0xfffffff8 + iVar9);
  }
  else {
    uVar14 = *(undefined4 *)(DAT_8c02e50e + iVar15);
    *(undefined1 **)((int)&local_20 + iVar9) = &stack0xffffffe8 + iVar9;
    (*(code *)PTR_FUN_8c02e514)
              (uVar14,*(undefined4 *)(&stack0xfffffff4 + iVar9),
               *(undefined4 *)(&stack0xfffffff8 + iVar9),&stack0xffffffe4 + iVar9);
  }
  (*(code *)puVar3)(*(uint *)(&stack0xffffffe4 + iVar9) & 0xffff,6);
  (*(code *)puVar3)(*(uint *)(&stack0xffffffe8 + iVar9) & 0xffff,(int)DAT_8c02de0c);
  local_14[iVar9] = (local_14[iVar9] & (byte)DAT_8c02de14 | 0x10) & (byte)DAT_8c02de16 | 8;
  uVar16 = (*(code *)PTR_FUN_8c02de24)(iVar15,local_14 + iVar9);
  uVar16 = *(uint *)(&stack0xfffffffc + iVar9) & uVar16;
  if ((uVar16 & 1) != 0) {
    FUN_8c02d630(iVar15,*(int *)(&stack0xffffffe4 + iVar9) + -1,
                 *(undefined4 *)(&stack0xffffffe8 + iVar9),0xd);
  }
  if ((uVar16 & 2) != 0) {
    FUN_8c02d630(iVar15,*(int *)(&stack0xffffffe4 + iVar9) + 1,
                 *(undefined4 *)(&stack0xffffffe8 + iVar9),0xe);
  }
  if ((uVar16 & 4) != 0) {
    FUN_8c02d630(iVar15,*(undefined4 *)(&stack0xffffffe4 + iVar9),
                 *(int *)(&stack0xffffffe8 + iVar9) + -1,7);
  }
  if ((uVar16 & 8) != 0) {
    FUN_8c02d630(iVar15,*(undefined4 *)(&stack0xffffffe4 + iVar9),
                 *(int *)(&stack0xffffffe8 + iVar9) + 1,0xb);
  }
  iVar13 = *(int *)(DAT_8c02df6e + iVar15) + -1;
  *(int *)(DAT_8c02df6e + iVar15) = iVar13;
  if ((iVar13 == 0) && (*(int *)(DAT_8c02df70 + iVar15) != 0)) {
    iVar17 = (int)DAT_8c02e664;
    iVar19 = *(int *)(DAT_8c02e662 + iVar15);
    iVar13 = (int)DAT_8c02e668;
    *(int *)(DAT_8c02e666 + iVar15) = iVar19;
    puVar3 = PTR_FUN_8c02e684;
    *(undefined4 *)(DAT_8c02e66c + iVar15) = *(undefined4 *)(DAT_8c02e66a + iVar15);
    (*(code *)puVar3)(iVar15 + iVar17,iVar15 + iVar13,(iVar19 + 1) * 2);
    (*(code *)puVar3)(iVar15 + DAT_8c02e66e,iVar15 + DAT_8c02e670,
                      (*(int *)(DAT_8c02e666 + iVar15) + 1) * 2);
    puVar3 = PTR_FUN_8c02e688;
    iVar13 = *(int *)(DAT_8c02e666 + iVar15);
    *(int *)((int)&local_20 + DAT_8c02e672 + iVar9) = iVar13;
    if (*(short *)(iVar13 * 2 + iVar15 + iVar17) == 2) {
      uVar14 = (*(code *)PTR_FUN_8c02e688)(6);
      *(undefined4 *)((int)&local_20 + DAT_8c02e674 + iVar9) = uVar14;
      iVar13 = (*(code *)puVar3)((int)DAT_8c02e676);
      puVar3 = PTR_FUN_8c02e68c;
      *(int *)((int)&local_20 + DAT_8c02e678 + iVar9) = iVar13;
      iVar15 = *(int *)(DAT_8c02e66c + iVar15);
      if (iVar15 == 1) {
        *(int *)((int)&local_20 + DAT_8c02e674 + iVar9) =
             *(int *)((int)&local_20 + DAT_8c02e674 + iVar9) + -1;
      }
      else if (iVar15 == 2) {
        *(int *)((int)&local_20 + DAT_8c02e674 + iVar9) =
             *(int *)((int)&local_20 + DAT_8c02e674 + iVar9) + 1;
      }
      else if (iVar15 == 4) {
        *(int *)((int)&local_20 + DAT_8c02e678 + iVar9) = iVar13 + -1;
      }
      else if (iVar15 == 8) {
        *(int *)((int)&local_20 + DAT_8c02e678 + iVar9) = iVar13 + 1;
      }
      iVar15 = *(int *)(&stack0xfffffff0 + iVar9);
      uVar16 = *(uint *)((int)&local_20 + DAT_8c02e674 + iVar9);
      (*(code *)PTR_FUN_8c02e68c)(uVar16 & 0xffff,6);
      uVar10 = *(uint *)((int)&local_20 + DAT_8c02e678 + iVar9);
      (*(code *)puVar3)(uVar10 & 0xffff,(int)DAT_8c02e676);
      uVar14 = (*(code *)PTR_FUN_8c02e690)(*(undefined4 *)(DAT_8c02e67c + iVar15),uVar16,uVar10);
      *(undefined4 *)(DAT_8c02e67e + iVar15) = uVar14;
      *(undefined4 *)(DAT_8c02e680 + iVar15) = 1;
    }
    iVar9 = *(int *)(&stack0xfffffff0 + iVar9);
    if (*(short *)(*(int *)(DAT_8c02e666 + iVar9) * 2 + iVar9 + DAT_8c02e664) == 3) {
      *(undefined4 *)(DAT_8c02e680 + iVar9) = 1;
    }
  }
                    /* WARNING: Read-only address (ram,0x8c02e430) is written */
  return;
}

