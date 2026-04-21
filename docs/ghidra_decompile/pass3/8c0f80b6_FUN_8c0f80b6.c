// entry: 8c0f80b6
// name: FUN_8c0f80b6
// signature: undefined FUN_8c0f80b6(void)


undefined * FUN_8c0f80b6(void)

{
  int iVar1;
  
  if ((*DAT_8c0f8180 & 1) != 0) {
    iVar1 = (*(code *)PTR_FUN_8c0f8184)();
    return *(undefined **)(PTR_PTR_8c0f8188 + iVar1 * 4);
  }
  if (*PTR_DAT_8c0f818c != '\0') {
    return PTR_DAT_8c0f818c;
  }
  return (undefined *)0x0;
}

