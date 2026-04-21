// entry: 8c0e1eca
// name: FUN_8c0e1eca
// signature: undefined FUN_8c0e1eca(void)


void FUN_8c0e1eca(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_8c0e1fb0)();
  if ((param_2 != 0) && (param_3 != 0)) {
    if (*(int *)(DAT_8c0e1faa + param_1) != 0) {
      (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                 PTR_s_CKageApp__Not__Resetup_User_Pro_8c0e1fb8);
      (*(code *)PTR_FUN_8c0e1fbc)(*(undefined4 *)(DAT_8c0e1faa + param_1));
    }
    iVar2 = (*(code *)PTR_FUN_8c0e1fc0)(param_2);
    *(int *)(DAT_8c0e1faa + param_1) = iVar2;
    puVar1 = PTR_FUN_8c0e1fc4;
    if (iVar2 != 0) {
      *(int *)(DAT_8c0e1fac + param_1) = param_2;
      (*(code *)puVar1)(param_3,param_2);
    }
  }
  return;
}

