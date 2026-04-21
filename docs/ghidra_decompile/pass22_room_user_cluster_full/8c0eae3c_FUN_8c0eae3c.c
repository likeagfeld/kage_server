// entry: 8c0eae3c
// name: FUN_8c0eae3c
// signature: undefined FUN_8c0eae3c(void)


void FUN_8c0eae3c(int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (*param_2 == '\0') {
    iVar1 = *(int *)(param_3 + 4);
    if (iVar1 == DAT_8c0eae88) {
      (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60));
      FUN_8c0eae5c();
      return;
    }
    if (iVar1 == DAT_8c0eae8c) {
      (*(code *)PTR_FUN_8c0eaf40)();
      (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60));
      FUN_8c0eae5c();
      return;
    }
    if (iVar1 == DAT_8c0eae90) {
      (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60));
      FUN_8c0eae5c();
      return;
    }
  }
  return;
}

