// entry: 8c0f4e7e
// name: FUN_8c0f4e7e
// signature: undefined FUN_8c0f4e7e(void)


void FUN_8c0f4e7e(uint param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar2 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar2 + -4) = in_PR;
  (*(code *)PTR_FUN_8c0f4ef8)(*(undefined4 *)(param_2 + 0x5c));
  uVar5 = (uint)in_dr14;
  (*(code *)PTR_FUN_8c0f4ee8)(*(undefined4 *)(param_2 + 0x5c));
  iVar1 = *(int *)(*(int *)(param_2 + 0x5c) + 0x28);
  (**(code **)(iVar1 + 0x2c))(*(int *)(param_2 + 0x5c) + *(int *)(iVar1 + 0x24));
  iVar1 = *(int *)(param_2 + 0x5c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x28) + 0x14))(iVar1 + *(int *)(*(int *)(iVar1 + 0x28) + 0xc),3);
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  uVar4 = (ulonglong)uVar5;
  uVar3 = uVar4;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = (ulonglong)param_1;
  }
  uVar5 = (uint)uVar3;
  (*(code *)PTR_FUN_8c0f4eec)(uVar3,param_2 + 0x10,0xb);
  if (in_FPSCR_SZ == '\0') {
    uVar4 = (ulonglong)uVar5;
  }
  (*(code *)PTR_FUN_8c0f4eec)(uVar4,*(int *)(param_2 + 0x54) + 0x10,2);
  return;
}

