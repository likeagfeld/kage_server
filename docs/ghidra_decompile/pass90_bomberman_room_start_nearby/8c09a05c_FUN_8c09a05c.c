// entry: 8c09a05c
// name: FUN_8c09a05c
// signature: undefined FUN_8c09a05c(void)


void FUN_8c09a05c(undefined4 param_1,int param_2)

{
  double dVar1;
  double dVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44(DAT_8c09a11c,*(undefined4 *)(param_2 + 0x14));
    dVar1 = (double)CONCAT44(*(undefined4 *)DAT_8c09a118,param_1);
  }
  else {
    dVar2 = (double)CONCAT44(PTR_DAT_8c09a120,DAT_8c09a11c);
    dVar1 = *DAT_8c09a118;
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / (float)((ulonglong)dVar1 >> 0x20),
                             SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 / dVar1;
  }
  if ((in_FPSCR_PR != '\0' || (float)((ulonglong)dVar2 >> 0x20) <= SUB84(dVar2,0)) &&
     ((*(uint *)(*(int *)(*(int *)PTR_DAT_8c09a120 + 0x20) + 8) & 2) != 0)) {
    (*(code *)PTR_FUN_8c09a124)();
  }
  return;
}

