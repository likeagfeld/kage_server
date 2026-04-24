// entry: 8c0783f8
// name: FUN_8c0783f8
// signature: undefined FUN_8c0783f8(void)


/* WARNING: Removing unreachable block (ram,0x8c078302) */

void FUN_8c0783f8(ulonglong param_1,int param_2,undefined *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong in_dr14;
  ulonglong uVar3;
  char in_FPSCR_SZ;
  
  iVar2 = 0;
  *(undefined4 *)(&stack0x00000000 + DAT_8c0784f2) = 0;
  *(int *)(&stack0x00000000 + DAT_8c0784f4) = param_2;
  if (7 < param_2) {
    *(undefined4 *)(&stack0x00000000 + DAT_8c0784f4) = 8;
  }
  if (0 < *(int *)(&stack0x00000000 + DAT_8c0784f4)) {
    in_dr14 = in_dr14 & 0xffffffff;
    *(int *)(&stack0x00000000 + DAT_8c0784f8) = *(int *)(&stack0x00000000 + DAT_8c0784f6) + 0x3e;
    *(int *)(&stack0x00000000 + DAT_8c0784fc) =
         *(int *)(&stack0x00000000 + DAT_8c0784f6) + (int)DAT_8c0784fa;
    do {
      if (*(char *)(*(int *)(&stack0x00000000 + DAT_8c0784f8) + iVar2) != '\x03') {
        uVar3 = in_dr14;
        if (in_FPSCR_SZ == '\0') {
          uVar3 = param_1 & 0xffffffff;
        }
        param_1 = uVar3;
        (*(code *)PTR_FUN_8c078508)
                  (param_1,*(int *)(*(int *)(&stack0x00000000 + DAT_8c0784fc) + iVar2 * 4) + 0x10,4)
        ;
      }
      iVar2 = *(int *)(&stack0x00000000 + DAT_8c0784f2) + 1;
      *(int *)(&stack0x00000000 + DAT_8c0784f2) = iVar2;
    } while (iVar2 < *(int *)(&stack0x00000000 + DAT_8c0784f4));
  }
  iVar2 = *(int *)(&stack0x00000000 + DAT_8c0784fe);
  if (((-1 < iVar2) && (iVar2 < 8)) &&
     (*(char *)(iVar2 + *(int *)(&stack0x00000000 + DAT_8c0784f6) + 0x3e) != '\x03')) {
    FUN_8c0785a8();
    return;
  }
  iVar2 = *(int *)(&stack0x00000000 + DAT_8c0784fe) + 1;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  *(int *)(&stack0x00000000 + DAT_8c0784f2) = iVar2;
  if (iVar2 < 8) {
    uVar3 = in_dr14 & 0xffffffff;
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
  param_3 = PTR_s______Hyper_Rule_Update_and_Game_E_8c078350;
  if (*(int *)PTR_DAT_8c078338 != 0) {
    (*(code *)PTR_FUN_8c078340)(&stack0x0000000c,&stack0x0000000c);
    (*(code *)PTR_FUN_8c078344)(*(undefined4 *)PTR_DAT_8c078338,&stack0x0000000c);
  }
  if (*(int *)(&stack0x00000000 + DAT_8c0781c8) == 0) {
    return;
  }
  FUN_8c078354();
  return;
}

