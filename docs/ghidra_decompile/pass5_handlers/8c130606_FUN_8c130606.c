// entry: 8c130606
// name: FUN_8c130606
// signature: undefined FUN_8c130606(void)


void FUN_8c130606(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = DAT_8c130704;
  uVar2 = DAT_8c130700;
  uVar1 = DAT_8c1306fc;
  if (param_2 == 0) {
    iVar5 = *(int *)(param_1 + 0x38) + 0xc;
    iVar4 = *(int *)(param_1 + 0x38) + 0x24;
    iVar6 = 2;
    do {
      iVar6 = iVar6 + -1;
      *(undefined4 *)(iVar5 + 0x14) = uVar1;
      *(undefined4 *)(iVar4 + 0x14) = uVar1;
      iVar5 = iVar5 + 0x30;
      iVar4 = iVar4 + 0x30;
    } while (iVar6 != 0);
  }
  else if (param_2 == 1) {
    iVar5 = *(int *)(param_1 + 0x38) + 0xc;
    iVar4 = *(int *)(param_1 + 0x38) + 0x24;
    iVar6 = 2;
    do {
      iVar6 = iVar6 + -1;
      *(undefined4 *)(iVar5 + 0x14) = uVar2;
      *(undefined4 *)(iVar4 + 0x14) = uVar2;
      iVar5 = iVar5 + 0x30;
      iVar4 = iVar4 + 0x30;
    } while (iVar6 != 0);
  }
  else if (param_2 == 2) {
    iVar5 = *(int *)(param_1 + 0x38) + 0xc;
    iVar4 = *(int *)(param_1 + 0x38) + 0x24;
    iVar6 = 2;
    do {
      iVar6 = iVar6 + -1;
      *(undefined4 *)(iVar5 + 0x14) = uVar3;
      *(undefined4 *)(iVar4 + 0x14) = uVar3;
      iVar5 = iVar5 + 0x30;
      iVar4 = iVar4 + 0x30;
    } while (iVar6 != 0);
  }
  return;
}

