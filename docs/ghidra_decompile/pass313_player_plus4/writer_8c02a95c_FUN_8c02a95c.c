// entry: 8c02a95c
// name: FUN_8c02a95c


/* WARNING: Removing unreachable block (ram,0x8c02ab14) */
/* WARNING: Removing unreachable block (ram,0x8c02ac70) */

void FUN_8c02a95c(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  char in_FPSCR_SZ;
  byte local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  byte bStack_18;
  int local_14;
  byte bStack_10;
  int local_c;
  
  iVar8 = 0;
  *(undefined4 *)(DAT_8c02aac8 + param_2) = 0;
  iVar6 = 0;
  iVar13 = 8;
  iVar11 = (int)DAT_8c02aacc;
  *(undefined4 *)(DAT_8c02aaca + param_2) = 0;
  *(undefined4 *)(DAT_8c02aace + param_2) = 0;
  *(undefined4 *)(DAT_8c02aad0 + param_2) = 0;
  *(undefined4 *)(DAT_8c02aad2 + param_2) = 0;
  do {
    puVar4 = (ushort *)
             (*(int *)((int)DAT_8c02aad6 + *(int *)(DAT_8c02aad4 + param_2)) + iVar11 * iVar6);
    if ((((puVar4 != (ushort *)0x0) && ((*puVar4 & 1) != 0)) && ((puVar4[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02aad8 + param_2) + 0xe + iVar6) == '\x02')) {
      iVar8 = iVar8 + 1;
    }
    iVar13 = iVar13 + -1;
    iVar6 = iVar6 + 1;
  } while (iVar13 != 0);
  *(undefined4 *)(DAT_8c02aada + param_2) = *(undefined4 *)(PTR_DAT_8c02aaec + iVar8 * 4);
  puVar2 = PTR___bfswu_8c02aaf0;
  uVar10 = *(uint *)(DAT_8c02aadc + param_2);
  uVar12 = *(uint *)(DAT_8c02aade + param_2);
  uVar9 = *(uint *)(DAT_8c02aae0 + param_2);
  iVar6 = *(int *)(DAT_8c02aaca + param_2);
  if ((iVar6 < *(int *)(DAT_8c02aada + param_2)) && (*(int *)(DAT_8c02aad0 + param_2) == 0)) {
    local_38 = uVar10 - 1;
    local_34 = uVar12 - 1;
    if ((local_38 < 0) || (*(int *)(DAT_8c02aae2 + param_2) <= local_38)) {
      bVar1 = false;
    }
    else if ((local_34 < 0) || (*(int *)(DAT_8c02aae4 + param_2) <= local_34)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_30 = uVar10 + 1;
      local_2c = uVar12 + 1;
      if ((local_30 < 0) || (*(int *)(DAT_8c02aae2 + param_2) <= local_30)) {
        bVar1 = false;
      }
      else if ((local_2c < 0) || (*(int *)(DAT_8c02aae4 + param_2) <= local_2c)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_28 = param_2 + DAT_8c02aae6;
        local_24 = param_2 + DAT_8c02aae8;
        *(undefined2 *)(local_28 + iVar6 * 2) = 0;
        (*(code *)puVar2)(uVar10 & 0xffff,local_24 + iVar6 * 2,6);
        (*(code *)PTR___bfswu_8c02abf0)(uVar12 & 0xffff,local_24 + iVar6 * 2);
        local_20 = DAT_8c02abf4;
        if ((iVar6 < 1) ||
           ((*(ushort *)(DAT_8c02abf4 + (uVar12 * 0x40 + uVar10) * 0x10) & 0x20) == 0)) {
          iVar6 = (*(code *)PTR_FUN_8c02abfc)(*(undefined4 *)(DAT_8c02abe2 + param_2),uVar10,uVar12)
          ;
          if ((iVar6 == 0) ||
             ((iVar6 = (*(code *)PTR_FUN_8c02ac00)(param_2,uVar10,uVar12), iVar6 == 0 ||
              (iVar6 = (*(code *)PTR_FUN_8c02ac04)(param_2,uVar10,uVar12), iVar6 < 1)))) {
            puVar2 = PTR___bfswu_8c02ada0;
            *(int *)(DAT_8c02ad90 + param_2) = *(int *)(DAT_8c02ad90 + param_2) + 1;
            local_1c = local_3c;
            (*(code *)puVar2)(uVar10 & 0xffff,6);
            (*(code *)PTR___bfswu_8c02ada0)(uVar12 & 0xffff,(int)DAT_8c02ad92);
            local_3c[0] = (local_3c[0] & (byte)DAT_8c02ad94 | 0x10) & (byte)DAT_8c02ad98 | 8;
            bStack_18 = (*(code *)PTR_FUN_8c02ada4)
                                  (*(undefined4 *)(DAT_8c02ad96 + param_2),local_3c,1);
            local_14 = (*(code *)PTR_FUN_8c02ada8)(6);
            local_c = (*(code *)PTR_FUN_8c02ada8)(local_14);
            local_20 = local_20 + (local_c * 0x40 + local_14) * 0x10;
            if ((local_14 + -1 < 0) || (*(int *)(DAT_8c02ad9a + param_2) <= local_14 + -1)) {
              bVar1 = false;
            }
            else if ((local_c < 0) || (*(int *)(DAT_8c02ad9c + param_2) <= local_c)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((!bVar1) || ((*(ushort *)(local_20 + -0x10) & 4) != 0)) {
              bStack_18 = bStack_18 & 0xfe;
            }
            if ((local_14 + 1 < 0) || (*(int *)(DAT_8c02ad9a + param_2) <= local_14 + 1)) {
              bVar1 = false;
            }
            else if ((local_c < 0) || (*(int *)(DAT_8c02ad9c + param_2) <= local_c)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((!bVar1) || ((*(ushort *)(local_20 + 0x10) & 4) != 0)) {
              bStack_18 = bStack_18 & 0xfd;
            }
            if ((local_14 < 0) || (*(int *)(DAT_8c02ad9a + param_2) <= local_14)) {
              bVar1 = false;
            }
            else if ((local_c + -1 < 0) || (*(int *)(DAT_8c02ad9c + param_2) <= local_c + -1)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((!bVar1) || ((*(ushort *)(local_20 - DAT_8c02aebe) & 4) != 0)) {
              bStack_18 = bStack_18 & 0xfb;
            }
            local_c = local_c + 1;
            if ((local_14 < 0) || (*(int *)(DAT_8c02aec0 + param_2) <= local_14)) {
              bVar1 = false;
            }
            else if ((local_c < 0) || (*(int *)(DAT_8c02aec2 + param_2) <= local_c)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((!bVar1) || ((*(ushort *)(DAT_8c02aebe + local_20) & 4) != 0)) {
              bStack_18 = bStack_18 & 0xf7;
            }
            uVar9 = uVar9 & bStack_18;
            bStack_10 = (byte)uVar9;
            if ((uVar9 & 1) != 0) {
              (*(code *)PTR_FUN_8c02aec8)(param_2,local_38,uVar12,0xd);
            }
            if ((bStack_10 & 2) != 0) {
              (*(code *)PTR_FUN_8c02aec8)(param_2,local_30,uVar12,0xe);
            }
            if ((bStack_10 & 4) != 0) {
              (*(code *)PTR_FUN_8c02aec8)(param_2,uVar10,local_34,7);
            }
            if ((bStack_10 & 8) != 0) {
              (*(code *)PTR_FUN_8c02aec8)(param_2,uVar10,local_2c,0xb);
            }
            *(int *)(DAT_8c02aec4 + param_2) = *(int *)(DAT_8c02aec4 + param_2) + -1;
          }
          else {
            *(undefined4 *)(DAT_8c02abdc + param_2) = 1;
            iVar6 = *(int *)(DAT_8c02abea + param_2);
            *(int *)(DAT_8c02abec + param_2) = iVar6;
            *(undefined2 *)(local_28 + iVar6 * 2) = 1;
          }
        }
      }
    }
  }
  puVar2 = PTR_DAT_8c02abf8;
  if (*(int *)(DAT_8c02abdc + param_2) != 0) {
    iVar6 = (int)DAT_8c02abe0;
    uVar3 = *(undefined4 *)(PTR_DAT_8c02abf8 + 4);
    *(undefined4 *)(DAT_8c02abde + param_2) = 1;
    puVar5 = (undefined4 *)(param_2 + iVar6);
    iVar6 = (int)DAT_8c02abe2;
    uVar7 = *(undefined4 *)puVar2;
    puVar5[1] = uVar3;
    uVar3 = *(undefined4 *)(puVar2 + 8);
    iVar8 = *(int *)(iVar6 + param_2);
    iVar6 = (int)DAT_8c02abe4;
    *puVar5 = uVar7;
    puVar5[2] = uVar3;
    *(undefined2 *)(param_2 + DAT_8c02abe6) =
         *(undefined2 *)(*(int *)(iVar6 + iVar8) + iVar11 * (uint)*(ushort *)(param_2 + 0x54) + 2);
    if (in_FPSCR_SZ == '\0') {
      uVar14 = CONCAT44(*(undefined4 *)(iVar8 + 0x18),param_1);
    }
    else {
      uVar14 = *(undefined8 *)(iVar8 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c02abe8 + param_2) = (int)((ulonglong)uVar14 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c02abe8 + param_2) = uVar14;
    }
  }
  return;
}

