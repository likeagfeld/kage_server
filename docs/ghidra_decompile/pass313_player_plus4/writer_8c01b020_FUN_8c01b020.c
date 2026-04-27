// entry: 8c01b020
// name: FUN_8c01b020


void FUN_8c01b020(uint param_1,double param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  double dVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 in_dr14;
  double dVar17;
  undefined8 in_xd8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  undefined4 uVar16;
  
  iVar7 = DAT_8c01b194;
  if (in_FPSCR_SZ == '\0') {
    puVar11 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar11 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar11 + -4) = in_PR;
  piVar5 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c01b180);
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)(ulonglong)param_1;
  }
  else {
    dVar13 = *(double *)(DAT_8c01b194 + 0x34);
  }
  (*(code *)piVar5[2])(param_3 + *piVar5);
  uVar6 = (undefined4)in_dr14;
  iVar4 = (*(code *)PTR_FUN_8c01b198)(*(undefined4 *)(*(int *)(param_3 + 0x58) + 4),3);
  if (iVar4 == 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar14 = (ulonglong)dVar13 & 0xffffffff;
    }
    else {
      uVar14 = CONCAT44(PTR_FUN_8c01b1b0,DAT_8c01b1ac);
    }
    piVar5 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c01b186);
    (*(code *)piVar5[2])(param_3 + *piVar5,1);
    dVar13 = (double)(uVar14 & 0xffffffff);
    (*(code *)PTR_FUN_8c01b1b0)(param_3 + 0x10,2);
  }
  iVar4 = param_3 + DAT_8c01b182;
  if (*(int *)(iVar4 + 0x10) != 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar14 = (ulonglong)dVar13 & 0xffffffff;
    }
    else {
      uVar14 = *(ulonglong *)(param_3 + DAT_8c01b184 + 0x10);
    }
    pdVar9 = (double *)(param_3 + DAT_8c01b184 + 0x10);
    (*(code *)PTR_FUN_8c01b19c)(*(undefined4 *)(iVar4 + 0x10),0);
    dVar13 = (double)(uVar14 & 0xffffffff);
    (*(code *)PTR_FUN_8c01b1a0)(*(undefined4 *)(iVar4 + 0x10));
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44(*(undefined4 *)pdVar9,*(undefined4 *)(iVar7 + 0x34));
    }
    else {
      param_2 = *pdVar9;
      in_xd8 = *(undefined8 *)(iVar7 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) + SUB84(param_2,0),
                                 SUB84(param_2,0));
    }
    else {
      param_2 = param_2 + param_2;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)pdVar9 = (int)((ulonglong)param_2 >> 0x20);
    }
    else {
      *pdVar9 = param_2;
    }
  }
  uVar12 = SUB84(dVar13,0);
  iVar4 = param_3 + DAT_8c01b184;
  if (*(char *)(*(int *)((int)DAT_8c01b18a + *(int *)(DAT_8c01b186 + param_3)) +
                (int)DAT_8c01b188 * (uint)*(ushort *)(param_3 + 0x54) + 0x18) == '\0') {
    (*(code *)PTR_FUN_8c01b1a4)(*(undefined4 *)(DAT_8c01b18c + param_3),0);
  }
  else {
    (*(code *)PTR_FUN_8c01b1a4)(*(undefined4 *)(DAT_8c01b18c + param_3),1);
    iVar8 = *(int *)(param_3 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)(iVar8 + 0x50);
      param_2 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x4c),*(undefined4 *)(iVar8 + 0x54));
      *(undefined4 *)((int)puVar11 + -0x54) = *(undefined4 *)(iVar8 + 0x4c);
      *(undefined4 *)((int)puVar11 + -0x50) = uVar16;
    }
    else {
      param_2 = *(double *)(iVar8 + 0x4c);
      uVar15 = *(undefined8 *)(iVar8 + 0x50);
      in_xd8 = *(undefined8 *)(iVar8 + 0x54);
      *(double *)((int)puVar11 + -0x54) = param_2;
      *(undefined8 *)((int)puVar11 + -0x50) = uVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar11 + -0x4c) = SUB84(param_2,0);
    }
    else {
      *(undefined8 *)((int)puVar11 + -0x4c) = in_xd8;
    }
    *(undefined4 *)((int)puVar11 + -0x60) = *(undefined4 *)((int)puVar11 + -0x54);
    uVar16 = *(undefined4 *)(DAT_8c01b18c + param_3);
    *(undefined4 *)((int)puVar11 + -0x58) = *(undefined4 *)((int)puVar11 + -0x4c);
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)(ulonglong)uVar12;
    }
    else {
      dVar13 = *(double *)(iVar7 + 0x34);
    }
    *(undefined4 *)((int)puVar11 + -0x5c) = *(undefined4 *)((int)puVar11 + -0x50);
    (*(code *)PTR_FUN_8c01b1b4)(uVar16);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x34),uVar6);
  }
  else {
    dVar17 = *(double *)(iVar7 + 0x34);
  }
  if ((*(uint *)(param_3 + 0x2c) & DAT_8c01b1a8) != 0) {
    iVar7 = (int)DAT_8c01b33c;
    uVar12 = SUB84(dVar13,0);
    (*(code *)PTR_FUN_8c01b34c)(param_3 + iVar7 + 0x60,3);
    uVar6 = (*(code *)PTR_FUN_8c01b350)
                      (*(undefined4 *)((int)DAT_8c01b340 + *(int *)(DAT_8c01b33e + param_3)),2,1);
    *(undefined4 *)(param_3 + iVar7 + 0x84) = uVar6;
    dVar13 = (double)(ulonglong)uVar12;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
    else {
      *(double *)(iVar4 + 0x14) = dVar13;
    }
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) & DAT_8c01b354;
  }
  iVar8 = 0;
  iVar7 = param_3 + DAT_8c01b18e;
  iVar10 = 3;
  do {
    if (*(int *)(iVar8 * 0x30 + iVar7 + 0x1c) != 0) {
      dVar3 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)((ulonglong)dVar13 & 0xffffffff);
      }
      dVar13 = dVar3;
      (*(code *)PTR_FUN_8c01b358)(iVar8 * 0x30 + iVar7);
      if (*(int *)(iVar8 * 0x30 + iVar7 + 0x10) == 3) {
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x14),SUB84(param_2,0));
        }
        else {
          param_2 = *(double *)(iVar4 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) +
                                     (float)((ulonglong)dVar17 >> 0x20),SUB84(param_2,0));
        }
        else {
          param_2 = param_2 + dVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(iVar4 + 0x14) = (int)((ulonglong)param_2 >> 0x20);
        }
        else {
          *(double *)(iVar4 + 0x14) = param_2;
        }
      }
    }
    iVar10 = iVar10 + -1;
    iVar8 = iVar8 + 1;
  } while (iVar10 != 0);
  if ((**(uint **)(DAT_8c01b190 + param_3) & 4) != 0) {
    (**(code **)(*(int *)(param_3 + 0x28) + 0x80))
              (param_3 + *(int *)(*(int *)(param_3 + 0x28) + 0x78));
    uVar12 = SUB84(dVar13,0);
    iVar7 = *(int *)(DAT_8c01b33e + param_3);
    cVar1 = *(char *)(iVar7 + 0x30);
    *(int *)((int)puVar11 + -8) = iVar7;
    if (cVar1 == '\x04') {
      *DAT_8c01b368 = 1;
      uVar2 = *(ushort *)(param_3 + 0x54);
      *(undefined **)((int)puVar11 + -0x60) = PTR_DAT_8c01b36c;
      *(undefined4 *)((int)puVar11 + -0x5c) =
           *(undefined4 *)(iVar7 + DAT_8c01b344 + (int)DAT_8c01b346 + (uint)uVar2 * 4);
      (*(code *)PTR_FID_conflict__sscanf_8c01b370)((undefined1 *)((int)puVar11 + -0x48));
      uVar14 = (ulonglong)uVar12;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar11 + -0x38) = 0;
        *(undefined4 *)((int)puVar11 + -0x34) = 0;
        *(undefined4 *)((int)puVar11 + -0x30) = 0;
      }
      else {
        *(ulonglong *)((int)puVar11 + -0x38) = uVar14;
        *(ulonglong *)((int)puVar11 + -0x34) = uVar14;
        *(ulonglong *)((int)puVar11 + -0x30) = uVar14;
      }
      iVar7 = (*(code *)PTR_FUN_8c01b35c)(*(undefined4 *)(param_3 + 0x58),5);
      (*(code *)PTR__njCalcPoint_8c01b360)
                (iVar7 + 0x50,(undefined1 *)((int)puVar11 + -0x38),
                 (undefined1 *)((int)puVar11 + -0x2c));
      *(undefined4 *)((int)puVar11 + -0x38) = *(undefined4 *)((int)puVar11 + -0x2c);
      *(undefined4 *)((int)puVar11 + -0x34) = *(undefined4 *)((int)puVar11 + -0x28);
      *(undefined4 *)((int)puVar11 + -0x30) = *(undefined4 *)((int)puVar11 + -0x24);
      (*(code *)PTR_FUN_8c01b374)
                (*(undefined4 *)(DAT_8c01b342 + param_3),(undefined1 *)((int)puVar11 + -0x48));
      (*(code *)PTR_FUN_8c01b364)
                (*(undefined4 *)(DAT_8c01b342 + param_3),(undefined1 *)((int)puVar11 + -0x38));
    }
    else if (*(int *)(iVar7 + 0x24) == 3) {
      uVar14 = (ulonglong)dVar13 & 0xffffffff;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar11 + -0x20) = 0;
        *(undefined4 *)((int)puVar11 + -0x1c) = 0;
        *(undefined4 *)((int)puVar11 + -0x18) = 0;
      }
      else {
        *(ulonglong *)((int)puVar11 + -0x20) = uVar14;
        *(ulonglong *)((int)puVar11 + -0x1c) = uVar14;
        *(ulonglong *)((int)puVar11 + -0x18) = uVar14;
      }
      iVar7 = (*(code *)PTR_FUN_8c01b35c)(*(undefined4 *)(param_3 + 0x58),5);
      (*(code *)PTR__njCalcPoint_8c01b360)
                (iVar7 + 0x50,(undefined1 *)((int)puVar11 + -0x20),
                 (undefined1 *)((int)puVar11 + -0x14));
      *(undefined4 *)((int)puVar11 + -0x1c) = *(undefined4 *)((int)puVar11 + -0x10);
      *(undefined4 *)((int)puVar11 + -0x18) = *(undefined4 *)((int)puVar11 + -0xc);
      uVar6 = *(undefined4 *)(DAT_8c01b342 + param_3);
      *(undefined4 *)((int)puVar11 + -0x20) = *(undefined4 *)((int)puVar11 + -0x14);
      (*(code *)PTR_FUN_8c01b364)(uVar6);
    }
  }
  return;
}

