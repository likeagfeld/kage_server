// entry: 8c0e91dc
// name: FUN_8c0e91dc
// signature: undefined FUN_8c0e91dc(void)


void FUN_8c0e91dc(char *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_c;
  
  iVar2 = *(int *)PTR_DAT_8c0e9230;
  if ((iVar2 != 0) && (*param_1 == '\0')) {
    iVar1 = param_2[1];
    if (iVar1 == DAT_8c0e924c) {
      (**(code **)(*(int *)(iVar2 + 0x28) + 0x68))
                (iVar2 + *(int *)(*(int *)(iVar2 + 0x28) + 0x60),
                 PTR_s_Lobby__d_have__d_Rooms__8c0e93a8,*param_2,param_2[2]);
    }
    else if (iVar1 == DAT_8c0e9250) {
      (*(code *)PTR_FUN_8c0e93a0)();
      (**(code **)(*(int *)(iVar2 + 0x28) + 0x68))
                (iVar2 + *(int *)(*(int *)(iVar2 + 0x28) + 0x60),PTR_s_Lobby__d_Name_to__s__8c0e93a4
                 ,*param_2,uStack_c);
    }
    else if (iVar1 == DAT_8c0e9254) {
      (**(code **)(*(int *)(iVar2 + 0x28) + 0x68))
                (iVar2 + *(int *)(*(int *)(iVar2 + 0x28) + 0x60),
                 PTR_s_Lobby__d_Join__d_User__8c0e9258,*param_2,param_2[2]);
    }
  }
  return;
}

