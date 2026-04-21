// entry: 8c09911c
// name: FUN_8c09911c
// signature: undefined FUN_8c09911c(void)


void FUN_8c09911c(ushort param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r13;
  
  puVar2 = PTR_FUN_8c0991d4;
  *(undefined4 *)(DAT_8c0991c0 + unaff_r13) = 0;
  (*(code *)puVar2)(&param_1,0,4);
  iVar3 = *(int *)(&stack0x00000000 + DAT_8c0991c2);
  *(int *)(DAT_8c0991c4 + unaff_r13) = iVar3;
  *(undefined4 *)(DAT_8c0991c0 + unaff_r13) = 0;
  if (iVar3 == 0) {
    uVar4 = 0xc;
  }
  else {
    uVar4 = 0xb;
  }
  (*(code *)PTR_FUN_8c0991d8)(&param_1,uVar4);
  param_1 = param_1 & (ushort)DAT_8c0991dc;
  if ((*(int *)(DAT_8c0991c6 + unaff_r13) < 0) ||
     (*(int *)(DAT_8c0991c8 + unaff_r13) != *(int *)(DAT_8c0991ca + unaff_r13))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 **)(&stack0x00000000 + DAT_8c0991cc) = &stack0x0000000a;
  (*(code *)PTR_FUN_8c0991d8)(uVar1);
  (*(code *)PTR_FUN_8c0991d8)
            (*(undefined4 *)(&stack0x00000000 + DAT_8c0991cc),
             *(uint *)(DAT_8c0991ce + unaff_r13) & 0xffff);
  (*(code *)PTR_FUN_8c0991e0)(*(undefined4 *)(DAT_8c0991d2 + unaff_r13),&param_1,4);
  FUN_8c098cda();
  return;
}

