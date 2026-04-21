// entry: 8c1762e8
// name: FUN_8c1762e8
// signature: undefined FUN_8c1762e8(void)


undefined4 * FUN_8c1762e8(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_8c17634c;
  puVar3 = *(undefined4 **)(DAT_8c17634c + 4);
  if (puVar3 != (undefined4 *)0x0) {
    iVar2 = puVar3[1];
    *(int *)(DAT_8c17634c + 4) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    else {
      **(undefined4 **)(iVar1 + 4) = 0;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  }
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 1;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  return puVar3;
}

