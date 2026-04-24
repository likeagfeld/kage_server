// entry: 8c17a026
// name: FUN_8c17a026
// signature: undefined FUN_8c17a026(void)


undefined4 FUN_8c17a026(int param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte bVar9;
  int *piVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 local_3c;
  undefined1 local_30 [20];
  
  puVar2 = PTR_FUN_8c17a0fc;
  psVar11 = *(short **)(param_1 + 0x14);
  puVar14 = local_30;
  bVar9 = 0;
  if ((((ushort)psVar11[3] & DAT_8c17a084) != 0) || (*(int *)(param_1 + 0x18) < 0x28)) {
    return 0x21;
  }
  uVar3 = (int)(char)*psVar11 & 0xf;
  piVar10 = (int *)(*(int *)(param_1 + 0x14) + uVar3 * 4);
  if ((*(byte *)((int)piVar10 + 0xd) & 0x17) != 0x10) {
    return 0x21;
  }
  puVar15 = (undefined4 *)**(undefined4 **)(param_2 + 4);
  if (((*(int *)(psVar11 + 6) != puVar15[5]) || (*(int *)(psVar11 + 8) != puVar15[6])) ||
     (*piVar10 != puVar15[((int)*(char *)(puVar15 + 2) & 0xfU) + 2])) {
    puVar7 = *(undefined4 **)(param_2 + 4);
    do {
      puVar16 = puVar15;
      puVar15 = (undefined4 *)*puVar16;
      if (((*(int *)(psVar11 + 6) == puVar15[5]) && (*(int *)(psVar11 + 8) == puVar15[6])) &&
         (*piVar10 == puVar15[((int)*(char *)(puVar15 + 2) & 0xfU) + 2])) {
        if (puVar7 == puVar15) {
          *(undefined4 **)(param_2 + 4) = puVar16;
        }
        else {
          *puVar16 = *puVar15;
          *puVar15 = *puVar7;
          *puVar7 = puVar15;
        }
        goto LAB_8c17a10a;
      }
    } while (puVar15 != puVar7);
    *(undefined4 **)(param_2 + 4) = puVar16;
    iVar4 = (*(code *)puVar2)();
    uVar12 = (uVar3 + iVar4) * 4;
LAB_8c17a45a:
    (*(code *)PTR_FUN_8c17a6bc)(puVar15 + 2,psVar11,uVar12);
    cVar1 = *(char *)((int)puVar15 + 6);
    *(char *)((int)psVar11 + 9) = cVar1;
    *(char *)(param_2 + 1) = cVar1;
    return 0x2f;
  }
LAB_8c17a10a:
  iVar4 = (*(code *)PTR_FUN_8c17a1fc)();
  iVar13 = uVar3 + iVar4;
  uVar12 = iVar13 * 4;
  if (((*psVar11 != *(short *)(puVar15 + 2)) || (psVar11[3] != *(short *)((int)puVar15 + 0xe))) ||
     (((psVar11[4] != *(short *)(puVar15 + 4) ||
       (iVar5 = (*(code *)PTR_FUN_8c17a1fc)(), iVar4 != iVar5)) ||
      ((5 < uVar3 &&
       (iVar4 = (*(code *)PTR_FUN_8c17a200)(psVar11 + 10,puVar15 + 7,(uVar3 - 5) * 4), iVar4 != 0)))
      ))) goto LAB_8c17a45a;
  iVar4 = (*(code *)PTR_FUN_8c17a1fc)();
  if (5 < iVar4) {
    iVar4 = (*(code *)PTR_FUN_8c17a1fc)();
    iVar4 = (*(code *)PTR_FUN_8c17a200)(piVar10 + 5,puVar15 + uVar3 + 7,(iVar4 + -5) * 4);
    if (iVar4 != 0) goto LAB_8c17a45a;
  }
  if ((*(byte *)((int)piVar10 + 0xd) & 0x20) == 0) {
    if (*(short *)((int)piVar10 + 0x12) != *(short *)((int)puVar15 + uVar3 * 4 + 0x1a))
    goto LAB_8c17a45a;
  }
  else {
    uVar6 = (*(code *)PTR_FUN_8c17a204)((int)*(short *)((int)piVar10 + 0x12));
    uVar6 = uVar6 & 0xffff;
    if (((int)uVar6 < (int)DAT_8c17a1fa) && (uVar6 != 0)) {
      puVar14 = local_30 + 1;
      local_30[0] = (char)uVar6;
    }
    else {
      local_30[0] = 0;
      local_30[1] = (undefined1)(uVar6 >> 8);
      puVar14 = local_30 + 3;
      local_30[2] = (char)uVar6;
    }
    bVar9 = 1;
  }
  iVar4 = (*(code *)PTR_FUN_8c17a314)((int)*(short *)((int)piVar10 + 0xe));
  iVar5 = (*(code *)PTR_FUN_8c17a314)((int)*(short *)((int)puVar15 + uVar3 * 4 + 0x16));
  uVar6 = iVar4 - iVar5 & 0xffff;
  if (uVar6 != 0) {
    if ((int)uVar6 < (int)DAT_8c17a312) {
      *puVar14 = (char)uVar6;
      puVar14 = puVar14 + 1;
    }
    else {
      *puVar14 = 0;
      puVar14[2] = (char)uVar6;
      puVar14[1] = (char)(uVar6 >> 8);
      puVar14 = puVar14 + 3;
    }
    bVar9 = bVar9 | 2;
  }
  iVar4 = (*(code *)PTR_FUN_8c17a318)(piVar10[2]);
  iVar5 = (*(code *)PTR_FUN_8c17a318)(puVar15[uVar3 + 4]);
  uVar6 = iVar4 - iVar5;
  if (uVar6 != 0) {
    if (DAT_8c17a31c < uVar6) goto LAB_8c17a45a;
    local_3c = (undefined1)uVar6;
    if ((int)(uVar6 & 0xffff) < (int)DAT_8c17a312) {
      *puVar14 = local_3c;
      puVar14 = puVar14 + 1;
    }
    else {
      *puVar14 = 0;
      puVar14[2] = local_3c;
      puVar14[1] = (char)(uVar6 >> 8);
      puVar14 = puVar14 + 3;
    }
    bVar9 = bVar9 | 4;
  }
  iVar4 = (*(code *)PTR_FUN_8c17a318)(piVar10[1]);
  iVar5 = (*(code *)PTR_FUN_8c17a318)(puVar15[uVar3 + 3]);
  uVar3 = iVar4 - iVar5;
  if (uVar3 != 0) {
    if (DAT_8c17a31c < uVar3) goto LAB_8c17a45a;
    if ((int)(uVar3 & 0xffff) < (int)DAT_8c17a312) {
      *puVar14 = (char)uVar3;
      puVar14 = puVar14 + 1;
    }
    else {
      *puVar14 = 0;
      puVar14[2] = (char)uVar3;
      puVar14[1] = (char)(uVar3 >> 8);
      puVar14 = puVar14 + 3;
    }
    bVar9 = bVar9 | 8;
  }
  if (bVar9 == 0) {
    if ((psVar11[1] != *(short *)((int)puVar15 + 10)) &&
       (uVar3 = (*(code *)PTR_FUN_8c17a41c)((int)*(short *)((int)puVar15 + 10)),
       (uVar3 & 0xffff) == uVar12)) goto LAB_8c17a37c;
    goto LAB_8c17a45a;
  }
  if ((bVar9 == 0xb) || (bVar9 == 0xf)) goto LAB_8c17a45a;
  if (bVar9 == 0xc) {
    if ((uVar3 != uVar6) ||
       (uVar6 = (*(code *)PTR_FUN_8c17a41c)((int)*(short *)((int)puVar15 + 10)),
       uVar3 != (uVar6 & 0xffff) + iVar13 * -4)) goto LAB_8c17a37c;
    bVar9 = 0xb;
  }
  else {
    if ((bVar9 != 8) ||
       (uVar6 = (*(code *)PTR_FUN_8c17a41c)((int)*(short *)((int)puVar15 + 10)),
       uVar3 != (uVar6 & 0xffff) + iVar13 * -4)) goto LAB_8c17a37c;
    bVar9 = 0xf;
  }
  puVar14 = local_30;
LAB_8c17a37c:
  uVar3 = (*(code *)PTR_FUN_8c17a41c)((int)psVar11[2]);
  uVar6 = (*(code *)PTR_FUN_8c17a41c)((int)*(short *)(puVar15 + 3));
  uVar3 = (uVar3 & 0xffff) - (uVar6 & 0xffff);
  if (uVar3 != 1) {
    if (((int)(uVar3 & 0xffff) < (int)DAT_8c17a418) && ((uVar3 & 0xffff) != 0)) {
      *puVar14 = (char)uVar3;
      puVar14 = puVar14 + 1;
    }
    else {
      *puVar14 = 0;
      puVar14[2] = (char)uVar3;
      puVar14[1] = (char)(uVar3 >> 8);
      puVar14 = puVar14 + 3;
    }
    bVar9 = bVar9 | 0x20;
  }
  if ((*(byte *)((int)piVar10 + 0xd) & 8) != 0) {
    bVar9 = bVar9 | 0x10;
  }
  uVar3 = (*(code *)PTR_FUN_8c17a41c)((int)(short)piVar10[4]);
  (*(code *)PTR_FUN_8c17a420)(puVar15 + 2,psVar11,uVar12);
  iVar4 = (int)puVar14 - (int)local_30;
  if ((*(char *)(param_2 + 0xe) == '\0') || (*(char *)(param_2 + 1) != *(char *)((int)puVar15 + 6)))
  {
    iVar13 = uVar12 - (iVar4 + 4);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)((int)puVar15 + 6);
    *(byte *)((int)psVar11 + iVar13) = bVar9 | 0x40;
    pbVar8 = (byte *)((int)psVar11 + iVar13) + 1;
    *pbVar8 = *(byte *)((int)puVar15 + 6);
  }
  else {
    iVar13 = uVar12 - (iVar4 + 3);
    pbVar8 = (byte *)((int)psVar11 + iVar13);
    *pbVar8 = bVar9;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar13;
  pbVar8[1] = (byte)((uVar3 & 0xffff) >> 8);
  puVar2 = PTR_FUN_8c17a6bc;
  pbVar8[2] = (byte)(uVar3 & 0xffff);
  (*(code *)puVar2)(pbVar8 + 3,local_30,iVar4);
  return 0x2d;
}

