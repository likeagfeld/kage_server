// entry: 8c03447c
// name: FUN_8c03447c


/* WARNING: Removing unreachable block (ram,0x8c034636) */
/* WARNING: Removing unreachable block (ram,0x8c0346f8) */

void FUN_8c03447c(int param_1,uint param_2,uint param_3,byte param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  uint local_4c;
  uint local_48;
  byte local_44 [4];
  ushort *local_40;
  int local_3c;
  undefined2 *local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  byte bStack_28;
  int local_24;
  byte bStack_20;
  code *local_1c;
  int local_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  
  local_40 = (ushort *)
             (*(int *)((int)DAT_8c034608 + *(int *)(DAT_8c034604 + param_1)) +
             (int)DAT_8c034606 * *(int *)(DAT_8c03460a + param_1));
  if (local_40 == (ushort *)0x0) {
    return;
  }
  if ((*local_40 & 1) == 0) {
    return;
  }
  if ((local_40[4] & 4) != 0) {
    return;
  }
  local_40 = local_40 + 8;
  uVar6 = (*(code *)PTR_FUN_8c034624)(6);
  puVar3 = PTR_FUN_8c034624;
  iVar7 = (int)DAT_8c03460e;
  *(undefined4 *)(DAT_8c03460c + param_1) = uVar6;
  uVar6 = (*(code *)puVar3)(local_40,iVar7);
  *(undefined4 *)(DAT_8c034610 + param_1) = uVar6;
  *(undefined4 *)(DAT_8c034612 + param_1) = 1;
  local_3c = *(int *)(DAT_8c034614 + param_1);
  if ((((local_3c != 0) ||
       (*(undefined4 *)(DAT_8c034616 + param_1) = 0, *(int *)(DAT_8c034612 + param_1) != 0)) &&
      (puVar3 = PTR___bfswu_8c034628, *(int *)(DAT_8c034616 + param_1) != 1)) &&
     (local_3c < *(int *)(DAT_8c034618 + param_1))) {
    if (((int)(param_2 - 1) < 0) || (*(int *)(DAT_8c03461a + param_1) <= (int)(param_2 - 1))) {
      bVar2 = false;
    }
    else if (((int)(param_3 - 1) < 0) || (*(int *)(DAT_8c03461c + param_1) <= (int)(param_3 - 1))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((int)(param_2 + 1) < 0) || (*(int *)(DAT_8c03461a + param_1) <= (int)(param_2 + 1))) {
        bVar2 = false;
      }
      else if (((int)(param_3 + 1) < 0) || (*(int *)(DAT_8c03461c + param_1) <= (int)(param_3 + 1)))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_38 = (undefined2 *)(param_1 + DAT_8c03461e);
        local_34 = param_1 + DAT_8c034620;
        local_38[local_3c] = 0;
        (*(code *)puVar3)(param_2 & 0xffff,local_34 + local_3c * 2,6);
        (*(code *)PTR___bfswu_8c034628)(param_3 & 0xffff,(int)DAT_8c03460e);
        local_30 = DAT_8c0347b8;
        puVar8 = (ushort *)(DAT_8c0347b8 + (param_3 * 0x40 + param_2) * 0x10);
        if (local_3c < 1) {
          bVar2 = false;
        }
        else {
          if ((*puVar8 & 0x20) != 0) goto LAB_8c034984;
          bVar1 = (byte)puVar8[4];
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
        uVar4 = param_2;
        uVar5 = param_3;
        if (bVar2) {
          (*(code *)PTR_FUN_8c034aa0)
                    (*(undefined4 *)(DAT_8c034a8e + param_1),param_2,param_3,&local_4c,&local_48);
          uVar4 = local_4c;
          uVar5 = local_48;
        }
        local_48 = uVar5;
        local_4c = uVar4;
        (*(code *)PTR___bfswu_8c0347bc)(local_4c & 0xffff,6);
        (*(code *)PTR___bfswu_8c0347bc)(local_48 & 0xffff,(int)DAT_8c0347aa);
        local_2c = local_44;
        local_44[0] = (local_44[0] & (byte)DAT_8c0347ac | 0x10) & (byte)DAT_8c0347ae | 8;
        bStack_28 = (*(code *)PTR_FUN_8c0347c0)(*(undefined4 *)(DAT_8c0347b0 + param_1),1);
        local_24 = (*(code *)PTR_FUN_8c0347c4)(6);
        iStack_10 = (*(code *)PTR_FUN_8c0347c4)((int)DAT_8c0347aa,local_24);
        local_30 = local_30 + (iStack_10 * 0x40 + local_24) * 0x10;
        if ((local_24 + -1 < 0) || (*(int *)(DAT_8c0347b2 + param_1) <= local_24 + -1)) {
          bVar2 = false;
        }
        else if ((iStack_10 < 0) || (*(int *)(DAT_8c0347b4 + param_1) <= iStack_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_30 + -0x10) & 4) != 0)) {
          bStack_28 = bStack_28 & 0xfe;
        }
        if ((local_24 + 1 < 0) || (*(int *)(DAT_8c0347b2 + param_1) <= local_24 + 1)) {
          bVar2 = false;
        }
        else if ((iStack_10 < 0) || (*(int *)(DAT_8c0347b4 + param_1) <= iStack_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_30 + 0x10) & 4) != 0)) {
          bStack_28 = bStack_28 & 0xfd;
        }
        if ((local_24 < 0) || (*(int *)(DAT_8c034932 + param_1) <= local_24)) {
          bVar2 = false;
        }
        else if ((iStack_10 + -1 < 0) || (*(int *)(DAT_8c034934 + param_1) <= iStack_10 + -1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_30 - DAT_8c034936) & 4) != 0)) {
          bStack_28 = bStack_28 & 0xfb;
        }
        iStack_10 = iStack_10 + 1;
        if ((local_24 < 0) || (*(int *)(DAT_8c034932 + param_1) <= local_24)) {
          bVar2 = false;
        }
        else if ((iStack_10 < 0) || (*(int *)(DAT_8c034934 + param_1) <= iStack_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(DAT_8c034936 + local_30) & 4) != 0)) {
          bStack_28 = bStack_28 & 0xf7;
        }
        bStack_20 = param_4 & bStack_28;
        if ((bStack_20 == 0) &&
           (iVar7 = (*(code *)PTR_FUN_8c034aa4)(param_1,local_4c,local_48), iVar7 == 0)) {
          iVar7 = 0;
        }
        else {
          iVar9 = *(int *)(DAT_8c034938 + param_1) - local_4c;
          iVar7 = *(int *)(DAT_8c03493a + param_1) - local_48;
          iVar7 = iVar9 * iVar9 + iVar7 * iVar7 + 1;
        }
        iVar9 = *(int *)(DAT_8c03493c + param_1);
        if ((iVar9 == 0) || (iVar7 < iVar9)) {
          iVar9 = (int)DAT_8c034a92;
          *(int *)(DAT_8c034a90 + param_1) = iVar7;
          local_1c = (code *)PTR__memcpy_8c034aa8;
          *(undefined4 *)(DAT_8c034a80 + param_1) = 1;
          iVar7 = *(int *)(DAT_8c034a7e + param_1);
          *(int *)(DAT_8c034a82 + param_1) = iVar7;
          *(int *)(DAT_8c034a94 + param_1) = iVar7;
          *(undefined4 *)(DAT_8c034a98 + param_1) = *(undefined4 *)(DAT_8c034a96 + param_1);
          (*local_1c)(param_1 + iVar9,local_38,(iVar7 + 1) * 2);
          (*local_1c)(param_1 + DAT_8c034a9a,local_34,(*(int *)(DAT_8c034a82 + param_1) + 1) * 2);
          iVar9 = *(int *)(DAT_8c034a90 + param_1);
        }
        if (iVar9 != 1) {
          *(int *)(DAT_8c03493e + param_1) = *(int *)(DAT_8c03493e + param_1) + 1;
          if ((bStack_20 & 1) != 0) {
            (*(code *)PTR_FUN_8c034be4)(param_1,local_4c - 1,local_48,0xd);
          }
          if ((bStack_20 & 2) != 0) {
            (*(code *)PTR_FUN_8c034be4)(param_1,local_4c + 1,local_48,0xe);
          }
          if ((bStack_20 & 4) != 0) {
            (*(code *)PTR_FUN_8c034be4)(param_1,local_4c,local_48 - 1,7);
          }
          if ((bStack_20 & 8) != 0) {
            (*(code *)PTR_FUN_8c034be4)(param_1,local_4c,local_48 + 1,0xb);
          }
          *(int *)(DAT_8c034a7e + param_1) = *(int *)(DAT_8c034a7e + param_1) + -1;
        }
        if ((*(int *)(DAT_8c034a7e + param_1) == 0) && (*(int *)(DAT_8c034a80 + param_1) != 0)) {
          iVar7 = (int)DAT_8c034bc6;
          iVar9 = *(int *)(DAT_8c034bc4 + param_1);
          *(int *)(DAT_8c034bc8 + param_1) = iVar9;
          puVar3 = PTR__memcpy_8c034bd8;
          local_1c = (code *)PTR__memcpy_8c034bd8;
          *(undefined4 *)(DAT_8c034bcc + param_1) = *(undefined4 *)(DAT_8c034bca + param_1);
          (*(code *)puVar3)(local_38,param_1 + iVar7,(iVar9 + 1) * 2);
          (*local_1c)(local_34,param_1 + DAT_8c034bce,(*(int *)(DAT_8c034bc8 + param_1) + 1) * 2);
          local_18 = *(int *)(DAT_8c034bc8 + param_1);
          if (local_18 == 0) {
            iStack_c = (*(code *)PTR_FUN_8c034bdc)(local_34,6);
            local_34 = local_34 + local_18 * 2;
            iVar7 = (*(code *)PTR_FUN_8c034bdc)((int)DAT_8c034bd0);
            if (((iStack_c != *(int *)(DAT_8c034bd2 + param_1)) ||
                (iVar7 != *(int *)(DAT_8c034bd4 + param_1))) &&
               (iVar7 = (*(code *)PTR_FUN_8c034be0)(param_1), iVar7 != 0)) {
              local_38 = local_38 + *(int *)(DAT_8c034bc8 + param_1);
              *local_38 = 1;
            }
          }
        }
      }
    }
  }
LAB_8c034984:
  if (*(int *)(DAT_8c034a80 + param_1) != 0) {
    local_14 = *(int *)(DAT_8c034a82 + param_1);
    local_34 = param_1 + DAT_8c034a84;
    iVar7 = (*(code *)PTR_FUN_8c034a9c)(6);
    if (iVar7 == *(int *)(DAT_8c034a86 + param_1)) {
      local_34 = local_34 + local_14 * 2;
      iVar7 = (*(code *)PTR_FUN_8c034a9c)((int)DAT_8c034a88);
      if (iVar7 == *(int *)(DAT_8c034a8a + param_1)) {
        *(undefined2 *)(param_1 + DAT_8c034a8c + local_14 * 2) = 1;
      }
    }
  }
  return;
}

