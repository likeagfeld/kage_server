// entry: 8c079a5c
// name: FUN_8c079a5c
// signature: undefined FUN_8c079a5c(void)


undefined4 FUN_8c079a5c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x50) + param_2 * 0x10);
  puVar1[1] = param_3;
  *puVar1 = 1;
  return 1;
}

