// entry: 8c0a0c0c
// name: FUN_8c0a0c0c
// signature: undefined FUN_8c0a0c0c(void)


/* WARNING: Removing unreachable block (ram,0x8c0a0dc8) */
/* WARNING: Removing unreachable block (ram,0x8c0a0daa) */
/* WARNING: Removing unreachable block (ram,0x8c0a0c90) */
/* WARNING: Removing unreachable block (ram,0x8c0a0cb6) */

void FUN_8c0a0c0c(double param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined4 param_5,int param_6)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint in_fr3;
  ulonglong uVar7;
  double dVar8;
  float fVar9;
  undefined4 uVar11;
  double dVar10;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 in_xd4;
  undefined8 in_xd8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar4 = (int)DAT_8c0a0d6c;
  *param_3 = *(undefined4 *)(param_4 + 4);
  uVar3 = DAT_8c0a0d7c;
  uVar6 = *(uint *)((int)param_4 + 0x24);
  param_3[1] = uVar6;
  param_3[2] = *(undefined4 *)((int)param_4 + 0x2c);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(iVar4 + (int)param_3) = *(undefined4 *)param_4;
    uVar13 = CONCAT44(*(undefined4 *)((int)param_4 + 4),param_2);
  }
  else {
    *(undefined8 *)(iVar4 + (int)param_3) = *param_4;
    uVar13 = *(undefined8 *)((int)param_4 + 4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)DAT_8c0a0d6e + (int)param_3) = (int)((ulonglong)uVar13 >> 0x20);
    uVar13 = CONCAT44(*(undefined4 *)(param_4 + 1),(int)uVar13);
  }
  else {
    *(undefined8 *)((int)DAT_8c0a0d6e + (int)param_3) = uVar13;
    uVar13 = param_4[1];
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)DAT_8c0a0d70 + (int)param_3) = (int)((ulonglong)uVar13 >> 0x20);
  }
  else {
    *(undefined8 *)((int)DAT_8c0a0d70 + (int)param_3) = uVar13;
  }
  param_3[0x1f] = param_5;
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)((int)param_4 + 0xc),(int)uVar13);
  }
  else {
    uVar13 = *(undefined8 *)((int)param_4 + 0xc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)DAT_8c0a0d72 + (int)param_3) = (int)((ulonglong)uVar13 >> 0x20);
    uVar13 = CONCAT44(*(undefined4 *)(param_4 + 2),(int)uVar13);
  }
  else {
    *(undefined8 *)((int)DAT_8c0a0d72 + (int)param_3) = uVar13;
    uVar13 = param_4[2];
  }
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)DAT_8c0a0d74 + (int)param_3) = uVar14;
  }
  else {
    *(undefined8 *)((int)DAT_8c0a0d74 + (int)param_3) = uVar13;
  }
  *(undefined2 *)(param_3 + 0x1b) = *(undefined2 *)((int)param_4 + 0x14);
  *(undefined2 *)((int)param_3 + 0x6e) = *(undefined2 *)((int)param_4 + 0x16);
  sVar1 = *(short *)(param_4 + 3);
  *(short *)(param_3 + 0x1c) = sVar1;
  sVar2 = *(short *)((int)param_4 + 0x1a);
  *(short *)((int)param_3 + 0x72) = sVar2;
  param_3[0x1d] = param_6;
  *(int *)((int)DAT_8c0a0d76 + (int)param_3) = (int)*(short *)(param_4 + 5);
  uVar11 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((uVar6 & uVar3) == 0) {
    iVar4 = (int)*(short *)((int)param_4 + 0x14) + (int)sVar1;
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)iVar4,(float)(int)*(short *)((int)param_4 + 0x14));
    }
    else {
      dVar8 = (double)iVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)CONCAT44(uVar11,DAT_8c0a0f28);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(param_1,0),
                               SUB84(dVar8,0) / SUB84(param_1,0));
    }
    else {
      dVar8 = (dVar8 / param_1) / param_1;
    }
  }
  else {
    iVar4 = (int)*(short *)((int)param_4 + 0x14);
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)iVar4,(float)(iVar4 + sVar1));
    }
    else {
      dVar8 = (double)iVar4;
    }
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)CONCAT44(uVar11,DAT_8c0a0d80);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(param_1,0),
                               SUB84(dVar8,0) / SUB84(param_1,0));
    }
    else {
      dVar8 = (dVar8 / param_1) / param_1;
    }
  }
  if ((uVar6 & DAT_8c0a0d84) == 0) {
    iVar4 = (int)*(short *)((int)param_4 + 0x16);
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44((float)iVar4,SUB84(param_1,0));
    }
    else {
      dVar10 = (double)iVar4;
    }
    fVar12 = (float)(iVar4 + sVar2);
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar10,0);
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) / fVar9,fVar9);
      fVar12 = fVar12 / fVar9;
    }
    else {
      dVar10 = dVar10 / dVar10;
      fVar12 = SUB84((double)CONCAT44(uVar14,fVar12) / dVar10,0);
    }
  }
  else {
    iVar4 = (int)*(short *)((int)param_4 + 0x16) + (int)sVar2;
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44((float)iVar4,SUB84(param_1,0));
    }
    else {
      dVar10 = (double)iVar4;
    }
    fVar12 = (float)(int)*(short *)((int)param_4 + 0x16);
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar10,0);
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) / fVar9,fVar9);
      fVar12 = fVar12 / fVar9;
    }
    else {
      dVar10 = dVar10 / dVar10;
      fVar12 = SUB84((double)CONCAT44(uVar14,fVar12) / dVar10,0);
    }
  }
  puVar5 = param_3 + 3;
  iVar4 = 4;
  do {
    iVar4 = iVar4 + -1;
    puVar5[5] = *(undefined4 *)((int)param_4 + 0x1c);
    puVar5 = puVar5 + 6;
  } while (iVar4 != 0);
  uVar11 = (undefined4)((ulonglong)dVar10 >> 0x20);
  uVar14 = (undefined4)((ulonglong)dVar8 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    param_3[6] = SUB84(dVar8,0);
    param_3[7] = uVar11;
    param_3[0xc] = uVar14;
    param_3[0xd] = uVar11;
    param_3[0x12] = SUB84(dVar8,0);
    param_3[0x13] = fVar12;
    param_3[0x18] = uVar14;
    param_3[0x19] = fVar12;
  }
  else {
    *(undefined8 *)(param_3 + 6) = in_xd4;
    *(double *)(param_3 + 7) = dVar10;
    *(double *)(param_3 + 0xc) = dVar8;
    *(double *)(param_3 + 0xd) = dVar10;
    *(undefined8 *)(param_3 + 0x12) = in_xd4;
    *(undefined8 *)(param_3 + 0x13) = in_xd8;
    *(double *)(param_3 + 0x18) = dVar8;
    *(undefined8 *)(param_3 + 0x19) = in_xd8;
  }
  sVar1 = *(short *)((int)param_4 + 0x2a);
  if ((sVar1 != 1) && (sVar1 != 2)) {
    if ((sVar1 == 4) || ((sVar1 == 5 || (sVar1 == 6)))) {
      uVar7 = (ulonglong)in_fr3;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)DAT_8c0a0f16 + (int)param_3) = 0;
      }
      else {
        *(ulonglong *)((int)DAT_8c0a0f16 + (int)param_3) = uVar7;
      }
      goto LAB_8c0a0d36;
    }
    if (sVar1 != 8) {
      if (in_FPSCR_SZ == '\0') {
        uVar7 = CONCAT44(DAT_8c0a0d88,in_fr3);
      }
      else {
        uVar7 = CONCAT44(uRam8c0a0d8c,DAT_8c0a0d88);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)DAT_8c0a0d78 + (int)param_3) = (int)(uVar7 >> 0x20);
      }
      else {
        *(ulonglong *)((int)DAT_8c0a0d78 + (int)param_3) = uVar7;
      }
      goto LAB_8c0a0d36;
    }
  }
  uVar7 = CONCAT44(0x3f800000,in_fr3);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)DAT_8c0a0f16 + (int)param_3) = 0x3f800000;
  }
  else {
    *(ulonglong *)((int)DAT_8c0a0f16 + (int)param_3) = uVar7;
  }
