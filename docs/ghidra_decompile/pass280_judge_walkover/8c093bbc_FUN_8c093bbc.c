// entry: 8c093bbc
// name: FUN_8c093bbc
// signature: undefined FUN_8c093bbc(void)


void FUN_8c093bbc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int unaff_r14;
  
  iVar4 = *(int *)(&stack0x00000000 + DAT_8c093cac);
  if (-1 < *(int *)(DAT_8c093cae + iVar4)) {
    if ((*(int *)(DAT_8c093cb0 + iVar4) == *(int *)(DAT_8c093cb2 + iVar4)) &&
       (*(int *)(DAT_8c093cb4 + iVar4) != 10)) {
      return;
    }
    if (*(int *)(DAT_8c093cb0 + iVar4) == *(int *)(DAT_8c093cb2 + iVar4)) goto LAB_8c093bf8;
  }
  if (*(int *)(DAT_8c093cb4 + iVar4) != 8) {
    return;
  }
LAB_8c093bf8:
  (*(code *)PTR_FUN_8c093cc4)(*(undefined4 *)(DAT_8c093cb6 + iVar4));
  (*(code *)PTR_FUN_8c093cc8)
            (*(undefined4 *)((int)DAT_8c093cb6 + *(int *)(&stack0x00000000 + DAT_8c093cac)));
  (*(code *)PTR_FUN_8c093ccc)
            (*(undefined4 *)((int)DAT_8c093cb6 + *(int *)(&stack0x00000000 + DAT_8c093cac)));
  iVar4 = *(int *)(*(int *)((int)DAT_8c093cb6 + *(int *)(&stack0x00000000 + DAT_8c093cac)) + 0x28);
  (**(code **)(iVar4 + 0x2c))
            (*(int *)((int)DAT_8c093cb6 + *(int *)(&stack0x00000000 + DAT_8c093cac)) +
             *(int *)(iVar4 + 0x24));
  iVar5 = *(int *)(&stack0x00000000 + DAT_8c093cac);
  iVar4 = *(int *)(DAT_8c093cb6 + iVar5);
  if (iVar4 != 0) {
    if (iVar4 != 0) {
      iVar5 = *(int *)(*(int *)(iVar4 + 0x28) + 0xc);
      *(undefined4 *)(&stack0x00000000 + DAT_8c093cb8) =
           *(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x14);
      pcVar3 = *(code **)(&stack0x00000000 + DAT_8c093cb8);
      *(code **)(&stack0x00000000 + DAT_8c093cba) = pcVar3;
      (*pcVar3)(iVar4 + iVar5,3);
    }
    iVar5 = *(int *)(&stack0x00000000 + DAT_8c093cac);
    *(undefined4 *)(DAT_8c093cb6 + iVar5) = 0;
  }
  if (*(int *)(DAT_8c093cbc + iVar5) != 0) {
    (*(code *)PTR_FUN_8c093cd0)(0xffffffff);
  }
  puVar1 = PTR_FUN_8c093cd4;
  *(undefined4 *)((int)DAT_8c093cb4 + *(int *)(&stack0x00000000 + DAT_8c093cac)) = 0xb;
  (*(code *)puVar1)();
  uVar2 = (*(code *)PTR_FUN_8c093cd8)(*(undefined4 *)(unaff_r14 + 4));
  puVar1 = PTR_FUN_8c093cdc;
  iVar4 = *(int *)(&stack0x00000000 + DAT_8c093cac);
  *(undefined4 *)((int)DAT_8c093cc0 + *(int *)(DAT_8c093cbe + iVar4)) = uVar2;
  *(undefined4 *)(&stack0x00000000 + DAT_8c093cc0) = *(undefined4 *)(DAT_8c093cc2 + iVar4);
  uVar2 = (*(code *)puVar1)();
  *(undefined4 *)(*(int *)(&stack0x00000000 + DAT_8c093cc0) + 0x44) = uVar2;
  return;
}

