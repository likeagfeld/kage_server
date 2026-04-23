// entry: 8c055cd8
// name: FUN_8c055cd8
// signature: undefined FUN_8c055cd8(void)


void FUN_8c055cd8(int param_1,short param_2,uint param_3,short param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x38);
  param_3 = param_3 & 0xffff;
  iVar3 = (int)param_4;
  if ((*(int *)(iVar2 + 0x30) != 0) &&
     (piVar1 = (int *)(*(int *)(iVar2 + 0x28) + (int)DAT_8c055e12),
     iVar2 = (*(code *)piVar1[2])(iVar2 + *piVar1,0x18), iVar2 <= (int)param_3)) {
    iVar2 = *(int *)(param_1 + 0x38);
    if (*(short *)(iVar2 + 0x38) == param_2) {
      if (*(int *)(param_1 + 0x30) == 4) {
        piVar1 = (int *)(*(int *)(iVar2 + 0x28) + (int)DAT_8c055e14);
        (*(code *)piVar1[2])(iVar2 + *piVar1,iVar3,param_3 != 0);
      }
      else {
        piVar1 = (int *)(*(int *)(iVar2 + 0x28) + (int)DAT_8c055e14);
        (*(code *)piVar1[2])(iVar2 + *piVar1,iVar3,0,iVar3);
      }
      iVar2 = *(int *)(param_1 + 0x30);
      if ((((iVar2 != 1) && (iVar2 != 8)) && (iVar2 != 2)) && (iVar2 != 0x10)) {
        return;
      }
    }
    piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x28) + (int)DAT_8c055e16);
    (*(code *)piVar1[2])(*(int *)(param_1 + 0x38) + *piVar1,0xffffffff);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (*(int *)(iVar2 + 0x30) == 0) {
    piVar1 = (int *)(*(int *)(iVar2 + 0x28) + (int)DAT_8c055e18);
    (*(code *)piVar1[2])(iVar2 + *piVar1,param_2,param_3,iVar3);
  }
  return;
}

