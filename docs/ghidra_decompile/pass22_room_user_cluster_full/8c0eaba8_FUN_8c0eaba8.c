// entry: 8c0eaba8
// name: FUN_8c0eaba8
// signature: undefined FUN_8c0eaba8(void)


void FUN_8c0eaba8(int param_1,char *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_2 == '\0') {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
               PTR_s_Change_Attribute_Lobby_ObjectID__8c0eacf0,*param_3);
    iVar1 = *param_3;
    iVar2 = *(int *)PTR_DAT_8c0eacf4;
    piVar3 = *(int **)(iVar2 + 0x34);
    *(int **)(iVar2 + 0x30) = piVar3;
    while (piVar3 != (int *)0x0) {
      if (*piVar3 == iVar1) goto LAB_8c0eabf2;
      piVar3 = (int *)piVar3[7];
      *(int **)(iVar2 + 0x30) = piVar3;
    }
    piVar3 = (int *)0x0;
LAB_8c0eabf2:
    if (piVar3 == (int *)0x0) {
      (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                 PTR_s_Unkown_Lobby_ObjectID______ERROR_8c0ead0c);
      (*(code *)PTR_FUN_8c0ead04)(*(int *)PTR_DAT_8c0eacf4 + 0x3c,0,0);
    }
    else {
      iVar1 = param_3[1];
      if (iVar1 == DAT_8c0eacf8) {
        piVar3[2] = param_3[2];
      }
      else if (iVar1 == DAT_8c0eacfc) {
        (*(code *)PTR_FUN_8c0ead08)();
      }
      else if (iVar1 == DAT_8c0ead00) {
        piVar3[1] = param_3[2];
      }
      (*(code *)PTR_FUN_8c0ead04)(*(int *)PTR_DAT_8c0eacf4 + 0x3c,0xe,0);
    }
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
               PTR_s_Fail_Change_Lobby_Attribute_Requ_8c0ead10);
    (*(code *)PTR_FUN_8c0ead04)(*(int *)PTR_DAT_8c0eacf4 + 0x3c,0xf,0);
    *(int *)(*(int *)PTR_DAT_8c0eacf4 + 0x50) = param_3[1];
  }
  return;
}

