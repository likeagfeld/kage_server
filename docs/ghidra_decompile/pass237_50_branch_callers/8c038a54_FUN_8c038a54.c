// entry: 8c038a54
// name: FUN_8c038a54
// signature: undefined FUN_8c038a54(void)


void FUN_8c038a54(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar3;
  code *pcVar4;
  
  pcVar4 = FUN_8c09e7e4;
  if (param_4 == 1) {
    unaff_r8 = -1;
    unaff_r10 = *(int *)(DAT_8c038b26 + param_1);
    unaff_r9 = 0;
  }
  else if (param_4 == 2) {
    unaff_r8 = 1;
    unaff_r10 = *(int *)(DAT_8c038b26 + param_1);
    unaff_r9 = 0;
  }
  else if (param_4 == 4) {
    unaff_r8 = 0;
    unaff_r10 = *(int *)(DAT_8c038b24 + param_1);
    unaff_r9 = -1;
  }
  else if (param_4 == 8) {
    unaff_r8 = 0;
    unaff_r9 = 1;
    unaff_r10 = *(int *)(DAT_8c038b24 + param_1);
  }
  iVar3 = 0;
  param_2 = param_2 + param_5 * unaff_r8;
  param_3 = param_3 + param_5 * unaff_r9;
  if (0 < unaff_r10) {
    do {
      iVar1 = *(int *)(DAT_8c038b26 + param_1);
      iVar2 = *(int *)(DAT_8c038b24 + param_1);
      if (param_2 < 0) {
        param_2 = param_2 + iVar1;
      }
      if (param_3 < 0) {
        param_3 = param_3 + iVar2;
      }
      if (iVar1 <= param_2) {
        param_2 = param_2 - iVar1;
      }
      if (iVar2 <= param_3) {
        param_3 = param_3 - iVar2;
      }
      iVar1 = (*(code *)PTR_FUN_8c038b30)
                        (*(undefined4 *)(DAT_8c038b28 + param_1),param_2,param_3,pcVar4);
      if (iVar1 != 0) break;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + unaff_r8;
      param_3 = param_3 + unaff_r9;
    } while (iVar3 < unaff_r10);
  }
  (*(code *)PTR_FUN_8c038b34)(6);
  (*(code *)PTR_FUN_8c038b34)((int)DAT_8c038b2c);
  return;
}

