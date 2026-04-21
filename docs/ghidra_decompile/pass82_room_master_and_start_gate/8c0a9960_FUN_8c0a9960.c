// entry: 8c0a9960
// name: FUN_8c0a9960
// signature: undefined FUN_8c0a9960(void)


uint FUN_8c0a9960(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0x27) {
    uVar1 = 0x30;
  }
  else {
    uVar1 = param_1 + 0x13U & 0xff;
  }
  return uVar1;
}

