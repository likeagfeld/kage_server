// entry: 8c093b70
// name: FUN_8c093b70
// signature: undefined FUN_8c093b70(void)


void FUN_8c093b70(void)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c093bb8)(*(undefined4 *)(&stack0x00000000 + DAT_8c093b9c));
  *(undefined4 *)(&stack0x00000000 + DAT_8c093ba8) =
       *(undefined4 *)((int)DAT_8c093ba0 + *(int *)(&stack0x00000000 + DAT_8c093b9c));
  uVar1 = (*(code *)PTR_FUN_8c093bac)();
  *(undefined4 *)(*(int *)(&stack0x00000000 + DAT_8c093ba8) + 0x44) = uVar1;
  return;
}

