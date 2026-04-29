// entry: 8c078482
// name: FUN_8c078482
// signature: undefined FUN_8c078482(void)


/* WARNING: Removing unreachable block (ram,0x8c078302) */

void FUN_8c078482(ulonglong param_1,undefined *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint in_fr15;
  ulonglong uVar3;
  char in_FPSCR_SZ;
  
  iVar2 = *(int *)(&stack0x00000000 + DAT_8c0784fe) + 1;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  *(int *)(&stack0x00000000 + DAT_8c0784f2) = iVar2;
  if (iVar2 < 8) {
    uVar3 = (ulonglong)in_fr15;
    *(int *)(&stack0x00000000 + DAT_8c078500) = *(int *)(&stack0x00000000 + DAT_8c0784f6) + 0x3e;
    *(int *)(&stack0x00000000 + DAT_8c078502) =
         *(int *)(&stack0x00000000 + DAT_8c0784f6) + (int)DAT_8c0784fa;
    do {
      if (*(char *)(*(int *)(&stack0x00000000 + DAT_8c078500) + iVar2) != '\x03') {
        uVar1 = uVar3;
        if (in_FPSCR_SZ == '\0') {
          uVar1 = param_1 & 0xffffffff;
        }
        param_1 = uVar1;
        (*(code *)PTR_FUN_8c078654)
                  (param_1,*(int *)(*(int *)(&stack0x00000000 + DAT_8c07862e) + iVar2 * 4) + 0x10,4)
        ;
      }
      iVar2 = *(int *)(&stack0x00000000 + DAT_8c0784f2) + 1;
      *(int *)(&stack0x00000000 + DAT_8c0784f2) = iVar2;
    } while (iVar2 < 8);
  }
  (*(code *)PTR_FUN_8c07834c)
            (*(undefined4 *)((int)DAT_8c07832e + *(int *)(&stack0x00000000 + DAT_8c07831c)),
             *(undefined4 *)(&stack0x00000000 + DAT_8c078326));
  param_2 = PTR_s______Hyper_Rule_Update_and_Game_E_8c078350;
  if (*(int *)PTR_DAT_8c078338 != 0) {
    (*(code *)PTR__vsprintf_8c078340)(&stack0x0000000c,&stack0x0000000c);
    (*(code *)PTR_FUN_8c078344)(*(undefined4 *)PTR_DAT_8c078338,&stack0x0000000c);
  }
  if (*(int *)(&stack0x00000000 + DAT_8c0781c8) == 0) {
    return;
  }
  FUN_8c078354();
  return;
}

