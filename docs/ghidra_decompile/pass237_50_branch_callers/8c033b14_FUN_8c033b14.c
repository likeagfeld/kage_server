// entry: 8c033b14
// name: FUN_8c033b14
// signature: undefined FUN_8c033b14(void)


/* WARNING: Removing unreachable block (ram,0x8c033c48) */
/* WARNING: Removing unreachable block (ram,0x8c033d1c) */

void FUN_8c033b14(undefined8 param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 in_dr2;
  double dVar10;
  undefined4 uVar11;
  double dVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte local_90 [4];
  int local_8c;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  int local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  code *pcStack_34;
  undefined1 *puStack_30;
  byte bStack_2c;
  int iStack_28;
  byte bStack_24;
  
  iVar8 = *(int *)(DAT_8c033c78 + param_2);
  if (iVar8 == 0) {
    *(undefined4 *)(DAT_8c033c7a + param_2) = 0;
  }
  puVar2 = PTR_FUN_8c033c88;
  if (iVar8 < *(int *)(DAT_8c033c7c + param_2)) {
    iVar5 = param_3 - 1;
    iVar6 = param_4 - 1;
    if ((iVar5 < 0) || (*(int *)(DAT_8c033c7e + param_2) <= iVar5)) {
      bVar1 = false;
    }
    else if ((iVar6 < 0) || (*(int *)(DAT_8c033c80 + param_2) <= iVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iStack_4c = param_3 + 1;
      iStack_48 = param_4 + 1;
      if ((iStack_4c < 0) || (*(int *)(DAT_8c033c7e + param_2) <= iStack_4c)) {
        bVar1 = false;
      }
      else if ((iStack_48 < 0) || (*(int *)(DAT_8c033c80 + param_2) <= iStack_48)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iStack_44 = param_2 + DAT_8c033c82;
        iStack_40 = param_2 + DAT_8c033c84;
        *(undefined2 *)(iStack_44 + iVar8 * 2) = 0;
        (*(code *)puVar2)(param_3 & 0xffff,iStack_40 + iVar8 * 2,6);
        (*(code *)PTR_FUN_8c033c88)(param_4 & 0xffff,(int)DAT_8c033c86);
        iStack_3c = DAT_8c033c8c;
        if ((iVar8 < 1) ||
           ((*(ushort *)(DAT_8c033c8c + (param_4 * 0x40 + param_3) * 0x10) & 0x20) == 0)) {
          iVar8 = (*(code *)PTR_FUN_8c033e28)
                            (*(undefined4 *)(DAT_8c033e1a + param_2),param_3,param_4);
          if (iVar8 != 0) {
            iVar8 = (*(code *)PTR_FUN_8c034100)(param_2,param_3,param_4);
            uVar9 = (undefined4)in_dr2;
            uVar11 = (undefined4)param_1;
            if (iVar8 != 0) {
              iVar8 = *(int *)(DAT_8c0340f4 + param_2);
              local_6c = iVar8;
              if ((param_3 == *(uint *)(DAT_8c0340f6 + param_2)) &&
                 (param_4 == *(uint *)(DAT_8c034474 + param_2))) {
                bVar1 = true;
              }
              else {
                local_84 = 1;
                if (0 < iVar8) {
                  iVar7 = 1;
                  local_5c = iVar6;
                  local_58 = iVar5;
                  local_54 = param_5;
                  uStack_50 = (uint)(-1 < (int)param_3);
                  while( true ) {
                    uVar9 = (undefined4)in_dr2;
                    uVar11 = (undefined4)param_1;
                    iVar6 = local_5c;
                    iVar5 = local_58;
                    param_5 = local_54;
                    if ((param_3 == *(uint *)(DAT_8c0340f6 + param_2)) &&
                       (iStack_48 == *(int *)(DAT_8c0340f8 + param_2))) {
                      bVar1 = true;
                      goto LAB_8c034282;
                    }
                    if ((-1 < (int)param_3 == 0) ||
                       (*(int *)(DAT_8c0340fa + param_2) <= (int)param_3)) {
                      bVar1 = false;
                    }
                    else if (((int)(param_4 + iVar7) < 0) ||
                            (*(int *)(DAT_8c0340fc + param_2) <= (int)(param_4 + iVar7))) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) break;
                    uVar3 = (*(code *)PTR_FUN_8c034104)
                                      (*(undefined4 *)(DAT_8c0340fe + param_2),param_3,
                                       iVar7 + param_4,1);
                    iVar4 = (*(code *)PTR_FUN_8c034108)
                                      (*(undefined4 *)(DAT_8c0340fe + param_2),uVar3);
                    iVar6 = local_5c;
                    iVar5 = local_58;
                    param_5 = local_54;
                    if ((iVar4 == 0) || (iVar7 = iVar7 + 1, iVar8 < iVar7)) break;
                  }
                }
                local_84 = 1;
                if (0 < local_6c) {
                  iVar8 = 1;
                  local_68 = iVar5;
                  local_64 = param_5;
                  local_60 = (uint)(-1 < (int)param_3);
                  while( true ) {
                    uVar9 = (undefined4)in_dr2;
                    uVar11 = (undefined4)param_1;
                    iVar5 = local_68;
                    param_5 = local_64;
                    if ((param_3 == *(uint *)(DAT_8c0340f6 + param_2)) &&
                       (iVar6 == *(int *)(DAT_8c0340f8 + param_2))) {
                      bVar1 = true;
                      goto LAB_8c034282;
                    }
                    if ((-1 < (int)param_3 == 0) ||
                       (*(int *)(DAT_8c0340fa + param_2) <= (int)param_3)) {
                      bVar1 = false;
                    }
                    else if (((int)(param_4 - iVar8) < 0) ||
                            (*(int *)(DAT_8c0340fc + param_2) <= (int)(param_4 - iVar8))) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) break;
                    uVar3 = (*(code *)PTR_FUN_8c034104)
                                      (*(undefined4 *)(DAT_8c0340fe + param_2),param_3,
                                       param_4 - iVar8,1);
                    iVar7 = (*(code *)PTR_FUN_8c034108)
                                      (*(undefined4 *)(DAT_8c0340fe + param_2),uVar3);
                    iVar5 = local_68;
                    param_5 = local_64;
                    if ((iVar7 == 0) || (iVar8 = iVar8 + 1, local_6c < iVar8)) break;
                  }
                }
                iVar8 = local_6c;
                local_84 = 1;
                if (0 < local_6c) {
                  iVar7 = 1;
                  local_7c = iVar6;
                  local_78 = iVar5;
                  local_74 = param_5;
                  local_70 = (uint)(-1 < (int)param_4);
                  while( true ) {
                    uVar9 = (undefined4)in_dr2;
                    uVar11 = (undefined4)param_1;
                    iVar6 = local_7c;
                    iVar5 = local_78;
                    param_5 = local_74;
                    if ((iStack_4c == *(int *)(DAT_8c034266 + param_2)) &&
                       (param_4 == *(uint *)(DAT_8c034268 + param_2))) {
                      bVar1 = true;
                      goto LAB_8c034282;
                    }
                    if (((int)(param_3 + iVar7) < 0) ||
                       (*(int *)(DAT_8c03426a + param_2) <= (int)(param_3 + iVar7))) {
                      bVar1 = false;
                    }
                    else if ((-1 < (int)param_4 == 0) ||
                            (*(int *)(DAT_8c03426c + param_2) <= (int)param_4)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) break;
                    uVar3 = (*(code *)PTR_FUN_8c034270)
                                      (*(undefined4 *)(DAT_8c03426e + param_2),param_4,1);
                    iVar4 = (*(code *)PTR_FUN_8c034274)
                                      (*(undefined4 *)(DAT_8c03426e + param_2),uVar3);
                    iVar6 = local_7c;
                    iVar5 = local_78;
                    param_5 = local_74;
                    if ((iVar4 == 0) || (iVar7 = iVar7 + 1, iVar8 < iVar7)) break;
                  }
                }
                uVar9 = (undefined4)in_dr2;
                uVar11 = (undefined4)param_1;
                local_84 = 1;
                if (0 < local_6c) {
                  iVar8 = 1;
                  local_8c = iVar6;
                  local_88 = param_5;
                  local_80 = (uint)(-1 < (int)param_4);
                  while( true ) {
                    uVar9 = (undefined4)in_dr2;
                    uVar11 = (undefined4)param_1;
                    iVar6 = local_8c;
                    param_5 = local_88;
                    if ((iVar5 == *(int *)(DAT_8c034266 + param_2)) &&
                       (param_4 == *(uint *)(DAT_8c034268 + param_2))) {
                      bVar1 = true;
                      goto LAB_8c034282;
                    }
                    if (((int)(param_3 - iVar8) < 0) ||
                       (*(int *)(DAT_8c03426a + param_2) <= (int)(param_3 - iVar8))) {
                      bVar1 = false;
                    }
                    else if ((-1 < (int)param_4 == 0) ||
                            (*(int *)(DAT_8c03426c + param_2) <= (int)param_4)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) break;
                    uVar3 = (*(code *)PTR_FUN_8c034270)
                                      (*(undefined4 *)(DAT_8c03426e + param_2),param_4,1);
                    iVar7 = (*(code *)PTR_FUN_8c034274)
                                      (*(undefined4 *)(DAT_8c03426e + param_2),uVar3);
                    uVar9 = (undefined4)in_dr2;
                    uVar11 = (undefined4)param_1;
                    iVar6 = local_8c;
                    param_5 = local_88;
                    if ((iVar7 == 0) || (iVar8 = iVar8 + 1, local_6c < iVar8)) break;
                  }
                }
                bVar1 = false;
              }
LAB_8c034282:
              if (bVar1) {
                iStack_38 = *(int *)(DAT_8c0343b0 + param_2) + 1;
                if ((*(int *)(DAT_8c0343b2 + param_2) != 0) &&
                   (*(int *)(DAT_8c0343b2 + param_2) == iStack_38)) {
                  iVar8 = (*(code *)PTR_FUN_8c0343c8)();
                  if (in_FPSCR_PR == '\0') {
                    dVar12 = (double)CONCAT44((float)iVar8,uVar11);
                  }
                  else {
                    dVar12 = (double)iVar8;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    dVar10 = (double)CONCAT44(DAT_8c0343cc,uVar9);
                  }
                  else {
                    dVar10 = (double)CONCAT44(DAT_8c0343d0,DAT_8c0343cc);
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) /
                                              (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar12,0));
                  }
                  else {
                    dVar12 = dVar12 / dVar10;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    dVar10 = (double)CONCAT44(DAT_8c0343d0,SUB84(dVar10,0));
                  }
                  else {
                    dVar10 = (double)CONCAT44(uRam8c0343d4,DAT_8c0343d0);
                  }
                  if (in_FPSCR_PR == '\0') {
                    iVar8 = (int)((float)((ulonglong)dVar12 >> 0x20) *
                                 (float)((ulonglong)dVar10 >> 0x20));
                  }
                  else {
                    iVar8 = (int)(dVar12 * dVar10);
                  }
                  if (iVar8 < 0x32) {
                    *(undefined4 *)(DAT_8c0343b2 + param_2) = 0;
                  }
                }
                puVar2 = PTR_FUN_8c0343c4;
                if ((*(int *)(DAT_8c0343b2 + param_2) == 0) ||
                   (iStack_38 < *(int *)(DAT_8c0343b2 + param_2))) {
                  iVar7 = (int)DAT_8c0343b4;
                  *(int *)(DAT_8c0343b2 + param_2) = iStack_38;
                  *(undefined4 *)(DAT_8c0343b6 + param_2) = 1;
                  iVar4 = *(int *)(DAT_8c0343b0 + param_2);
                  *(int *)(DAT_8c0343b8 + param_2) = iVar4;
                  iVar8 = (int)DAT_8c0343b8;
                  *(undefined2 *)(iStack_44 + iVar4 * 2) = 1;
                  iVar8 = *(int *)(iVar8 + param_2);
                  *(int *)(DAT_8c0343ba + param_2) = iVar8;
                  *(undefined4 *)(DAT_8c0343be + param_2) = *(undefined4 *)(DAT_8c0343bc + param_2);
                  pcStack_34 = (code *)puVar2;
                  (*(code *)puVar2)(param_2 + iVar7,iStack_44,(iVar8 + 1) * 2);
                  (*pcStack_34)(param_2 + DAT_8c0343c0,iStack_40,
                                (*(int *)(DAT_8c0343b8 + param_2) + 1) * 2);
                  *(undefined2 *)(iStack_44 + *(int *)(DAT_8c0343b0 + param_2) * 2) = 0;
                }
              }
            }
          }
          puVar2 = PTR_FUN_8c033e2c;
          *(int *)(DAT_8c033e1c + param_2) = *(int *)(DAT_8c033e1c + param_2) + 1;
          (*(code *)puVar2)(param_3 & 0xffff,6);
          (*(code *)PTR_FUN_8c033e2c)(param_4 & 0xffff,(int)DAT_8c033e1e);
          local_90[0] = (local_90[0] & (byte)DAT_8c033e20 | 0x10) & (byte)DAT_8c033e22 | 8;
          puStack_30 = local_90;
          bStack_2c = (*(code *)PTR_FUN_8c033e30)
                                (*(undefined4 *)(DAT_8c033e1a + param_2),local_90,1);
          iStack_28 = (*(code *)PTR_FUN_8c033e34)(puStack_30,6);
          iVar8 = (*(code *)PTR_FUN_8c033e34)((int)DAT_8c033e1e);
          iStack_3c = iStack_3c + (iVar8 * 0x40 + iStack_28) * 0x10;
          if ((iStack_28 + -1 < 0) || (*(int *)(DAT_8c033e24 + param_2) <= iStack_28 + -1)) {
            bVar1 = false;
          }
          else if ((iVar8 < 0) || (*(int *)(DAT_8c033e26 + param_2) <= iVar8)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(iStack_3c + -0x10) & 4) != 0)) {
            bStack_2c = bStack_2c & 0xfe;
          }
          if ((iStack_28 + 1 < 0) || (*(int *)(DAT_8c033e24 + param_2) <= iStack_28 + 1)) {
            bVar1 = false;
          }
          else if ((iVar8 < 0) || (*(int *)(DAT_8c033e26 + param_2) <= iVar8)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(iStack_3c + 0x10) & 4) != 0)) {
            bStack_2c = bStack_2c & 0xfd;
          }
          if ((iStack_28 < 0) || (*(int *)(DAT_8c033e24 + param_2) <= iStack_28)) {
            bVar1 = false;
          }
          else if ((iVar8 + -1 < 0) || (*(int *)(DAT_8c033f76 + param_2) <= iVar8 + -1)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(iStack_3c - DAT_8c033f78) & 4) != 0)) {
            bStack_2c = bStack_2c & 0xfb;
          }
          if ((iStack_28 < 0) || (*(int *)(DAT_8c033f7a + param_2) <= iStack_28)) {
            bVar1 = false;
          }
          else if ((iVar8 + 1 < 0) || (*(int *)(DAT_8c033f76 + param_2) <= iVar8 + 1)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(DAT_8c033f78 + iStack_3c) & 4) != 0)) {
            bStack_2c = bStack_2c & 0xf7;
          }
          bStack_24 = (byte)(param_5 & bStack_2c);
          if ((param_5 & bStack_2c & 1) != 0) {
            FUN_8c033b14(param_2,iVar5,param_4,0xd);
          }
          if ((bStack_24 & 2) != 0) {
            FUN_8c033b14(param_2,iStack_4c,param_4,0xe);
          }
          if ((bStack_24 & 4) != 0) {
            FUN_8c033b14(param_2,param_3,iVar6,7);
          }
          if ((bStack_24 & 8) != 0) {
            FUN_8c033b14(param_2,param_3,iStack_48,0xb);
          }
          iVar8 = *(int *)(DAT_8c033f7c + param_2) + -1;
          *(int *)(DAT_8c033f7c + param_2) = iVar8;
          pcStack_34 = (code *)PTR_FUN_8c033f8c;
          if ((iVar8 == 0) && (*(int *)(DAT_8c033f7e + param_2) != 0)) {
            iVar8 = (int)DAT_8c033f82;
            iVar6 = *(int *)(DAT_8c033f80 + param_2);
            *(int *)(DAT_8c033f84 + param_2) = iVar6;
            *(undefined4 *)(DAT_8c033f88 + param_2) = *(undefined4 *)(DAT_8c033f86 + param_2);
            (*pcStack_34)(iStack_44,param_2 + iVar8,(iVar6 + 1) * 2);
            (*pcStack_34)(iStack_40,param_2 + DAT_8c033f8a,
                          (*(int *)(DAT_8c033f84 + param_2) + 1) * 2);
          }
        }
      }
    }
  }
  return;
}

