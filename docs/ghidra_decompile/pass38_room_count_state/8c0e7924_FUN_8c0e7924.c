// entry: 8c0e7924
// name: FUN_8c0e7924
// signature: undefined FUN_8c0e7924(void)


int FUN_8c0e7924(int param_1,int param_2,int param_3)

{
  int in_r2;
  
  while( true ) {
    if (in_r2 == param_2) {
      return param_3;
    }
    param_3 = *(int *)(param_3 + 0x24);
    *(int *)(param_1 + 0x30) = param_3;
    if (param_3 == 0) break;
    in_r2 = *(int *)(param_3 + 0x20);
  }
  return 0;
}

