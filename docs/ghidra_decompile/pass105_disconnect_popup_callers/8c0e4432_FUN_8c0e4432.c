// entry: 8c0e4432
// name: FUN_8c0e4432
// signature: undefined FUN_8c0e4432(void)


undefined2 FUN_8c0e4432(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  uVar1 = DAT_8c0e446a;
  if ((iVar2 != 1) && (iVar2 != 0x11)) {
    if ((iVar2 == 0x1c) || (iVar2 == 0x1e)) {
      uVar1 = 3;
    }
    else if (iVar2 != 0x21) {
      uVar1 = 6;
    }
  }
  return uVar1;
}

