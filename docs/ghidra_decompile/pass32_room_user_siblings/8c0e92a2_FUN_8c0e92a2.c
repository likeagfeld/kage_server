// entry: 8c0e92a2
// name: FUN_8c0e92a2
// signature: undefined FUN_8c0e92a2(void)


void FUN_8c0e92a2(char *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_8c0e93ac;
  if ((iVar1 != 0) && (*param_1 == '\0')) {
    (**(code **)(*(int *)(iVar1 + 0x28) + 0x68))
              (iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0x60),
               PTR_s_Recive_Changed_Propaty_Data_from_8c0e93b0,*param_2);
    if (*(int *)(*(int *)PTR_DAT_8c0e93ac + 0x68) != 0) {
      (*(code *)PTR_FUN_8c0e93b4)(*param_2,param_2 + 2);
    }
  }
  return;
}

