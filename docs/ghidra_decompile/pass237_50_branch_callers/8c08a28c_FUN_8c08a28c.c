// entry: 8c08a28c
// name: FUN_8c08a28c
// signature: undefined FUN_8c08a28c(void)


void FUN_8c08a28c(uint *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int local_40;
  int *piVar18;
  int local_30;
  undefined4 uVar19;
  
  uVar19 = 0xffffffff;
  piVar16 = (int *)(param_2 + 0x1c);
  iVar13 = param_2 + 2;
  local_40 = 0;
  local_30 = 4;
  piVar18 = piVar16;
  do {
    puVar1 = PTR_FUN_8c08a42c;
    iVar17 = piVar16[local_40];
    if (iVar17 != 0) {
      uVar4 = (*(code *)PTR_FUN_8c08a42c)(iVar13,iVar17 + 2,uVar19);
      puVar2 = PTR_FUN_8c08a430;
      uVar5 = (*(code *)puVar1)();
      iVar6 = (*(code *)puVar2)(param_1[2],uVar4,uVar5);
      puVar1 = PTR_FUN_8c08a42c;
      if (iVar6 == 0x60) {
        iVar6 = 1;
      }
      iVar7 = (*(code *)PTR_FUN_8c08a42c)();
      iVar8 = (*(code *)puVar1)();
      puVar1 = PTR_FUN_8c08a42c;
      uVar15 = param_1[8];
      iVar14 = *(int *)((int)DAT_8c08a428 + (int)param_1);
      if (*(char *)(uVar15 * iVar7 + iVar8 + iVar14) != '`') {
        iVar7 = (*(code *)PTR_FUN_8c08a42c)();
        iVar8 = (*(code *)puVar1)();
        *(char *)(uVar15 * iVar8 + iVar7 + iVar14) = (char)iVar6;
      }
      iVar7 = 1;
      iVar6 = 2;
      do {
        puVar1 = PTR_FUN_8c08a42c;
        iVar8 = *(int *)(PTR_DAT_8c08a434 +
                        ((((*(byte *)(param_2 + 9) & 8) == 0) - 1) * -0x10 + iVar7 * 2) * 4 +
                        local_40 * 0x10);
        iVar14 = *(int *)(PTR_DAT_8c08a438 +
                         ((((*(byte *)(param_2 + 9) & 8) == 0) - 1) * -0x10 + iVar7 * 2) * 4 +
                         local_40 * 0x10);
        if (iVar7 == 1) {
          iVar9 = (*(code *)PTR_FUN_8c08a6cc)();
          iVar10 = (*(code *)PTR_FUN_8c08a6cc)();
          iVar11 = (*(code *)PTR_FUN_8c08a6cc)();
          iVar12 = (*(code *)PTR_FUN_8c08a6cc)();
          uVar3 = (*(code *)PTR_FUN_8c08a6d4)(param_1[2],iVar11 + iVar8,iVar12 + iVar14);
          *(undefined1 *)
           (param_1[8] * (iVar10 + iVar14) + iVar9 + iVar8 +
           *(int *)((int)DAT_8c08a6c6 + (int)param_1)) = uVar3;
        }
        else {
          iVar9 = (*(code *)PTR_FUN_8c08a42c)();
          puVar2 = PTR_FUN_8c08a43c;
          (*(code *)PTR_FUN_8c08a43c)(iVar9 + iVar8);
          (*(code *)puVar1)();
          (*(code *)puVar2)();
          iVar9 = (*(code *)puVar1)();
          iVar10 = (*(code *)puVar1)();
          *(undefined1 *)
           (param_1[8] * (iVar10 + iVar14) + iVar9 + iVar8 +
           *(int *)((int)DAT_8c08a428 + (int)param_1)) = 0x60;
          piVar16[local_40] = 0;
        }
        puVar1 = PTR_FUN_8c08a42c;
        iVar6 = iVar6 + -1;
        iVar7 = iVar7 + 1;
      } while (iVar6 != 0);
      iVar6 = (*(code *)PTR_FUN_8c08a42c)();
      iVar7 = (*(code *)puVar1)();
      *(int *)((param_1[8] * iVar6 + iVar7) * 4 + *(int *)((int)DAT_8c08a42a + (int)param_1)) =
           iVar17;
    }
    puVar1 = PTR_FUN_8c08a588;
    local_30 = local_30 + -1;
    local_40 = local_40 + 1;
  } while (local_30 != 0);
  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xf;
  iVar13 = (*(code *)puVar1)();
  iVar13 = iVar13 + -1;
  iVar17 = (*(code *)puVar1)();
  if (*(int *)((int)DAT_8c08a584 + (int)param_1) == 0) {
    iVar13 = 0;
  }
  else if (((*param_1 & 2) == 0) ||
          ((((-1 < iVar13 && (iVar13 < (int)param_1[8])) && (-1 < iVar17)) &&
           (iVar17 < (int)param_1[9])))) {
    iVar13 = *(int *)((param_1[8] * iVar17 + iVar13) * 4 +
                     *(int *)((int)DAT_8c08a584 + (int)param_1));
  }
  else {
    iVar13 = 0;
  }
  *piVar18 = iVar13;
  if (iVar13 != 0) {
    (*(code *)PTR_FUN_8c08a58c)();
    (*(code *)PTR_FUN_8c08a590)();
  }
  puVar1 = PTR_FUN_8c08a588;
  iVar13 = (*(code *)PTR_FUN_8c08a588)();
  iVar13 = iVar13 + 1;
  iVar17 = (*(code *)puVar1)();
  if (*(int *)((int)DAT_8c08a584 + (int)param_1) == 0) {
    iVar13 = 0;
  }
  else if (((*param_1 & 2) == 0) ||
          (((-1 < iVar13 && (iVar13 < (int)param_1[8])) &&
           ((-1 < iVar17 && (iVar17 < (int)param_1[9])))))) {
    iVar13 = *(int *)((param_1[8] * iVar17 + iVar13) * 4 +
                     *(int *)((int)DAT_8c08a584 + (int)param_1));
  }
  else {
    iVar13 = 0;
  }
  piVar18[1] = iVar13;
  if (iVar13 != 0) {
    (*(code *)PTR_FUN_8c08a58c)();
    (*(code *)PTR_FUN_8c08a590)();
  }
  puVar1 = PTR_FUN_8c08a588;
  iVar13 = (*(code *)PTR_FUN_8c08a588)();
  iVar17 = (*(code *)puVar1)();
  iVar17 = iVar17 + -1;
  if (*(int *)((int)DAT_8c08a584 + (int)param_1) == 0) {
    iVar13 = 0;
  }
  else if (((*param_1 & 2) == 0) ||
          (((-1 < iVar13 && (iVar13 < (int)param_1[8])) &&
           ((-1 < iVar17 && (iVar17 < (int)param_1[9])))))) {
    iVar13 = *(int *)((param_1[8] * iVar17 + iVar13) * 4 +
                     *(int *)((int)DAT_8c08a584 + (int)param_1));
  }
  else {
    iVar13 = 0;
  }
  piVar18[2] = iVar13;
  if (iVar13 != 0) {
    (*(code *)PTR_FUN_8c08a58c)();
    (*(code *)PTR_FUN_8c08a6c8)();
  }
  iVar13 = (*(code *)PTR_FUN_8c08a6cc)();
  iVar17 = (*(code *)PTR_FUN_8c08a6cc)();
  iVar17 = iVar17 + 1;
  if (*(int *)((int)DAT_8c08a6c4 + (int)param_1) == 0) {
    iVar13 = 0;
  }
  else if (((*param_1 & 2) == 0) ||
          ((((-1 < iVar13 && (iVar13 < (int)param_1[8])) && (-1 < iVar17)) &&
           (iVar17 < (int)param_1[9])))) {
    iVar13 = *(int *)((param_1[8] * iVar17 + iVar13) * 4 +
                     *(int *)((int)DAT_8c08a6c4 + (int)param_1));
  }
  else {
    iVar13 = 0;
  }
  piVar18[3] = iVar13;
  if (iVar13 != 0) {
    (*(code *)PTR_FUN_8c08a6d0)(piVar18 + 3);
    (*(code *)PTR_FUN_8c08a6c8)();
  }
  return;
}

