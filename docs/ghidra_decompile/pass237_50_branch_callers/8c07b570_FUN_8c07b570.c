// entry: 8c07b570
// name: FUN_8c07b570
// signature: undefined FUN_8c07b570(void)


void FUN_8c07b570(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_38;
  int iVar9;
  
  puVar1 = PTR_FUN_8c07b6d0;
  iVar2 = (*(code *)PTR_FUN_8c07b6d0)(0x605);
  iVar6 = *(int *)(param_1 + 0x20);
  iVar3 = (*(code *)puVar1)();
  if (*(char *)(iVar6 * iVar2 + iVar3 + *(int *)(DAT_8c07b6c8 + param_1)) == '[') {
    local_38 = 0xb;
  }
  else {
    local_38 = ((int)*(char *)(param_2 + 8) & 0xfU) + 1;
  }
  (*(code *)PTR_FUN_8c07b6d4)();
  if (*(int *)(param_1 + 0x38) < (int)local_38) {
    *(uint *)(param_1 + 0x38) = local_38;
  }
  puVar1 = PTR_FUN_8c07b6d0;
  iVar2 = 0;
  iVar9 = 0;
  iVar3 = 0;
  iVar6 = 0;
  if (param_3 == 0) {
    param_3 = iVar9;
    if ((param_4 != 0) &&
       ((iVar3 = param_4, param_4 < 0 || (iVar3 = 0, iVar6 = param_4, param_4 < 1)))) {
      iVar6 = 0;
    }
  }
  else {
    iVar2 = param_3;
    if ((0 < param_3) || (iVar2 = 0, -1 < param_3)) {
      param_3 = 0;
    }
  }
  uVar8 = (uint)(param_5 == 0);
  iVar9 = (*(code *)PTR_FUN_8c07b6d0)(iVar2,param_3,iVar3,iVar6);
  iVar7 = *(int *)(param_1 + 0x20);
  iVar4 = (*(code *)puVar1)();
  puVar1 = PTR_FUN_8c07b79c;
  if (*(int *)((iVar7 * iVar9 + iVar4) * 4 + *(int *)(DAT_8c07b6cc + param_1)) == param_2) {
    iVar9 = (*(code *)PTR_FUN_8c07b79c)();
    iVar7 = *(int *)(param_1 + 0x20);
    iVar4 = (*(code *)puVar1)();
    *(undefined4 *)((iVar7 * iVar9 + iVar4) * 4 + *(int *)(DAT_8c07b798 + param_1)) = 0;
  }
  if (uVar8 < local_38) {
    do {
      iVar9 = (*(code *)PTR_FUN_8c07b6d0)();
      uVar5 = (*(code *)PTR_FUN_8c07b6d0)();
      iVar9 = FUN_8c07b7a0(param_1,param_2,iVar9 - uVar8,uVar5,iVar2);
      if (iVar9 == 0) break;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_38);
  }
  iVar2 = 1;
  if (1 < local_38) {
    do {
      iVar9 = (*(code *)PTR_FUN_8c07b6d0)();
      uVar5 = (*(code *)PTR_FUN_8c07b6d0)();
      iVar9 = FUN_8c07b7a0(param_1,param_2,iVar9 + iVar2,uVar5,param_3);
      if (iVar9 == 0) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_38);
  }
  iVar2 = 1;
  if (1 < local_38) {
    do {
      uVar5 = (*(code *)PTR_FUN_8c07b6d0)();
      iVar9 = (*(code *)PTR_FUN_8c07b79c)();
      iVar9 = FUN_8c07b7a0(param_1,param_2,uVar5,iVar9 - iVar2,iVar3);
      if (iVar9 == 0) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_38);
  }
  iVar2 = 1;
  if (1 < local_38) {
    do {
      uVar5 = (*(code *)PTR_FUN_8c07b79c)();
      iVar3 = (*(code *)PTR_FUN_8c07b79c)();
      iVar3 = FUN_8c07b7a0(param_1,param_2,uVar5,iVar3 + iVar2,iVar6);
      if (iVar3 == 0) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_38);
  }
  return;
}

