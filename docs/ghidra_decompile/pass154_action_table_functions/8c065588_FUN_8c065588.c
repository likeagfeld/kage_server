// entry: 8c065588
// name: FUN_8c065588
// signature: undefined FUN_8c065588(void)


void FUN_8c065588(double param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  int unaff_r8;
  byte *pbVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 *puVar12;
  double dVar13;
  double dVar14;
  undefined8 in_dr12;
  double dVar15;
  double in_xd12;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr12;
    puVar12 = auStack_2c;
  }
  else {
    puVar12 = auStack_3c;
    uStack_24 = in_dr12;
  }
  *(undefined4 *)(puVar12 + -4) = in_PR;
  *(int *)(puVar12 + -0x28) = param_4;
  iVar3 = (*(code *)PTR_FUN_8c0656f4)(*(undefined4 *)(DAT_8c0656ea + param_4),7,0xf,0);
  uVar9 = (undefined4)in_dr12;
  puVar7 = *(uint **)(DAT_8c0656ec + param_4);
  if ((*puVar7 & 0x10) == 0) {
    if (iVar3 == 0) goto LAB_8c06560c;
  }
  else {
    *puVar7 = *puVar7 & 0xffffffef;
    if (iVar3 == 0) goto LAB_8c06560c;
    if (*(int *)((int)DAT_8c065ce6 + *(int *)(DAT_8c065ce4 + param_4)) == 1) {
      param_1 = (double)((ulonglong)param_1 & 0xffffffff);
      (*(code *)PTR_FUN_8c065d00)(iVar3,1);
      puVar7 = *(uint **)(DAT_8c065ce4 + param_4);
    }
    else {
      param_1 = (double)((ulonglong)param_1 & 0xffffffff);
      (*(code *)PTR_FUN_8c065d00)(iVar3,0);
      puVar7 = *(uint **)(DAT_8c065ce4 + param_4);
    }
  }
  puVar1 = PTR_FUN_8c065708;
  uVar6 = *(undefined4 *)(PTR_DAT_8c0656f8 + 4);
  *(undefined4 *)(puVar12 + -0x38) = *(undefined4 *)PTR_DAT_8c0656f8;
  *(undefined4 *)(puVar12 + -0x34) = uVar6;
  uVar6 = *(undefined4 *)(PTR_DAT_8c0656f8 + 0xc);
  *(undefined4 *)(puVar12 + -0x30) = *(undefined4 *)(PTR_DAT_8c0656f8 + 8);
  *(undefined4 *)(puVar12 + -0x2c) = uVar6;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = *(undefined4 *)(DAT_8c0656fc + 0x34);
  }
  else {
    in_xd12 = *(double *)(DAT_8c0656fc + 0x34);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)DAT_8c065700,param_2);
  }
  else {
    dVar13 = *DAT_8c065700;
  }
  iVar5 = *(int *)((int)DAT_8c0656ee + (int)puVar7) * 4;
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)((ulonglong)*(uint *)(puVar12 + iVar5 + -0x38) << 0x20);
    dVar14 = (double)CONCAT44(DAT_8c065704,param_3);
  }
  else {
    dVar15 = *(double *)(puVar12 + iVar5 + -0x38);
    dVar14 = (double)CONCAT44(PTR_FUN_8c065708,DAT_8c065704);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) *
                              ((float)((ulonglong)dVar14 >> 0x20) /
                              (float)((ulonglong)dVar13 >> 0x20)),SUB84(dVar15,0));
  }
  else {
    dVar15 = dVar15 * (dVar14 / dVar13);
  }
  if (in_FPSCR_PR == '\0' && SUB84(dVar15,0) < (float)((ulonglong)dVar15 >> 0x20)) {
    dVar13 = in_xd12;
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(uVar9,uVar9);
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44(-(float)((ulonglong)dVar13 >> 0x20),SUB84(dVar13,0));
    }
    else {
      dVar13 = -dVar13;
    }
    do {
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) +
                                  (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar13;
      }
      dVar14 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(SUB84(dVar13,0),SUB84(param_1,0));
      }
      param_1 = dVar14;
      (*(code *)puVar1)(param_1,iVar3);
    } while (in_FPSCR_PR == '\0' && SUB84(dVar15,0) < (float)((ulonglong)dVar15 >> 0x20));
  }
