// entry: 8c139858
// name: FUN_8c139858


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c139858(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 in_fr3;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 in_dr12;
  undefined4 in_fr15;
  undefined8 in_xd8;
  undefined8 in_xd12;
  undefined8 uVar20;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr12;
    puVar8 = auStack_14;
  }
  else {
    puVar8 = auStack_24;
    uStack_c = in_dr12;
  }
  *(undefined4 *)(puVar8 + -4) = in_PR;
  if (param_5 != 1) {
    if (param_5 == 2) {
      if (in_FPSCR_SZ == '\0') {
        uVar11 = CONCAT44(DAT_8c139e2c,param_1);
      }
      else {
        uVar11 = CONCAT44(PTR_FUN_8c139e30,DAT_8c139e2c);
      }
      (*(code *)PTR_FUN_8c139e30)(uVar11,param_4 + DAT_8c139e14,DAT_8c139e34,DAT_8c139e38,2);
      return;
    }
    if (param_5 != 3) {
      uRam8c139a84 = 0x9470b;
      uRam8c139c6c = 0xe00cff27;
      uRam8c139fac = 0x64c3e3ff;
      return;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(DAT_8c139e20._4_4_,in_fr15);
    }
    else {
      uVar16 = CONCAT44(PTR_FUN_8c139e28,DAT_8c139e20._4_4_);
    }
    *(int *)(puVar8 + -0x28) = param_4 + DAT_8c139e02;
    *(int *)(puVar8 + -0x58) = (int)DAT_8c139e00;
    *(undefined4 *)(puVar8 + -0x54) = 1;
    *(undefined **)(puVar8 + -0x24) = PTR_FUN_8c139e28;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44((int)(uVar16 >> 0x20),param_1);
    }
    (*(code *)PTR_FUN_8c139e28)(uVar17,0,(int)DAT_8c139e04,0);
    iVar4 = (int)DAT_8c139e00;
    *(int *)(puVar8 + -0x58) = (int)DAT_8c139e00;
    uVar18 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar18 = uVar17 & 0xffffffff;
    }
    uVar14 = (uint)uVar18;
    (**(code **)(puVar8 + -0x24))
              (uVar18,*(int *)(puVar8 + -0x28) + 0x5c,(int)DAT_8c139e08,(int)DAT_8c139e06,iVar4);
    *(undefined4 *)(puVar8 + -0x58) = 0;
    param_4 = param_4 + DAT_8c139e0a;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar14;
    }
    uVar14 = (uint)uVar17;
    (**(code **)(puVar8 + -0x24))(uVar17,param_4,(int)DAT_8c139e0c,0x1e,iVar4);
    *(undefined4 *)(puVar8 + -0x58) = 0;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar14;
    }
    uVar14 = (uint)uVar17;
    (**(code **)(puVar8 + -0x24))(uVar17,param_4 + 0x5c,(int)DAT_8c139e0e,0x16,iVar4);
    *(undefined4 *)(puVar8 + -0x58) = 0;
    *(int *)(puVar8 + -0x20) = param_4;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = (ulonglong)uVar14;
    }
    (**(code **)(puVar8 + -0x24))(uVar16,param_4 + DAT_8c139e10,(int)DAT_8c139e12,0x1c,iVar4);
    return;
  }
  iVar4 = *(int *)(param_4 + 0x34);
  uVar6 = **(undefined4 **)(param_4 + 0x30);
  (*(code *)PTR__memset_8c139a40)(puVar8 + -0x50,0,0x28);
  puVar2 = PTR_FUN_8c139a54;
  uVar15 = DAT_8c139a44._4_4_;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((undefined4)DAT_8c139a44,in_fr3);
  }
  else {
    uVar11 = CONCAT44(DAT_8c139a44._4_4_,(undefined4)DAT_8c139a44);
  }
  iVar3 = (int)DAT_8c139a32;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(DAT_8c139a4c,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar8 + -0x50) = uVar11;
    uVar11 = CONCAT44(DAT_8c139a50,DAT_8c139a4c);
  }
  *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
  uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar8 + -0x4c) = uVar5;
    *(undefined4 *)(puVar8 + -0x48) = DAT_8c139a50;
    uVar12 = CONCAT44(DAT_8c139a58,(int)uVar11);
    uVar11 = in_xd14;
    in_fr15 = uVar5;
  }
  else {
    *(undefined8 *)(puVar8 + -0x4c) = uVar11;
    *(ulonglong *)(puVar8 + -0x48) = CONCAT44(PTR_FUN_8c139a54,DAT_8c139a50);
    uVar12 = CONCAT44(_DAT_8c139a5c,DAT_8c139a58);
  }
  *(undefined4 *)(puVar8 + -0x34) = DAT_8c139a44._4_4_;
  uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar8 + -0x44) = uVar5;
  }
  else {
    *(undefined8 *)(puVar8 + -0x44) = uVar12;
  }
  *(undefined4 *)(puVar8 + -0x30) = 0;
  *(undefined2 *)(puVar8 + -0x40) = DAT_8c139a34;
  *(undefined4 *)(puVar8 + -0x2c) = uVar6;
  *(undefined2 *)(puVar8 + -0x3e) = DAT_8c139a36;
  *(undefined2 *)(puVar8 + -0x3c) = 0x58;
  *(undefined2 *)(puVar8 + -0x3a) = 0x1c;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(_DAT_8c139a5c,(int)in_dr12);
  }
  else {
    uVar16 = CONCAT44(_DAT_8c139a60,_DAT_8c139a5c);
  }
  uVar17 = uVar16;
  uVar19 = uVar12;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44((int)(uVar16 >> 0x20),param_1);
    uVar19 = CONCAT44(uVar5,in_fr15);
  }
  (*(code *)PTR_FUN_8c139a54)(uVar17,param_4 + iVar3,puVar8 + -0x50,0);
  uVar6 = _DAT_8c139a60;
  uVar14 = (uint)uVar17;
  uVar9 = (undefined4)uVar12;
  uVar5 = **(undefined4 **)(param_4 + 0x30);
  (*(code *)PTR__memset_8c139a40)(puVar8 + -0x50,0,0x28);
  *(undefined4 *)(puVar8 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44((undefined4)DAT_8c139a64,uVar9);
  }
  else {
    uVar12 = CONCAT44(DAT_8c139a64._4_4_,(undefined4)DAT_8c139a64);
  }
  *(undefined4 *)(puVar8 + -0x2c) = uVar5;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar12 >> 0x20);
    *(int *)(puVar8 + -0x4c) = (int)uVar19;
    uVar12 = CONCAT44(DAT_8c139a64._4_4_,(int)uVar12);
  }
  else {
    *(undefined8 *)(puVar8 + -0x50) = uVar12;
    *(undefined8 *)(puVar8 + -0x4c) = uVar11;
    uVar12 = CONCAT44(_DAT_8c139a6c,DAT_8c139a64._4_4_);
  }
  *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x48) = (int)((ulonglong)uVar12 >> 0x20);
    *(int *)(puVar8 + -0x44) = (int)((ulonglong)uVar19 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar8 + -0x48) = uVar12;
    *(undefined8 *)(puVar8 + -0x44) = uVar19;
  }
  *(undefined4 *)(puVar8 + -0x30) = 0;
  *(undefined2 *)(puVar8 + -0x40) = DAT_8c139a38;
  *(undefined2 *)(puVar8 + -0x3e) = 0x56;
  *(undefined2 *)(puVar8 + -0x3c) = 0x74;
  *(undefined2 *)(puVar8 + -0x3a) = 0x1c;
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar14;
  }
  uVar14 = (uint)uVar17;
  (*(code *)puVar2)(uVar17,param_4 + iVar3 + (int)DAT_8c139a3a,puVar8 + -0x50,0);
  uVar9 = _DAT_8c139a6c;
  uVar5 = (undefined4)uVar19;
  uVar10 = (undefined4)uVar12;
  uVar7 = **(undefined4 **)(param_4 + 0x30);
  (*(code *)PTR__memset_8c139a40)(puVar8 + -0x50,0,0x28);
  *(undefined4 *)(puVar8 + -0x38) = uVar6;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44((undefined4)DAT_8c139a70,uVar10);
  }
  else {
    uVar12 = CONCAT44(DAT_8c139a70._4_4_,(undefined4)DAT_8c139a70);
  }
  *(undefined4 *)(puVar8 + -0x34) = uVar9;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar12 >> 0x20);
    uVar12 = CONCAT44(DAT_8c139a70._4_4_,(int)uVar12);
  }
  else {
    *(undefined8 *)(puVar8 + -0x50) = uVar12;
    uVar12 = CONCAT44(DAT_8c139a78,DAT_8c139a70._4_4_);
  }
  *(undefined4 *)(puVar8 + -0x30) = 0;
  uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar8 + -0x4c) = uVar10;
    uVar19 = CONCAT44(DAT_8c139a78,(int)uVar12);
    uVar12 = uVar11;
    uVar5 = uVar10;
  }
  else {
    *(undefined8 *)(puVar8 + -0x4c) = uVar12;
    uVar19 = CONCAT44(DAT_8c139a7c,DAT_8c139a78);
  }
  *(undefined4 *)(puVar8 + -0x2c) = uVar7;
  uVar7 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar8 + -0x48) = uVar7;
    uVar11 = CONCAT44(DAT_8c139a7c,(int)uVar19);
    *(uint *)(puVar8 + -0x44) = DAT_8c139a7c;
    uVar1 = DAT_8c139a7c;
    uVar19 = CONCAT44(uVar7,uVar5);
  }
  else {
    *(undefined8 *)(puVar8 + -0x48) = uVar19;
    uVar11 = CONCAT44(_DAT_8c139a80,DAT_8c139a7c);
    *(undefined8 *)(puVar8 + -0x44) = uVar11;
    uVar1 = _DAT_8c139a80;
  }
  *(undefined2 *)(puVar8 + -0x40) = 0;
  *(undefined2 *)(puVar8 + -0x3e) = 0x40;
  *(undefined2 *)(puVar8 + -0x3c) = 0x50;
  *(undefined2 *)(puVar8 + -0x3a) = 0x1e;
  uVar20 = uVar11;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)uVar1;
    uVar20 = in_xd12;
  }
  if (iVar4 == 1) {
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar14;
    }
    uVar14 = (uint)uVar17;
    (*(code *)puVar2)(uVar17,param_4 + DAT_8c139a3c,puVar8 + -0x50,0);
    uVar5 = (undefined4)uVar11;
    *(undefined4 *)(puVar8 + -0x1c) = **(undefined4 **)(param_4 + 0x30);
    (*(code *)PTR__memset_8c139a40)(puVar8 + -0x50,0,0x28);
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44(_DAT_8c139a80,uVar5);
    }
    else {
      uVar11 = CONCAT44(uRam8c139a84,_DAT_8c139a80);
    }
    *(undefined4 *)(puVar8 + -0x2c) = *(undefined4 *)(puVar8 + -0x1c);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
      *(int *)(puVar8 + -0x4c) = (int)uVar19;
      *(int *)(puVar8 + -0x48) = (int)((ulonglong)uVar19 >> 0x20);
      *(int *)(puVar8 + -0x44) = (int)uVar16;
    }
    else {
      *(undefined8 *)(puVar8 + -0x50) = uVar11;
      *(undefined8 *)(puVar8 + -0x4c) = uVar12;
      *(undefined8 *)(puVar8 + -0x48) = uVar19;
      *(undefined8 *)(puVar8 + -0x44) = uVar20;
    }
    *(undefined2 *)(puVar8 + -0x40) = 0x50;
    *(undefined2 *)(puVar8 + -0x3c) = 0x50;
    *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
    *(undefined2 *)(puVar8 + -0x3a) = 0x1e;
    *(undefined4 *)(puVar8 + -0x34) = uVar9;
    *(undefined4 *)(puVar8 + -0x30) = 0;
    *(undefined2 *)(puVar8 + -0x3e) = 0x5e;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar14;
    }
    uVar14 = (uint)uVar17;
    (*(code *)puVar2)(uVar17,param_4 + DAT_8c139a3e,puVar8 + -0x50,0);
    uVar9 = (undefined4)uVar19;
    uVar5 = (undefined4)uVar11;
    *(undefined4 *)(puVar8 + -0x18) = **(undefined4 **)(param_4 + 0x30);
    (*(code *)PTR__memset_8c139a40)(puVar8 + -0x50,0,0x28);
    *(undefined4 *)(puVar8 + -0x38) = uVar6;
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44((undefined4)DAT_8c139c2c,uVar5);
    }
    else {
      uVar11 = CONCAT44(DAT_8c139c2c._4_4_,(undefined4)DAT_8c139c2c);
    }
    *(undefined4 *)(puVar8 + -0x34) = uVar15;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
      uVar11 = CONCAT44(DAT_8c139c2c._4_4_,(int)uVar11);
    }
    else {
      *(undefined8 *)(puVar8 + -0x50) = uVar11;
      uVar11 = CONCAT44(DAT_8c139c34,DAT_8c139c2c._4_4_);
    }
    *(undefined4 *)(puVar8 + -0x30) = 0;
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar8 + -0x14) = uVar6;
      *(undefined4 *)(puVar8 + -0x4c) = uVar6;
      *(undefined4 *)(puVar8 + -0x10) = DAT_8c139c34;
      *(undefined4 *)(puVar8 + -0x48) = DAT_8c139c34;
      uVar11 = CONCAT44(DAT_8c139c38,(int)uVar11);
      *(undefined4 *)(puVar8 + -0xc) = DAT_8c139c38;
      *(undefined4 *)(puVar8 + -0x44) = DAT_8c139c38;
    }
    else {
      *(undefined8 *)(puVar8 + -0x14) = uVar11;
      *(undefined8 *)(puVar8 + -0x4c) = uVar11;
      *(ulonglong *)(puVar8 + -0x10) = CONCAT44(DAT_8c139c38,DAT_8c139c34);
      *(ulonglong *)(puVar8 + -0x48) = CONCAT44(DAT_8c139c38,DAT_8c139c34);
      uVar11 = CONCAT44(PTR__memset_8c139c3c,DAT_8c139c38);
      *(undefined8 *)(puVar8 + -0xc) = uVar11;
      *(undefined8 *)(puVar8 + -0x44) = uVar11;
    }
    uVar6 = (undefined4)uVar11;
    *(undefined2 *)(puVar8 + -0x40) = DAT_8c139c1e;
    *(undefined2 *)(puVar8 + -0x3e) = 0;
    *(undefined2 *)(puVar8 + -0x3c) = 0x10;
    *(undefined2 *)(puVar8 + -0x3a) = 0x16;
    *(undefined4 *)(puVar8 + -0x2c) = *(undefined4 *)(puVar8 + -0x18);
  }
  else {
    *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
    *(undefined2 *)(puVar8 + -0x3e) = 0x5e;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar14;
    }
    uVar14 = (uint)uVar17;
    (*(code *)puVar2)(uVar17,param_4 + DAT_8c13a010,puVar8 + -0x50,0);
    uVar5 = (undefined4)uVar11;
    *(undefined4 *)(puVar8 + -0x1c) = **(undefined4 **)(param_4 + 0x30);
    (*(code *)PTR__memset_8c13a014)(puVar8 + -0x50,0,0x28);
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44((undefined4)DAT_8c13a018,uVar5);
    }
    else {
      uVar11 = CONCAT44(DAT_8c13a018._4_4_,(undefined4)DAT_8c13a018);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
      *(int *)(puVar8 + -0x4c) = (int)uVar19;
      *(int *)(puVar8 + -0x48) = (int)((ulonglong)uVar19 >> 0x20);
      *(int *)(puVar8 + -0x44) = (int)uVar16;
    }
    else {
      *(undefined8 *)(puVar8 + -0x50) = uVar11;
      *(undefined8 *)(puVar8 + -0x4c) = uVar12;
      *(undefined8 *)(puVar8 + -0x48) = uVar19;
      *(undefined8 *)(puVar8 + -0x44) = uVar20;
    }
    *(undefined2 *)(puVar8 + -0x40) = 0x50;
    *(undefined2 *)(puVar8 + -0x3e) = 0x40;
    *(undefined2 *)(puVar8 + -0x3c) = 0x50;
    *(undefined2 *)(puVar8 + -0x3a) = 0x1e;
    *(undefined4 *)(puVar8 + -0x38) = uVar6;
    *(undefined4 *)(puVar8 + -0x34) = uVar9;
    *(undefined4 *)(puVar8 + -0x30) = 0;
    *(undefined4 *)(puVar8 + -0x2c) = *(undefined4 *)(puVar8 + -0x1c);
    if (iVar4 == 0) {
      uVar17 = uVar16;
      if (in_FPSCR_SZ == '\0') {
        uVar17 = (ulonglong)uVar14;
      }
      uVar14 = (uint)uVar17;
      (*(code *)puVar2)(uVar17,param_4 + DAT_8c139f8a,puVar8 + -0x50,0);
      uVar9 = (undefined4)uVar19;
      uVar5 = (undefined4)uVar11;
      *(undefined4 *)(puVar8 + -0x18) = **(undefined4 **)(param_4 + 0x30);
      (*(code *)PTR__memset_8c139f94)(puVar8 + -0x50,0,0x28);
      *(undefined4 *)(puVar8 + -0x34) = uVar15;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar8 + -0x50) = (undefined4)DAT_8c139f98;
        uVar11 = CONCAT44(DAT_8c139f98._4_4_,uVar5);
      }
      else {
        *(ulonglong *)(puVar8 + -0x50) = CONCAT44(DAT_8c139f98._4_4_,(undefined4)DAT_8c139f98);
        uVar11 = CONCAT44(DAT_8c139fa0,DAT_8c139f98._4_4_);
      }
      *(undefined4 *)(puVar8 + -0x30) = 0;
      uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar8 + -0x14) = uVar5;
        *(undefined4 *)(puVar8 + -0x4c) = uVar5;
        *(undefined4 *)(puVar8 + -0x10) = DAT_8c139fa0;
        *(undefined4 *)(puVar8 + -0x48) = DAT_8c139fa0;
        uVar11 = CONCAT44(DAT_8c139fa4,(int)uVar11);
        *(undefined4 *)(puVar8 + -0xc) = DAT_8c139fa4;
        *(undefined4 *)(puVar8 + -0x44) = DAT_8c139fa4;
        uVar17 = (ulonglong)uVar14;
      }
      else {
        *(undefined8 *)(puVar8 + -0x14) = uVar11;
        *(undefined8 *)(puVar8 + -0x4c) = uVar11;
        *(ulonglong *)(puVar8 + -0x10) = CONCAT44(DAT_8c139fa4,DAT_8c139fa0);
        *(ulonglong *)(puVar8 + -0x48) = CONCAT44(DAT_8c139fa4,DAT_8c139fa0);
        uVar11 = CONCAT44(_DAT_8c139fa8,DAT_8c139fa4);
        *(undefined8 *)(puVar8 + -0xc) = uVar11;
        *(undefined8 *)(puVar8 + -0x44) = uVar11;
        uVar17 = uVar16;
      }
      uVar14 = (uint)uVar17;
      uVar5 = (undefined4)uVar11;
      *(undefined2 *)(puVar8 + -0x3e) = 0;
      *(undefined2 *)(puVar8 + -0x3c) = 0x10;
      *(undefined2 *)(puVar8 + -0x3a) = 0x16;
      *(undefined4 *)(puVar8 + -0x2c) = *(undefined4 *)(puVar8 + -0x18);
      *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
      *(undefined2 *)(puVar8 + -0x40) = DAT_8c139f8c;
      (*(code *)puVar2)(uVar17,param_4 + DAT_8c139f8e,puVar8 + -0x50,0);
      *(undefined4 *)(puVar8 + -8) = **(undefined4 **)(param_4 + 0x30);
      (*(code *)PTR__memset_8c139f94)(puVar8 + -0x50,0,0x28);
      *(undefined4 *)(puVar8 + -0x38) = uVar6;
      if (in_FPSCR_SZ == '\0') {
        uVar11 = CONCAT44(_DAT_8c139fa8,uVar5);
      }
      else {
        uVar11 = CONCAT44(uRam8c139fac,_DAT_8c139fa8);
      }
      *(undefined4 *)(puVar8 + -0x34) = uVar15;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
        param_3 = *(undefined4 *)(puVar8 + -0x14);
      }
      else {
        *(undefined8 *)(puVar8 + -0x50) = uVar11;
        in_xd8 = *(undefined8 *)(puVar8 + -0x14);
      }
      *(undefined4 *)(puVar8 + -0x30) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar8 + -0x4c) = param_3;
        *(undefined4 *)(puVar8 + -0x48) = *(undefined4 *)(puVar8 + -0x10);
        *(undefined4 *)(puVar8 + -0x44) = *(undefined4 *)(puVar8 + -0xc);
      }
      else {
        *(undefined8 *)(puVar8 + -0x4c) = in_xd8;
        *(undefined8 *)(puVar8 + -0x48) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -0x44) = *(undefined8 *)(puVar8 + -0xc);
      }
      *(undefined2 *)(puVar8 + -0x40) = DAT_8c139f90;
      *(undefined2 *)(puVar8 + -0x3e) = 0;
      *(undefined2 *)(puVar8 + -0x3c) = 0x10;
      *(undefined2 *)(puVar8 + -0x3a) = 0x16;
      *(undefined4 *)(puVar8 + -0x2c) = *(undefined4 *)(puVar8 + -8);
      goto LAB_8c139b2e;
    }
    *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
    *(undefined2 *)(puVar8 + -0x3e) = 0x5e;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar14;
    }
    uVar14 = (uint)uVar17;
    (*(code *)puVar2)(uVar17,param_4 + DAT_8c139f8a,puVar8 + -0x50,0);
    uVar9 = (undefined4)uVar19;
    uVar6 = (undefined4)uVar11;
    *(undefined4 *)(puVar8 + -0x18) = **(undefined4 **)(param_4 + 0x30);
    (*(code *)PTR__memset_8c139f94)(puVar8 + -0x50,0,0x28);
    *(undefined4 *)(puVar8 + -0x34) = uVar15;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar8 + -0x50) = (undefined4)DAT_8c139f98;
      uVar11 = CONCAT44(DAT_8c139f98._4_4_,uVar6);
    }
    else {
      *(ulonglong *)(puVar8 + -0x50) = CONCAT44(DAT_8c139f98._4_4_,(undefined4)DAT_8c139f98);
      uVar11 = CONCAT44(DAT_8c139fa0,DAT_8c139f98._4_4_);
    }
    *(undefined4 *)(puVar8 + -0x30) = 0;
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar8 + -0x14) = uVar6;
      *(undefined4 *)(puVar8 + -0x4c) = uVar6;
      *(undefined4 *)(puVar8 + -0x10) = DAT_8c139fa0;
      *(undefined4 *)(puVar8 + -0x48) = DAT_8c139fa0;
      uVar11 = CONCAT44(DAT_8c139fa4,(int)uVar11);
      *(undefined4 *)(puVar8 + -0xc) = DAT_8c139fa4;
      *(undefined4 *)(puVar8 + -0x44) = DAT_8c139fa4;
    }
    else {
      *(undefined8 *)(puVar8 + -0x14) = uVar11;
      *(undefined8 *)(puVar8 + -0x4c) = uVar11;
      *(ulonglong *)(puVar8 + -0x10) = CONCAT44(DAT_8c139fa4,DAT_8c139fa0);
      *(ulonglong *)(puVar8 + -0x48) = CONCAT44(DAT_8c139fa4,DAT_8c139fa0);
      uVar11 = CONCAT44(_DAT_8c139fa8,DAT_8c139fa4);
      *(undefined8 *)(puVar8 + -0xc) = uVar11;
      *(undefined8 *)(puVar8 + -0x44) = uVar11;
    }
    uVar6 = (undefined4)uVar11;
    *(undefined2 *)(puVar8 + -0x3e) = 0;
    *(undefined2 *)(puVar8 + -0x3c) = 0x10;
    *(undefined2 *)(puVar8 + -0x3a) = 0x16;
    *(undefined4 *)(puVar8 + -0x2c) = *(undefined4 *)(puVar8 + -0x18);
    *(undefined2 *)(puVar8 + -0x40) = DAT_8c139f8c;
    *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
  }
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar14;
  }
  uVar14 = (uint)uVar17;
  (*(code *)puVar2)(uVar17,param_4 + DAT_8c139c20,puVar8 + -0x50,0);
  uVar5 = **(undefined4 **)(param_4 + 0x30);
  (*(code *)PTR__memset_8c139c3c)(puVar8 + -0x50,0,0x28);
  *(undefined4 *)(puVar8 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((undefined4)DAT_8c139c40,uVar6);
  }
  else {
    uVar11 = CONCAT44(DAT_8c139c40._4_4_,(undefined4)DAT_8c139c40);
  }
  *(undefined4 *)(puVar8 + -0x2c) = uVar5;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
    uVar19 = CONCAT44(*(undefined4 *)(puVar8 + -0x14),param_2);
  }
  else {
    *(undefined8 *)(puVar8 + -0x50) = uVar11;
    uVar19 = *(undefined8 *)(puVar8 + -0x14);
  }
  *(undefined4 *)(puVar8 + -0x30) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x4c) = (int)((ulonglong)uVar19 >> 0x20);
    param_3 = *(undefined4 *)(puVar8 + -0x10);
  }
  else {
    *(undefined8 *)(puVar8 + -0x4c) = uVar19;
    in_xd8 = *(undefined8 *)(puVar8 + -0x10);
  }
  *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar8 + -0x48) = param_3;
    *(undefined4 *)(puVar8 + -0x44) = *(undefined4 *)(puVar8 + -0xc);
  }
  else {
    *(undefined8 *)(puVar8 + -0x48) = in_xd8;
    *(undefined8 *)(puVar8 + -0x44) = *(undefined8 *)(puVar8 + -0xc);
  }
  *(undefined2 *)(puVar8 + -0x3e) = 0;
  *(undefined2 *)(puVar8 + -0x3c) = 0x10;
  *(undefined2 *)(puVar8 + -0x3a) = 0x16;
  *(undefined2 *)(puVar8 + -0x40) = DAT_8c139c22;
