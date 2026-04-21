// entry: 8c0e9084
// name: FUN_8c0e9084
// signature: undefined FUN_8c0e9084(void)


void FUN_8c0e9084(char *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_8c0e90c4;
  if ((iVar2 != 0) && (*param_1 == '\0')) {
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x28) + 0x68);
    (*pcVar1)(iVar2 + *(int *)(*(int *)(iVar2 + 0x28) + 0x60),PTR_s_Lobby__d__s_Created__8c0e90e8,
              *(undefined4 *)(param_2 + 0x10),param_2,pcVar1);
  }
  return;
}

