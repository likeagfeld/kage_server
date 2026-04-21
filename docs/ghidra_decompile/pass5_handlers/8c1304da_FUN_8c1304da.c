// entry: 8c1304da
// name: FUN_8c1304da
// signature: undefined FUN_8c1304da(void)


void FUN_8c1304da(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_8c1305c0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      (*(code *)PTR_FUN_8c1305c0)(*(undefined4 *)(param_1 + 0x3c),0x2d);
      (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x40),0x2d);
      *(uint *)((int)DAT_8c1305b6 + *(int *)(param_1 + 0x4c)) =
           *(uint *)((int)DAT_8c1305b6 + *(int *)(param_1 + 0x4c)) & 0xfffffffe | 1;
    }
    else {
      (*(code *)PTR_FUN_8c1305c0)(*(undefined4 *)(param_1 + 0x3c),0x2e);
      (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x40),0x2e);
      *(uint *)((int)DAT_8c1305b6 + *(int *)(param_1 + 0x4c)) =
           *(uint *)((int)DAT_8c1305b6 + *(int *)(param_1 + 0x4c)) & 0xfffffffe;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) {
      (*(code *)PTR_FUN_8c1305c0)(*(undefined4 *)(param_1 + 0x54),0x2d);
      (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x58),0x2d);
      (*(code *)puVar1)(*(undefined4 *)(param_1 + 100),0x2d);
    }
    else {
      (*(code *)PTR_FUN_8c1305c0)(*(undefined4 *)(param_1 + 0x54),0x2e);
      (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x58),0x2e);
      (*(code *)puVar1)(*(undefined4 *)(param_1 + 100),0x2e);
    }
  }
  else if (param_2 == 2) {
    if (param_3 == 0) {
      (*(code *)PTR_FUN_8c1305c0)(*(undefined4 *)(param_1 + 0x78),0x2d);
    }
    else {
      (*(code *)PTR_FUN_8c1305c0)(*(undefined4 *)(param_1 + 0x78),0x2e);
    }
  }
  return;
}

