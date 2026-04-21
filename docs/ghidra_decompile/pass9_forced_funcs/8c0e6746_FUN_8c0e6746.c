// entry: 8c0e6746
// name: FUN_8c0e6746
// signature: undefined FUN_8c0e6746(void)


void FUN_8c0e6746(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)PTR_DAT_8c0e6778;
  if (iVar3 != 0) {
    iVar1 = (*(code *)PTR_FUN_8c0e6798)(*(undefined4 *)PTR_DAT_8c0e6794);
    if ((iVar1 != 0) && (*param_1 == '\0')) {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
      iVar1 = (*(code *)PTR_FUN_8c0e68e0)(0x28);
      *(int *)(iVar3 + 0x30) = iVar1;
      if (iVar1 == 0) {
        (**(code **)(*(int *)(iVar3 + 0x28) + 0x68))
                  (iVar3 + *(int *)(*(int *)(iVar3 + 0x28) + 0x60),
                   PTR_s_Could_not_do_request_CreateRooms_8c0e68e8);
      }
      else {
        (*(code *)PTR_FUN_8c0e68e4)();
        *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x14) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x18) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x1c) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x20) = *(undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x10) = uVar2;
        *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x24) = 0;
        if (*(int *)(iVar3 + 0x34) != 0) {
          *(int *)(*(int *)(iVar3 + 0x30) + 0x24) = *(int *)(iVar3 + 0x34);
        }
        *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar3 + 0x30);
        *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + 1;
      }
    }
  }
  return;
}

