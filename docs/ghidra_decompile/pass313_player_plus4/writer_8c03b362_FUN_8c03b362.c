// entry: 8c03b362
// name: FUN_8c03b362


void FUN_8c03b362(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined4 uVar22;
  undefined8 in_dr14;
  double dVar23;
  float fVar24;
  undefined8 in_xd8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  puVar1 = PTR_FUN_8c03b4d4;
  if (in_FPSCR_SZ == '\0') {
    puVar14 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar14 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar14 + -4) = in_PR;
  *(undefined4 *)(DAT_8c03b4c0 + param_2) = 1;
  uVar11 = *(undefined4 *)(*(int *)(param_2 + 0x58) + 4);
  iVar6 = (int)DAT_8c03b4c2;
  uVar3 = (*(code *)puVar1)();
  uVar22 = (undefined4)in_dr14;
  uVar4 = (*(code *)puVar1)((int)DAT_8c03b4c4);
  *(undefined4 *)((int)puVar14 + -0x54) = uVar4;
  (*(code *)PTR_FUN_8c03b4d8)
            (*(undefined4 *)(DAT_8c03b4c6 + param_2),(undefined1 *)((int)puVar14 + -0x50),
             (undefined1 *)((int)puVar14 + -0x4c),uVar3);
  iVar5 = (*(code *)PTR_FUN_8c03b4dc)(*(undefined4 *)(*(int *)(param_2 + 0x58) + 4),3);
  if (iVar5 == 0) {
    iVar5 = (int)DAT_8c03b4c6;
    iVar8 = (int)DAT_8c03b4ca;
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & (int)DAT_8c03b4c8;
    puVar1 = PTR_DAT_8c03b4e0;
    pcVar13 = PTR_DAT_8c03b4e0 + 0x70;
    iVar5 = *(int *)((int)DAT_8c03b4cc + *(int *)(iVar5 + param_2)) +
            iVar8 * (uint)*(ushort *)(param_2 + 0x54);
    *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xfe;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar14 + -0x10) = *(undefined4 *)((int)puVar14 + -0x50);
    }
    else {
      *(undefined8 *)((int)puVar14 + -0x10) = *(undefined8 *)((int)puVar14 + -0x50);
    }
    iVar5 = *(int *)(param_2 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = *(undefined4 *)(iVar5 + 0x50);
      uVar15 = *(undefined8 *)(iVar5 + 0x50);
      *(undefined4 *)((int)puVar14 + -0x48) = *(undefined4 *)(iVar5 + 0x4c);
      *(undefined4 *)((int)puVar14 + -0x44) = uVar3;
    }
    else {
      uVar18 = *(undefined8 *)(iVar5 + 0x50);
      uVar15 = *(undefined8 *)(iVar5 + 0x54);
      *(undefined8 *)((int)puVar14 + -0x48) = *(undefined8 *)(iVar5 + 0x4c);
      uVar3 = (undefined4)uVar15;
      *(undefined8 *)((int)puVar14 + -0x44) = uVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar14 + -0x40) = (int)((ulonglong)uVar15 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar14 + -0x40) = uVar15;
    }
    *(undefined4 *)((int)puVar14 + -0x38) = *(undefined4 *)((int)puVar14 + -0x44);
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(*(undefined4 *)((int)puVar14 + -0x38),uVar3);
    }
    else {
      uVar15 = *(undefined8 *)((int)puVar14 + -0x38);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar14 + -0xc) = (int)((ulonglong)uVar15 >> 0x20);
      uVar15 = CONCAT44(*(undefined4 *)((int)puVar14 + -0x4c),(int)uVar15);
    }
    else {
      *(undefined8 *)((int)puVar14 + -0xc) = uVar15;
      uVar15 = *(undefined8 *)((int)puVar14 + -0x4c);
    }
    *(undefined4 *)((int)puVar14 + -0x34) = *(undefined4 *)((int)puVar14 + -0x40);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar14 + -8) = (int)((ulonglong)uVar15 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar14 + -8) = uVar15;
    }
    *(undefined4 *)((int)puVar14 + -0x3c) = *(undefined4 *)((int)puVar14 + -0x48);
    (*(code *)PTR_FUN_8c03b4e4)(0,0x13);
    iVar5 = (int)DAT_8c03b4c6;
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | DAT_8c03b4e8;
    piVar7 = (int *)(*(int *)(param_2 + 0x28) + iVar5);
    (*(code *)piVar7[2])(0,param_2 + *piVar7,1);
    puVar2 = PTR_DAT_8c03b4ec;
    iVar5 = (int)DAT_8c03b4d0;
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | (int)DAT_8c03b4ce;
    puVar9 = (undefined4 *)(param_2 + DAT_8c03b4d2);
    uVar3 = *(undefined4 *)puVar2;
    puVar9[1] = *(undefined4 *)(puVar2 + 4);
    *puVar9 = uVar3;
    puVar10 = *(undefined2 **)(iVar5 + param_2);
    puVar9[2] = *(undefined4 *)(puVar2 + 8);
    *puVar10 = *(undefined2 *)(param_2 + iVar6);
    if (*pcVar13 == '\0') {
      uVar3 = *DAT_8c03b500;
    }
    else {
      uVar3 = *DAT_8c03b4f0;
    }
    (*(code *)PTR_FUN_8c03b4f4)(uVar3,puVar1[0x71]);
    (*(code *)PTR_FUN_8c03b4f8)(uVar3,puVar1[0x72],puVar1[0x73],0);
  }
  else {
    iVar5 = (int)DAT_8c03b640;
    iVar6 = (int)DAT_8c03b642;
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | (int)DAT_8c03b63e;
    iVar5 = *(int *)((int)DAT_8c03b644 + *(int *)(iVar5 + param_2)) +
            iVar6 * (uint)*(ushort *)(param_2 + 0x54);
    *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) | 1;
    uVar12 = *(undefined4 *)(DAT_8c03b640 + param_2);
    uVar3 = (*(code *)puVar1)();
    uVar4 = (*(code *)puVar1)((int)DAT_8c03b646);
    *(undefined4 *)((int)puVar14 + -0x54) = uVar4;
    (*(code *)PTR_FUN_8c03b650)
              (uVar12,(undefined1 *)((int)puVar14 + -0x30),(undefined1 *)((int)puVar14 + -0x2c),
               uVar3);
    uVar15 = (*(code *)PTR_FUN_8c03b654)(*(undefined4 *)(param_2 + 0x58));
    uVar3 = (undefined4)uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar3 = uVar22;
    }
    dVar23 = (double)CONCAT44((int)((ulonglong)uVar15 >> 0x20),uVar3);
    dVar16 = (double)(*(code *)PTR_FUN_8c03b658)(uVar11,1,1);
    fVar20 = (float)((ulonglong)dVar16 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar14 + -0x50),
                                *(undefined4 *)((int)puVar14 + -0x30));
      dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar14 + -0x50),param_1);
    }
    else {
      in_xd8 = *(undefined8 *)((int)puVar14 + -0x30);
      dVar17 = *(double *)((int)puVar14 + -0x50);
      dVar21 = dVar17;
    }
    fVar24 = (float)((ulonglong)dVar23 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      fVar19 = SUB84(dVar17,0) +
               (((float)((ulonglong)dVar17 >> 0x20) - SUB84(dVar17,0)) * fVar20) / fVar24;
    }
    else {
      dVar17 = ((dVar17 - dVar17) * dVar16) / dVar23;
      fVar19 = SUB84(dVar17 + dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar14 + -0x10) = fVar19;
    }
    else {
      *(undefined8 *)((int)puVar14 + -0x10) = in_xd8;
    }
    iVar5 = *(int *)(param_2 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar3 = *(undefined4 *)(iVar5 + 0x4c);
      uVar4 = *(undefined4 *)(iVar5 + 0x50);
      uVar18 = CONCAT44(uVar4,SUB84(dVar21,0));
      uVar15 = CONCAT44(*(undefined4 *)(iVar5 + 0x54),uVar3);
      *(undefined4 *)((int)puVar14 + -0x28) = uVar3;
      *(undefined4 *)((int)puVar14 + -0x24) = uVar4;
    }
    else {
      in_xd8 = *(undefined8 *)(iVar5 + 0x4c);
      uVar18 = *(undefined8 *)(iVar5 + 0x50);
      uVar15 = *(undefined8 *)(iVar5 + 0x54);
      uVar3 = (undefined4)uVar15;
      *(undefined8 *)((int)puVar14 + -0x28) = in_xd8;
      *(undefined8 *)((int)puVar14 + -0x24) = uVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar14 + -0x20) = (int)((ulonglong)uVar15 >> 0x20);
    }
    else {
      *(undefined8 *)((int)puVar14 + -0x20) = uVar15;
    }
    *(undefined4 *)((int)puVar14 + -0x18) = *(undefined4 *)((int)puVar14 + -0x24);
    if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar14 + -0x18),uVar3);
    }
    else {
      dVar21 = *(double *)((int)puVar14 + -0x18);
    }
    uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar14 + -0xc) = uVar3;
      dVar21 = (double)CONCAT44(uVar3,*(undefined4 *)((int)puVar14 + -0x2c));
      dVar17 = (double)CONCAT44(*(undefined4 *)((int)puVar14 + -0x4c),(int)uVar18);
    }
    else {
      *(double *)((int)puVar14 + -0xc) = dVar21;
      in_xd8 = *(undefined8 *)((int)puVar14 + -0x2c);
      dVar17 = *(double *)((int)puVar14 + -0x4c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - SUB84(dVar21,0),SUB84(dVar17,0)
                               );
    }
    else {
      dVar17 = dVar17 - dVar21;
    }
    *(undefined4 *)((int)puVar14 + -0x14) = *(undefined4 *)((int)puVar14 + -0x20);
    if (in_FPSCR_PR == '\0') {
      fVar20 = SUB84(dVar21,0) + ((float)((ulonglong)dVar17 >> 0x20) * fVar20) / fVar24;
    }
    else {
      fVar20 = SUB84(dVar21 + (dVar17 * dVar16) / dVar23,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar14 + -8) = fVar20;
    }
    else {
      *(undefined8 *)((int)puVar14 + -8) = in_xd8;
    }
    *(undefined4 *)((int)puVar14 + -0x1c) = *(undefined4 *)((int)puVar14 + -0x28);
  }
  (*(code *)PTR_FUN_8c03b4fc)(param_2,(undefined1 *)((int)puVar14 + -0x10));
  return;
}

