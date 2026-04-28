// entry: 8c093ef0
// name: FUN_8c093ef0
// signature: undefined FUN_8c093ef0(void)


void FUN_8c093ef0(int param_1,ushort param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined4 *)(DAT_8c093fae + param_1) = 0;
  (*(code *)PTR_FUN_8c093fcc)(&param_2,0,4);
  iVar4 = *(int *)(&stack0x00000000 + DAT_8c093fa0);
  iVar2 = *(int *)(&stack0x00000000 + DAT_8c093fb0);
  *(int *)(DAT_8c093fb2 + iVar4) = iVar2;
  *(undefined4 *)(DAT_8c093fae + iVar4) = 0;
  if (iVar2 == 0) {
    uVar3 = 0xc;
  }
  else {
    uVar3 = 0xb;
  }
  (*(code *)PTR___bfswu_8c093fd0)(&param_2,uVar3);
  iVar2 = *(int *)(&stack0x00000000 + DAT_8c093fa0);
  param_2 = param_2 & (ushort)DAT_8c093fd4;
  if ((*(int *)(DAT_8c093fa4 + iVar2) < 0) ||
     (*(int *)(DAT_8c093fa6 + iVar2) != *(int *)(DAT_8c093fa8 + iVar2))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 **)(&stack0x00000000 + DAT_8c093fb4) = &stack0x0000000a;
  (*(code *)PTR___bfswu_8c093fd0)(uVar1);
  (*(code *)PTR___bfswu_8c093fd0)
            (*(uint *)((int)DAT_8c093fb8 + *(int *)(&stack0x00000000 + DAT_8c093fa0)) & 0xffff);
  (*(code *)PTR_FUN_8c093fd8)
            (*(undefined4 *)((int)DAT_8c093fba + *(int *)(&stack0x00000000 + DAT_8c093fa0)),&param_2
             ,4);
  return;
}

