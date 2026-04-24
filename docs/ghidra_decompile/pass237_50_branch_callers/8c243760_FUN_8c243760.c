// entry: 8c243760
// name: FUN_8c243760
// signature: undefined FUN_8c243760(void)


void FUN_8c243760(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x40) = 0;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 1) = 0;
    iVar2 = 0;
    iVar3 = 8;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 7) = 0;
    do {
      *(short *)(*(int *)(param_1 + 0xc) + (int)DAT_8c2438a8 +
                 (int)(short)((short)iVar2 * DAT_8c2438a6) + 2) = (short)uVar1;
      (*(code *)PTR_FUN_8c2438b0)();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x59) = 1;
    (*(code *)PTR_FUN_8c2438b4)(*(undefined4 *)(*(int *)(param_1 + 8) + 0x4c));
    return;
  }
  return;
}

