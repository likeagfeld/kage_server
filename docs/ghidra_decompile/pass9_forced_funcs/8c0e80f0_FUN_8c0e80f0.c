// entry: 8c0e80f0
// name: FUN_8c0e80f0
// signature: undefined FUN_8c0e80f0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0e80f0(int param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iStack_1c;
  
  puVar5 = PTR_DAT_8c0e83a4;
  piVar1 = _DAT_8c0e8228;
  if (*param_2 == '\0') {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),_DAT_8c0e822c,param_3[1]);
    iVar3 = *piVar1;
    iVar2 = *param_3;
    iStack_1c = *(int *)(iVar3 + 0x34);
    *(int *)(iVar3 + 0x30) = iStack_1c;
    while (iStack_1c != 0) {
      if (*(int *)(iStack_1c + 0x20) == iVar2) goto LAB_8c0e8146;
      iStack_1c = *(int *)(iStack_1c + 0x24);
      *(int *)(iVar3 + 0x30) = iStack_1c;
    }
    iStack_1c = 0;
LAB_8c0e8146:
    if (iStack_1c == 0) {
      (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                 PTR_s_Unkown_GameRoom_ObjectID______ER_8c0e826c);
      (*(code *)PTR_FUN_8c0e8240)(*piVar1 + 0x3c,0,0);
    }
    else {
      iVar2 = param_3[1];
      if (iVar2 == _DAT_8c0e8230) {
        *(int *)(iStack_1c + 0x10) = param_3[2];
      }
      else if (iVar2 == _DAT_8c0e8234) {
        (*(code *)PTR_FUN_8c0e8244)();
        (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                  (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                   PTR_s_Change_RoomName_to__s_8c0e8248,iStack_1c);
      }
      else if (iVar2 == _DAT_8c0e8238) {
        iVar2 = param_3[2];
        *(int *)(iStack_1c + 0x1c) = iVar2;
        (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                  (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                   PTR_s_Change_Room_Attribute_8c0e824c,iVar2);
        puVar5 = PTR_s_________8c0e8264;
        if ((*(uint *)(iStack_1c + 0x1c) & _DAT_8c0e8250) != 0) {
          puVar5 = _DAT_8c0e8254;
        }
        puVar4 = PTR_s_OPEN_8c0e8268;
        if ((*(uint *)(iStack_1c + 0x1c) & _DAT_8c0e8258) != 0) {
          puVar4 = PTR_s_LOCKED_8c0e825c;
        }
        (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                  (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),PTR_s__s__s_8c0e8260,puVar5,
                   puVar4);
      }
      else if (iVar2 == _DAT_8c0e823c) {
        *(int *)(iStack_1c + 0x18) = param_3[2];
      }
      (*(code *)PTR_FUN_8c0e8240)(*piVar1 + 0x3c,0xe,0);
    }
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
               PTR_s_Fail_Change_GameRoom_Attribute_R_8c0e83a8);
    (*(code *)PTR_FUN_8c0e83ac)(*(int *)puVar5 + 0x3c,0xf,0);
    *(int *)(*(int *)puVar5 + 0x50) = param_3[1];
  }
  return;
}

