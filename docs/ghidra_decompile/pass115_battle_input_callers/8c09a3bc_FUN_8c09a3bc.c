// entry: 8c09a3bc
// name: FUN_8c09a3bc
// signature: undefined FUN_8c09a3bc(void)


/* WARNING: Removing unreachable block (ram,0x8c09a598) */
/* WARNING: Removing unreachable block (ram,0x8c09a6c8) */

void FUN_8c09a3bc(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  undefined1 auStack_6c [20];
  undefined1 auStack_58 [32];
  int local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  cVar11 = '\0';
  local_38 = param_1;
  (*(code *)PTR_FUN_8c09a4d4)(auStack_6c);
  iVar10 = 8;
  local_34 = *(undefined1 **)(DAT_8c09a4c4 + local_38);
  local_30 = *(undefined1 **)(DAT_8c09a4c6 + local_38);
  *local_30 = *local_34;
  puStack_28 = local_30 + 6;
  local_30[1] = local_34[1];
  local_30[2] = local_34[6];
  local_30[DAT_8c09a4c8] = local_34[2];
  local_30[DAT_8c09a4ca] = local_34[3];
  local_30[DAT_8c09a4cc] = 0;
  iVar9 = local_38 + DAT_8c09a4ce;
  local_30[DAT_8c09a4d0] = local_34[4];
  local_30[DAT_8c09a4d2] = local_34[5];
  iStack_2c = 0;
  puStack_20 = local_30 + 0x1e;
  puStack_24 = local_30 + 0xe;
  do {
    if (local_34[2] == '\0') {
      puStack_28[iStack_2c] = 0;
    }
    else {
      puStack_28[iStack_2c] = (char)*(undefined4 *)(iStack_2c * 0x14 + iVar9 + 0x10);
    }
    puVar5 = PTR_FUN_8c09a77c;
    puVar4 = PTR_FUN_8c09a778;
    puVar3 = PTR_FUN_8c09a5f0;
    puVar2 = PTR_FUN_8c09a5ec;
    iVar7 = *(int *)(iStack_2c * 0x14 + iVar9 + 0xc);
    if ((iVar7 == 1) || (iVar7 == 2)) {
      cVar11 = cVar11 + '\x01';
      iVar7 = (*(code *)PTR_FUN_8c09a5f4)
                        (*(undefined4 *)(*(int *)(DAT_8c09a5e4 + local_38) + 0x68),
                         *(undefined4 *)(DAT_8c09a5e6 + local_38));
      (*(code *)PTR_FUN_8c09a5f8)(auStack_6c);
      (*(code *)PTR_FUN_8c09a5fc)
                (auStack_6c,*(undefined4 *)(iVar7 + 0x18),*(undefined4 *)(iVar7 + 0x14));
      uVar8 = *(undefined4 *)(iStack_2c * 0x14 + iVar9 + 8);
      puStack_24[iStack_2c] = 0;
      iVar6 = (*(code *)puVar2)(auStack_6c,uVar8);
      iVar7 = iStack_2c;
      if (*(short *)(PTR_DAT_8c09a600 + (short)(*(ushort *)(iVar6 + 0x12) & DAT_8c09a5e8) * 0xc) ==
          99) {
        bVar1 = false;
      }
      else if (*(short *)(PTR_DAT_8c09a600 + (short)(*(ushort *)(iVar6 + 0x14) & DAT_8c09a774) * 0xc
                         ) == 99) {
        bVar1 = false;
      }
      else if (*(short *)(PTR_DAT_8c09a600 + (short)(*(ushort *)(iVar6 + 0x16) & DAT_8c09a8a2) * 0xc
                         ) == 99) {
        bVar1 = false;
      }
      else if (*(short *)(PTR_DAT_8c09a600 + (short)(*(ushort *)(iVar6 + 0x18) & DAT_8c09a8a2) * 0xc
                         ) == 99) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar8 = (*(code *)puVar2)(auStack_6c,*(undefined4 *)(iStack_2c * 0x14 + iVar9 + 8));
        (*(code *)puVar3)(puStack_20 + iVar7 * 0x22 + 2,uVar8,0x20);
      }
      else {
        (*(code *)puVar3)(puStack_20 + iStack_2c * 0x22 + 2,PTR_DAT_8c09a604 + iStack_2c * 0x20,0x20
                         );
        uVar8 = (*(code *)puVar2)(auStack_6c,*(undefined4 *)(iStack_2c * 0x14 + iVar9 + 8));
        (*(code *)puVar3)(auStack_58,uVar8,0x20);
        (*(code *)PTR_FUN_8c09a608)(puStack_20 + iStack_2c * 0x22 + 2);
      }
    }
    else if (iVar7 == 3) {
      cVar11 = cVar11 + '\x01';
      iVar7 = (*(code *)PTR_FUN_8c09a780)
                        (*(undefined4 *)(*(int *)(DAT_8c09a772 + local_38) + 0x68),
                         *(undefined4 *)(iStack_2c * 0x14 + iVar9));
      (*(code *)PTR_FUN_8c09a784)(auStack_6c);
      (*(code *)PTR_FUN_8c09a788)
                (auStack_6c,*(undefined4 *)(iVar7 + 0x18),*(undefined4 *)(iVar7 + 0x14));
      uVar8 = *(undefined4 *)(iStack_2c * 0x14 + iVar9 + 8);
      puStack_24[iStack_2c] = 1;
      iVar6 = (*(code *)puVar4)(auStack_6c,uVar8);
      iVar7 = iStack_2c;
      if (*(short *)(PTR_DAT_8c09a78c + (short)(*(ushort *)(iVar6 + 0x12) & DAT_8c09a774) * 0xc) ==
          99) {
        bVar1 = false;
      }
      else if (*(short *)(PTR_DAT_8c09a78c + (short)(*(ushort *)(iVar6 + 0x14) & DAT_8c09a774) * 0xc
                         ) == 99) {
        bVar1 = false;
      }
      else if (*(short *)(PTR_DAT_8c09a78c + (short)(*(ushort *)(iVar6 + 0x16) & DAT_8c09a774) * 0xc
                         ) == 99) {
        bVar1 = false;
      }
      else if (*(short *)(PTR_DAT_8c09a78c + (short)(*(ushort *)(iVar6 + 0x18) & DAT_8c09a774) * 0xc
                         ) == 99) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar8 = (*(code *)puVar4)(auStack_6c,*(undefined4 *)(iStack_2c * 0x14 + iVar9 + 8));
        (*(code *)puVar5)(puStack_20 + iVar7 * 0x22 + 2,uVar8,0x20);
      }
      else {
        (*(code *)puVar5)(puStack_20 + iStack_2c * 0x22 + 2,PTR_DAT_8c09a790 + iStack_2c * 0x20,0x20
                         );
        uVar8 = (*(code *)puVar4)(auStack_6c,*(undefined4 *)(iStack_2c * 0x14 + iVar9 + 8));
        (*(code *)puVar5)(auStack_58,uVar8,0x20);
        (*(code *)PTR_FUN_8c09a794)(iStack_2c);
      }
    }
    else {
      puStack_24[iStack_2c] = 3;
    }
    iVar10 = iVar10 + -1;
    iStack_2c = iStack_2c + 1;
  } while (iVar10 != 0);
  (*(code *)PTR_FUN_8c09a4d8)(auStack_6c);
  puVar2 = PTR_FUN_8c09a4dc;
  local_30[3] = cVar11;
  (*(code *)puVar2)(auStack_6c,2);
  return;
}

