// entry: 8c079458
// name: FUN_8c079458
// signature: undefined FUN_8c079458(void)


void FUN_8c079458(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 local_4;
  
  iVar2 = (int)DAT_8c0794ec;
  if (*(int *)PTR_DAT_8c079514 != 0) {
    iVar1 = (int)DAT_8c0794ee + iVar2 + -4;
    puVar3 = &stack0x00000000 + iVar1 + 4;
    if (((uint)puVar3 & 3) != 0) {
      puVar3 = &stack0x00000004 + iVar1 + 4;
    }
    (*(code *)PTR_FUN_8c079518)
              ((int)&local_4 + iVar2,*(undefined4 *)((int)&local_4 + DAT_8c0794ee + iVar2),puVar3);
    (*(code *)PTR_FUN_8c07951c)(*(undefined4 *)PTR_DAT_8c079514,(int)&local_4 + iVar2);
  }
  return;
}

