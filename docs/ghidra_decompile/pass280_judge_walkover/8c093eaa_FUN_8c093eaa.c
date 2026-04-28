// entry: 8c093eaa
// name: FUN_8c093eaa
// signature: undefined FUN_8c093eaa(void)


void FUN_8c093eaa(void)

{
  int iVar1;
  
  iVar1 = *(int *)(&stack0x00000000 + DAT_8c093fa0);
  if ((-1 < *(int *)(DAT_8c093fa4 + iVar1)) &&
     (*(int *)(DAT_8c093fa6 + iVar1) == *(int *)(DAT_8c093fa8 + iVar1))) {
    (*(code *)PTR_FUN_8c093fc8)(*(undefined4 *)(DAT_8c093faa + iVar1));
  }
  return;
}

