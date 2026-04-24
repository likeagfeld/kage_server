// entry: 8c018afc
// name: FUN_8c018afc
// signature: undefined FUN_8c018afc(void)


void FUN_8c018afc(double param_1,undefined4 param_2,double param_3,int param_4)

{
  byte bVar1;
  double dVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  code *pcVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  double *pdVar16;
  int iVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined4 uVar24;
  undefined8 in_dr14;
  double dVar25;
  undefined8 uVar26;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_18;
  
  if (in_FPSCR_SZ == '\0') {
    puVar18 = (undefined8 *)((int)&local_18 + 4);
    local_18 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_18);
  }
  else {
    puVar18 = &local_18;
    local_18 = in_dr14;
  }
  *(undefined4 *)((int)puVar18 + -4) = in_PR;
  iVar9 = (int)DAT_8c018c7a;
  piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c018c7c);
  iVar11 = *piVar6;
  pcVar12 = (code *)piVar6[2];
  *(int *)((int)puVar18 + (int)DAT_8c018c7e + iVar9 + -4) = param_4;
  (*pcVar12)(param_4 + iVar11);
  uVar24 = (undefined4)in_dr14;
  iVar15 = *(int *)((int)DAT_8c018c84 + *(int *)(DAT_8c018c80 + param_4)) +
           (int)DAT_8c018c82 * (uint)*(ushort *)(param_4 + 0x54);
  iVar11 = *(int *)(param_4 + 0x28);
  *(int *)((int)puVar18 + (int)DAT_8c018c88 + iVar9 + -4) = iVar15;
  piVar6 = (int *)(iVar11 + DAT_8c018c86);
  iVar11 = (*(code *)piVar6[2])(param_4 + *piVar6,param_4 + DAT_8c018c8a);
  uVar8 = SUB84(param_1,0);
  if (iVar11 != 0) {
    if (iVar11 == 1) {
      (*(code *)PTR_FUN_8c018e04)(param_4);
    }
    else if (iVar11 == 2) {
      piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c018dea);
      (*(code *)piVar6[2])(param_4 + *piVar6);
      param_1 = (double)(ulonglong)uVar8;
      (*(code *)PTR_FUN_8c018e08)(param_4 + 0x10,0xb);
    }
    goto LAB_8c018b6e;
  }
  (*(code *)PTR_FUN_8c018e0c)(param_4);
  if ((*(int *)(*(int *)(DAT_8c018dec + param_4) + 0x24) == 3) ||
     (iVar11 = (*(code *)PTR_FUN_8c018e14)
                         (*(undefined4 *)(DAT_8c018dfc + param_4),*(undefined2 *)(param_4 + 0x54)),
     iVar11 == 0)) {
    if (((*(byte *)(iVar15 + 8) & 0x10) == 0) &&
       ((((int)*(char *)(param_4 + 0x10) & (int)DAT_8c018dee) == 2 &&
        (*(int *)(param_4 + 0x24) != 1)))) {
      iVar11 = *(int *)(DAT_8c018df0 + param_4);
      if (iVar11 != 0) {
        *(undefined4 *)((int)puVar18 + iVar9 + 8) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0xc) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x10) = 0xffffffff;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x14) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x18) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x1c) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x20) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x24) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x28) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x2c) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x30) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x34) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x38) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x3c) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x40) = 0xffffffff;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x44) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x48) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x4c) = 3;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x50) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x54) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x58) = 4;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x5c) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x60) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 100) = 5;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x68) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x6c) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x70) = 0xffffffff;
        (*(code *)PTR_FUN_8c0190f4)
                  (*(undefined4 *)(param_4 + 0x58),
                   *(undefined4 *)((int)puVar18 + (iVar11 * 9 + 2) * 4 + iVar9 + 8));
        iVar11 = (int)DAT_8c0190ee;
        *(undefined4 *)(DAT_8c0190ec + param_4) = 0;
        piVar6 = (int *)(*(int *)(param_4 + 0x28) + iVar11);
        (*(code *)piVar6[2])(param_4 + *piVar6);
      }
      if (*(char *)(iVar15 + 0x18) == '\x06') {
        if ((*(byte *)(DAT_8c0190f0 + param_4) & 8) == 0) {
          if (*(int *)(DAT_8c0190f2 + param_4) != 1) {
            uVar5 = 1;
LAB_8c018d72:
            piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c018df8);
            (*(code *)piVar6[2])(param_4 + *piVar6,uVar5);
          }
        }
        else if (*(int *)(DAT_8c0190f2 + param_4) != 4) {
          uVar5 = 4;
          goto LAB_8c018d72;
        }
      }
      else if ((*(byte *)(DAT_8c018df2 + param_4) & 0xf) == 0) {
        if ((*(byte *)(DAT_8c018df4 + param_4) & 8) == 0) {
          if (*(int *)(DAT_8c018df6 + param_4) != 0) {
            uVar5 = 0;
            goto LAB_8c018d72;
          }
        }
        else if (*(int *)(DAT_8c0191d2 + param_4) != 3) {
          uVar5 = 3;
          goto LAB_8c018d72;
        }
      }
      else if ((*(byte *)(DAT_8c0190f0 + param_4) & 8) == 0) {
        if (*(int *)(DAT_8c0190f2 + param_4) != 1) {
          uVar5 = 1;
          goto LAB_8c018d72;
        }
      }
      else if (*(int *)(DAT_8c0190f2 + param_4) != 4) {
        uVar5 = 4;
        goto LAB_8c018d72;
      }
    }
  }
  else {
    if ((*(byte *)(iVar15 + 8) & 8) != 0) {
      iVar11 = (*(code *)PTR_FUN_8c018f4c)
                         (*(undefined4 *)(DAT_8c018f32 + param_4),*(undefined2 *)(param_4 + 0x54),5)
      ;
      uVar5 = DAT_8c018f50;
      *(int *)((int)puVar18 + (int)DAT_8c018f34 + iVar9 + -4) = iVar11;
      *(uint *)((int)puVar18 + (int)DAT_8c018f3a + iVar9 + -4) =
           *(int *)((int)DAT_8c018f38 + *(int *)(DAT_8c018f32 + param_4)) +
           (int)DAT_8c018f36 * (uint)*(ushort *)(param_4 + 0x54);
      *(byte *)(iVar11 + 0x11) = *(byte *)(iVar11 + 0x11) & (byte)DAT_8c018f3c;
      *(ushort *)(iVar11 + 0x10) = *(ushort *)(iVar11 + 0x10) & (ushort)uVar5 | DAT_8c018f3e;
      *(byte *)(iVar11 + 0x11) = *(byte *)(iVar11 + 0x11) & 0xf;
      bVar1 = *(byte *)(DAT_8c018f40 + param_4);
      if ((bVar1 & 1) == 0) {
        if ((bVar1 & 2) == 0) {
          if ((bVar1 & 4) == 0) {
            if ((bVar1 & 8) != 0) {
              *(byte *)(*(int *)((int)puVar18 + (int)DAT_8c018f34 + iVar9 + -4) + 0x11) =
                   *(byte *)(*(int *)((int)puVar18 + (int)DAT_8c018f34 + iVar9 + -4) + 0x11) & 0xf |
                   (byte)DAT_8c018f42;
            }
          }
          else {
            *(byte *)(*(int *)((int)puVar18 + (int)DAT_8c0191d6 + iVar9 + -4) + 0x11) =
                 *(byte *)(*(int *)((int)puVar18 + (int)DAT_8c0191d6 + iVar9 + -4) + 0x11) & 0xf |
                 0x40;
          }
        }
        else {
          *(byte *)(*(int *)((int)puVar18 + (int)DAT_8c0191d6 + iVar9 + -4) + 0x11) =
               *(byte *)(*(int *)((int)puVar18 + (int)DAT_8c0191d6 + iVar9 + -4) + 0x11) & 0xf |
               0x20;
        }
      }
      else {
        *(byte *)(*(int *)((int)puVar18 + (int)DAT_8c0191d6 + iVar9 + -4) + 0x11) =
             *(byte *)(*(int *)((int)puVar18 + (int)DAT_8c0191d6 + iVar9 + -4) + 0x11) & 0xf | 0x10;
      }
      *(int *)((int)puVar18 + (int)DAT_8c018f46 + iVar9 + -4) =
           *(int *)((int)puVar18 + (int)DAT_8c018f34 + iVar9 + -4) + 0x10;
      uVar5 = (*(code *)PTR_FUN_8c018f54)();
      *(undefined4 *)((int)puVar18 + (int)DAT_8c018f48 + iVar9 + -4) = uVar5;
      uVar3 = (*(code *)PTR_FUN_8c018f54)();
      uVar4 = (*(code *)PTR_FUN_8c018f58)
                        (*(undefined4 *)(DAT_8c018f32 + param_4),
                         *(undefined4 *)((int)puVar18 + (int)DAT_8c018f48 + iVar9 + -4),uVar3,
                         *(int *)((int)puVar18 + (int)DAT_8c018f34 + iVar9 + -4) + 2);
      (*(code *)PTR_FUN_8c018f5c)(uVar4);
      uVar5 = (*(code *)PTR_FUN_8c018f54)();
      *(undefined4 *)((int)puVar18 + (int)DAT_8c018f48 + iVar9 + -4) = uVar5;
      uVar5 = (*(code *)PTR_FUN_8c018f54)();
      uVar10 = *(undefined4 *)(DAT_8c018f32 + param_4);
      uVar7 = *(undefined4 *)((int)puVar18 + (int)DAT_8c018f34 + iVar9 + -4);
      *(int *)((int)puVar18 + iVar9 + -4) =
           *(int *)((int)puVar18 + (int)DAT_8c018f3a + iVar9 + -4) + 2;
      (*(code *)PTR_FUN_8c018f60)
                (uVar10,uVar7,*(undefined4 *)((int)puVar18 + (int)DAT_8c018f48 + iVar9 + -4),uVar5);
      *(byte *)(iVar15 + 8) = *(byte *)(iVar15 + 8) & 0xf7;
      *(byte *)(DAT_8c018f4a + param_4) = *(byte *)(DAT_8c018f4a + param_4) & 0xf7;
    }
    if (*(int *)(DAT_8c018df6 + param_4) != 9) {
      iVar11 = *(int *)(DAT_8c018df0 + param_4);
      if (iVar11 != 2) {
        *(undefined4 *)((int)puVar18 + iVar9 + 8) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0xc) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x10) = 0xffffffff;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x14) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x18) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x1c) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x20) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x24) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x28) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x2c) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x30) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x34) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x38) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x3c) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x40) = 0xffffffff;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x44) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x48) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x4c) = 3;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x50) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x54) = 0;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x58) = 4;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x5c) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x60) = 1;
        *(undefined4 *)((int)puVar18 + iVar9 + 100) = 5;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x68) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x6c) = 2;
        *(undefined4 *)((int)puVar18 + iVar9 + 0x70) = 0xffffffff;
        (*(code *)PTR_FUN_8c0190f4)
                  (*(undefined4 *)(param_4 + 0x58),
                   *(undefined4 *)((int)puVar18 + (iVar11 * 9 + 8) * 4 + iVar9 + 8));
        iVar11 = *(int *)(param_4 + 0x28);
        iVar14 = (int)DAT_8c0190ee;
        *(undefined4 *)(DAT_8c0190ec + param_4) = 2;
        piVar6 = (int *)(iVar11 + iVar14);
        (*(code *)piVar6[2])(param_4 + *piVar6);
      }
      piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c018df8);
      (*(code *)piVar6[2])(param_4 + *piVar6,9);
    }
  }
  piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c018dfa);
  if (in_FPSCR_SZ == '\0') {
    param_1 = (double)CONCAT44(*(undefined4 *)(DAT_8c018e10 + 0x34),uVar8);
  }
  else {
    param_1 = *(double *)(DAT_8c018e10 + 0x34);
  }
  (*(code *)piVar6[2])(param_1,param_4 + *piVar6);
