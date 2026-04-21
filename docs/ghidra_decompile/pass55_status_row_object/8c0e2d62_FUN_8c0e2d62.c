// entry: 8c0e2d62
// name: FUN_8c0e2d62
// signature: undefined FUN_8c0e2d62(void)


undefined4 * FUN_8c0e2d62(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar2 = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x48) = iVar2;
    if (99 < iVar2) {
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    iVar4 = (int)DAT_8c0e2de0;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    puVar1 = DAT_8c0e2de4;
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x40) + iVar4 * iVar2);
    *DAT_8c0e2de4 = *puVar3;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar3 + 1);
    puVar1[2] = (int)puVar3 + 5;
    return DAT_8c0e2de4;
  }
  return (undefined4 *)0x0;
}

