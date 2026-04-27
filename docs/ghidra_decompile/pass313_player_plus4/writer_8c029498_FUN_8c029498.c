// entry: 8c029498
// name: FUN_8c029498


/* WARNING: Removing unreachable block (ram,0x8c029658) */
/* WARNING: Removing unreachable block (ram,0x8c029716) */

void FUN_8c029498(undefined4 param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  char in_FPSCR_SZ;
  uint local_40;
  uint local_3c;
  byte local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  byte *local_28;
  byte bStack_24;
  int local_20;
  byte bStack_1c;
  code *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar8 = 0;
  *(undefined4 *)(DAT_8c0295fe + param_2) = 0;
  iVar14 = 8;
  iVar11 = (int)DAT_8c029602;
  *(undefined4 *)(DAT_8c029600 + param_2) = 0;
  *(undefined4 *)(DAT_8c029604 + param_2) = 0;
  *(undefined4 *)(DAT_8c029606 + param_2) = 0;
  *(undefined4 *)(DAT_8c029608 + param_2) = 0;
  iVar5 = 0;
  do {
    puVar6 = (ushort *)
             (*(int *)((int)DAT_8c02960c + *(int *)(DAT_8c02960a + param_2)) + iVar11 * iVar8);
    if ((((puVar6 != (ushort *)0x0) && ((*puVar6 & 1) != 0)) && ((puVar6[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02960e + param_2) + 0xe + iVar8) == '\x02')) {
      iVar5 = iVar5 + 1;
    }
    iVar14 = iVar14 + -1;
    iVar8 = iVar8 + 1;
  } while (iVar14 != 0);
  *(undefined4 *)(DAT_8c029610 + param_2) = *(undefined4 *)(PTR_DAT_8c029624 + iVar5 * 4);
  uVar12 = *(uint *)(DAT_8c029612 + param_2);
  uVar13 = *(uint *)(DAT_8c029614 + param_2);
  uVar10 = *(uint *)(DAT_8c029616 + param_2);
  iVar5 = *(int *)(DAT_8c029600 + param_2);
  if (((iVar5 != 0) ||
      (*(undefined4 *)(DAT_8c029618 + param_2) = 0, *(int *)(DAT_8c02961a + param_2) != 0)) &&
     ((puVar3 = PTR___bfswu_8c0297b8, *(int *)(DAT_8c029618 + param_2) != 1 &&
      (iVar5 < *(int *)(DAT_8c029610 + param_2))))) {
    if (((int)(uVar12 - 1) < 0) || (*(int *)(DAT_8c02961c + param_2) <= (int)(uVar12 - 1))) {
      bVar2 = false;
    }
    else if (((int)(uVar13 - 1) < 0) || (*(int *)(DAT_8c02961e + param_2) <= (int)(uVar13 - 1))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((int)(uVar12 + 1) < 0) || (*(int *)(DAT_8c02961c + param_2) <= (int)(uVar12 + 1))) {
        bVar2 = false;
      }
      else if (((int)(uVar13 + 1) < 0) || (*(int *)(DAT_8c02961e + param_2) <= (int)(uVar13 + 1))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_34 = param_2 + DAT_8c029620;
        local_30 = param_2 + DAT_8c029622;
        *(undefined2 *)(local_34 + iVar5 * 2) = 0;
        (*(code *)puVar3)(uVar12 & 0xffff,local_30 + iVar5 * 2,6);
        (*(code *)PTR___bfswu_8c0297b8)(uVar13 & 0xffff,(int)DAT_8c0297ac);
        local_2c = DAT_8c0297bc;
        puVar6 = (ushort *)(DAT_8c0297bc + (uVar13 * 0x40 + uVar12) * 0x10);
        if (iVar5 < 1) {
          bVar2 = false;
        }
        else {
          if ((*puVar6 & 0x20) != 0) goto LAB_8c029990;
          bVar1 = (byte)puVar6[4];
          bVar2 = false;
          if ((0x4f < bVar1) && (bVar1 < 0x5a)) {
            bVar2 = true;
          }
          if (bVar2) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
        }
        if (bVar2) {
          (*(code *)PTR_FUN_8c029a9c)
                    (*(undefined4 *)(DAT_8c029a82 + param_2),uVar12,uVar13,&local_40,&local_3c);
          uVar12 = local_40;
          uVar13 = local_3c;
        }
        local_3c = uVar13;
        local_40 = uVar12;
        (*(code *)PTR___bfswu_8c0297b8)(local_40 & 0xffff,6);
        (*(code *)PTR___bfswu_8c0297b8)(local_3c & 0xffff,(int)DAT_8c0297ac);
        local_28 = local_38;
        local_38[0] = (local_38[0] & (byte)DAT_8c0297ae | 0x10) & (byte)DAT_8c0297b0 | 8;
        bStack_24 = (*(code *)PTR_FUN_8c0297c0)(*(undefined4 *)(DAT_8c0297b2 + param_2),1);
        local_20 = (*(code *)PTR_FUN_8c0297c4)(local_28,6);
        local_10 = (*(code *)PTR_FUN_8c0297c4)((int)DAT_8c0297ac,local_20);
        local_2c = local_2c + (local_10 * 0x40 + local_20) * 0x10;
        if ((local_20 + -1 < 0) || (*(int *)(DAT_8c0297b4 + param_2) <= local_20 + -1)) {
          bVar2 = false;
        }
        else if ((local_10 < 0) || (*(int *)(DAT_8c0297b6 + param_2) <= local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_2c + -0x10) & 4) != 0)) {
          bStack_24 = bStack_24 & 0xfe;
        }
        if ((local_20 + 1 < 0) || (*(int *)(DAT_8c0297b4 + param_2) <= local_20 + 1)) {
          bVar2 = false;
        }
        else if ((local_10 < 0) || (*(int *)(DAT_8c02992e + param_2) <= local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_2c + 0x10) & 4) != 0)) {
          bStack_24 = bStack_24 & 0xfd;
        }
        if ((local_20 < 0) || (*(int *)(DAT_8c029930 + param_2) <= local_20)) {
          bVar2 = false;
        }
        else if ((local_10 + -1 < 0) || (*(int *)(DAT_8c02992e + param_2) <= local_10 + -1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_2c - DAT_8c029932) & 4) != 0)) {
          bStack_24 = bStack_24 & 0xfb;
        }
        local_10 = local_10 + 1;
        if ((local_20 < 0) || (*(int *)(DAT_8c029930 + param_2) <= local_20)) {
          bVar2 = false;
        }
        else if ((local_10 < 0) || (*(int *)(DAT_8c02992e + param_2) <= local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(DAT_8c029932 + local_2c) & 4) != 0)) {
          bStack_24 = bStack_24 & 0xf7;
        }
        uVar10 = uVar10 & bStack_24;
        bStack_1c = (byte)uVar10;
        if ((uVar10 == 0) &&
           (iVar5 = (*(code *)PTR_FUN_8c029aa0)(param_2,local_40,local_3c), iVar5 == 0)) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(DAT_8c029934 + param_2) - local_40;
          iVar8 = *(int *)(DAT_8c029936 + param_2) - local_3c;
          iVar5 = iVar5 * iVar5 + iVar8 * iVar8 + 1;
        }
        iVar8 = *(int *)(DAT_8c029938 + param_2);
        if ((iVar8 == 0) || (iVar5 < iVar8)) {
          iVar8 = (int)DAT_8c029a8c;
          *(int *)(DAT_8c029a8a + param_2) = iVar5;
          local_18 = (code *)PTR__memcpy_8c029aa4;
          *(undefined4 *)(DAT_8c029a7c + param_2) = 1;
          iVar5 = *(int *)(DAT_8c029a7a + param_2);
          *(int *)(DAT_8c029a8e + param_2) = iVar5;
          *(int *)(DAT_8c029a90 + param_2) = iVar5;
          *(undefined4 *)(DAT_8c029a94 + param_2) = *(undefined4 *)(DAT_8c029a92 + param_2);
          (*local_18)(param_2 + iVar8,local_34,(iVar5 + 1) * 2);
          (*local_18)(param_2 + DAT_8c029a96,local_30,(*(int *)(DAT_8c029a8e + param_2) + 1) * 2);
          iVar8 = *(int *)(DAT_8c029a8a + param_2);
        }
        if (iVar8 != 1) {
          *(int *)(DAT_8c02993a + param_2) = *(int *)(DAT_8c02993a + param_2) + 1;
          if ((bStack_1c & 1) != 0) {
            (*(code *)PTR_FUN_8c029bdc)(param_2,local_40 - 1,local_3c,0xd);
          }
          if ((bStack_1c & 2) != 0) {
            (*(code *)PTR_FUN_8c029bdc)(param_2,local_40 + 1,local_3c,0xe);
          }
          if ((bStack_1c & 4) != 0) {
            (*(code *)PTR_FUN_8c029bdc)(param_2,local_40,local_3c - 1,7);
          }
          if ((bStack_1c & 8) != 0) {
            (*(code *)PTR_FUN_8c029bdc)(param_2,local_40,local_3c + 1,0xb);
          }
          *(int *)(DAT_8c029a7a + param_2) = *(int *)(DAT_8c029a7a + param_2) + -1;
        }
        if ((*(int *)(DAT_8c029a7a + param_2) == 0) && (*(int *)(DAT_8c029a7c + param_2) != 0)) {
          iVar5 = (int)DAT_8c029bbe;
          iVar8 = *(int *)(DAT_8c029bbc + param_2);
          *(int *)(DAT_8c029bc0 + param_2) = iVar8;
          puVar3 = PTR__memcpy_8c029bd0;
          local_18 = (code *)PTR__memcpy_8c029bd0;
          *(undefined4 *)(DAT_8c029bc4 + param_2) = *(undefined4 *)(DAT_8c029bc2 + param_2);
          (*(code *)puVar3)(local_34,param_2 + iVar5,(iVar8 + 1) * 2);
          (*local_18)(local_30,param_2 + DAT_8c029bc6,(*(int *)(DAT_8c029bc0 + param_2) + 1) * 2);
          local_14 = *(int *)(DAT_8c029bc0 + param_2);
          if (local_14 == 0) {
            local_c = (*(code *)PTR_FUN_8c029bd4)(local_30,6);
            local_30 = local_30 + local_14 * 2;
            iVar5 = (*(code *)PTR_FUN_8c029bd4)(local_c,(int)DAT_8c029bc8);
            if (((local_c != *(int *)(DAT_8c029bca + param_2)) ||
                (iVar5 != *(int *)(DAT_8c029bcc + param_2))) &&
               (iVar5 = (*(code *)PTR_FUN_8c029bd8)(param_2), iVar5 != 0)) {
              *(undefined2 *)(local_34 + *(int *)(DAT_8c029bc0 + param_2) * 2) = 1;
            }
          }
        }
      }
    }
  }
