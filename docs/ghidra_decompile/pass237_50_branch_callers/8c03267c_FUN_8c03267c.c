// entry: 8c03267c
// name: FUN_8c03267c
// signature: undefined FUN_8c03267c(void)


/* WARNING: Removing unreachable block (ram,0x8c0327a0) */
/* WARNING: Removing unreachable block (ram,0x8c0328b2) */

void FUN_8c03267c(int param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  uint local_84;
  uint local_80;
  byte local_7c [4];
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  byte bStack_28;
  int iStack_24;
  
  puVar4 = PTR_FUN_8c03281c;
  iVar12 = *(int *)(DAT_8c032808 + param_1);
  if ((iVar12 < *(int *)(DAT_8c03280a + param_1)) && (*(int *)(DAT_8c03280c + param_1) == 0)) {
    if (((int)(param_2 - 1) < 0) || (*(int *)(DAT_8c03280e + param_1) <= (int)(param_2 - 1))) {
      bVar2 = false;
    }
    else if (((int)(param_3 - 1) < 0) || (*(int *)(DAT_8c032810 + param_1) <= (int)(param_3 - 1))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((int)(param_2 + 1) < 0) || (*(int *)(DAT_8c03280e + param_1) <= (int)(param_2 + 1))) {
        bVar2 = false;
      }
      else if (((int)(param_3 + 1) < 0) || (*(int *)(DAT_8c032810 + param_1) <= (int)(param_3 + 1)))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar11 = param_1 + DAT_8c032812;
        local_4c = param_1 + DAT_8c032814;
        *(undefined2 *)(iVar11 + iVar12 * 2) = 0;
        local_5c = param_1;
        local_58 = param_2;
        local_54 = param_3;
        local_50 = param_4;
        (*(code *)puVar4)(param_2 & 0xffff,local_4c + iVar12 * 2,6);
        (*(code *)PTR_FUN_8c03281c)(param_3 & 0xffff,(int)DAT_8c032816,local_4c + iVar12 * 2);
        iStack_48 = param_2 + param_3 * 0x40;
        iStack_44 = DAT_8c032820;
        puVar10 = (ushort *)(DAT_8c032820 + iStack_48 * 0x10);
        if ((iVar12 < 1) || ((*puVar10 & 0x20) == 0)) {
          bVar1 = (byte)puVar10[4];
          bVar3 = 0;
          if ((0x4f < bVar1) && ((bVar1 < 0x5a && (0 < iVar12)))) {
            bVar3 = 1;
          }
          uStack_40 = (uint)bVar3;
          iVar12 = (*(code *)PTR_FUN_8c032824)
                             (*(undefined4 *)(DAT_8c032818 + param_1),param_2,param_3);
          if ((iVar12 != 0) &&
             (iVar12 = (*(code *)PTR_FUN_8c032c4c)(param_1,param_2,param_3), iVar12 != 0)) {
            iStack_3c = 0;
            uStack_34 = (uint)(-1 < (int)param_2);
            iStack_38 = *(int *)(DAT_8c032c40 + param_1);
            if ((uStack_34 == 0) || (*(int *)(DAT_8c032c42 + param_1) <= (int)param_2)) {
              bVar2 = false;
            }
            else if (((int)param_3 < 0) || (*(int *)(DAT_8c032c44 + param_1) <= (int)param_3)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iStack_30 = iStack_44 + iStack_48 * 0x10;
              iStack_2c = iStack_30 + DAT_8c032c46;
              local_64 = 1;
              if ((0 < iStack_38) && (uStack_34 != 0)) {
                iVar12 = 1;
                local_60 = iVar11;
                do {
                  if ((int)param_2 < *(int *)(DAT_8c032c42 + param_1)) {
                    if (((int)(param_3 + iVar12) < 0) ||
                       (*(int *)(DAT_8c032f76 + param_1) <= (int)(param_3 + iVar12))) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                  }
                  else {
                    bVar2 = false;
                  }
                  iVar11 = local_60;
                  if (!bVar2) break;
                  if (*(char *)(iStack_2c + 8) == 'h') {
                    iStack_3c = 1;
                    break;
                  }
                  if (*(char *)(iStack_2c + 8) == 'k') break;
                  uVar6 = (*(code *)PTR_FUN_8c032c50)
                                    (*(undefined4 *)(DAT_8c032c48 + param_1),param_2,
                                     iVar12 + param_3,1);
                  iVar7 = (*(code *)PTR_FUN_8c032c54)(*(undefined4 *)(DAT_8c032c48 + param_1),uVar6)
                  ;
                  iVar11 = local_60;
                  if (iVar7 == 0) break;
                  iVar12 = iVar12 + 1;
                  iStack_2c = iStack_2c + DAT_8c032c46;
                } while (iVar12 <= iStack_38);
              }
              iStack_2c = iStack_30 - DAT_8c032c46;
              local_64 = 1;
              if (0 < iStack_38) {
                iVar12 = 1;
                local_68 = iVar11;
                do {
                  if ((uStack_34 == 0) || (*(int *)(DAT_8c032c42 + param_1) <= (int)param_2)) {
                    bVar2 = false;
                  }
                  else if (((int)(param_3 - iVar12) < 0) ||
                          (*(int *)(DAT_8c032c44 + param_1) <= (int)(param_3 - iVar12))) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar11 = local_68;
                  if (!bVar2) break;
                  if (*(char *)(iStack_2c + 8) == 'h') {
                    iStack_3c = iStack_3c + 1;
                    break;
                  }
                  if (*(char *)(iStack_2c + 8) == 'k') break;
                  uVar6 = (*(code *)PTR_FUN_8c032dcc)
                                    (*(undefined4 *)(DAT_8c032dc4 + param_1),param_2,
                                     param_3 - iVar12,1);
                  iVar7 = (*(code *)PTR_FUN_8c032dd0)(*(undefined4 *)(DAT_8c032dc4 + param_1),uVar6)
                  ;
                  iVar11 = local_68;
                  if (iVar7 == 0) break;
                  iVar12 = iVar12 + 1;
                  iStack_2c = iStack_2c - DAT_8c032dc6;
                } while (iVar12 <= iStack_38);
              }
              iVar12 = 1;
              if (0 < iStack_38) {
                iVar7 = iStack_30;
                local_70 = iVar11;
                local_6c = (uint)(-1 < (int)param_3);
                while( true ) {
                  if (((int)(param_2 + iVar12) < 0) ||
                     (*(int *)(DAT_8c032dc8 + param_1) <= (int)(param_2 + iVar12))) {
                    bVar2 = false;
                  }
                  else if ((-1 < (int)param_3 == 0) ||
                          (*(int *)(DAT_8c032dca + param_1) <= (int)param_3)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar11 = local_70;
                  if (!bVar2) goto LAB_8c032d50;
                  if (*(char *)(iVar7 + 0x18) == 'h') break;
                  if (*(char *)(iVar7 + 0x18) == 'k') goto LAB_8c032d50;
                  uVar6 = (*(code *)PTR_FUN_8c032dcc)
                                    (*(undefined4 *)(DAT_8c032dc4 + param_1),param_3,1);
                  iVar8 = (*(code *)PTR_FUN_8c032dd0)(*(undefined4 *)(DAT_8c032dc4 + param_1),uVar6)
                  ;
                  iVar11 = local_70;
                  if ((iVar8 == 0) ||
                     (iVar12 = iVar12 + 1, iVar7 = iVar7 + 0x10, iStack_38 < iVar12))
                  goto LAB_8c032d50;
                }
                iStack_3c = iStack_3c + 1;
              }
LAB_8c032d50:
              iVar12 = 1;
              if (0 < iStack_38) {
                iVar7 = iStack_30;
                local_78 = iVar11;
                local_74 = (uint)(-1 < (int)param_3);
                while( true ) {
                  if (((int)(param_2 - iVar12) < 0) ||
                     (*(int *)(DAT_8c032dc8 + param_1) <= (int)(param_2 - iVar12))) {
                    bVar2 = false;
                  }
                  else if ((-1 < (int)param_3 == 0) ||
                          (*(int *)(DAT_8c032dca + param_1) <= (int)param_3)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar11 = local_78;
                  if (!bVar2) goto LAB_8c032e0c;
                  if (*(char *)(iVar7 + -8) == 'h') break;
                  if (*(char *)(iVar7 + -8) == 'k') goto LAB_8c032e0c;
                  uVar6 = (*(code *)PTR_FUN_8c032eec)
                                    (*(undefined4 *)(DAT_8c032ee4 + param_1),param_3,1);
                  iVar8 = (*(code *)PTR_FUN_8c032ef0)(*(undefined4 *)(DAT_8c032ee4 + param_1),uVar6)
                  ;
                  iVar11 = local_78;
                  if ((iVar8 == 0) ||
                     (iVar12 = iVar12 + 1, iVar7 = iVar7 + -0x10, iStack_38 < iVar12))
                  goto LAB_8c032e0c;
                }
                iStack_3c = iStack_3c + 1;
              }
            }
LAB_8c032e0c:
            if (0 < iStack_3c) {
              *(undefined4 *)(DAT_8c032ee6 + param_1) = 1;
              iVar12 = *(int *)(DAT_8c032ee8 + param_1);
              *(int *)(DAT_8c032eea + param_1) = iVar12;
              *(undefined2 *)(iVar11 + iVar12 * 2) = 1;
              return;
            }
          }
          *(int *)(DAT_8c0329ac + param_1) = *(int *)(DAT_8c0329ac + param_1) + 1;
          uVar9 = param_2;
          uVar5 = param_3;
          if (uStack_40 != 0) {
            (*(code *)PTR_FUN_8c032ef4)
                      (*(undefined4 *)(DAT_8c032ee4 + param_1),param_2,param_3,&local_84,&local_80);
            uVar9 = local_84;
            uVar5 = local_80;
          }
          local_80 = uVar5;
          local_84 = uVar9;
          (*(code *)PTR_FUN_8c0329bc)(local_84 & 0xffff,6);
          (*(code *)PTR_FUN_8c0329bc)(local_80 & 0xffff,(int)DAT_8c0329ae);
          local_7c[0] = (local_7c[0] & (byte)DAT_8c0329b0 | 0x10) & (byte)DAT_8c0329b2 | 8;
          bStack_28 = (*(code *)PTR_FUN_8c0329c0)
                                (*(undefined4 *)(DAT_8c0329b4 + param_1),local_7c,1);
          iStack_24 = (*(code *)PTR_FUN_8c0329c4)(6);
          iVar12 = (*(code *)PTR_FUN_8c0329c4)((int)DAT_8c0329ae);
          iStack_44 = iStack_44 + (iVar12 * 0x40 + iStack_24) * 0x10;
          if ((iStack_24 + -1 < 0) || (*(int *)(DAT_8c0329b6 + param_1) <= iStack_24 + -1)) {
            bVar2 = false;
          }
          else if ((iVar12 < 0) || (*(int *)(DAT_8c0329b8 + param_1) <= iVar12)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || ((*(ushort *)(iStack_44 + -0x10) & 4) != 0)) {
            bStack_28 = bStack_28 & 0xfe;
          }
          if ((iStack_24 + 1 < 0) || (*(int *)(DAT_8c0329b6 + param_1) <= iStack_24 + 1)) {
            bVar2 = false;
          }
          else if ((iVar12 < 0) || (*(int *)(DAT_8c0329b8 + param_1) <= iVar12)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || ((*(ushort *)(iStack_44 + 0x10) & 4) != 0)) {
            bStack_28 = bStack_28 & 0xfd;
          }
          if ((iStack_24 < 0) || (*(int *)(DAT_8c0329b6 + param_1) <= iStack_24)) {
            bVar2 = false;
          }
          else if ((iVar12 + -1 < 0) || (*(int *)(DAT_8c032abe + param_1) <= iVar12 + -1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || ((*(ushort *)(iStack_44 - DAT_8c032ac0) & 4) != 0)) {
            bStack_28 = bStack_28 & 0xfb;
          }
          if ((iStack_24 < 0) || (*(int *)(DAT_8c032ac2 + param_1) <= iStack_24)) {
            bVar2 = false;
          }
          else if ((iVar12 + 1 < 0) || (*(int *)(DAT_8c032abe + param_1) <= iVar12 + 1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || ((*(ushort *)(DAT_8c032ac0 + iStack_44) & 4) != 0)) {
            bStack_28 = bStack_28 & 0xf7;
          }
          uVar9 = local_50 & bStack_28;
          if ((uVar9 & 1) != 0) {
            FUN_8c03267c(param_1,local_84 - 1,local_80,0xd);
          }
          if ((uVar9 & 2) != 0) {
            FUN_8c03267c(param_1,local_84 + 1,local_80,0xe);
          }
          if ((uVar9 & 4) != 0) {
            FUN_8c03267c(param_1,local_84,local_80 - 1,7);
          }
          if ((uVar9 & 8) != 0) {
            FUN_8c03267c(local_5c,local_84,local_80 + 1,0xb);
          }
          *(int *)(DAT_8c032ac4 + local_5c) = *(int *)(DAT_8c032ac4 + local_5c) + -1;
        }
      }
    }
  }
  return;
}

