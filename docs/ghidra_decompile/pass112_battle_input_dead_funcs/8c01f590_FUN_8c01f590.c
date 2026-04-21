// entry: 8c01f590
// name: FUN_8c01f590
// signature: undefined FUN_8c01f590(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c01f590(undefined4 param_1,int param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_r3;
  int iVar5;
  int unaff_r13;
  undefined8 uVar6;
  char in_FPSCR_SZ;
  
  (*param_3)(param_2 + in_r3);
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(_DAT_8c01f450 + unaff_r13),param_1);
  }
  else {
    uVar6 = *(undefined8 *)(_DAT_8c01f450 + unaff_r13);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(_DAT_8c01f44c + unaff_r13) = (int)((ulonglong)uVar6 >> 0x20);
  }
  else {
    *(undefined8 *)(_DAT_8c01f44c + unaff_r13) = uVar6;
  }
  if (*(int *)(_DAT_8c01f458 + unaff_r13) != 9) {
    iVar5 = *(int *)(_DAT_8c01f444 + unaff_r13);
    iVar1 = (*_DAT_8c01f464)(*(undefined2 *)(unaff_r13 + 0x54));
    iVar3 = *(int *)(iVar5 + 0x20);
    iVar2 = (*_DAT_8c01f464)();
    if (*(int *)((iVar3 * iVar1 + iVar2) * 4 + *(int *)(_DAT_8c01f45c + iVar5)) == 0) {
      (*(code *)PTR_FUN_8c01f5e8)(0);
      piVar4 = (int *)(*(int *)(unaff_r13 + 0x28) + (int)_DAT_8c01f5c2);
      (*(code *)piVar4[2])(0,unaff_r13 + *piVar4);
    }
  }
  return;
}

