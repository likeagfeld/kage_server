// entry: 8c0e9eb2
// name: FUN_8c0e9eb2
// signature: undefined FUN_8c0e9eb2(void)


undefined4 FUN_8c0e9eb2(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  char in_FPSCR_SZ;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar3 = (*(code *)PTR_FUN_8c0e9fa4)
                      (*(undefined4 *)((int)DAT_8c0e9f8a + *(int *)PTR_DAT_8c0e9f90),param_2,
                       PTR_LAB_8c0e9fa0);
    if (iVar3 < 0) {
      uVar2 = 0;
    }
    else {
      (*(code *)PTR_FUN_8c0e9f9c)(param_1 + 0x3c,0x17,0);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
      }
      else {
        *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x60);
      }
      if (*(int *)(param_1 + 0x68) != 0) {
        (*(code *)PTR_FUN_8c0e9fa8)();
        (*(code *)PTR_FUN_8c0e9fac)(*(undefined4 *)(param_1 + 0x68),3);
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      uVar2 = (*(code *)PTR_FUN_8c0e9fb0)(0);
      puVar1 = PTR_FUN_8c0e9fb4;
      *(undefined4 *)(param_1 + 0x68) = uVar2;
      (*(code *)puVar1)(param_2);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

