// entry: 8c0fa832
// name: FUN_8c0fa832
// signature: undefined FUN_8c0fa832(void)


bool FUN_8c0fa832(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*(code *)PTR_FUN_8c0fa888)(param_2);
  uVar3 = param_1[2];
  if (uVar2 < uVar3) {
    (*(code *)PTR_FUN_8c0fa88c)(*param_1,0,uVar3);
    puVar1 = PTR_FUN_8c0fa890;
    param_1[4] = uVar2;
    param_1[3] = uVar2;
    (*(code *)puVar1)();
  }
  return uVar2 < uVar3;
}

