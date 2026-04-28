// entry: 8c07f3f0
// name: FUN_8c07f3f0
// signature: undefined FUN_8c07f3f0(void)


void FUN_8c07f3f0(int param_1)

{
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 in_xd8;
  int iVar15;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar7 = 0;
  iVar15 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20);
  puVar9 = *(ushort **)(DAT_8c07f4fe + param_1);
  if (0 < iVar15) {
    iVar8 = (int)DAT_8c07f500;
    do {
      puVar1 = PTR_FUN_8c07f50c;
      if ((*puVar9 & 1) != 0) {
        iVar11 = 0;
        *(byte *)(puVar9 + 8) = (byte)puVar9[8] & (byte)DAT_8c07f502;
        uVar2 = (*(code *)puVar1)(puVar9 + 1);
        iVar10 = 8;
        uVar3 = (*(code *)PTR_FUN_8c07f50c)();
        do {
          puVar6 = (ushort *)(*(int *)(DAT_8c07f506 + param_1) + iVar8 * iVar11);
          if (((puVar6 != (ushort *)0x0) && ((*puVar6 & 1) != 0)) &&
             (uVar4 = (*(code *)PTR_FUN_8c07f50c)(), uVar4 == uVar2)) {
            iVar5 = (*(code *)PTR_FUN_8c07f50c)();
            if ((0 < (int)(iVar5 - (uint)uVar3)) && ((int)(iVar5 - (uint)uVar3) < 3)) {
              *(byte *)(puVar9 + 8) = (byte)puVar9[8] & (byte)DAT_8c07f502 | 0x20;
            }
          }
          iVar10 = iVar10 + -1;
          iVar11 = iVar11 + 1;
        } while (iVar10 != 0);
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(puVar9 + 6));
        }
        else {
          in_xd8 = *(undefined8 *)(puVar9 + 6);
          dVar13 = *(double *)(param_1 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar13 + dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar9 + 6) = fVar12;
          uVar14 = CONCAT44(*(undefined4 *)(param_1 + 0x3c),fVar12);
        }
        else {
          *(undefined8 *)(puVar9 + 6) = in_xd8;
          uVar14 = *(undefined8 *)(param_1 + 0x3c);
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar14 >> 0x20) <= (float)uVar14) {
          iVar10 = (*(code *)PTR_FUN_8c07f50c)();
          iVar5 = *(int *)(param_1 + 0x20);
          iVar11 = (*(code *)PTR_FUN_8c07f50c)();
          *(undefined4 *)((iVar5 * iVar10 + iVar11) * 4 + *(int *)(DAT_8c07f508 + param_1)) = 0;
          *puVar9 = *puVar9 & 0xfffe;
        }
      }
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 10;
    } while (iVar7 < iVar15);
  }
  return;
}

