// entry: 8c08bbec
// name: FUN_8c08bbec
// signature: undefined FUN_8c08bbec(void)


bool FUN_8c08bbec(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = (*(code *)PTR_FUN_8c08bc84)();
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      uVar2 = CONCAT44(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(iVar1 + 0xc));
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
    }
    bVar3 = in_FPSCR_PR == '\0' && (float)uVar2 < (float)((ulonglong)uVar2 >> 0x20);
  }
  return bVar3;
}

