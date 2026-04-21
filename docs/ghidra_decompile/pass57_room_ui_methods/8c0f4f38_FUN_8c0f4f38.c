// entry: 8c0f4f38
// name: FUN_8c0f4f38
// signature: undefined FUN_8c0f4f38(void)


void FUN_8c0f4f38(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_1 + 0x54);
  piVar5 = (int *)(param_1 + DAT_8c0f4fce);
  piVar5[param_2] = param_3;
  if (iVar4 != 0) {
    iVar1 = 0;
    iVar3 = 4;
    piVar2 = piVar5;
    do {
      if ((*piVar2 != 0) || (piVar5[iVar1 + 1] != 0)) {
        (*(code *)PTR_FUN_8c0f4fe4)(iVar4,1);
        return;
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 2;
      piVar2 = piVar2 + 2;
    } while (iVar3 != 0);
    (*(code *)PTR_FUN_8c0f4fe4)(iVar4,0);
  }
  return;
}

