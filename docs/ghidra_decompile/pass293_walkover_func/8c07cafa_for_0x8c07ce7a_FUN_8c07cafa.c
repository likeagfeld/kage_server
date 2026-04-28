// query addr: 0x8c07ce7a
// containing entry: 8c07cafa
// name: FUN_8c07cafa
// signature: undefined FUN_8c07cafa(void)
// body addrs: 1954


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c07cafa(uint *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  bool bVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  short sVar15;
  undefined8 *puVar16;
  undefined8 in_dr14;
  ulonglong uVar17;
  undefined8 in_xd14;
  int iVar18;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 local_2c [8];
  undefined8 uStack_24;
  
  puVar2 = PTR__memset_8c07cca0;
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_24);
    puVar16 = &uStack_24;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr14;
  }
  else {
    puVar16 = (undefined8 *)local_2c;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  iVar18 = param_1[9] * param_1[8];
  uVar6 = *param_1;
  *(uint **)((int)puVar16 + -0x1c) = param_1;
  iVar5 = (int)DAT_8c07cc6e;
  uVar10 = 0;
  *param_1 = uVar6 & 0xffffff93 | 0x10;
  (*(code *)puVar2)((int)param_1 + iVar5,0,4);
  *(int *)((int)puVar16 + -0x18) = iVar18;
  (*(code *)puVar2)((int)param_1 + (int)DAT_8c07cc70,0,0xf);
  (*(code *)PTR_FUN_8c07cca8)
            (param_1 + 0x11,
             *(int *)((int)DAT_8c07cc72 + param_1[1]) +
             (*(uint *)((int)DAT_8c07cc74 + param_1[3]) & DAT_8c07cca4));
  uVar6 = param_1[2];
  if (in_FPSCR_SZ == '\0') {
    param_1[0xd] = uVar10;
  }
  else {
    *(undefined8 *)(param_1 + 0xd) = in_xd14;
  }
  *(undefined4 *)((int)DAT_8c07cc76 + (int)param_1) = 0;
  *(uint *)((int)DAT_8c07cc78 + (int)param_1) = (uint)*(byte *)(uVar6 + 2);
  puVar3 = PTR__memcpy_8c07ccac;
  *(undefined4 *)((int)DAT_8c07cc7a + (int)param_1) = 0;
  *(undefined4 *)((int)DAT_8c07cc7c + (int)param_1) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(uint *)((int)DAT_8c07cc7e + (int)param_1) = uVar10;
  }
  else {
    *(undefined8 *)((int)DAT_8c07cc7e + (int)param_1) = in_xd14;
  }
  (*(code *)puVar3)(*(undefined4 *)((int)DAT_8c07cc80 + (int)param_1),
                    *(undefined4 *)((int)DAT_8c07cc82 + uVar6),iVar18);
  (*(code *)puVar2)(*(undefined4 *)((int)DAT_8c07cc84 + (int)param_1),0,iVar18 * 4);
  (*(code *)puVar2)(*(undefined4 *)((int)DAT_8c07cc86 + (int)param_1),0,iVar18 * 4);
  (*(code *)puVar2)(*(undefined4 *)((int)DAT_8c07cc88 + (int)param_1),0,iVar18 * 4);
  (*(code *)puVar2)(*(undefined4 *)((int)DAT_8c07cc8a + (int)param_1),0,iVar18 * 4);
  (*(code *)puVar2)(*(undefined4 *)((int)DAT_8c07cc8c + (int)param_1),0,iVar18 * 4);
  (*(code *)puVar2)(*(undefined4 *)((int)DAT_8c07cc8e + (int)param_1),0,iVar18 * 4);
  if (*(int *)((int)DAT_8c07cc90 + (int)param_1) != 0) {
    (*(code *)PTR__memset_8c07cca0)(0,*(int *)((int)puVar16 + -0x18) << 2);
  }
  if (*(int *)((int)DAT_8c07cc92 + (int)param_1) != 0) {
    (*(code *)PTR__memset_8c07cca0)(0,*(int *)((int)puVar16 + -0x18) << 2);
  }
  if (*(int *)((int)DAT_8c07cc94 + (int)param_1) != 0) {
    (*(code *)PTR__memset_8c07cca0)(0,*(int *)((int)puVar16 + -0x18) << 2);
  }
  puVar2 = PTR_FUN_8c07ccb0;
  sVar15 = 0;
  iVar18 = 8;
  puVar13 = *(undefined2 **)((int)DAT_8c07cc96 + (int)param_1);
  uVar17 = CONCAT44(0x3f800000,uVar10);
  iVar5 = (int)DAT_8c07cc98;
  do {
    puVar13[2] = sVar15;
    *(undefined1 *)(puVar13 + 4) = 0;
    *(undefined1 *)((int)puVar13 + 9) = 0;
    *(undefined1 *)((int)puVar13 + 0xb) = 0;
    puVar3 = PTR_FUN_8c07ccb4;
    *(undefined1 *)(puVar13 + 0xc) = 0;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar13 + 10) = (int)uVar17;
    }
    else {
      *(undefined8 *)(puVar13 + 10) = in_xd14;
    }
    *puVar13 = 0;
    sVar15 = sVar15 + 1;
    puVar13[0xf] = puVar13[0xe];
    uVar7 = (undefined4)(uVar17 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar13 + 0x10) = (int)uVar17;
      *(undefined4 *)(puVar13 + 0x14) = uVar7;
      *(undefined4 *)(puVar13 + 0x1c) = uVar7;
    }
    else {
      *(undefined8 *)(puVar13 + 0x10) = in_xd14;
      *(ulonglong *)(puVar13 + 0x14) = uVar17;
      *(ulonglong *)(puVar13 + 0x1c) = uVar17;
    }
    *(undefined4 *)((int)DAT_8c07cc9a + (int)puVar13) = 0;
    (*(code *)puVar3)(param_1,puVar13);
    (*(code *)puVar2)(param_1,puVar13);
    iVar18 = iVar18 + -1;
    puVar13 = (undefined2 *)((int)puVar13 + iVar5);
  } while (iVar18 != 0);
  puVar13 = *(undefined2 **)((int)DAT_8c07cc9c + (int)param_1);
  iVar5 = 0;
  if (0 < (int)param_1[10]) {
    iVar18 = (int)DAT_8c07cdfc;
    do {
      *puVar13 = 0;
      puVar13[2] = (short)iVar5;
      iVar5 = iVar5 + 1;
      *(byte *)((int)puVar13 + 9) = *(byte *)((int)puVar13 + 9) & 0xf;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar13 + 0x38) = (int)uVar17;
      }
      else {
        *(undefined8 *)(puVar13 + 0x38) = in_xd14;
      }
      puVar13 = (undefined2 *)((int)puVar13 + iVar18);
    } while (iVar5 < (int)param_1[10]);
  }
  uVar10 = param_1[8];
  uVar6 = param_1[9];
  puVar13 = *(undefined2 **)((int)DAT_8c07cdfe + (int)param_1);
  iVar5 = uVar6 * uVar10 + -1;
  iVar18 = 0;
  if (0 < iVar5) {
    sVar15 = 1;
    puVar8 = puVar13;
    iVar12 = iVar18;
    do {
      iVar18 = iVar12 + 2;
      *puVar8 = 0;
      puVar8[2] = (short)iVar12;
      puVar8[10] = 0;
      puVar8[0xc] = sVar15;
      sVar15 = sVar15 + 2;
      puVar8 = puVar8 + 0x14;
      iVar12 = iVar18;
    } while (iVar18 < iVar5);
  }
  if (iVar18 < (int)(uVar6 * uVar10)) {
    puVar13 = puVar13 + iVar18 * 10;
    puVar13[2] = (short)iVar18;
    *puVar13 = 0;
  }
  uVar4 = DAT_8c07ce02;
  sVar15 = 0;
  iVar5 = 0x40;
  puVar13 = *(undefined2 **)((int)DAT_8c07ce00 + (int)param_1);
  do {
    *puVar13 = 0;
    puVar13[2] = sVar15;
    iVar5 = iVar5 + -1;
    *(byte *)((int)puVar13 + 9) = *(byte *)((int)puVar13 + 9) & (byte)uVar4;
    puVar13[10] = 0;
    puVar13[0xc] = sVar15 + 1;
    sVar15 = sVar15 + 2;
    *(byte *)((int)puVar13 + 0x1d) = *(byte *)((int)puVar13 + 0x1d) & (byte)uVar4;
    puVar13 = puVar13 + 0x14;
  } while (iVar5 != 0);
  iVar5 = *(int *)((int)DAT_8c07ce04 + (int)param_1);
  iVar18 = 0;
  if (0 < (int)param_1[0xb]) {
    do {
      (*(code *)PTR__memset_8c07ce14)(iVar5,0,0x74);
      *(short *)(iVar5 + 4) = (short)iVar18;
      iVar18 = iVar18 + 1;
      iVar5 = iVar5 + 0x74;
    } while (iVar18 < (int)param_1[0xb]);
  }
  puVar13 = *(undefined2 **)((int)DAT_8c07ce06 + (int)param_1);
  iVar5 = 0;
  if (0 < (int)param_1[0xc]) {
    do {
      *puVar13 = 0;
      puVar13[2] = (short)iVar5;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(puVar13 + 4) = 0;
      puVar13 = puVar13 + 10;
    } while (iVar5 < (int)param_1[0xc]);
  }
  uVar6 = param_1[10];
  puVar13 = *(undefined2 **)((int)DAT_8c07ce08 + (int)param_1);
  iVar5 = 0;
  if (0 < (int)uVar6) {
    do {
      *puVar13 = 0;
      puVar13[2] = (short)iVar5;
      iVar5 = iVar5 + 1;
      uVar6 = param_1[10];
      puVar13 = puVar13 + 8;
    } while (iVar5 < (int)uVar6);
  }
  puVar2 = PTR_FUN_8c07ce18;
  iVar5 = *(int *)((int)DAT_8c07ce0a + (int)param_1);
  iVar18 = 0;
  if (0 < (int)uVar6) {
    iVar12 = (int)DAT_8c07ce0c;
    do {
      (*(code *)puVar2)(param_1,iVar5);
      iVar18 = iVar18 + 1;
      iVar5 = iVar5 + iVar12;
    } while (iVar18 < (int)param_1[10]);
  }
  puVar13 = *(undefined2 **)((int)DAT_8c07ce0e + (int)param_1);
  if (puVar13 != (undefined2 *)0x0) {
    iVar5 = 0;
    iVar18 = 0;
    uVar7 = *(undefined4 *)((int)DAT_8c07ce10 + (int)param_1);
    *(undefined4 *)((int)puVar16 + -0x10) = 0;
    *(undefined4 *)((int)puVar16 + -0x14) = uVar7;
    if (0 < *(int *)((int)puVar16 + -0x18)) {
      do {
        if ((**(char **)((int)puVar16 + -0x14) == '`') || (**(char **)((int)puVar16 + -0x14) == '_')
           ) {
          *puVar13 = 1;
          puVar13[2] = (short)iVar5;
          puVar2 = PTR___bfswu_8c07cfc0;
          (*(code *)PTR___modls_8c07cfbc)();
          puVar3 = PTR___divls_8c07cfc4;
          (*(code *)puVar2)();
          (*(code *)puVar3)();
          (*(code *)puVar2)();
          pcVar11 = *(char **)((int)puVar16 + -0x14);
          *(byte *)(puVar13 + 1) =
               (*(byte *)(puVar13 + 1) & (byte)DAT_8c07cfb4 | 0x10) & (byte)DAT_8c07cfb6 | 8;
          *(undefined1 *)(puVar13 + 4) = 0;
          *(byte *)((int)puVar13 + 9) = *(byte *)((int)puVar13 + 9) & 0xf;
          *(undefined4 *)(puVar13 + 0x14) = 0;
          *(undefined4 *)(puVar13 + 0x12) = 0;
          *(undefined4 *)(puVar13 + 0x10) = 0;
          uVar7 = (undefined4)uVar17;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(puVar13 + 6) = uVar7;
            *(undefined4 *)(puVar13 + 8) = uVar7;
          }
          else {
            *(undefined8 *)(puVar13 + 6) = in_xd14;
            *(undefined8 *)(puVar13 + 8) = in_xd14;
          }
          *(undefined4 *)(puVar13 + 0xe) = 0;
          *(undefined4 *)(puVar13 + 0xc) = 0;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(puVar13 + 10) = uVar7;
          }
          else {
            *(undefined8 *)(puVar13 + 10) = in_xd14;
          }
          if (*pcVar11 == '_') {
            iVar5 = (int)DAT_8c07cfb8;
            *(undefined2 **)(puVar13 + 0xc) = puVar13;
            uVar6 = param_1[8];
            *(undefined4 *)((int)puVar16 + -8) = *(undefined4 *)(iVar5 + (int)param_1);
            iVar5 = (*(code *)PTR___modls_8c07cfbc)();
            iVar12 = (*(code *)PTR___divls_8c07cfc4)();
            iVar14 = iVar5 + iVar12 * uVar6;
            if (*(char *)(iVar14 + *(int *)((int)puVar16 + -8) + -1) == '`') {
              (*(code *)PTR___bfxbu_8c07cfc8)();
              (*(code *)PTR_FUN_8c07cfcc)();
              uVar6 = param_1[8];
              *(undefined4 *)((int)puVar16 + -8) = *(undefined4 *)((int)DAT_8c07cfb8 + (int)param_1)
              ;
              iVar5 = (*(code *)PTR___modls_8c07cfbc)();
              iVar12 = (*(code *)PTR___divls_8c07cfc4)();
              iVar14 = iVar5 + iVar12 * uVar6;
            }
            if (*(char *)(iVar14 + *(int *)((int)puVar16 + -8) + 1) == '`') {
              (*(code *)PTR___bfxbu_8c07cfc8)();
              (*(code *)PTR_FUN_8c07cfcc)();
              uVar6 = param_1[8];
              *(undefined4 *)((int)puVar16 + -8) = *(undefined4 *)((int)DAT_8c07cfb8 + (int)param_1)
              ;
              iVar5 = (*(code *)PTR___modls_8c07cfbc)();
              iVar12 = (*(code *)PTR___divls_8c07cfc4)();
            }
            if (*(char *)(uVar6 * (iVar12 + -1) + iVar5 + *(int *)((int)puVar16 + -8)) == '`') {
              (*(code *)PTR___bfxbu_8c07cfc8)();
              (*(code *)PTR_FUN_8c07cfcc)();
              uVar6 = param_1[8];
              *(undefined4 *)((int)puVar16 + -8) = *(undefined4 *)((int)DAT_8c07cfb8 + (int)param_1)
              ;
              iVar5 = (*(code *)PTR___modls_8c07cfbc)();
              iVar12 = (*(code *)PTR___divls_8c07cfc4)();
            }
            if (*(char *)(uVar6 * (iVar12 + 1) + iVar5 + *(int *)((int)puVar16 + -8)) == '`') {
              (*(code *)PTR___bfxbu_8c07d120)();
              (*(code *)PTR_FUN_8c07d124)();
            }
          }
          (*(code *)PTR_FUN_8c07d128)(param_1,puVar13);
          iVar5 = *(int *)((int)puVar16 + -0x10) + 1;
          *(int *)((int)puVar16 + -0x10) = iVar5;
          puVar13 = puVar13 + 0x16;
        }
        iVar18 = iVar18 + 1;
        *(int *)((int)puVar16 + -0x14) = *(int *)((int)puVar16 + -0x14) + 1;
      } while (iVar18 < *(int *)((int)puVar16 + -0x18));
      puVar13 = *(undefined2 **)((int)DAT_8c07d112 + (int)param_1);
    }
    puVar2 = PTR___bfxbu_8c07d120;
    *(undefined2 **)((int)puVar16 + -0xc) = puVar13;
    iVar5 = 0;
    if (0 < *(int *)((int)DAT_8c07d114 + *(int *)((int)puVar16 + -0x1c))) {
      iVar18 = *(int *)((int)puVar16 + -0xc);
      do {
        iVar12 = (*(code *)puVar2)();
        if (iVar12 != 0) {
          uVar6 = (*(code *)puVar2)();
          puVar3 = PTR_FUN_8c07d2a8;
          if ((uVar6 & 1) != 0) {
            iVar12 = (*(code *)PTR_FUN_8c07d2a8)();
            uVar7 = (*(code *)puVar3)();
            iVar12 = (*(code *)PTR_FUN_8c07d2ac)
                               (*(undefined4 *)((int)puVar16 + -0x1c),iVar12 + -1,uVar7);
            *(int *)(iVar18 + 0x1c) = iVar12;
            *(int *)(iVar12 + 0x18) = iVar18;
          }
          uVar6 = (*(code *)puVar2)();
          puVar3 = PTR_FUN_8c07d2a8;
          if ((uVar6 & 2) != 0) {
            iVar12 = (*(code *)PTR_FUN_8c07d2a8)();
            uVar7 = (*(code *)puVar3)();
            uVar7 = (*(code *)PTR_FUN_8c07d2ac)
                              (*(undefined4 *)((int)puVar16 + -0x1c),iVar12 + 1,uVar7);
            *(undefined4 *)(iVar18 + 0x20) = uVar7;
            *(int *)(*(int *)(iVar18 + 0x20) + 0x18) = iVar18;
          }
          uVar6 = (*(code *)puVar2)();
          puVar3 = PTR_FUN_8c07d2a8;
          if ((uVar6 & 4) != 0) {
            uVar7 = (*(code *)PTR_FUN_8c07d2a8)();
            iVar12 = (*(code *)puVar3)();
            uVar7 = (*(code *)PTR_FUN_8c07d2ac)
                              (*(undefined4 *)((int)puVar16 + -0x1c),uVar7,iVar12 + -1);
            *(undefined4 *)(iVar18 + 0x24) = uVar7;
            *(int *)(*(int *)(iVar18 + 0x24) + 0x18) = iVar18;
          }
          uVar6 = (*(code *)puVar2)();
          puVar3 = PTR_FUN_8c07d2a8;
          if ((uVar6 & 8) != 0) {
            uVar7 = (*(code *)PTR_FUN_8c07d2a8)();
            iVar12 = (*(code *)puVar3)();
            uVar7 = (*(code *)PTR_FUN_8c07d2ac)
                              (*(undefined4 *)((int)puVar16 + -0x1c),uVar7,iVar12 + 1);
            *(undefined4 *)(iVar18 + 0x28) = uVar7;
            *(int *)(*(int *)(iVar18 + 0x28) + 0x18) = iVar18;
          }
        }
        iVar5 = iVar5 + 1;
        iVar18 = iVar18 + 0x2c;
      } while (iVar5 < *(int *)((int)DAT_8c07d114 + *(int *)((int)puVar16 + -0x1c)));
    }
  }
  iVar5 = *(int *)((int)puVar16 + -0x1c);
  if (*(undefined2 **)(DAT_8c07d116 + iVar5) != (undefined2 *)0x0) {
    iVar18 = 0;
    pcVar11 = *(char **)(DAT_8c07d118 + iVar5);
    sVar15 = 0;
    if (0 < *(int *)((int)puVar16 + -0x18)) {
      uVar17 = uVar17 & 0xffffffff;
      puVar13 = *(undefined2 **)(DAT_8c07d116 + iVar5);
      do {
        cVar1 = *pcVar11;
        bVar9 = false;
        if ((((cVar1 == 'c') || (cVar1 == 'd')) || (cVar1 == 'e')) || (cVar1 == 'f')) {
          *puVar13 = 1;
          puVar13[2] = sVar15;
          puVar2 = PTR___bfswu_8c07d2b4;
          (*(code *)PTR___modls_8c07d2b0)();
          (*(code *)puVar2)();
          (*(code *)PTR___divls_8c07d2b8)();
          (*(code *)puVar2)();
          *(byte *)(puVar13 + 1) =
               (*(byte *)(puVar13 + 1) & (byte)DAT_8c07d29e | 0x10) & (byte)DAT_8c07d2a0 | 8;
          *(char *)(puVar13 + 4) = *pcVar11;
          *(undefined1 *)(puVar13 + 5) = 0;
          *(undefined1 *)((int)puVar13 + 9) = 0;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar13 + 6) = (int)(uVar17 >> 0x20);
          }
          else {
            *(ulonglong *)(puVar13 + 6) = uVar17;
          }
          *(undefined1 *)((int)puVar13 + 0xb) = 0;
          bVar9 = true;
        }
        puVar8 = puVar13;
        if (bVar9) {
          puVar8 = puVar13 + 8;
          (*(code *)PTR_FUN_8c07d368)(iVar5,puVar13);
          sVar15 = sVar15 + 1;
        }
        iVar18 = iVar18 + 1;
        pcVar11 = pcVar11 + 1;
        puVar13 = puVar8;
      } while (iVar18 < *(int *)((int)puVar16 + -0x18));
    }
  }
  puVar13 = *(undefined2 **)(DAT_8c07d11a + iVar5);
  if (puVar13 != (undefined2 *)0x0) {
    iVar12 = *(int *)((int)puVar16 + -0x18);
    iVar18 = 0;
    *(undefined4 *)((int)puVar16 + -0x10) = 0;
    pcVar11 = *(char **)(DAT_8c07d118 + iVar5);
    iVar14 = 0;
    if (0 < iVar12) {
      uVar17 = uVar17 & 0xffffffff;
      do {
        puVar8 = puVar13;
        if (*pcVar11 == 'g') {
          *puVar13 = 1;
          puVar13[2] = (short)iVar18;
          puVar2 = PTR___bfswu_8c07d370;
          (*(code *)PTR___modls_8c07d36c)();
          (*(code *)puVar2)();
          (*(code *)PTR___divls_8c07d374)();
          (*(code *)puVar2)();
          puVar2 = PTR_FUN_8c07d378;
          *(byte *)(puVar13 + 1) =
               (*(byte *)(puVar13 + 1) & (byte)DAT_8c07d362 | 0x10) & (byte)DAT_8c07d364 | 8;
          *(undefined1 *)(puVar13 + 4) = 0;
          puVar13[5] = 3;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar13 + 6) = (int)(uVar17 >> 0x20);
          }
          else {
            *(ulonglong *)(puVar13 + 6) = uVar17;
          }
          puVar8 = puVar13 + 8;
          (*(code *)puVar2)(iVar5,puVar13);
          iVar18 = *(int *)((int)puVar16 + -0x10) + 1;
          *(int *)((int)puVar16 + -0x10) = iVar18;
        }
        iVar14 = iVar14 + 1;
        pcVar11 = pcVar11 + 1;
        puVar13 = puVar8;
      } while (iVar14 < iVar12);
    }
  }
  (**(code **)(*(int *)(DAT_8c07d11c + iVar5) + 0x44))
            (iVar5 + *(int *)(*(int *)(DAT_8c07d11c + iVar5) + 0x3c));
  cVar1 = *(char *)((int)DAT_8c07d29a + *(int *)(iVar5 + 4));
  if (cVar1 == '\0') {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar5 + 0x14) = (undefined4)DAT_8c07d37c;
    }
    else {
      *(ulonglong *)(iVar5 + 0x14) = CONCAT44(DAT_8c07d37c._4_4_,(undefined4)DAT_8c07d37c);
    }
  }
  else if (cVar1 == '\x01') {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar5 + 0x14) = DAT_8c07d37c._4_4_;
    }
    else {
      *(ulonglong *)(iVar5 + 0x14) = CONCAT44((undefined4)DAT_8c07d384,DAT_8c07d37c._4_4_);
    }
  }
  else if (cVar1 == '\x02') {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar5 + 0x14) = (undefined4)DAT_8c07d384;
    }
    else {
      *(ulonglong *)(iVar5 + 0x14) = CONCAT44(DAT_8c07d384._4_4_,(undefined4)DAT_8c07d384);
    }
  }
  else if (cVar1 == '\x03') {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar5 + 0x14) = DAT_8c07d384._4_4_;
    }
    else {
      *(ulonglong *)(iVar5 + 0x14) = CONCAT44(_FUN_8c07d38c,DAT_8c07d384._4_4_);
    }
  }
  else if (cVar1 == '\x04') {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar5 + 0x14) = DAT_8c07d2a4;
    }
    else {
      *(ulonglong *)(iVar5 + 0x14) = CONCAT44(PTR_FUN_8c07d2a8,DAT_8c07d2a4);
    }
  }
  return;
}

