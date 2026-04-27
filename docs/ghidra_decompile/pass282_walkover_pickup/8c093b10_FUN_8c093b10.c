// entry: 8c093b10
// name: FUN_8c093b10
// signature: undefined FUN_8c093b10(void)


void FUN_8c093b10(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&stack0x00000000 + DAT_8c093b9c);
  if (**(char **)(DAT_8c093b9e + iVar2) == '\0') {
    *(undefined4 *)((int)DAT_8c093ba2 + *(int *)(DAT_8c093ba0 + iVar2)) = 0xffffffff;
  }
  *(undefined4 *)(&stack0x00000000 + DAT_8c093ba4) = *(undefined4 *)(DAT_8c093ba0 + iVar2);
  uVar1 = (*(code *)PTR_FUN_8c093bac)();
  *(undefined4 *)(*(int *)(&stack0x00000000 + DAT_8c093ba4) + 0x44) = uVar1;
  if (*(int *)((int)DAT_8c093ba6 + *(int *)(&stack0x00000000 + DAT_8c093b9c)) == 0xb) {
    (*(code *)PTR_FUN_8c093bb0)(*(int *)(&stack0x00000000 + DAT_8c093b9c));
    (*(code *)PTR_FUN_8c093bb4)(*(undefined4 *)(&stack0x00000000 + DAT_8c093b9c));
    *(undefined4 *)(*(int *)(&stack0x00000000 + DAT_8c093b9c) + 100) = 8;
  }
  return;
}

