// entry: 8c09a994
// name: FUN_8c09a994
// signature: undefined FUN_8c09a994(void)


void FUN_8c09a994(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  
  iVar8 = (int)DAT_8c09aace;
  iVar6 = *(int *)(DAT_8c09aacc + param_1);
  iVar15 = *(int *)(iVar6 + 0x70);
  puVar12 = *(undefined4 **)(iVar6 + 0x5c);
  pbVar5 = *(byte **)(iVar6 + 0x6c);
  iVar11 = 8;
  iVar13 = *(int *)(DAT_8c09aad0 + param_1);
  iVar6 = 0;
  iVar16 = iVar13 + 4;
  do {
    iVar7 = *(int *)(param_1 + iVar8 + iVar6 * 0x14 + 0xc);
    if (iVar7 == 3) {
      puVar9 = (undefined2 *)(iVar6 * 4 + iVar16);
      puVar10 = (undefined2 *)(iVar15 + iVar6 * 4);
      *puVar10 = *puVar9;
      puVar10[1] = puVar9[1];
      if ((*(byte *)(iVar6 * 4 + iVar16 + 3) & 0xf0) != 0) {
        *(int *)((int)DAT_8c09aad2 + *(int *)(DAT_8c09aacc + param_1)) = iVar6;
      }
    }
    else if ((((iVar7 == 1) || (iVar7 == 3)) && (**(char **)(DAT_8c09aad6 + param_1) == '\x01')) &&
            (*(undefined1 *)(iVar6 * 4 + iVar15 + 3) = *(undefined1 *)(iVar6 * 4 + iVar16 + 3),
            (*(byte *)(iVar6 * 4 + iVar16 + 3) & 0xf0) != 0)) {
      *(int *)((int)DAT_8c09aad2 + *(int *)(DAT_8c09aacc + param_1)) = iVar6;
    }
    iVar11 = iVar11 + -1;
    iVar6 = iVar6 + 1;
  } while (iVar11 != 0);
  iVar6 = 0x18;
  *puVar12 = *(undefined4 *)(iVar13 + 0x24);
  puVar12 = puVar12 + 1;
  puVar9 = (undefined2 *)(iVar13 + 0x28);
  do {
    iVar6 = iVar6 + -1;
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    puVar9 = puVar9 + 3;
    *(undefined2 *)puVar12 = uVar2;
    *(undefined2 *)((int)puVar12 + 2) = uVar3;
    *(undefined2 *)(puVar12 + 1) = uVar4;
    puVar12 = (undefined4 *)((int)puVar12 + 6);
  } while (iVar6 != 0);
  pbVar14 = (byte *)(iVar13 + DAT_8c09aad4);
  iVar6 = 0x10;
  do {
    bVar1 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    iVar6 = iVar6 + -1;
    *pbVar5 = *pbVar5 & bVar1;
    pbVar5 = pbVar5 + 1;
  } while (iVar6 != 0);
  *(undefined4 *)(*(int *)(DAT_8c09aacc + param_1) + 0x44) = 1;
  return;
}

