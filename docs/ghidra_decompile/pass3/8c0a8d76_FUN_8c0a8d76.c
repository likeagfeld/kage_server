// entry: 8c0a8d76
// name: FUN_8c0a8d76
// signature: undefined FUN_8c0a8d76(void)


void FUN_8c0a8d76(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_1c;
  code *pcVar6;
  
  puVar1 = PTR_FUN_8c0a8de8;
  pcVar6 = FUN_8c05d9d8;
  iVar3 = *(int *)(param_1 + 0x14);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      piVar2 = (int *)(*(code *)puVar1)(param_1,iVar5,pcVar6);
      local_1c = *piVar2;
      if (*(int *)(local_1c + 0x14) == 2) {
        iVar3 = *(int *)(param_1 + 0x14);
        break;
      }
      iVar3 = *(int *)(param_1 + 0x14);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  if (iVar5 == iVar3) {
    local_1c = 0;
  }
  uVar4 = param_2[1];
  *(undefined4 *)(local_1c + 0x18) = *param_2;
  *(undefined4 *)(local_1c + 0x1c) = uVar4;
  *(undefined4 *)(local_1c + 0x20) = param_2[2];
  uVar4 = param_3[1];
  *(undefined4 *)(local_1c + 0x24) = *param_3;
  *(undefined4 *)(local_1c + 0x28) = uVar4;
  *(undefined4 *)(local_1c + 0x2c) = param_3[2];
  return;
}

