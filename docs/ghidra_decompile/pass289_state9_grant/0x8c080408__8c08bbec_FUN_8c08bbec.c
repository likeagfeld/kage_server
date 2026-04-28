// PTR slot:    0x8c080408
// resolved to: 8c08bbec
// containing:  FUN_8c08bbec @ 8c08bbec (size 40)
// signature: undefined FUN_8c08bbec(void)
// direct callers (refs to entry):
//   8c06ba62@FUN_8c06ba5c/8c06ba5c
//   8c07e88e@FUN_8c07e2fc/8c07e2fc
//   8c07e772@FUN_8c07e2fc/8c07e2fc
//   8c0803b8@FUN_8c07f510/8c07f510
//   8c080326@FUN_8c07f510/8c07f510
//   8c066bea@FUN_8c06691c/8c06691c
// callers via ptr slot:
//   8c080320@FUN_8c07f510/8c07f510
//   8c0803b0@FUN_8c07f510/8c07f510


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

