// entry: 8c078098
// name: FUN_8c078098
// signature: undefined FUN_8c078098(void)


/* WARNING: Removing unreachable block (ram,0x8c0780e0) */

void FUN_8c078098(undefined *param_1)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r12;
  int unaff_r13;
  int unaff_r14;
  int iVar3;
  
  do {
    do {
      unaff_r14 = unaff_r14 + -1;
      uVar1 = *(int *)((int)&param_1 + (int)DAT_8c0781c2) + 1;
      *(uint *)((int)&param_1 + (int)DAT_8c0781c2) = uVar1;
      if (unaff_r14 == 0) {
        iVar3 = *(int *)((int)&param_1 + (int)DAT_8c0781c4);
        param_1 = PTR_s_DeadManBit____ld_8c0781d4;
        (*(code *)PTR_FUN_8c0781d8)(iVar3);
        (*DAT_8c0781dc)(*(undefined4 *)(DAT_8c0781c6 + iVar3));
        (*(code *)PTR_FUN_8c0781e0)(*(undefined4 *)(DAT_8c0781c6 + iVar3));
        if (*(int *)PTR_DAT_8c0781e4 != 0) {
          (*(code *)PTR_FUN_8c0781ec)(&stack0x0000000c,&stack0x0000000c);
          (*(code *)PTR_FUN_8c0781f0)(*(undefined4 *)PTR_DAT_8c0781e4,&stack0x0000000c);
        }
        if (*(int *)((int)&param_1 + (int)DAT_8c0781c8) == 0) {
          return;
        }
        FUN_8c078354();
        return;
      }
    } while (*(char *)(unaff_r13 + uVar1) == '\x03');
    if ((int)uVar1 < 0) {
      uVar2 = 1 >> (~uVar1 & 0x1f) + 1;
    }
    else {
      uVar2 = 1 << (uVar1 & 0x1f);
    }
  } while (((((unaff_r12 & uVar2) == 0) ||
            (iVar3 = *(int *)(uVar1 * 4 + *(int *)((int)&param_1 + (int)DAT_8c078068)), iVar3 == 0))
           || (*(int *)(iVar3 + 0x24) != 1)) || ((*(byte *)(DAT_8c0781c0 + iVar3) & 4) != 0));
  FUN_8c0784d4();
  return;
}