LAB_8c029990:
  puVar3 = PTR_DAT_8c029a98;
  if (*(int *)(DAT_8c029a7c + param_2) != 0) {
    iVar5 = (int)DAT_8c029a80;
    uVar4 = *(undefined4 *)PTR_DAT_8c029a98;
    *(undefined4 *)(DAT_8c029a7e + param_2) = 1;
    puVar7 = (undefined4 *)(param_2 + iVar5);
    iVar5 = (int)DAT_8c029a82;
    uVar9 = *(undefined4 *)(puVar3 + 4);
    *puVar7 = uVar4;
    uVar4 = *(undefined4 *)(puVar3 + 8);
    iVar8 = *(int *)(iVar5 + param_2);
    iVar5 = (int)DAT_8c029a84;
    puVar7[1] = uVar9;
    puVar7[2] = uVar4;
    *(undefined2 *)(param_2 + DAT_8c029a86) =
         *(undefined2 *)(*(int *)(iVar5 + iVar8) + iVar11 * (uint)*(ushort *)(param_2 + 0x54) + 2);
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(*(undefined4 *)(iVar8 + 0x18),param_1);
    }
    else {
      uVar15 = *(undefined8 *)(iVar8 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c029a88 + param_2) = (int)((ulonglong)uVar15 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c029a88 + param_2) = uVar15;
    }
  }
  return;
}

