// entry: 8c137374
// name: FUN_8c137374


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c137374(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 in_fr3;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 in_dr12;
  undefined4 in_fr15;
  undefined8 in_xd8;
  undefined8 in_xd12;
  undefined8 in_xd14;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr12;
    puVar9 = auStack_14;
  }
  else {
    puVar9 = auStack_24;
    uStack_c = in_dr12;
  }
  *(undefined4 *)(puVar9 + -4) = in_PR;
  if (param_5 != 1) {
    if (param_5 == 2) {
      if (in_FPSCR_SZ == '\0') {
        uVar11 = CONCAT44(DAT_8c13794c,param_1);
      }
      else {
        uVar11 = CONCAT44(PTR_FUN_8c137950,DAT_8c13794c);
      }
      (*(code *)PTR_FUN_8c137950)(uVar11,param_4 + DAT_8c137934,DAT_8c137954,DAT_8c137958,2);
      return;
    }
    if (param_5 != 3) {
      uRam8c1375a4 = 0x9470b;
      uRam8c13778c = 0xe00cff27;
      uRam8c137acc = 0x64c3e3ff;
      return;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(DAT_8c137940._4_4_,in_fr15);
    }
    else {
      uVar16 = CONCAT44(PTR_FUN_8c137948,DAT_8c137940._4_4_);
    }
    *(int *)(puVar9 + -0x28) = param_4 + DAT_8c137922;
    *(int *)(puVar9 + -0x58) = (int)DAT_8c137920;
    *(undefined4 *)(puVar9 + -0x54) = 1;
    *(undefined **)(puVar9 + -0x24) = PTR_FUN_8c137948;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44((int)(uVar16 >> 0x20),param_1);
    }
    (*(code *)PTR_FUN_8c137948)(uVar17,0,(int)DAT_8c137924,0);
    iVar5 = (int)DAT_8c137920;
    *(int *)(puVar9 + -0x58) = (int)DAT_8c137920;
    uVar18 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar18 = uVar17 & 0xffffffff;
    }
    uVar13 = (uint)uVar18;
    (**(code **)(puVar9 + -0x24))
              (uVar18,*(int *)(puVar9 + -0x28) + 0x5c,(int)DAT_8c137928,(int)DAT_8c137926,iVar5);
    *(undefined4 *)(puVar9 + -0x58) = 0;
    param_4 = param_4 + DAT_8c13792a;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar13;
    }
    uVar13 = (uint)uVar17;
    (**(code **)(puVar9 + -0x24))(uVar17,param_4,(int)DAT_8c13792c,0x1e,iVar5);
    *(undefined4 *)(puVar9 + -0x58) = 0;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar13;
    }
    uVar13 = (uint)uVar17;
    (**(code **)(puVar9 + -0x24))(uVar17,param_4 + 0x5c,(int)DAT_8c13792e,0x16,iVar5);
    *(undefined4 *)(puVar9 + -0x58) = 0;
    *(int *)(puVar9 + -0x20) = param_4;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = (ulonglong)uVar13;
    }
    (**(code **)(puVar9 + -0x24))(uVar16,param_4 + DAT_8c137930,(int)DAT_8c137932,0x1c,iVar5);
    return;
  }
  iVar5 = *(int *)(param_4 + 0x34);
  uVar6 = **(undefined4 **)(param_4 + 0x30);
  (*(code *)PTR__memset_8c137560)(puVar9 + -0x50,0,0x28);
  puVar3 = PTR_FUN_8c137574;
  uVar15 = DAT_8c137564._4_4_;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((undefined4)DAT_8c137564,in_fr3);
  }
  else {
    uVar11 = CONCAT44(DAT_8c137564._4_4_,(undefined4)DAT_8c137564);
  }
  iVar4 = (int)DAT_8c137550;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(DAT_8c13756c,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar9 + -0x50) = uVar11;
    uVar11 = CONCAT44(DAT_8c137570,DAT_8c13756c);
  }
  *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
  uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar9 + -0x4c) = uVar7;
    *(undefined4 *)(puVar9 + -0x48) = DAT_8c137570;
    uVar19 = CONCAT44(DAT_8c137578,(int)uVar11);
    uVar11 = in_xd14;
    in_fr15 = uVar7;
  }
  else {
    *(undefined8 *)(puVar9 + -0x4c) = uVar11;
    *(ulonglong *)(puVar9 + -0x48) = CONCAT44(PTR_FUN_8c137574,DAT_8c137570);
    uVar19 = CONCAT44(_DAT_8c13757c,DAT_8c137578);
  }
  *(undefined4 *)(puVar9 + -0x34) = DAT_8c137564._4_4_;
  uVar7 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar9 + -0x44) = uVar7;
  }
  else {
    *(undefined8 *)(puVar9 + -0x44) = uVar19;
  }
  *(undefined4 *)(puVar9 + -0x30) = 0;
  *(undefined2 *)(puVar9 + -0x40) = DAT_8c137552;
  *(undefined4 *)(puVar9 + -0x2c) = uVar6;
  *(undefined2 *)(puVar9 + -0x3e) = DAT_8c137554;
  *(undefined2 *)(puVar9 + -0x3c) = 0x58;
  *(undefined2 *)(puVar9 + -0x3a) = 0x1c;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(_DAT_8c13757c,(int)in_dr12);
  }
  else {
    uVar16 = CONCAT44(_DAT_8c137580,_DAT_8c13757c);
  }
  uVar17 = uVar16;
  uVar12 = uVar19;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44((int)(uVar16 >> 0x20),param_1);
    uVar12 = CONCAT44(uVar7,in_fr15);
  }
  (*(code *)PTR_FUN_8c137574)(uVar17,param_4 + iVar4,puVar9 + -0x50,0);
  uVar2 = DAT_8c137556;
  uVar13 = (uint)uVar17;
  uVar7 = (undefined4)uVar19;
  uVar6 = **(undefined4 **)(param_4 + 0x30);
  (*(code *)PTR__memset_8c137560)(puVar9 + -0x50,0,0x28);
  *(undefined4 *)(puVar9 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = CONCAT44(_DAT_8c137580,uVar7);
  }
  else {
    uVar19 = CONCAT44(_DAT_8c137584,_DAT_8c137580);
  }
  *(undefined4 *)(puVar9 + -0x2c) = uVar6;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar19 >> 0x20);
    *(int *)(puVar9 + -0x4c) = (int)uVar12;
    uVar19 = CONCAT44(_DAT_8c137584,(int)uVar19);
  }
  else {
    *(undefined8 *)(puVar9 + -0x50) = uVar19;
    *(undefined8 *)(puVar9 + -0x4c) = uVar11;
    uVar19 = CONCAT44(_DAT_8c137588,_DAT_8c137584);
  }
  *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x48) = (int)((ulonglong)uVar19 >> 0x20);
    *(int *)(puVar9 + -0x44) = (int)((ulonglong)uVar12 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar9 + -0x48) = uVar19;
    *(undefined8 *)(puVar9 + -0x44) = uVar12;
  }
  *(undefined2 *)(puVar9 + -0x40) = uVar2;
  *(undefined2 *)(puVar9 + -0x3e) = 0x56;
  *(undefined4 *)(puVar9 + -0x30) = 0;
  *(undefined2 *)(puVar9 + -0x3c) = 0x74;
  *(undefined2 *)(puVar9 + -0x3a) = 0x1c;
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar13;
  }
  uVar13 = (uint)uVar17;
  (*(code *)puVar3)(uVar17,param_4 + iVar4 + (int)DAT_8c137558,puVar9 + -0x50,0);
  uVar6 = _DAT_8c137588;
  uVar8 = (undefined4)uVar12;
  uVar10 = (undefined4)uVar19;
  uVar7 = **(undefined4 **)(param_4 + 0x30);
  (*(code *)PTR__memset_8c137560)(puVar9 + -0x50,0,0x28);
  if (in_FPSCR_SZ == '\0') {
    uVar19 = CONCAT44((undefined4)DAT_8c13758c,uVar10);
  }
  else {
    uVar19 = CONCAT44(DAT_8c13758c._4_4_,(undefined4)DAT_8c13758c);
  }
  *(undefined4 *)(puVar9 + -0x38) = uVar6;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar19 >> 0x20);
    uVar19 = CONCAT44(DAT_8c13758c._4_4_,(int)uVar19);
  }
  else {
    *(undefined8 *)(puVar9 + -0x50) = uVar19;
    uVar19 = CONCAT44(DAT_8c137594,DAT_8c13758c._4_4_);
  }
  *(undefined4 *)(puVar9 + -0x34) = uVar15;
  uVar10 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar9 + -0x4c) = uVar10;
    uVar12 = CONCAT44(DAT_8c137594,(int)uVar19);
    uVar19 = CONCAT44(uVar10,uVar8);
  }
  else {
    *(undefined8 *)(puVar9 + -0x4c) = uVar19;
    uVar12 = CONCAT44(DAT_8c137598,DAT_8c137594);
  }
  *(undefined4 *)(puVar9 + -0x30) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x48) = (int)((ulonglong)uVar12 >> 0x20);
    uVar12 = CONCAT44(DAT_8c137598,(int)uVar12);
  }
  else {
    *(undefined8 *)(puVar9 + -0x48) = uVar12;
    uVar12 = CONCAT44(_DAT_8c13759c,DAT_8c137598);
  }
  *(undefined4 *)(puVar9 + -0x2c) = uVar7;
  uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar9 + -0x44) = uVar7;
  }
  else {
    *(undefined8 *)(puVar9 + -0x44) = uVar12;
  }
  *(undefined2 *)(puVar9 + -0x40) = 0;
  *(undefined2 *)(puVar9 + -0x3e) = 0x38;
  *(undefined2 *)(puVar9 + -0x3c) = 0x7e;
  *(undefined2 *)(puVar9 + -0x3a) = 0x1e;
  uVar20 = uVar12;
  if (in_FPSCR_SZ == '\0') {
    uVar19 = CONCAT44((int)((ulonglong)uVar19 >> 0x20),uVar7);
    uVar20 = uVar11;
  }
  if (iVar5 == 0) {
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar13;
    }
    uVar13 = (uint)uVar17;
    (*(code *)puVar3)(uVar17,param_4 + DAT_8c13755a,puVar9 + -0x50,0);
    uVar7 = (undefined4)uVar12;
    *(undefined4 *)(puVar9 + -0x1c) = **(undefined4 **)(param_4 + 0x30);
    (*(code *)PTR__memset_8c137560)(puVar9 + -0x50,0,0x28);
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44(_DAT_8c13759c,uVar7);
    }
    else {
      uVar11 = CONCAT44(_DAT_8c1375a0,_DAT_8c13759c);
    }
    *(undefined4 *)(puVar9 + -0x2c) = *(undefined4 *)(puVar9 + -0x1c);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
      *(int *)(puVar9 + -0x4c) = (int)((ulonglong)uVar19 >> 0x20);
      uVar11 = CONCAT44(_DAT_8c1375a0,(int)uVar11);
    }
    else {
      *(undefined8 *)(puVar9 + -0x50) = uVar11;
      *(undefined8 *)(puVar9 + -0x4c) = uVar19;
      uVar11 = CONCAT44(uRam8c1375a4,_DAT_8c1375a0);
    }
    *(undefined4 *)(puVar9 + -0x34) = uVar15;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + -0x48) = (int)((ulonglong)uVar11 >> 0x20);
      *(int *)(puVar9 + -0x44) = (int)uVar19;
    }
    else {
      *(undefined8 *)(puVar9 + -0x48) = uVar11;
      *(undefined8 *)(puVar9 + -0x44) = uVar20;
    }
    *(undefined2 *)(puVar9 + -0x40) = 0;
    *(undefined2 *)(puVar9 + -0x3c) = uVar2;
    *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
    *(undefined2 *)(puVar9 + -0x3a) = 0x1e;
    *(undefined4 *)(puVar9 + -0x30) = 0;
    *(undefined2 *)(puVar9 + -0x3e) = 0x74;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar13;
    }
    uVar13 = (uint)uVar17;
    (*(code *)puVar3)(uVar17,param_4 + DAT_8c13755c,puVar9 + -0x50,0);
    uVar10 = (undefined4)uVar19;
    uVar7 = (undefined4)uVar11;
    *(undefined4 *)(puVar9 + -0x18) = **(undefined4 **)(param_4 + 0x30);
    (*(code *)PTR__memset_8c137560)(puVar9 + -0x50,0,0x28);
    *(undefined4 *)(puVar9 + -0x38) = uVar6;
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44((undefined4)DAT_8c13774c,uVar7);
    }
    else {
      uVar11 = CONCAT44(DAT_8c13774c._4_4_,(undefined4)DAT_8c13774c);
    }
    *(undefined4 *)(puVar9 + -0x34) = uVar15;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
      uVar11 = CONCAT44(DAT_8c13774c._4_4_,(int)uVar11);
    }
    else {
      *(undefined8 *)(puVar9 + -0x50) = uVar11;
      uVar11 = CONCAT44(DAT_8c137754,DAT_8c13774c._4_4_);
    }
    *(undefined4 *)(puVar9 + -0x30) = 0;
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar9 + -0x14) = uVar6;
      *(undefined4 *)(puVar9 + -0x4c) = uVar6;
      *(undefined4 *)(puVar9 + -0x10) = DAT_8c137754;
      *(undefined4 *)(puVar9 + -0x48) = DAT_8c137754;
      uVar11 = CONCAT44(DAT_8c137758,(int)uVar11);
      *(undefined4 *)(puVar9 + -0xc) = DAT_8c137758;
      *(undefined4 *)(puVar9 + -0x44) = DAT_8c137758;
    }
    else {
      *(undefined8 *)(puVar9 + -0x14) = uVar11;
      *(undefined8 *)(puVar9 + -0x4c) = uVar11;
      *(ulonglong *)(puVar9 + -0x10) = CONCAT44(DAT_8c137758,DAT_8c137754);
      *(ulonglong *)(puVar9 + -0x48) = CONCAT44(DAT_8c137758,DAT_8c137754);
      uVar11 = CONCAT44(PTR__memset_8c13775c,DAT_8c137758);
      *(undefined8 *)(puVar9 + -0xc) = uVar11;
      *(undefined8 *)(puVar9 + -0x44) = uVar11;
    }
    uVar6 = (undefined4)uVar11;
    *(undefined2 *)(puVar9 + -0x40) = DAT_8c13773e;
    *(undefined2 *)(puVar9 + -0x3e) = 0;
    *(undefined2 *)(puVar9 + -0x3c) = 0x10;
    *(undefined2 *)(puVar9 + -0x3a) = 0x16;
    *(undefined4 *)(puVar9 + -0x2c) = *(undefined4 *)(puVar9 + -0x18);
  }
  else {
    *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
    *(undefined2 *)(puVar9 + -0x40) = 0x7e;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar13;
    }
    uVar13 = (uint)uVar17;
    (*(code *)puVar3)(uVar17,param_4 + DAT_8c137b34,puVar9 + -0x50,0);
    uVar7 = (undefined4)uVar12;
    *(undefined4 *)(puVar9 + -0x1c) = **(undefined4 **)(param_4 + 0x30);
    (*(code *)PTR__memset_8c137b38)(puVar9 + -0x50,0,0x28);
    if (in_FPSCR_SZ == '\0') {
      uVar11 = CONCAT44((undefined4)DAT_8c137b3c,uVar7);
    }
    else {
      uVar11 = CONCAT44(DAT_8c137b3c._4_4_,(undefined4)DAT_8c137b3c);
    }
    *(undefined4 *)(puVar9 + -0x38) = uVar6;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
      *(int *)(puVar9 + -0x4c) = (int)((ulonglong)uVar19 >> 0x20);
      uVar11 = CONCAT44(DAT_8c137b3c._4_4_,(int)uVar11);
    }
    else {
      *(undefined8 *)(puVar9 + -0x50) = uVar11;
      *(undefined8 *)(puVar9 + -0x4c) = uVar19;
      uVar11 = CONCAT44(uRam8c137b44,DAT_8c137b3c._4_4_);
    }
    *(undefined4 *)(puVar9 + -0x34) = uVar15;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar9 + -0x48) = (int)((ulonglong)uVar11 >> 0x20);
      *(int *)(puVar9 + -0x44) = (int)uVar19;
    }
    else {
      *(undefined8 *)(puVar9 + -0x48) = uVar11;
      *(undefined8 *)(puVar9 + -0x44) = uVar20;
    }
    *(undefined2 *)(puVar9 + -0x40) = 0;
    *(undefined2 *)(puVar9 + -0x3e) = 0x56;
    *(undefined2 *)(puVar9 + -0x3c) = uVar2;
    *(undefined2 *)(puVar9 + -0x3a) = 0x1e;
    *(undefined4 *)(puVar9 + -0x30) = 0;
    *(undefined4 *)(puVar9 + -0x2c) = *(undefined4 *)(puVar9 + -0x1c);
    if (iVar5 == 1) {
      uVar17 = uVar16;
      if (in_FPSCR_SZ == '\0') {
        uVar17 = (ulonglong)uVar13;
      }
      uVar13 = (uint)uVar17;
      (*(code *)puVar3)(uVar17,param_4 + DAT_8c137aaa,puVar9 + -0x50,0);
      uVar10 = (undefined4)uVar19;
      uVar7 = (undefined4)uVar11;
      *(undefined4 *)(puVar9 + -0x18) = **(undefined4 **)(param_4 + 0x30);
      (*(code *)PTR__memset_8c137ab4)(puVar9 + -0x50,0,0x28);
      *(undefined4 *)(puVar9 + -0x34) = uVar15;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar9 + -0x50) = (undefined4)DAT_8c137ab8;
        uVar11 = CONCAT44(DAT_8c137ab8._4_4_,uVar7);
      }
      else {
        *(ulonglong *)(puVar9 + -0x50) = CONCAT44(DAT_8c137ab8._4_4_,(undefined4)DAT_8c137ab8);
        uVar11 = CONCAT44(DAT_8c137ac0,DAT_8c137ab8._4_4_);
      }
      *(undefined4 *)(puVar9 + -0x30) = 0;
      uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar9 + -0x14) = uVar7;
        *(undefined4 *)(puVar9 + -0x4c) = uVar7;
        *(undefined4 *)(puVar9 + -0x10) = DAT_8c137ac0;
        *(undefined4 *)(puVar9 + -0x48) = DAT_8c137ac0;
        uVar11 = CONCAT44(DAT_8c137ac4,(int)uVar11);
        *(undefined4 *)(puVar9 + -0xc) = DAT_8c137ac4;
        *(undefined4 *)(puVar9 + -0x44) = DAT_8c137ac4;
        uVar17 = (ulonglong)uVar13;
      }
      else {
        *(undefined8 *)(puVar9 + -0x14) = uVar11;
        *(undefined8 *)(puVar9 + -0x4c) = uVar11;
        *(ulonglong *)(puVar9 + -0x10) = CONCAT44(DAT_8c137ac4,DAT_8c137ac0);
        *(ulonglong *)(puVar9 + -0x48) = CONCAT44(DAT_8c137ac4,DAT_8c137ac0);
        uVar11 = CONCAT44(_DAT_8c137ac8,DAT_8c137ac4);
        *(undefined8 *)(puVar9 + -0xc) = uVar11;
        *(undefined8 *)(puVar9 + -0x44) = uVar11;
        uVar17 = uVar16;
      }
      uVar13 = (uint)uVar17;
      uVar7 = (undefined4)uVar11;
      *(undefined2 *)(puVar9 + -0x3e) = 0;
      *(undefined2 *)(puVar9 + -0x3c) = 0x10;
      *(undefined2 *)(puVar9 + -0x3a) = 0x16;
      *(undefined4 *)(puVar9 + -0x2c) = *(undefined4 *)(puVar9 + -0x18);
      *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
      *(undefined2 *)(puVar9 + -0x40) = DAT_8c137aac;
      (*(code *)puVar3)(uVar17,param_4 + DAT_8c137aae,puVar9 + -0x50,0);
      *(undefined4 *)(puVar9 + -8) = **(undefined4 **)(param_4 + 0x30);
      (*(code *)PTR__memset_8c137ab4)(puVar9 + -0x50,0,0x28);
      *(undefined4 *)(puVar9 + -0x38) = uVar6;
      if (in_FPSCR_SZ == '\0') {
        uVar11 = CONCAT44(_DAT_8c137ac8,uVar7);
      }
      else {
        uVar11 = CONCAT44(uRam8c137acc,_DAT_8c137ac8);
      }
      *(undefined4 *)(puVar9 + -0x34) = uVar15;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
        param_3 = *(undefined4 *)(puVar9 + -0x14);
      }
      else {
        *(undefined8 *)(puVar9 + -0x50) = uVar11;
        in_xd8 = *(undefined8 *)(puVar9 + -0x14);
      }
      *(undefined4 *)(puVar9 + -0x30) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar9 + -0x4c) = param_3;
        *(undefined4 *)(puVar9 + -0x48) = *(undefined4 *)(puVar9 + -0x10);
        *(undefined4 *)(puVar9 + -0x44) = *(undefined4 *)(puVar9 + -0xc);
      }
      else {
        *(undefined8 *)(puVar9 + -0x4c) = in_xd8;
        *(undefined8 *)(puVar9 + -0x48) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -0x44) = *(undefined8 *)(puVar9 + -0xc);
      }
      *(undefined2 *)(puVar9 + -0x40) = DAT_8c137ab0;
      *(undefined2 *)(puVar9 + -0x3e) = 0;
      *(undefined2 *)(puVar9 + -0x3c) = 0x10;
      *(undefined2 *)(puVar9 + -0x3a) = 0x16;
      *(undefined4 *)(puVar9 + -0x2c) = *(undefined4 *)(puVar9 + -8);
      goto LAB_8c13764e;
    }
    *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
    *(undefined2 *)(puVar9 + -0x3e) = 0x74;
    uVar17 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = (ulonglong)uVar13;
    }
    uVar13 = (uint)uVar17;
    (*(code *)puVar3)(uVar17,param_4 + DAT_8c137aaa,puVar9 + -0x50,0);
    uVar10 = (undefined4)uVar19;
    uVar6 = (undefined4)uVar11;
    *(undefined4 *)(puVar9 + -0x18) = **(undefined4 **)(param_4 + 0x30);
    (*(code *)PTR__memset_8c137ab4)(puVar9 + -0x50,0,0x28);
    *(undefined4 *)(puVar9 + -0x34) = uVar15;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar9 + -0x50) = (undefined4)DAT_8c137ab8;
      uVar11 = CONCAT44(DAT_8c137ab8._4_4_,uVar6);
    }
    else {
      *(ulonglong *)(puVar9 + -0x50) = CONCAT44(DAT_8c137ab8._4_4_,(undefined4)DAT_8c137ab8);
      uVar11 = CONCAT44(DAT_8c137ac0,DAT_8c137ab8._4_4_);
    }
    *(undefined4 *)(puVar9 + -0x30) = 0;
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar9 + -0x14) = uVar6;
      *(undefined4 *)(puVar9 + -0x4c) = uVar6;
      *(undefined4 *)(puVar9 + -0x10) = DAT_8c137ac0;
      *(undefined4 *)(puVar9 + -0x48) = DAT_8c137ac0;
      uVar11 = CONCAT44(DAT_8c137ac4,(int)uVar11);
      *(undefined4 *)(puVar9 + -0xc) = DAT_8c137ac4;
      *(undefined4 *)(puVar9 + -0x44) = DAT_8c137ac4;
    }
    else {
      *(undefined8 *)(puVar9 + -0x14) = uVar11;
      *(undefined8 *)(puVar9 + -0x4c) = uVar11;
      *(ulonglong *)(puVar9 + -0x10) = CONCAT44(DAT_8c137ac4,DAT_8c137ac0);
      *(ulonglong *)(puVar9 + -0x48) = CONCAT44(DAT_8c137ac4,DAT_8c137ac0);
      uVar11 = CONCAT44(_DAT_8c137ac8,DAT_8c137ac4);
      *(undefined8 *)(puVar9 + -0xc) = uVar11;
      *(undefined8 *)(puVar9 + -0x44) = uVar11;
    }
    uVar6 = (undefined4)uVar11;
    *(undefined2 *)(puVar9 + -0x3e) = 0;
    *(undefined2 *)(puVar9 + -0x3c) = 0x10;
    *(undefined2 *)(puVar9 + -0x3a) = 0x16;
    *(undefined4 *)(puVar9 + -0x2c) = *(undefined4 *)(puVar9 + -0x18);
    *(undefined2 *)(puVar9 + -0x40) = DAT_8c137aac;
    *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
  }
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar13;
  }
  uVar13 = (uint)uVar17;
  (*(code *)puVar3)(uVar17,param_4 + DAT_8c137740,puVar9 + -0x50,0);
  uVar7 = **(undefined4 **)(param_4 + 0x30);
  (*(code *)PTR__memset_8c13775c)(puVar9 + -0x50,0,0x28);
  *(undefined4 *)(puVar9 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44((undefined4)DAT_8c137760,uVar6);
  }
  else {
    uVar11 = CONCAT44(DAT_8c137760._4_4_,(undefined4)DAT_8c137760);
  }
  *(undefined4 *)(puVar9 + -0x2c) = uVar7;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
    uVar19 = CONCAT44(*(undefined4 *)(puVar9 + -0x14),param_2);
  }
  else {
    *(undefined8 *)(puVar9 + -0x50) = uVar11;
    uVar19 = *(undefined8 *)(puVar9 + -0x14);
  }
  *(undefined4 *)(puVar9 + -0x30) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x4c) = (int)((ulonglong)uVar19 >> 0x20);
    param_3 = *(undefined4 *)(puVar9 + -0x10);
  }
  else {
    *(undefined8 *)(puVar9 + -0x4c) = uVar19;
    in_xd8 = *(undefined8 *)(puVar9 + -0x10);
  }
  *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar9 + -0x48) = param_3;
    *(undefined4 *)(puVar9 + -0x44) = *(undefined4 *)(puVar9 + -0xc);
  }
  else {
    *(undefined8 *)(puVar9 + -0x48) = in_xd8;
    *(undefined8 *)(puVar9 + -0x44) = *(undefined8 *)(puVar9 + -0xc);
  }
  *(undefined2 *)(puVar9 + -0x3e) = 0;
  *(undefined2 *)(puVar9 + -0x3c) = 0x10;
  *(undefined2 *)(puVar9 + -0x3a) = 0x16;
  *(undefined2 *)(puVar9 + -0x40) = DAT_8c137742;
