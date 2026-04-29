// entry: 8c09aad8
// name: FUN_8c09aad8
// signature: undefined FUN_8c09aad8(void)


void FUN_8c09aad8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  
  iVar7 = (int)DAT_8c09ac00;
  iVar5 = *(int *)(DAT_8c09abfe + param_1);
  iVar14 = *(int *)(iVar5 + 0x70);
  puVar11 = *(undefined2 **)(iVar5 + 100);
  pbVar4 = *(byte **)(iVar5 + 0x6c);
  iVar10 = 8;
  iVar12 = *(int *)(DAT_8c09ac02 + param_1);
  iVar5 = 0;
  iVar15 = iVar12 + 4;
  do {
    iVar6 = *(int *)(param_1 + iVar7 + iVar5 * 0x14 + 0xc);
    if (iVar6 == 3) {
      puVar8 = (undefined2 *)(iVar5 * 4 + iVar15);
      puVar9 = (undefined2 *)(iVar14 + iVar5 * 4);
      *puVar9 = *puVar8;
      puVar9[1] = puVar8[1];
      if ((*(byte *)(iVar5 * 4 + iVar15 + 3) & 0xf0) != 0) {
        *(int *)((int)DAT_8c09ac04 + *(int *)(DAT_8c09abfe + param_1)) = iVar5;
      }
    }
    else if ((((iVar6 == 1) || (iVar6 == 3)) && (**(char **)(DAT_8c09ac06 + param_1) == '\x01')) &&
            (*(undefined1 *)(iVar5 * 4 + iVar14 + 3) = *(undefined1 *)(iVar5 * 4 + iVar15 + 3),
            (*(byte *)(iVar5 * 4 + iVar15 + 3) & 0xf0) != 0)) {
      *(int *)((int)DAT_8c09ac04 + *(int *)(DAT_8c09abfe + param_1)) = iVar5;
    }
    iVar10 = iVar10 + -1;
    iVar5 = iVar5 + 1;
  } while (iVar10 != 0);
  puVar8 = (undefined2 *)(iVar12 + 0x24);
  iVar5 = 0x1c;
  do {
    iVar5 = iVar5 + -1;
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    puVar8 = puVar8 + 2;
    *puVar11 = uVar2;
    puVar11[1] = uVar3;
    puVar11 = puVar11 + 2;
  } while (iVar5 != 0);
  pbVar13 = (byte *)(iVar12 + DAT_8c09ac04);
  iVar5 = 0x10;
  do {
    bVar1 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    iVar5 = iVar5 + -1;
    *pbVar4 = *pbVar4 & bVar1;
    pbVar4 = pbVar4 + 1;
  } while (iVar5 != 0);
  *(undefined4 *)(*(int *)(DAT_8c09abfe + param_1) + 0x44) = 2;
  return;
}

