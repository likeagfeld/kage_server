// entry: 8c0a8e4e
// name: FUN_8c0a8e4e
// signature: undefined FUN_8c0a8e4e(void)


void FUN_8c0a8e4e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  code *pcVar5;
  
  puVar1 = PTR_FUN_8c0a8f10;
  pcVar5 = FUN_8c05da0e;
  iVar3 = *(int *)(param_1 + 0x14);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      piVar2 = (int *)(*(code *)puVar1)(param_1,iVar4,pcVar5);
      local_1c = *piVar2;
      if (*(int *)(local_1c + 0x14) == 8) {
        iVar3 = *(int *)(param_1 + 0x14);
        break;
      }
      iVar3 = *(int *)(param_1 + 0x14);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (iVar4 == iVar3) {
    local_1c = 0;
  }
  *(undefined4 *)(local_1c + 0x18) = param_2;
  *(undefined4 *)(local_1c + 0x1c) = param_3;
  return;
}

