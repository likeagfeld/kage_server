// entry: 8c084a20
// name: FUN_8c084a20
// signature: undefined FUN_8c084a20(void)


undefined4 FUN_8c084a20(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          ((*(int *)(param_1 + 0x20) * param_3 + param_2) * 4 + *(int *)(DAT_8c084b12 + param_1));
}

