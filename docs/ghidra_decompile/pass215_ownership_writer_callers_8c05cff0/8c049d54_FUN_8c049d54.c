// entry: 8c049d54
// name: FUN_8c049d54
// signature: undefined FUN_8c049d54(void)


int * FUN_8c049d54(int *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = param_2;
  local_14 = param_3;
  if ((param_1 != (int *)0x0) ||
     (param_1 = (int *)(*(code *)PTR_FUN_8c049eac)(0x1c), param_1 != (int *)0x0)) {
    puVar1 = PTR_FUN_8c049e9c;
    iVar3 = 0;
    param_1[6] = (int)PTR_DAT_8c049e98;
    *param_1 = local_14;
    param_1[1] = local_18;
    iVar2 = (*(code *)puVar1)(local_18 * local_14);
    param_1[2] = iVar2;
    (*(code *)PTR_FUN_8c049ea0)(iVar2,0,param_1[1] * *param_1);
    iVar2 = (*(code *)PTR_FUN_8c049e9c)(*param_1 << 2);
    puVar1 = PTR_FUN_8c049ea0;
    param_1[3] = iVar2;
    (*(code *)puVar1)(iVar2,0,*param_1 << 2);
    iVar2 = (*(code *)PTR_FUN_8c049ea4)(0,4,*param_1);
    local_1c = param_1[2];
    param_1[4] = iVar2;
    puVar1 = PTR_FUN_8c049ea8;
    if (0 < *param_1) {
      do {
        iVar3 = iVar3 + 1;
        (*(code *)puVar1)(param_1[4],&local_1c);
        local_1c = local_1c + param_1[1];
      } while (iVar3 < *param_1);
    }
    param_1[5] = 0;
  }
  return param_1;
}

