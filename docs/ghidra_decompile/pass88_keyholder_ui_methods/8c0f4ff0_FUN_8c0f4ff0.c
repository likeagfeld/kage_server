// entry: 8c0f4ff0
// name: FUN_8c0f4ff0
// signature: undefined FUN_8c0f4ff0(void)


void FUN_8c0f4ff0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    (*(code *)PTR_FUN_8c0f5138)();
    iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 0x28);
    (**(code **)(iVar1 + 0x2c))(*(int *)(param_1 + 0x54) + *(int *)(iVar1 + 0x24));
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x14))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc),3)
      ;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    (*(code *)PTR_FUN_8c0f5138)();
    iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x28);
    (**(code **)(iVar1 + 0x2c))(*(int *)(param_1 + 0x58) + *(int *)(iVar1 + 0x24));
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x14))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc),3)
      ;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    (*(code *)PTR_FUN_8c0f5138)();
    iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 0x28);
    (**(code **)(iVar1 + 0x2c))(*(int *)(param_1 + 0x5c) + *(int *)(iVar1 + 0x24));
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0x14))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc),3)
      ;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  (*(code *)PTR_FUN_8c0f513c)(0,param_1 + 0x10,1);
  return;
}

