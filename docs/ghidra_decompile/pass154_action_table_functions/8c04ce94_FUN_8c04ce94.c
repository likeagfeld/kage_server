// entry: 8c04ce94
// name: FUN_8c04ce94
// signature: undefined FUN_8c04ce94(void)


void FUN_8c04ce94(undefined4 param_1,uint *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_FPSCR_SZ;
  undefined1 auStack_4c [68];
  
  if ((*param_2 & 2) != 0) {
    (*(code *)PTR_FUN_8c04cf8c)(auStack_4c);
    (*(code *)PTR_FUN_8c04cf90)(auStack_4c,param_2[0xd]);
    (*(code *)PTR_FUN_8c04cf94)(auStack_4c,param_2[0xe]);
    if (in_FPSCR_SZ == '\0') {
      uVar1 = CONCAT44(param_2[0xf],param_2[0x10]);
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0xf);
    }
    (*(code *)PTR_FUN_8c04cf98)(uVar1,auStack_4c);
    if (in_FPSCR_SZ == '\0') {
      uVar1 = CONCAT44(param_2[1],param_2[2]);
      uVar2 = CONCAT44(param_2[3],param_1);
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 1);
      uVar2 = *(undefined8 *)(param_2 + 3);
    }
    (*(code *)PTR_FUN_8c04cf9c)(uVar1,uVar2,auStack_4c);
    if (in_FPSCR_SZ == '\0') {
      uVar1 = CONCAT44(param_2[4],param_2[5]);
      uVar2 = CONCAT44(param_2[6],(int)uVar2);
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 4);
      uVar2 = *(undefined8 *)(param_2 + 6);
    }
    (*(code *)PTR_FUN_8c04cfa0)(uVar1,uVar2,auStack_4c);
    (*(code *)PTR_FUN_8c04cfa4)(param_2 + 7,auStack_4c,0x40);
    *param_2 = *param_2 & 0xfffffffd;
  }
  (*(code *)PTR_FUN_8c04cf74)(param_2 + 0x17);
  if (param_3 != 0) {
    (*(code *)PTR_FUN_8c04cf88)(2,param_2 + 0x1c);
  }
  (*(code *)PTR_FUN_8c04cf78)(param_2[0xe]);
  (*(code *)PTR_FUN_8c04cf7c)(param_2 + 7);
  if (*(int *)PTR_DAT_8c04cf80 != 0) {
    (*(code *)PTR_FUN_8c04cf84)(1);
  }
  return;
}

