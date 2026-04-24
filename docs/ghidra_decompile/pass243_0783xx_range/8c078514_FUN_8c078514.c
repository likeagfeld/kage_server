// entry: 8c078514
// name: FUN_8c078514
// signature: undefined FUN_8c078514(void)


/* WARNING: Removing unreachable block (ram,0x8c07855a) */

void FUN_8c078514(undefined *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c07863c)(*(undefined4 *)(&stack0x00000000 + DAT_8c07862c));
  if ((iVar1 != 0) &&
     (iVar1 = *(int *)(&stack0x00000000 + DAT_8c07862c), (*(code *)PTR_FUN_8c078640)(iVar1),
     *(char *)(iVar1 + 0x30) == '\x01')) {
    param_1 = PTR_s______Hyper_Simulator_checked_Gam_8c078648;
    if (*(int *)PTR_DAT_8c078644 != 0) {
      (*(code *)PTR_FUN_8c07864c)(&stack0x0000000c,&stack0x0000000c);
      (*(code *)PTR_FUN_8c078650)(*(undefined4 *)PTR_DAT_8c078644,&stack0x0000000c);
      FUN_8c078354();
      return;
    }
    FUN_8c078354();
    return;
  }
  if (*(int *)(&stack0x00000000 + DAT_8c0781c8) == 0) {
    return;
  }
  FUN_8c078354();
  return;
}

