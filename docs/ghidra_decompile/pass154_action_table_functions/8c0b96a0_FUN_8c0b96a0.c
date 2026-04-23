// entry: 8c0b96a0
// name: FUN_8c0b96a0
// signature: undefined FUN_8c0b96a0(void)


void FUN_8c0b96a0(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_8c0b96cc;
  puVar3 = (undefined4 *)(param_1 + DAT_8c0b96ca);
  uVar4 = *(undefined4 *)(PTR_DAT_8c0b96cc + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0b96cc;
  uVar2 = *(undefined4 *)(puVar1 + 8);
  puVar3[1] = uVar4;
  puVar3[2] = uVar2;
  puVar1 = PTR_FUN_8c0b96d0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  (*(code *)puVar1)(0,param_1 + 0x10,3);
  return;
}

