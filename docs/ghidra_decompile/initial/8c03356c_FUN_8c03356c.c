// entry: 8c03356c
// name: FUN_8c03356c
// signature: undefined FUN_8c03356c(void)


/* WARNING: Removing unreachable block (ram,0x8c03368e) */
/* WARNING: Removing unreachable block (ram,0x8c033750) */

void FUN_8c03356c(undefined4 param_1,int param_2,uint param_3,uint param_4,byte param_5)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_fr3;
  double dVar8;
  double dVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte local_50 [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  code *local_34;
  undefined1 *local_30;
  byte bStack_2c;
  int local_28;
  byte bStack_24;
  
  iVar7 = *(int *)(DAT_8c0336bc + param_2);
  if (iVar7 == 0) {
    *(undefined4 *)(DAT_8c0336be + param_2) = 0;
  }
  puVar2 = PTR_FUN_8c0336cc;
  if (iVar7 < *(int *)(DAT_8c0336c0 + param_2)) {
    iVar5 = param_3 - 1;
    iVar6 = param_4 - 1;
    if ((iVar5 < 0) || (*(int *)(DAT_8c0336c2 + param_2) <= iVar5)) {
      bVar1 = false;
    }
    else if ((iVar6 < 0) || (*(int *)(DAT_8c0336c4 + param_2) <= iVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_4c = param_3 + 1;
      local_48 = param_4 + 1;
      if ((local_4c < 0) || (*(int *)(DAT_8c0336c2 + param_2) <= local_4c)) {
        bVar1 = false;
      }
      else if ((local_48 < 0) || (*(int *)(DAT_8c0336c4 + param_2) <= local_48)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_44 = param_2 + DAT_8c0336c6;
        local_40 = param_2 + DAT_8c0336c8;
        *(undefined2 *)(local_44 + iVar7 * 2) = 0;
        (*(code *)puVar2)(param_3 & 0xffff,local_40 + iVar7 * 2,6);
        (*(code *)PTR_FUN_8c0336cc)(param_4 & 0xffff,local_40 + iVar7 * 2);
        local_3c = DAT_8c0336d0;
        if ((iVar7 < 1) ||
           ((*(ushort *)(DAT_8c0336d0 + (param_4 * 0x40 + param_3) * 0x10) & 0x20) == 0)) {
          iVar7 = (*(code *)PTR_FUN_8c033864)
                            (*(undefined4 *)(DAT_8c033854 + param_2),param_3,param_4);
          if ((iVar7 != 0) &&
             ((iVar7 = (*(code *)PTR_FUN_8c033af8)(param_2,param_3,param_4), iVar7 != 0 &&
              (local_38 = (*(code *)PTR_FUN_8c033afc)(param_2,param_3,param_4), 0 < local_38)))) {
            iVar7 = *(int *)(DAT_8c033ae6 + param_2);
            if (iVar7 == local_38) {
              iVar7 = (*(code *)PTR_FUN_8c033b04)();
              if (in_FPSCR_PR == '\0') {
                dVar9 = (double)CONCAT44((float)iVar7,param_1);
              }
              else {
                dVar9 = (double)iVar7;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar8 = (double)CONCAT44(DAT_8c033b08,in_fr3);
              }
              else {
                dVar8 = (double)CONCAT44(DAT_8c033b0c,DAT_8c033b08);
              }
              if (in_FPSCR_PR == '\0') {
                dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) /
                                         (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar9,0));
              }
              else {
                dVar9 = dVar9 / dVar8;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar8 = (double)CONCAT44(DAT_8c033b0c,SUB84(dVar8,0));
              }
              else {
                dVar8 = (double)CONCAT44(uRam8c033b10,DAT_8c033b0c);
              }
              if (in_FPSCR_PR == '\0') {
                iVar3 = (int)((float)((ulonglong)dVar9 >> 0x20) * (float)((ulonglong)dVar8 >> 0x20))
                ;
              }
              else {
                iVar3 = (int)(dVar9 * dVar8);
              }
              iVar7 = *(int *)(DAT_8c033ae6 + param_2);
              if (iVar3 < 0x32) {
                local_38 = local_38 + 1;
              }
            }
            if (iVar7 < local_38) {
              *(int *)(DAT_8c033ae6 + param_2) = local_38;
              iVar3 = (int)DAT_8c033aea;
              *(undefined4 *)(DAT_8c033ae8 + param_2) = 1;
              iVar4 = *(int *)(DAT_8c033aec + param_2);
              iVar7 = (int)DAT_8c033aee;
              *(int *)(iVar7 + param_2) = iVar4;
              *(undefined2 *)(local_44 + iVar4 * 2) = 1;
              local_34 = (code *)PTR_FUN_8c033b00;
              iVar7 = *(int *)(iVar7 + param_2);
              *(int *)(DAT_8c033af0 + param_2) = iVar7;
              *(undefined4 *)(DAT_8c033af4 + param_2) = *(undefined4 *)(DAT_8c033af2 + param_2);
              (*local_34)(param_2 + iVar3,(iVar7 + 1) * 2);
              (*local_34)(param_2 + DAT_8c033af6,local_40,(*(int *)(DAT_8c033aee + param_2) + 1) * 2
                         );
              *(undefined2 *)(local_44 + *(int *)(DAT_8c033aec + param_2) * 2) = 0;
            }
          }
          puVar2 = PTR_FUN_8c033868;
          *(int *)(DAT_8c033856 + param_2) = *(int *)(DAT_8c033856 + param_2) + 1;
          local_30 = local_50;
          (*(code *)puVar2)(param_3 & 0xffff,6);
          (*(code *)PTR_FUN_8c033868)(param_4 & 0xffff,(int)DAT_8c033858);
          local_50[0] = (local_50[0] & (byte)DAT_8c03385a | 0x10) & (byte)DAT_8c03385c | 8;
          bStack_2c = (*(code *)PTR_FUN_8c03386c)
                                (*(undefined4 *)(DAT_8c033854 + param_2),local_50,1);
          local_28 = (*(code *)PTR_FUN_8c033870)(6);
          iVar7 = (*(code *)PTR_FUN_8c033870)(local_28);
          local_3c = local_3c + (iVar7 * 0x40 + local_28) * 0x10;
          if ((local_28 + -1 < 0) || (*(int *)(DAT_8c03385e + param_2) <= local_28 + -1)) {
            bVar1 = false;
          }
          else if ((iVar7 < 0) || (*(int *)(DAT_8c033860 + param_2) <= iVar7)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_3c + -0x10) & 4) != 0)) {
            bStack_2c = bStack_2c & 0xfe;
          }
          if ((local_28 + 1 < 0) || (*(int *)(DAT_8c03385e + param_2) <= local_28 + 1)) {
            bVar1 = false;
          }
          else if ((iVar7 < 0) || (*(int *)(DAT_8c033860 + param_2) <= iVar7)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_3c + 0x10) & 4) != 0)) {
            bStack_2c = bStack_2c & 0xfd;
          }
          if ((local_28 < 0) || (*(int *)(DAT_8c03385e + param_2) <= local_28)) {
            bVar1 = false;
          }
          else if ((iVar7 + -1 < 0) || (*(int *)(DAT_8c03399a + param_2) <= iVar7 + -1)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_3c - DAT_8c03399c) & 4) != 0)) {
            bStack_2c = bStack_2c & 0xfb;
          }
          if ((local_28 < 0) || (*(int *)(DAT_8c03399e + param_2) <= local_28)) {
            bVar1 = false;
          }
          else if ((iVar7 + 1 < 0) || (*(int *)(DAT_8c03399a + param_2) <= iVar7 + 1)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(DAT_8c03399c + local_3c) & 4) != 0)) {
            bStack_2c = bStack_2c & 0xf7;
          }
          bStack_24 = param_5 & bStack_2c;
          if ((bStack_24 & 1) != 0) {
            FUN_8c03356c(param_2,iVar5,param_4,0xd);
          }
          if ((bStack_24 & 2) != 0) {
            FUN_8c03356c(param_2,local_4c,param_4,0xe);
          }
          if ((bStack_24 & 4) != 0) {
            FUN_8c03356c(param_2,param_3,iVar6,7);
          }
          if ((bStack_24 & 8) != 0) {
            FUN_8c03356c(param_2,param_3,local_48,0xb);
          }
          iVar7 = *(int *)(DAT_8c0339a0 + param_2) + -1;
          *(int *)(DAT_8c0339a0 + param_2) = iVar7;
          if ((iVar7 == 0) && (*(int *)(DAT_8c0339a2 + param_2) != 0)) {
            iVar7 = (int)DAT_8c0339a6;
            iVar5 = *(int *)(DAT_8c0339a4 + param_2);
            *(int *)(DAT_8c0339a8 + param_2) = iVar5;
            puVar2 = PTR_FUN_8c0339b0;
            local_34 = (code *)PTR_FUN_8c0339b0;
            *(undefined4 *)(DAT_8c0339ac + param_2) = *(undefined4 *)(DAT_8c0339aa + param_2);
            (*(code *)puVar2)(local_44,param_2 + iVar7,(iVar5 + 1) * 2);
            (*local_34)(local_40,param_2 + DAT_8c0339ae,(*(int *)(DAT_8c0339a8 + param_2) + 1) * 2);
          }
        }
      }
    }
  }
  return;
}

