// entry: 8c093a38
// name: FUN_8c093a38
// signature: undefined FUN_8c093a38(void)


void FUN_8c093a38(void)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c093b04)(*(undefined4 *)(&stack0x00000000 + DAT_8c093aec));
  *(undefined4 *)(&stack0x00000000 + DAT_8c093af0) =
       *(undefined4 *)((int)DAT_8c093ae0 + *(int *)(&stack0x00000000 + DAT_8c093aec));
  uVar1 = (*(code *)PTR_FUN_8c093af8)();
  *(undefined4 *)(*(int *)(&stack0x00000000 + DAT_8c093af0) + 0x44) = uVar1;
  return;
}

