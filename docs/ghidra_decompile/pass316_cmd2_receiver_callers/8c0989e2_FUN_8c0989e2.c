// entry: 8c0989e2
// name: FUN_8c0989e2
// signature: undefined FUN_8c0989e2(void)


void FUN_8c0989e2(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (*(int *)PTR_DAT_8c098b08 != 0) {
    (*(code *)PTR_FUN_8c098b0c)(param_2);
    iVar2 = (*(code *)PTR_FUN_8c098b10)();
    if (iVar2 == 1) {
      if (*(int *)(DAT_8c098af6 + param_1) != 0) {
        (*(code *)PTR_FUN_8c098b14)(param_2);
        *(undefined4 *)(DAT_8c098af8 + param_1) = 1;
      }
    }
    else if (iVar2 == 2) {
      if (*(int *)(DAT_8c098afa + param_1) != 0) {
        (*(code *)PTR_FUN_8c098b18)(param_2);
        *(undefined4 *)(DAT_8c098afc + param_1) = 1;
      }
    }
    else if (iVar2 == 3) {
      if (*(int *)(DAT_8c098afe + param_1) != 0) {
        (*(code *)PTR_FUN_8c098b1c)(param_2);
        *(undefined4 *)(DAT_8c098b00 + param_1) = 1;
      }
    }
    else if (iVar2 == 4) {
      if (((int)*(char *)(*(int *)(DAT_8c098b02 + param_1) + 0x12) & (int)DAT_8c098b04) == 2) {
        (*(code *)PTR_FUN_8c098b20)(*(undefined4 *)(param_2 + 4),*(int *)(DAT_8c098b02 + param_1));
      }
    }
    else if (iVar2 == 5) {
      if (((int)*(char *)(*(int *)(DAT_8c098b02 + param_1) + 0x12) & (int)DAT_8c098b04) == 3) {
        (*(code *)PTR_FUN_8c098b24)(*(undefined4 *)(param_2 + 4));
      }
      else {
        (*(code *)PTR_FUN_8c098b28)(*(undefined4 *)(param_2 + 4),*(int *)(DAT_8c098b02 + param_1));
      }
    }
    else if (iVar2 == 0x1c) {
      iVar2 = (int)DAT_8c098af4;
      uVar6 = *(undefined4 *)(param_2 + 4);
      uVar5 = 0;
      bVar1 = *(byte *)(param_2 + 8);
      iVar4 = 8;
      do {
        if ((int)uVar5 < 0) {
          uVar3 = 1 >> (~uVar5 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar5 & 0x1f);
        }
        if ((bVar1 & uVar3) != 0) {
          *(char *)(uVar5 * 8 + param_1 + iVar2) = (char)uVar6;
          *(undefined4 *)(uVar5 * 8 + param_1 + iVar2 + 4) = 0;
        }
        iVar4 = iVar4 + -1;
        uVar5 = uVar5 + 1;
      } while (iVar4 != 0);
    }
  }
  return;
}

