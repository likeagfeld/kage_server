// entry: 8c12e582
// name: FUN_8c12e582
// signature: undefined FUN_8c12e582(void)


void FUN_8c12e582(ulonglong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char in_FPSCR_SZ;
  undefined4 uStack_14;
  
  (*(code *)PTR_FUN_8c12e5f8)(*(undefined4 *)(param_2 + 0x30));
  param_1 = param_1 & 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    param_1 = 0;
  }
  iVar2 = (*(code *)PTR_FUN_8c12e5fc)(param_1,*(undefined4 *)(param_2 + 0x30),4);
  uVar5 = (undefined4)param_1;
  if (iVar2 == 0x11) {
    pcVar4 = PTR_DAT_8c12e600 + DAT_8c12e5f2;
    if (*pcVar4 == '\0') {
      uVar3 = *DAT_8c12e6bc;
    }
    else {
      uVar3 = *DAT_8c12e604;
    }
    (*(code *)PTR_FUN_8c12e608)(uVar3,pcVar4[1]);
    (*(code *)PTR_FUN_8c12e60c)(uVar3,pcVar4[2],pcVar4[3],0);
    puVar1 = DAT_8c12e610;
    *(undefined4 *)(param_2 + 0x48) = 1;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44(*(undefined4 *)puVar1,uVar5);
    }
    else {
      uVar6 = *puVar1;
    }
    (*(code *)PTR_FUN_8c12e5f4)(uVar6,param_2 + 0x10,4);
  }
  else {
    param_1 = param_1 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      param_1 = 0;
    }
    uVar5 = (undefined4)param_1;
    iVar2 = (*(code *)PTR_FUN_8c12e6c0)(param_1,*(undefined4 *)(param_2 + 0x30),2);
    if (iVar2 == 0x11) {
      pcVar4 = PTR_DAT_8c12e6c4 + DAT_8c12e6b8;
      if (*pcVar4 == '\0') {
        uStack_14 = *DAT_8c12e6bc;
      }
      else {
        uStack_14 = *DAT_8c12e6c8;
      }
      (*(code *)PTR_FUN_8c12e6cc)(pcVar4[1]);
      (*(code *)PTR_FUN_8c12e6d0)(uStack_14,pcVar4[2],pcVar4[3],0);
      puVar1 = DAT_8c12e6d4;
      *(undefined4 *)(param_2 + 0x48) = 1;
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(*(undefined4 *)puVar1,uVar5);
      }
      else {
        uVar6 = *puVar1;
      }
      (*(code *)PTR_FUN_8c12e6d8)(uVar6,param_2 + 0x10,4);
    }
  }
  return;
}

