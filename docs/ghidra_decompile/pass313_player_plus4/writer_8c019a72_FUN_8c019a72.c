// entry: 8c019a72
// name: FUN_8c019a72


void FUN_8c019a72(uint param_1,double param_2,int param_3)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  double dVar17;
  undefined4 uVar18;
  undefined8 in_dr14;
  double dVar19;
  undefined8 in_xd8;
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
  piVar7 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c019be6);
  (*(code *)piVar7[2])(param_3 + *piVar7);
  uVar6 = (undefined4)in_dr14;
  iVar10 = *(int *)((int)DAT_8c019bec + *(int *)(DAT_8c019be8 + param_3)) +
           (int)DAT_8c019bea * (uint)*(ushort *)(param_3 + 0x54);
  piVar7 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c019bee);
  iVar8 = (int)DAT_8c019bf0;
  iVar5 = (*(code *)piVar7[2])(param_3 + *piVar7,param_3 + iVar8);
  if (iVar5 == 0) {
    (*(code *)PTR_FUN_8c019d90)(param_3);
    piVar7 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c019d82);
    if (in_FPSCR_SZ != '\0') {
      param_1 = (uint)*(undefined8 *)(DAT_8c019d94 + 0x34);
    }
    (*(code *)piVar7[2])(param_3 + *piVar7);
    iVar5 = param_3 + DAT_8c019d84;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)(ulonglong)param_1;
    }
    else {
      dVar17 = *(double *)(DAT_8c019d94 + 0x34);
    }
    (*(code *)PTR_FUN_8c019d98)(iVar5);
    uVar14 = SUB84(dVar17,0);
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44(*(undefined4 *)(DAT_8c019d86 + param_3),
                                 *(undefined4 *)(DAT_8c019d94 + 0x34));
    }
    else {
      param_2 = *(double *)(DAT_8c019d86 + param_3);
      in_xd8 = *(undefined8 *)(DAT_8c019d94 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) + SUB84(param_2,0),
                                 SUB84(param_2,0));
    }
    else {
      param_2 = param_2 + param_2;
    }
    uVar18 = (undefined4)((ulonglong)param_2 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c019d86 + param_3) = uVar18;
      param_2 = (double)CONCAT44(uVar18,DAT_8c019d9c);
    }
    else {
      *(double *)(DAT_8c019d86 + param_3) = param_2;
      in_xd8 = CONCAT44(PTR_DAT_8c019da0,DAT_8c019d9c);
    }
    puVar2 = PTR_DAT_8c019da0;
    if (in_FPSCR_PR != '\0' || SUB84(param_2,0) <= (float)((ulonglong)param_2 >> 0x20)) {
      if (PTR_DAT_8c019da0[0x1c] == '\0') {
        uVar18 = *DAT_8c019db8;
      }
      else {
        uVar18 = *DAT_8c019da4;
      }
      (*(code *)PTR_FUN_8c019da8)(uVar18,PTR_DAT_8c019da0[0x1d]);
      (*(code *)PTR_FUN_8c019dac)(uVar18,puVar2[0x1e],puVar2[0x1f],0);
      uVar3 = DAT_8c019db0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | uVar3;
      dVar17 = (double)(ulonglong)uVar14;
      (*(code *)PTR_FUN_8c019db4)(param_3 + 0x10,2);
    }
  }
  else {
    piVar7 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c019bf0);
    (*(code *)piVar7[2])(param_3 + *piVar7);
    (*(code *)PTR_FUN_8c019c00)
              (*(undefined4 *)(DAT_8c019be8 + param_3),*(undefined2 *)(param_3 + 0x54));
    piVar7 = (int *)(*(int *)((int)DAT_8c019bf4 + *(int *)(DAT_8c019be8 + param_3)) +
                    (int)DAT_8c019bf2);
    (*(code *)piVar7[2])
              (*(int *)(DAT_8c019be8 + param_3) + *piVar7,*(undefined2 *)(param_3 + 0x54),
               param_3 + iVar8);
    puVar2 = PTR_FUN_8c019c04;
    *(byte *)(iVar10 + 8) = *(byte *)(iVar10 + 8) | 4;
    uVar18 = (*(code *)puVar2)(param_3);
    dVar17 = (double)(ulonglong)param_1;
    (*(code *)PTR_FUN_8c019c08)(param_3 + 0x10,uVar18);
    iVar5 = param_3 + DAT_8c019bf6;
  }
  iVar8 = param_3 + DAT_8c019bf8;
  if (*(int *)(iVar8 + 0x10) != 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar15 = (ulonglong)dVar17 & 0xffffffff;
    }
    else {
      uVar15 = *(ulonglong *)(param_3 + DAT_8c019bfa + 0x10);
    }
    pdVar11 = (double *)(param_3 + DAT_8c019bfa + 0x10);
    (*(code *)PTR_FUN_8c019c0c)(*(undefined4 *)(iVar8 + 0x10),0);
    dVar17 = (double)(uVar15 & 0xffffffff);
    (*(code *)PTR_FUN_8c019c10)(*(undefined4 *)(iVar8 + 0x10));
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44(*(undefined4 *)pdVar11,*(undefined4 *)(DAT_8c019c14 + 0x34));
    }
    else {
      param_2 = *pdVar11;
      in_xd8 = *(undefined8 *)(DAT_8c019c14 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) + SUB84(param_2,0),
                                 SUB84(param_2,0));
    }
    else {
      param_2 = param_2 + param_2;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)pdVar11 = (int)((ulonglong)param_2 >> 0x20);
    }
    else {
      *pdVar11 = param_2;
    }
  }
  uVar14 = SUB84(dVar17,0);
  iVar8 = param_3 + DAT_8c019bfa;
  if (*(char *)(*(int *)((int)DAT_8c019bec + *(int *)(DAT_8c019be8 + param_3)) +
                (int)DAT_8c019bea * (uint)*(ushort *)(param_3 + 0x54) + 0x18) == '\0') {
    (*(code *)PTR_FUN_8c019c18)(*(undefined4 *)(DAT_8c019bfc + param_3),0);
  }
  else {
    (*(code *)PTR_FUN_8c019dbc)(*(undefined4 *)(DAT_8c019d88 + param_3),1);
    iVar9 = *(int *)(param_3 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar18 = *(undefined4 *)(iVar9 + 0x50);
      param_2 = (double)CONCAT44(uVar18,*(undefined4 *)(iVar9 + 0x54));
      *(undefined4 *)((int)puVar13 + -0x54) = *(undefined4 *)(iVar9 + 0x4c);
      *(undefined4 *)((int)puVar13 + -0x50) = uVar18;
    }
    else {
      param_2 = *(double *)(iVar9 + 0x50);
      in_xd8 = *(undefined8 *)(iVar9 + 0x54);
      *(undefined8 *)((int)puVar13 + -0x54) = *(undefined8 *)(iVar9 + 0x4c);
      *(double *)((int)puVar13 + -0x50) = param_2;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar13 + -0x4c) = SUB84(param_2,0);
    }
    else {
      *(undefined8 *)((int)puVar13 + -0x4c) = in_xd8;
    }
    *(undefined4 *)((int)puVar13 + -0x5c) = *(undefined4 *)((int)puVar13 + -0x50);
    uVar18 = *(undefined4 *)(DAT_8c019d88 + param_3);
    *(undefined4 *)((int)puVar13 + -0x58) = *(undefined4 *)((int)puVar13 + -0x4c);
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)(ulonglong)uVar14;
    }
    else {
      dVar17 = *(double *)(DAT_8c019d94 + 0x34);
    }
    *(undefined4 *)((int)puVar13 + -0x60) = *(undefined4 *)((int)puVar13 + -0x54);
    (*(code *)PTR_FUN_8c019dc0)(uVar18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(*(undefined4 *)(DAT_8c019c14 + 0x34),uVar6);
  }
  else {
    dVar19 = *(double *)(DAT_8c019c14 + 0x34);
  }
  if ((*(uint *)(param_3 + 0x2c) & DAT_8c019c1c) != 0) {
    uVar14 = SUB84(dVar17,0);
    (*(code *)PTR_FUN_8c019dc4)(iVar5 + 0x60,3);
    uVar6 = (*(code *)PTR_FUN_8c019dc8)
                      (*(undefined4 *)((int)DAT_8c019d8c + *(int *)(DAT_8c019d8a + param_3)),2,1);
    *(undefined4 *)(iVar5 + 0x84) = uVar6;
    dVar17 = (double)(ulonglong)uVar14;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar8 + 0x14) = 0;
    }
    else {
      *(double *)(iVar8 + 0x14) = dVar17;
    }
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) & DAT_8c019dcc;
  }
  iVar9 = 0;
  iVar12 = 3;
  do {
    if (*(int *)(iVar9 * 0x30 + iVar5 + 0x1c) != 0) {
      dVar4 = dVar19;
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)((ulonglong)dVar17 & 0xffffffff);
      }
      dVar17 = dVar4;
      (*(code *)PTR_FUN_8c019d98)(iVar9 * 0x30 + iVar5);
      if (*(int *)(iVar9 * 0x30 + iVar5 + 0x10) == 3) {
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x14),SUB84(param_2,0));
        }
        else {
          param_2 = *(double *)(iVar8 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) +
                                     (float)((ulonglong)dVar19 >> 0x20),SUB84(param_2,0));
        }
        else {
          param_2 = param_2 + dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(iVar8 + 0x14) = (int)((ulonglong)param_2 >> 0x20);
        }
        else {
          *(double *)(iVar8 + 0x14) = param_2;
        }
      }
    }
    uVar14 = SUB84(dVar17,0);
    iVar12 = iVar12 + -1;
    iVar9 = iVar9 + 1;
  } while (iVar12 != 0);
  if ((**(uint **)(DAT_8c019bfe + param_3) & 4) != 0) {
    (**(code **)(*(int *)(param_3 + 0x28) + 0x80))
              (param_3 + *(int *)(*(int *)(param_3 + 0x28) + 0x78));
    uVar14 = SUB84(dVar17,0);
    iVar5 = *(int *)(DAT_8c019eca + param_3);
    *(int *)((int)puVar13 + -8) = iVar5;
    if (*(char *)(iVar5 + 0x30) == '\x04') {
      *DAT_8c019ee0 = 1;
      uVar1 = *(ushort *)(param_3 + 0x54);
      *(undefined **)((int)puVar13 + -0x60) = PTR_DAT_8c019ee4;
      *(undefined4 *)((int)puVar13 + -0x5c) =
           *(undefined4 *)(iVar5 + DAT_8c019ece + (int)DAT_8c019ed0 + (uint)uVar1 * 4);
      (*(code *)PTR_FID_conflict__sscanf_8c019ee8)((undefined1 *)((int)puVar13 + -0x48));
      uVar15 = (ulonglong)uVar14;
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
      iVar5 = (*(code *)PTR_FUN_8c019ed4)(*(undefined4 *)(param_3 + 0x58),5);
      uVar14 = (uint)uVar15;
      (*(code *)PTR__njCalcPoint_8c019ed8)
                (iVar5 + 0x50,(undefined1 *)((int)puVar13 + -0x38),
                 (undefined1 *)((int)puVar13 + -0x2c));
      *(undefined4 *)((int)puVar13 + -0x38) = *(undefined4 *)((int)puVar13 + -0x2c);
      *(undefined4 *)((int)puVar13 + -0x34) = *(undefined4 *)((int)puVar13 + -0x28);
      *(undefined4 *)((int)puVar13 + -0x30) = *(undefined4 *)((int)puVar13 + -0x24);
      (*(code *)PTR_FUN_8c019eec)
                (*(undefined4 *)(DAT_8c019ecc + param_3),(undefined1 *)((int)puVar13 + -0x48));
      (*(code *)PTR_FUN_8c019edc)
                (*(undefined4 *)(DAT_8c019ecc + param_3),(undefined1 *)((int)puVar13 + -0x38));
    }
    else if (*(int *)(iVar5 + 0x24) == 3) {
      uVar15 = (ulonglong)dVar17 & 0xffffffff;
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
      iVar5 = (*(code *)PTR_FUN_8c019ed4)(*(undefined4 *)(param_3 + 0x58),5);
      uVar14 = (uint)uVar15;
      (*(code *)PTR__njCalcPoint_8c019ed8)
                (iVar5 + 0x50,(undefined1 *)((int)puVar13 + -0x20),
                 (undefined1 *)((int)puVar13 + -0x14));
      *(undefined4 *)((int)puVar13 + -0x1c) = *(undefined4 *)((int)puVar13 + -0x10);
      *(undefined4 *)((int)puVar13 + -0x18) = *(undefined4 *)((int)puVar13 + -0xc);
      uVar6 = *(undefined4 *)(DAT_8c019ecc + param_3);
      *(undefined4 *)((int)puVar13 + -0x20) = *(undefined4 *)((int)puVar13 + -0x14);
      (*(code *)PTR_FUN_8c019edc)(uVar6,(undefined4 *)((int)puVar13 + -0x20));
    }
  }
  if (in_FPSCR_SZ == '\0') {
    uVar16 = CONCAT44(*(undefined4 *)(iVar10 + 0x28),uVar14);
  }
  else {
    uVar16 = *(undefined8 *)(iVar10 + 0x28);
  }
  (*(code *)PTR_FUN_8c019c20)(uVar16,*(undefined4 *)(param_3 + 0x58));
  return;
}

