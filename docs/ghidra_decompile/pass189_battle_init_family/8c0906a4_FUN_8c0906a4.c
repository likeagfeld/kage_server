// entry: 8c0906a4
// name: FUN_8c0906a4
// signature: undefined FUN_8c0906a4(void)


undefined4 FUN_8c0906a4(int param_1,int param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(*(int *)(DAT_8c0906e0 + param_1) + DAT_8c0906de * param_2);
  uVar1 = 0;
  if (((puVar2 != (ushort *)0x0) && ((*puVar2 & 1) != 0)) && (puVar2[0x1e] != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

