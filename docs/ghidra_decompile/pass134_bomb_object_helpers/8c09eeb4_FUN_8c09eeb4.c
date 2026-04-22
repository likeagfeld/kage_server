// entry: 8c09eeb4
// name: FUN_8c09eeb4
// signature: undefined FUN_8c09eeb4(void)


uint FUN_8c09eeb4(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)DAT_8c09eed4;
  uVar2 = *(int *)PTR_DAT_8c09eed8 * DAT_8c09eedc + (int)DAT_8c09eed2;
  *(uint *)PTR_DAT_8c09eed8 = uVar2;
  return uVar2 >> 0x10 & uVar1;
}

