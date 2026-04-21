// entry: 8c1eece4
// name: FUN_8c1eece4
// signature: undefined FUN_8c1eece4(void)


uint FUN_8c1eece4(uint param_1)

{
  return ((param_1 & 0xff) << 8 | (param_1 & 0xff00) >> 8) << 0x10 |
         ((param_1 & 0xff0000) >> 0x10) << 8 | param_1 >> 0x18;
}

