// entry: 8c0a8f78
// name: FUN_8c0a8f78
// signature: undefined FUN_8c0a8f78(void)


void FUN_8c0a8f78(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 uVar5;
  
  puVar1 = PTR_FUN_8c0a9034;
  uVar5 = 4;
  iVar3 = *(int *)(param_1 + 0x14);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      piVar2 = (int *)(*(code *)puVar1)(param_1,iVar4,uVar5);
      local_18 = *piVar2;
      if (*(int *)(local_18 + 0x14) == 0x20) {
        iVar3 = *(int *)(param_1 + 0x14);
        break;
      }
      iVar3 = *(int *)(param_1 + 0x14);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (iVar4 == iVar3) {
    local_18 = 0;
  }
  if (*(int *)(local_18 + 0x1c) != 0) {
    (*(code *)PTR_FUN_8c0a903c)();
    *(undefined4 *)(local_18 + 0x1c) = 0;
  }
  puVar1 = PTR_FUN_8c0a9040;
  *(int *)(local_18 + 0x18) = param_2;
  uVar5 = (*(code *)puVar1)(param_2 << 2);
  *(undefined4 *)(local_18 + 0x1c) = uVar5;
  iVar3 = 0;
  if (0 < param_2 * 2 + -1) {
    iVar3 = 0;
    do {
      *(undefined2 *)(iVar3 + *(int *)(local_18 + 0x1c)) = *(undefined2 *)(iVar3 + param_3);
      iVar4 = iVar3 + 4;
      *(undefined2 *)(iVar3 + *(int *)(local_18 + 0x1c) + 2) = *(undefined2 *)(iVar3 + param_3 + 2);
      iVar3 = iVar4;
    } while (iVar4 < param_2 * 4 + -2);
    iVar3 = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
  }
  if (iVar3 < param_2 * 2) {
    *(undefined2 *)(iVar3 * 2 + *(int *)(local_18 + 0x1c)) = *(undefined2 *)(iVar3 * 2 + param_3);
  }
  return;
}

