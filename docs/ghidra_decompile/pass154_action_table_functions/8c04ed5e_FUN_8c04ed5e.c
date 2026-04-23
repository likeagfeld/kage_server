// entry: 8c04ed5e
// name: FUN_8c04ed5e
// signature: undefined FUN_8c04ed5e(void)


void FUN_8c04ed5e(ulonglong param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint extraout_fr3;
  ulonglong uVar8;
  undefined8 in_dr14;
  ulonglong uVar9;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_10;
  
  puVar2 = PTR_FUN_8c04ee50;
  if (in_FPSCR_SZ == '\0') {
    puVar7 = (undefined8 *)((int)&local_10 + 4);
    local_10 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_10);
  }
  else {
    puVar7 = &local_10;
    local_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar7 + -4) = in_PR;
  uVar3 = (uint)*(char *)(param_2 + 3);
  uVar6 = (uint)DAT_8c04ee42;
  uVar9 = param_1;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = CONCAT44((int)(param_1 >> 0x20),(int)in_dr14);
  }
  *(undefined4 *)((int)puVar7 + -0xc) = param_3;
  if ((uVar3 & uVar6 & 0x80) == 0) {
    (*(code *)PTR_FUN_8c04ee50)(uVar3 & uVar6 | 0x40);
    (*(code *)puVar2)();
    if (in_FPSCR_SZ == '\0') {
      *(int *)(param_2 + 0xc) = (int)(uVar9 >> 0x20);
    }
    else {
      *(ulonglong *)(param_2 + 0xc) = uVar9;
    }
  }
  else {
    if ((uVar3 & uVar6 & 1) != 0) {
      cVar1 = *(char *)(param_2 + 2);
      uVar8 = uVar9;
      if (in_FPSCR_SZ == '\0') {
        uVar8 = param_1 & 0xffffffff;
      }
      iVar5 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
      pcVar4 = *(code **)(*(int *)(param_2 + 0x10) + 0x14);
      *(int *)((int)puVar7 + -8) = iVar5;
      (*pcVar4)(uVar8,param_2 + iVar5,(int)cVar1 & uVar6,param_3);
    }
    puVar2 = PTR_FUN_8c04ee50;
    (*(code *)PTR_FUN_8c04ee50)();
    (*(code *)puVar2)();
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(param_2 + 4) = 0;
      *(int *)(param_2 + 8) = (int)(uVar9 >> 0x20);
    }
    else {
      *(ulonglong *)(param_2 + 4) = (ulonglong)extraout_fr3;
      *(ulonglong *)(param_2 + 8) = uVar9;
    }
  }
  return;
}