LAB_8c06560c:
  iVar5 = *(int *)(DAT_8c0656ec + param_4);
  iVar3 = *(int *)(iVar5 + 0x38);
  *(int *)(puVar12 + -0x24) = iVar5;
  if (iVar3 != 0) {
    if ((iVar3 == 1) || (iVar3 == 2)) {
      iVar3 = 0x52;
    }
    else if (iVar3 == 3) {
      iVar3 = 0x53;
    }
    else if (iVar3 == 4) {
      iVar3 = 0x54;
    }
    else if (iVar3 == 5) {
      iVar3 = 0x55;
    }
    else {
      iVar3 = 0x56;
    }
    pcVar10 = PTR_DAT_8c06570c + iVar3 * 4;
    if (*pcVar10 == '\0') {
      uVar9 = *DAT_8c065710;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c065714)(uVar9,pcVar10[1]);
    (*(code *)PTR_FUN_8c065718)(uVar9,pcVar10[2],pcVar10[3],0);
    iVar5 = *(int *)(DAT_8c0656ec + param_4);
    *(int *)(puVar12 + -0x24) = iVar5;
  }
  puVar1 = PTR_FUN_8c065718;
  iVar3 = (int)DAT_8c0656f0;
  puVar7 = (uint *)(iVar5 + iVar3);
  if ((*puVar7 & DAT_8c06571c) != 0) {
    pcVar10 = PTR_DAT_8c06570c + DAT_8c0656f2;
    if (*pcVar10 == '\0') {
      uVar9 = *DAT_8c065710;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c065714)(uVar9,pcVar10[1]);
    (*(code *)puVar1)(uVar9,pcVar10[2],pcVar10[3],0);
    iVar5 = *(int *)(DAT_8c0656ec + param_4);
    *(int *)(puVar12 + -0x24) = iVar5;
    puVar7 = (uint *)(iVar5 + iVar3);
  }
  puVar2 = PTR_FUN_8c065718;
  puVar1 = PTR_DAT_8c06570c;
  if ((*puVar7 & DAT_8c065720) != 0) {
    if (PTR_DAT_8c06570c[0x30] == '\0') {
      uVar9 = *DAT_8c0658ac;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c0658a8)(uVar9,PTR_DAT_8c06570c[0x31]);
    (*(code *)puVar2)(uVar9,puVar1[0x32],puVar1[0x33],0);
    iVar5 = *(int *)(DAT_8c06589e + param_4);
    *(int *)(puVar12 + -0x24) = iVar5;
    puVar7 = (uint *)(iVar5 + iVar3);
  }
  puVar2 = PTR_FUN_8c0658b4;
  puVar1 = PTR_DAT_8c0658b0;
  if ((*puVar7 & (int)DAT_8c0658a0) != 0) {
    if (PTR_DAT_8c0658b0[4] == '\0') {
      uVar9 = *DAT_8c0658ac;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c0658a8)(uVar9,PTR_DAT_8c0658b0[5]);
    (*(code *)puVar2)(uVar9,puVar1[6],puVar1[7],0);
    iVar5 = *(int *)(DAT_8c06589e + param_4);
    *(int *)(puVar12 + -0x24) = iVar5;
    puVar7 = (uint *)(iVar5 + iVar3);
  }
  puVar2 = PTR_FUN_8c0658b4;
  puVar1 = PTR_DAT_8c0658b0;
  if ((*puVar7 & (int)DAT_8c0658a2) != 0) {
    if (PTR_DAT_8c0658b0[0x4c] == '\0') {
      uVar9 = *DAT_8c0658ac;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c0658a8)(uVar9,PTR_DAT_8c0658b0[0x4d]);
    (*(code *)puVar2)(uVar9,puVar1[0x4e],puVar1[0x4f],0);
    iVar5 = *(int *)(DAT_8c06589e + param_4);
    *(int *)(puVar12 + -0x24) = iVar5;
    puVar7 = (uint *)(iVar5 + iVar3);
  }
  puVar2 = PTR_FUN_8c0658b4;
  puVar1 = PTR_DAT_8c0658b0;
  if ((*puVar7 & 1) != 0) {
    if (PTR_DAT_8c0658b0[0x40] == '\0') {
      uVar9 = *DAT_8c0658ac;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c0658a8)(uVar9,PTR_DAT_8c0658b0[0x41]);
    (*(code *)puVar2)(uVar9,puVar1[0x42],puVar1[0x43],0);
    iVar5 = *(int *)(DAT_8c06589e + param_4);
    *(int *)(puVar12 + -0x24) = iVar5;
    puVar7 = (uint *)(iVar5 + iVar3);
  }
  puVar2 = PTR_FUN_8c0658b4;
  puVar1 = PTR_DAT_8c0658b0;
  if ((*puVar7 & (int)DAT_8c0658a4) != 0) {
    if (PTR_DAT_8c0658b0[0x20] == '\0') {
      uVar9 = *DAT_8c0658ac;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c0658a8)(uVar9,PTR_DAT_8c0658b0[0x21]);
    (*(code *)puVar2)(uVar9,puVar1[0x22],puVar1[0x23],0);
    iVar5 = *(int *)(DAT_8c06589e + param_4);
    *(int *)(puVar12 + -0x24) = iVar5;
    puVar7 = (uint *)(iVar5 + iVar3);
  }
  puVar1 = PTR_FUN_8c0658b4;
  if ((*puVar7 & 4) != 0) {
    pcVar10 = PTR_DAT_8c0658b0 + DAT_8c0658a6;
    if (*pcVar10 == '\0') {
      uVar9 = *DAT_8c0658ac;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c0658a8)(uVar9,pcVar10[1]);
    (*(code *)puVar1)(uVar9,pcVar10[2],pcVar10[3],0);
    iVar5 = *(int *)(DAT_8c065a26 + param_4);
    *(int *)(puVar12 + -0x24) = iVar5;
    puVar7 = (uint *)(iVar5 + iVar3);
  }
  puVar1 = PTR_FUN_8c065a3c;
  if ((*puVar7 & 0x20) != 0) {
    pcVar10 = PTR_DAT_8c065a38 + DAT_8c065a28;
    if (*pcVar10 == '\0') {
      uVar9 = *DAT_8c065a44;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c065a40)(uVar9,pcVar10[1]);
    (*(code *)puVar1)(uVar9,pcVar10[2],pcVar10[3],0);
    iVar5 = *(int *)(DAT_8c065a26 + param_4);
    *(int *)(puVar12 + -0x24) = iVar5;
    puVar7 = (uint *)(iVar5 + iVar3);
  }
  puVar2 = PTR_FUN_8c065a3c;
  puVar1 = PTR_DAT_8c065a38;
  if ((*puVar7 & 0x10) != 0) {
    if (PTR_DAT_8c065a38[0x28] == '\0') {
      uVar9 = *DAT_8c065a44;
    }
    else {
      uVar9 = *DAT_8c065b84;
    }
    (*(code *)PTR_FUN_8c065a40)(uVar9,PTR_DAT_8c065a38[0x29]);
    (*(code *)puVar2)(uVar9,puVar1[0x2a],puVar1[0x2b],0);
  }
  iVar3 = *(int *)((int)DAT_8c065a26 + *(int *)(puVar12 + -0x28));
  *(int *)(puVar12 + -0x20) = iVar3;
  puVar7 = (uint *)(iVar3 + DAT_8c065a2a);
  if ((*puVar7 & (int)DAT_8c065a2c) != 0) {
    pcVar10 = PTR_DAT_8c065a38 + DAT_8c065a2e;
    if (*pcVar10 == '\0') {
      uVar9 = *DAT_8c065ce8;
    }
    else {
      uVar9 = *DAT_8c065a48;
    }
    (*(code *)PTR_FUN_8c065a40)(uVar9,pcVar10[1]);
    (*(code *)PTR_FUN_8c065a3c)(uVar9,pcVar10[2],pcVar10[3],0);
    iVar3 = *(int *)((int)DAT_8c065a26 + *(int *)(puVar12 + -0x28));
    *(int *)(puVar12 + -0x20) = iVar3;
    puVar7 = (uint *)(iVar3 + DAT_8c065a2a);
  }
  puVar1 = PTR_DAT_8c065a38;
  if (((((*puVar7 & 0x40) != 0) || ((*puVar7 & 0x80) != 0)) || ((*puVar7 & DAT_8c065a4c) != 0)) ||
     ((*puVar7 & (int)DAT_8c065a30) != 0)) {
    if ((*puVar7 & 0x80) == 0) {
      pcVar10 = PTR_DAT_8c065cec + DAT_8c065ce2;
      if (*pcVar10 == '\0') {
        uVar9 = *DAT_8c065ce8;
      }
      else {
        uVar9 = *DAT_8c065cf0;
      }
      (*(code *)PTR_FUN_8c065cf4)(uVar9,pcVar10[1]);
      (*(code *)PTR_FUN_8c065cf8)(uVar9,pcVar10[2],pcVar10[3],0);
    }
    else {
      if (PTR_DAT_8c065a38[0x24] == '\0') {
        uVar9 = *DAT_8c065ce8;
      }
      else {
        uVar9 = *DAT_8c065a48;
      }
      (*(code *)PTR_FUN_8c065a40)(uVar9,PTR_DAT_8c065a38[0x25]);
      (*(code *)PTR_FUN_8c065a3c)(uVar9,puVar1[0x26],puVar1[0x27],0);
    }
    iVar5 = *(int *)(puVar12 + -0x28);
    iVar3 = 0;
    pbVar8 = (byte *)(*(int *)(DAT_8c065a26 + iVar5) + (int)DAT_8c065a32);
    *(int *)(puVar12 + -0x1c) = iVar5 + DAT_8c065a34;
    *(int *)(puVar12 + -0x18) = iVar5 + DAT_8c065a36;
    *(int *)(puVar12 + -0x14) = iVar5 + DAT_8c065b7a;
    *(int *)(puVar12 + -0x10) = iVar5 + DAT_8c065b7c;
    *(undefined4 *)(puVar12 + -0xc) = 0xf;
    do {
      if (*pbVar8 != 0) {
        uVar11 = 0;
        iVar5 = 8;
        do {
          if ((int)uVar11 < 0) {
            uVar4 = 1 >> (~uVar11 & 0x1f) + 1;
          }
          else {
            uVar4 = 1 << (uVar11 & 0x1f);
          }
          if ((*pbVar8 & uVar4) != 0) {
            unaff_r8 = *(int *)((int)DAT_8c065b7e + *(int *)(puVar12 + -0x28));
            if (*(int *)(iVar3 * 4 + unaff_r8 + 0xc + uVar11 * 0x54) != -1) {
              pcVar10 = PTR_DAT_8c065b80 + *(int *)(iVar3 * 4 + unaff_r8 + 0xc + uVar11 * 0x54) * 4;
              if (*pcVar10 == '\0') {
                uVar9 = *DAT_8c065ce8;
              }
              else {
                uVar9 = *DAT_8c065b84;
              }
              (*(code *)PTR_FUN_8c065b88)(uVar9,pcVar10[1]);
              (*(code *)PTR_FUN_8c065b8c)(uVar9,pcVar10[2],pcVar10[3],0);
            }
            puVar1 = PTR_DAT_8c065cec;
            if (iVar3 == 0xd) {
              if ((int)*(short *)(uVar11 * 0x1e + *(int *)(puVar12 + -0x1c) + 0x1a) +
                  (int)*(short *)(uVar11 * 0x1e + *(int *)(puVar12 + -0x18) + 0x1a) +
                  (int)*(short *)(uVar11 * 0x1e + *(int *)(puVar12 + -0x14) + 0x1a) < 3) {
                if (PTR_DAT_8c065cec[0x58] == '\0') {
                  uVar9 = *DAT_8c065ce8;
                }
                else {
                  uVar9 = *DAT_8c065cf0;
                }
                (*(code *)PTR_FUN_8c065cf4)(uVar9,PTR_DAT_8c065cec[0x59]);
                (*(code *)PTR_FUN_8c065cf8)(uVar9,puVar1[0x5a],puVar1[0x5b],0);
              }
              else {
                if (PTR_DAT_8c065cec[0x54] == '\0') {
                  uVar9 = *DAT_8c065ce8;
                }
                else {
                  uVar9 = *DAT_8c065cf0;
                }
                (*(code *)PTR_FUN_8c065cf4)(uVar9,PTR_DAT_8c065cec[0x55]);
                (*(code *)PTR_FUN_8c065cf8)(uVar9,puVar1[0x56],puVar1[0x57],0);
              }
              (*(code *)PTR_FUN_8c065cfc)(*(undefined4 *)(*(int *)(puVar12 + -0x10) + uVar11 * 4),4)
              ;
            }
            else if (iVar3 == 0xe) {
              (*(code *)PTR_FUN_8c065b90)(*(undefined4 *)(*(int *)(puVar12 + -0x10) + uVar11 * 4),5)
              ;
            }
            else {
              (*(code *)PTR_FUN_8c065cfc)(*(undefined4 *)(*(int *)(puVar12 + -0x10) + uVar11 * 4),1)
              ;
            }
          }
          iVar5 = iVar5 + -1;
          uVar11 = uVar11 + 1;
        } while (iVar5 != 0);
      }
      iVar5 = *(int *)(puVar12 + -0xc);
      iVar3 = iVar3 + 1;
      pbVar8 = pbVar8 + 1;
      *(int *)(puVar12 + -0xc) = iVar5 + -1;
    } while (iVar5 + -1 != 0);
    *(int *)(puVar12 + -8) = unaff_r8;
  }
  return;
}

