// entry: 8c095da8
// name: FUN_8c095da8
// signature: undefined FUN_8c095da8(void)


void FUN_8c095da8(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r14;
  
  iVar3 = *(int *)(*(int *)(DAT_8c095ec0 + unaff_r14) + 0x40);
  if (iVar3 == 3) {
    *(undefined4 *)(DAT_8c095ece + unaff_r14) = 0;
    if (*(int *)(DAT_8c095ed0 + unaff_r14) != 0) {
      (*(code *)PTR_FUN_8c095ef0)();
      iVar3 = *(int *)(*(int *)(DAT_8c095ed0 + unaff_r14) + 0x28);
      (**(code **)(iVar3 + 0x2c))(*(int *)(DAT_8c095ed0 + unaff_r14) + *(int *)(iVar3 + 0x24));
      iVar3 = *(int *)(DAT_8c095ed0 + unaff_r14);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x28) + 0x14))
                  (iVar3 + *(int *)(*(int *)(iVar3 + 0x28) + 0xc),3);
        *(undefined4 *)(DAT_8c095ed0 + unaff_r14) = 0;
      }
    }
    puVar1 = PTR_FUN_8c095edc;
    *(undefined4 *)(DAT_8c095ed2 + unaff_r14) = 0;
    *(undefined4 *)(DAT_8c095ed4 + unaff_r14) = 0;
    (*(code *)puVar1)(*(undefined4 *)(DAT_8c095ec0 + unaff_r14));
    *(undefined4 *)(DAT_8c095ec2 + unaff_r14) = 1;
    *(undefined4 *)((int)DAT_8c095ed8 + *(int *)(DAT_8c095ed6 + unaff_r14)) = 0;
  }
  else if (iVar3 == 8) {
    (*(code *)PTR_FUN_8c095edc)();
    uVar2 = (*(code *)PTR_FUN_8c095ee0)(*(undefined4 *)(DAT_8c095ec0 + unaff_r14));
    iVar3 = (*(code *)PTR_FUN_8c095ee4)(*(undefined4 *)(DAT_8c095ec0 + unaff_r14),uVar2);
    if (iVar3 != 0) {
      FUN_8c09622a();
      return;
    }
    *(undefined4 *)(DAT_8c095ec2 + unaff_r14) = 0xd;
    *(undefined4 *)(DAT_8c095ec4 + unaff_r14) = 4;
    *(undefined4 *)(DAT_8c095ec6 + unaff_r14) = 3;
    *(undefined4 *)(DAT_8c095ec8 + unaff_r14) = uVar2;
  }
  return;
}

