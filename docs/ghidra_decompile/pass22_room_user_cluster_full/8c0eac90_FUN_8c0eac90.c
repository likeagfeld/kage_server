// entry: 8c0eac90
// name: FUN_8c0eac90
// signature: undefined FUN_8c0eac90(void)


void FUN_8c0eac90(int param_1,char *param_2,undefined4 *param_3)

{
  if (*param_2 == '\0') {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
               PTR_s_Recive_Changed_Propaty_Data_from_8c0ead14,*param_3);
    (*(code *)PTR_FUN_8c0ead18)
              (*(undefined4 *)(*(int *)PTR_DAT_8c0eacf4 + 0x68),*param_3,param_3 + 2);
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
               PTR_s_CLobby__Fail_ChangeUserPropatyC_8c0ead1c);
    *(undefined4 *)(*(int *)PTR_DAT_8c0eacf4 + 0x50) = param_3[1];
  }
  return;
}

