// entry: 8c0b9638
// name: FUN_8c0b9638
// signature: undefined FUN_8c0b9638(void)


void FUN_8c0b9638(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar1 = PTR_DAT_8c0b9698;
  puVar3 = (undefined4 *)(param_1 + DAT_8c0b9676);
  uVar4 = *(undefined4 *)(PTR_DAT_8c0b9698 + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0b9698;
  uVar2 = *(undefined4 *)(puVar1 + 8);
  puVar3[1] = uVar4;
  puVar3[2] = uVar2;
  puVar1 = PTR_FUN_8c0b969c;
  *(undefined4 *)(param_1 + 0x38) = 1;
  (*(code *)puVar1)(0,param_1 + 0x10,1);
  return;
}

