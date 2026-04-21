// entry: 8c0f590e
// name: FUN_8c0f590e
// signature: undefined FUN_8c0f590e(void)


void FUN_8c0f590e(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double in_xd8;
  bool bVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fVar5;
  
  if (in_FPSCR_SZ == '\0') {
    param_2 = *(undefined4 *)DAT_8c0f5974;
    param_1 = DAT_8c0f5978;
  }
  else {
    in_xd8 = *DAT_8c0f5974;
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((float)param_5,param_1);
  }
  else {
    dVar2 = (double)param_5;
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd8 = (double)CONCAT44(param_2,param_2);
  }
  fVar3 = (float)((ulonglong)dVar2 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)((ulonglong)in_xd8 >> 0x20) * SUB84(dVar2,0);
    dVar4 = (double)CONCAT44(fVar5,SUB84(in_xd8,0));
    bVar6 = fVar5 < fVar3;
  }
  else {
    dVar4 = in_xd8 * dVar2;
    bVar6 = dVar4 < dVar2;
  }
  uVar1 = 3;
  if (bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(DAT_8c0f5a6c,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(PTR_FUN_8c0f5a70,DAT_8c0f5a6c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20) < fVar3;
    }
    else {
      bVar6 = dVar4 * dVar4 < dVar2;
    }
    if (!bVar6) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  (*(code *)PTR_FUN_8c0f597c)(*(undefined4 *)(param_3 + 0x3c),param_4 != 0,uVar1);
  return;
}

