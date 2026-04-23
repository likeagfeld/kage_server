// entry: 8c018554
// name: FUN_8c018554
// signature: undefined FUN_8c018554(void)


void FUN_8c018554(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)DAT_8c018592;
  (*(code *)PTR_FUN_8c0185ac)(0,param_1 + iVar2 + 0x30);
  uVar1 = (*(code *)PTR_FUN_8c0185b0)
                    (*(undefined4 *)((int)DAT_8c018596 + *(int *)(DAT_8c018594 + param_1)),2,1);
  *(undefined4 *)(param_1 + iVar2 + 0x54) = uVar1;
  return;
}

