// entry: 8c0f7aa4
// name: FUN_8c0f7aa4
// signature: undefined FUN_8c0f7aa4(void)


void FUN_8c0f7aa4(void)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0f7bd8)();
  iVar1 = FUN_8c0f7b08();
  if (iVar1 == 9) {
    if (((*DAT_8c0f7bd4 & 0x10) != 0) &&
       (iVar1 = (*(code *)PTR_FUN_8c0f7bdc)(*DAT_8c0f7bcc), iVar1 == 1)) {
      if ((*DAT_8c0f7bd4 & 1) == 0) {
        (*(code *)PTR_FUN_8c0f7be4)(*DAT_8c0f7bcc);
      }
      else {
        (*(code *)PTR_FUN_8c0f7be0)();
      }
      (*(code *)PTR_FUN_8c0f7be8)(0x14);
      (*(code *)PTR_FUN_8c0f7bec)(7);
      return;
    }
  }
  else if (iVar1 == 5) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8c0f7afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_8c0f7bf0)();
  return;
}