LAB_8c018b6e:
  if ((*(byte *)(iVar15 + 8) & 0x20) != 0) {
    param_1 = (double)((ulonglong)param_1 & 0xffffffff);
    (*(code *)PTR_FUN_8c0191e0)(param_4 + 0x10,10);
  }
  iVar11 = param_4 + DAT_8c018c8c;
  if (*(int *)(iVar11 + 0x10) != 0) {
    iVar15 = param_4 + DAT_8c018c8e;
    if (in_FPSCR_SZ == '\0') {
      uVar19 = CONCAT44(*(undefined4 *)(iVar15 + 0x10),SUB84(param_1,0));
    }
    else {
      uVar19 = *(ulonglong *)(iVar15 + 0x10);
    }
    pdVar16 = (double *)(iVar15 + 0x10);
    (*(code *)PTR_FUN_8c018c9c)(uVar19,*(undefined4 *)(iVar11 + 0x10),0);
    param_1 = (double)(uVar19 & 0xffffffff);
    (*(code *)PTR_FUN_8c018ca0)(*(undefined4 *)(iVar11 + 0x10));
    if (in_FPSCR_SZ == '\0') {
      param_3 = (double)CONCAT44(*(undefined4 *)pdVar16,*(undefined4 *)(DAT_8c018ca4 + 0x34));
    }
    else {
      param_3 = *pdVar16;
    }
    if (in_FPSCR_PR == '\0') {
      param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) + SUB84(param_3,0),
                                 SUB84(param_3,0));
    }
    else {
      param_3 = param_3 + param_3;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)pdVar16 = (int)((ulonglong)param_3 >> 0x20);
    }
    else {
      *pdVar16 = param_3;
    }
  }
  uVar10 = SUB84(param_1,0);
  uVar5 = SUB84(param_3,0);
  if (*(char *)(*(int *)((int)DAT_8c018c84 + *(int *)(DAT_8c018c80 + param_4)) +
                (int)DAT_8c018c82 * (uint)*(ushort *)(param_4 + 0x54) + 0x18) == '\0') {
    (*(code *)PTR_FUN_8c0191e4)(*(undefined4 *)(DAT_8c0191d4 + param_4),0);
  }
  else {
    (*(code *)PTR_FUN_8c018ca8)(*(undefined4 *)(DAT_8c018c90 + param_4),1);
    iVar11 = *(int *)(param_4 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar5 = *(undefined4 *)(iVar11 + 0x50);
      uVar22 = CONCAT44(*(undefined4 *)(iVar11 + 0x4c),uVar5);
      uVar20 = CONCAT44(*(undefined4 *)(iVar11 + 0x54),param_2);
      *(undefined4 *)((int)puVar18 + iVar9 + 0x74) = *(undefined4 *)(iVar11 + 0x4c);
      *(undefined4 *)((int)puVar18 + iVar9 + 0x78) = uVar5;
    }
    else {
      uVar22 = *(undefined8 *)(iVar11 + 0x4c);
      uVar26 = *(undefined8 *)(iVar11 + 0x50);
      uVar20 = *(undefined8 *)(iVar11 + 0x54);
      *(undefined8 *)((int)puVar18 + iVar9 + 0x74) = uVar22;
      *(undefined8 *)((int)puVar18 + iVar9 + 0x78) = uVar26;
    }
    uVar5 = (undefined4)uVar22;
    uVar13 = *(undefined4 *)((int)puVar18 + iVar9 + 0x74);
    uVar7 = *(undefined4 *)((int)puVar18 + iVar9 + 0x78);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar18 + (int)DAT_8c018c92 + iVar9 + -4) = (int)((ulonglong)uVar20 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar18 + (int)DAT_8c018c92 + iVar9 + -4) = uVar20;
    }
    *(undefined4 *)((int)puVar18 + iVar9 + -4) = uVar13;
    *(undefined4 *)((int)puVar18 + iVar9) = uVar7;
    uVar7 = *(undefined4 *)(DAT_8c018c90 + param_4);
    *(undefined4 *)((int)puVar18 + iVar9 + 4) = *(undefined4 *)((int)puVar18 + iVar9 + 0x7c);
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)CONCAT44(*(undefined4 *)(DAT_8c018ca4 + 0x34),uVar10);
    }
    else {
      param_1 = *(double *)(DAT_8c018ca4 + 0x34);
    }
    (*(code *)PTR_FUN_8c018cac)(param_1,uVar7);
  }
  *(int *)((int)puVar18 + (int)DAT_8c018c94 + iVar9 + -4) = param_4;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(*(undefined4 *)(DAT_8c018ca4 + 0x34),uVar5);
  }
  else {
    dVar23 = *(double *)(DAT_8c018ca4 + 0x34);
  }
  uVar8 = *(uint *)(param_4 + 0x2c);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar18 + (int)DAT_8c018c96 + iVar9 + -4) = (int)((ulonglong)dVar23 >> 0x20);
  }
  else {
    *(double *)((int)puVar18 + (int)DAT_8c018c96 + iVar9 + -4) = dVar23;
  }
  if ((uVar8 & DAT_8c018cb0) != 0) {
    iVar11 = (int)DAT_8c0191d8;
    param_1 = (double)((ulonglong)param_1 & 0xffffffff);
    (*(code *)PTR_FUN_8c0191e8)(param_4 + iVar11 + 0x60,3);
    uVar21 = SUB84(dVar23,0);
    uVar5 = (*(code *)PTR_FUN_8c0191ec)
                      (*(undefined4 *)((int)DAT_8c0191dc + *(int *)(DAT_8c0191da + param_4)),2,1);
    iVar15 = (int)DAT_8c0191de;
    *(undefined4 *)(param_4 + iVar11 + 0x84) = uVar5;
    uVar8 = DAT_8c0191f0;
    dVar23 = (double)(ulonglong)uVar21;
    pdVar16 = (double *)(param_4 + iVar15 + 0x14);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)pdVar16 = 0;
    }
    else {
      *pdVar16 = dVar23;
    }
    *(uint *)(param_4 + 0x2c) = *(uint *)(param_4 + 0x2c) & uVar8;
  }
  iVar14 = 0;
  iVar17 = 3;
  iVar11 = *(int *)((int)puVar18 + (int)DAT_8c018c94 + iVar9 + -4) + (int)DAT_8c018c8e;
  iVar15 = *(int *)((int)puVar18 + (int)DAT_8c018c94 + iVar9 + -4) + (int)DAT_8c018c98;
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(*(undefined4 *)((int)puVar18 + (int)DAT_8c018c96 + iVar9 + -4),uVar24)
    ;
  }
  else {
    dVar25 = *(double *)((int)puVar18 + (int)DAT_8c018c96 + iVar9 + -4);
  }
  do {
    if (*(int *)(iVar14 * 0x30 + iVar15 + 0x1c) != 0) {
      dVar2 = dVar25;
      if (in_FPSCR_SZ == '\0') {
        dVar2 = (double)((ulonglong)param_1 & 0xffffffff);
      }
      param_1 = dVar2;
      (*(code *)PTR_FUN_8c0191f4)(param_1,iVar14 * 0x30 + iVar15);
      if (*(int *)(iVar14 * 0x30 + iVar15 + 0x10) == 3) {
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44(*(undefined4 *)(iVar11 + 0x14),SUB84(dVar23,0));
        }
        else {
          dVar23 = *(double *)(iVar11 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) +
                                    (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar25;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(iVar11 + 0x14) = (int)((ulonglong)dVar23 >> 0x20);
        }
        else {
          *(double *)(iVar11 + 0x14) = dVar23;
        }
      }
    }
    uVar24 = SUB84(param_1,0);
    iVar17 = iVar17 + -1;
    iVar14 = iVar14 + 1;
  } while (iVar17 != 0);
  iVar11 = *(int *)((int)puVar18 + (int)DAT_8c018c7e + iVar9 + -4);
  (*(code *)PTR_FUN_8c018cb4)(iVar11);
  if (in_FPSCR_SZ == '\0') {
    uVar20 = CONCAT44(*(undefined4 *)
                       (*(int *)((int)puVar18 + (int)DAT_8c018de6 + iVar9 + -4) + 0x28),uVar24);
  }
  else {
    uVar20 = *(undefined8 *)(*(int *)((int)puVar18 + (int)DAT_8c018de6 + iVar9 + -4) + 0x28);
  }
  (*(code *)PTR_FUN_8c018e00)(uVar20,*(undefined4 *)(iVar11 + 0x58));
  return;
}

