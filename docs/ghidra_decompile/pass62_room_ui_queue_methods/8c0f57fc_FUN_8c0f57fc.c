// entry: 8c0f57fc
// name: FUN_8c0f57fc
// signature: undefined FUN_8c0f57fc(void)


void FUN_8c0f57fc(int param_1,int param_2)

{
  if (param_2 == 0) {
    (*(code *)PTR_FUN_8c0f5944)(*(undefined4 *)(param_1 + 0x3c),1);
    if (*(int *)(param_1 + 0x54) != 0) {
      (*(code *)PTR_FUN_8c0f5948)(0);
    }
  }
  else {
    (*(code *)PTR_FUN_8c0f5944)(*(undefined4 *)(param_1 + 0x3c),2);
    if (*(int *)(param_1 + 0x54) != 0) {
      (*(code *)PTR_FUN_8c0f5948)(1);
    }
  }
  return;
}

