// entry: 8c0174de
// name: FUN_8c0174de


/* WARNING: Removing unreachable block (ram,0x8c017602) */

void FUN_8c0174de(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStackY_18;
  undefined4 local_14;
  
  iVar7 = *(int *)((int)DAT_8c01757c + *(int *)(DAT_8c017578 + param_4)) +
          (int)DAT_8c01757a * (uint)*(ushort *)(param_4 + 0x54);
  piVar2 = (int *)(*(int *)(param_4 + 0x28) + (int)DAT_8c01756e);
  (*(code *)piVar2[2])(param_4 + *piVar2,&DAT_8c28561c);
  (*(code *)PTR_FUN_8c01758c)
            (*(undefined4 *)(DAT_8c017578 + param_4),*(undefined2 *)(param_4 + 0x54));
  piVar2 = (int *)(*(int *)((int)DAT_8c017580 + *(int *)(DAT_8c017578 + param_4)) +
                  (int)DAT_8c01757e);
  (*(code *)piVar2[2])
            (*(int *)(DAT_8c017578 + param_4) + *piVar2,*(undefined2 *)(param_4 + 0x54),
             param_4 + DAT_8c01756e);
  *(byte *)(iVar7 + 8) = *(byte *)(iVar7 + 8) | 4;
  uVar4 = 4;
  if (*(char *)(*(int *)(DAT_8c017572 + param_4) + 0x30) == '\x04') {
    uVar4 = (*(code *)PTR_FUN_8c017694)(4);
    uVar1 = (*(code *)PTR_FUN_8c017694)();
    (*(code *)PTR_FUN_8c017698)(*(undefined4 *)(DAT_8c017682 + param_4),uVar4,uVar1);
    iVar7 = (*(code *)PTR_FUN_8c017694)();
    if (iVar7 == 1) {
      *(undefined1 *)(DAT_8c017684 + param_4) = 2;
      iVar7 = 0x5a;
    }
    else if (iVar7 == 2) {
      iVar7 = (int)DAT_8c01768e;
      *(undefined1 *)(DAT_8c017684 + param_4) = 1;
    }
    else if (iVar7 == 4) {
      *(undefined1 *)(DAT_8c017684 + param_4) = 8;
      iVar7 = 0;
    }
    else if (iVar7 == 8) {
      iVar7 = (int)DAT_8c017686;
      *(undefined1 *)(DAT_8c017684 + param_4) = 4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)iVar7,param_3);
    }
    else {
      dVar9 = (double)iVar7;
    }
    uVar3 = *(uint *)(param_4 + 0x2c);
    uVar5 = (uint)DAT_8c01768a;
    uVar4 = (undefined4)((ulonglong)dVar9 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c017688 + param_4) = uVar4;
    }
    else {
      *(double *)(DAT_8c017688 + param_4) = dVar9;
    }
    uVar3 = uVar3 | uVar5 | uVar5;
    iVar7 = (int)DAT_8c01768c;
    *(uint *)(param_4 + 0x2c) = uVar3;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar7 + param_4) = uVar4;
    }
    else {
      *(double *)(iVar7 + param_4) = dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c017688 + param_4) = uVar4;
    }
    else {
      *(double *)(DAT_8c017688 + param_4) = dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)(ulonglong)*(uint *)(DAT_8c01768c + param_4);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar10 = CONCAT44(*(undefined4 *)(DAT_8c017688 + param_4),SUB84(dVar9,0));
    }
    else {
      uVar10 = *(undefined8 *)(DAT_8c017688 + param_4);
    }
    if ((uVar3 & uVar5) != 0 || (float)uVar10 != (float)((ulonglong)uVar10 >> 0x20)) {
      puVar6 = (undefined8 *)(*(int *)(param_4 + 0x58) + 0x58);
      uVar4 = *(undefined4 *)puVar6;
      uVar10 = *puVar6;
      local_14 = *(undefined4 *)(*(int *)(param_4 + 0x58) + 0x60);
      (*(code *)PTR_FUN_8c01769c)(param_4);
      if (in_FPSCR_SZ == '\0') {
        uVar10 = CONCAT44(uVar4,param_1);
        uStackY_18 = *(undefined4 *)(DAT_8c01768c + param_4);
      }
      else {
        uVar8 = *(undefined8 *)(DAT_8c01768c + param_4);
        local_14 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStackY_18 = (undefined4)uVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),uStackY_18);
        uVar8 = CONCAT44(local_14,param_2);
      }
      else {
        uVar8 = CONCAT44(in_PR,local_14);
      }
      (*(code *)PTR_FUN_8c0176a0)(uVar10,uVar8,*(undefined4 *)(param_4 + 0x58));
    }
    uVar4 = 0xe;
  }
  (*(code *)PTR_FUN_8c017590)(param_4 + 0x10,uVar4);
  return;
}

