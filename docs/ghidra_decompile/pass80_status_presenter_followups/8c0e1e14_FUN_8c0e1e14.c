// entry: 8c0e1e14
// name: FUN_8c0e1e14
// signature: undefined FUN_8c0e1e14(void)


void FUN_8c0e1e14(int param_1,int param_2)

{
  if ((param_2 == 1) || (param_2 == 2)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else if (param_2 != 3) goto LAB_8c0e1e2c;
  *(undefined4 *)(param_1 + 0x58) = 1;
LAB_8c0e1e2c:
  *(undefined4 *)(param_1 + 0x58) = 2;
  return;
}

