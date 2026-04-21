// entry: 8c0f4e64
// name: FUN_8c0f4e64
// signature: undefined FUN_8c0f4e64(void)


void FUN_8c0f4e64(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_8c0f4ee6 + param_1) & 0xfffffffb;
  *(uint *)(DAT_8c0f4ee6 + param_1) = uVar1;
  if (param_2 != 0) {
    *(uint *)(DAT_8c0f4ee6 + param_1) = uVar1 | 4;
  }
  return;
}

