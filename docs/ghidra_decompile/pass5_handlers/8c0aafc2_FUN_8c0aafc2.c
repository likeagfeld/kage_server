// entry: 8c0aafc2
// name: FUN_8c0aafc2
// signature: undefined FUN_8c0aafc2(void)


void FUN_8c0aafc2(uint param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar1 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar1 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar1 + -4) = in_PR;
  uVar3 = in_dr14 & 0xffffffff;
  uVar2 = (uint)in_dr14;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = param_1;
  }
  (*(code *)PTR_FUN_8c0ab010)(*(int *)(param_2 + 0x30) + 0x10,3);
  if (in_FPSCR_SZ == '\0') {
    uVar3 = (ulonglong)uVar2;
  }
  (*(code *)PTR_FUN_8c0ab010)(uVar3,param_2 + 0x10,3);
  return;
}

