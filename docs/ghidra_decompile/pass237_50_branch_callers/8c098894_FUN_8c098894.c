// entry: 8c098894
// name: FUN_8c098894
// signature: undefined FUN_8c098894(void)


void FUN_8c098894(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_14;
  
  iVar1 = (int)DAT_8c0989b4;
  (*(code *)PTR_FUN_8c0989c8)((int)&local_14 + iVar1,0,8);
  *(byte *)((int)&local_14 + iVar1 + 1) = *(byte *)((int)&local_14 + iVar1 + 1) & 1 | 0xe;
  *(ushort *)((int)&local_14 + iVar1) =
       *(ushort *)((int)&local_14 + iVar1) & (ushort)DAT_8c0989cc | 4;
  if ((*(int *)(DAT_8c0989b6 + param_1) < 0) ||
     (*(int *)(DAT_8c0989b8 + param_1) != *(int *)(DAT_8c0989ba + param_1))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (*(code *)PTR_FUN_8c0989d0)(uVar2);
  (*(code *)PTR_FUN_8c0989d0)(*(undefined4 *)(DAT_8c0989bc + param_1));
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = param_2;
  (*(code *)PTR_FUN_8c0989d4)(*(undefined4 *)(DAT_8c0989c0 + param_1),(int)&local_14 + iVar1,8);
  return;
}

