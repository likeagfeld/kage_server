// entry: 8c08cca8
// name: FUN_8c08cca8
// signature: undefined FUN_8c08cca8(void)


int FUN_8c08cca8(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  ushort *puVar1;
  int iVar2;
  uint extraout_fr3;
  char in_FPSCR_SZ;
  
  puVar1 = *(ushort **)(DAT_8c08cd7a + param_1);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      if ((*puVar1 & 1) == 0) break;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x3a;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  (*(code *)PTR_FUN_8c08cd88)(puVar1,param_2,param_3,1,8);
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)(puVar1 + 5) = param_4;
  if (in_FPSCR_SZ == '\0') {
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
  }
  else {
    *(ulonglong *)(puVar1 + 0xc) = (ulonglong)extraout_fr3;
  }
  return iVar2;
}

