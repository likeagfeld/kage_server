// entry: 8c01dce8
// name: FUN_8c01dce8


void FUN_8c01dce8(uint param_1,uint param_2,undefined8 param_3,int param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong in_dr14;
  ulonglong uVar17;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  puVar2 = PTR_FUN_8c01de50;
  if (in_FPSCR_SZ == '\0') {
    puVar12 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar12 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar12 + -4) = in_PR;
  iVar9 = (int)DAT_8c01de3a;
  iVar10 = *(int *)((int)DAT_8c01de3c + *(int *)(DAT_8c01de38 + param_4));
  uVar1 = *(ushort *)(param_4 + 0x54);
  (*(code *)PTR__njPushMatrixEx_8c01de4c)();
  uVar4 = (*(code *)puVar2)();
  uVar5 = (*(code *)puVar2)();
  iVar6 = (*(code *)PTR_FUN_8c01de54)(*(undefined4 *)(DAT_8c01de38 + param_4),uVar4,uVar5);
  uVar13 = (uint)in_dr14;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar2)();
    uVar17 = (ulonglong)uVar13;
    uVar5 = (*(code *)puVar2)();
    puVar2 = PTR__njTranslate_8c01df54;
    uVar13 = (*(code *)PTR_FUN_8c01df50)(*(undefined4 *)(DAT_8c01df4a + param_4),uVar4,uVar5);
    if (in_FPSCR_SZ == '\0') {
      param_1 = uVar13;
    }
    *(undefined **)((int)puVar12 + -0x10) = puVar2;
    uVar16 = uVar17;
    uVar14 = uVar17;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = (ulonglong)param_2;
      uVar14 = (ulonglong)param_1;
    }
    (*(code *)puVar2)(uVar14,uVar16,0);
  }
  else {
    uVar17 = in_dr14 & 0xffffffff;
    (*(code *)PTR_FUN_8c01de58)(*(undefined4 *)(DAT_8c01de38 + param_4),iVar6);
    uVar4 = (*(code *)puVar2)();
    puVar3 = PTR__njTranslate_8c01de5c;
    uVar5 = (*(code *)puVar2)();
    uVar13 = (*(code *)PTR_FUN_8c01de60)(*(undefined4 *)(DAT_8c01de38 + param_4),uVar4,uVar5);
    uVar14 = uVar17;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = (ulonglong)param_1;
    }
    *(undefined **)((int)puVar12 + -0x10) = puVar3;
    uVar16 = uVar17;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = (ulonglong)uVar13;
      uVar16 = (ulonglong)param_2;
    }
    (*(code *)puVar3)(uVar14,uVar16,0);
    (*(code *)PTR_FUN_8c01de64)(*(undefined4 *)(DAT_8c01de38 + param_4),iVar6);
  }
  if (((((*(byte *)(iVar10 + iVar9 * (uint)uVar1 + 8) & 0x80) == 0) ||
       ((*(uint *)(param_4 + 0x2c) & (int)DAT_8c01de40) != 0)) ||
      ((*(uint *)(*(int *)PTR_DAT_8c01de68 + 0x10) & 1) == 0)) &&
     ((*(code *)PTR_FUN_8c01de6c)(*(undefined4 *)(param_4 + 0x58)),
     *(char *)(*(int *)((int)DAT_8c01de3c + *(int *)(DAT_8c01de38 + param_4)) +
               (int)DAT_8c01de3a * (uint)*(ushort *)(param_4 + 0x54) + 0x18) != '\0')) {
    (*(code *)PTR__njPushMatrixEx_8c01df58)();
    iVar6 = (*(code *)PTR_FUN_8c01df5c)(*(undefined4 *)(param_4 + 0x58),5);
    (*(code *)PTR__njMultiMatrix_8c01df60)(0,iVar6 + 0x50);
    (*(code *)PTR_FUN_8c01df64)(*(undefined4 *)(DAT_8c01df4c + param_4));
    (*(code *)PTR__njPopMatrixEx_8c01df68)();
    (*(code *)PTR_FUN_8c01df6c)(*(undefined4 *)(DAT_8c01df4c + param_4));
  }
  (*(code *)PTR_FUN_8c01de70)(param_4);
  uVar13 = (uint)uVar16;
  if (((**(uint **)(DAT_8c01de42 + param_4) & 4) != 0) &&
     ((*(uint *)(param_4 + 0x2c) & DAT_8c01de74) == 0)) {
    (*(code *)PTR__njPushMatrixEx_8c01df58)();
    uVar4 = (undefined4)(uVar17 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar12 + -0x54) = uVar4;
      *(undefined4 *)((int)puVar12 + -0x50) = uVar4;
      *(undefined4 *)((int)puVar12 + -0x4c) = uVar4;
      *(undefined4 *)((int)puVar12 + -0x48) = uVar4;
      *(undefined4 *)((int)puVar12 + -0x44) = uVar4;
    }
    else {
      *(ulonglong *)((int)puVar12 + -0x54) = uVar17;
      *(ulonglong *)((int)puVar12 + -0x50) = uVar17;
      *(ulonglong *)((int)puVar12 + -0x4c) = uVar17;
      *(ulonglong *)((int)puVar12 + -0x48) = uVar17;
      *(ulonglong *)((int)puVar12 + -0x44) = uVar17;
    }
    uVar5 = *(undefined4 *)(param_4 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar12 + -0x58) = uVar4;
    }
    else {
      *(ulonglong *)((int)puVar12 + -0x58) = uVar17;
    }
    iVar6 = (*(code *)PTR_FUN_8c01df5c)(uVar5,4);
    (*(code *)PTR__njMultiMatrix_8c01df60)(0,iVar6 + 0x50);
    uVar16 = uVar17;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = (ulonglong)uVar13;
    }
    *(code **)((int)puVar12 + -0xc) = *(code **)((int)puVar12 + -0x10);
    uVar4 = 0x3f800000;
    (**(code **)((int)puVar12 + -0x10))(0x3f800000,uVar16,0);
    (*(code *)PTR__njCalcPoint_8c01df70)
              (0,(undefined1 *)((int)puVar12 + -0x58),(undefined1 *)((int)puVar12 + -0x4c));
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x44),uVar4);
    }
    else {
      uVar15 = *(undefined8 *)((int)puVar12 + -0x44);
    }
    (*(code *)PTR_FUN_8c01df74)(uVar15,*(undefined4 *)(DAT_8c01df4e + param_4));
    (*(code *)PTR__njPopMatrixEx_8c01df68)();
  }
  iVar9 = param_4 + DAT_8c01de44;
  iVar6 = (int)DAT_8c01de46;
  iVar11 = 0;
  iVar10 = 3;
  do {
    uVar4 = (undefined4)param_3;
    if (*(int *)(iVar11 * 0x30 + iVar9 + 0x1c) != 0) {
      (*(code *)PTR__njPushMatrixEx_8c01e0ec)();
      iVar7 = (*(code *)PTR_FUN_8c01e0f0)(*(undefined4 *)(param_4 + 0x58),4);
      (*(code *)PTR__njMultiMatrix_8c01e0f4)(0,iVar7 + 0x50);
      puVar2 = PTR_FUN_8c01e0f8;
      iVar7 = *(int *)(param_4 + 0x58);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar12 + -0x40) = *(undefined4 *)(iVar7 + 0x4c);
        uVar15 = CONCAT44(*(undefined4 *)(iVar7 + 0x50),uVar4);
      }
      else {
        *(undefined8 *)((int)puVar12 + -0x40) = *(undefined8 *)(iVar7 + 0x4c);
        uVar15 = *(undefined8 *)(iVar7 + 0x50);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0x3c) = (int)((ulonglong)uVar15 >> 0x20);
        param_3 = CONCAT44(*(undefined4 *)(iVar7 + 0x54),(int)uVar15);
      }
      else {
        *(undefined8 *)((int)puVar12 + -0x3c) = uVar15;
        param_3 = *(undefined8 *)(iVar7 + 0x54);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar12 + -0x38) = (int)((ulonglong)param_3 >> 0x20);
      }
      else {
        *(undefined8 *)((int)puVar12 + -0x38) = param_3;
      }
      *(undefined4 *)((int)puVar12 + -0x30) = *(undefined4 *)((int)puVar12 + -0x3c);
      *(undefined4 *)((int)puVar12 + -0x34) = *(undefined4 *)((int)puVar12 + -0x40);
      *(undefined4 *)((int)puVar12 + -0x2c) = *(undefined4 *)((int)puVar12 + -0x38);
      iVar7 = iVar9 + iVar11 * 0x30;
      uVar4 = (undefined4)(uVar17 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(iVar7 + 4) = uVar4;
        *(undefined4 *)(iVar7 + 8) = uVar4;
      }
      else {
        *(ulonglong *)(iVar7 + 4) = uVar17;
        *(ulonglong *)(iVar7 + 8) = uVar17;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(iVar7 + 0xc) = uVar4;
      }
      else {
        *(ulonglong *)(iVar7 + 0xc) = uVar17;
      }
      (*(code *)puVar2)(iVar11 * 0x30 + iVar9);
      (*(code *)PTR__njPopMatrixEx_8c01e0fc)();
      uVar4 = (undefined4)uVar16;
      uVar5 = (undefined4)param_3;
      if ((*(int *)(iVar11 * 0x30 + iVar9 + 0x10) == 3) &&
         (iVar7 = *(int *)(param_4 + iVar6 + 0x14), iVar7 != 0)) {
        (*(code *)PTR__njPushMatrixEx_8c01e0ec)();
        (*(code *)PTR__njMultiMatrix_8c01e0f4)
                  (0,*(int *)((int)DAT_8c01e0e6 + *(int *)(DAT_8c01e0e4 + param_4)) + 0x38 +
                     (int)DAT_8c01e0e8);
        iVar8 = *(int *)(param_4 + 0x58);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar12 + -0x28) = *(undefined4 *)(iVar8 + 0x4c);
          uVar15 = CONCAT44(*(undefined4 *)(iVar8 + 0x50),uVar5);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x28) = *(undefined8 *)(iVar8 + 0x4c);
          uVar15 = *(undefined8 *)(iVar8 + 0x50);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar12 + -0x24) = (int)((ulonglong)uVar15 >> 0x20);
          param_3 = CONCAT44(*(undefined4 *)(iVar8 + 0x54),(int)uVar15);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x24) = uVar15;
          param_3 = *(undefined8 *)(iVar8 + 0x54);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar12 + -0x20) = (int)((ulonglong)param_3 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar12 + -0x20) = param_3;
        }
        *(undefined4 *)((int)puVar12 + -0x18) = *(undefined4 *)((int)puVar12 + -0x24);
        *(undefined4 *)((int)puVar12 + -0x1c) = *(undefined4 *)((int)puVar12 + -0x28);
        *(undefined4 *)((int)puVar12 + -0x14) = *(undefined4 *)((int)puVar12 + -0x20);
        *(code **)((int)puVar12 + -8) = *(code **)((int)puVar12 + -0x10);
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x1c),
                            *(undefined4 *)((int)puVar12 + -0x18));
          uVar16 = CONCAT44(*(undefined4 *)((int)puVar12 + -0x14),uVar4);
        }
        else {
          uVar15 = *(undefined8 *)((int)puVar12 + -0x1c);
          uVar16 = *(ulonglong *)((int)puVar12 + -0x14);
        }
        (**(code **)((int)puVar12 + -0x10))(uVar15,uVar16,0);
        (*(code *)PTR_FUN_8c01e100)(iVar7,0);
        (*(code *)PTR_FUN_8c01e104)(iVar7,0);
        (*(code *)PTR_FUN_8c01e108)(iVar7);
        iVar8 = (*(code *)PTR_FUN_8c01e10c)(*(undefined4 *)(iVar7 + 4),3);
        if (iVar8 != 0) {
          (*(code *)PTR_FUN_8c01e110)(iVar7);
        }
        (*(code *)PTR__njPopMatrixEx_8c01e0fc)();
      }
    }
    iVar10 = iVar10 + -1;
    iVar11 = iVar11 + 1;
  } while (iVar10 != 0);
  (*(code *)PTR__njPopMatrixEx_8c01de78)();
  return;
}

