// entry: 8c029bec
// name: FUN_8c029bec


/* WARNING: Removing unreachable block (ram,0x8c029dce) */
/* WARNING: Removing unreachable block (ram,0x8c029eaa) */

void FUN_8c029bec(undefined4 param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 in_fr3;
  double dVar17;
  undefined4 uVar18;
  double dVar19;
  float fVar21;
  undefined8 uVar20;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_38;
  uint local_34;
  byte local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  byte *local_1c;
  byte bStack_18;
  int local_14;
  byte bStack_10;
  int local_c;
  
  sVar1 = *(short *)(*(int *)(DAT_8c029d58 + param_2) + 0x68);
  iVar6 = (*(code *)PTR__rand_8c029d78)();
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44((float)iVar6,param_1);
  }
  else {
    dVar19 = (double)iVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(DAT_8c029d7c,in_fr3);
  }
  else {
    dVar17 = (double)CONCAT44(DAT_8c029d80,DAT_8c029d7c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) /
                              (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 / dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(DAT_8c029d80,SUB84(dVar17,0));
  }
  else {
    dVar17 = (double)CONCAT44(PTR_DAT_8c029d84,DAT_8c029d80);
  }
  if (in_FPSCR_PR == '\0') {
    fVar21 = (float)((ulonglong)dVar19 >> 0x20) * (float)((ulonglong)dVar17 >> 0x20);
    dVar19 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
    iVar6 = (int)fVar21;
  }
  else {
    dVar19 = dVar19 * dVar17;
    iVar6 = (int)dVar19;
  }
  uVar18 = SUB84(dVar19,0);
  if (iVar6 < sVar1) {
    iVar6 = 0;
    iVar14 = (int)DAT_8c029d5c;
    *(undefined4 *)(DAT_8c029d5a + param_2) = 0;
    iVar10 = 0;
    iVar16 = 8;
    *(undefined4 *)(DAT_8c029d5e + param_2) = 0;
    *(undefined4 *)(DAT_8c029d60 + param_2) = 0;
    *(undefined4 *)(DAT_8c029d62 + param_2) = 0;
    *(undefined4 *)(DAT_8c029d64 + param_2) = 0;
    do {
      puVar8 = (ushort *)
               (*(int *)((int)DAT_8c029d68 + *(int *)(DAT_8c029d66 + param_2)) + iVar14 * iVar10);
      if ((((puVar8 != (ushort *)0x0) && ((*puVar8 & 1) != 0)) && ((puVar8[4] & 4) == 0)) &&
         (*(char *)(*(int *)(DAT_8c029d6a + param_2) + 0xe + iVar10) == '\x02')) {
        iVar6 = iVar6 + 1;
      }
      iVar16 = iVar16 + -1;
      iVar10 = iVar10 + 1;
    } while (iVar16 != 0);
    *(undefined4 *)(DAT_8c029d6c + param_2) = *(undefined4 *)(PTR_DAT_8c029d84 + iVar6 * 4);
    puVar5 = PTR___bfswu_8c029f1c;
    uVar13 = *(uint *)(DAT_8c029d6e + param_2);
    uVar15 = *(uint *)(DAT_8c029d70 + param_2);
    uVar12 = *(uint *)(DAT_8c029d72 + param_2);
    iVar6 = *(int *)(DAT_8c029d5e + param_2);
    if ((iVar6 < *(int *)(DAT_8c029d6c + param_2)) && (*(int *)(DAT_8c029d62 + param_2) == 0)) {
      if (((int)(uVar13 - 1) < 0) || (*(int *)(DAT_8c029d74 + param_2) <= (int)(uVar13 - 1))) {
        bVar3 = false;
      }
      else if (((int)(uVar15 - 1) < 0) || (*(int *)(DAT_8c029d76 + param_2) <= (int)(uVar15 - 1))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (((int)(uVar13 + 1) < 0) || (*(int *)(DAT_8c029d74 + param_2) <= (int)(uVar13 + 1))) {
          bVar3 = false;
        }
        else if (((int)(uVar15 + 1) < 0) || (*(int *)(DAT_8c029d76 + param_2) <= (int)(uVar15 + 1)))
        {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_2c = param_2 + DAT_8c029f0a;
          local_28 = param_2 + DAT_8c029f0c;
          *(undefined2 *)(local_2c + iVar6 * 2) = 0;
          (*(code *)puVar5)(uVar13 & 0xffff,local_28 + iVar6 * 2,6);
          (*(code *)PTR___bfswu_8c029f1c)(uVar15 & 0xffff,(int)DAT_8c029f0e,local_28 + iVar6 * 2);
          local_24 = DAT_8c029f20;
          puVar8 = (ushort *)(DAT_8c029f20 + (uVar15 * 0x40 + uVar13) * 0x10);
          if ((iVar6 < 1) || ((*puVar8 & 0x20) == 0)) {
            bVar2 = (byte)puVar8[4];
            bVar4 = 0;
            if ((0x4f < bVar2) && ((bVar2 < 0x5a && (0 < iVar6)))) {
              bVar4 = 1;
            }
            local_20 = (uint)bVar4;
            iVar6 = (*(code *)PTR_FUN_8c029f24)
                              (*(undefined4 *)(DAT_8c029f10 + param_2),uVar13,uVar15);
            if (((iVar6 == 0) ||
                (iVar6 = (*(code *)PTR_FUN_8c02a1f8)(param_2,uVar13,uVar15), iVar6 == 0)) ||
               (iVar6 = (*(code *)PTR_FUN_8c02a1fc)(param_2,uVar13,uVar15), iVar6 < 1)) {
              *(int *)(DAT_8c029f12 + param_2) = *(int *)(DAT_8c029f12 + param_2) + 1;
              if (local_20 != 0) {
                (*(code *)PTR_FUN_8c02a1f0)
                          (*(undefined4 *)(DAT_8c02a1e2 + param_2),uVar13,uVar15,&local_38,&local_34
                          );
                uVar13 = local_38;
                uVar15 = local_34;
              }
              local_34 = uVar15;
              local_38 = uVar13;
              (*(code *)PTR___bfswu_8c029f1c)(local_38 & 0xffff,6);
              (*(code *)PTR___bfswu_8c029f1c)(local_34 & 0xffff,(int)DAT_8c029f0e);
              local_1c = local_30;
              local_30[0] = (local_30[0] & (byte)DAT_8c029f14 | 0x10) & (byte)DAT_8c029f16 | 8;
              bStack_18 = (*(code *)PTR_FUN_8c029f28)(*(undefined4 *)(DAT_8c029f10 + param_2),1);
              local_14 = (*(code *)PTR_FUN_8c029f2c)(6);
              local_c = (*(code *)PTR_FUN_8c029f2c)((int)DAT_8c029f0e,local_14);
              local_24 = local_24 + (local_c * 0x40 + local_14) * 0x10;
              if ((local_14 + -1 < 0) || (*(int *)(DAT_8c029f18 + param_2) <= local_14 + -1)) {
                bVar3 = false;
              }
              else if ((local_c < 0) || (*(int *)(DAT_8c029f1a + param_2) <= local_c)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((!bVar3) || ((*(ushort *)(local_24 + -0x10) & 4) != 0)) {
                bStack_18 = bStack_18 & 0xfe;
              }
              if ((local_14 + 1 < 0) || (*(int *)(DAT_8c02a098 + param_2) <= local_14 + 1)) {
                bVar3 = false;
              }
              else if ((local_c < 0) || (*(int *)(DAT_8c02a09a + param_2) <= local_c)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((!bVar3) || ((*(ushort *)(local_24 + 0x10) & 4) != 0)) {
                bStack_18 = bStack_18 & 0xfd;
              }
              if ((local_14 < 0) || (*(int *)(DAT_8c02a098 + param_2) <= local_14)) {
                bVar3 = false;
              }
              else if ((local_c + -1 < 0) || (*(int *)(DAT_8c02a09a + param_2) <= local_c + -1)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((!bVar3) || ((*(ushort *)(local_24 - DAT_8c02a09c) & 4) != 0)) {
                bStack_18 = bStack_18 & 0xfb;
              }
              local_c = local_c + 1;
              if ((local_14 < 0) || (*(int *)(DAT_8c02a098 + param_2) <= local_14)) {
                bVar3 = false;
              }
              else if ((local_c < 0) || (*(int *)(DAT_8c02a09a + param_2) <= local_c)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((!bVar3) || ((*(ushort *)(DAT_8c02a09c + local_24) & 4) != 0)) {
                bStack_18 = bStack_18 & 0xf7;
              }
              uVar12 = uVar12 & bStack_18;
              bStack_10 = (byte)uVar12;
              if ((uVar12 & 1) != 0) {
                (*(code *)PTR_FUN_8c02a1f4)(param_2,local_38 - 1,local_34,0xd);
              }
              if ((bStack_10 & 2) != 0) {
                (*(code *)PTR_FUN_8c02a1f4)(param_2,local_38 + 1,local_34,0xe);
              }
              local_20 = (uint)bStack_10;
              if ((bStack_10 & 4) != 0) {
                (*(code *)PTR_FUN_8c02a1f4)(param_2,local_38,local_34 - 1,7);
              }
              if ((bStack_10 & 8) != 0) {
                (*(code *)PTR_FUN_8c02a1f4)(param_2,local_38,local_34 + 1,0xb);
              }
              *(int *)(DAT_8c02a1da + param_2) = *(int *)(DAT_8c02a1da + param_2) + -1;
            }
            else {
              *(undefined4 *)(DAT_8c02a1dc + param_2) = 1;
              iVar6 = *(int *)(DAT_8c02a1da + param_2);
              *(int *)(DAT_8c02a1ea + param_2) = iVar6;
              *(undefined2 *)(local_2c + iVar6 * 2) = 1;
            }
          }
        }
      }
    }
    puVar5 = PTR_DAT_8c02a1ec;
    if (*(int *)(DAT_8c02a1dc + param_2) != 0) {
      iVar6 = (int)DAT_8c02a1e0;
      uVar7 = *(undefined4 *)(PTR_DAT_8c02a1ec + 4);
      *(undefined4 *)(DAT_8c02a1de + param_2) = 1;
      puVar9 = (undefined4 *)(param_2 + iVar6);
      iVar6 = (int)DAT_8c02a1e2;
      uVar11 = *(undefined4 *)puVar5;
      puVar9[1] = uVar7;
      uVar7 = *(undefined4 *)(puVar5 + 8);
      iVar10 = *(int *)(iVar6 + param_2);
      iVar6 = (int)DAT_8c02a1e4;
      *puVar9 = uVar11;
      puVar9[2] = uVar7;
      *(undefined2 *)(param_2 + DAT_8c02a1e6) =
           *(undefined2 *)
            (*(int *)(iVar6 + iVar10) + iVar14 * (uint)*(ushort *)(param_2 + 0x54) + 2);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(iVar10 + 0x18),uVar18);
      }
      else {
        uVar20 = *(undefined8 *)(iVar10 + 0x18);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c02a1e8 + param_2) = (int)((ulonglong)uVar20 >> 0x20);
      }
      else {
        *(undefined8 *)(DAT_8c02a1e8 + param_2) = uVar20;
      }
    }
  }
  return;
}

