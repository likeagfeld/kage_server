// entry: 8c041370
// name: FUN_8c041370


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c041370(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined2 *puVar13;
  int iVar14;
  char *pcVar15;
  undefined8 *puVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 in_dr14;
  double dVar20;
  undefined4 in_PR;
  uint uVar21;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  iVar10 = DAT_8c041520;
  iVar8 = DAT_8c041514;
  if (in_FPSCR_SZ == '\0') {
    puVar16 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar16 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  puVar13 = (undefined2 *)(param_3 + DAT_8c0414f2);
  uVar2 = *puVar13;
  *(undefined2 *)((int)puVar16 + -0x52) = puVar13[1];
  *(undefined2 *)((int)puVar16 + -0x54) = uVar2;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(*(undefined4 *)(DAT_8c0414f4 + param_3),(int)in_dr14);
    dVar19 = (double)CONCAT44(DAT_8c041518,param_2);
  }
  else {
    dVar20 = *(double *)(DAT_8c0414f4 + param_3);
    dVar19 = (double)CONCAT44(PTR_FUN_8c04151c,DAT_8c041518);
  }
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) +
                              (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar20,0));
  }
  else {
    dVar20 = dVar20 + dVar19;
  }
  dVar17 = dVar20;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),param_1);
  }
  (*(code *)PTR_FUN_8c04151c)(dVar17,*(undefined4 *)(param_3 + 0x58));
  uVar5 = SUB84(dVar19,0);
  dVar19 = dVar20;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)((ulonglong)dVar17 & 0xffffffff);
  }
  uVar21 = SUB84(dVar19,0);
  (*(code *)PTR_FUN_8c041524)(dVar19,*(undefined4 *)(param_3 + 0x58));
  dVar19 = dVar20;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)(ulonglong)uVar21;
  }
  uVar4 = SUB84(dVar19,0);
  (*(code *)PTR_FUN_8c041528)(dVar19,*(undefined4 *)(param_3 + 0x58));
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c0414f4 + param_3) = (int)((ulonglong)dVar20 >> 0x20);
  }
  else {
    *(double *)(DAT_8c0414f4 + param_3) = dVar20;
  }
  *(undefined4 *)(DAT_8c0414f6 + param_3) = 0;
  iVar14 = param_3 + DAT_8c0414f8;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)(DAT_8c0414fa + param_3),uVar4);
  }
  else {
    uVar18 = *(undefined8 *)(DAT_8c0414fa + param_3);
  }
  uVar4 = (*(code *)PTR_FUN_8c04152c)(uVar18,iVar14,(undefined1 *)((int)puVar16 + -0x50));
  *(undefined4 *)(DAT_8c0414fc + param_3) = uVar4;
  (*(code *)PTR_FUN_8c041530)
            (*(undefined4 *)(DAT_8c0414fe + param_3),(undefined1 *)((int)puVar16 + -0x50),
             (undefined1 *)((int)puVar16 + -0x48));
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)((int)puVar16 + -0x50),*(undefined4 *)((int)puVar16 + -0x48));
  }
  else {
    uVar18 = *(undefined8 *)((int)puVar16 + -0x50);
  }
  (*(code *)PTR_FUN_8c041534)
            (uVar18,*(undefined4 *)(DAT_8c0414fe + param_3),(undefined1 *)((int)puVar16 + -0x54));
  (*(code *)PTR_FUN_8c041538)(param_3,(undefined1 *)((int)puVar16 + -0x50));
  iVar11 = *(int *)(DAT_8c041500 + iVar8);
  if (iVar11 == 0x10) {
    *(int *)(DAT_8c0419e0 + iVar8) = *(int *)(DAT_8c0419e0 + iVar8) + 1;
    iVar11 = *(int *)(DAT_8c0419e2 + iVar8) + 1;
    *(int *)(DAT_8c0419e2 + iVar8) = iVar11;
    if (0xf < iVar11) {
      *(undefined4 *)(DAT_8c0419e2 + iVar8) = 0;
    }
  }
  else {
    *(int *)(DAT_8c041502 + iVar8) = *(int *)(DAT_8c041502 + iVar8) + 1;
    *(int *)(DAT_8c041500 + iVar8) = iVar11 + 1;
  }
  iVar11 = *(int *)(DAT_8c041502 + iVar8);
  if (0xf < iVar11) {
    iVar11 = 0;
    *(undefined4 *)(DAT_8c041502 + iVar8) = 0;
  }
  *(undefined1 *)((int)puVar16 + -0x33) = *(undefined1 *)((int)puVar16 + -0x4f);
  *(undefined1 *)((int)puVar16 + -0x34) = *(undefined1 *)((int)puVar16 + -0x50);
  *(undefined1 *)((int)puVar16 + -0x32) = *(undefined1 *)((int)puVar16 + -0x4e);
  *(undefined1 *)((int)puVar16 + -0x31) = *(undefined1 *)((int)puVar16 + -0x4d);
  *(undefined1 *)((int)puVar16 + -0x30) = *(undefined1 *)((int)puVar16 + -0x4c);
  *(undefined1 *)((int)puVar16 + -0x2f) = *(undefined1 *)((int)puVar16 + -0x4b);
  *(undefined1 *)((int)puVar16 + -0x2e) = *(undefined1 *)((int)puVar16 + -0x4a);
  *(undefined1 *)((int)puVar16 + -0x2d) = *(undefined1 *)((int)puVar16 + -0x49);
  uVar4 = *(undefined4 *)((int)puVar16 + -0x30);
  *(undefined1 *)((int)puVar16 + -0x2c) = *(undefined1 *)((int)puVar16 + -0x48);
  *(undefined1 *)((int)puVar16 + -0x2b) = *(undefined1 *)((int)puVar16 + -0x47);
  *(undefined1 *)((int)puVar16 + -0x2a) = *(undefined1 *)((int)puVar16 + -0x46);
  puVar9 = (undefined4 *)(iVar8 + 0xc + iVar11 * 0xc);
  *(undefined1 *)((int)puVar16 + -0x29) = *(undefined1 *)((int)puVar16 + -0x45);
  *puVar9 = *(undefined4 *)((int)puVar16 + -0x34);
  iVar11 = (int)DAT_8c0414fe;
  puVar9[2] = *(undefined4 *)((int)puVar16 + -0x2c);
  iVar11 = *(int *)(iVar11 + param_3);
  puVar9[1] = uVar4;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)(iVar11 + 0x18),uVar5);
  }
  else {
    uVar18 = *(undefined8 *)(iVar11 + 0x18);
  }
  uVar2 = *(undefined2 *)((int)puVar16 + -0x54);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c041504 + iVar8) = (int)((ulonglong)uVar18 >> 0x20);
  }
  else {
    *(undefined8 *)(DAT_8c041504 + iVar8) = uVar18;
  }
  iVar11 = (int)DAT_8c0414fc;
  **(undefined2 **)(DAT_8c041506 + param_3) = uVar2;
  puVar3 = PTR_FUN_8c04153c;
  if (*(int *)(iVar11 + param_3) == 0) {
    *(undefined2 *)(DAT_8c041508 + param_3) = 1;
    uVar5 = (*(code *)puVar3)();
    uVar21 = (uint)uVar18;
    uVar4 = (*(code *)puVar3)();
    iVar14 = (*(code *)PTR_FUN_8c041540)(*(undefined4 *)(DAT_8c0414fe + param_3),uVar5,uVar4,0x69);
    if (((iVar14 == 0) &&
        (uVar6 = (*(code *)PTR_FUN_8c04188c)(param_3,puVar13), (uVar6 & 1 | 2) != 0)) &&
       ((uVar6 & 4 | 8) != 0)) {
      iVar14 = *(int *)(DAT_8c041870 + param_3);
      *(byte *)((int)puVar16 + -0x54) =
           (*(byte *)((int)puVar16 + -0x54) & (byte)DAT_8c04186e | 0x10) & (byte)DAT_8c041872 | 8;
      (*(code *)PTR_FUN_8c041890)
                (*(undefined4 *)((int)DAT_8c041876 + *(int *)(DAT_8c041874 + iVar14)),
                 (undefined1 *)((int)puVar16 + -0x54),(undefined1 *)((int)puVar16 + -0x50),
                 (undefined1 *)((int)puVar16 + -0x48));
      uVar5 = (*(code *)puVar3)();
      *(undefined4 *)((int)puVar16 + -8) = uVar5;
      uVar5 = (*(code *)puVar3)();
      uVar18 = (*(code *)PTR_FUN_8c041894)
                         (*(undefined4 *)(DAT_8c04187a + param_3),*(undefined4 *)((int)puVar16 + -8)
                          ,uVar5);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar16 + -0x4c) = (int)((ulonglong)uVar18 >> 0x20);
      }
      else {
        *(undefined8 *)((int)puVar16 + -0x4c) = uVar18;
      }
      (*(code *)PTR_FUN_8c041898)(param_3);
      **(undefined2 **)(DAT_8c04187c + param_3) = *(undefined2 *)((int)puVar16 + -0x54);
      iVar14 = *(int *)(iVar10 + 8);
      *(int *)((int)puVar16 + -0x28) = iVar14;
      *(int *)((int)puVar16 + -0x24) = iVar14 + 0x10;
      uVar5 = (*(code *)puVar3)();
      *(undefined4 *)((int)puVar16 + -0xc) = uVar5;
      iVar14 = (*(code *)puVar3)();
      if (*(int *)((int)puVar16 + -0xc) == iVar14) {
        uVar5 = (*(code *)puVar3)();
        *(undefined4 *)((int)puVar16 + -0xc) = uVar5;
        iVar14 = (*(code *)puVar3)();
        if (*(int *)((int)puVar16 + -0xc) == iVar14) {
          uVar6 = (int)*(char *)(*(int *)(iVar10 + 4) + 0x12) & (int)DAT_8c04187e;
          *(int *)((int)puVar16 + -0x20) = *(int *)(iVar10 + 4);
          if (((uVar6 != 4) && (uVar6 != 3)) &&
             (iVar14 = (*(code *)PTR_FUN_8c041a00)(), iVar14 == 0)) {
            (*(code *)PTR_FUN_8c041a04)(*(undefined4 *)(iVar10 + 4));
          }
        }
      }
      uVar6 = (uint)DAT_8c041880;
      *(byte *)(*(int *)(iVar8 + 8) + 0xb) = *(byte *)(*(int *)(iVar8 + 8) + 0xb) & 0xfe;
      *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) & uVar6 & DAT_8c04189c;
      (*(code *)PTR_FUN_8c0418a0)(*(undefined4 *)(param_3 + 0x58),0);
      piVar7 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c04187a);
      (*(code *)piVar7[2])(param_3 + *piVar7,0);
      *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) & (int)DAT_8c041882;
      (*(code *)PTR_FUN_8c0418a4)(*(undefined4 *)(param_3 + 0x58));
      (*(code *)PTR_FUN_8c0418a8)(*(undefined4 *)(param_3 + 0x58));
      (*(code *)PTR_FUN_8c0418ac)(*(undefined4 *)(param_3 + 0x58));
      (*(code *)PTR_FUN_8c0418b0)(param_3);
      (*(code *)PTR_FUN_8c0418b4)(param_3);
      iVar10 = 2;
      *(undefined1 *)(DAT_8c041884 + param_3) = 8;
      puVar3 = PTR_DAT_8c0418b8;
      *(undefined4 *)(DAT_8c041886 + param_3) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(DAT_8c041888 + param_3) = 0;
      }
      else {
        *(ulonglong *)(DAT_8c041888 + param_3) = (ulonglong)uVar21;
      }
      *(undefined4 *)(DAT_8c04188a + iVar8) = 2;
      iVar8 = DAT_8c0419e8;
      piVar7 = (int *)puVar3;
      do {
        if (*piVar7 < 0) {
          iVar10 = (int)piVar7 - (int)puVar3;
          if (iVar10 < 0) {
            iVar10 = iVar10 + 3;
          }
          iVar10 = iVar10 >> 2;
          goto LAB_8c0418cc;
        }
        iVar10 = iVar10 + -1;
        piVar7 = piVar7 + 1;
      } while (iVar10 != 0);
      iVar10 = 2;