LAB_8c139b2e:
  uVar5 = (undefined4)uVar16;
  uVar6 = (undefined4)uVar11;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)uVar14;
  }
  uVar10 = (undefined4)uVar16;
  iVar4 = (int)DAT_8c139c26;
  (*(code *)puVar2)(uVar16,param_4 + DAT_8c139c24,puVar8 + -0x50,0);
  uVar7 = *(undefined4 *)(*(int *)(param_4 + 0x30) + 8);
  (*(code *)PTR__memset_8c139c3c)(puVar8 + -0x50,0,0x28);
  *(undefined4 *)(puVar8 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c139c40._4_4_,uVar6);
  }
  else {
    uVar11 = CONCAT44(DAT_8c139c48,DAT_8c139c40._4_4_);
  }
  *(undefined4 *)(puVar8 + -0x2c) = uVar7;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(DAT_8c139c48,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar8 + -0x50) = uVar11;
    uVar11 = CONCAT44(DAT_8c139c4c,DAT_8c139c48);
  }
  *(undefined4 *)(puVar8 + -0x30) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x4c) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(DAT_8c139c4c,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar8 + -0x4c) = uVar11;
    uVar11 = CONCAT44(DAT_8c139c50,DAT_8c139c4c);
  }
  *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x48) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(DAT_8c139c50,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar8 + -0x48) = uVar11;
    uVar11 = CONCAT44(_DAT_8c139c54,DAT_8c139c50);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x44) = (int)((ulonglong)uVar11 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar8 + -0x44) = uVar11;
  }
  *(undefined2 *)(puVar8 + -0x40) = DAT_8c139c2a;
  *(undefined2 *)(puVar8 + -0x3e) = 0;
  *(undefined2 *)(puVar8 + -0x3c) = 0x2e;
  *(undefined2 *)(puVar8 + -0x3a) = 0x24;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(_DAT_8c139c54,uVar10);
    uVar16 = CONCAT44(_DAT_8c139c54,uVar9);
  }
  else {
    uVar17 = CONCAT44(_DAT_8c139c58,_DAT_8c139c54);
    uVar16 = uVar17;
  }
  (*(code *)puVar2)(uVar17,param_4 + DAT_8c139c28,puVar8 + -0x50,0);
  uVar14 = (uint)uVar17;
  uVar9 = (undefined4)uVar11;
  uVar6 = *(undefined4 *)(*(int *)(param_4 + 0x30) + 8);
  (*(code *)PTR__memset_8c139c3c)(puVar8 + -0x50,0,0x28);
  *(undefined4 *)(puVar8 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(_DAT_8c139c58,uVar9);
  }
  else {
    uVar11 = CONCAT44(_DAT_8c139c5c,_DAT_8c139c58);
  }
  *(undefined4 *)(puVar8 + -0x2c) = uVar6;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(_DAT_8c139c5c,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar8 + -0x50) = uVar11;
    uVar11 = CONCAT44(DAT_8c139c60,_DAT_8c139c5c);
  }
  *(undefined4 *)(puVar8 + -0x30) = 0;
  uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar8 + -0x4c) = uVar6;
    uVar19 = CONCAT44(DAT_8c139c60,(int)uVar11);
    uVar11 = CONCAT44(uVar6,uVar5);
  }
  else {
    *(undefined8 *)(puVar8 + -0x4c) = uVar11;
    uVar19 = CONCAT44(DAT_8c139c64,DAT_8c139c60);
  }
  *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
  iVar3 = param_4 + 0x38;
  uVar6 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar8 + -0x48) = uVar6;
    uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),uVar6);
    uVar13 = CONCAT44(DAT_8c139c64,(int)uVar19);
    *(uint *)(puVar8 + -0x44) = DAT_8c139c64;
    uVar1 = DAT_8c139c64;
    uVar19 = uVar20;
  }
  else {
    *(undefined8 *)(puVar8 + -0x48) = uVar19;
    uVar13 = CONCAT44(_DAT_8c139c68,DAT_8c139c64);
    *(undefined8 *)(puVar8 + -0x44) = uVar13;
    uVar1 = _DAT_8c139c68;
  }
  *(undefined2 *)(puVar8 + -0x40) = 0;
  *(undefined2 *)(puVar8 + -0x3e) = 0;
  *(undefined2 *)(puVar8 + -0x3c) = 0x40;
  *(undefined2 *)(puVar8 + -0x3a) = 0x78;
  uVar17 = uVar16;
  uVar20 = uVar13;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)uVar14;
    uVar17 = (ulonglong)uVar1;
    uVar20 = uVar12;
  }
  uVar14 = (uint)uVar16;
  (*(code *)puVar2)(uVar16,iVar3,puVar8 + -0x50,0);
  uVar5 = (undefined4)uVar13;
  uVar6 = *(undefined4 *)(*(int *)(param_4 + 0x30) + 8);
  (*(code *)PTR__memset_8c139c3c)(puVar8 + -0x50,0,0x28);
  *(undefined4 *)(puVar8 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44(_DAT_8c139c68,uVar5);
  }
  else {
    uVar12 = CONCAT44(uRam8c139c6c,_DAT_8c139c68);
  }
  *(undefined4 *)(puVar8 + -0x2c) = uVar6;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar12 >> 0x20);
    *(int *)(puVar8 + -0x4c) = (int)((ulonglong)uVar11 >> 0x20);
    uVar12 = CONCAT44(DAT_8c139e18,(int)uVar12);
    *(undefined4 *)(puVar8 + -0x48) = DAT_8c139e18;
    *(int *)(puVar8 + -0x44) = (int)uVar17;
  }
  else {
    *(undefined8 *)(puVar8 + -0x50) = uVar12;
    *(undefined8 *)(puVar8 + -0x4c) = uVar11;
    uVar12 = CONCAT44(PTR__memset_8c139e1c,DAT_8c139e18);
    *(undefined8 *)(puVar8 + -0x48) = uVar12;
    *(undefined8 *)(puVar8 + -0x44) = uVar20;
  }
  uVar6 = (undefined4)uVar12;
  *(undefined2 *)(puVar8 + -0x40) = 0x40;
  *(undefined2 *)(puVar8 + -0x3e) = 0;
  *(undefined2 *)(puVar8 + -0x3c) = 0x40;
  *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
  *(undefined4 *)(puVar8 + -0x30) = 0;
  *(undefined2 *)(puVar8 + -0x3a) = 0x78;
  uVar16 = uVar17;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)uVar14;
  }
  uVar14 = (uint)uVar16;
  (*(code *)puVar2)(uVar16,iVar3 + DAT_8c139dfe,puVar8 + -0x50,0);
  uVar5 = *(undefined4 *)(*(int *)(param_4 + 0x30) + 8);
  (*(code *)PTR__memset_8c139e1c)(puVar8 + -0x50,0,0x28);
  uVar9 = (undefined4)uVar17;
  *(undefined4 *)(puVar8 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44((undefined4)DAT_8c139e20,uVar6);
  }
  else {
    uVar12 = CONCAT44(DAT_8c139e20._4_4_,(undefined4)DAT_8c139e20);
  }
  *(undefined4 *)(puVar8 + -0x2c) = uVar5;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x50) = (int)((ulonglong)uVar12 >> 0x20);
    *(int *)(puVar8 + -0x4c) = (int)((ulonglong)uVar11 >> 0x20);
    *(int *)(puVar8 + -0x48) = (int)uVar11;
    *(undefined4 *)(puVar8 + -0x44) = uVar9;
  }
  else {
    *(undefined8 *)(puVar8 + -0x50) = uVar12;
    *(undefined8 *)(puVar8 + -0x4c) = uVar11;
    *(undefined8 *)(puVar8 + -0x48) = uVar19;
    *(undefined8 *)(puVar8 + -0x44) = uVar20;
  }
  *(undefined2 *)(puVar8 + -0x40) = 0x68;
  *(undefined2 *)(puVar8 + -0x3e) = 0;
  *(undefined4 *)(puVar8 + -0x38) = 0xffffffff;
  *(undefined2 *)(puVar8 + -0x3c) = 0x40;
  *(undefined2 *)(puVar8 + -0x3a) = 0x78;
  *(undefined4 *)(puVar8 + -0x30) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar14;
  }
  uVar15 = (undefined4)uVar17;
  (*(code *)puVar2)(uVar17,iVar3 + DAT_8c139e00,puVar8 + -0x50,0);
  puVar2 = PTR_FUN_8c139e28;
  iVar3 = (int)DAT_8c139e02;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(DAT_8c139e20._4_4_,uVar9);
  }
  else {
    uVar16 = CONCAT44(PTR_FUN_8c139e28,DAT_8c139e20._4_4_);
  }
  *(int *)(puVar8 + -0x58) = (int)DAT_8c139e04;
  *(undefined4 *)(puVar8 + -0x54) = 1;
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44((int)(uVar16 >> 0x20),uVar15);
  }
  (*(code *)PTR_FUN_8c139e28)(uVar17,param_4 + iVar3,0,iVar4,0);
  *(int *)(puVar8 + -0x58) = (int)DAT_8c139e06;
  uVar18 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = uVar17 & 0xffffffff;
  }
  uVar14 = (uint)uVar18;
  (*(code *)puVar2)(uVar18,param_4 + iVar3 + 0x5c,iVar4,iVar4,(int)DAT_8c139e08);
  param_4 = param_4 + DAT_8c139e0a;
  *(undefined4 *)(puVar8 + -0x58) = 0x1c;
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar14;
  }
  uVar14 = (uint)uVar17;
  (*(code *)puVar2)(uVar17,param_4,iVar4,0,(int)DAT_8c139e0c);
  *(undefined4 *)(puVar8 + -0x58) = 0x16;
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar14;
  }
  uVar14 = (uint)uVar17;
  (*(code *)puVar2)(uVar17,param_4 + 0x5c,iVar4,0,(int)DAT_8c139e0e);
  *(undefined4 *)(puVar8 + -0x58) = 0x1e;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)uVar14;
  }
  (*(code *)puVar2)(uVar16,param_4 + DAT_8c139e10,iVar4,0,(int)DAT_8c139e12);
                    /* WARNING: Read-only address (ram,0x8c139a84) is written */
                    /* WARNING: Read-only address (ram,0x8c139c6c) is written */
                    /* WARNING: Read-only address (ram,0x8c139fac) is written */
  return;
}

