// entry: 8c0f4f94
// name: FUN_8c0f4f94
// signature: undefined FUN_8c0f4f94(void)


undefined4 FUN_8c0f4f94(uint param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  ulonglong uVar3;
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar1 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar1 + -4) = in_PR;
  uVar4 = in_dr14 & 0xffffffff;
  (*(code *)PTR_FUN_8c0f4fe8)(*(undefined4 *)(param_2 + 0x54),1);
  uVar3 = uVar4;
  if (in_FPSCR_SZ == '\0') {
    uVar3 = (ulonglong)param_1;
  }
  uVar2 = (uint)uVar3;
  (*(code *)PTR_FUN_8c0f4fec)(uVar3,*(int *)(param_2 + 0x54) + 0x10,2);
  if (in_FPSCR_SZ == '\0') {
    uVar4 = (ulonglong)uVar2;
  }
  (*(code *)PTR_FUN_8c0f4fec)(uVar4,param_2 + 0x10,0xb);
  return *(undefined4 *)(DAT_8c0f4fd0 + param_2);
}

