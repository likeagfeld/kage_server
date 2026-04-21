// entry: 8c131654
// name: FUN_8c131654
// signature: undefined FUN_8c131654(void)


void FUN_8c131654(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c131720)(*(undefined4 *)(param_1 + 0x48),0);
  uVar2 = *(uint *)(DAT_8c13170c + iVar1) & 0xfffffffe;
  *(uint *)(DAT_8c13170c + iVar1) = uVar2;
  if (param_2 == 0) {
    *(uint *)(DAT_8c13170c + iVar1) = uVar2 | 1;
  }
  return;
}

