// entry: 8c0f7c18
// name: FUN_8c0f7c18
// signature: undefined FUN_8c0f7c18(void)


undefined4 FUN_8c0f7c18(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_c [2];
  
  iVar1 = (*(code *)PTR_FUN_8c0f7ce4)();
  iVar2 = (*(code *)PTR_FUN_8c0f7ce8)(local_c);
  if (iVar2 == 0) {
    uVar3 = *DAT_8c0f7cec;
    if (((uVar3 & 1) != 0) && ((local_c[0] & 4) != 0)) {
      return 1;
    }
    if (((uVar3 & 2) != 0) && (iVar1 != 0)) {
      return 0x1e;
    }
    if ((uVar3 & 4) != 0) {
      return 0x1a;
    }
    if ((uVar3 & 8) != 0) {
      return 0x12;
    }
    if (((uVar3 & 0x10) != 0) && (iVar1 == 0)) {
      return 0x1c;
    }
  }
  return 0;
}

