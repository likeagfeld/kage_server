// entry: 8c0246c4
// name: FUN_8c0246c4
// signature: undefined FUN_8c0246c4(void)


void FUN_8c0246c4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x30) + 0x2c);
  if (((uVar1 & 0x20) == 0) && ((uVar1 & 0x40) == 0)) {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x2c))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x24));
  }
  return;
}

