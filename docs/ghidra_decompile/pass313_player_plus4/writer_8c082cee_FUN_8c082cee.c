// entry: 8c082cee
// name: FUN_8c082cee


byte FUN_8c082cee(int param_1,byte *param_2)

{
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  undefined *puVar23;
  byte bVar24;
  int iVar25;
  ushort *puVar26;
  bool bVar27;
  byte bStack_60;
  byte bStack_24;
  
  puVar23 = PTR_FUN_8c082e70;
  uVar21 = 0;
  bVar24 = *param_2;
  bStack_60 = 0;
  bStack_24 = 0;
  if ((bVar24 & 0x10) == 0) {
    if ((bVar24 & 0xf) < 8) {
      uVar21 = 1;
      bStack_60 = 1;
    }
    else if (8 < (bVar24 & 0xf)) {
      uVar21 = 2;
      bStack_60 = 2;
    }
  }
  else if ((bVar24 & 0xf) < 8) {
    uVar21 = 4;
    bStack_60 = 4;
  }
  else if (8 < (bVar24 & 0xf)) {
    uVar21 = 8;
    bStack_60 = 8;
  }
  if ((uVar21 & 1) == 0) {
    if ((uVar21 & 2) == 0) {
      if ((uVar21 & 4) == 0) {
        if ((uVar21 & 8) != 0) {
          bStack_24 = 4;
        }
      }
      else {
        bStack_24 = 8;
      }
    }
    else {
      bStack_24 = 1;
    }
  }
  else {
    bStack_24 = 2;
  }
  if (uVar21 == 0) {
    bStack_60 = 0xf;
  }
  uVar2 = (*(code *)PTR_FUN_8c082e70)();
  iVar16 = *(int *)(param_1 + 0x20);
  bVar24 = 1;
  uVar3 = (*(code *)puVar23)();
  iVar25 = (int)DAT_8c082e62;
  uVar4 = (*(code *)puVar23)();
  iVar10 = *(int *)(param_1 + 0x24);
  uVar5 = (*(code *)puVar23)();
  uVar6 = (*(code *)puVar23)(param_2);
  uVar7 = (*(code *)puVar23)(iVar25);
  iVar11 = *(int *)(DAT_8c082e64 + param_1);
  iVar17 = *(int *)(DAT_8c082e66 + param_1);
  iVar12 = *(int *)(DAT_8c082e68 + param_1);
  iVar18 = *(int *)(DAT_8c082e6a + param_1);
  iVar13 = *(int *)(DAT_8c082e6c + param_1);
  uVar8 = (*(code *)puVar23)();
  uVar9 = (*(code *)puVar23)();
  puVar1 = PTR_FUN_8c082fc4;
  iVar22 = 4;
  iVar25 = param_1;
  do {
    if ((bStack_60 & bVar24) != 0) {
      bVar20 = bStack_60 & bVar24;
      if (bVar20 == 1) {
        iVar25 = -1;
        puVar23 = (undefined *)0x0;
      }
      else if (bVar20 == 2) {
        iVar25 = 1;
        puVar23 = (undefined *)0x0;
      }
      else if (bVar20 == 4) {
        iVar25 = 0;
        puVar23 = (undefined *)0xffffffff;
      }
      else if (bVar20 == 8) {
        iVar25 = 0;
        puVar23 = (undefined *)0x1;
      }
      if ((((-1 < (int)((uint)uVar2 + iVar25)) && ((int)((uint)uVar3 + iVar25) < iVar16)) &&
          (-1 < (int)(puVar23 + uVar4))) && ((int)(puVar23 + uVar5) < iVar10)) {
        iVar19 = (uint)uVar6 + iVar25 + iVar16 * (int)(puVar23 + uVar7);
        iVar15 = *(int *)(iVar19 * 4 + iVar11);
        if (iVar15 == 0) {
          bVar27 = false;
        }
        else {
          bVar27 = *(int *)(iVar15 + 8) == 2;
        }
        if (bVar27) {
          cVar14 = '\0';
        }
        else if (*(int *)(iVar19 * 4 + iVar17) == 0) {
          if (*(int *)(iVar19 * 4 + iVar12) == 0) {
            iVar15 = *(int *)(iVar19 * 4 + iVar18);
            if (iVar15 == 0) {
              bVar27 = false;
            }
            else {
              bVar20 = *(byte *)(iVar15 + 9);
              if (((bVar20 & 0x7f) == 3) || ((bVar20 & 0x7f) == 4)) {
                bVar27 = false;
              }
              else {
                bVar27 = true;
              }
            }
            if (bVar27) {
              cVar14 = 'h';
            }
            else {
              cVar14 = *(char *)(iVar19 + iVar13);
            }
          }
          else {
            cVar14 = 'k';
          }
        }
        else {
          cVar14 = 'i';
        }
        bVar27 = true;
        if (((cVar14 == '\0') || (cVar14 == 'Z')) || ((cVar14 == ']' || (cVar14 == '_')))) {
LAB_8c082efc:
          bVar27 = false;
        }
        else if (cVar14 == '`') {
          bVar27 = false;
        }
        else if (((cVar14 == 'h') || (cVar14 == 'i')) || (cVar14 == 'm')) goto LAB_8c082efc;
        if ((cVar14 == 'j') &&
           (*(char *)(iVar16 * (int)(puVar23 + uVar8) + (uint)uVar9 + iVar25 + iVar13) == ']')) {
          bVar27 = false;
        }
        if (bVar27) {
          bStack_24 = bStack_24 | bVar24;
        }
      }
    }
    bVar24 = bVar24 << 1;
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  if ((bStack_24 & 1) != 0) {
    iVar10 = (*(code *)PTR_FUN_8c082fc4)(param_2,uVar9);
    iVar11 = (*(code *)puVar1)();
    iVar13 = 8;
    iVar12 = (int)DAT_8c082fc2;
    puVar26 = *(ushort **)(DAT_8c082fc0 + param_1);
    iVar25 = iVar11;
    do {
      if ((((*(byte *)((int)puVar26 + 0xb) & 1) == 0) && ((puVar26[4] & 0x14) == 0)) &&
         (((*puVar26 & 1) != 0 &&
          ((iVar16 = (*(code *)PTR_FUN_8c0831f8)(iVar25), iVar16 == iVar10 + -1 &&
           (iVar16 = (*(code *)PTR_FUN_8c0831f8)(), iVar16 == iVar11)))))) {
        bStack_24 = bStack_24 & 0xfe;
        break;
      }
      iVar13 = iVar13 + -1;
      puVar26 = (ushort *)((int)puVar26 + iVar12);
    } while (iVar13 != 0);
  }
  puVar23 = PTR_FUN_8c082fc4;
  if ((bStack_24 & 2) != 0) {
    iVar10 = (*(code *)PTR_FUN_8c082fc4)(param_2);
    iVar11 = (*(code *)puVar23)();
    iVar13 = 8;
    iVar12 = (int)DAT_8c082fc2;
    puVar26 = *(ushort **)(DAT_8c082fc0 + param_1);
    iVar25 = iVar11;
    do {
      if (((((*(byte *)((int)puVar26 + 0xb) & 1) == 0) && ((puVar26[4] & 0x14) == 0)) &&
          ((*puVar26 & 1) != 0)) &&
         ((iVar16 = (*(code *)PTR_FUN_8c0831f8)(iVar25), iVar16 == iVar10 + 1 &&
          (iVar16 = (*(code *)PTR_FUN_8c0831f8)(), iVar16 == iVar11)))) {
        bStack_24 = bStack_24 & 0xfd;
        break;
      }
      iVar13 = iVar13 + -1;
      puVar26 = (ushort *)((int)puVar26 + iVar12);
    } while (iVar13 != 0);
  }
  puVar23 = PTR_FUN_8c0830d8;
  if ((bStack_24 & 4) != 0) {
    iVar25 = (*(code *)PTR_FUN_8c0830d8)(param_2);
    iVar10 = (*(code *)puVar23)(iVar25);
    iVar12 = 8;
    iVar11 = (int)DAT_8c0830d6;
    puVar26 = *(ushort **)(DAT_8c0830d4 + param_1);
    do {
      if ((((*(byte *)((int)puVar26 + 0xb) & 1) == 0) && ((puVar26[4] & 0x14) == 0)) &&
         (((*puVar26 & 1) != 0 &&
          ((iVar13 = (*(code *)PTR_FUN_8c0830d8)(), iVar13 == iVar25 &&
           (iVar13 = (*(code *)PTR_FUN_8c0830d8)(), iVar13 == iVar10 + -1)))))) {
        bStack_24 = bStack_24 & 0xfb;
        break;
      }
      iVar12 = iVar12 + -1;
      puVar26 = (ushort *)((int)puVar26 + iVar11);
    } while (iVar12 != 0);
  }
  puVar23 = PTR_FUN_8c0830d8;
  if ((bStack_24 & 8) != 0) {
    iVar12 = 8;
    iVar25 = (*(code *)PTR_FUN_8c0830d8)();
    iVar11 = (int)DAT_8c0830d6;
    iVar10 = (*(code *)puVar23)();
    puVar26 = *(ushort **)(DAT_8c0830d4 + param_1);
    do {
      if (((((*(byte *)((int)puVar26 + 0xb) & 1) == 0) && ((puVar26[4] & 0x14) == 0)) &&
          ((*puVar26 & 1) != 0)) &&
         ((iVar13 = (*(code *)PTR_FUN_8c0830d8)(), iVar13 == iVar25 &&
          (iVar13 = (*(code *)PTR_FUN_8c0830d8)(), iVar13 == iVar10 + 1)))) {
        return bStack_24 & 0xf7;
      }
      iVar12 = iVar12 + -1;
      puVar26 = (ushort *)((int)puVar26 + iVar11);
    } while (iVar12 != 0);
  }
  return bStack_24;
}

