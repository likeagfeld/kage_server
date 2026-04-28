// query addr: 0x8C0E6926
// containing entry: 8c0e6926
// name: FUN_8c0e6926
// signature: undefined FUN_8c0e6926(void)
// body addrs: 234


void FUN_8c0e6926(char *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int local_14;
  
  iVar4 = *(int *)PTR_DAT_8c0e6a10;
  if ((iVar4 != 0) && (*param_1 == '\0')) {
    local_14 = *(int *)(iVar4 + 0x34);
    iVar1 = *param_2;
    *(int *)(iVar4 + 0x30) = local_14;
    while (local_14 != 0) {
      if (*(int *)(local_14 + 0x20) == iVar1) goto LAB_8c0e695c;
      local_14 = *(int *)(local_14 + 0x24);
      *(int *)(iVar4 + 0x30) = local_14;
    }
    local_14 = 0;
LAB_8c0e695c:
    if (local_14 != 0) {
      iVar1 = param_2[1];
      if (iVar1 == DAT_8c0e6a18) {
        *(int *)(local_14 + 0x10) = param_2[2];
      }
      else if (iVar1 == DAT_8c0e6a1c) {
        (*(code *)PTR___slow_strcpy_8c0e6a48)();
        (**(code **)(*(int *)(iVar4 + 0x28) + 0x68))
                  (iVar4 + *(int *)(*(int *)(iVar4 + 0x28) + 0x60),
                   PTR_s_Change_RoomName_to__s_8c0e6a4c,local_14);
      }
      else if (iVar1 == DAT_8c0e6a20) {
        iVar1 = param_2[2];
        *(int *)(local_14 + 0x1c) = iVar1;
        (**(code **)(*(int *)(iVar4 + 0x28) + 0x68))
                  (iVar4 + *(int *)(*(int *)(iVar4 + 0x28) + 0x60),
                   PTR_s_Change_Room_Attribute_8c0e6a28,iVar1);
        puVar3 = PTR_s_________8c0e6a40;
        if ((*(uint *)(local_14 + 0x1c) & DAT_8c0e6a2c) != 0) {
          puVar3 = PTR_s_Playing_8c0e6a30;
        }
        puVar2 = PTR_s_OPEN_8c0e6a44;
        if ((*(uint *)(local_14 + 0x1c) & DAT_8c0e6a34) != 0) {
          puVar2 = PTR_s_LOCKED_8c0e6a38;
        }
        (**(code **)(*(int *)(iVar4 + 0x28) + 0x68))
                  (iVar4 + *(int *)(*(int *)(iVar4 + 0x28) + 0x60),PTR_s__s__s_8c0e6a3c,puVar3,
                   puVar2);
      }
      else if (iVar1 == DAT_8c0e6a24) {
        *(int *)(local_14 + 0x18) = param_2[2];
      }
    }
  }
  return;
}

