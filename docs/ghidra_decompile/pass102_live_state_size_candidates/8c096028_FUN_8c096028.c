// entry: 8c096028
// name: FUN_8c096028
// signature: undefined FUN_8c096028(void)


void FUN_8c096028(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r14;
  
  iVar3 = *(int *)(*(int *)(DAT_8c096164 + unaff_r14) + 0x40);
  if (iVar3 == 8) {
    (*(code *)PTR_FUN_8c096180)();
    uVar2 = (*(code *)PTR_FUN_8c096184)(*(undefined4 *)(DAT_8c096164 + unaff_r14));
    iVar3 = (*(code *)PTR_FUN_8c096188)(*(undefined4 *)(DAT_8c096164 + unaff_r14),uVar2);
    if (iVar3 != 0) {
      FUN_8c096220();
      return;
    }
    *(undefined4 *)(DAT_8c09616e + unaff_r14) = 0xd;
    *(undefined4 *)(DAT_8c096174 + unaff_r14) = 4;
    *(undefined4 *)(DAT_8c096176 + unaff_r14) = 3;
    *(undefined4 *)(DAT_8c096178 + unaff_r14) = uVar2;
  }
  else if (iVar3 == 9) {
    *(undefined4 *)(DAT_8c096166 + unaff_r14) = 0;
    if (*(int *)(DAT_8c096168 + unaff_r14) != 0) {
      (*(code *)PTR_FUN_8c09617c)();
      iVar3 = *(int *)(*(int *)(DAT_8c096168 + unaff_r14) + 0x28);
      (**(code **)(iVar3 + 0x2c))(*(int *)(DAT_8c096168 + unaff_r14) + *(int *)(iVar3 + 0x24));
      iVar3 = *(int *)(DAT_8c096168 + unaff_r14);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x28) + 0x14))
                  (iVar3 + *(int *)(*(int *)(iVar3 + 0x28) + 0xc),3);
        *(undefined4 *)(DAT_8c096168 + unaff_r14) = 0;
      }
    }
    puVar1 = PTR_FUN_8c096180;
    *(undefined4 *)(DAT_8c09616a + unaff_r14) = 0;
    *(undefined4 *)(DAT_8c09616c + unaff_r14) = 0;
    (*(code *)puVar1)(*(undefined4 *)(DAT_8c096164 + unaff_r14));
    *(undefined4 *)(DAT_8c09616e + unaff_r14) = 1;
    *(undefined4 *)((int)DAT_8c096172 + *(int *)(DAT_8c096170 + unaff_r14)) = 0;
  }
  return;
}

