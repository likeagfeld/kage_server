// entry: 8c0e2180
// name: FUN_8c0e2180
// signature: undefined FUN_8c0e2180(void)


void FUN_8c0e2180(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = (*(code *)PTR_FUN_8c0e21e4)(8,DAT_8c0e21e0);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_8c0e21f0)(param_3 + 0x10,0xd);
  }
  iVar1 = (*(code *)PTR_FUN_8c0e21ec)(DAT_8c0e21e8,param_3 + DAT_8c0e21d8);
  if (iVar1 == -0x1a) {
    (*(code *)PTR_FUN_8c0e21f0)(0xe);
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar2 = (double)CONCAT44((undefined4)DAT_8c0e21f4,param_1);
      dVar3 = (double)CONCAT44(*(undefined4 *)DAT_8c0e21f4._4_4_,param_2);
    }
    else {
      dVar2 = (double)CONCAT44(DAT_8c0e21f4._4_4_,(undefined4)DAT_8c0e21f4);
      dVar3 = *DAT_8c0e21f4._4_4_;
    }
    if (in_FPSCR_PR == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / (float)((ulonglong)dVar3 >> 0x20)
                               ,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / dVar3;
    }
    (*(code *)PTR_FUN_8c0e21f0)(dVar2,param_3 + 0x10,1);
  }
  return;
}

