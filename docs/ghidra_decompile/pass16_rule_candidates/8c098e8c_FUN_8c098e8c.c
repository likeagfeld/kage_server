// entry: 8c098e8c
// name: FUN_8c098e8c
// signature: undefined FUN_8c098e8c(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c098e8c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int unaff_r13;
  int unaff_r14;
  
  if (-1 < *(int *)(_DAT_8c098f8a + unaff_r13)) {
    if ((*(int *)(_DAT_8c098f8c + unaff_r13) == *(int *)(_DAT_8c098f8e + unaff_r13)) &&
       (*(int *)(_DAT_8c098f90 + unaff_r13) != 10)) {
      return;
    }
    if (*(int *)(_DAT_8c098f8c + unaff_r13) == *(int *)(_DAT_8c098f8e + unaff_r13))
    goto LAB_8c098ebc;
  }
  if (*(int *)(_DAT_8c098f90 + unaff_r13) != 8) {
    return;
  }
LAB_8c098ebc:
  (*(code *)PTR_FUN_8c098fa8)(*(undefined4 *)(_DAT_8c098f92 + unaff_r13));
  (*(code *)PTR_FUN_8c098fac)(*(undefined4 *)(_DAT_8c098f92 + unaff_r13));
  (*(code *)PTR_FUN_8c098fb0)(*(undefined4 *)(_DAT_8c098f92 + unaff_r13));
  iVar3 = *(int *)(*(int *)(_DAT_8c098f92 + unaff_r13) + 0x28);
  (**(code **)(iVar3 + 0x2c))(*(int *)(_DAT_8c098f92 + unaff_r13) + *(int *)(iVar3 + 0x24));
  iVar3 = *(int *)(_DAT_8c098f92 + unaff_r13);
  if (iVar3 != 0) {
    if (iVar3 != 0) {
      iVar5 = *(int *)(*(int *)(iVar3 + 0x28) + 0xc);
      *(undefined4 *)(&stack0x00000000 + _DAT_8c098f94) =
           *(undefined4 *)(*(int *)(iVar3 + 0x28) + 0x14);
      pcVar4 = *(code **)(&stack0x00000000 + _DAT_8c098f94);
      *(code **)(&stack0x00000000 + _DAT_8c098f96) = pcVar4;
      (*pcVar4)(iVar3 + iVar5,3);
    }
    *(undefined4 *)(_DAT_8c098f92 + unaff_r13) = 0;
  }
  if (*(int *)(_DAT_8c098f98 + unaff_r13) != 0) {
    (*(code *)PTR_FUN_8c098fb4)(0xffffffff);
  }
  puVar1 = PTR_FUN_8c098fb8;
  *(undefined4 *)(_DAT_8c098f90 + unaff_r13) = 0xb;
  (*(code *)puVar1)();
  uVar2 = (*(code *)PTR_FUN_8c098fbc)(*(undefined4 *)(unaff_r14 + 4));
  puVar1 = PTR_FUN_8c098fc0;
  *(undefined4 *)((int)_DAT_8c098f9c + *(int *)(_DAT_8c098f9a + unaff_r13)) = uVar2;
  *(undefined4 *)(&stack0x00000000 + _DAT_8c098fa0) = *(undefined4 *)(_DAT_8c098f9e + unaff_r13);
  uVar2 = (*(code *)puVar1)();
  *(undefined4 *)(*(int *)(&stack0x00000000 + _DAT_8c098fa0) + 0x44) = uVar2;
  return;
}