LAB_8c0a0d36:
  if (((sVar1 == 2) || (sVar1 == 3)) || (sVar1 == 4)) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)DAT_8c0a0f18 + (int)param_3) = 0;
    }
    else {
      *(ulonglong *)((int)DAT_8c0a0f18 + (int)param_3) = uVar7 & 0xffffffff;
    }
  }
  else if (((sVar1 == 6) || (sVar1 == 7)) || (sVar1 == 8)) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)DAT_8c0a0f18 + (int)param_3) = 0x3f800000;
    }
    else {
      *(ulonglong *)((int)DAT_8c0a0f18 + (int)param_3) = CONCAT44(0x3f800000,(int)uVar7);
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      uVar13 = CONCAT44(DAT_8c0a0d88,(int)uVar7);
    }
    else {
      uVar13 = CONCAT44(uRam8c0a0d8c,DAT_8c0a0d88);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)DAT_8c0a0d7a + (int)param_3) = (int)((ulonglong)uVar13 >> 0x20);
    }
    else {
      *(undefined8 *)((int)DAT_8c0a0d7a + (int)param_3) = uVar13;
    }
  }
  if (param_6 != 0) {
    (**(code **)(*(int *)(param_6 + 0x10) + 0x14))
              (param_6 + *(int *)(*(int *)(param_6 + 0x10) + 0xc),param_3,0xe8);
  }
  return;
}

