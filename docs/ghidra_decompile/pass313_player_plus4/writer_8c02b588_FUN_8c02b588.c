// entry: 8c02b588
// name: FUN_8c02b588


/* WARNING: Removing unreachable block (ram,0x8c02b732) */
/* WARNING: Removing unreachable block (ram,0x8c02b8fa) */

void FUN_8c02b588(undefined4 param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  char in_FPSCR_SZ;
  uint local_60;
  uint local_5c;
  byte local_58 [4];
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  short sStack_2c;
  code *local_28;
  byte *pbStack_24;
  byte bStack_20;
  int iStack_1c;
  byte bStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  
  iVar10 = 0;
  *(undefined4 *)(DAT_8c02b6f0 + param_2) = 0;
  iVar8 = 0;
  iVar15 = 8;
  iVar13 = (int)DAT_8c02b6f4;
  *(undefined4 *)(DAT_8c02b6f2 + param_2) = 0;
  *(undefined4 *)(DAT_8c02b6f6 + param_2) = 0;
  *(undefined4 *)(DAT_8c02b6f8 + param_2) = 0;
  *(undefined4 *)(DAT_8c02b6fa + param_2) = 0;
  do {
    puVar6 = (ushort *)
             (*(int *)((int)DAT_8c02b6fe + *(int *)(DAT_8c02b6fc + param_2)) + iVar13 * iVar8);
    if ((((puVar6 != (ushort *)0x0) && ((*puVar6 & 1) != 0)) && ((puVar6[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02b700 + param_2) + 0xe + iVar8) == '\x02')) {
      iVar10 = iVar10 + 1;
    }
    iVar15 = iVar15 + -1;
    iVar8 = iVar8 + 1;
  } while (iVar15 != 0);
  *(undefined4 *)(DAT_8c02b702 + param_2) = *(undefined4 *)(PTR_DAT_8c02b714 + iVar10 * 4);
  uVar14 = *(uint *)(DAT_8c02b704 + param_2);
  uVar12 = *(uint *)(DAT_8c02b706 + param_2);
  uVar11 = *(uint *)(DAT_8c02b708 + param_2);
  iVar8 = *(int *)(DAT_8c02b6f2 + param_2);
  if (iVar8 == 0) {
    *(undefined4 *)(DAT_8c02b70a + param_2) = 0;
  }
  puVar3 = PTR___bfswu_8c02b718;
  if (iVar8 < *(int *)(DAT_8c02b702 + param_2)) {
    if (((int)(uVar14 - 1) < 0) || (*(int *)(DAT_8c02b70c + param_2) <= (int)(uVar14 - 1))) {
      bVar1 = false;
    }
    else if (((int)(uVar12 - 1) < 0) || (*(int *)(DAT_8c02b70e + param_2) <= (int)(uVar12 - 1))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (((int)(uVar14 + 1) < 0) || (*(int *)(DAT_8c02b70c + param_2) <= (int)(uVar14 + 1))) {
        bVar1 = false;
      }
      else if (((int)(uVar12 + 1) < 0) || (*(int *)(DAT_8c02b70e + param_2) <= (int)(uVar12 + 1))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_54 = param_2 + DAT_8c02b710;
        local_50 = param_2 + DAT_8c02b712;
        *(undefined2 *)(local_54 + iVar8 * 2) = 0;
        (*(code *)puVar3)(uVar14 & 0xffff,local_50 + iVar8 * 2,6);
        (*(code *)PTR___bfswu_8c02b8c0)(uVar12 & 0xffff,(int)DAT_8c02b8ac);
        local_4c = DAT_8c02b8c4;
        puVar6 = (ushort *)(DAT_8c02b8c4 + (uVar12 * 0x40 + uVar14) * 0x10);
        if ((iVar8 < 1) || ((*puVar6 & 0x20) == 0)) {
          bVar2 = 0;
          if ((0x4f < (byte)puVar6[4]) && (((byte)puVar6[4] < 0x5a && (0 < iVar8)))) {
            bVar2 = 1;
          }
          local_48 = (uint)bVar2;
          if ((*puVar6 & 0x10) != 0) {
            uStack_10 = (uint)*(byte *)((int)puVar6 + 9);
            local_44 = *(int *)(DAT_8c02b8b0 + param_2);
            uVar5 = (uint)*(ushort *)(param_2 + 0x54);
            local_40 = local_44 + uVar5 * 0x1e;
            local_30 = *(int *)(DAT_8c02b8b2 + param_2) + 4;
            sStack_2c = *(short *)(uStack_10 * 2 + local_40);
            local_3c = local_44 + DAT_8c02b8ae + uVar5 * 0x1e;
            local_34 = uVar5 * 0x1e;
            local_38 = local_44 + DAT_8c02b8b4 + local_34;
            iStack_14 = uStack_10 * 2;
            if ((int)sStack_2c + (int)*(short *)(uStack_10 * 2 + local_3c) +
                (int)*(short *)(uStack_10 * 2 + local_38) < (int)*(short *)(iStack_14 + local_30)) {
              iVar10 = (int)(short)(*(short *)(uStack_10 * 2 +
                                              *(int *)(DAT_8c02b8b2 + param_2) + 0x22) + 1);
              if ((*(int *)(DAT_8c02b8b6 + param_2) == 0) ||
                 (iVar10 < *(int *)(DAT_8c02b8b6 + param_2))) {
                iVar15 = (int)DAT_8c02bca2;
                *(int *)(DAT_8c02bcac + param_2) = iVar10;
                *(undefined4 *)(DAT_8c02bcae + param_2) = 1;
                local_28 = (code *)PTR__memcpy_8c02bcb4;
                *(int *)(DAT_8c02bca4 + param_2) = iVar8;
                *(int *)(DAT_8c02bca0 + param_2) = iVar8;
                *(undefined4 *)(DAT_8c02bca6 + param_2) = *(undefined4 *)(DAT_8c02bca8 + param_2);
                (*local_28)(param_2 + iVar15,local_54,(iVar8 + 1) * 2);
                (*local_28)(param_2 + DAT_8c02bcaa,local_50,
                            (*(int *)(DAT_8c02bca4 + param_2) + 1) * 2);
                iVar8 = *(int *)(DAT_8c02bcb0 + param_2);
              }
            }
          }
          *(int *)(DAT_8c02b8b8 + param_2) = iVar8 + 1;
          if (local_48 != 0) {
            (*(code *)PTR_FUN_8c02bba8)
                      (*(undefined4 *)(DAT_8c02bb9c + param_2),uVar14,uVar12,&local_60,&local_5c);
            uVar14 = local_60;
            uVar12 = local_5c;
          }
          local_5c = uVar12;
          local_60 = uVar14;
          (*(code *)PTR___bfswu_8c02b8c0)(local_60 & 0xffff,6);
          (*(code *)PTR___bfswu_8c02b8c0)(local_5c & 0xffff,(int)DAT_8c02b8ac);
          pbStack_24 = local_58;
          local_58[0] = (local_58[0] & (byte)DAT_8c02b8ba | 0x10) & (byte)DAT_8c02b8ae | 8;
          bStack_20 = (*(code *)PTR_FUN_8c02b8c8)(*(undefined4 *)(DAT_8c02b8bc + param_2),1);
          iStack_1c = (*(code *)PTR_FUN_8c02ba50)(6);
          iStack_c = (*(code *)PTR_FUN_8c02ba50)((int)DAT_8c02ba46);
          local_4c = local_4c + (iStack_c * 0x40 + iStack_1c) * 0x10;
          if ((iStack_1c + -1 < 0) || (*(int *)(DAT_8c02ba48 + param_2) <= iStack_1c + -1)) {
            bVar1 = false;
          }
          else if ((iStack_c < 0) || (*(int *)(DAT_8c02ba4a + param_2) <= iStack_c)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_4c + -0x10) & 4) != 0)) {
            bStack_20 = bStack_20 & 0xfe;
          }
          if ((iStack_1c + 1 < 0) || (*(int *)(DAT_8c02ba48 + param_2) <= iStack_1c + 1)) {
            bVar1 = false;
          }
          else if ((iStack_c < 0) || (*(int *)(DAT_8c02ba4a + param_2) <= iStack_c)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_4c + 0x10) & 4) != 0)) {
            bStack_20 = bStack_20 & 0xfd;
          }
          if ((iStack_1c < 0) || (*(int *)(DAT_8c02ba48 + param_2) <= iStack_1c)) {
            bVar1 = false;
          }
          else if ((iStack_c + -1 < 0) || (*(int *)(DAT_8c02ba4a + param_2) <= iStack_c + -1)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_4c - DAT_8c02ba4c) & 4) != 0)) {
            bStack_20 = bStack_20 & 0xfb;
          }
          iStack_c = iStack_c + 1;
          if ((iStack_1c < 0) || (*(int *)(DAT_8c02bb8e + param_2) <= iStack_1c)) {
            bVar1 = false;
          }
          else if ((iStack_c < 0) || (*(int *)(DAT_8c02bb90 + param_2) <= iStack_c)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(DAT_8c02bb92 + local_4c) & 4) != 0)) {
            bStack_20 = bStack_20 & 0xf7;
          }
          uVar11 = uVar11 & bStack_20;
          bStack_18 = (byte)uVar11;
          if ((uVar11 & 1) != 0) {
            (*(code *)PTR_FUN_8c02bcb8)(param_2,local_60 - 1,local_5c,0xd);
          }
          if ((bStack_18 & 2) != 0) {
            (*(code *)PTR_FUN_8c02bcb8)(param_2,local_60 + 1,local_5c,0xe);
          }
          if ((bStack_18 & 4) != 0) {
            (*(code *)PTR_FUN_8c02bcb8)(param_2,local_60,local_5c - 1,7);
          }
          if ((bStack_18 & 8) != 0) {
            (*(code *)PTR_FUN_8c02bcb8)(param_2,local_60,local_5c + 1,0xb);
          }
          iVar8 = *(int *)(DAT_8c02bb94 + param_2) + -1;
          *(int *)(DAT_8c02bb94 + param_2) = iVar8;
          if ((iVar8 == 0) && (*(int *)(DAT_8c02bb96 + param_2) != 0)) {
            iVar8 = (int)DAT_8c02bca2;
            iVar10 = *(int *)(DAT_8c02bca0 + param_2);
            *(int *)(DAT_8c02bca4 + param_2) = iVar10;
            puVar3 = PTR__memcpy_8c02bcb4;
            local_28 = (code *)PTR__memcpy_8c02bcb4;
            *(undefined4 *)(DAT_8c02bca8 + param_2) = *(undefined4 *)(DAT_8c02bca6 + param_2);
            (*(code *)puVar3)(local_54,param_2 + iVar8,(iVar10 + 1) * 2);
            (*local_28)(local_50,param_2 + DAT_8c02bcaa,(*(int *)(DAT_8c02bca4 + param_2) + 1) * 2);
          }
        }
      }
    }
  }
  puVar3 = PTR_DAT_8c02bba4;
  if (*(int *)(DAT_8c02bb96 + param_2) != 0) {
    iVar8 = (int)DAT_8c02bb9a;
    uVar4 = *(undefined4 *)(PTR_DAT_8c02bba4 + 4);
    *(undefined4 *)(DAT_8c02bb98 + param_2) = 1;
    puVar7 = (undefined4 *)(param_2 + iVar8);
    iVar8 = (int)DAT_8c02bb9c;
    uVar9 = *(undefined4 *)puVar3;
    puVar7[1] = uVar4;
    uVar4 = *(undefined4 *)(puVar3 + 8);
    iVar10 = *(int *)(iVar8 + param_2);
    iVar8 = (int)DAT_8c02bb9e;
    *puVar7 = uVar9;
    puVar7[2] = uVar4;
    *(undefined2 *)(param_2 + DAT_8c02bba0) =
         *(undefined2 *)(*(int *)(iVar8 + iVar10) + iVar13 * (uint)*(ushort *)(param_2 + 0x54) + 2);
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)(iVar10 + 0x18),param_1);
    }
    else {
      uVar16 = *(undefined8 *)(iVar10 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c02bba2 + param_2) = (int)((ulonglong)uVar16 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c02bba2 + param_2) = uVar16;
    }
  }
  return;
}

