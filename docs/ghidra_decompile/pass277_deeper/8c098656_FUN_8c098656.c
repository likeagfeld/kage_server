// entry: 8c098656
// name: FUN_8c098656
// signature: undefined FUN_8c098656(void)


void FUN_8c098656(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ushort local_14 [2];
  
  iVar2 = (int)DAT_8c0986e8;
  (*(code *)PTR_FUN_8c0986fc)((int)local_14 + iVar2,0,4);
  *(int *)(DAT_8c0986ea + param_1) = param_2;
  *(undefined4 *)(DAT_8c0986ec + param_1) = 0;
  puVar1 = PTR___bfswu_8c098700;
  if (param_2 == 0) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0xf;
  }
  (*(code *)PTR___bfswu_8c098700)(uVar3);
  *(ushort *)((int)local_14 + iVar2) = *(ushort *)((int)local_14 + iVar2) & (ushort)DAT_8c098704;
  if ((*(int *)(DAT_8c0986ee + param_1) < 0) ||
     (*(int *)(DAT_8c0986f0 + param_1) != *(int *)(DAT_8c0986f2 + param_1))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(*(undefined4 *)(DAT_8c0986f4 + param_1));
  (*(code *)PTR_FUN_8c098708)(*(undefined4 *)(DAT_8c0986f8 + param_1),(int)local_14 + iVar2,4);
  return;
}

