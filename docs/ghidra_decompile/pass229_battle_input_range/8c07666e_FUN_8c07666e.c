// entry: 8c07666e
// name: FUN_8c07666e
// signature: undefined FUN_8c07666e(void)


/* WARNING: Removing unreachable block (ram,0x8c07641e) */

void FUN_8c07666e(int param_1)

{
  int iVar1;
  int unaff_r8;
  
  iVar1 = (**(code **)(*(int *)(DAT_8c076696 + param_1) + 0x74))
                    (param_1 + *(int *)(*(int *)(DAT_8c076696 + param_1) + 0x6c));
  if (iVar1 != 0) {
    if (*(int *)(DAT_8c076540 + unaff_r8) == 0) {
      if (*(int *)PTR_DAT_8c076554 != 0) {
        (*(code *)PTR_FUN_8c07655c)(&stack0x0000001c,&stack0x0000001c);
        (*(code *)PTR_FUN_8c076560)(*(undefined4 *)PTR_DAT_8c076554,&stack0x0000001c);
      }
      *(undefined4 *)(DAT_8c076540 + unaff_r8) = 1;
    }
    *(undefined4 *)(*(int *)(DAT_8c076542 + unaff_r8) + 0x48) = 0x14;
  }
  return;
}

