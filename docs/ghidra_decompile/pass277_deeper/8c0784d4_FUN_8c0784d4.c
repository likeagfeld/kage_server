// entry: 8c0784d4
// name: FUN_8c0784d4
// signature: undefined FUN_8c0784d4(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0784d4(undefined4 param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  double dVar2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    dVar1 = (double)CONCAT44(DAT_8c078510,param_1);
    dVar2 = (double)CONCAT44(*(undefined4 *)DAT_8c07850c,param_2);
  }
  else {
    dVar1 = (double)CONCAT44(_FUN_8c078514,DAT_8c078510);
    dVar2 = *DAT_8c07850c;
  }
  if (in_FPSCR_PR == '\0') {
    dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) / (float)((ulonglong)dVar2 >> 0x20),
                             SUB84(dVar1,0));
  }
  else {
    dVar1 = dVar1 / dVar2;
  }
  (**(code **)((int)DAT_8c078506 + *(int *)(param_3 + 0x28)))
            (dVar1,param_3 + *(int *)((int)DAT_8c078504 + *(int *)(param_3 + 0x28)),0xb);
  FUN_8c078098();
  return;
}

