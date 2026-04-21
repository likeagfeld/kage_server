// entry: 8c024b80
// name: FUN_8c024b80
// signature: undefined FUN_8c024b80(void)


void FUN_8c024b80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = (*(code *)PTR_FUN_8c024cb0)((int)DAT_8c024ca8);
  puVar2 = PTR_FUN_8c024cb8;
  uVar1 = DAT_8c024cb4;
  iVar4 = (int)DAT_8c024ca8;
  *(undefined4 *)(DAT_8c024caa + param_1) = uVar3;
  (*(code *)puVar2)(uVar1,iVar4);
  (*(code *)PTR_FUN_8c024cbc)(*(undefined4 *)(param_1 + 0x30),param_2);
  (*(code *)PTR_FUN_8c024cc0)(0,param_1 + 0x10,3);
  *(undefined4 *)(DAT_8c024cac + param_1) = 0;
  return;
}

