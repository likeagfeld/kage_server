// entry: 8c07821a
// name: FUN_8c07821a
// signature: undefined FUN_8c07821a(void)


/* WARNING: Removing unreachable block (ram,0x8c07823c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c07821a(undefined *param_1)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c078334)(*(undefined4 *)(&stack0x00000000 + DAT_8c07831c));
  param_1 = PTR_s______Abort_Game_Play______8c07833c;
  if (*(int *)PTR_DAT_8c078338 != 0) {
    (*(code *)PTR_FUN_8c078340)(&stack0x0000000c,&stack0x0000000c);
    (*(code *)PTR_FUN_8c078344)(*(undefined4 *)PTR_DAT_8c078338,&stack0x0000000c);
  }
  iVar1 = *(int *)(&stack0x00000000 + DAT_8c07831c);
  *(undefined4 *)(_FUN_8c078320 + iVar1) = 1;
  (*(code *)PTR_FUN_8c078348)(0,iVar1 + 0x10,0x1e);
  if (*(int *)(&stack0x00000000 + DAT_8c0781c8) == 0) {
    return;
  }
  FUN_8c078354();
  return;
}

