// entry: 8c099f90
// name: FUN_8c099f90
// signature: undefined FUN_8c099f90(void)


void FUN_8c099f90(int param_1)

{
  int iVar1;
  
  if (*(int *)(DAT_8c09a0ea + param_1) != 0) {
    (*(code *)PTR_FUN_8c09a110)();
    iVar1 = *(int *)(*(int *)(DAT_8c09a0ea + param_1) + 0x28);
    (**(code **)(iVar1 + 0x2c))(*(int *)(DAT_8c09a0ea + param_1) + *(int *)(iVar1 + 0x24));
    iVar1 = *(int *)(DAT_8c09a0ea + param_1);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x14))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc),3)
      ;
      *(undefined4 *)(DAT_8c09a0ea + param_1) = 0;
    }
  }
  if (*(int *)(DAT_8c09a0ec + param_1) != 0) {
    (*(code *)PTR_FUN_8c09a110)();
    iVar1 = *(int *)(*(int *)(DAT_8c09a0ec + param_1) + 0x28);
    (**(code **)(iVar1 + 0x2c))(*(int *)(DAT_8c09a0ec + param_1) + *(int *)(iVar1 + 0x24));
    iVar1 = *(int *)(DAT_8c09a0ec + param_1);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x14))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc),3)
      ;
      *(undefined4 *)(DAT_8c09a0ec + param_1) = 0;
    }
  }
  if (*(int *)(DAT_8c09a0ee + param_1) != 0) {
    (*(code *)PTR_FUN_8c09a114)();
    (*(code *)PTR_FUN_8c09a110)(*(undefined4 *)(DAT_8c09a0ee + param_1));
    iVar1 = *(int *)(*(int *)(DAT_8c09a0ee + param_1) + 0x28);
    (**(code **)(iVar1 + 0x2c))(*(int *)(DAT_8c09a0ee + param_1) + *(int *)(iVar1 + 0x24));
    iVar1 = *(int *)(DAT_8c09a0ee + param_1);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x14))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc),3)
      ;
      *(undefined4 *)(DAT_8c09a0ee + param_1) = 0;
    }
    *(undefined4 *)(DAT_8c09a0f0 + param_1) = 0;
    *(undefined4 *)(DAT_8c09a0f2 + param_1) = 0;
  }
  return;
}

