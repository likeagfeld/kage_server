// entry: 8c0f7fd2
// name: FUN_8c0f7fd2
// signature: undefined FUN_8c0f7fd2(void)


void FUN_8c0f7fd2(void)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = DAT_8c0f802c;
  puVar1 = PTR_FUN_8c0f8028;
  iVar3 = FUN_8c0f7b08();
  if (iVar3 == 6) {
    if ((*puVar2 & 1) == 0) {
      (*(code *)PTR_FUN_8c0f816c)(*DAT_8c0f8168);
      *DAT_8c0f8170 = 0xffffffff;
    }
    else {
      (*(code *)PTR_FUN_8c0f815c)(DAT_8c0f8158,DAT_8c0f8154);
      (*(code *)PTR_FUN_8c0f8164)(DAT_8c0f8160);
    }
    (*(code *)puVar1)(0x12);
  }
  else {
    if (iVar3 == 8) {
      (*(code *)puVar1)(0x12);
LAB_8c0f80a0:
      (*(code *)PTR_FUN_8c0f817c)(*DAT_8c0f8174);
      return;
    }
    if (iVar3 != 9) {
      return;
    }
    (*(code *)puVar1)(0x13);
    if (*puVar2 != 1) {
      if ((*puVar2 & 0x20) == 0) {
        (*(code *)PTR_FUN_8c0f8178)(8);
        goto LAB_8c0f80a0;
      }
      (*(code *)PTR_FUN_8c0f815c)(*DAT_8c0f8174,DAT_8c0f8154);
    }
  }
  (*(code *)PTR_FUN_8c0f8178)(7);
  return;
}

