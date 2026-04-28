// entry: 8c01ab04
// name: FUN_8c01ab04


void FUN_8c01ab04(uint param_1,undefined4 param_2,double param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  double *pdVar11;
  int iVar12;
  undefined8 *puVar13;
  double dVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 in_dr14;
  double dVar18;
  undefined8 uVar19;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar13 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar13 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar13 + -4) = in_PR;
  if (*(int *)(DAT_8c01ac26 + param_4) != 8) {
    piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c01ac3a);
    (*(code *)piVar6[2])(param_4 + *piVar6,8);
  }
  iVar9 = DAT_8c01ac3c;
  uVar5 = (undefined4)in_dr14;
  piVar6 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c01ac28);
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)(ulonglong)param_1;
  }
  else {
    dVar14 = *(double *)(DAT_8c01ac3c + 0x34);
  }
  (*(code *)piVar6[2])(param_4 + *piVar6);
  iVar4 = (*(code *)PTR_FUN_8c01ac40)(*(undefined4 *)(*(int *)(param_4 + 0x58) + 4),3);
  if (iVar4 == 0) {
    uVar7 = *(uint *)(param_4 + 0x2c);
    if (in_FPSCR_SZ == '\0') {
      param_3 = (double)CONCAT44(*(undefined4 *)(DAT_8c01adc8 + param_4),SUB84(param_3,0));
    }
    else {
      param_3 = *(double *)(DAT_8c01adc8 + param_4);
    }
    uVar10 = (uint)DAT_8c01adcc;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c01adca + param_4) = (int)((ulonglong)param_3 >> 0x20);
    }
    else {
      *(double *)(DAT_8c01adca + param_4) = param_3;
    }
    iVar4 = (int)DAT_8c01adce;
    *(uint *)(param_4 + 0x2c) = uVar7 | uVar10;
    dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
    iVar4 = *(int *)((int)DAT_8c01add0 + *(int *)(iVar4 + param_4)) +
            (int)DAT_8c01add2 * (uint)*(ushort *)(param_4 + 0x54);
    *(byte *)(iVar4 + 8) = *(byte *)(iVar4 + 8) & 0xef;
    *(byte *)(DAT_8c01add4 + param_4) = *(byte *)(DAT_8c01add4 + param_4) & 0xef;
    (*(code *)PTR_FUN_8c01ade0)(param_4 + 0x10,2);
  }
  iVar4 = param_4 + DAT_8c01ac2a;
  if (*(int *)(iVar4 + 0x10) != 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar15 = (ulonglong)dVar14 & 0xffffffff;
    }
    else {
      uVar15 = *(ulonglong *)(param_4 + DAT_8c01ac2c + 0x10);
    }
    pdVar11 = (double *)(param_4 + DAT_8c01ac2c + 0x10);
    (*(code *)PTR_FUN_8c01ac44)(*(undefined4 *)(iVar4 + 0x10),0);
    dVar14 = (double)(uVar15 & 0xffffffff);
    (*(code *)PTR_FUN_8c01ac48)(*(undefined4 *)(iVar4 + 0x10));
    if (in_FPSCR_SZ == '\0') {
      param_3 = (double)CONCAT44(*(undefined4 *)pdVar11,*(undefined4 *)(iVar9 + 0x34));
    }
    else {
      param_3 = *pdVar11;
    }
    if (in_FPSCR_PR == '\0') {
      param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) + SUB84(param_3,0),
                                 SUB84(param_3,0));
    }
    else {
      param_3 = param_3 + param_3;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)pdVar11 = (int)((ulonglong)param_3 >> 0x20);
    }
    else {
      *pdVar11 = param_3;
    }
  }
  uVar7 = SUB84(dVar14,0);
  iVar4 = param_4 + DAT_8c01ac2c;
  if (*(char *)(*(int *)((int)DAT_8c01ac32 + *(int *)(DAT_8c01ac2e + param_4)) +
                (int)DAT_8c01ac30 * (uint)*(ushort *)(param_4 + 0x54) + 0x18) == '\0') {
    (*(code *)PTR_FUN_8c01ac4c)(*(undefined4 *)(DAT_8c01ac34 + param_4),0);
  }
  else {
    (*(code *)PTR_FUN_8c01ade4)(*(undefined4 *)(DAT_8c01add6 + param_4),1);
    iVar8 = *(int *)(param_4 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar17 = *(undefined4 *)(iVar8 + 0x50);
      param_3 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x4c),uVar17);
      uVar16 = CONCAT44(*(undefined4 *)(iVar8 + 0x54),param_2);
      *(undefined4 *)((int)puVar13 + -0x54) = *(undefined4 *)(iVar8 + 0x4c);
      *(undefined4 *)((int)puVar13 + -0x50) = uVar17;
    }
    else {
      param_3 = *(double *)(iVar8 + 0x4c);
      uVar19 = *(undefined8 *)(iVar8 + 0x50);
      uVar16 = *(undefined8 *)(iVar8 + 0x54);
      *(double *)((int)puVar13 + -0x54) = param_3;
      *(undefined8 *)((int)puVar13 + -0x50) = uVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar13 + -0x4c) = (int)((ulonglong)uVar16 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar13 + -0x4c) = uVar16;
    }
    *(undefined4 *)((int)puVar13 + -0x5c) = *(undefined4 *)((int)puVar13 + -0x50);
    uVar17 = *(undefined4 *)(DAT_8c01add6 + param_4);
    *(undefined4 *)((int)puVar13 + -0x58) = *(undefined4 *)((int)puVar13 + -0x4c);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)(ulonglong)uVar7;
    }
    else {
      dVar14 = *(double *)(iVar9 + 0x34);
    }
    *(undefined4 *)((int)puVar13 + -0x60) = *(undefined4 *)((int)puVar13 + -0x54);
    (*(code *)PTR_FUN_8c01ade8)(uVar17);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x34),uVar5);
  }
  else {
    dVar18 = *(double *)(iVar9 + 0x34);
  }
  if ((*(uint *)(param_4 + 0x2c) & DAT_8c01ac50) != 0) {
    iVar9 = (int)DAT_8c01add8;
    uVar7 = SUB84(dVar14,0);
    (*(code *)PTR_FUN_8c01adec)(param_4 + iVar9 + 0x60,3);
    uVar5 = (*(code *)PTR_FUN_8c01adf0)
                      (*(undefined4 *)((int)DAT_8c01addc + *(int *)(DAT_8c01adda + param_4)),2,1);
    *(undefined4 *)(param_4 + iVar9 + 0x84) = uVar5;
    dVar14 = (double)(ulonglong)uVar7;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
    else {
      *(double *)(iVar4 + 0x14) = dVar14;
    }
    *(uint *)(param_4 + 0x2c) = *(uint *)(param_4 + 0x2c) & DAT_8c01adf4;
  }
  iVar8 = 0;
  iVar9 = param_4 + DAT_8c01ac36;
  iVar12 = 3;
  do {
    if (*(int *)(iVar8 * 0x30 + iVar9 + 0x1c) != 0) {
      dVar3 = dVar18;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)((ulonglong)dVar14 & 0xffffffff);
      }
      dVar14 = dVar3;
      (*(code *)PTR_FUN_8c01adf8)(iVar8 * 0x30 + iVar9);
      if (*(int *)(iVar8 * 0x30 + iVar9 + 0x10) == 3) {
        if (in_FPSCR_SZ == '\0') {
          param_3 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x14),SUB84(param_3,0));
        }
        else {
          param_3 = *(double *)(iVar4 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) +
                                     (float)((ulonglong)dVar18 >> 0x20),SUB84(param_3,0));
        }
        else {
          param_3 = param_3 + dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(iVar4 + 0x14) = (int)((ulonglong)param_3 >> 0x20);
        }
        else {
          *(double *)(iVar4 + 0x14) = param_3;
        }
      }
    }
    iVar12 = iVar12 + -1;
    iVar8 = iVar8 + 1;
  } while (iVar12 != 0);
  if ((**(uint **)(DAT_8c01ac38 + param_4) & 4) != 0) {
    (**(code **)(*(int *)(param_4 + 0x28) + 0x80))
              (param_4 + *(int *)(*(int *)(param_4 + 0x28) + 0x78));
    uVar7 = SUB84(dVar14,0);
    iVar9 = *(int *)(DAT_8c01adda + param_4);
    cVar1 = *(char *)(iVar9 + 0x30);
    *(int *)((int)puVar13 + -8) = iVar9;
    if (cVar1 == '\x04') {
      *DAT_8c01af48 = 1;
      uVar2 = *(ushort *)(param_4 + 0x54);
      *(undefined **)((int)puVar13 + -0x60) = PTR_DAT_8c01af4c;
      *(undefined4 *)((int)puVar13 + -0x5c) =
           *(undefined4 *)(iVar9 + DAT_8c01af2e + (int)DAT_8c01af30 + (uint)uVar2 * 4);
      (*(code *)PTR_FID_conflict__sscanf_8c01af50)((undefined1 *)((int)puVar13 + -0x48));
      uVar15 = (ulonglong)uVar7;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar13 + -0x38) = 0;
        *(undefined4 *)((int)puVar13 + -0x34) = 0;
        *(undefined4 *)((int)puVar13 + -0x30) = 0;
      }
      else {
        *(ulonglong *)((int)puVar13 + -0x38) = uVar15;
        *(ulonglong *)((int)puVar13 + -0x34) = uVar15;
        *(ulonglong *)((int)puVar13 + -0x30) = uVar15;
      }
      iVar9 = (*(code *)PTR_FUN_8c01af54)(*(undefined4 *)(param_4 + 0x58),5);
      (*(code *)PTR__njCalcPoint_8c01af58)
                (iVar9 + 0x50,(undefined1 *)((int)puVar13 + -0x38),
                 (undefined1 *)((int)puVar13 + -0x2c));
      *(undefined4 *)((int)puVar13 + -0x34) = *(undefined4 *)((int)puVar13 + -0x28);
      *(undefined4 *)((int)puVar13 + -0x38) = *(undefined4 *)((int)puVar13 + -0x2c);
      *(undefined4 *)((int)puVar13 + -0x30) = *(undefined4 *)((int)puVar13 + -0x24);
      (*(code *)PTR_FUN_8c01af5c)
                (*(undefined4 *)(DAT_8c01af32 + param_4),(undefined1 *)((int)puVar13 + -0x48));
      (*(code *)PTR_FUN_8c01af60)
                (*(undefined4 *)(DAT_8c01af32 + param_4),(undefined1 *)((int)puVar13 + -0x38));
    }
    else if (*(int *)(iVar9 + 0x24) == 3) {
      uVar15 = (ulonglong)dVar14 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar13 + -0x20) = 0;
        *(undefined4 *)((int)puVar13 + -0x1c) = 0;
        *(undefined4 *)((int)puVar13 + -0x18) = 0;
      }
      else {
        *(ulonglong *)((int)puVar13 + -0x20) = uVar15;
        *(ulonglong *)((int)puVar13 + -0x1c) = uVar15;
        *(ulonglong *)((int)puVar13 + -0x18) = uVar15;
      }
      iVar9 = (*(code *)PTR_FUN_8c01adfc)(*(undefined4 *)(param_4 + 0x58),5);
      (*(code *)PTR__njCalcPoint_8c01ae00)
                (iVar9 + 0x50,(undefined1 *)((int)puVar13 + -0x20),
                 (undefined1 *)((int)puVar13 + -0x14));
      *(undefined4 *)((int)puVar13 + -0x1c) = *(undefined4 *)((int)puVar13 + -0x10);
      *(undefined4 *)((int)puVar13 + -0x18) = *(undefined4 *)((int)puVar13 + -0xc);
      uVar5 = *(undefined4 *)(DAT_8c01adde + param_4);
      *(undefined4 *)((int)puVar13 + -0x20) = *(undefined4 *)((int)puVar13 + -0x14);
      (*(code *)PTR_FUN_8c01ae04)(uVar5);
    }
  }
  return;
}

