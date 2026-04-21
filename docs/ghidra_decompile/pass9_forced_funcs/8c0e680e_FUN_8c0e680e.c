// entry: 8c0e680e
// name: FUN_8c0e680e
// signature: undefined FUN_8c0e680e(void)


void FUN_8c0e680e(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)PTR_DAT_8c0e68ec;
  if (((iVar5 != 0) &&
      (iVar1 = (*(code *)PTR_FUN_8c0e68f4)(*(undefined4 *)PTR_DAT_8c0e68f0), iVar1 != 0)) &&
     (*param_1 == '\0')) {
    iVar1 = *(int *)(iVar5 + 0x34);
    iVar3 = *param_2;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x20) == iVar3) {
        *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(iVar1 + 0x24);
        (*(code *)PTR_FUN_8c0e68f8)();
        *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + -1;
      }
      else {
        iVar4 = *(int *)(iVar1 + 0x24);
        *(int *)(iVar5 + 0x30) = iVar4;
        while (iVar4 != 0) {
          if (*(int *)(iVar4 + 0x20) == iVar3) {
            *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
            if (*(int *)(iVar5 + 0x30) != 0) {
              (*(code *)PTR_FUN_8c0e68f8)();
              *(undefined4 *)(iVar5 + 0x30) = 0;
            }
            *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + -1;
            return;
          }
          iVar2 = *(int *)(iVar4 + 0x24);
          *(int *)(iVar5 + 0x30) = iVar2;
          iVar1 = iVar4;
          iVar4 = iVar2;
        }
      }
    }
  }
  return;
}

