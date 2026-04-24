// entry: 8c09a2c0
// name: FUN_8c09a2c0
// signature: undefined FUN_8c09a2c0(void)


void FUN_8c09a2c0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = 0;
  iVar7 = 0;
  (*(code *)PTR_FUN_8c09a3b4)(*(undefined4 *)(DAT_8c09a3a0 + param_1));
  iVar3 = (int)DAT_8c09a3a4;
  iVar5 = 8;
  iVar4 = *(int *)(DAT_8c09a3a2 + param_1);
  do {
    puVar1 = PTR_FUN_8c09a3b8;
    iVar2 = *(int *)(iVar6 * 0x14 + param_1 + iVar3 + 0xc);
    if ((iVar2 == 1) || (iVar2 == 2)) {
      iVar8 = 0;
      iVar2 = iVar7;
      if (0 < iVar4) {
        do {
          iVar8 = iVar8 + 1;
          iVar7 = iVar2 + 1;
          (*(code *)puVar1)(*(undefined4 *)(DAT_8c09a3a0 + param_1),iVar2,iVar6);
          iVar4 = *(int *)(DAT_8c09a3a2 + param_1);
          iVar2 = iVar7;
        } while (iVar8 < iVar4);
      }
    }
    else if (iVar2 == 3) {
      iVar8 = 0;
      iVar2 = iVar7;
      if (0 < iVar4) {
        do {
          iVar8 = iVar8 + 1;
          iVar7 = iVar2 + 1;
          (*(code *)puVar1)(*(undefined4 *)(DAT_8c09a3a0 + param_1),iVar2,iVar6);
          iVar4 = *(int *)(DAT_8c09a3a2 + param_1);
          iVar2 = iVar7;
        } while (iVar8 < iVar4);
      }
    }
    else {
      iVar7 = iVar7 + iVar4;
    }
    iVar5 = iVar5 + -1;
    iVar6 = iVar6 + 1;
  } while (iVar5 != 0);
  return;
}

