// entry: 8c0785a8
// name: FUN_8c0785a8
// signature: undefined FUN_8c0785a8(void)


void FUN_8c0785a8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_fr15;
  undefined4 uVar3;
  char in_FPSCR_SZ;
  
  iVar1 = *(int *)(&stack0x00000000 + DAT_8c07862c);
  uVar3 = 0;
  *(int *)(&stack0x00000000 + DAT_8c078632) = iVar1 + DAT_8c078630;
  uVar2 = in_fr15;
  if (in_FPSCR_SZ == '\0') {
    uVar2 = param_1;
  }
  (*(code *)PTR_FUN_8c078654)(*(int *)(param_2 * 4 + iVar1 + DAT_8c078630) + 0x10,0xc);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = uVar2;
  }
  (*(code *)PTR_FUN_8c07865c)
            (CONCAT44(uVar3,in_fr15),
             *(undefined4 *)
              (*(int *)(&stack0x00000000 + DAT_8c078634) * 4 +
              *(int *)(&stack0x00000000 + DAT_8c078632)));
  FUN_8c078482();
  return;
}

