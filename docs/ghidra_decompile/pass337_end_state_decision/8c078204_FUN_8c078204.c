// entry: 8c078204
// name: FUN_8c078204
// signature: undefined FUN_8c078204(void)


void FUN_8c078204(void)

{
  int iVar1;
  
  iVar1 = *(int *)(&stack0x00000000 + DAT_8c07831c);
  (*(code *)PTR_FUN_8c078330)(iVar1);
  FUN_8c077fce(*(undefined4 *)(*(int *)(DAT_8c07831e + iVar1) + 0x44));
  return;
}

