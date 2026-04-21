// entry: 8c093fdc
// name: FUN_8c093fdc
// signature: undefined FUN_8c093fdc(void)


void FUN_8c093fdc(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)PTR_DAT_8c094114;
  if (iVar6 != 0) {
    (*(code *)PTR_FUN_8c094118)(param_1);
    iVar2 = (*(code *)PTR_FUN_8c09411c)();
    if (iVar2 == 1) {
      if (*(int *)(DAT_8c09410e + iVar6) != 0) {
        (*(code *)PTR_FUN_8c094134)(param_1);
        *(undefined4 *)(DAT_8c094110 + iVar6) = 1;
      }
    }
    else if (iVar2 == 2) {
      if (*(int *)(DAT_8c09410a + iVar6) != 0) {
        (*(code *)PTR_FUN_8c094130)(param_1);
        *(undefined4 *)(DAT_8c09410c + iVar6) = 1;
      }
    }
    else if (iVar2 == 3) {
      if (*(int *)(DAT_8c094106 + iVar6) != 0) {
        (*(code *)PTR_FUN_8c09412c)(param_1);
        *(undefined4 *)(DAT_8c094108 + iVar6) = 1;
      }
    }
    else if (iVar2 == 4) {
      if (((int)*(char *)(*(int *)(DAT_8c094102 + iVar6) + 0x12) & (int)DAT_8c094104) == 2) {
        (*(code *)PTR_FUN_8c094128)(*(undefined4 *)(param_1 + 4),*(int *)(DAT_8c094102 + iVar6));
      }
    }
    else if (iVar2 == 5) {
      if (((int)*(char *)(*(int *)(DAT_8c094102 + iVar6) + 0x12) & (int)DAT_8c094104) == 3) {
        (*(code *)PTR_FUN_8c094120)(*(undefined4 *)(param_1 + 4));
      }
      else {
        (*(code *)PTR_FUN_8c094124)(*(undefined4 *)(param_1 + 4),*(int *)(DAT_8c094102 + iVar6));
      }
    }
    else if (iVar2 == 0x1c) {
      bVar1 = *(byte *)(param_1 + 8);
      uVar4 = 0;
      iVar7 = (int)DAT_8c094100;
      iVar2 = 8;
      uVar5 = *(undefined4 *)(param_1 + 4);
      do {
        if ((int)uVar4 < 0) {
          uVar3 = 1 >> (~uVar4 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar4 & 0x1f);
        }
        if ((bVar1 & uVar3) != 0) {
          *(char *)(uVar4 * 8 + iVar6 + iVar7) = (char)uVar5;
          *(undefined4 *)(uVar4 * 8 + iVar6 + iVar7 + 4) = 0;
        }
        iVar2 = iVar2 + -1;
        uVar4 = uVar4 + 1;
      } while (iVar2 != 0);
    }
  }
  return;
}

