// entry: 8c09104a
// name: FUN_8c09104a
// signature: undefined FUN_8c09104a(void)


void FUN_8c09104a(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint in_fr3;
  char in_FPSCR_SZ;
  
  iVar3 = *(int *)(DAT_8c091096 + param_1) + param_2 * 0x14;
  bVar1 = *(byte *)(iVar3 + 9);
  if (((bVar1 & 0x7f) != 1) && ((bVar1 & 0x7f) != 2)) {
    iVar2 = (int)DAT_8c09109a;
    *(byte *)(iVar3 + 9) = bVar1 & (byte)DAT_8c091098 | 1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    else {
      *(ulonglong *)(iVar3 + 0xc) = (ulonglong)in_fr3;
    }
    *(uint *)(param_1 + iVar2) = *(uint *)(param_1 + iVar2) | 2;
  }
  return;
}

