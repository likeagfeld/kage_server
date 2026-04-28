// entry: 8c093d7e
// name: FUN_8c093d7e
// signature: undefined FUN_8c093d7e(void)


void FUN_8c093d7e(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&stack0x00000000 + DAT_8c093e30);
  iVar1 = *(int *)(DAT_8c093e40 + iVar2);
  *(int *)(&stack0x00000000 + DAT_8c093e42) = iVar1;
  if (iVar1 == 0) {
    FUN_8c093ef0();
    return;
  }
  *(undefined4 *)(DAT_8c093e3e + iVar2) = 1;
  return;
}

