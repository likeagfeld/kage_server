// entry: 8c0e8fa0
// name: FUN_8c0e8fa0
// signature: undefined FUN_8c0e8fa0(void)


void FUN_8c0e8fa0(char *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_8c0e90c4;
  iVar4 = *(int *)PTR_DAT_8c0e90c4;
  if (iVar4 != 0) {
    if (*param_1 == '\0') {
      (**(code **)(*(int *)(iVar4 + 0x28) + 0x68))
                (iVar4 + *(int *)(*(int *)(iVar4 + 0x28) + 0x60),
                 PTR_s_Change_Attribute_Lobby_ObjectID__8c0e90c8,*param_2);
      iVar2 = *(int *)puVar1;
      iVar5 = *param_2;
      piVar3 = *(int **)(iVar2 + 0x34);
      *(int **)(iVar2 + 0x30) = piVar3;
      while (piVar3 != (int *)0x0) {
        if (*piVar3 == iVar5) goto LAB_8c0e8ff0;
        piVar3 = (int *)piVar3[7];
        *(int **)(iVar2 + 0x30) = piVar3;
      }
      piVar3 = (int *)0x0;
LAB_8c0e8ff0:
      if (piVar3 == (int *)0x0) {
        (**(code **)(*(int *)(iVar4 + 0x28) + 0x68))
                  (iVar4 + *(int *)(*(int *)(iVar4 + 0x28) + 0x60),
                   PTR_s_Unkown_Lobby_ObjectID______ERROR_8c0e90e0);
        (*(code *)PTR_FUN_8c0e90d8)(*(int *)puVar1 + 0x3c,0,0);
      }
      else {
        iVar4 = param_2[1];
        if (iVar4 == DAT_8c0e90cc) {
          piVar3[2] = param_2[2];
        }
        else if (iVar4 == DAT_8c0e90d0) {
          (*(code *)PTR_FUN_8c0e90e4)();
        }
        else if (iVar4 == DAT_8c0e90d4) {
          piVar3[1] = param_2[2];
        }
        (*(code *)PTR_FUN_8c0e90d8)(*(int *)puVar1 + 0x3c,0xe,0);
      }
    }
    else {
      (**(code **)(*(int *)(iVar4 + 0x28) + 0x68))
                (iVar4 + *(int *)(*(int *)(iVar4 + 0x28) + 0x60),
                 PTR_s_Fail_Change_Lobby_Attribute_Requ_8c0e90dc);
      (*(code *)PTR_FUN_8c0e90d8)(*(int *)puVar1 + 0x3c,0xf,0);
      *(int *)(*(int *)puVar1 + 0x50) = param_2[1];
    }
  }
  return;
}

