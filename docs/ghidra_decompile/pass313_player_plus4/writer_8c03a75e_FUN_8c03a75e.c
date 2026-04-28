// entry: 8c03a75e
// name: FUN_8c03a75e


/* WARNING: Removing unreachable block (ram,0x8c03a7dc) */

void FUN_8c03a75e(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  double dVar16;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_c;
  
  iVar3 = (*(code *)PTR_FUN_8c03a890)
                    (*(undefined4 *)(DAT_8c03a882 + param_2),*(undefined2 *)(param_2 + 0x54));
  puVar1 = PTR_FUN_8c03a894;
  if (iVar3 < 2) {
    *(undefined4 *)(DAT_8c03a884 + param_2) = 0;
    return;
  }
  iVar4 = (*(code *)PTR_FUN_8c03a894)
                    (*(undefined2 *)
                      (*(int *)((int)DAT_8c03a888 + *(int *)(DAT_8c03a882 + param_2)) + 2));
  iVar5 = (*(code *)puVar1)();
  iVar4 = iVar4 - iVar5;
  iVar5 = (*(code *)puVar1)();
  iVar6 = (*(code *)puVar1)();
  iVar5 = iVar5 - iVar6;
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44((float)iVar5,(float)iVar4);
  }
  else {
    dVar16 = (double)iVar5;
  }
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44(ABS((float)((ulonglong)dVar16 >> 0x20)),ABS(SUB84(dVar16,0)));
  }
  else {
    dVar16 = ABS(ABS(dVar16));
  }
  if (in_FPSCR_PR == '\0') {
    iVar6 = (int)(SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar16 + dVar16);
  }
  iVar7 = (*(code *)PTR_FUN_8c03a898)
                    (*(undefined4 *)(DAT_8c03a882 + param_2),*(undefined2 *)(param_2 + 0x54));
  puVar2 = PTR_DAT_8c03a9ec;
  if (((iVar7 == 0) && (iVar6 < 5)) && (3 < iVar3)) {
    iVar3 = (int)DAT_8c03a9de;
    uVar12 = *(undefined4 *)(PTR_DAT_8c03a9ec + 4);
    *(undefined4 *)(DAT_8c03a9e0 + param_2) = 1;
    puVar14 = (undefined4 *)(param_2 + iVar3);
    uVar9 = *(undefined4 *)puVar2;
    puVar14[1] = uVar12;
    *puVar14 = uVar9;
    puVar14[2] = *(undefined4 *)(puVar2 + 8);
    return;
  }
  uVar8 = (*(code *)PTR_FUN_8c03a89c)(param_2);
  iVar6 = 0;
  iVar3 = 2;
  do {
    uVar11 = uVar8 >> 1;
    uVar10 = uVar8 & 1;
    uVar8 = (uVar11 & 0xff) >> 1;
    iVar3 = iVar3 + -1;
    iVar6 = iVar6 + uVar10 + (uVar11 & 1);
  } while (iVar3 != 0);
  if (iVar6 < 3) {
    *(undefined4 *)(DAT_8c03a9e0 + param_2) = 0;
    return;
  }
  uVar9 = (*(code *)puVar1)();
  iVar3 = (*(code *)puVar1)();
  if (iVar4 < -1) {
    if ((((-2 < iVar5) && (iVar5 < 2)) && (iVar4 < -2)) &&
       (iVar3 = (*(code *)PTR_FUN_8c03aa64)(*(undefined4 *)(DAT_8c03aa5e + param_2)), iVar3 != 0)) {
      if (in_FPSCR_SZ == '\0') {
        uVar15 = CONCAT44(DAT_8c03aa68,param_1);
      }
      else {
        uVar15 = CONCAT44(PTR_FUN_8c03aa6c,DAT_8c03aa68);
      }
      (*(code *)PTR_FUN_8c03aa6c)(uVar15,param_2);
      if (in_FPSCR_SZ == '\0') {
        uVar15 = CONCAT44(DAT_8c03aa68,(int)uVar15);
      }
      else {
        uVar15 = CONCAT44(PTR_FUN_8c03aa6c,DAT_8c03aa68);
      }
      (*(code *)PTR_FUN_8c03aa70)(uVar15,param_2);
      param_1 = (undefined4)uVar15;
      *(undefined1 *)(DAT_8c03aa60 + param_2) = 1;
      goto LAB_8c03a902;
    }
  }
  else if (iVar4 < 2) {
    if (iVar5 < -2) {
      iVar3 = (*(code *)PTR_FUN_8c03a9f0)(*(undefined4 *)(DAT_8c03a9e2 + param_2),uVar9,iVar3 + -1);
      if (iVar3 != 0) {
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(DAT_8c03aa20,param_1);
        }
        else {
          uVar15 = CONCAT44(uRam8c03aa24,DAT_8c03aa20);
        }
        (*(code *)PTR_FUN_8c03a9f8)(uVar15,param_2);
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(DAT_8c03aa20,(int)uVar15);
        }
        else {
          uVar15 = CONCAT44(uRam8c03aa24,DAT_8c03aa20);
        }
        (*(code *)PTR_FUN_8c03a9fc)(uVar15,param_2);
        param_1 = (undefined4)uVar15;
        *(undefined1 *)(DAT_8c03a9e4 + param_2) = 4;
        goto LAB_8c03a902;
      }
    }
    else if ((2 < iVar5) &&
            (iVar3 = (*(code *)PTR_FUN_8c03a9f0)
                               (*(undefined4 *)(DAT_8c03a9e2 + param_2),uVar9,iVar3 + 1), iVar3 != 0
            )) {
      (*(code *)PTR_FUN_8c03a9f8)(param_2);
      (*(code *)PTR_FUN_8c03a9fc)(param_2);
      *(undefined1 *)(DAT_8c03a9e4 + param_2) = 8;
LAB_8c03a902:
      if (in_FPSCR_SZ == '\0') {
        uVar15 = CONCAT44(*(undefined4 *)(DAT_8c03a9e6 + param_2),param_1);
      }
      else {
        uVar15 = *(undefined8 *)(DAT_8c03a9e6 + param_2);
      }
      (*(code *)PTR_FUN_8c03aa00)(uVar15,*(undefined4 *)(param_2 + 0x58));
      (*(code *)PTR_FUN_8c03aa04)(*(undefined4 *)(param_2 + 0x58),0x11);
      puVar1 = PTR_DAT_8c03aa0c;
      *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | DAT_8c03aa08;
      pcVar13 = puVar1 + DAT_8c03a9e8;
      if (*pcVar13 == '\0') {
        local_c = *DAT_8c03aa10;
      }
      else {
        local_c = *DAT_8c03aa74;
      }
      (*(code *)PTR_FUN_8c03aa14)(pcVar13[1]);
      (*(code *)PTR_FUN_8c03aa18)(local_c,pcVar13[2],pcVar13[3],0);
      puVar1 = PTR_DAT_8c03aa1c;
      iVar3 = (int)DAT_8c03a9de;
      *(undefined4 *)(DAT_8c03a9e0 + param_2) = 1;
      puVar14 = (undefined4 *)(param_2 + iVar3);
      uVar12 = *(undefined4 *)puVar1;
      puVar14[1] = *(undefined4 *)(puVar1 + 4);
      uVar9 = *(undefined4 *)(puVar1 + 8);
      *puVar14 = uVar12;
      puVar14[2] = uVar9;
      return;
    }
  }
  else if (((-2 < iVar5) && (iVar5 < 2)) &&
          ((2 < iVar4 &&
           (iVar3 = (*(code *)PTR_FUN_8c03a9f0)(*(undefined4 *)(DAT_8c03a9e2 + param_2)), iVar3 != 0
           )))) {
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(DAT_8c03a9f4,param_1);
    }
    else {
      uVar15 = CONCAT44(PTR_FUN_8c03a9f8,DAT_8c03a9f4);
    }
    (*(code *)PTR_FUN_8c03a9f8)(uVar15,param_2);
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(DAT_8c03a9f4,(int)uVar15);
    }
    else {
      uVar15 = CONCAT44(PTR_FUN_8c03a9f8,DAT_8c03a9f4);
    }
    (*(code *)PTR_FUN_8c03a9fc)(uVar15,param_2);
    param_1 = (undefined4)uVar15;
    *(undefined1 *)(DAT_8c03a9e4 + param_2) = 2;
    goto LAB_8c03a902;
  }
  *(undefined4 *)(DAT_8c03a884 + param_2) = 0;
                    /* WARNING: Read-only address (ram,0x8c03aa24) is written */
  return;
}

