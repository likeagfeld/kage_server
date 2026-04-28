// entry: 8c043a0c
// name: FUN_8c043a0c
// signature: undefined FUN_8c043a0c(void)


void FUN_8c043a0c(double param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double *pdVar5;
  int iVar6;
  undefined4 in_fr3;
  float fVar7;
  double dVar8;
  double dVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_24;
  undefined4 local_c;
  
  iVar6 = *(int *)((int)DAT_8c043acc + *(int *)(DAT_8c043ac8 + param_3)) + (int)DAT_8c043aca + 0x48;
  (*(code *)PTR__njUnitMatrix_8c043ad4)(iVar6);
  iVar2 = (*(code *)PTR_FUN_8c043ad8)(*(undefined4 *)(param_3 + DAT_8c043ace + 0x1c),0xd);
  local_24 = param_2;
  if (in_FPSCR_SZ == '\0') {
    local_24 = 0;
  }
  (*(code *)PTR_FUN_8c043adc)(iVar2,local_24);
  uVar3 = *(undefined4 *)(iVar2 + 0x84);
  pdVar5 = (double *)(param_3 + DAT_8c043ad0);
  if (in_FPSCR_SZ == '\0') {
    param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),*(undefined4 *)(iVar2 + 0x80));
    dVar8 = (double)CONCAT44(*(undefined4 *)pdVar5,param_2);
  }
  else {
    dVar8 = *pdVar5;
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x88);
  if (in_FPSCR_PR == '\0') {
    fVar7 = SUB84(param_1,0) - (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(param_1 - dVar8,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),SUB84(dVar8,0));
    dVar8 = (double)CONCAT44(uVar3,fVar7);
    dVar1 = (double)CONCAT44(uVar3,in_fr3);
  }
  else {
    dVar8 = (double)CONCAT44(local_24,uVar3);
    dVar9 = *(double *)((int)pdVar5 + 4);
    dVar1 = dVar8;
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - (float)((ulonglong)dVar9 >> 0x20),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 - dVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar4 = SUB84(dVar1,0);
    local_c = (undefined4)((ulonglong)dVar8 >> 0x20);
  }
  dVar8 = (double)(*(code *)PTR_FUN_8c043ae0)(CONCAT44(local_c,SUB84(dVar8,0)));
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c043ae4,uVar4);
  }
  else {
    dVar9 = (double)CONCAT44(PTR_FUN_8c043ae8,DAT_8c043ae4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * (float)((ulonglong)dVar9 >> 0x20),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 * dVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c043aec,SUB84(dVar9,0));
  }
  else {
    dVar9 = (double)CONCAT44(uRam8c043af0,DAT_8c043aec);
  }
  if (in_FPSCR_PR == '\0') {
    iVar2 = (int)((float)((ulonglong)dVar8 >> 0x20) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar2 = (int)(dVar8 / dVar9);
  }
  (*(code *)PTR_FUN_8c043ae8)(iVar6,iVar2);
  return;
}

