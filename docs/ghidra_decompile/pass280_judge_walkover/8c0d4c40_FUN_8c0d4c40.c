// entry: 8c0d4c40
// name: FUN_8c0d4c40
// signature: undefined FUN_8c0d4c40(void)


int FUN_8c0d4c40(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c0d4db0)(0,param_1 + 0x2c,0);
    (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0x18));
    (*(code *)PTR_FUN_8c0d4db4)(param_1,iVar1);
    *(undefined4 *)(DAT_8c0d4da6 + iVar1) = *(undefined4 *)(DAT_8c0d4da4 + param_1);
    (*(code *)PTR_FUN_8c0d4db8)(iVar1,*(undefined4 *)(DAT_8c0d4da8 + param_1));
    piVar2 = (int *)(*(int *)(iVar1 + 0x28) + (int)DAT_8c0d4daa);
    (*(code *)piVar2[2])(iVar1 + *piVar2,param_3);
  }
  else if (param_2 == 1) {
    iVar1 = (*(code *)PTR_FUN_8c0d4dbc)(0,param_1 + 0x2c,1);
    (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0x18));
    (*(code *)PTR_FUN_8c0d4db4)(param_1,iVar1);
    (*(code *)PTR_FUN_8c0d4dc0)(iVar1,*(undefined4 *)(DAT_8c0d4dac + param_1));
    piVar2 = (int *)(*(int *)(iVar1 + 0x28) + (int)DAT_8c0d4daa);
    (*(code *)piVar2[2])(iVar1 + *piVar2,param_3);
  }
  else if (param_2 == 2) {
    iVar1 = (*(code *)PTR_FUN_8c0d4dc4)(0,param_1 + 0x2c,2);
    (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0x18));
    (*(code *)PTR_FUN_8c0d4db4)(param_1,iVar1);
    (*(code *)PTR_FUN_8c0d4dc8)(iVar1,*(undefined4 *)(DAT_8c0d4dac + param_1));
    piVar2 = (int *)(*(int *)(iVar1 + 0x28) + (int)DAT_8c0d4daa);
    (*(code *)piVar2[2])(iVar1 + *piVar2,param_3);
  }
  else if (param_2 == 3) {
    iVar1 = (*(code *)PTR_FUN_8c0d4dcc)(0,param_1 + 0x2c,3);
    (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0x18));
    (*(code *)PTR_FUN_8c0d4db4)(param_1,iVar1);
    (*(code *)PTR_FUN_8c0d4dd0)(iVar1,*(undefined4 *)(DAT_8c0d4dac + param_1));
    piVar2 = (int *)(*(int *)(iVar1 + 0x28) + (int)DAT_8c0d4daa);
    (*(code *)piVar2[2])(iVar1 + *piVar2,param_3);
  }
  else if (param_2 == 4) {
    iVar1 = (*(code *)PTR_FUN_8c0d4f3c)(0,param_1 + 0x2c,4);
    (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0x18));
    (*(code *)PTR_FUN_8c0d4f40)(param_1,iVar1);
    (*(code *)PTR_FUN_8c0d4f44)(iVar1,*(undefined4 *)(DAT_8c0d4f30 + param_1));
    piVar2 = (int *)(*(int *)(iVar1 + 0x28) + (int)DAT_8c0d4f32);
    (*(code *)piVar2[2])(iVar1 + *piVar2,param_3);
  }
  else if (param_2 == 5) {
    iVar1 = (*(code *)PTR_FUN_8c0d4f48)(0,param_1 + 0x2c,5);
    (**(code **)(*(int *)(iVar1 + 0x28) + 0x20))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0x18));
    (*(code *)PTR_FUN_8c0d4f40)(param_1,iVar1);
    *(undefined4 *)(DAT_8c0d4f36 + iVar1) = *(undefined4 *)(DAT_8c0d4f34 + param_1);
    (*(code *)PTR_FUN_8c0d4f4c)(*(undefined4 *)(DAT_8c0d4f38 + param_1));
    piVar2 = (int *)(*(int *)(iVar1 + 0x28) + (int)DAT_8c0d4f32);
    (*(code *)piVar2[2])(iVar1 + *piVar2,param_3);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