LAB_8c0418cc:
      if (iVar10 != 2) {
        *(undefined4 *)(puVar3 + iVar10 * 4) = 0;
        uVar2 = DAT_8c0419d8;
        pbVar12 = (byte *)(iVar8 + iVar10 * 2);
        *(undefined2 *)(iVar8 + iVar10 * 2) =
             *(undefined2 *)
              (*(int *)((int)DAT_8c0419d4 + *(int *)(DAT_8c0419d2 + param_3)) +
               (int)DAT_8c0419d6 * (uint)*(ushort *)(param_3 + 0x54) + 2);
        *pbVar12 = (*pbVar12 & (byte)uVar2 | 0x10) & (byte)DAT_8c0419da | 8;
      }
      pcVar15 = PTR_DAT_8c0419ec + DAT_8c0419dc;
      cVar1 = *pcVar15;
      *(char **)((int)puVar16 + -0x1c) = pcVar15;
      if (cVar1 == '\0') {
        *(undefined4 *)((int)puVar16 + -0x18) = *DAT_8c0419f0;
      }
      else {
        *(undefined4 *)((int)puVar16 + -0x18) = *DAT_8c0419fc;
      }
      (*(code *)PTR_FUN_8c0419f4)(pcVar15[1]);
      (*(code *)PTR_FUN_8c0419f8)
                (*(undefined4 *)((int)puVar16 + -0x18),
                 *(undefined1 *)(*(int *)((int)puVar16 + -0x1c) + 2),
                 *(undefined1 *)(*(int *)((int)puVar16 + -0x1c) + 3),0);
      *(undefined2 *)(DAT_8c0419de + param_3) = 0;
    }
    else {
      *(byte *)((int)puVar16 + -0x54) =
           (*(byte *)((int)puVar16 + -0x54) & (byte)DAT_8c04150c | 0x10) & (byte)DAT_8c041510 | 8;
      (*(code *)PTR_FUN_8c0416b4)
                (*(undefined4 *)
                  ((int)DAT_8c0416a2 +
                  *(int *)((int)DAT_8c041512 + *(int *)(DAT_8c04150e + param_3))),
                 (undefined1 *)((int)puVar16 + -0x54),(undefined1 *)((int)puVar16 + -0x50),
                 (undefined1 *)((int)puVar16 + -0x48));
      uVar5 = (*(code *)puVar3)();
      uVar4 = (*(code *)puVar3)();
      puVar3 = PTR_DAT_8c0416bc;
      uVar18 = (*(code *)PTR_FUN_8c0416b8)(*(undefined4 *)(DAT_8c0416a6 + param_3),uVar5,uVar4);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar16 + -0x4c) = (int)((ulonglong)uVar18 >> 0x20);
      }
      else {
        *(undefined8 *)((int)puVar16 + -0x4c) = uVar18;
      }
      (*(code *)PTR_FUN_8c0416c0)(param_3);
      **(undefined2 **)(DAT_8c0416a8 + param_3) = *(undefined2 *)((int)puVar16 + -0x54);
      iVar8 = (*(code *)PTR__rand_8c0416c4)();
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44((float)iVar8,uVar21);
      }
      else {
        dVar20 = (double)iVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),DAT_8c0416c8);
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) / SUB84(dVar20,0),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 / dVar20;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),DAT_8c0416cc);
      }
      if (in_FPSCR_PR == '\0') {
        uVar21 = (uint)((float)((ulonglong)dVar20 >> 0x20) * SUB84(dVar20,0));
      }
      else {
        uVar21 = (uint)(dVar20 * dVar20);
      }
      if ((int)uVar21 < 0) {
        iVar8 = 1 >> (~uVar21 & 0x1f) + 1;
      }
      else {
        iVar8 = 1 << (uVar21 & 0x1f);
      }
      FUN_8c0406f0(param_3,iVar8,1);
      pcVar15 = puVar3 + DAT_8c0416aa;
      if (*pcVar15 == '\0') {
        uVar5 = *_DAT_8c0416d0;
      }
      else {
        uVar5 = *DAT_8c0419fc;
      }
      (*(code *)PTR_FUN_8c0416d4)(uVar5,pcVar15[1]);
      (*(code *)PTR_FUN_8c0416d8)(uVar5,pcVar15[2],pcVar15[3],0);
      *(undefined4 *)(DAT_8c0416ac + param_3) = 1;
    }
  }
  else {
    piVar7 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c0416a6);
    (*(code *)piVar7[2])(param_3 + *piVar7,1);
    puVar3 = PTR_FUN_8c0416e0;
    if (*(short *)(DAT_8c0416ae + param_3) == 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)(DAT_8c0416b0 + param_3),DAT_8c0416e4);
      }
      else {
        dVar20 = *(double *)(DAT_8c0416b0 + param_3);
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 + dVar20;
      }
      uVar5 = (undefined4)((ulonglong)dVar20 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar16 + -0x14) = uVar5;
      }
      else {
        *(double *)((int)puVar16 + -0x14) = dVar20;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(DAT_8c0416b0 + param_3) = uVar5;
      }
      else {
        *(double *)(DAT_8c0416b0 + param_3) = dVar20;
      }
      dVar20 = (double)(*(code *)puVar3)(iVar14);
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x14),_DAT_8c0416e8);
      }
      else {
        dVar19 = *(double *)((int)puVar16 + -0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) /
                                  (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 / dVar20;
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar19 >> 0x20) < SUB84(dVar19,0)) {
        (*(code *)PTR_FUN_8c0416b4)
                  (*(undefined4 *)(*(int *)(DAT_8c0416a6 + param_3) + 8),*(int *)(iVar10 + 8) + 0x10
                   ,(undefined1 *)((int)puVar16 + -0x44),(undefined1 *)((int)puVar16 + -0x3c));
        iVar8 = *(int *)(iVar10 + 8);
        *(int *)((int)puVar16 + -0x28) = iVar8;
        *(int *)((int)puVar16 + -0x24) = iVar8 + 0x10;
        *(undefined **)((int)puVar16 + -0x10) = PTR_FUN_8c0416ec;
        uVar5 = (*(code *)PTR_FUN_8c0416ec)();
        *(undefined4 *)((int)puVar16 + -0xc) = uVar5;
        uVar5 = (**(code **)((int)puVar16 + -0x10))();
        uVar18 = (*(code *)PTR_FUN_8c0416b8)
                           (*(undefined4 *)(DAT_8c0416a6 + param_3),
                            *(undefined4 *)((int)puVar16 + -0xc),uVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar16 + -0x40) = (int)((ulonglong)uVar18 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar16 + -0x40) = uVar18;
        }
        (*(code *)PTR_FUN_8c0416f0)(iVar14);
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)(DAT_8c0416b0 + param_3),DAT_8c0416dc);
      }
      else {
        dVar20 = *(double *)(DAT_8c0416b0 + param_3);
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 + dVar20;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c0416b0 + param_3) = (int)((ulonglong)dVar20 >> 0x20);
      }
      else {
        *(double *)(DAT_8c0416b0 + param_3) = dVar20;
      }
    }
  }
  return;
}

