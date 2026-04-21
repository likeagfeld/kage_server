// entry: 8c0f81a4
// name: FUN_8c0f81a4
// signature: undefined FUN_8c0f81a4(void)


undefined8 FUN_8c0f81a4(int param_1,int param_2)

{
  int iVar1;
  char in_FPSCR_SZ;
  
  *DAT_8c0f8214 = param_2;
  if (in_FPSCR_SZ == '\0') {
    param_1 = param_1 + 0x8c;
  }
  else {
    param_1 = param_1 + 200;
  }
  iVar1 = *DAT_8c0f8214;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return CONCAT44(*(undefined4 *)(param_1 + -0x50),iVar1);
}

