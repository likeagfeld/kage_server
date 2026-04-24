// entry: 8c061e2c
// name: FUN_8c061e2c
// signature: undefined FUN_8c061e2c(void)


/* WARNING: Removing unreachable block (ram,0x8c061e7a) */
/* WARNING: Removing unreachable block (ram,0x8c061e56) */
/* WARNING: Removing unreachable block (ram,0x8c061ee6) */
/* WARNING: Removing unreachable block (ram,0x8c061ebe) */
/* WARNING: Removing unreachable block (ram,0x8c061ec0) */
/* WARNING: Removing unreachable block (ram,0x8c061ec2) */
/* WARNING: Removing unreachable block (ram,0x8c061eea) */
/* WARNING: Removing unreachable block (ram,0x8c061eec) */
/* WARNING: Removing unreachable block (ram,0x8c061eee) */

void FUN_8c061e2c(undefined4 param_1,int param_2,char *param_3,double *param_4,double *param_5)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 in_fr3;
  double dVar4;
  float fVar8;
  double dVar5;
  float fVar9;
  double dVar6;
  double dVar7;
  undefined4 uVar10;
  double in_xd8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar2 = (*(code *)PTR_FUN_8c061f10)(0);
  puVar1 = PTR_FUN_8c061f10;
  if (in_FPSCR_SZ == '\0') {
    fVar8 = *(float *)(param_2 + 0xc);
  }
  else {
    fVar8 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  }
  iVar3 = (int)((int)*(short *)(param_2 + 8) + (uint)(*(short *)(param_2 + 8) < 0)) >> 1;
  if (in_FPSCR_PR == '\0') {
    fVar8 = (float)uVar2 * fVar8 - (float)iVar3;
  }
  else {
    dVar5 = (double)iVar3;
    fVar8 = SUB84(dVar5 - dVar5,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)param_4 = fVar8;
  }
  else {
    *param_4 = in_xd8;
  }
  uVar2 = (*(code *)puVar1)();
  if (in_FPSCR_SZ == '\0') {
    fVar8 = *(float *)(param_2 + 0xc);
  }
  else {
    fVar8 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  }
  iVar3 = (int)((int)*(short *)(param_2 + 10) + (uint)(*(short *)(param_2 + 10) < 0)) >> 1;
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)iVar3;
    dVar5 = (double)CONCAT44(fVar9,(float)uVar2 * fVar8 - fVar9);
  }
  else {
    dVar5 = (double)iVar3;
    dVar5 = dVar5 - dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)param_5 = SUB84(dVar5,0);
  }
  else {
    *param_5 = in_xd8;
  }
  if (((int)*param_3 & 0x10U) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)param_4,param_1);
    }
    else {
      dVar6 = *param_4;
    }
    uVar10 = (undefined4)((ulonglong)dVar5 >> 0x20);
    fVar8 = (float)((int)*param_3 & 0xf);
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c061f18,in_fr3);
    }
    else {
      dVar5 = (double)CONCAT44(uRam8c061f1c,DAT_8c061f18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44(uVar10,fVar8 / (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      dVar7 = (double)CONCAT44(uVar10,fVar8) / dVar5;
    }
    dVar4 = (double)CONCAT44(0x3f800000,SUB84(dVar5,0));
    if (in_FPSCR_PR == '\0') {
      dVar4 = (double)CONCAT44(0x40000000,SUB84(dVar5,0));
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + SUB84(dVar7,0),SUB84(dVar6,0));
    }
    else {
      dVar4 = dVar4 + dVar4;
      dVar6 = dVar6 + dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)param_4 = (int)((ulonglong)dVar6 >> 0x20);
      dVar5 = (double)CONCAT44(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)param_5);
    }
    else {
      *param_4 = dVar6;
      dVar5 = *(double *)(param_2 + 0xc);
      in_xd8 = *param_5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20) / (float)((ulonglong)dVar4 >> 0x20)
      ;
    }
    else {
      fVar8 = SUB84(dVar5 / dVar4 + dVar5 / dVar4,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)param_5 = fVar8;
    }
    else {
      *param_5 = in_xd8;
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44(0x40000000,in_fr3);
    }
    else {
      dVar5 = (double)CONCAT44(0x3f800000,in_fr3) + (double)CONCAT44(0x3f800000,in_fr3);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)param_4);
    }
    else {
      dVar6 = *(double *)(param_2 + 0xc);
      in_xd8 = *param_4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20) / (float)((ulonglong)dVar5 >> 0x20)
      ;
    }
    else {
      fVar8 = SUB84(dVar6 / dVar5 + dVar6 / dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)param_4 = fVar8;
    }
    else {
      *param_4 = in_xd8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)param_5,param_1);
    }
    else {
      dVar6 = *param_5;
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((int)*param_3 & 0xfU),fVar8);
    }
    else {
      dVar7 = (double)((int)*param_3 & 0xfU);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c061f18,SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)CONCAT44(uRam8c061f1c,DAT_8c061f18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                               (float)((ulonglong)dVar7 >> 0x20) / (float)((ulonglong)dVar5 >> 0x20)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar7 / dVar5;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)param_5 = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *param_5 = dVar6;
    }
  }
  return;
}

