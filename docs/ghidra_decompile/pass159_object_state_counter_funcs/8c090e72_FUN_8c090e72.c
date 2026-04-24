// entry: 8c090e72
// name: FUN_8c090e72
// signature: undefined FUN_8c090e72(void)


void FUN_8c090e72(int param_1,uint param_2,uint param_3)

{
  uint in_r2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = 8;
  do {
    if (*(char *)(uVar2 + *(int *)(param_1 + 4) + 0xe) != '\x03') {
      if (*(byte *)(uVar2 + *(int *)(param_1 + 4) + 6) == in_r2) {
        if ((int)uVar2 < 0) {
          uVar1 = 1 >> (~uVar2 & 0x1f) + 1;
        }
        else {
          uVar1 = 1 << (uVar2 & 0x1f);
        }
        param_2 = param_2 | uVar1;
        *(int *)(*(int *)(param_1 + 0xc) + uVar2 * 0x2c) =
             *(int *)(*(int *)(param_1 + 0xc) + uVar2 * 0x2c) + 1;
      }
      else {
        if ((int)uVar2 < 0) {
          uVar1 = 1 >> (~uVar2 & 0x1f) + 1;
        }
        else {
          uVar1 = 1 << (uVar2 & 0x1f);
        }
        param_3 = param_3 | uVar1;
        *(int *)(*(int *)(param_1 + 0xc) + uVar2 * 0x2c + 4) =
             *(int *)(*(int *)(param_1 + 0xc) + uVar2 * 0x2c + 4) + 1;
      }
    }
    iVar4 = iVar4 + -1;
    uVar2 = uVar2 + 1;
  } while (iVar4 != 0);
  *(uint *)((int)DAT_8c090f20 + *(int *)(param_1 + 0xc)) = param_2;
  *(uint *)((int)DAT_8c090f22 + *(int *)(param_1 + 0xc)) = param_3;
  if (in_r2 == 1) {
    *(int *)((int)DAT_8c090f26 + *(int *)(param_1 + 0xc)) =
         *(int *)((int)DAT_8c090f26 + *(int *)(param_1 + 0xc)) + 1;
  }
  else {
    *(int *)((int)DAT_8c090f28 + *(int *)(param_1 + 0xc)) =
         *(int *)((int)DAT_8c090f28 + *(int *)(param_1 + 0xc)) + 1;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(DAT_8c090f28 + iVar3);
  if (*(int *)(DAT_8c090f28 + iVar3) <= *(int *)(DAT_8c090f26 + iVar3)) {
    iVar4 = *(int *)(DAT_8c090f26 + iVar3);
  }
  *(int *)(DAT_8c090f2a + iVar3) = iVar4;
  return;
}

