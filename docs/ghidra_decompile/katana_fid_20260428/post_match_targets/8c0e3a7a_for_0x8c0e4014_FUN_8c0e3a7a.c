// query addr: 0x8c0e4014
// containing entry: 8c0e3a7a
// name: FUN_8c0e3a7a
// signature: undefined FUN_8c0e3a7a(void)
// body addrs: 64


void FUN_8c0e3a7a(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 local_4;
  
  iVar2 = (int)DAT_8c0e3b08;
  if (*(int *)PTR_DAT_8c0e3b38 != 0) {
    iVar1 = (int)DAT_8c0e3b0a + iVar2 + -4;
    puVar3 = &stack0x00000000 + iVar1 + 4;
    if (((uint)puVar3 & 3) != 0) {
      puVar3 = &stack0x00000004 + iVar1 + 4;
    }
    (*(code *)PTR__vsprintf_8c0e3b3c)
              ((int)&local_4 + iVar2,*(undefined4 *)((int)&local_4 + DAT_8c0e3b0a + iVar2),puVar3);
    (*(code *)PTR_FUN_8c0e3b40)(*(undefined4 *)PTR_DAT_8c0e3b38,(int)&local_4 + iVar2);
  }
  return;
}

