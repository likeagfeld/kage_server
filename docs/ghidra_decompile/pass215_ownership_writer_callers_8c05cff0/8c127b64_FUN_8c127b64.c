// entry: 8c127b64
// name: FUN_8c127b64
// signature: undefined FUN_8c127b64(void)


void FUN_8c127b64(undefined8 param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  double dVar18;
  undefined4 uVar19;
  undefined8 in_dr12;
  double dVar20;
  double in_dr14;
  uint uVar22;
  ulonglong uVar21;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  puVar1 = PTR_FUN_8c127d1c;
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr12;
    puVar15 = auStack_2c;
  }
  else {
    puVar15 = auStack_3c;
    uStack_24 = in_dr12;
  }
  *(undefined4 *)(puVar15 + -4) = in_PR;
  iVar5 = (int)DAT_8c127cfe;
  *(undefined4 *)(puVar15 + (int)DAT_8c127d00 + iVar5 + -4) = 0;
  iVar13 = (int)DAT_8c127d04;
  (*(code *)PTR_FUN_8c127d1c)();
  uVar19 = (undefined4)in_dr12;
  iVar12 = (int)DAT_8c127d0a;
  (*(code *)puVar1)((int)DAT_8c127d06);
  puVar6 = (undefined4 *)(puVar15 + iVar13 + iVar5 + -4);
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d28 + 4);
  *puVar6 = *(undefined4 *)PTR_DAT_8c127d28;
  puVar6[1] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d28 + 0xc);
  puVar6[2] = *(undefined4 *)(PTR_DAT_8c127d28 + 8);
  puVar6[3] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d28 + 0x14);
  puVar6[4] = *(undefined4 *)(PTR_DAT_8c127d28 + 0x10);
  puVar6[5] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d28 + 0x1c);
  puVar6[6] = *(undefined4 *)(PTR_DAT_8c127d28 + 0x18);
  puVar6[7] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d28 + 0x24);
  puVar6[8] = *(undefined4 *)(PTR_DAT_8c127d28 + 0x20);
  puVar6[9] = uVar7;
  puVar6[10] = *(undefined4 *)(PTR_DAT_8c127d28 + 0x28);
  puVar6 = (undefined4 *)(puVar15 + iVar12 + iVar5 + -4);
  uVar8 = *(undefined4 *)(PTR_DAT_8c127d2c + 4);
  *puVar6 = *(undefined4 *)PTR_DAT_8c127d2c;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d2c + 8);
  puVar6[1] = uVar8;
  uVar8 = *(undefined4 *)(PTR_DAT_8c127d2c + 0xc);
  puVar6[2] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d2c + 0x10);
  puVar6[3] = uVar8;
  uVar8 = *(undefined4 *)(PTR_DAT_8c127d2c + 0x14);
  puVar6[4] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d2c + 0x18);
  puVar6[5] = uVar8;
  uVar8 = *(undefined4 *)(PTR_DAT_8c127d2c + 0x1c);
  puVar6[6] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d2c + 0x20);
  puVar6[7] = uVar8;
  uVar8 = *(undefined4 *)(PTR_DAT_8c127d2c + 0x24);
  puVar6[8] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d2c + 0x28);
  puVar6[9] = uVar8;
  puVar6[10] = uVar7;
  iVar11 = (int)DAT_8c127d10;
  (*(code *)puVar1)((int)DAT_8c127d0e);
  puVar1 = PTR_FUN_8c127d38;
  puVar6 = (undefined4 *)(puVar15 + (int)DAT_8c127d12 + iVar5 + -4);
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d34 + 4);
  *puVar6 = *(undefined4 *)PTR_DAT_8c127d34;
  puVar6[1] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d34 + 0xc);
  puVar6[2] = *(undefined4 *)(PTR_DAT_8c127d34 + 8);
  puVar6[3] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d34 + 0x14);
  puVar6[4] = *(undefined4 *)(PTR_DAT_8c127d34 + 0x10);
  puVar6[5] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d34 + 0x1c);
  puVar6[6] = *(undefined4 *)(PTR_DAT_8c127d34 + 0x18);
  puVar6[7] = uVar7;
  uVar7 = *(undefined4 *)(PTR_DAT_8c127d34 + 0x28);
  puVar6[8] = *(undefined4 *)(PTR_DAT_8c127d34 + 0x20);
  puVar6[10] = uVar7;
  puVar6[9] = param_5;
  *(undefined4 *)(puVar15 + iVar13 + iVar5 + 0x20) = param_4;
  *(undefined4 *)(puVar15 + iVar12 + iVar5 + 0x20) = param_4;
  uVar7 = (*(code *)PTR_FUN_8c127d38)(0,0xc,puVar15 + iVar5 + 0x20,param_4);
  iVar12 = (int)DAT_8c127d06;
  *(undefined4 *)(param_3 + 0x2c) = uVar7;
  uVar7 = (*(code *)puVar1)(0,0xb,puVar15 + iVar12 + iVar5 + -4,param_4);
  puVar2 = PTR_FUN_8c127d3c;
  *(undefined4 *)(param_3 + 0x30) = uVar7;
  uVar7 = (*(code *)puVar2)(0,puVar15 + iVar13 + iVar5 + -4);
  iVar12 = (int)DAT_8c127d0e;
  *(undefined4 *)(param_3 + 0x34) = uVar7;
  uVar7 = (*(code *)puVar1)(0,8,puVar15 + iVar12 + iVar5 + -4,param_4);
  puVar1 = PTR_FUN_8c127d40;
  iVar12 = (int)DAT_8c127d14;
  *(undefined4 *)(param_3 + 0x3c) = uVar7;
  (*(code *)puVar1)(puVar15 + iVar12 + iVar5 + -4);
  *(undefined4 *)(puVar15 + iVar5 + -4) = DAT_8c127d44;
  *(undefined4 *)(puVar15 + iVar5) = DAT_8c127d48;
  *(undefined4 *)(puVar15 + iVar5 + 4) = DAT_8c127d4c;
  *(undefined4 *)(puVar15 + iVar5 + 8) = DAT_8c127d50;
  *(undefined4 *)(puVar15 + iVar5 + 0xc) = DAT_8c127d4c;
  *(undefined4 *)(puVar15 + iVar5 + 0x10) = DAT_8c127d54;
  *(undefined4 *)(puVar15 + iVar5 + 0x14) = DAT_8c127d54;
  *(undefined4 *)(puVar15 + iVar5 + 0x18) = DAT_8c127d44;
  *(undefined4 *)(puVar15 + iVar5 + 0x1c) = DAT_8c127d48;
  uVar7 = (*(code *)PTR_FUN_8c127d58)(0,0x60);
  puVar1 = PTR_FUN_8c127d58;
  *(undefined4 *)(param_3 + 0x38) = uVar7;
  uVar7 = (*(code *)puVar1)(0,0x60);
  *(undefined4 *)(param_3 + 0x40) = uVar7;
  dVar18 = (double)(ulonglong)param_2;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = 0;
  }
  *(undefined4 *)(puVar15 + (int)DAT_8c127d16 + iVar5 + -4) = 0;
  *(undefined4 *)(puVar15 + (int)DAT_8c127d18 + iVar5 + -4) = 8;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(DAT_8c127d5c,uVar19);
  }
  else {
    dVar20 = (double)CONCAT44(PTR_FUN_8c127d60,DAT_8c127d5c);
  }
  do {
    iVar13 = 0;
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(dVar20,0));
    }
    iVar3 = (*(code *)PTR_FUN_8c127d60)();
    if (in_FPSCR_PR == '\0') {
      in_dr14 = (double)(ulonglong)(uint)(SUB84(in_dr14,0) * (float)((ulonglong)dVar20 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 * dVar20;
    }
    iVar14 = 0xc;
    do {
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((float)iVar13,SUB84(in_dr14,0));
      }
      else {
        in_dr14 = (double)iVar13;
      }
      puVar6 = (undefined4 *)(puVar15 + (int)DAT_8c127f00 + iVar5 + -4);
      puVar10 = (undefined4 *)(puVar15 + iVar11 + iVar5 + -4);
      iVar4 = (int)DAT_8c127f02;
      uVar7 = puVar6[1];
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((float)((ulonglong)in_dr14 >> 0x20) *
                                   (float)((ulonglong)dVar20 >> 0x20),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 * dVar20;
      }
      *puVar10 = *puVar6;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar4 + iVar5 + -4),SUB84(dVar18,0));
      }
      else {
        dVar18 = *(double *)(puVar15 + iVar4 + iVar5 + -4);
      }
      puVar10[1] = uVar7;
      if (in_FPSCR_PR == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) +
                                  (float)((ulonglong)in_dr14 >> 0x20),SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 + in_dr14;
      }
      uVar8 = puVar6[3];
      puVar10[2] = puVar6[2];
      uVar7 = puVar6[5];
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar15 + iVar4 + iVar5 + -4) = (int)((ulonglong)dVar18 >> 0x20);
      }
      else {
        *(double *)(puVar15 + iVar4 + iVar5 + -4) = dVar18;
      }
      puVar10[5] = uVar7;
      uVar7 = puVar6[6];
      iVar4 = (int)DAT_8c127f04;
      puVar10[3] = uVar8;
      uVar8 = puVar6[4];
      puVar10[6] = uVar7;
      uVar7 = puVar6[8];
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar4 + iVar5 + -4),SUB84(dVar18,0));
      }
      else {
        dVar18 = *(double *)(puVar15 + iVar4 + iVar5 + -4);
      }
      puVar10[4] = uVar8;
      uVar8 = puVar6[7];
      if (in_FPSCR_PR == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + SUB84(in_dr14,0),
                                  SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 + in_dr14;
      }
      puVar10[8] = uVar7;
      uVar7 = puVar6[10];
      puVar10[7] = uVar8;
      uVar8 = puVar6[9];
      puVar10[10] = uVar7;
      puVar10[9] = uVar8;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar15 + iVar4 + iVar5 + -4) = (int)((ulonglong)dVar18 >> 0x20);
      }
      else {
        *(double *)(puVar15 + iVar4 + iVar5 + -4) = dVar18;
      }
      (*(code *)PTR_FUN_8c127f10)(puVar15 + iVar12 + iVar5 + -4,puVar10);
      uVar8 = SUB84(dVar18,0);
      iVar4 = (*(code *)PTR_FUN_8c127f14)();
      uVar7 = *(undefined4 *)(puVar15 + iVar4 * 4 + iVar3 * 0xc + iVar5 + -4);
      iVar9 = 4;
      iVar4 = *(int *)(puVar15 + (int)DAT_8c127f06 + iVar5 + -4);
      do {
        iVar9 = iVar9 + -1;
        *(undefined4 *)(puVar15 + iVar4 + iVar12 + iVar5 + 0x1c) = uVar7;
        iVar4 = iVar4 + 0x18;
      } while (iVar9 != 0);
      iVar13 = iVar13 + 1;
      (*(code *)PTR_FUN_8c127f18)(*(undefined4 *)(param_3 + 0x38),puVar15 + iVar12 + iVar5 + -4);
      puVar10 = (undefined4 *)(puVar15 + iVar11 + iVar5 + -4);
      puVar6 = (undefined4 *)(puVar15 + (int)DAT_8c127f08 + iVar5 + -4);
      iVar4 = (int)DAT_8c127f02;
      uVar7 = puVar6[1];
      *puVar10 = *puVar6;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar4 + iVar5 + -4),uVar8);
      }
      else {
        dVar18 = *(double *)(puVar15 + iVar4 + iVar5 + -4);
      }
      uVar8 = puVar6[3];
      if (in_FPSCR_PR == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) +
                                  (float)((ulonglong)in_dr14 >> 0x20),SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 + in_dr14;
      }
      puVar10[1] = uVar7;
      puVar10[3] = uVar8;
      uVar8 = puVar6[2];
      puVar10[4] = puVar6[4];
      uVar7 = puVar6[7];
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar15 + iVar4 + iVar5 + -4) = (int)((ulonglong)dVar18 >> 0x20);
      }
      else {
        *(double *)(puVar15 + iVar4 + iVar5 + -4) = dVar18;
      }
      iVar4 = (int)DAT_8c127f04;
      puVar10[2] = uVar8;
      uVar8 = puVar6[5];
      puVar10[7] = uVar7;
      uVar7 = puVar6[8];
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)(puVar15 + iVar4 + iVar5 + -4),SUB84(dVar18,0));
      }
      else {
        dVar18 = *(double *)(puVar15 + iVar4 + iVar5 + -4);
      }
      puVar10[5] = uVar8;
      uVar8 = puVar6[6];
      if (in_FPSCR_PR == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + SUB84(in_dr14,0),
                                  SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 + in_dr14;
      }
      puVar10[8] = uVar7;
      uVar7 = puVar6[10];
      puVar10[6] = uVar8;
      uVar8 = puVar6[9];
      puVar10[10] = uVar7;
      puVar10[9] = uVar8;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar15 + iVar4 + iVar5 + -4) = (int)((ulonglong)dVar18 >> 0x20);
      }
      else {
        *(double *)(puVar15 + iVar4 + iVar5 + -4) = dVar18;
      }
      (*(code *)PTR_FUN_8c127f10)(puVar15 + iVar12 + iVar5 + -4,puVar10);
      (*(code *)PTR_FUN_8c127f18)(*(undefined4 *)(param_3 + 0x40),puVar15 + iVar12 + iVar5 + -4);
      puVar1 = PTR_FUN_8c127f20;
      uVar7 = (undefined4)param_1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    dVar18 = (double)CONCAT44(0x3f800000,SUB84(dVar18,0));
    *(int *)(puVar15 + (int)DAT_8c127f0a + iVar5 + -4) =
         *(int *)(puVar15 + (int)DAT_8c127f0a + iVar5 + -4) + 1;
    iVar13 = *(int *)(puVar15 + (int)DAT_8c127f0c + iVar5 + -4);
    *(int *)(puVar15 + (int)DAT_8c127f0c + iVar5 + -4) = iVar13 + -1;
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) + 1.0);
    }
    else {
      dVar20 = dVar20 + dVar18;
    }
  } while (iVar13 + -1 != 0);
  uVar16 = CONCAT44(0x3f800000,SUB84(in_dr14,0));
  (*(code *)PTR_FUN_8c127f1c)(puVar15 + iVar12 + iVar5 + -4,2);
  uVar22 = (uint)((ulonglong)uVar16 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(uVar22,uVar7);
  }
  uVar21 = (ulonglong)uVar22 << 0x20;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = 0;
  }
  (*(code *)puVar1)(uVar16,*(undefined4 *)(param_3 + 0x2c),1,1,3);
  (*(code *)puVar1)(uVar21,*(undefined4 *)(param_3 + 0x30),2,1,3);
  puVar2 = PTR_DAT_8c127f28;
  (*(code *)PTR_FUN_8c127f24)(uVar21,*(undefined4 *)(param_3 + 0x34),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(*(undefined4 *)puVar2,(int)uVar21);
  }
  else {
    uVar16 = *(undefined8 *)puVar2;
  }
  (*(code *)PTR_FUN_8c127f2c)(uVar16,*(undefined4 *)(param_3 + 0x34),8,3);
  (*(code *)PTR_FUN_8c127f30)(*(undefined4 *)(param_3 + 0x34),8);
  (*(code *)puVar1)(uVar21,*(undefined4 *)(param_3 + 0x38),1,1,3);
  (*(code *)puVar1)(uVar21,*(undefined4 *)(param_3 + 0x3c),2,0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(*(undefined4 *)puVar2,(int)uVar21);
  }
  else {
    uVar16 = *(undefined8 *)puVar2;
  }
  (*(code *)PTR_FUN_8c127f34)(uVar16,*(undefined4 *)(param_3 + 0x3c),8,3);
  uVar22 = (uint)uVar16;
  (*(code *)PTR_FUN_8c127f38)(*(undefined4 *)(param_3 + 0x3c),8);
  uVar17 = uVar21;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar22;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar17 = uVar21 & 0xffffffff;
  }
  (*(code *)puVar1)(uVar17,*(undefined4 *)(param_3 + 0x40),1,0x10,3);
  iVar11 = 2;
  iVar12 = *(int *)(param_3 + 0x34) + 0x24;
  iVar5 = *(int *)(puVar15 + (int)DAT_8c12800c + iVar5 + -4) + *(int *)(param_3 + 0x34) + 0xc;
  do {
    iVar11 = iVar11 + -1;
    *(undefined4 *)(iVar5 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar12 + 0x14) = 0xffffffff;
    puVar1 = PTR_FUN_8c128018;
    iVar5 = iVar5 + 0x30;
    iVar12 = iVar12 + 0x30;
  } while (iVar11 != 0);
  (*(code *)PTR_FUN_8c128010)(*(undefined4 *)(param_3 + 0x3c),DAT_8c128014);
  (*(code *)PTR_FUN_8c12801c)(*(undefined4 *)(param_3 + 0x34));
  (*(code *)puVar1)(*(undefined4 *)(param_3 + 0x3c));
  (*(code *)puVar1)(*(undefined4 *)(param_3 + 0x40));
  (*(code *)puVar1)(*(undefined4 *)(*(int *)(param_3 + 0x44) + 0x38));
  (*(code *)puVar1)(*(undefined4 *)(*(int *)(param_3 + 0x48) + 0x38));
  (*(code *)puVar1)(*(undefined4 *)(*(int *)(param_3 + 0x4c) + 0x38));
  return;
}

