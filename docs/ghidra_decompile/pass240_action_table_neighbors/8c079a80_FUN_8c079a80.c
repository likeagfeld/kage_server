// entry: 8c079a80
// name: FUN_8c079a80
// signature: undefined FUN_8c079a80(void)


void FUN_8c079a80(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x50) + param_2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

