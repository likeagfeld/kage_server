// entry: 8c179f26
// name: FUN_8c179f26
// signature: undefined FUN_8c179f26(void)


void FUN_8c179f26(int param_1,int param_2)

{
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -2;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 2;
  **(undefined2 **)(param_2 + 0x14) = DAT_8c179f52;
                    /* WARNING: Could not recover jumptable at 0x8c179f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x54))(param_1,0);
  return;
}

