// entry: 8c0ea14a
// name: FUN_8c0ea14a
// signature: undefined FUN_8c0ea14a(void)


undefined4 FUN_8c0ea14a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if ((iVar2 == 0x17) || (iVar2 == 0x19)) {
    return 0;
  }
  if (iVar2 == 0x17) {
LAB_8c0ea172:
    uVar1 = 0;
  }
  else {
    if (iVar2 == 0x18) {
      (*(code *)PTR_FUN_8c0ea1d4)(param_1 + 0x3c,0,0);
    }
    else if (iVar2 == 0x19) goto LAB_8c0ea172;
    uVar1 = *(undefined4 *)(param_1 + 0x68);
  }
  return uVar1;
}

