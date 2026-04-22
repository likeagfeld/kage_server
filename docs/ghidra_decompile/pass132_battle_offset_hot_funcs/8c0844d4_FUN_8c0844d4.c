// entry: 8c0844d4
// name: FUN_8c0844d4
// signature: undefined FUN_8c0844d4(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0844d4(double param_1,uint param_2,double param_3,int param_4,int param_5,uint param_6,
                 uint param_7)

{
  undefined2 uVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined8 in_dr14;
  float fVar14;
  double in_xd8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_20;
  
  puVar2 = PTR_FUN_8c08467c;
  if (in_FPSCR_SZ == '\0') {
    puVar7 = (undefined8 *)((int)&local_20 + 4);
    local_20 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_20);
  }
  else {
    puVar7 = &local_20;
    local_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar7 + -4) = in_PR;
  puVar6 = (ushort *)(*(int *)(DAT_8c084666 + param_4) + param_5 * 0x88);
  if (in_FPSCR_SZ == '\0') {
    param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),(int)in_dr14);
  }
  *puVar6 = *puVar6 | 1;
  (*(code *)puVar2)(param_7 & 0xffff);
  (*(code *)puVar2)(*(uint *)((int)puVar7 + 0x1c) & 0xffff);
  *(byte *)(puVar6 + 1) = ((byte)puVar6[1] & (byte)DAT_8c08466a | 0x10) & (byte)DAT_8c08466e | 8;
  (*(code *)puVar2)(param_6 & 0xffff);
  (*(code *)puVar2)(*(uint *)((int)puVar7 + 0x20) & 0xffff);
  uVar9 = (ulonglong)param_2;
  fVar14 = (float)((ulonglong)param_1 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(float *)(puVar6 + 6) = fVar14;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
  }
  else {
    *(double *)(puVar6 + 6) = param_1;
    *(ulonglong *)(puVar6 + 10) = uVar9;
  }
  uVar1 = DAT_8c084672;
  *(byte *)((int)puVar6 + 9) = *(byte *)((int)puVar6 + 9) & 0xf | 0x10;
  *(byte *)(puVar6 + 8) = (byte)puVar6[8] & (byte)uVar1;
  if (in_FPSCR_SZ == '\0') {
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
  }
  else {
    *(ulonglong *)(puVar6 + 0x38) = uVar9;
  }
  if ((param_6 != 9) && (*(char *)(param_6 + *(int *)(param_4 + 4) + 0xe) == '\x01')) {
    if (in_FPSCR_SZ == '\0') {
      param_3 = (double)CONCAT44(DAT_8c084684,*(undefined4 *)DAT_8c084680);
    }
    else {
      param_3 = (double)CONCAT44(_DAT_8c084688,DAT_8c084684);
      in_xd8 = *DAT_8c084680;
    }
    if (in_FPSCR_PR == '\0') {
      param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) / SUB84(param_3,0),
                                 SUB84(param_3,0));
    }
    else {
      param_3 = param_3 / param_3;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar6 + 0x38) = (int)((ulonglong)param_3 >> 0x20);
    }
    else {
      *(double *)(puVar6 + 0x38) = param_3;
    }
  }
  uVar12 = SUB84(param_3,0);
  dVar10 = (double)CONCAT44(0x3f800000,uVar12);
  if (in_FPSCR_SZ == '\0') {
    puVar6[0xe] = 0;
    puVar6[0xf] = 0x3f80;
  }
  else {
    *(double *)(puVar6 + 0xe) = dVar10;
  }
  iVar4 = *(int *)((int)puVar7 + 0x24);
  if (iVar4 == 1) {
    *(byte *)(puVar6 + 4) = (byte)puVar6[4] & (byte)DAT_8c08480e | 1;
  }
  else if (iVar4 == 2) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar6 + 0xe) = (undefined4)DAT_8c084820;
      dVar10 = (double)CONCAT44(DAT_8c084820._4_4_,uVar12);
    }
    else {
      *(ulonglong *)(puVar6 + 0xe) = CONCAT44(DAT_8c084820._4_4_,(undefined4)DAT_8c084820);
      dVar10 = (double)CONCAT44(PTR_FUN_8c084828,DAT_8c084820._4_4_);
    }
    if (in_FPSCR_PR == '\0') {
      param_1 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar10 >> 0x20),SUB84(param_1,0));
    }
    else {
      param_1 = param_1 + dVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar6 + 6) = (int)((ulonglong)param_1 >> 0x20);
    }
    else {
      *(double *)(puVar6 + 6) = param_1;
    }
  }
  else if (iVar4 == 3) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar6 + 0xe) = _DAT_8c084688;
      dVar10 = (double)CONCAT44(_DAT_8c08468c,uVar12);
    }
    else {
      *(ulonglong *)(puVar6 + 0xe) = CONCAT44(_DAT_8c08468c,_DAT_8c084688);
      dVar10 = (double)CONCAT44(PTR_FUN_8c084690,_DAT_8c08468c);
    }
    if (in_FPSCR_PR == '\0') {
      param_1 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar10 >> 0x20),SUB84(param_1,0));
    }
    else {
      param_1 = param_1 + dVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar6 + 6) = (int)((ulonglong)param_1 >> 0x20);
    }
    else {
      *(double *)(puVar6 + 6) = param_1;
    }
  }
  puVar2 = PTR_FUN_8c084690;
  uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
  }
  else {
    *(ulonglong *)(puVar6 + 0x34) = uVar9;
  }
  (*(code *)puVar2)(*(undefined4 *)(param_4 + 8),puVar6 + 1,puVar6 + 0x32,puVar6 + 0x36);
  if (in_FPSCR_PR == '\0') {
    uVar12 = 0x40000000;
  }
  else {
    uVar12 = SUB84((double)CONCAT44(uVar12,0x3f800000) + (double)CONCAT44(uVar12,0x3f800000),0);
  }
  *(ushort **)
   ((*(int *)(param_4 + 0x20) * *(int *)((int)puVar7 + 0x1c) + param_7) * 4 +
   *(int *)(DAT_8c084674 + param_4)) = puVar6;
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c084694,uVar12);
  }
  else {
    uVar8 = CONCAT44(_DAT_8c084698,DAT_8c084694);
  }
  *(undefined4 *)((int)puVar7 + -0xc) = 0;
  *(undefined4 *)((int)puVar7 + -8) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar7 + -0x10) = (int)((ulonglong)uVar8 >> 0x20);
    in_xd8 = (double)CONCAT44((int)uVar8,*(undefined4 *)DAT_8c084680);
    dVar10 = (double)CONCAT44(_DAT_8c084698,(int)uVar9);
  }
  else {
    *(undefined8 *)((int)puVar7 + -0x10) = uVar8;
    dVar10 = (double)CONCAT44(PTR_FUN_8c08469c,_DAT_8c084698);
  }
  if (in_FPSCR_PR == '\0') {
    in_xd8 = (double)CONCAT44((float)((ulonglong)in_xd8 >> 0x20) / SUB84(in_xd8,0),SUB84(in_xd8,0));
  }
  else {
    in_xd8 = in_xd8 / in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar7 + -0x18) = (int)((ulonglong)in_xd8 >> 0x20);
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),SUB84(in_xd8,0));
  }
  else {
    *(double *)((int)puVar7 + -0x18) = in_xd8;
    dVar13 = dVar10;
  }
  if (in_FPSCR_PR == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / SUB84(dVar13,0),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 / dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar7 + -0x14) = (int)((ulonglong)dVar13 >> 0x20);
    uVar8 = CONCAT44(*(undefined4 *)(puVar6 + 0x32),*(undefined4 *)(puVar6 + 0x34));
    uVar11 = CONCAT44(*(undefined4 *)(puVar6 + 0x36),SUB84(dVar10,0));
  }
  else {
    *(double *)((int)puVar7 + -0x14) = dVar13;
    uVar8 = *(undefined8 *)(puVar6 + 0x32);
    uVar11 = *(undefined8 *)(puVar6 + 0x36);
  }
  sVar3 = (*(code *)PTR_FUN_8c08469c)(uVar8,uVar11,param_4,(undefined1 *)((int)puVar7 + -0x18));
  puVar2 = PTR_FUN_8c0846a0;
  *(short *)((int)DAT_8c084676 + (int)puVar6) = sVar3;
  (*(code *)puVar2)(param_4,(int)sVar3);
  piVar5 = (int *)(*(int *)(DAT_8c084678 + param_4) + (int)DAT_8c084676);
  (*(code *)piVar5[2])(param_4 + *piVar5,puVar6);
  return;
}

