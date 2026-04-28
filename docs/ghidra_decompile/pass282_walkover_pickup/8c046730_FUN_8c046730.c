// entry: 8c046730
// name: FUN_8c046730
// signature: undefined FUN_8c046730(void)


/* WARNING: Removing unreachable block (ram,0x8c046998) */
/* WARNING: Removing unreachable block (ram,0x8c046840) */
/* WARNING: Removing unreachable block (ram,0x8c046a70) */

void FUN_8c046730(double param_1,undefined8 param_2,uint *param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  double dVar19;
  undefined8 in_dr12;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined8 in_dr14;
  double dVar23;
  double in_xd12;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  puVar3 = DAT_8c0468a0;
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr12;
    puVar18 = auStack_2c;
  }
  else {
    puVar18 = auStack_3c;
    uStack_24 = in_dr12;
  }
  *(undefined4 *)(puVar18 + -4) = in_PR;
  iVar8 = (int)DAT_8c04689c;
  *(uint **)(puVar18 + iVar8 + 0x4c) = param_3;
  if ((*param_3 & 4) == 0) {
    if (param_6 == -1) {
      *(undefined **)(puVar18 + iVar8 + 0x50) = PTR_FUN_8c046c14;
      uVar6 = (*(code *)PTR_FUN_8c046c14)(param_4);
      *(undefined4 *)(*(int *)(puVar18 + iVar8 + 0x4c) + 0x10) = uVar6;
    }
    else {
      *(undefined **)(puVar18 + iVar8 + 0x50) = PTR_FUN_8c0468a4;
      *(int *)(*(int *)(puVar18 + iVar8 + 0x4c) + 0x10) = param_6;
    }
    iVar14 = *(int *)(puVar18 + iVar8 + 0x4c);
    iVar10 = 0;
    uVar6 = (*(code *)PTR_FUN_8c0468a8)(*(int *)(iVar14 + 0x10) + 1);
    puVar4 = PTR_FUN_8c0468a8;
    *(undefined4 *)(iVar14 + 0xc) = uVar6;
    uVar6 = (*(code *)puVar4)(*(int *)(iVar14 + 0x10) << 2);
    puVar4 = PTR_FUN_8c0468a8;
    *(undefined4 *)(iVar14 + 4) = uVar6;
    uVar6 = (*(code *)puVar4)(*(int *)(iVar14 + 0x10) << 2);
    puVar4 = PTR_FUN_8c0468ac;
    *(undefined4 *)(iVar14 + 8) = uVar6;
    (*(code *)puVar4)(*(undefined4 *)(iVar14 + 4),0,*(int *)(iVar14 + 0x10) << 2);
    (*(code *)PTR_FUN_8c0468ac)(*(undefined4 *)(iVar14 + 8),0,*(int *)(iVar14 + 0x10) << 2);
    uVar9 = (uint)in_dr14;
    uVar6 = (undefined4)param_2;
    if (0 < *(int *)(iVar14 + 0x10)) {
      iVar13 = 0;
      iVar14 = (int)DAT_8c04689e;
      do {
        iVar7 = (*(code *)PTR_FUN_8c046c18)(iVar14);
        if (iVar7 != 0) {
          *(undefined **)(iVar7 + 0x78) = PTR_DAT_8c0468b0;
        }
        *(int *)(iVar13 + *(int *)(*(int *)(puVar18 + iVar8 + 0x4c) + 4)) = iVar7;
        iVar7 = (*(code *)PTR_FUN_8c046c18)(iVar14);
        uVar6 = (undefined4)param_2;
        uVar9 = (uint)in_dr14;
        if (iVar7 != 0) {
          *(undefined **)(iVar7 + 0x78) = PTR_DAT_8c0468b0;
        }
        iVar15 = *(int *)(puVar18 + iVar8 + 0x4c);
        iVar10 = iVar10 + 1;
        *(int *)(iVar13 + *(int *)(iVar15 + 8)) = iVar7;
        iVar13 = iVar13 + 4;
      } while (iVar10 < *(int *)(iVar15 + 0x10));
    }
    iVar13 = *(int *)(puVar18 + iVar8 + 0x4c);
    (*(code *)PTR___slow_strcpy_8c0468b4)();
    iVar14 = *(int *)(PTR_PTR_8c0468b8 + param_5 * 4);
    sVar2 = *(short *)(iVar14 + 0x16);
    iVar10 = (int)sVar2;
    *(short *)(iVar13 + 0x14) = sVar2;
    if (iVar10 == 0) {
      iVar10 = 0xe;
      *(undefined2 *)(*(int *)(puVar18 + iVar8 + 0x4c) + 0x14) = 0xe;
    }
    iVar14 = -(int)*(short *)(iVar14 + 0x14);
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)iVar14,uVar6);
    }
    else {
      dVar19 = (double)iVar14;
    }
    if ((float)((ulonglong)dVar19 >> 0x20) == 0.0) {
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(DAT_8c0468bc,SUB84(dVar19,0));
      }
      else {
        dVar19 = (double)CONCAT44(DAT_8c0468c0,DAT_8c0468bc);
      }
    }
    dVar23 = in_xd12;
    if (in_FPSCR_SZ == '\0') {
      dVar23 = (double)(ulonglong)uVar9;
    }
    iVar14 = *(int *)(puVar18 + iVar8 + 0x4c);
    pcVar16 = *(char **)(iVar14 + 0xc);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar14 + 0x18) = (int)((ulonglong)dVar19 >> 0x20);
    }
    else {
      *(double *)(iVar14 + 0x18) = dVar19;
    }
    puVar4 = PTR_FUN_8c0468c4;
    uVar9 = (uint)*pcVar16;
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)((ulonglong)(uint)(float)iVar10 << 0x20);
    }
    else {
      dVar20 = (double)iVar10;
    }
    if (uVar9 != 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar23 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),DAT_8c0468c0);
      }
      do {
        uVar6 = SUB84(dVar19,0);
        *(undefined1 **)(puVar18 + iVar8 + -4) = puVar18 + iVar8 + 0x34;
        *(undefined1 **)(puVar18 + iVar8) = puVar18 + iVar8 + 0x38;
        (*(code *)puVar4)(puVar3,uVar9 & 0xff,puVar18 + iVar8 + 0x2c,puVar18 + iVar8 + 0x30);
        pcVar16 = pcVar16 + 1;
        uVar9 = (uint)*pcVar16;
        fVar21 = (float)((ulonglong)dVar20 >> 0x20);
        fVar22 = SUB84(dVar23,0);
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(((float)(*(int *)(puVar18 + iVar8 + 0x38) + -0x20) * fVar21) /
                                    fVar22 + (float)((ulonglong)dVar23 >> 0x20) + fVar21,uVar6);
        }
        else {
          dVar19 = ((double)(*(int *)(puVar18 + iVar8 + 0x38) + -0x20) * dVar20) / dVar23 + dVar23 +
                   dVar20;
        }
        dVar23 = dVar19;
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fVar22);
        }
      } while (uVar9 != 0);
    }
    puVar4 = PTR_DAT_8c046a84;
    iVar10 = *(int *)(puVar18 + iVar8 + 0x4c);
    uVar6 = *(undefined4 *)PTR_DAT_8c046a84;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar10 + 0x1c) = (int)((ulonglong)dVar23 >> 0x20);
    }
    else {
      *(double *)(iVar10 + 0x1c) = dVar23;
    }
    *(undefined4 *)(puVar18 + iVar8 + 0x54) = *(undefined4 *)(iVar10 + 4);
    uVar11 = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)(puVar18 + iVar8 + 0x58) = uVar6;
    *(undefined4 *)(puVar18 + iVar8 + 0x5c) = uVar11;
    *(undefined4 *)(puVar18 + iVar8 + 8) = uVar11;
    uVar11 = *(undefined4 *)(puVar4 + 8);
    *(undefined4 *)(puVar18 + iVar8 + 4) = uVar6;
    uVar6 = *(undefined4 *)(puVar4 + 0xc);
    *(undefined4 *)(puVar18 + iVar8 + 0x60) = uVar11;
    *(undefined4 *)(puVar18 + iVar8 + 100) = uVar6;
    *(undefined4 *)(puVar18 + iVar8 + 0x10) = uVar6;
    uVar17 = *(undefined4 *)(puVar4 + 0x10);
    *(undefined4 *)(puVar18 + iVar8 + 0xc) = uVar11;
    uVar6 = *(undefined4 *)(puVar4 + 0x14);
    *(undefined4 *)(puVar18 + iVar8 + 0x68) = uVar17;
    *(undefined4 *)(puVar18 + iVar8 + 0x6c) = uVar6;
    *(undefined4 *)(puVar18 + iVar8 + 0x18) = uVar6;
    uVar6 = *(undefined4 *)(puVar4 + 0x18);
    *(undefined4 *)(puVar18 + iVar8 + 0x14) = uVar17;
    uVar11 = *(undefined4 *)(puVar4 + 0x1c);
    *(undefined4 *)(puVar18 + iVar8 + 0x70) = uVar6;
    *(undefined4 *)(puVar18 + iVar8 + 0x74) = uVar11;
    *(undefined4 *)(puVar18 + iVar8 + 0x20) = uVar11;
    uVar11 = *(undefined4 *)(puVar4 + 0x20);
    *(undefined4 *)(puVar18 + iVar8 + 0x1c) = uVar6;
    uVar6 = *(undefined4 *)(puVar4 + 0x24);
    *(undefined4 *)(puVar18 + iVar8 + 0x78) = uVar11;
    *(undefined4 *)(puVar18 + iVar8 + 0x24) = uVar11;
    *(undefined4 *)(puVar18 + iVar8 + 0x28) = uVar6;
    *(undefined4 *)(puVar18 + iVar8 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar18 + (int)DAT_8c046a7e + iVar8 + -4) = uVar6;
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)(int)*(short *)(iVar10 + 0x14),SUB84(dVar19,0));
    }
    else {
      dVar19 = (double)(int)*(short *)(iVar10 + 0x14);
    }
    *(undefined4 *)(puVar18 + iVar8 + 0x28) = *puVar3;
    uVar6 = (undefined4)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar18 + iVar8 + 0xc) = uVar6;
      *(undefined4 *)(puVar18 + iVar8 + 0x10) = uVar6;
    }
    else {
      *(double *)(puVar18 + iVar8 + 0xc) = dVar19;
      *(double *)(puVar18 + iVar8 + 0x10) = dVar19;
    }
    iVar14 = (**(code **)(puVar18 + iVar8 + 0x50))(*(undefined4 *)(iVar10 + 0xc));
    puVar5 = PTR_FUN_8c046a8c;
    puVar4 = PTR_FUN_8c046a88;
    uVar6 = SUB84(dVar19,0);
    puVar12 = *(undefined1 **)(iVar10 + 0xc);
    iVar10 = 0;
    if (0 < iVar14) {
      uVar9 = (uint)DAT_8c046a80;
      do {
        uVar6 = SUB84(param_1,0);
        uVar1 = *puVar12;
        puVar12 = puVar12 + 1;
        *(undefined1 **)(puVar18 + iVar8 + -4) = puVar18 + iVar8 + 0x44;
        *(undefined1 **)(puVar18 + iVar8) = puVar18 + iVar8 + 0x48;
        (*(code *)puVar4)(puVar3,uVar1,puVar18 + iVar8 + 0x3c,puVar18 + iVar8 + 0x40);
        *(short *)(puVar18 + iVar8 + 0x14) = (short)*(undefined4 *)(puVar18 + iVar8 + 0x40);
        param_1 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(SUB84(dVar20,0),uVar6);
        }
        *(short *)(puVar18 + iVar8 + 0x16) = (short)*(undefined4 *)(puVar18 + iVar8 + 0x44);
        *(uint *)(puVar18 + iVar8 + 0x20) =
             (*(uint *)(puVar18 + iVar8 + 0x3c) & uVar9) << 0xd | DAT_8c046a90 | DAT_8c046a94 |
             (int)DAT_8c046a82;
        iVar13 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        (*(code *)puVar5)(param_1,*(undefined4 *)(iVar13 + *(int *)(puVar18 + iVar8 + 0x54)),
                          puVar18 + iVar8 + 4,0);
        uVar6 = SUB84(dVar19,0);
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    iVar14 = *(int *)(puVar18 + iVar8 + 0x4c);
    iVar10 = 0;
    *(undefined4 *)(puVar18 + iVar8 + 0x54) = *(undefined4 *)(iVar14 + 8);
    *(undefined4 *)(puVar18 + iVar8 + 4) = *(undefined4 *)(puVar18 + iVar8 + 0x58);
    *(undefined4 *)(puVar18 + iVar8 + 8) = *(undefined4 *)(puVar18 + iVar8 + 0x5c);
    *(undefined4 *)(puVar18 + iVar8 + 0xc) = *(undefined4 *)(puVar18 + iVar8 + 0x60);
    *(undefined4 *)(puVar18 + iVar8 + 0x10) = *(undefined4 *)(puVar18 + iVar8 + 100);
    *(undefined4 *)(puVar18 + iVar8 + 0x14) = *(undefined4 *)(puVar18 + iVar8 + 0x68);
    *(undefined4 *)(puVar18 + iVar8 + 0x18) = *(undefined4 *)(puVar18 + iVar8 + 0x6c);
    *(undefined4 *)(puVar18 + iVar8 + 0x1c) = *(undefined4 *)(puVar18 + iVar8 + 0x70);
    *(undefined4 *)(puVar18 + iVar8 + 0x20) = *(undefined4 *)(puVar18 + iVar8 + 0x74);
    *(undefined4 *)(puVar18 + iVar8 + 0x24) = *(undefined4 *)(puVar18 + iVar8 + 0x78);
    *(undefined4 *)(puVar18 + iVar8 + 0x28) =
         *(undefined4 *)(puVar18 + (int)DAT_8c046a7e + iVar8 + -4);
    *(undefined4 *)(puVar18 + iVar8 + 0x1c) = DAT_8c046a98;
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)(int)*(short *)(iVar14 + 0x14),uVar6);
    }
    else {
      dVar19 = (double)(int)*(short *)(iVar14 + 0x14);
    }
    *(undefined4 *)(puVar18 + iVar8 + 0x28) = *puVar3;
    uVar6 = (undefined4)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar18 + iVar8 + 0xc) = uVar6;
      *(undefined4 *)(puVar18 + iVar8 + 0x10) = uVar6;
    }
    else {
      *(double *)(puVar18 + iVar8 + 0xc) = dVar19;
      *(double *)(puVar18 + iVar8 + 0x10) = dVar19;
    }
    iVar13 = (**(code **)(puVar18 + iVar8 + 0x50))(*(undefined4 *)(iVar14 + 0xc));
    puVar5 = PTR_FUN_8c046a8c;
    puVar4 = PTR_FUN_8c046a88;
    puVar12 = *(undefined1 **)(iVar14 + 0xc);
    if (0 < iVar13) {
      uVar9 = (uint)DAT_8c046a80;
      do {
        uVar6 = SUB84(param_1,0);
        uVar1 = *puVar12;
        puVar12 = puVar12 + 1;
        *(undefined1 **)(puVar18 + iVar8 + -4) = puVar18 + iVar8 + 0x44;
        *(undefined1 **)(puVar18 + iVar8) = puVar18 + iVar8 + 0x48;
        (*(code *)puVar4)(puVar3,uVar1,puVar18 + iVar8 + 0x3c,puVar18 + iVar8 + 0x40);
        *(short *)(puVar18 + iVar8 + 0x14) = (short)*(undefined4 *)(puVar18 + iVar8 + 0x40);
        param_1 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(SUB84(dVar20,0),uVar6);
        }
        *(short *)(puVar18 + iVar8 + 0x16) = (short)*(undefined4 *)(puVar18 + iVar8 + 0x44);
        *(uint *)(puVar18 + iVar8 + 0x20) =
             (*(uint *)(puVar18 + iVar8 + 0x3c) & uVar9) << 0xd | DAT_8c046a90 | DAT_8c046a94 |
             (int)DAT_8c046a82;
        iVar14 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        (*(code *)puVar5)(param_1,*(undefined4 *)(iVar14 + *(int *)(puVar18 + iVar8 + 0x54)),
                          puVar18 + iVar8 + 4,0);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    **(uint **)(puVar18 + iVar8 + 0x4c) = **(uint **)(puVar18 + iVar8 + 0x4c) | 4;
  }
  return;
}

