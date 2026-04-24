// entry: 8c07826a
// name: FUN_8c07826a
// signature: undefined FUN_8c07826a(void)


/* WARNING: Removing unreachable block (ram,0x8c078302) */
/* WARNING: Removing unreachable block (ram,0x8c07837a) */

void FUN_8c07826a(ulonglong param_1,undefined *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fr15;
  ulonglong uVar5;
  char in_FPSCR_SZ;
  
  if (*(int *)(&stack0x00000000 + DAT_8c078322) != 0) {
    iVar2 = *(int *)(&stack0x00000000 + DAT_8c0783d6);
    (*(code *)PTR_FUN_8c0783e0)(iVar2);
    param_2 = PTR_s______End_Game_Play______8c0783e8;
    if (*(int *)PTR_DAT_8c0783e4 != 0) {
      (*(code *)PTR_FUN_8c0783ec)(&stack0x0000000c,&stack0x0000000c);
      (*(code *)PTR_FUN_8c0783f0)(*(undefined4 *)PTR_DAT_8c0783e4,&stack0x0000000c);
    }
    *(undefined4 *)(*(int *)((int)DAT_8c0783d8 + *(int *)(&stack0x00000000 + DAT_8c0783d6)) + 0x48)
         = 0x10;
    *(byte *)((int)DAT_8c0783da + *(int *)(&stack0x00000000 + DAT_8c0783d6)) =
         *(byte *)((int)DAT_8c0783da + *(int *)(&stack0x00000000 + DAT_8c0783d6)) &
         (byte)DAT_8c0783dc | 0x40;
    if (*(char *)(*(int *)(&stack0x00000000 + DAT_8c0783d6) + 0x30) != '\x01') {
      (*(code *)PTR_FUN_8c0783f4)(iVar2 + 0x10,0x12);
      FUN_8c078102();
      return;
    }
    FUN_8c078574();
    return;
  }
  iVar2 = *(int *)((int)DAT_8c078324 +
                  *(int *)((int)DAT_8c07831e + *(int *)(&stack0x00000000 + DAT_8c07831c)));
  *(int *)(&stack0x00000000 + DAT_8c078326) = iVar2;
  if ((-1 < iVar2) && (iVar2 < 8)) {
    FUN_8c0783f8();
    return;
  }
  iVar2 = 0;
  *(undefined4 *)(&stack0x00000000 + DAT_8c078328) = 0;
  uVar5 = (ulonglong)in_fr15;
  iVar3 = *(int *)(&stack0x00000000 + DAT_8c07831c);
  *(int *)(&stack0x00000000 + DAT_8c07832c) = iVar3 + DAT_8c07832a;
  iVar4 = 8;
  do {
    if (*(char *)(iVar3 + 0x3e + iVar2) != '\x03') {
      uVar1 = uVar5;
      if (in_FPSCR_SZ == '\0') {
        uVar1 = param_1 & 0xffffffff;
      }
      param_1 = uVar1;
      (*(code *)PTR_FUN_8c078348)
                (param_1,*(int *)(*(int *)(&stack0x00000000 + DAT_8c07832c) + iVar2 * 4) + 0x10,0xd)
      ;
    }
    iVar4 = iVar4 + -1;
    iVar2 = *(int *)(&stack0x00000000 + DAT_8c078328) + 1;
    *(int *)(&stack0x00000000 + DAT_8c078328) = iVar2;
  } while (iVar4 != 0);
  (*(code *)PTR_FUN_8c07834c)
            (*(undefined4 *)((int)DAT_8c07832e + *(int *)(&stack0x00000000 + DAT_8c07831c)),
             *(undefined4 *)(&stack0x00000000 + DAT_8c078326));
  param_2 = PTR_s______Hyper_Rule_Update_and_Game_E_8c078350;
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

