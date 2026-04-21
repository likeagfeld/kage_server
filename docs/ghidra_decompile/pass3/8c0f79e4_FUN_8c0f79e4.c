// entry: 8c0f79e4
// name: FUN_8c0f79e4
// signature: undefined FUN_8c0f79e4(void)


void FUN_8c0f79e4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_8c0f7b94;
  if (*(int *)PTR_DAT_8c0f7b90 == 0) {
    *(undefined4 *)PTR_DAT_8c0f7b90 = 1;
    puVar3 = DAT_8c0f7bac;
    puVar2 = PTR_LAB_8c0f7b98;
    *puVar1 = PTR_LAB_8c0f7b98;
    puVar4 = DAT_8c0f7bb4;
    *DAT_8c0f7b9c = puVar2;
    *DAT_8c0f7ba0 = puVar2;
    *DAT_8c0f7ba4 = puVar2;
    *DAT_8c0f7ba8 = puVar2;
    puVar1 = DAT_8c0f7bb0;
    *puVar3 = 0;
    *puVar1 = param_1;
    puVar3 = DAT_8c0f7bbc;
    puVar1 = DAT_8c0f7bb8;
    *puVar4 = 0;
    puVar2 = PTR_FUN_8c0f7bc0;
    *puVar1 = 0;
    *puVar3 = 0;
    (*(code *)puVar2)(0);
    return;
  }
  return;
}

