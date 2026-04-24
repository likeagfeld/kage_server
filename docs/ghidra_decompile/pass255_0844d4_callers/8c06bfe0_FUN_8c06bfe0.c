// entry: 8c06bfe0
// name: FUN_8c06bfe0
// signature: undefined FUN_8c06bfe0(void)


void FUN_8c06bfe0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  char *pcVar14;
  undefined8 *puVar15;
  double dVar16;
  double dVar17;
  ulonglong in_dr14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  puVar5 = PTR_FUN_8c06c18c;
  if (in_FPSCR_SZ == '\0') {
    puVar15 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar15 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  iVar11 = 0;
  *(undefined4 *)((int)puVar15 + -0x20) = param_5;
  iVar12 = *(int *)(DAT_8c06c168 + param_3);
  *(int *)((int)puVar15 + -0x24) = param_4;
  iVar10 = *(int *)(DAT_8c06c16a + iVar12);
  uVar2 = *(ushort *)(param_4 + 0x54);
  uVar6 = (uint)uVar2;
  *(int *)((int)puVar15 + -0x28) = param_3;
  *(ushort *)((int)puVar15 + -0x18) = uVar2;
  iVar9 = *(int *)(DAT_8c06c16e + param_3);
  *(int *)((int)puVar15 + -0x1c) = iVar12;
  puVar13 = *(ushort **)(DAT_8c06c170 + iVar12);
  if (0 < iVar9) {
    do {
      if ((*puVar13 & 1) == 0) break;
      iVar11 = iVar11 + 1;
      puVar13 = (ushort *)((int)puVar13 + (int)DAT_8c06c172);
    } while (iVar11 < iVar9);
  }
  if (iVar11 != iVar9) {
    cVar1 = *(char *)(iVar10 + (int)DAT_8c06c16c * uVar6 + 0x18);
    if (cVar1 == '\x05') {
      *(undefined4 *)((int)puVar15 + -0x14) = 1;
    }
    else if (cVar1 == '\b') {
      *(undefined4 *)((int)puVar15 + -0x14) = 2;
    }
    else if (cVar1 == '\t') {
      *(undefined4 *)((int)puVar15 + -0x14) = 3;
    }
    else {
      *(undefined4 *)((int)puVar15 + -0x14) = 0;
    }
    iVar9 = *(int *)((int)puVar15 + -0x28);
    *(int *)((int)puVar15 + -0x10) = iVar9 + DAT_8c06c174;
    if ((int)*(short *)(iVar9 + DAT_8c06c174 + uVar6 * 0x1e + 0x10) +
        (int)*(short *)(iVar9 + DAT_8c06c178 + uVar6 * 0x1e + 0x10) +
        (int)*(short *)(iVar9 + DAT_8c06c176 + uVar6 * 0x1e + 0x10) == 0) {
      iVar9 = (int)*(short *)(*(int *)((int)puVar15 + -0x10) + uVar6 * 0x1e + 2) +
              (int)*(short *)(iVar9 + DAT_8c06c178 + uVar6 * 0x1e + 2) +
              (int)*(short *)(iVar9 + DAT_8c06c176 + uVar6 * 0x1e + 2);
      if (10 < iVar9) {
        iVar9 = 10;
      }
    }
    else {
      iVar9 = 10;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(DAT_8c06c180,param_2);
    }
    else {
      dVar16 = (double)CONCAT44(DAT_8c06c184,DAT_8c06c180);
    }
    iVar10 = *(int *)((int)puVar15 + -0x1c);
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)DAT_8c06c184,SUB84(dVar16,0));
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),param_1);
    }
    else {
      dVar17 = *DAT_8c06c184;
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) /
                                (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 / dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)(iVar10 + 0x18),SUB84(dVar17,0));
    }
    else {
      dVar17 = *(double *)(iVar10 + 0x18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) +
                                (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(DAT_8c06c188,SUB84(dVar17,0));
    }
    else {
      dVar17 = (double)CONCAT44(PTR_FUN_8c06c18c,DAT_8c06c188);
    }
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) +
                                (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
    dVar17 = dVar16;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)(in_dr14 & 0xffffffff);
    }
    iVar12 = (*(code *)PTR_FUN_8c06c18c)(dVar16);
    uVar6 = SUB84(dVar16,0);
    *(int *)((int)puVar15 + -0xc) = *(int *)(iVar10 + 0x20) * iVar12;
    iVar12 = (*(code *)puVar5)();
    if (*(int *)((*(int *)((int)puVar15 + -0xc) + iVar12) * 4 + *(int *)(DAT_8c06c17c + iVar10)) ==
        0) {
      uVar8 = (*(code *)puVar5)();
      *(undefined4 *)((int)puVar15 + -8) = uVar8;
      uVar8 = (*(code *)puVar5)();
      *(undefined4 *)((int)puVar15 + -0x34) = 1;
      (*(code *)PTR_FUN_8c06c300)
                (*(undefined4 *)((int)puVar15 + -0x1c),*(undefined4 *)((int)puVar15 + -8),uVar8,
                 *(undefined2 *)((int)puVar15 + -0x18));
      *(undefined4 *)((int)puVar15 + -0x1c) =
           *(undefined4 *)((int)DAT_8c06c2ea + *(int *)((int)puVar15 + -0x28));
      *(undefined2 *)((int)puVar15 + -0x18) = *(undefined2 *)(*(int *)((int)puVar15 + -0x24) + 0x54)
      ;
    }
    uVar3 = *(undefined2 *)((int)puVar15 + -0x18);
    uVar8 = (*(code *)puVar5)();
    uVar7 = (*(code *)puVar5)();
    *(undefined4 *)((int)puVar15 + -0x2c) = *(undefined4 *)((int)puVar15 + -0x14);
    *(undefined4 *)((int)puVar15 + -0x34) = uVar7;
    *(int *)((int)puVar15 + -0x30) = iVar9;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)(ulonglong)uVar6;
    }
    (*(code *)PTR_FUN_8c06c2ec)(dVar17,*(undefined4 *)((int)puVar15 + -0x1c),iVar11,uVar3,uVar8);
    uVar2 = puVar13[8];
    if (((byte)uVar2 & 7) == 0) {
      iVar9 = *(int *)((int)puVar15 + -0x10);
      uVar6 = (uint)*(ushort *)(*(int *)((int)puVar15 + -0x24) + 0x54);
      iVar10 = iVar9 + uVar6 * 0x1e;
      sVar4 = *(short *)(iVar10 + 0xe);
      *(int *)((int)puVar15 + -0x10) = iVar10;
      if (((sVar4 != 0) || (*(short *)(iVar9 + DAT_8c06c2de + uVar6 * 0x1e + 0xe) != 0)) ||
         (*(short *)(iVar9 + DAT_8c06c2e0 + uVar6 * 0x1e + 0xe) != 0)) {
        *(byte *)(puVar13 + 8) = (byte)uVar2 & (byte)DAT_8c06c2e2 | 1;
      }
    }
    puVar5 = PTR_DAT_8c06c2f0;
    pcVar14 = PTR_DAT_8c06c2f0 + DAT_8c06c2e4;
    if (*pcVar14 == '\0') {
      uVar8 = *DAT_8c06c2f4;
    }
    else {
      uVar8 = *DAT_8c06c304;
    }
    (*(code *)PTR_FUN_8c06c2f8)(uVar8,pcVar14[1]);
    (*(code *)PTR_FUN_8c06c2fc)(uVar8,pcVar14[2],pcVar14[3],0);
    pcVar14 = puVar5 + DAT_8c06c2e6;
    if (*pcVar14 == '\0') {
      uVar8 = *DAT_8c06c2f4;
    }
    else {
      uVar8 = *DAT_8c06c304;
    }
    (*(code *)PTR_FUN_8c06c2f8)(uVar8,pcVar14[1]);
    (*(code *)PTR_FUN_8c06c2fc)(uVar8,pcVar14[2],pcVar14[3],0);
  }
  return;
}

