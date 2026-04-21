// entry: 8c0e6896
// name: FUN_8c0e6896
// signature: undefined FUN_8c0e6896(void)


void FUN_8c0e6896(char *param_1,int param_2)

{
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_8;
  
  if ((*(int *)PTR_DAT_8c0e68ec != 0) && (*param_1 == '\0')) {
    iStack_8 = param_2;
    (*(code *)PTR_FUN_8c0e68e4)();
    uStack_18 = *(undefined4 *)(iStack_8 + 0x10);
    uStack_14 = *(undefined4 *)(iStack_8 + 0x14);
    if (*(int *)(*(int *)PTR_DAT_8c0e68ec + 0x68) != 0) {
      (*(code *)PTR_FUN_8c0e68fc)(auStack_28,iStack_8 + 0x18);
    }
  }
  return;
}

