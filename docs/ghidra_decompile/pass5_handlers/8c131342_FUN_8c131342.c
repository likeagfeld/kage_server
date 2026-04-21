// entry: 8c131342
// name: FUN_8c131342
// signature: undefined FUN_8c131342(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c131342(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 in_fr3;
  float fVar8;
  double dVar7;
  undefined8 in_xd8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x70) + (int)DAT_8c131420);
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)param_2;
  }
  else {
    fVar8 = (float)((ulonglong)(double)param_2 >> 0x20);
  }
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x70) + (int)DAT_8c131424);
  uVar6 = puVar5[1];
  *puVar4 = *puVar5;
  uVar2 = puVar5[2];
  puVar4[1] = uVar6;
  puVar4[2] = uVar2;
  iVar3 = *(int *)(param_1 + 0x70);
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(DAT_8c131434,in_fr3);
  }
  else {
    dVar7 = (double)CONCAT44(_FUN_8c131438,DAT_8c131434);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)((ulonglong)(uint)(fVar8 * (float)((ulonglong)dVar7 >> 0x20)) << 0x20);
  }
  else {
    dVar7 = (double)((ulonglong)(uint)fVar8 << 0x20) * dVar7;
  }
  uStack_8 = SUB84(dVar7,0);
  if (in_FPSCR_SZ == '\0') {
    uStack_c = (int)((ulonglong)dVar7 >> 0x20);
  }
  else {
    local_10 = (undefined4)in_xd8;
    uStack_c = uStack_8;
    uStack_8 = local_10;
  }
  iVar1 = (int)DAT_8c131424;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(uStack_8,*(undefined4 *)(iVar1 + iVar3));
  }
  else {
    dVar7 = (double)CONCAT44(uStack_c,uStack_8);
    in_xd8 = *(undefined8 *)(iVar1 + iVar3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar7 + dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(iVar1 + iVar3) = fVar8;
  }
  else {
    *(undefined8 *)(iVar1 + iVar3) = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(DAT_8c131426 + iVar3),uStack_c);
  }
  else {
    dVar7 = *(double *)(DAT_8c131426 + iVar3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar7,0),SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c131426 + iVar3) = (int)((ulonglong)dVar7 >> 0x20);
  }
  else {
    *(double *)(DAT_8c131426 + iVar3) = dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(DAT_8c131428 + iVar3),uStack_8);
  }
  else {
    dVar7 = *(double *)(DAT_8c131428 + iVar3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar7,0),SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c131428 + iVar3) = (int)((ulonglong)dVar7 >> 0x20);
  }
  else {
    *(double *)(DAT_8c131428 + iVar3) = dVar7;
  }
  return;
}

