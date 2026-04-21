// entry: 8c131c30
// name: FUN_8c131c30
// signature: undefined FUN_8c131c30(void)


void FUN_8c131c30(void)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 local_20;
  uint local_1c [2];
  
  puVar1 = DAT_8c131c90;
  iVar7 = 0;
  if ((*DAT_8c131c90 & 1) != 0) {
    (*(code *)PTR_FUN_8c131c94)(local_1c);
    uVar5 = local_1c[0] & DAT_8c131c98;
    if (uVar5 == (int)DAT_8c131c86) {
      local_20 = 1;
    }
    else if (uVar5 == (int)DAT_8c131c88) {
      local_20 = 2;
    }
    else if (uVar5 == (int)DAT_8c131c8a) {
      local_20 = 3;
    }
    else if (uVar5 == (int)DAT_8c131c8c) {
      local_20 = 4;
    }
    else {
      local_20 = 0;
    }
    iVar7 = (*(code *)PTR_FUN_8c131d60)(*DAT_8c131d5c,(int)DAT_8c131d56,&local_20);
    uVar3 = (*(code *)PTR_FUN_8c131d64)();
    uVar5 = (uint)DAT_8c131d58;
    *DAT_8c131d68 = uVar3;
    if ((local_1c[0] & uVar5) == 0) {
      (*(code *)PTR_FUN_8c131d6c)();
      pcVar2 = DAT_8c131d74;
      puVar6 = PTR_FUN_8c131d70;
      if (*DAT_8c131d74 != '\0') {
        uVar3 = (*(code *)PTR_FUN_8c131d78)(DAT_8c131d74);
        (*(code *)puVar6)(0xc,uVar3,pcVar2);
      }
      (*(code *)puVar6)(1,4,DAT_8c131d7c);
      if ((local_1c[0] & 0x10) == 0) {
        (*(code *)puVar6)(3,4,DAT_8c131d80);
      }
      if ((local_1c[0] & 1) == 0) {
        (*(code *)puVar6)(6,8,DAT_8c131d84);
      }
      iVar4 = (*(code *)PTR_FUN_8c131d8c)(DAT_8c131d88);
      iVar7 = 0;
      if (iVar4 != 0) {
        iVar7 = 6;
      }
    }
    if ((local_1c[0] & (int)DAT_8c131d5a) != 0) {
      iVar4 = (*(code *)PTR_FUN_8c131d94)(DAT_8c131d90);
      if (iVar4 == 0) {
        iVar4 = (*(code *)PTR_FUN_8c131d98)(DAT_8c131d90);
      }
      iVar7 = 0;
      if (iVar4 != 0) {
        iVar7 = 8;
        (*(code *)PTR_FUN_8c131da0)(DAT_8c131d88,DAT_8c131d9c);
      }
    }
  }
  if ((*puVar1 & 8) != 0) {
    puVar6 = PTR_PTR_8c131f28;
    if ((*puVar1 & 4) != 0) {
      puVar6 = PTR_PTR_8c131da4;
    }
    iVar4 = (*(code *)PTR_FUN_8c131f2c)(puVar6);
    iVar7 = 0;
    if (iVar4 != 0) {
      (*(code *)PTR_FUN_8c131f34)(*DAT_8c131f30);
      iVar7 = 10;
    }
  }
  if ((((*puVar1 & 2) == 0) || ((*(code *)PTR_FUN_8c131f38)(), (*puVar1 & 8) != 0)) ||
     (iVar7 = FUN_8c1320be(), iVar7 != 0)) {
    if (iVar7 == 0) {
      uVar3 = 6;
    }
    else {
      FUN_8c13232a(iVar7);
      uVar3 = 7;
    }
    FUN_8c1322ec(uVar3);
  }
  else {
    FUN_8c1322ec(8);
  }
  return;
}

