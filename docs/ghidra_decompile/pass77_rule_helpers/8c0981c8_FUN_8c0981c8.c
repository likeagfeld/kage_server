// entry: 8c0981c8
// name: FUN_8c0981c8
// signature: undefined FUN_8c0981c8(void)


void FUN_8c0981c8(int param_1)

{
  int iVar1;
  undefined2 local_8;
  byte bStack_5;
  
  iVar1 = (int)DAT_8c098252;
  if ((-1 < *(int *)(DAT_8c098254 + param_1)) &&
     (*(int *)(DAT_8c098256 + param_1) == *(int *)(DAT_8c098258 + param_1))) {
    (*(code *)PTR_FUN_8c098270)((int)&local_8 + iVar1,0,0xd);
    *(byte *)((int)&local_8 + iVar1 + 1) = *(byte *)((int)&local_8 + iVar1 + 1) & 1 | 0xe;
    *(ushort *)((int)&local_8 + iVar1) =
         *(ushort *)((int)&local_8 + iVar1) & (ushort)DAT_8c098278 | 9;
    (&bStack_5)[iVar1] = (&bStack_5)[iVar1] & 0x7f | (byte)DAT_8c09825a;
    (*(code *)PTR_FUN_8c098274)(*(undefined4 *)(DAT_8c09825e + param_1));
    (*(code *)PTR_FUN_8c09827c)(&stack0xfffffffc + iVar1,*(undefined4 *)(DAT_8c098260 + param_1),9);
    (*(code *)PTR_FUN_8c098280)(*(undefined4 *)(DAT_8c09824c + param_1),(int)&local_8 + iVar1,0xd);
  }
  return;
}

