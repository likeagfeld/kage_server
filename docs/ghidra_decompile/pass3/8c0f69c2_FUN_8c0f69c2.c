// entry: 8c0f69c2
// name: FUN_8c0f69c2
// signature: undefined FUN_8c0f69c2(void)


int FUN_8c0f69c2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_c;
  int local_8 [2];
  
  local_c = param_2;
  local_8[0] = param_1;
  (*(code *)PTR_FUN_8c0f6a84)(param_3,0,param_4);
  iVar2 = FUN_8c0f6006(local_8);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (local_8[0] == 3) {
    iVar2 = *(int *)PTR_DAT_8c0f6a88 + (int)DAT_8c0f6a7a;
    uVar4 = 0x40;
  }
  else {
    if (local_8[0] == 2) {
      iVar2 = (int)DAT_8c0f6a7c + *(int *)PTR_DAT_8c0f6a88;
    }
    else {
      iVar2 = *(int *)PTR_DAT_8c0f6a88 + 4;
    }
    iVar3 = FUN_8c0f6114(local_8[0],&local_c);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_c == 1) {
      iVar2 = iVar2 + DAT_8c0f6a7e;
    }
    else {
      if (local_8[0] == 2) {
        iVar2 = *(int *)PTR_DAT_8c0f6a88;
        sVar1 = DAT_8c0f6a80;
      }
      else {
        iVar2 = *(int *)PTR_DAT_8c0f6a88;
        sVar1 = DAT_8c0f6a82;
      }
      iVar2 = (local_c + -2) * 0x90 + iVar2 + sVar1 + 0x48;
    }
    uVar4 = 0x20;
  }
  iVar2 = FUN_8c0f63ec(param_3,iVar2,param_4,uVar4);
  return iVar2;
}

