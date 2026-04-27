// entry: 8c03aa84
// name: FUN_8c03aa84


void FUN_8c03aa84(double param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined2 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  ushort *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  double dVar21;
  ulonglong in_dr12;
  double dVar22;
  undefined4 in_fr15;
  undefined8 in_xd12;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_68 [17];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  puVar4 = PTR_FUN_8c03ac40;
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)(in_dr12 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr12;
    puVar19 = auStack_14;
  }
  else {
    puVar19 = auStack_24;
    uStack_c = in_dr12;
  }
  *(undefined4 *)(puVar19 + -4) = in_PR;
  iVar16 = *(int *)(DAT_8c03ac22 + param_3);
  iVar17 = *(int *)(iVar16 + 0x28);
  iVar15 = 0;
  iVar7 = 0;
  if (0 < iVar17) {
    do {
      puVar9 = (ushort *)(*(int *)(DAT_8c03ac24 + iVar16) + iVar7 * 0x88);
      if ((*puVar9 & 1) == 0) {
        *(ushort **)(puVar19 + iVar15 * 4 + -0x44) = puVar9;
        *(int *)(puVar19 + -0x34 + iVar15 * 4) = iVar7;
        iVar15 = iVar15 + 1;
        iVar16 = *(int *)(DAT_8c03adae + param_3);
        if (iVar15 == 4) break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar17);
  }
  uVar14 = *(undefined4 *)(PTR_DAT_8c03ac38 + 4);
  *(undefined4 *)(puVar19 + -0x24) = *(undefined4 *)PTR_DAT_8c03ac38;
  *(undefined4 *)(puVar19 + -0x20) = uVar14;
  uVar14 = *(undefined4 *)(PTR_DAT_8c03ac38 + 0xc);
  *(undefined4 *)(puVar19 + -0x1c) = *(undefined4 *)(PTR_DAT_8c03ac38 + 8);
  *(undefined4 *)(puVar19 + -0x18) = uVar14;
  uVar10 = (uint)*(ushort *)(param_3 + 0x54);
  dVar22 = (double)(in_dr12 & 0xffffffff);
  *(undefined2 *)(puVar19 + -0x14) =
       *(undefined2 *)(*(int *)(DAT_8c03ac26 + iVar16) + (int)DAT_8c03ac28 * uVar10 + 2);
  iVar7 = *(int *)(DAT_8c03ac2e + param_3);
  sVar1 = *(short *)(iVar7 + uVar10 * 0x1e + 2);
  sVar2 = *(short *)(iVar7 + DAT_8c03ac2c + uVar10 * 0x1e + 2);
  sVar3 = *(short *)(iVar7 + DAT_8c03ac30 + uVar10 * 0x1e + 2);
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03ac3c,param_2);
  }
  else {
    dVar21 = *(double *)PTR_DAT_8c03ac3c;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)(ulonglong)*(uint *)(iVar16 + 0x18);
  }
  else {
    in_xd12 = *(undefined8 *)(iVar16 + 0x18);
  }
  *(undefined1 **)(puVar19 + -0x10) = puVar19 + -0x34;
  if (in_FPSCR_PR == '\0') {
    dVar22 = (double)(ulonglong)(uint)(SUB84(dVar22,0) + (float)((ulonglong)dVar21 >> 0x20));
  }
  else {
    dVar22 = dVar22 + dVar21;
  }
  iVar7 = 0;
  uVar14 = (*(code *)PTR_FUN_8c03ac40)(dVar21);
  *(undefined4 *)(puVar19 + -0xc) = uVar14;
  uVar5 = (*(code *)puVar4)();
  *(undefined2 *)(puVar19 + -8) = uVar5;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44((undefined4)DAT_8c03ac44,in_fr15);
  }
  else {
    dVar21 = (double)CONCAT44(DAT_8c03ac44._4_4_,(undefined4)DAT_8c03ac44);
  }
  iVar15 = 4;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),DAT_8c03ac44._4_4_);
  }
  do {
    uVar5 = *(undefined2 *)(param_3 + 0x54);
    *(int *)(puVar19 + -0x4c) = (int)sVar1 + (int)sVar2 + (int)sVar3;
    uVar14 = *(undefined4 *)(DAT_8c03ac22 + param_3);
    uVar20 = in_xd12;
    if (in_FPSCR_SZ == '\0') {
      uVar20 = CONCAT44(SUB84(dVar22,0),SUB84(param_1,0));
    }
    uVar11 = *(undefined4 *)(*(int *)(puVar19 + -0x10) + iVar7 * 4);
    *(undefined4 *)(puVar19 + -0x50) = *(undefined4 *)(puVar19 + -0xc);
    *(undefined4 *)(puVar19 + -0x48) = 0;
    iVar17 = iVar7 * 4;
    (*(code *)PTR_FUN_8c03ac4c)(uVar20,uVar14,uVar11,uVar5,*(undefined2 *)(puVar19 + -8));
    uVar14 = DAT_8c03ac54;
    puVar4 = PTR___bfswu_8c03ac50;
    uVar10 = (uint)uVar20;
    *(byte *)(*(int *)(puVar19 + iVar7 * 4 + -0x44) + 0x11) =
         *(byte *)(*(int *)(puVar19 + iVar7 * 4 + -0x44) + 0x11) & (byte)DAT_8c03ac32;
    *(ushort *)(*(int *)(puVar19 + iVar7 * 4 + -0x44) + 0x10) =
         *(ushort *)(*(int *)(puVar19 + iVar7 * 4 + -0x44) + 0x10) & (ushort)uVar14 | DAT_8c03ac34;
    (*(code *)puVar4)(*(uint *)(puVar19 + iVar7 * 4 + -0x24) & 0xffff,4);
    *(byte *)(*(int *)(puVar19 + iVar7 * 4 + -0x44) + 0x10) =
         *(byte *)(*(int *)(puVar19 + iVar7 * 4 + -0x44) + 0x10) & (byte)DAT_8c03ac36 | 1;
    iVar16 = (*(code *)PTR__rand_8c03ac58)();
    if (in_FPSCR_PR == '\0') {
      iVar16 = (int)(((float)iVar16 / (float)((ulonglong)dVar21 >> 0x20)) * SUB84(dVar21,0));
    }
    else {
      iVar16 = (int)(((double)iVar16 / dVar21) * dVar21);
    }
    (*(code *)PTR___bfswu_8c03adbc)(iVar16 + 1U & 0xffff);
    (*(code *)PTR_FUN_8c03adc0)
              (*(undefined4 *)(DAT_8c03adae + param_3),*(undefined4 *)(puVar19 + iVar7 * 4 + -0x44))
    ;
    uVar14 = (*(code *)PTR_FUN_8c03adc4)(4);
    iVar7 = iVar7 + 1;
    uVar11 = (*(code *)PTR_FUN_8c03adc4)((int)DAT_8c03adb0);
    param_1 = dVar22;
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)(ulonglong)uVar10;
    }
    uVar8 = *(undefined4 *)(DAT_8c03adae + param_3);
    uVar12 = *(undefined4 *)(puVar19 + iVar17 + -0x44);
    *(undefined4 *)(puVar19 + -0x50) = 0;
    (*(code *)PTR_FUN_8c03adc8)(uVar8,uVar12,uVar14,uVar11);
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  dVar21 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)((ulonglong)param_1 & 0xffffffff);
  }
  uVar10 = SUB84(dVar21,0);
  (*(code *)PTR_FUN_8c03adcc)(dVar21,*(undefined4 *)(param_3 + 0x58),0xf);
  puVar4 = PTR_DAT_8c03add4;
  *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | DAT_8c03add0;
  pcVar18 = puVar4 + DAT_8c03adb2;
  if (*pcVar18 == '\0') {
    uVar14 = *DAT_8c03adf4;
  }
  else {
    uVar14 = *DAT_8c03add8;
  }
  (*(code *)PTR_FUN_8c03addc)(uVar14,pcVar18[1]);
  (*(code *)PTR_FUN_8c03ade0)(uVar14,pcVar18[2],pcVar18[3],0);
  dVar21 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)(ulonglong)uVar10;
  }
  uVar10 = SUB84(dVar21,0);
  (*(code *)PTR_FUN_8c03ade4)(dVar21,param_3);
  dVar21 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)(ulonglong)uVar10;
  }
  uVar10 = SUB84(dVar21,0);
  (*(code *)PTR_FUN_8c03ade8)(dVar21,param_3);
  dVar21 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)(ulonglong)uVar10;
  }
  uVar10 = SUB84(dVar21,0);
  *(undefined1 *)(DAT_8c03adb4 + param_3) = 8;
  (*(code *)PTR_FUN_8c03adec)(dVar21,*(undefined4 *)(param_3 + 0x58));
  puVar4 = PTR_DAT_8c03adf0;
  puVar13 = (undefined4 *)(param_3 + DAT_8c03adb6);
  if (in_FPSCR_SZ == '\0') {
    dVar22 = (double)(ulonglong)uVar10;
  }
  uVar11 = *(undefined4 *)PTR_DAT_8c03adf0;
  puVar13[1] = *(undefined4 *)(PTR_DAT_8c03adf0 + 4);
  uVar14 = *(undefined4 *)(puVar4 + 8);
  *puVar13 = uVar11;
  puVar13[2] = uVar14;
  piVar6 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c03adae);
  (*(code *)piVar6[2])(dVar22,param_3 + *piVar6,1);
  iVar7 = (int)DAT_8c03adba;
  *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | (int)DAT_8c03adb8;
  *(undefined4 *)(iVar7 + param_3) = 1;
  return;
}

