// entry: 8c01a2b0
// name: FUN_8c01a2b0


void FUN_8c01a2b0(double param_1,undefined4 param_2,double param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 in_dr14;
  double dVar16;
  undefined8 uVar17;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar11 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar11 + -4) = in_PR;
  piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c01a3e0);
  iVar4 = (*(code *)piVar6[2])(param_4 + *piVar6,param_4 + DAT_8c01a3e2);
  uVar5 = (undefined4)in_dr14;
  uVar12 = SUB84(param_1,0);
  if (iVar4 == 0) {
    piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c01a57a);
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)((ulonglong)param_1 & 0xffffffff);
    }
    else {
      param_1 = *(double *)(DAT_8c01a588 + 0x34);
    }
    (*(code *)piVar6[2])(param_4 + *piVar6);
    iVar4 = (*(code *)PTR_FUN_8c01a58c)(*(undefined4 *)(*(int *)(param_4 + 0x58) + 4),3);
    if (iVar4 == 0) {
      param_1 = (double)((ulonglong)param_1 & 0xffffffff);
      (*(code *)PTR_FUN_8c01a590)(param_4 + 0x10,2);
    }
  }
  else if (iVar4 == 1) {
    (*(code *)PTR_FUN_8c01a40c)(param_4);
  }
  else if (iVar4 == 2) {
    piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c01a3f4);
    (*(code *)piVar6[2])(param_4 + *piVar6);
    param_1 = (double)(ulonglong)uVar12;
    (*(code *)PTR_FUN_8c01a410)(param_4 + 0x10,0xb);
  }
  iVar4 = param_4 + DAT_8c01a3e4;
  if (*(int *)(iVar4 + 0x10) != 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar13 = (ulonglong)param_1 & 0xffffffff;
    }
    else {
      uVar13 = *(ulonglong *)(param_4 + DAT_8c01a3e6 + 0x10);
    }
    pdVar9 = (double *)(param_4 + DAT_8c01a3e6 + 0x10);
    (*(code *)PTR_FUN_8c01a3f8)(*(undefined4 *)(iVar4 + 0x10),0);
    param_1 = (double)(uVar13 & 0xffffffff);
    (*(code *)PTR_FUN_8c01a3fc)(*(undefined4 *)(iVar4 + 0x10));
    if (in_FPSCR_SZ == '\0') {
      param_3 = (double)CONCAT44(*(undefined4 *)pdVar9,*(undefined4 *)(DAT_8c01a400 + 0x34));
    }
    else {
      param_3 = *pdVar9;
    }
    if (in_FPSCR_PR == '\0') {
      param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) + SUB84(param_3,0),
                                 SUB84(param_3,0));
    }
    else {
      param_3 = param_3 + param_3;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)pdVar9 = (int)((ulonglong)param_3 >> 0x20);
    }
    else {
      *pdVar9 = param_3;
    }
  }
  uVar12 = SUB84(param_1,0);
  iVar4 = param_4 + DAT_8c01a3e6;
  if (*(char *)(*(int *)((int)DAT_8c01a3ec + *(int *)(DAT_8c01a3e8 + param_4)) +
                (int)DAT_8c01a3ea * (uint)*(ushort *)(param_4 + 0x54) + 0x18) == '\0') {
    (*(code *)PTR_FUN_8c01a404)(*(undefined4 *)(DAT_8c01a3ee + param_4),0);
  }
  else {
    (*(code *)PTR_FUN_8c01a594)(*(undefined4 *)(DAT_8c01a57c + param_4),1);
    iVar7 = *(int *)(param_4 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(iVar7 + 0x50);
      param_3 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x4c),uVar15);
      uVar14 = CONCAT44(*(undefined4 *)(iVar7 + 0x54),param_2);
      *(undefined4 *)((int)puVar11 + -0x54) = *(undefined4 *)(iVar7 + 0x4c);
      *(undefined4 *)((int)puVar11 + -0x50) = uVar15;
    }
    else {
      param_3 = *(double *)(iVar7 + 0x4c);
      uVar17 = *(undefined8 *)(iVar7 + 0x50);
      uVar14 = *(undefined8 *)(iVar7 + 0x54);
      *(double *)((int)puVar11 + -0x54) = param_3;
      *(undefined8 *)((int)puVar11 + -0x50) = uVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar11 + -0x4c) = (int)((ulonglong)uVar14 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar11 + -0x4c) = uVar14;
    }
    *(undefined4 *)((int)puVar11 + -0x60) = *(undefined4 *)((int)puVar11 + -0x54);
    *(undefined4 *)((int)puVar11 + -0x5c) = *(undefined4 *)((int)puVar11 + -0x50);
    uVar15 = *(undefined4 *)(DAT_8c01a57c + param_4);
    *(undefined4 *)((int)puVar11 + -0x58) = *(undefined4 *)((int)puVar11 + -0x4c);
    if (in_FPSCR_SZ == '\0') {
      param_1 = (double)(ulonglong)uVar12;
    }
    else {
      param_1 = *(double *)(DAT_8c01a588 + 0x34);
    }
    (*(code *)PTR_FUN_8c01a598)(uVar15);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(*(undefined4 *)(DAT_8c01a400 + 0x34),uVar5);
  }
  else {
    dVar16 = *(double *)(DAT_8c01a400 + 0x34);
  }
  if ((*(uint *)(param_4 + 0x2c) & DAT_8c01a408) != 0) {
    iVar7 = (int)DAT_8c01a57e;
    uVar12 = SUB84(param_1,0);
    (*(code *)PTR_FUN_8c01a59c)(param_4 + iVar7 + 0x60,3);
    uVar5 = (*(code *)PTR_FUN_8c01a5a0)
                      (*(undefined4 *)((int)DAT_8c01a582 + *(int *)(DAT_8c01a580 + param_4)),2,1);
    *(undefined4 *)(param_4 + iVar7 + 0x84) = uVar5;
    param_1 = (double)(ulonglong)uVar12;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
    else {
      *(double *)(iVar4 + 0x14) = param_1;
    }
    *(uint *)(param_4 + 0x2c) = *(uint *)(param_4 + 0x2c) & DAT_8c01a5a4;
  }
  iVar8 = 0;
  iVar7 = param_4 + DAT_8c01a3f0;
  iVar10 = 3;
  do {
    if (*(int *)(iVar8 * 0x30 + iVar7 + 0x1c) != 0) {
      dVar3 = dVar16;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)((ulonglong)param_1 & 0xffffffff);
      }
      param_1 = dVar3;
      (*(code *)PTR_FUN_8c01a5a8)(iVar8 * 0x30 + iVar7);
      if (*(int *)(iVar8 * 0x30 + iVar7 + 0x10) == 3) {
        if (in_FPSCR_SZ == '\0') {
          param_3 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x14),SUB84(param_3,0));
        }
        else {
          param_3 = *(double *)(iVar4 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) +
                                     (float)((ulonglong)dVar16 >> 0x20),SUB84(param_3,0));
        }
        else {
          param_3 = param_3 + dVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(iVar4 + 0x14) = (int)((ulonglong)param_3 >> 0x20);
        }
        else {
          *(double *)(iVar4 + 0x14) = param_3;
        }
      }
    }
    iVar10 = iVar10 + -1;
    iVar8 = iVar8 + 1;
  } while (iVar10 != 0);
  if ((**(uint **)(DAT_8c01a3f2 + param_4) & 4) != 0) {
    (**(code **)(*(int *)(param_4 + 0x28) + 0x80))
              (param_4 + *(int *)(*(int *)(param_4 + 0x28) + 0x78));
    uVar12 = SUB84(param_1,0);
    iVar4 = *(int *)(DAT_8c01a580 + param_4);
    cVar1 = *(char *)(iVar4 + 0x30);
    *(int *)((int)puVar11 + -8) = iVar4;
    if (cVar1 == '\x04') {
      *DAT_8c01a644 = 1;
      uVar2 = *(ushort *)(param_4 + 0x54);
      *(undefined **)((int)puVar11 + -0x60) = PTR_DAT_8c01a648;
      *(undefined4 *)((int)puVar11 + -0x5c) =
           *(undefined4 *)(iVar4 + DAT_8c01a63c + (int)DAT_8c01a63e + (uint)uVar2 * 4);
      (*(code *)PTR_FID_conflict__sscanf_8c01a64c)((undefined1 *)((int)puVar11 + -0x48));
      uVar13 = (ulonglong)uVar12;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar11 + -0x38) = 0;
        *(undefined4 *)((int)puVar11 + -0x34) = 0;
        *(undefined4 *)((int)puVar11 + -0x30) = 0;
      }
      else {
        *(ulonglong *)((int)puVar11 + -0x38) = uVar13;
        *(ulonglong *)((int)puVar11 + -0x34) = uVar13;
        *(ulonglong *)((int)puVar11 + -0x30) = uVar13;
      }
      iVar4 = (*(code *)PTR_FUN_8c01a650)(*(undefined4 *)(param_4 + 0x58),5);
      (*(code *)PTR__njCalcPoint_8c01a654)
                (iVar4 + 0x50,(undefined1 *)((int)puVar11 + -0x38),
                 (undefined1 *)((int)puVar11 + -0x2c));
      *(undefined4 *)((int)puVar11 + -0x38) = *(undefined4 *)((int)puVar11 + -0x2c);
      *(undefined4 *)((int)puVar11 + -0x34) = *(undefined4 *)((int)puVar11 + -0x28);
      *(undefined4 *)((int)puVar11 + -0x30) = *(undefined4 *)((int)puVar11 + -0x24);
      (*(code *)PTR_FUN_8c01a658)
                (*(undefined4 *)(DAT_8c01a640 + param_4),(undefined1 *)((int)puVar11 + -0x48));
      (*(code *)PTR_FUN_8c01a65c)
                (*(undefined4 *)(DAT_8c01a640 + param_4),(undefined1 *)((int)puVar11 + -0x38));
    }
    else if (*(int *)(iVar4 + 0x24) == 3) {
      uVar13 = (ulonglong)param_1 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar11 + -0x20) = 0;
        *(undefined4 *)((int)puVar11 + -0x1c) = 0;
        *(undefined4 *)((int)puVar11 + -0x18) = 0;
      }
      else {
        *(ulonglong *)((int)puVar11 + -0x20) = uVar13;
        *(ulonglong *)((int)puVar11 + -0x1c) = uVar13;
        *(ulonglong *)((int)puVar11 + -0x18) = uVar13;
      }
      iVar4 = (*(code *)PTR_FUN_8c01a5ac)(*(undefined4 *)(param_4 + 0x58),5);
      (*(code *)PTR__njCalcPoint_8c01a5b0)
                (iVar4 + 0x50,(undefined1 *)((int)puVar11 + -0x20),
                 (undefined1 *)((int)puVar11 + -0x14));
      *(undefined4 *)((int)puVar11 + -0x20) = *(undefined4 *)((int)puVar11 + -0x14);
      *(undefined4 *)((int)puVar11 + -0x18) = *(undefined4 *)((int)puVar11 + -0xc);
      uVar5 = *(undefined4 *)(DAT_8c01a584 + param_4);
      *(undefined4 *)((int)puVar11 + -0x1c) = *(undefined4 *)((int)puVar11 + -0x10);
      (*(code *)PTR_FUN_8c01a5b4)(uVar5);
    }
  }
  return;
}

