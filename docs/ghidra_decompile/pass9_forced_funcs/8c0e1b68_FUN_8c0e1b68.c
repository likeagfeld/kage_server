// entry: 8c0e1b68
// name: FUN_8c0e1b68
// signature: undefined FUN_8c0e1b68(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0e1b68(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x40);
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
               PTR_s_REQUEST__QueryLobbyRequest_in_C_8c0e1d08);
    if (*(int *)(param_1 + 0x34) != 0) {
      (*(code *)PTR_FUN_8c0e1d0c)();
      (*(code *)PTR_FUN_8c0e1d10)(*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(_DAT_8c0e1d02 + param_1) = 1;
    }
  }
  else if (iVar1 == 0x11) {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
               PTR_s_Complete_QueryLobbyRequest_____I_8c0e1d14);
    (*(code *)PTR_FUN_8c0e1d18)(*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(_DAT_8c0e1d02 + param_1) = 2;
  }
  else if (iVar1 == 0x12) {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
               PTR_s_ERROR__Faile_QueryLobbyRequest___8c0e1d1c);
    *(undefined4 *)(_DAT_8c0e1d02 + param_1) = 5;
  }
  else if (iVar1 == 0x13) {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
               PTR_s_ERROR__Can_t_Find_Any_Lobby_on_Q_8c0e1d20);
    (*(code *)PTR_FUN_8c0e1d18)(*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(_DAT_8c0e1d02 + param_1) = 2;
  }
  return;
}

