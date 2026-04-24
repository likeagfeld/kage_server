// entry: 8c032f78
// name: FUN_8c032f78
// signature: undefined FUN_8c032f78(void)


/* WARNING: Removing unreachable block (ram,0x8c033098) */
/* WARNING: Removing unreachable block (ram,0x8c033198) */

void FUN_8c032f78(undefined4 param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  undefined4 in_fr3;
  double dVar12;
  double dVar13;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_48;
  uint local_44;
  byte local_40 [4];
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  code *local_2c;
  byte *local_28;
  byte bStack_24;
  int local_20;
  
  iVar11 = *(int *)(DAT_8c0330f4 + param_2);
  if (iVar11 == 0) {
    *(undefined4 *)(DAT_8c0330f6 + param_2) = 0;
  }
  puVar4 = PTR_FUN_8c033108;
  if (iVar11 < *(int *)(DAT_8c0330f8 + param_2)) {
    if (((int)(param_3 - 1) < 0) || (*(int *)(DAT_8c0330fa + param_2) <= (int)(param_3 - 1))) {
      bVar2 = false;
    }
    else if (((int)(param_4 - 1) < 0) || (*(int *)(DAT_8c0330fc + param_2) <= (int)(param_4 - 1))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((int)(param_3 + 1) < 0) || (*(int *)(DAT_8c0330fa + param_2) <= (int)(param_3 + 1))) {
        bVar2 = false;
      }
      else if (((int)(param_4 + 1) < 0) || (*(int *)(DAT_8c0330fc + param_2) <= (int)(param_4 + 1)))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_3c = param_2 + DAT_8c0330fe;
        local_38 = param_2 + DAT_8c033100;
        *(undefined2 *)(local_3c + iVar11 * 2) = 0;
        (*(code *)puVar4)(param_3 & 0xffff,local_38 + iVar11 * 2,6);
        iVar10 = DAT_8c03310c;
        (*(code *)PTR_FUN_8c033108)(param_4 & 0xffff,(int)DAT_8c033102);
        puVar9 = (ushort *)(iVar10 + (param_4 * 0x40 + param_3) * 0x10);
        if ((iVar11 < 1) || ((*puVar9 & 0x20) == 0)) {
          bVar1 = (byte)puVar9[4];
          bVar3 = 0;
          if ((0x4f < bVar1) && ((bVar1 < 0x5a && (0 < iVar11)))) {
            bVar3 = 1;
          }
          local_34 = (uint)bVar3;
          iVar11 = (*(code *)PTR_FUN_8c033110)
                             (*(undefined4 *)(DAT_8c033104 + param_2),param_3,param_4);
          if (((iVar11 != 0) &&
              (iVar11 = (*(code *)PTR_FUN_8c033520)(param_2,param_3,param_4), iVar11 != 0)) &&
             (local_30 = (*(code *)PTR_FUN_8c033524)(param_2,param_3,param_4), 0 < local_30)) {
            iVar11 = *(int *)(DAT_8c03350c + param_2);
            if (iVar11 == local_30) {
              iVar11 = (*(code *)PTR_FUN_8c03352c)();
              if (in_FPSCR_PR == '\0') {
                dVar13 = (double)CONCAT44((float)iVar11,param_1);
              }
              else {
                dVar13 = (double)iVar11;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar12 = (double)CONCAT44(DAT_8c033530,in_fr3);
              }
              else {
                dVar12 = (double)CONCAT44(DAT_8c033534,DAT_8c033530);
              }
              if (in_FPSCR_PR == '\0') {
                dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) /
                                          (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar13,0));
              }
              else {
                dVar13 = dVar13 / dVar12;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar12 = (double)CONCAT44(DAT_8c033534,SUB84(dVar12,0));
              }
              else {
                dVar12 = (double)CONCAT44(PTR_FUN_8c033538,DAT_8c033534);
              }
              if (in_FPSCR_PR == '\0') {
                iVar7 = (int)((float)((ulonglong)dVar13 >> 0x20) *
                             (float)((ulonglong)dVar12 >> 0x20));
              }
              else {
                iVar7 = (int)(dVar13 * dVar12);
              }
              iVar11 = *(int *)(DAT_8c03350c + param_2);
              if (iVar7 < 0x32) {
                local_30 = local_30 + 1;
              }
            }
            if (iVar11 < local_30) {
              *(int *)(DAT_8c03350c + param_2) = local_30;
              iVar7 = (int)DAT_8c033510;
              *(undefined4 *)(DAT_8c03350e + param_2) = 1;
              iVar8 = *(int *)(DAT_8c033512 + param_2);
              iVar11 = (int)DAT_8c033514;
              *(int *)(iVar11 + param_2) = iVar8;
              *(undefined2 *)(local_3c + iVar8 * 2) = 1;
              local_2c = (code *)PTR_FUN_8c033528;
              iVar11 = *(int *)(iVar11 + param_2);
              *(int *)(DAT_8c033516 + param_2) = iVar11;
              *(undefined4 *)(DAT_8c03351a + param_2) = *(undefined4 *)(DAT_8c033518 + param_2);
              (*local_2c)(param_2 + iVar7,(iVar11 + 1) * 2);
              (*local_2c)(param_2 + DAT_8c03351c,local_38,(*(int *)(DAT_8c033514 + param_2) + 1) * 2
                         );
              *(undefined2 *)(local_3c + *(int *)(DAT_8c033512 + param_2) * 2) = 0;
            }
          }
          *(int *)(DAT_8c033298 + param_2) = *(int *)(DAT_8c033298 + param_2) + 1;
          uVar5 = param_3;
          uVar6 = param_4;
          if (local_34 != 0) {
            (*(code *)PTR_FUN_8c033538)
                      (*(undefined4 *)(DAT_8c03351e + param_2),param_3,param_4,&local_48,&local_44);
            uVar5 = local_48;
            uVar6 = local_44;
          }
          local_44 = uVar6;
          local_48 = uVar5;
          (*(code *)PTR_FUN_8c0332a8)(local_48 & 0xffff,6);
          (*(code *)PTR_FUN_8c0332a8)(local_44 & 0xffff,(int)DAT_8c03329a);
          local_28 = local_40;
          local_40[0] = (local_40[0] & (byte)DAT_8c03329c | 0x10) & (byte)DAT_8c03329e | 8;
          bStack_24 = (*(code *)PTR_FUN_8c0332ac)(*(undefined4 *)(DAT_8c0332a0 + param_2),1);
          local_20 = (*(code *)PTR_FUN_8c0332b0)(local_28,6);
          iVar11 = (*(code *)PTR_FUN_8c0332b0)((int)DAT_8c03329a,local_20);
          iVar10 = iVar10 + (iVar11 * 0x40 + local_20) * 0x10;
          if ((local_20 + -1 < 0) || (*(int *)(DAT_8c0332a2 + param_2) <= local_20 + -1)) {
            bVar2 = false;
          }
          else if ((iVar11 < 0) || (*(int *)(DAT_8c0332a4 + param_2) <= iVar11)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || ((*(ushort *)(iVar10 + -0x10) & 4) != 0)) {
            bStack_24 = bStack_24 & 0xfe;
          }
          if ((local_20 + 1 < 0) || (*(int *)(DAT_8c0332a2 + param_2) <= local_20 + 1)) {
            bVar2 = false;
          }
          else if ((iVar11 < 0) || (*(int *)(DAT_8c0332a4 + param_2) <= iVar11)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || ((*(ushort *)(iVar10 + 0x10) & 4) != 0)) {
            bStack_24 = bStack_24 & 0xfd;
          }
          if ((local_20 < 0) || (*(int *)(DAT_8c0332a2 + param_2) <= local_20)) {
            bVar2 = false;
          }
          else if ((iVar11 + -1 < 0) || (*(int *)(DAT_8c0332a4 + param_2) <= iVar11 + -1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || ((*(ushort *)(iVar10 - DAT_8c0333a0) & 4) != 0)) {
            bStack_24 = bStack_24 & 0xfb;
          }
          if ((local_20 < 0) || (*(int *)(DAT_8c0333a2 + param_2) <= local_20)) {
            bVar2 = false;
          }
          else if ((iVar11 + 1 < 0) || (*(int *)(DAT_8c0333a4 + param_2) <= iVar11 + 1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || ((*(ushort *)(DAT_8c0333a0 + iVar10) & 4) != 0)) {
            bStack_24 = bStack_24 & 0xf7;
          }
          param_5 = param_5 & bStack_24;
          if ((param_5 & 1) != 0) {
            FUN_8c032f78(param_2,local_48 - 1,local_44,0xd);
          }
          if ((param_5 & 2) != 0) {
            FUN_8c032f78(param_2,local_48 + 1,local_44,0xe);
          }
          if ((param_5 & 4) != 0) {
            FUN_8c032f78(param_2,local_48,local_44 - 1,7);
          }
          if ((param_5 & 8) != 0) {
            FUN_8c032f78(param_2,local_48,local_44 + 1,0xb);
          }
          iVar11 = *(int *)(DAT_8c0333a6 + param_2) + -1;
          *(int *)(DAT_8c0333a6 + param_2) = iVar11;
          if ((iVar11 == 0) && (*(int *)(DAT_8c0333a8 + param_2) != 0)) {
            iVar11 = (int)DAT_8c033510;
            iVar10 = *(int *)(DAT_8c033516 + param_2);
            *(int *)(DAT_8c033514 + param_2) = iVar10;
            puVar4 = PTR_FUN_8c033528;
            local_2c = (code *)PTR_FUN_8c033528;
            *(undefined4 *)(DAT_8c033518 + param_2) = *(undefined4 *)(DAT_8c03351a + param_2);
            (*(code *)puVar4)(local_3c,param_2 + iVar11,(iVar10 + 1) * 2);
            (*local_2c)(local_38,param_2 + DAT_8c03351c,(*(int *)(DAT_8c033514 + param_2) + 1) * 2);
          }
        }
      }
    }
  }
  return;
}

