// entry: 8c0e90ec
// name: FUN_8c0e90ec
// signature: undefined FUN_8c0e90ec(void)


void FUN_8c0e90ec(char *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_8c0e9230;
  if ((iVar2 != 0) && (*param_1 == '\0')) {
    pcVar1 = *(code **)(*(int *)(iVar2 + 0x28) + 0x68);
    (*pcVar1)(iVar2 + *(int *)(*(int *)(iVar2 + 0x28) + 0x60),PTR_s_Lobby__d_Deleted__8c0e9234,
              *param_2,pcVar1);
  }
  return;
}