LAB_8c13764e:
  uVar7 = (undefined4)uVar16;
  uVar6 = (undefined4)uVar11;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)uVar13;
  }
  uVar14 = (undefined4)uVar16;
  iVar5 = (int)DAT_8c137746;
  (*(code *)puVar3)(uVar16,param_4 + DAT_8c137744,puVar9 + -0x50,0);
  uVar8 = *(undefined4 *)(*(int *)(param_4 + 0x30) + 8);
  (*(code *)PTR__memset_8c13775c)(puVar9 + -0x50,0,0x28);
  *(undefined4 *)(puVar9 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(DAT_8c137760._4_4_,uVar6);
  }
  else {
    uVar11 = CONCAT44(DAT_8c137768,DAT_8c137760._4_4_);
  }
  *(undefined4 *)(puVar9 + -0x2c) = uVar8;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(DAT_8c137768,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar9 + -0x50) = uVar11;
    uVar11 = CONCAT44(DAT_8c13776c,DAT_8c137768);
  }
  *(undefined4 *)(puVar9 + -0x30) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x4c) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(DAT_8c13776c,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar9 + -0x4c) = uVar11;
    uVar11 = CONCAT44(DAT_8c137770,DAT_8c13776c);
  }
  *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x48) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(DAT_8c137770,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar9 + -0x48) = uVar11;
    uVar11 = CONCAT44(_DAT_8c137774,DAT_8c137770);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x44) = (int)((ulonglong)uVar11 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar9 + -0x44) = uVar11;
  }
  *(undefined2 *)(puVar9 + -0x40) = DAT_8c13774a;
  *(undefined2 *)(puVar9 + -0x3e) = 0;
  *(undefined2 *)(puVar9 + -0x3c) = 0x2e;
  *(undefined2 *)(puVar9 + -0x3a) = 0x24;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(_DAT_8c137774,uVar14);
    uVar16 = CONCAT44(_DAT_8c137774,uVar10);
  }
  else {
    uVar17 = CONCAT44(_DAT_8c137778,_DAT_8c137774);
    uVar16 = uVar17;
  }
  (*(code *)puVar3)(uVar17,param_4 + DAT_8c137748,puVar9 + -0x50,0);
  uVar13 = (uint)uVar17;
  uVar10 = (undefined4)uVar11;
  uVar6 = *(undefined4 *)(*(int *)(param_4 + 0x30) + 8);
  (*(code *)PTR__memset_8c13775c)(puVar9 + -0x50,0,0x28);
  *(undefined4 *)(puVar9 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(_DAT_8c137778,uVar10);
  }
  else {
    uVar11 = CONCAT44(_DAT_8c13777c,_DAT_8c137778);
  }
  *(undefined4 *)(puVar9 + -0x2c) = uVar6;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar11 >> 0x20);
    uVar11 = CONCAT44(_DAT_8c13777c,(int)uVar11);
  }
  else {
    *(undefined8 *)(puVar9 + -0x50) = uVar11;
    uVar11 = CONCAT44(DAT_8c137780,_DAT_8c13777c);
  }
  *(undefined4 *)(puVar9 + -0x30) = 0;
  uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar9 + -0x4c) = uVar6;
    uVar19 = CONCAT44(DAT_8c137780,(int)uVar11);
    uVar11 = CONCAT44(uVar6,uVar7);
  }
  else {
    *(undefined8 *)(puVar9 + -0x4c) = uVar11;
    uVar19 = CONCAT44(DAT_8c137784,DAT_8c137780);
  }
  *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
  iVar4 = param_4 + 0x38;
  uVar6 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar9 + -0x48) = uVar6;
    uVar11 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),uVar6);
    uVar12 = CONCAT44(DAT_8c137784,(int)uVar19);
    *(uint *)(puVar9 + -0x44) = DAT_8c137784;
    uVar1 = DAT_8c137784;
    uVar19 = in_xd12;
  }
  else {
    *(undefined8 *)(puVar9 + -0x48) = uVar19;
    uVar12 = CONCAT44(_DAT_8c137788,DAT_8c137784);
    *(undefined8 *)(puVar9 + -0x44) = uVar12;
    uVar1 = _DAT_8c137788;
  }
  *(undefined2 *)(puVar9 + -0x40) = 0;
  *(undefined2 *)(puVar9 + -0x3e) = 0;
  *(undefined2 *)(puVar9 + -0x3c) = 0x40;
  *(undefined2 *)(puVar9 + -0x3a) = 0x78;
  uVar17 = uVar16;
  uVar21 = uVar12;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)uVar13;
    uVar17 = (ulonglong)uVar1;
    uVar21 = uVar20;
  }
  uVar13 = (uint)uVar16;
  (*(code *)puVar3)(uVar16,iVar4,puVar9 + -0x50,0);
  uVar7 = (undefined4)uVar12;
  uVar6 = *(undefined4 *)(*(int *)(param_4 + 0x30) + 8);
  (*(code *)PTR__memset_8c13775c)(puVar9 + -0x50,0,0x28);
  *(undefined4 *)(puVar9 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44(_DAT_8c137788,uVar7);
  }
  else {
    uVar12 = CONCAT44(uRam8c13778c,_DAT_8c137788);
  }
  *(undefined4 *)(puVar9 + -0x2c) = uVar6;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar12 >> 0x20);
    *(int *)(puVar9 + -0x4c) = (int)((ulonglong)uVar11 >> 0x20);
    uVar12 = CONCAT44(DAT_8c137938,(int)uVar12);
    *(undefined4 *)(puVar9 + -0x48) = DAT_8c137938;
    *(int *)(puVar9 + -0x44) = (int)uVar17;
  }
  else {
    *(undefined8 *)(puVar9 + -0x50) = uVar12;
    *(undefined8 *)(puVar9 + -0x4c) = uVar11;
    uVar12 = CONCAT44(PTR__memset_8c13793c,DAT_8c137938);
    *(undefined8 *)(puVar9 + -0x48) = uVar12;
    *(undefined8 *)(puVar9 + -0x44) = uVar21;
  }
  uVar6 = (undefined4)uVar12;
  *(undefined2 *)(puVar9 + -0x40) = 0x40;
  *(undefined2 *)(puVar9 + -0x3e) = 0;
  *(undefined2 *)(puVar9 + -0x3c) = 0x40;
  *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
  *(undefined4 *)(puVar9 + -0x30) = 0;
  *(undefined2 *)(puVar9 + -0x3a) = 0x78;
  uVar16 = uVar17;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)uVar13;
  }
  uVar13 = (uint)uVar16;
  (*(code *)puVar3)(uVar16,iVar4 + DAT_8c13791e,puVar9 + -0x50,0);
  uVar7 = *(undefined4 *)(*(int *)(param_4 + 0x30) + 8);
  (*(code *)PTR__memset_8c13793c)(puVar9 + -0x50,0,0x28);
  uVar10 = (undefined4)uVar17;
  *(undefined4 *)(puVar9 + -0x34) = uVar15;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44((undefined4)DAT_8c137940,uVar6);
  }
  else {
    uVar12 = CONCAT44(DAT_8c137940._4_4_,(undefined4)DAT_8c137940);
  }
  *(undefined4 *)(puVar9 + -0x2c) = uVar7;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar9 + -0x50) = (int)((ulonglong)uVar12 >> 0x20);
    *(int *)(puVar9 + -0x4c) = (int)((ulonglong)uVar11 >> 0x20);
    *(int *)(puVar9 + -0x48) = (int)uVar11;
    *(undefined4 *)(puVar9 + -0x44) = uVar10;
  }
  else {
    *(undefined8 *)(puVar9 + -0x50) = uVar12;
    *(undefined8 *)(puVar9 + -0x4c) = uVar11;
    *(undefined8 *)(puVar9 + -0x48) = uVar19;
    *(undefined8 *)(puVar9 + -0x44) = uVar21;
  }
  *(undefined2 *)(puVar9 + -0x40) = 0x68;
  *(undefined2 *)(puVar9 + -0x3e) = 0;
  *(undefined4 *)(puVar9 + -0x38) = 0xffffffff;
  *(undefined2 *)(puVar9 + -0x3c) = 0x40;
  *(undefined2 *)(puVar9 + -0x3a) = 0x78;
  *(undefined4 *)(puVar9 + -0x30) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar13;
  }
  uVar15 = (undefined4)uVar17;
  (*(code *)puVar3)(uVar17,iVar4 + DAT_8c137920,puVar9 + -0x50,0);
  puVar3 = PTR_FUN_8c137948;
  iVar4 = (int)DAT_8c137922;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(DAT_8c137940._4_4_,uVar10);
  }
  else {
    uVar16 = CONCAT44(PTR_FUN_8c137948,DAT_8c137940._4_4_);
  }
  *(int *)(puVar9 + -0x58) = (int)DAT_8c137924;
  *(undefined4 *)(puVar9 + -0x54) = 1;
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44((int)(uVar16 >> 0x20),uVar15);
  }
  (*(code *)PTR_FUN_8c137948)(uVar17,param_4 + iVar4,0,iVar5,0);
  *(int *)(puVar9 + -0x58) = (int)DAT_8c137926;
  uVar18 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = uVar17 & 0xffffffff;
  }
  uVar13 = (uint)uVar18;
  (*(code *)puVar3)(uVar18,param_4 + iVar4 + 0x5c,iVar5,iVar5,(int)DAT_8c137928);
  param_4 = param_4 + DAT_8c13792a;
  *(undefined4 *)(puVar9 + -0x58) = 0x1c;
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar13;
  }
  uVar13 = (uint)uVar17;
  (*(code *)puVar3)(uVar17,param_4,iVar5,0,(int)DAT_8c13792c);
  *(undefined4 *)(puVar9 + -0x58) = 0x16;
  uVar17 = uVar16;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = (ulonglong)uVar13;
  }
  uVar13 = (uint)uVar17;
  (*(code *)puVar3)(uVar17,param_4 + 0x5c,iVar5,0,(int)DAT_8c13792e);
  *(undefined4 *)(puVar9 + -0x58) = 0x1e;
  if (in_FPSCR_SZ == '\0') {
    uVar16 = (ulonglong)uVar13;
  }
  (*(code *)puVar3)(uVar16,param_4 + DAT_8c137930,iVar5,0,(int)DAT_8c137932);
                    /* WARNING: Read-only address (ram,0x8c1375a4) is written */
                    /* WARNING: Read-only address (ram,0x8c13778c) is written */
                    /* WARNING: Read-only address (ram,0x8c137acc) is written */
  return;
}

