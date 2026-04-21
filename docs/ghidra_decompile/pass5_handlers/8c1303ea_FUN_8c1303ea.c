// entry: 8c1303ea
// name: FUN_8c1303ea
// signature: undefined FUN_8c1303ea(void)


void FUN_8c1303ea(int param_1,int param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  puVar2 = (uint *)(*(code *)PTR_FUN_8c130448)(*(undefined4 *)(param_1 + 0x2c),0);
  puVar1 = PTR_FUN_8c1305bc;
  if ((*puVar2 & DAT_8c130464) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = puVar2[2];
  }
  if (param_2 == 0) {
    uVar3 = (*(code *)PTR_FUN_8c1305b8)(*(undefined4 *)(param_1 + 0x2c),0);
    (*(code *)puVar1)(uVar3,uVar4,0);
    uVar3 = (*(code *)PTR_FUN_8c1305b8)(*(undefined4 *)(param_1 + 0x2c),1);
    (*(code *)puVar1)(uVar3,uVar4,1);
    uVar3 = (*(code *)PTR_FUN_8c1305b8)(*(undefined4 *)(param_1 + 0x2c),2);
    (*(code *)puVar1)(uVar3,uVar4,1);
  }
  else if (param_2 == 1) {
    uVar3 = (*(code *)PTR_FUN_8c1305b8)(*(undefined4 *)(param_1 + 0x2c),0);
    puVar1 = PTR_FUN_8c1305bc;
    (*(code *)PTR_FUN_8c1305bc)(uVar3,uVar4,2);
    uVar3 = (*(code *)PTR_FUN_8c1305b8)(*(undefined4 *)(param_1 + 0x2c),1);
    (*(code *)puVar1)(uVar3,uVar4,3);
    uVar3 = (*(code *)PTR_FUN_8c1305b8)(*(undefined4 *)(param_1 + 0x2c),2);
    (*(code *)puVar1)(uVar3,uVar4,3);
  }
  return;
}

