// entry: 8c0a8ea6
// name: FUN_8c0a8ea6
// signature: undefined FUN_8c0a8ea6(void)


void FUN_8c0a8ea6(undefined4 param_1,uint param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint in_fr3;
  uint extraout_fr3;
  undefined4 uVar6;
  double dVar7;
  float fVar8;
  ulonglong in_dr14;
  double dVar9;
  undefined8 in_xd4;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_1c [8];
  undefined8 uStack_14;
  
  puVar1 = PTR_FUN_8c0a8f10;
  uVar6 = (undefined4)param_3;
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)uStack_14);
    puVar5 = &uStack_14;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_14._0_4_ = (int)in_dr14;
  }
  else {
    puVar5 = (undefined8 *)local_1c;
    uStack_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = in_PR;
  iVar3 = *(int *)(param_4 + 0x14);
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (ulonglong)param_2;
    in_xd4 = in_xd14;
  }
  iVar4 = 0;
  if (in_FPSCR_SZ == '\0') {
    param_2 = (uint)in_dr14;
  }
  dVar9 = (double)CONCAT44(param_1,param_2);
  if (0 < iVar3) {
    do {
      piVar2 = (int *)(*(code *)puVar1)(param_4,iVar4);
      uVar6 = (undefined4)param_3;
      iVar3 = *(int *)(*piVar2 + 0x14);
      *(int *)((int)puVar5 + -8) = *piVar2;
      in_fr3 = extraout_fr3;
      if (iVar3 == 0x10) {
        iVar3 = *(int *)(param_4 + 0x14);
        break;
      }
      iVar3 = *(int *)(param_4 + 0x14);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (iVar4 == iVar3) {
    *(undefined4 *)((int)puVar5 + -8) = 0;
  }
  iVar3 = *(int *)((int)puVar5 + -8);
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)((ulonglong)dVar9 >> 0x20);
    dVar9 = (double)CONCAT44(fVar8,SUB84(dVar9,0) - fVar8);
  }
  else {
    dVar9 = dVar9 - dVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(iVar3 + 0x18) = (int)((ulonglong)dVar9 >> 0x20);
    dVar7 = (double)CONCAT44(*(undefined4 *)(iVar3 + 8),uVar6);
  }
  else {
    *(double *)(iVar3 + 0x18) = dVar9;
    dVar7 = *(double *)(iVar3 + 8);
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 / dVar7,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(iVar3 + 0x1c) = fVar8;
    *(undefined4 *)(iVar3 + 0x20) = 0;
  }
  else {
    *(undefined8 *)(iVar3 + 0x1c) = in_xd4;
    *(ulonglong *)(iVar3 + 0x20) = (ulonglong)in_fr3;
  }
  return;
}

