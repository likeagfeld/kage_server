// entry: 8c0f67d6
// name: FUN_8c0f67d6
// signature: undefined FUN_8c0f67d6(void)


int FUN_8c0f67d6(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int local_18 [2];
  
  *param_2 = 0;
  local_18[0] = param_1;
  iVar1 = FUN_8c0f6006(local_18);
  if (iVar1 == 0) {
    if ((local_18[0] == 1) || (local_18[0] == 4)) {
      iVar2 = (int)DAT_8c0f685c;
    }
    else if (local_18[0] == 2) {
      iVar2 = (int)DAT_8c0f685e;
    }
    else {
      if (local_18[0] != 3) {
        return -3;
      }
      iVar2 = (int)DAT_8c0f6860;
    }
    (*(code *)PTR_FUN_8c0f6864)(param_2,iVar2 + *(int *)PTR_DAT_8c0f6868,4);
  }
  return iVar1;
}

