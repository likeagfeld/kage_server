// entry: 8c079a92
// name: FUN_8c079a92
// signature: undefined FUN_8c079a92(void)


bool FUN_8c079a92(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x50) + param_2 * 0x10);
  if (param_3 < 0) {
    return *piVar1 != 0;
  }
  if (*piVar1 != 0) {
    return piVar1[1] == param_3;
  }
  return false;
}

