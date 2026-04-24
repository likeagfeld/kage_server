// entry: 8c243916
// name: FUN_8c243916
// signature: undefined FUN_8c243916(void)


void FUN_8c243916(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x61) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x3f) = 0;
    **(undefined1 **)(*(int *)(param_1 + 8) + 0x4c) = 0;
    iVar4 = 0;
    iVar3 = 8;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 6) = 0;
    do {
      *(short *)(*(int *)(param_1 + 0xc) + (int)(short)((short)iVar4 * DAT_8c243a02) + 0x7a) =
           (short)iVar2;
      (*(code *)PTR_FUN_8c243a0c)();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
    uVar1 = (undefined1)iVar2;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x50) = uVar1;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x40) = uVar1;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 1) = uVar1;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 7) = uVar1;
    iVar4 = iVar2;
    do {
      *(short *)(*(int *)(param_1 + 0xc) + (int)DAT_8c243a06 +
                 (int)(short)((short)iVar4 * DAT_8c243a02) + 2) = (short)iVar2;
      (*(code *)PTR_FUN_8c243a0c)();
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
    (*(code *)PTR_FUN_8c243a10)(*(undefined4 *)(*(int *)(param_1 + 8) + 0x4c));
    return;
  }
  return;
}

