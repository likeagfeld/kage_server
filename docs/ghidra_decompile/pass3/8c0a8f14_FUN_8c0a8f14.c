// entry: 8c0a8f14
// name: FUN_8c0a8f14
// signature: undefined FUN_8c0a8f14(void)


void FUN_8c0a8f14(ulonglong param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 local_20 [8];
  undefined8 uStack_18;
  
  puVar1 = PTR_FUN_8c0a9034;
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)uStack_18);
    puVar5 = &uStack_18;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_18._0_4_ = (int)in_dr14;
  }
  else {
    puVar5 = (undefined8 *)local_20;
    uStack_18 = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = in_PR;
  iVar3 = *(int *)(param_2 + 0x14);
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = param_1 & 0xffffffff;
  }
  if (in_FPSCR_SZ == '\0') {
    param_1 = in_dr14 & 0xffffffff;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      piVar2 = (int *)(*(code *)puVar1)(param_2,iVar4);
      iVar3 = *(int *)(*piVar2 + 0x14);
      *(int *)((int)puVar5 + -8) = *piVar2;
      if (iVar3 == 0x10) {
        iVar3 = *(int *)(param_2 + 0x14);
        break;
      }
      iVar3 = *(int *)(param_2 + 0x14);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (iVar4 == iVar3) {
    *(undefined4 *)((int)puVar5 + -8) = 0;
  }
  (*(code *)PTR_FUN_8c0a9038)(param_1,*(undefined4 *)((int)puVar5 + -8),param_3);
  return;
}

