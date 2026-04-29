// entry: 8c098ddc
// name: FUN_8c098ddc
// signature: undefined FUN_8c098ddc(void)


void FUN_8c098ddc(void)

{
  int iVar1;
  int unaff_r13;
  
  iVar1 = *(int *)(DAT_8c098e68 + unaff_r13);
  *(int *)(&stack0x00000000 + DAT_8c098e6a) = iVar1;
  if (iVar1 == 0) {
    FUN_8c09911c();
    return;
  }
  *(undefined4 *)(DAT_8c098e6c + unaff_r13) = 1;
  FUN_8c098cda();
  return;
}

