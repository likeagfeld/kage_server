// entry: 8c09a22e
// name: FUN_8c09a22e
// signature: undefined FUN_8c09a22e(void)


void FUN_8c09a22e(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(DAT_8c09a2a4 + param_1) = 0;
  if (*(int *)(DAT_8c09a286 + param_1) != 0) {
    (*(code *)PTR_FUN_8c09a2bc)();
    iVar1 = *(int *)(*(int *)(DAT_8c09a286 + param_1) + 0x28);
    (**(code **)(iVar1 + 0x2c))(*(int *)(DAT_8c09a286 + param_1) + *(int *)(iVar1 + 0x24));
    iVar1 = *(int *)(DAT_8c09a286 + param_1);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x14))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc),3)
      ;
      *(undefined4 *)(DAT_8c09a286 + param_1) = 0;
    }
  }
  *(undefined4 *)(DAT_8c09a2a6 + param_1) = 0;
  *(undefined4 *)(DAT_8c09a2a8 + param_1) = 0;
  return;
}

