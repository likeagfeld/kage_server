// entry: 8c02e6f8
// name: FUN_8c02e6f8
// signature: undefined FUN_8c02e6f8(void)


/* WARNING: Removing unreachable block (ram,0x8c02e820) */
/* WARNING: Removing unreachable block (ram,0x8c02e92c) */

void FUN_8c02e6f8(undefined4 param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_fr3;
  double dVar8;
  double dVar9;
  int iVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_50;
  uint local_4c;
  byte local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  code *local_30;
  byte *local_2c;
  byte bStack_28;
  int local_24;
  byte bStack_20;
  int local_1c;
  
  iVar7 = *(int *)(DAT_8c02e876 + param_2);
  if (iVar7 == 0) {
    *(undefined4 *)(DAT_8c02e878 + param_2) = 0;
  }
  puVar4 = PTR_FUN_8c02e888;
  if ((iVar7 < *(int *)(DAT_8c02e87a + param_2)) && (*(int *)(DAT_8c02e87c + param_2) == 0)) {
    if (((int)(param_3 - 1) < 0) || (*(int *)(DAT_8c02e87e + param_2) <= (int)(param_3 - 1))) {
      bVar2 = false;
    }
    else if (((int)(param_4 - 1) < 0) || (*(int *)(DAT_8c02e880 + param_2) <= (int)(param_4 - 1))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((int)(param_3 + 1) < 0) || (*(int *)(DAT_8c02e87e + param_2) <= (int)(param_3 + 1))) {
        bVar2 = false;
      }
      else if (((int)(param_4 + 1) < 0) || (*(int *)(DAT_8c02e880 + param_2) <= (int)(param_4 + 1)))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_44 = param_2 + DAT_8c02e882;
        local_40 = param_2 + DAT_8c02e884;
        *(undefined2 *)(local_44 + iVar7 * 2) = 0;
        (*(code *)puVar4)(param_3 & 0xffff,local_40 + iVar7 * 2,6);
        (*(code *)PTR_FUN_8c02e888)(param_4 & 0xffff,(int)DAT_8c02e886);
        local_3c = DAT_8c02e88c;
        bVar1 = *(byte *)(DAT_8c02e88c + (param_4 * 0x40 + param_3) * 0x10 + 8);
        bVar3 = 0;
        if (((0x4f < bVar1) && (bVar1 < 0x5a)) && (0 < iVar7)) {
          bVar3 = 1;
        }
        local_38 = (uint)bVar3;
        iVar7 = (*(code *)PTR_FUN_8c02e890)(param_2,param_3,param_4);
        if (iVar7 == 0) {
          local_34 = *(int *)(DAT_8c02e87a + param_2) - *(int *)(DAT_8c02e876 + param_2);
          iVar7 = *(int *)(DAT_8c02e878 + param_2);
          if ((iVar7 == local_34) && (local_34 != 0)) {
            iVar7 = (*(code *)PTR_FUN_8c02ecb0)();
            if (in_FPSCR_PR == '\0') {
              dVar9 = (double)CONCAT44((float)iVar7,param_1);
            }
            else {
              dVar9 = (double)iVar7;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar8 = (double)CONCAT44(DAT_8c02ecb4,in_fr3);
            }
            else {
              dVar8 = (double)CONCAT44(DAT_8c02ecb8,DAT_8c02ecb4);
            }
            if (in_FPSCR_PR == '\0') {
              dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) /
                                       (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar9,0));
            }
            else {
              dVar9 = dVar9 / dVar8;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar8 = (double)CONCAT44(DAT_8c02ecb8,SUB84(dVar8,0));
            }
            else {
              dVar8 = (double)CONCAT44(PTR_FUN_8c02ecbc,DAT_8c02ecb8);
            }
            if (in_FPSCR_PR == '\0') {
              iVar10 = (int)((float)((ulonglong)dVar9 >> 0x20) * (float)((ulonglong)dVar8 >> 0x20));
            }
            else {
              iVar10 = (int)(dVar9 * dVar8);
            }
            iVar7 = *(int *)(DAT_8c02ec9c + param_2);
            if (iVar10 < 0x32) {
              local_34 = local_34 + 1;
            }
          }
          if (iVar7 < local_34) {
            iVar7 = (int)DAT_8c02ec9e;
            *(int *)(DAT_8c02ec9c + param_2) = local_34;
            *(undefined4 *)(DAT_8c02eca0 + param_2) = 1;
            puVar4 = PTR_FUN_8c02ecbc;
            iVar10 = *(int *)(DAT_8c02eca2 + param_2);
            local_30 = (code *)PTR_FUN_8c02ecbc;
            *(int *)(DAT_8c02eca4 + param_2) = iVar10;
            *(int *)(DAT_8c02eca6 + param_2) = iVar10;
            *(undefined4 *)(DAT_8c02ecaa + param_2) = *(undefined4 *)(DAT_8c02eca8 + param_2);
            (*(code *)puVar4)(param_2 + iVar7,local_44,(iVar10 + 1) * 2);
            (*local_30)(param_2 + DAT_8c02ecac,local_40,(*(int *)(DAT_8c02eca4 + param_2) + 1) * 2);
          }
        }
        *(int *)(DAT_8c02ea08 + param_2) = *(int *)(DAT_8c02ea08 + param_2) + 1;
        uVar5 = param_3;
        uVar6 = param_4;
        if (local_38 != 0) {
          (*(code *)PTR_FUN_8c02ecc0)
                    (*(undefined4 *)(DAT_8c02ecae + param_2),param_3,param_4,&local_50,&local_4c);
          uVar5 = local_50;
          uVar6 = local_4c;
        }
        local_4c = uVar6;
        local_50 = uVar5;
        (*(code *)PTR_FUN_8c02ea18)(local_50 & 0xffff,6);
        (*(code *)PTR_FUN_8c02ea18)(local_4c & 0xffff,(int)DAT_8c02ea0a);
        local_2c = local_48;
        local_48[0] = (local_48[0] & (byte)DAT_8c02ea0c | 0x10) & (byte)DAT_8c02ea0e | 8;
        bStack_28 = (*(code *)PTR_FUN_8c02ea1c)(*(undefined4 *)(DAT_8c02ea10 + param_2),1);
        local_24 = (*(code *)PTR_FUN_8c02ea20)(6);
        local_1c = (*(code *)PTR_FUN_8c02ea20)((int)DAT_8c02ea0a,local_24);
        local_3c = local_3c + (local_1c * 0x40 + local_24) * 0x10;
        if ((local_24 + -1 < 0) || (*(int *)(DAT_8c02ea12 + param_2) <= local_24 + -1)) {
          bVar2 = false;
        }
        else if ((local_1c < 0) || (*(int *)(DAT_8c02ea14 + param_2) <= local_1c)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_3c + -0x10) & 4) != 0)) {
          bStack_28 = bStack_28 & 0xfe;
        }
        if ((local_24 + 1 < 0) || (*(int *)(DAT_8c02ea12 + param_2) <= local_24 + 1)) {
          bVar2 = false;
        }
        else if ((local_1c < 0) || (*(int *)(DAT_8c02ea14 + param_2) <= local_1c)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_3c + 0x10) & 4) != 0)) {
          bStack_28 = bStack_28 & 0xfd;
        }
        if ((local_24 < 0) || (*(int *)(DAT_8c02eb50 + param_2) <= local_24)) {
          bVar2 = false;
        }
        else if ((local_1c + -1 < 0) || (*(int *)(DAT_8c02eb52 + param_2) <= local_1c + -1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(local_3c - DAT_8c02eb54) & 4) != 0)) {
          bStack_28 = bStack_28 & 0xfb;
        }
        local_1c = local_1c + 1;
        if ((local_24 < 0) || (*(int *)(DAT_8c02eb50 + param_2) <= local_24)) {
          bVar2 = false;
        }
        else if ((local_1c < 0) || (*(int *)(DAT_8c02eb52 + param_2) <= local_1c)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || ((*(ushort *)(DAT_8c02eb54 + local_3c) & 4) != 0)) {
          bStack_28 = bStack_28 & 0xf7;
        }
        bStack_20 = param_5 & bStack_28;
        if ((bStack_20 & 1) != 0) {
          FUN_8c02e6f8(param_2,local_50 - 1,local_4c,0xd);
        }
        if ((bStack_20 & 2) != 0) {
          FUN_8c02e6f8(param_2,local_50 + 1,local_4c,0xe);
        }
        if ((bStack_20 & 4) != 0) {
          FUN_8c02e6f8(param_2,local_50,local_4c - 1,7);
        }
        if ((bStack_20 & 8) != 0) {
          FUN_8c02e6f8(param_2,local_50,local_4c + 1,0xb);
        }
        iVar7 = *(int *)(DAT_8c02eb56 + param_2) + -1;
        *(int *)(DAT_8c02eb56 + param_2) = iVar7;
        if ((iVar7 == 0) && (*(int *)(DAT_8c02eb58 + param_2) != 0)) {
          iVar7 = (int)DAT_8c02ec9e;
          iVar10 = *(int *)(DAT_8c02eca6 + param_2);
          *(int *)(DAT_8c02eca4 + param_2) = iVar10;
          puVar4 = PTR_FUN_8c02ecbc;
          local_30 = (code *)PTR_FUN_8c02ecbc;
          *(undefined4 *)(DAT_8c02eca8 + param_2) = *(undefined4 *)(DAT_8c02ecaa + param_2);
          (*(code *)puVar4)(local_44,param_2 + iVar7,(iVar10 + 1) * 2);
          (*local_30)(local_40,param_2 + DAT_8c02ecac,(*(int *)(DAT_8c02eca4 + param_2) + 1) * 2);
        }
      }
    }
  }
  return;
}

