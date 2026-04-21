// entry: 8c0e9196
// name: FUN_8c0e9196
// signature: undefined FUN_8c0e9196(void)


void FUN_8c0e9196(char *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_8c0e9230;
  if ((iVar1 != 0) && (*param_1 == '\0')) {
    if (*(int *)(iVar1 + 0x68) != 0) {
      (*(code *)PTR_FUN_8c0e9244)(*param_2);
    }
    (**(code **)(*(int *)(iVar1 + 0x28) + 0x68))
              (iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0x60),PTR_s_UserID__d_Leaved__8c0e9248,
               *param_2);
  }
  return;
}

