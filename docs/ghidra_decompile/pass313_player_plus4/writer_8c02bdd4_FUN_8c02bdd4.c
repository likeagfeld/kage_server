// entry: 8c02bdd4
// name: FUN_8c02bdd4


/* WARNING: Removing unreachable block (ram,0x8c02bf8c) */
/* WARNING: Removing unreachable block (ram,0x8c02c078) */

void FUN_8c02bdd4(undefined4 param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 in_fr3;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  float fVar19;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_40;
  uint local_3c;
  byte local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  code *local_20;
  byte *local_1c;
  byte bStack_18;
  int local_14;
  byte bStack_10;
  int local_c;
  
  iVar9 = 0;
  *(undefined4 *)(DAT_8c02bf3e + param_2) = 0;
  iVar15 = 8;
  iVar13 = (int)DAT_8c02bf42;
  *(undefined4 *)(DAT_8c02bf40 + param_2) = 0;
  *(undefined4 *)(DAT_8c02bf44 + param_2) = 0;
  *(undefined4 *)(DAT_8c02bf46 + param_2) = 0;
  *(undefined4 *)(DAT_8c02bf48 + param_2) = 0;
  iVar6 = 0;
  do {
    puVar7 = (ushort *)
             (*(int *)((int)DAT_8c02bf4c + *(int *)(DAT_8c02bf4a + param_2)) + iVar13 * iVar9);
    if ((((puVar7 != (ushort *)0x0) && ((*puVar7 & 1) != 0)) && ((puVar7[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02bf4e + param_2) + 0xe + iVar9) == '\x02')) {
      iVar6 = iVar6 + 1;
    }
    iVar15 = iVar15 + -1;
    iVar9 = iVar9 + 1;
  } while (iVar15 != 0);
  *(undefined4 *)(DAT_8c02bf50 + param_2) = *(undefined4 *)(PTR_DAT_8c02bf64 + iVar6 * 4);
  uVar12 = *(uint *)(DAT_8c02bf52 + param_2);
  uVar14 = *(uint *)(DAT_8c02bf54 + param_2);
  uVar11 = *(uint *)(DAT_8c02bf56 + param_2);
  iVar6 = *(int *)(DAT_8c02bf40 + param_2);
  if (iVar6 == 0) {
    *(undefined4 *)(DAT_8c02bf58 + param_2) = 0;
  }
  puVar4 = PTR___bfswu_8c02bf68;
  if ((iVar6 < *(int *)(DAT_8c02bf50 + param_2)) && (*(int *)(DAT_8c02bf46 + param_2) == 0)) {
    if (((int)(uVar12 - 1) < 0) || (*(int *)(DAT_8c02bf5a + param_2) <= (int)(uVar12 - 1))) {
      bVar2 = false;
    }
    else if (((int)(uVar14 - 1) < 0) || (*(int *)(DAT_8c02bf5c + param_2) <= (int)(uVar14 - 1))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((int)(uVar12 + 1) < 0) || (*(int *)(DAT_8c02bf5a + param_2) <= (int)(uVar12 + 1))) {
        bVar2 = false;
      }
      else if (((int)(uVar14 + 1) < 0) || (*(int *)(DAT_8c02bf5c + param_2) <= (int)(uVar14 + 1))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_34 = param_2 + DAT_8c02bf5e;
        local_30 = param_2 + DAT_8c02bf60;
        *(undefined2 *)(local_34 + iVar6 * 2) = 0;
        (*(code *)puVar4)(uVar12 & 0xffff,local_30 + iVar6 * 2,6);
        (*(code *)PTR___bfswu_8c02c0ec)(uVar14 & 0xffff,(int)DAT_8c02c0d8);
        local_2c = DAT_8c02c0f0;
        bVar1 = *(byte *)(DAT_8c02c0f0 + (uVar14 * 0x40 + uVar12) * 0x10 + 8);
        bVar3 = 0;
        if (((0x4f < bVar1) && (bVar1 < 0x5a)) && (0 < iVar6)) {
          bVar3 = 1;
        }
        local_28 = (uint)bVar3;
        iVar6 = (*(code *)PTR_FUN_8c02c0f4)(param_2,uVar12,uVar14);
        if (iVar6 == 0) {
          local_24 = *(int *)(DAT_8c02c0da + param_2) - *(int *)(DAT_8c02c0dc + param_2);
          iVar6 = *(int *)(DAT_8c02c0de + param_2);
          if ((iVar6 == local_24) && (local_24 != 0)) {
            iVar6 = (*(code *)PTR__rand_8c02c48c)();
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44((float)iVar6,param_1);
            }
            else {
              dVar18 = (double)iVar6;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar16 = (double)CONCAT44(DAT_8c02c490,in_fr3);
            }
            else {
              dVar16 = (double)CONCAT44(DAT_8c02c494,DAT_8c02c490);
            }
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) /
                                        (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar18,0));
            }
            else {
              dVar18 = dVar18 / dVar16;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar16 = (double)CONCAT44(DAT_8c02c494,SUB84(dVar16,0));
            }
            else {
              dVar16 = (double)CONCAT44(uRam8c02c498,DAT_8c02c494);
            }
            if (in_FPSCR_PR == '\0') {
              fVar19 = (float)((ulonglong)dVar18 >> 0x20) * (float)((ulonglong)dVar16 >> 0x20);
              dVar18 = (double)CONCAT44(fVar19,SUB84(dVar18,0));
              iVar9 = (int)fVar19;
            }
            else {
              dVar18 = dVar18 * dVar16;
              iVar9 = (int)dVar18;
            }
            param_1 = SUB84(dVar18,0);
            iVar6 = *(int *)(DAT_8c02c476 + param_2);
            if (iVar9 < 0x32) {
              local_24 = local_24 + 1;
            }
          }
          if (iVar6 < local_24) {
            iVar6 = (int)DAT_8c02c478;
            *(int *)(DAT_8c02c476 + param_2) = local_24;
            *(undefined4 *)(DAT_8c02c47a + param_2) = 1;
            puVar4 = PTR__memcpy_8c02c488;
            iVar9 = *(int *)(DAT_8c02c47c + param_2);
            local_20 = (code *)PTR__memcpy_8c02c488;
            *(int *)(DAT_8c02c47e + param_2) = iVar9;
            *(int *)(DAT_8c02c480 + param_2) = iVar9;
            *(undefined4 *)(DAT_8c02c484 + param_2) = *(undefined4 *)(DAT_8c02c482 + param_2);
            (*(code *)puVar4)(param_2 + iVar6,local_34,(iVar9 + 1) * 2);
            (*local_20)(param_2 + DAT_8c02c486,local_30,(*(int *)(DAT_8c02c47e + param_2) + 1) * 2);
          }
        }
        *(int *)(DAT_8c02c0dc + param_2) = *(int *)(DAT_8c02c0dc + param_2) + 1;
        if (local_28 != 0) {
          (*(code *)PTR_FUN_8c02c3c0)
                    (*(undefined4 *)(DAT_8c02c3a8 + param_2),uVar12,uVar14,&local_40,&local_3c);
          uVar12 = local_40;
          uVar14 = local_3c;
        }
        local_3c = uVar14;
        local_40 = uVar12;
        (*(code *)PTR___bfswu_8c02c0ec)(local_40 & 0xffff,6);
        (*(code *)PTR___bfswu_8c02c0ec)(local_3c & 0xffff,(int)DAT_8c02c0d8);
        local_1c = local_38;
        local_38[0] = (local_38[0] & (byte)DAT_8c02c0e0 | 0x10) & (byte)DAT_8c02c0e2 | 8;
        bStack_18 = (*(code *)PTR_FUN_8c02c0f8)(*(undefined4 *)(DAT_8c02c0e4 + param_2),1);
        local_14 = (*(code *)PTR_FUN_8c02c0fc)(6);
        local_c = (*(code *)PTR_FUN_8c02c0fc)((int)DAT_8c02c0d8,local_14);
        local_2c = local_2c + (local_c * 0x40 + local_14) * 0x10;
        if ((local_14 + -1 < 0) || (*(int *)(DAT_8c02c0e6 + param_2) <= local_14 + -1)) {
          bVar2 = false;
        }
        else if ((local_c < 0) || (*(int *)(DAT_8c02c0e8 + param_2) <= local_c)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_2c + -0x10) & 4) != 0)) {
          bStack_18 = bStack_18 & 0xfe;
        }
        if ((local_14 + 1 < 0) || (*(int *)(DAT_8c02c270 + param_2) <= local_14 + 1)) {
          bVar2 = false;
        }
        else if ((local_c < 0) || (*(int *)(DAT_8c02c272 + param_2) <= local_c)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_2c + 0x10) & 4) != 0)) {
          bStack_18 = bStack_18 & 0xfd;
        }
        if ((local_14 < 0) || (*(int *)(DAT_8c02c270 + param_2) <= local_14)) {
          bVar2 = false;
        }
        else if ((local_c + -1 < 0) || (*(int *)(DAT_8c02c272 + param_2) <= local_c + -1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_2c - DAT_8c02c274) & 4) != 0)) {
          bStack_18 = bStack_18 & 0xfb;
        }
        local_c = local_c + 1;
        if ((local_14 < 0) || (*(int *)(DAT_8c02c270 + param_2) <= local_14)) {
          bVar2 = false;
        }
        else if ((local_c < 0) || (*(int *)(DAT_8c02c272 + param_2) <= local_c)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(DAT_8c02c274 + local_2c) & 4) != 0)) {
          bStack_18 = bStack_18 & 0xf7;
        }
        uVar11 = uVar11 & bStack_18;
        bStack_10 = (byte)uVar11;
        if ((uVar11 & 1) != 0) {
          (*(code *)PTR_FUN_8c02c3c8)(param_2,local_40 - 1,local_3c,0xd);
        }
        if ((bStack_10 & 2) != 0) {
          (*(code *)PTR_FUN_8c02c3c8)(param_2,local_40 + 1,local_3c,0xe);
        }
        if ((bStack_10 & 4) != 0) {
          (*(code *)PTR_FUN_8c02c3c8)(param_2,local_40,local_3c - 1,7);
        }
        if ((bStack_10 & 8) != 0) {
          (*(code *)PTR_FUN_8c02c3c8)(param_2,local_40,local_3c + 1,0xb);
        }
        iVar6 = *(int *)(DAT_8c02c3a0 + param_2) + -1;
        *(int *)(DAT_8c02c3a0 + param_2) = iVar6;
        if ((iVar6 == 0) && (*(int *)(DAT_8c02c3a2 + param_2) != 0)) {
          iVar6 = (int)DAT_8c02c3b2;
          iVar9 = *(int *)(DAT_8c02c3b0 + param_2);
          *(int *)(DAT_8c02c3b4 + param_2) = iVar9;
          puVar4 = PTR__memcpy_8c02c3c4;
          local_20 = (code *)PTR__memcpy_8c02c3c4;
          *(undefined4 *)(DAT_8c02c3b8 + param_2) = *(undefined4 *)(DAT_8c02c3b6 + param_2);
          (*(code *)puVar4)(local_34,param_2 + iVar6,(iVar9 + 1) * 2);
          (*local_20)(local_30,param_2 + DAT_8c02c3ba,(*(int *)(DAT_8c02c3b4 + param_2) + 1) * 2);
        }
      }
    }
  }
  puVar4 = PTR_DAT_8c02c3bc;
  if (*(int *)(DAT_8c02c3a2 + param_2) != 0) {
    iVar6 = (int)DAT_8c02c3a6;
    uVar5 = *(undefined4 *)PTR_DAT_8c02c3bc;
    *(undefined4 *)(DAT_8c02c3a4 + param_2) = 1;
    puVar8 = (undefined4 *)(param_2 + iVar6);
    iVar6 = (int)DAT_8c02c3a8;
    uVar10 = *(undefined4 *)(puVar4 + 4);
    *puVar8 = uVar5;
    uVar5 = *(undefined4 *)(puVar4 + 8);
    iVar9 = *(int *)(iVar6 + param_2);
    iVar6 = (int)DAT_8c02c3aa;
    puVar8[1] = uVar10;
    puVar8[2] = uVar5;
    *(undefined2 *)(param_2 + DAT_8c02c3ac) =
         *(undefined2 *)(*(int *)(iVar6 + iVar9) + iVar13 * (uint)*(ushort *)(param_2 + 0x54) + 2);
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(*(undefined4 *)(iVar9 + 0x18),param_1);
    }
    else {
      uVar17 = *(undefined8 *)(iVar9 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c02c3ae + param_2) = (int)((ulonglong)uVar17 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c02c3ae + param_2) = uVar17;
    }
  }
  return;
}

