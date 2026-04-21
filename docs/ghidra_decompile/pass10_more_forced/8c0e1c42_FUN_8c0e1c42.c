// entry: 8c0e1c42
// name: FUN_8c0e1c42
// signature: undefined FUN_8c0e1c42(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0e1c42(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)PTR_LAB_8c0e1d24)(*(undefined4 *)(param_1 + 0x34));
  iVar2 = *(int *)(*(int *)(param_1 + 0x38) + 0x40);
  if (iVar2 == 2) {
    *(undefined4 *)(_DAT_8c0e1d04 + param_1) = 3;
    return;
  }
  if (iVar2 != 3) {
    if (iVar2 == 5) {
      *(undefined4 *)(_DAT_8c0e1d04 + param_1) = 0;
      return;
    }
    if (iVar2 != 6) {
      if (iVar2 == 8) {
        *(undefined4 *)(_DAT_8c0e1d04 + param_1) = 3;
        return;
      }
      if (iVar2 != 9) {
        if (iVar2 == 0x11) {
          *(undefined4 *)(_DAT_8c0e1d04 + param_1) = 2;
          return;
        }
        if (iVar2 != 0x12) {
          if (iVar2 != 0x13) {
            return;
          }
          (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                    (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                     PTR_s_ERROR__Can_t_Find_Any_GameRooms_8c0e1d2c);
          *(undefined4 *)(_DAT_8c0e1d04 + param_1) = 2;
          return;
        }
        (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                  (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                   PTR_s_ERROR__Faile_QueryRoomRequest___8c0e1d28,*puVar1);
        *(undefined4 *)(_DAT_8c0e1d04 + param_1) = 5;
        return;
      }
    }
  }
  *(undefined4 *)(_DAT_8c0e1d04 + param_1) = 5;
  return;
}

