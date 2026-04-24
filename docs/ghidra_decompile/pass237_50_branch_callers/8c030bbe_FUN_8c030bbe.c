// entry: 8c030bbe
// name: FUN_8c030bbe
// signature: undefined FUN_8c030bbe(void)


/* WARNING: Removing unreachable block (ram,0x8c030cf2) */
/* WARNING: Removing unreachable block (ram,0x8c030dce) */

void FUN_8c030bbe(int param_1,uint param_2,uint param_3,byte param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  uint local_50;
  uint local_4c;
  byte local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  byte *local_38;
  byte bStack_34;
  int local_30;
  byte bStack_2c;
  code *local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar8 = *(int *)(DAT_8c030d42 + param_1);
  if ((((iVar8 != 0) ||
       (*(undefined4 *)(DAT_8c030d44 + param_1) = 0, *(int *)(DAT_8c030d46 + param_1) != 0)) &&
      (puVar3 = PTR_FUN_8c030d54, *(int *)(DAT_8c030d44 + param_1) != 1)) &&
     (iVar8 < *(int *)(DAT_8c030d48 + param_1))) {
    if (((int)(param_2 - 1) < 0) || (*(int *)(DAT_8c030d4a + param_1) <= (int)(param_2 - 1))) {
      bVar2 = false;
    }
    else if (((int)(param_3 - 1) < 0) || (*(int *)(DAT_8c030d4c + param_1) <= (int)(param_3 - 1))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((int)(param_2 + 1) < 0) || (*(int *)(DAT_8c030d4a + param_1) <= (int)(param_2 + 1))) {
        bVar2 = false;
      }
      else if (((int)(param_3 + 1) < 0) || (*(int *)(DAT_8c030d4c + param_1) <= (int)(param_3 + 1)))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_44 = param_1 + DAT_8c030d4e;
        local_40 = param_1 + DAT_8c030d50;
        *(undefined2 *)(local_44 + iVar8 * 2) = 0;
        (*(code *)puVar3)(param_2 & 0xffff,local_40 + iVar8 * 2,6);
        (*(code *)PTR_FUN_8c030d54)(param_3 & 0xffff,(int)DAT_8c030d52);
        local_3c = DAT_8c030d58;
        puVar6 = (ushort *)(DAT_8c030d58 + (param_3 * 0x40 + param_2) * 0x10);
        if (iVar8 < 1) {
          bVar2 = false;
        }
        else {
          if ((*puVar6 & 0x20) != 0) {
            return;
          }
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
        uVar4 = param_2;
        uVar5 = param_3;
        if (bVar2) {
          (*(code *)PTR_FUN_8c0311b0)
                    (*(undefined4 *)(DAT_8c031196 + param_1),param_2,param_3,&local_50,&local_4c);
          uVar4 = local_50;
          uVar5 = local_4c;
        }
        local_4c = uVar5;
        local_50 = uVar4;
        (*(code *)PTR_FUN_8c030eec)(local_50 & 0xffff,6);
        (*(code *)PTR_FUN_8c030eec)(local_4c & 0xffff,(int)DAT_8c030ede);
        local_38 = local_48;
        local_48[0] = (local_48[0] & (byte)DAT_8c030ee0 | 0x10) & (byte)DAT_8c030ee2 | 8;
        bStack_34 = (*(code *)PTR_FUN_8c030ef0)(*(undefined4 *)(DAT_8c030ee4 + param_1),1);
        local_30 = (*(code *)PTR_FUN_8c030ef4)(local_38,6);
        local_20 = (*(code *)PTR_FUN_8c030ef4)((int)DAT_8c030ede,local_30);
        local_3c = local_3c + (local_20 * 0x40 + local_30) * 0x10;
        if ((local_30 + -1 < 0) || (*(int *)(DAT_8c030ee6 + param_1) <= local_30 + -1)) {
          bVar2 = false;
        }
        else if ((local_20 < 0) || (*(int *)(DAT_8c030ee8 + param_1) <= local_20)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_3c + -0x10) & 4) != 0)) {
          bStack_34 = bStack_34 & 0xfe;
        }
        if ((local_30 + 1 < 0) || (*(int *)(DAT_8c030ee6 + param_1) <= local_30 + 1)) {
          bVar2 = false;
        }
        else if ((local_20 < 0) || (*(int *)(DAT_8c030ee8 + param_1) <= local_20)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_3c + 0x10) & 4) != 0)) {
          bStack_34 = bStack_34 & 0xfd;
        }
        if ((local_30 < 0) || (*(int *)(DAT_8c030ee6 + param_1) <= local_30)) {
          bVar2 = false;
        }
        else if ((local_20 + -1 < 0) || (*(int *)(DAT_8c030ee8 + param_1) <= local_20 + -1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_3c - DAT_8c03102a) & 4) != 0)) {
          bStack_34 = bStack_34 & 0xfb;
        }
        local_20 = local_20 + 1;
        if ((local_30 < 0) || (*(int *)(DAT_8c03102c + param_1) <= local_30)) {
          bVar2 = false;
        }
        else if ((local_20 < 0) || (*(int *)(DAT_8c03102e + param_1) <= local_20)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(DAT_8c03102a + local_3c) & 4) != 0)) {
          bStack_34 = bStack_34 & 0xf7;
        }
        bStack_2c = param_4 & bStack_34;
        if ((bStack_2c == 0) &&
           (iVar8 = (*(code *)PTR_FUN_8c0311b4)(param_1,local_50,local_4c), iVar8 == 0)) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(DAT_8c031030 + param_1) - local_50;
          iVar7 = *(int *)(DAT_8c031032 + param_1) - local_4c;
          iVar8 = iVar8 * iVar8 + iVar7 * iVar7 + 1;
        }
        iVar7 = *(int *)(DAT_8c031034 + param_1);
        if ((iVar7 == 0) || (iVar8 < iVar7)) {
          iVar7 = (int)DAT_8c03119a;
          *(int *)(DAT_8c031198 + param_1) = iVar8;
          local_28 = (code *)PTR_FUN_8c0311b8;
          *(undefined4 *)(DAT_8c03119c + param_1) = 1;
          iVar8 = *(int *)(DAT_8c03119e + param_1);
          *(int *)(DAT_8c0311a0 + param_1) = iVar8;
          *(int *)(DAT_8c0311a2 + param_1) = iVar8;
          *(undefined4 *)(DAT_8c0311a6 + param_1) = *(undefined4 *)(DAT_8c0311a4 + param_1);
          (*local_28)(param_1 + iVar7,local_44,(iVar8 + 1) * 2);
          (*local_28)(param_1 + DAT_8c0311a8,local_40,(*(int *)(DAT_8c0311a0 + param_1) + 1) * 2);
          iVar7 = *(int *)(DAT_8c031198 + param_1);
        }
        if (iVar7 != 1) {
          *(int *)(DAT_8c031036 + param_1) = *(int *)(DAT_8c031036 + param_1) + 1;
          if ((bStack_2c & 1) != 0) {
            FUN_8c030bbe(param_1,local_50 - 1,local_4c,0xd);
          }
          if ((bStack_2c & 2) != 0) {
            FUN_8c030bbe(param_1,local_50 + 1,local_4c,0xe);
          }
          if ((bStack_2c & 4) != 0) {
            FUN_8c030bbe(param_1,local_50,local_4c - 1,7);
          }
          if ((bStack_2c & 8) != 0) {
            FUN_8c030bbe(param_1,local_50,local_4c + 1,0xb);
          }
          *(int *)(DAT_8c031036 + param_1) = *(int *)(DAT_8c031036 + param_1) + -1;
        }
        if ((*(int *)(DAT_8c031036 + param_1) == 0) && (*(int *)(DAT_8c031038 + param_1) != 0)) {
          iVar8 = (int)DAT_8c03119a;
          iVar7 = *(int *)(DAT_8c0311a2 + param_1);
          *(int *)(DAT_8c0311a0 + param_1) = iVar7;
          puVar3 = PTR_FUN_8c0311b8;
          local_28 = (code *)PTR_FUN_8c0311b8;
          *(undefined4 *)(DAT_8c0311a4 + param_1) = *(undefined4 *)(DAT_8c0311a6 + param_1);
          (*(code *)puVar3)(local_44,param_1 + iVar8,(iVar7 + 1) * 2);
          (*local_28)(local_40,param_1 + DAT_8c0311a8,(*(int *)(DAT_8c0311a0 + param_1) + 1) * 2);
          local_24 = *(int *)(DAT_8c0311a0 + param_1);
          if (local_24 == 0) {
            local_1c = (*(code *)PTR_FUN_8c0311bc)(local_40,6);
            local_40 = local_40 + local_24 * 2;
            iVar8 = (*(code *)PTR_FUN_8c0311bc)(local_1c,(int)DAT_8c0311aa);
            if (((local_1c != *(int *)(DAT_8c0311ac + param_1)) ||
                (iVar8 != *(int *)(DAT_8c0311ae + param_1))) &&
               (iVar8 = (*(code *)PTR_FUN_8c0311b4)(param_1), iVar8 != 0)) {
              *(undefined2 *)(local_44 + *(int *)(DAT_8c0311a0 + param_1) * 2) = 1;
            }
          }
        }
      }
    }
  }
  return;
}

