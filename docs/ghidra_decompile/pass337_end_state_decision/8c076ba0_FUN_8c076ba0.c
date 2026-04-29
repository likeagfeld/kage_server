// entry: 8c076ba0
// name: FUN_8c076ba0
// signature: undefined FUN_8c076ba0(void)


void FUN_8c076ba0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_FUN_8c076cb4;
  iVar3 = *(int *)(DAT_8c076bc4 + param_1);
  iVar2 = *(int *)(iVar3 + 0x44);
  if (iVar2 == 0x13) {
    *(undefined4 *)(iVar3 + 0x44) = 0;
    *(undefined4 *)(*(int *)(DAT_8c076cac + param_1) + 0x48) = 0x17;
    puVar1 = PTR_FUN_8c076cb4;
    *(undefined4 *)(DAT_8c076cae + param_1) = 0;
    (*(code *)puVar1)(0,param_1 + 0x10,8);
  }
  else if (iVar2 == 0x15) {
    *(undefined4 *)(iVar3 + 0x44) = 0;
    (*(code *)puVar1)(0,param_1 + 0x10,1);
  }
  else if (iVar2 == 0x1a) {
    *(undefined4 *)(iVar3 + 0x44) = 0;
    (*(code *)puVar1)(0,param_1 + 0x10,5);
  }
  return;
}

