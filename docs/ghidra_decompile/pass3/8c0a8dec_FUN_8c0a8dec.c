// entry: 8c0a8dec
// name: FUN_8c0a8dec
// signature: undefined FUN_8c0a8dec(void)


void FUN_8c0a8dec(undefined4 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  double dVar7;
  undefined8 in_dr14;
  double dVar8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_18;
  
  puVar1 = PTR_FUN_8c0a8f10;
  uVar6 = (undefined4)param_3;
  if (in_FPSCR_SZ == '\0') {
    puVar5 = (undefined8 *)((int)&local_18 + 4);
    local_18 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_18);
  }
  else {
    puVar5 = &local_18;
    local_18 = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = in_PR;
  iVar3 = *(int *)(param_4 + 0x14);
  if (in_FPSCR_SZ == '\0') {
    param_2 = (undefined4)in_dr14;
  }
  dVar8 = (double)CONCAT44(param_1,param_2);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      piVar2 = (int *)(*(code *)puVar1)(param_4,iVar4);
      uVar6 = (undefined4)param_3;
      iVar3 = *(int *)(*piVar2 + 0x14);
      *(int *)((int)puVar5 + -8) = *piVar2;
      if (iVar3 == 4) {
        iVar3 = *(int *)(param_4 + 0x14);
        break;
      }
      iVar3 = *(int *)(param_4 + 0x14);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (iVar4 == iVar3) {
    *(undefined4 *)((int)puVar5 + -8) = 0;
  }
  iVar3 = *(int *)((int)puVar5 + -8);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(iVar3 + 8),uVar6);
  }
  else {
    dVar7 = *(double *)(iVar3 + 8);
  }
  *(undefined4 *)(iVar3 + 0x18) = param_5;
  if (in_FPSCR_PR == '\0') {
    iVar4 = (int)((float)((ulonglong)dVar8 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar8 * dVar7);
  }
  *(int *)(iVar3 + 0x1c) = iVar4;
  return;
}

