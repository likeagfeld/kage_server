// entry: 8c111614
// name: FUN_8c111614
// signature: undefined FUN_8c111614(void)


void FUN_8c111614(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined8 in_dr14;
  undefined4 in_PR;
  int iVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar2 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar2 + -4) = in_PR;
  if (param_3 == 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar3 = CONCAT44(*(undefined4 *)PTR_DAT_8c1116f4,param_1);
    }
    else {
      uVar3 = *(undefined8 *)PTR_DAT_8c1116f4;
    }
    (*(code *)PTR_FUN_8c1116d8)(uVar3,param_2 + 0x10,3);
  }
  else {
    (*(code *)PTR_FUN_8c1116d8)(*(int *)(DAT_8c1116d0 + param_2) + 0x10,5);
    uVar6 = (undefined4)in_dr14;
    (*(code *)PTR_FUN_8c1116dc)(*(undefined4 *)(*(int *)(DAT_8c1116d0 + param_2) + 0x50),1);
    uVar3 = (*(code *)PTR_FUN_8c1116e0)(*(undefined4 *)(*(int *)(DAT_8c1116d0 + param_2) + 0x50));
    uVar1 = (undefined4)uVar3;
    if (in_FPSCR_SZ == '\0') {
      uVar1 = uVar6;
    }
    dVar4 = (double)CONCAT44((int)((ulonglong)uVar3 >> 0x20),uVar1);
    uVar1 = (*(code *)PTR_FUN_8c1116e8)(*DAT_8c1116e4);
    dVar5 = dVar4;
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),DAT_8c1116ec);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (in_FPSCR_PR == '\0') {
      iVar7 = (int)(float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      iVar7 = (int)dVar5;
    }
    (*(code *)PTR_FUN_8c1116f0)(*DAT_8c1116e4,uVar1,0x20,iVar7);
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)(ulonglong)param_1;
    }
    (*(code *)PTR_FUN_8c1116d8)(dVar4,param_2 + 0x10,3);
  }
  return;
}

