// entry: 8c13ba68
// name: FUN_8c13ba68


void FUN_8c13ba68(undefined4 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  puVar1 = PTR_FUN_8c13bca4;
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar4 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar4 + -4) = in_PR;
  if (param_3 == 1) {
    iVar2 = (int)DAT_8c13bb7a;
    FUN_8c13bdd8(param_2);
    puVar1 = PTR_FUN_8c13bba4;
    iVar3 = (int)DAT_8c13bb7c;
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(DAT_8c13bba0,(int)in_dr14);
    }
    else {
      uVar7 = CONCAT44(PTR_FUN_8c13bba4,DAT_8c13bba0);
    }
    *(int *)((int)puVar4 + -0x14) = (int)DAT_8c13bb7e;
    *(undefined4 *)((int)puVar4 + -0x10) = 1;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44((int)(uVar7 >> 0x20),param_1);
    }
    (*(code *)PTR_FUN_8c13bba4)(uVar6,param_2 + iVar3,0,iVar2,0);
    *(int *)((int)puVar4 + -0x14) = (int)DAT_8c13bb80;
    uVar9 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar9 = uVar6 & 0xffffffff;
    }
    uVar5 = (uint)uVar9;
    (*(code *)puVar1)(uVar9,param_2 + iVar3 + 0x5c,iVar2,iVar2,(int)DAT_8c13bb82);
    param_2 = param_2 + DAT_8c13bb84;
    *(undefined4 *)((int)puVar4 + -0x14) = 0x1e;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2,iVar2,0,(int)DAT_8c13bb86);
    *(undefined4 *)((int)puVar4 + -0x14) = 0x16;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + 0x5c,iVar2,0,(int)DAT_8c13bb88);
    *(undefined4 *)((int)puVar4 + -0x14) = 0x16;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + DAT_8c13bb8a,iVar2,0,(int)DAT_8c13bb8c);
    *(undefined4 *)((int)puVar4 + -0x14) = 0x1e;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + DAT_8c13bb8e,iVar2,0,(int)DAT_8c13bb90);
    *(undefined4 *)((int)puVar4 + -0x14) = 0x16;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + DAT_8c13bb92,iVar2,0,(int)DAT_8c13bb94);
    *(undefined4 *)((int)puVar4 + -0x14) = 0x16;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + DAT_8c13bb96,iVar2,0,(int)DAT_8c13bb98);
    *(undefined4 *)((int)puVar4 + -0x14) = 0x1c;
    if (in_FPSCR_SZ == '\0') {
      uVar7 = (ulonglong)uVar5;
    }
    (*(code *)puVar1)(uVar7,param_2 + DAT_8c13bb9a,iVar2,0,(int)DAT_8c13bb9c);
  }
  else if (param_3 == 2) {
    if (in_FPSCR_SZ == '\0') {
      uVar8 = CONCAT44(DAT_8c13bba8,param_1);
    }
    else {
      uVar8 = CONCAT44(PTR_FUN_8c13bbac,DAT_8c13bba8);
    }
    (*(code *)PTR_FUN_8c13bbac)(uVar8,param_2 + DAT_8c13bb9e,DAT_8c13bbb0,DAT_8c13bbb4,2);
  }
  else if (param_3 == 3) {
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(DAT_8c13bca0,(int)in_dr14);
    }
    else {
      uVar7 = CONCAT44(PTR_FUN_8c13bca4,DAT_8c13bca0);
    }
    *(int *)((int)puVar4 + -0xc) = param_2 + DAT_8c13bc7c;
    *(int *)((int)puVar4 + -0x14) = (int)DAT_8c13bc7e;
    *(undefined4 *)((int)puVar4 + -0x10) = 1;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44((int)(uVar7 >> 0x20),param_1);
    }
    (*(code *)PTR_FUN_8c13bca4)(uVar6,0,(int)DAT_8c13bc80,0);
    iVar3 = (int)DAT_8c13bc7e;
    *(int *)((int)puVar4 + -0x14) = (int)DAT_8c13bc7e;
    uVar9 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar9 = uVar6 & 0xffffffff;
    }
    uVar5 = (uint)uVar9;
    (*(code *)puVar1)(uVar9,*(int *)((int)puVar4 + -0xc) + 0x5c,(int)DAT_8c13bc82,(int)DAT_8c13bc84,
                      iVar3);
    param_2 = param_2 + DAT_8c13bc86;
    *(undefined4 *)((int)puVar4 + -0x14) = 0;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2,(int)DAT_8c13bc88,0x1e,iVar3);
    *(undefined4 *)((int)puVar4 + -0x14) = 0;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + 0x5c,(int)DAT_8c13bc8a,0x16,iVar3);
    *(undefined4 *)((int)puVar4 + -0x14) = 0;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + DAT_8c13bc8c,(int)DAT_8c13bc8e,0x16,iVar3);
    *(undefined4 *)((int)puVar4 + -0x14) = 0;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + DAT_8c13bc90,(int)DAT_8c13bc92,0x1e,iVar3);
    *(undefined4 *)((int)puVar4 + -0x14) = 0;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + DAT_8c13bc94,(int)DAT_8c13bc96,0x16,iVar3);
    *(undefined4 *)((int)puVar4 + -0x14) = 0;
    uVar6 = uVar7;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar6;
    (*(code *)puVar1)(uVar6,param_2 + DAT_8c13bc98,(int)DAT_8c13bc9a,0x16,iVar3);
    *(int *)((int)puVar4 + -8) = param_2;
    *(undefined4 *)((int)puVar4 + -0x14) = 0;
    if (in_FPSCR_SZ == '\0') {
      uVar7 = (ulonglong)uVar5;
    }
    (*(code *)puVar1)(uVar7,param_2 + DAT_8c13bc9c,(int)DAT_8c13bc9e,0x1c,iVar3);
  }
  return;
}

