// entry: 8c0e9128
// name: FUN_8c0e9128
// signature: undefined FUN_8c0e9128(void)


void FUN_8c0e9128(char *param_1,int param_2)

{
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  int local_10;
  
  local_10 = *(int *)PTR_DAT_8c0e9230;
  if ((local_10 != 0) && (*param_1 == '\0')) {
    if (*(int *)(local_10 + 0x68) != 0) {
      (*(code *)PTR_FUN_8c0e9238)();
      local_20 = *(undefined4 *)(param_2 + 0x10);
      local_1c = *(undefined4 *)(param_2 + 0x14);
      (*(code *)PTR_FUN_8c0e923c)
                (*(undefined4 *)(*(int *)PTR_DAT_8c0e9230 + 0x68),auStack_30,param_2 + 0x18);
    }
    (**(code **)(*(int *)(local_10 + 0x28) + 0x68))
              (local_10 + *(int *)(*(int *)(local_10 + 0x28) + 0x60),
               PTR_s_UserID__d_NAME__s_8c0e9240,*(undefined4 *)(param_2 + 0x10),param_2);
  }
  return;
}

