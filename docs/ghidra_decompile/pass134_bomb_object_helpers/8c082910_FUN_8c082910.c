// entry: 8c082910
// name: FUN_8c082910
// signature: undefined FUN_8c082910(void)


undefined1 FUN_8c082910(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20) * param_3 + param_2;
  iVar3 = *(int *)((*(int *)(param_1 + 0x20) * param_3 + param_2) * 4 +
                  *(int *)(DAT_8c0829bc + param_1));
  if ((iVar3 == 0) || (*(int *)(iVar3 + 8) != 2)) {
    if ((param_4 == 1) && (*(int *)(iVar4 * 4 + *(int *)(DAT_8c0829c0 + param_1)) != 0)) {
      uVar2 = 0x6a;
    }
    else if (*(int *)(iVar4 * 4 + *(int *)(DAT_8c0829be + param_1)) == 0) {
      if (*(int *)(iVar4 * 4 + *(int *)(DAT_8c0829c2 + param_1)) == 0) {
        iVar3 = *(int *)((*(int *)(param_1 + 0x20) * param_3 + param_2) * 4 +
                        *(int *)(DAT_8c0829c4 + param_1));
        if (((iVar3 == 0) || (bVar1 = *(byte *)(iVar3 + 9), (bVar1 & 0x7f) == 3)) ||
           ((bVar1 & 0x7f) == 4)) {
          uVar2 = *(undefined1 *)(iVar4 + *(int *)(DAT_8c0829e6 + param_1));
        }
        else {
          uVar2 = 0x68;
        }
      }
      else {
        uVar2 = 0x6b;
      }
    }
    else {
      uVar2 = 0x69;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

