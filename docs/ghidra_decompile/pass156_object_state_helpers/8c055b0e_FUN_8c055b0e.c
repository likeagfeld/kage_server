// entry: 8c055b0e
// name: FUN_8c055b0e
// signature: undefined FUN_8c055b0e(void)


undefined4 FUN_8c055b0e(int param_1,undefined2 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(uint *)(param_1 + 0x2c) & 2) != 0) {
    piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x28) + (int)DAT_8c055b4a);
    uVar2 = (*(code *)piVar1[2])(*(int *)(param_1 + 0x38) + *piVar1);
    uVar2 = (*(code *)PTR_FUN_8c055b70)(*(undefined4 *)(param_1 + 0x38),param_2,uVar2);
  }
  return uVar2;
}

