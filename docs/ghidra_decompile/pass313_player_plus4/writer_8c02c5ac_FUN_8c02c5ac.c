// entry: 8c02c5ac
// name: FUN_8c02c5ac


/* WARNING: Removing unreachable block (ram,0x8c02c760) */
/* WARNING: Removing unreachable block (ram,0x8c02c878) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c02c5ac(undefined4 param_1,int param_2)

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
  undefined4 in_fr3;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  float fVar17;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  code *local_20;
  undefined1 *local_1c;
  byte bStack_18;
  int local_14;
  byte bStack_10;
  int local_c;
  
  iVar8 = 0;
  *(undefined4 *)(DAT_8c02c710 + param_2) = 0;
  iVar6 = 0;
  iVar13 = 8;
  iVar11 = (int)DAT_8c02c714;
  *(undefined4 *)(DAT_8c02c712 + param_2) = 0;
  *(undefined4 *)(DAT_8c02c716 + param_2) = 0;
  *(undefined4 *)(DAT_8c02c718 + param_2) = 0;
  *(undefined4 *)(DAT_8c02c71a + param_2) = 0;
  do {
    puVar4 = (ushort *)
             (*(int *)((int)DAT_8c02c71e + *(int *)(DAT_8c02c71c + param_2)) + iVar11 * iVar6);
    if ((((puVar4 != (ushort *)0x0) && ((*puVar4 & 1) != 0)) && ((puVar4[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02c720 + param_2) + 0xe + iVar6) == '\x02')) {
      iVar8 = iVar8 + 1;
    }
    iVar13 = iVar13 + -1;
    iVar6 = iVar6 + 1;
  } while (iVar13 != 0);
  *(undefined4 *)(DAT_8c02c722 + param_2) = *(undefined4 *)(PTR_DAT_8c02c734 + iVar8 * 4);
  uVar10 = *(uint *)(DAT_8c02c724 + param_2);
  uVar12 = *(uint *)(DAT_8c02c726 + param_2);
  uVar9 = *(uint *)(DAT_8c02c728 + param_2);
  iVar6 = *(int *)(DAT_8c02c712 + param_2);
  if (iVar6 == 0) {
    *(undefined4 *)(DAT_8c02c72a + param_2) = 0;
  }
  puVar2 = PTR___bfswu_8c02c738;
  if (iVar6 < *(int *)(DAT_8c02c722 + param_2)) {
    local_40 = uVar10 - 1;
    local_3c = uVar12 - 1;
    if ((local_40 < 0) || (*(int *)(DAT_8c02c72c + param_2) <= local_40)) {
      bVar1 = false;
    }
    else if ((local_3c < 0) || (*(int *)(DAT_8c02c72e + param_2) <= local_3c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_38 = uVar10 + 1;
      local_34 = uVar12 + 1;
      if ((local_38 < 0) || (*(int *)(DAT_8c02c72c + param_2) <= local_38)) {
        bVar1 = false;
      }
      else if ((local_34 < 0) || (*(int *)(DAT_8c02c72e + param_2) <= local_34)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_30 = param_2 + DAT_8c02c730;
        local_2c = param_2 + DAT_8c02c732;
        *(undefined2 *)(local_30 + iVar6 * 2) = 0;
        (*(code *)puVar2)(uVar10 & 0xffff,local_2c + iVar6 * 2,6);
        (*(code *)PTR___bfswu_8c02c7f0)(uVar12 & 0xffff,local_2c + iVar6 * 2);
        local_28 = DAT_8c02c7f4;
        if ((iVar6 < 1) ||
           ((*(ushort *)(DAT_8c02c7f4 + (uVar12 * 0x40 + uVar10) * 0x10) & 0x20) == 0)) {
          iVar6 = (*(code *)PTR_FUN_8c02c98c)(*(undefined4 *)(DAT_8c02c97c + param_2),uVar10,uVar12)
          ;
          if ((iVar6 != 0) &&
             ((iVar6 = (*(code *)PTR_FUN_8c02cc2c)(param_2,uVar10,uVar12), iVar6 != 0 &&
              (local_24 = (*(code *)PTR_FUN_8c02cc30)(param_2,uVar10,uVar12), 0 < local_24)))) {
            iVar6 = *(int *)(DAT_8c02cc14 + param_2);
            if (iVar6 == local_24) {
              iVar6 = (*(code *)PTR__rand_8c02cc38)();
              if (in_FPSCR_PR == '\0') {
                dVar16 = (double)CONCAT44((float)iVar6,param_1);
              }
              else {
                dVar16 = (double)iVar6;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar14 = (double)CONCAT44(DAT_8c02cc3c,in_fr3);
              }
              else {
                dVar14 = (double)CONCAT44(DAT_8c02cc40,DAT_8c02cc3c);
              }
              if (in_FPSCR_PR == '\0') {
                dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) /
                                          (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar16,0));
              }
              else {
                dVar16 = dVar16 / dVar14;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar14 = (double)CONCAT44(DAT_8c02cc40,SUB84(dVar14,0));
              }
              else {
                dVar14 = (double)CONCAT44(_FUN_8c02cc44,DAT_8c02cc40);
              }
              if (in_FPSCR_PR == '\0') {
                fVar17 = (float)((ulonglong)dVar16 >> 0x20) * (float)((ulonglong)dVar14 >> 0x20);
                dVar16 = (double)CONCAT44(fVar17,SUB84(dVar16,0));
                iVar8 = (int)fVar17;
              }
              else {
                dVar16 = dVar16 * dVar14;
                iVar8 = (int)dVar16;
              }
              param_1 = SUB84(dVar16,0);
              iVar6 = *(int *)(DAT_8c02cc14 + param_2);
              if (iVar8 < 0x32) {
                local_24 = local_24 + 1;
              }
            }
            if (iVar6 < local_24) {
              *(int *)(DAT_8c02cc14 + param_2) = local_24;
              iVar8 = (int)DAT_8c02cc18;
              *(undefined4 *)(DAT_8c02cc16 + param_2) = 1;
              iVar13 = *(int *)(DAT_8c02cc1a + param_2);
              iVar6 = (int)DAT_8c02cc1c;
              *(int *)(iVar6 + param_2) = iVar13;
              *(undefined2 *)(local_30 + iVar13 * 2) = 1;
              local_20 = (code *)PTR__memcpy_8c02cc34;
              iVar6 = *(int *)(iVar6 + param_2);
              *(int *)(DAT_8c02cc1e + param_2) = iVar6;
              *(undefined4 *)(DAT_8c02cc22 + param_2) = *(undefined4 *)(DAT_8c02cc20 + param_2);
              (*local_20)(param_2 + iVar8,(iVar6 + 1) * 2);
              (*local_20)(param_2 + DAT_8c02cc24,local_2c,(*(int *)(DAT_8c02cc1c + param_2) + 1) * 2
                         );
              *(undefined2 *)(local_30 + *(int *)(DAT_8c02cc1a + param_2) * 2) = 0;
            }
          }
          puVar2 = PTR___bfswu_8c02c990;
          *(int *)(DAT_8c02c97e + param_2) = *(int *)(DAT_8c02c97e + param_2) + 1;
          local_1c = local_44;
          (*(code *)puVar2)(uVar10 & 0xffff,6);
          (*(code *)PTR___bfswu_8c02c990)(uVar12 & 0xffff,(int)DAT_8c02c980);
          local_44[0] = (local_44[0] & (byte)DAT_8c02c982 | 0x10) & (byte)DAT_8c02c984 | 8;
          bStack_18 = (*(code *)PTR_FUN_8c02c994)
                                (*(undefined4 *)(DAT_8c02c97c + param_2),local_44,1);
          local_14 = (*(code *)PTR_FUN_8c02c998)(6);
          local_c = (*(code *)PTR_FUN_8c02c998)(local_14);
          local_28 = local_28 + (local_c * 0x40 + local_14) * 0x10;
          if ((local_14 + -1 < 0) || (*(int *)(DAT_8c02c986 + param_2) <= local_14 + -1)) {
            bVar1 = false;
          }
          else if ((local_c < 0) || (*(int *)(DAT_8c02c988 + param_2) <= local_c)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_28 + -0x10) & 4) != 0)) {
            bStack_18 = bStack_18 & 0xfe;
          }
          if ((local_14 + 1 < 0) || (*(int *)(DAT_8c02c986 + param_2) <= local_14 + 1)) {
            bVar1 = false;
          }
          else if ((local_c < 0) || (*(int *)(DAT_8c02c988 + param_2) <= local_c)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_28 + 0x10) & 4) != 0)) {
            bStack_18 = bStack_18 & 0xfd;
          }
          if ((local_14 < 0) || (*(int *)(DAT_8c02c986 + param_2) <= local_14)) {
            bVar1 = false;
          }
          else if ((local_c + -1 < 0) || (*(int *)(DAT_8c02cae0 + param_2) <= local_c + -1)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_28 - DAT_8c02cae2) & 4) != 0)) {
            bStack_18 = bStack_18 & 0xfb;
          }
          local_c = local_c + 1;
          if ((local_14 < 0) || (*(int *)(DAT_8c02cae4 + param_2) <= local_14)) {
            bVar1 = false;
          }
          else if ((local_c < 0) || (*(int *)(DAT_8c02cae0 + param_2) <= local_c)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(DAT_8c02cae2 + local_28) & 4) != 0)) {
            bStack_18 = bStack_18 & 0xf7;
          }
          uVar9 = uVar9 & bStack_18;
          bStack_10 = (byte)uVar9;
          if ((uVar9 & 1) != 0) {
            (*(code *)PTR_FUN_8c02cc28)(param_2,local_40,uVar12,0xd);
          }
          if ((bStack_10 & 2) != 0) {
            (*(code *)PTR_FUN_8c02cc28)(param_2,local_38,uVar12,0xe);
          }
          if ((bStack_10 & 4) != 0) {
            (*(code *)PTR_FUN_8c02cafc)(param_2,uVar10,local_3c,7);
          }
          if ((bStack_10 & 8) != 0) {
            (*(code *)PTR_FUN_8c02cafc)(param_2,uVar10,local_34,0xb);
          }
          iVar6 = *(int *)(DAT_8c02cae6 + param_2) + -1;
          *(int *)(DAT_8c02cae6 + param_2) = iVar6;
          if ((iVar6 == 0) && (*(int *)(DAT_8c02cae8 + param_2) != 0)) {
            iVar6 = (int)DAT_8c02caec;
            iVar8 = *(int *)(DAT_8c02caea + param_2);
            *(int *)(DAT_8c02caee + param_2) = iVar8;
            puVar2 = PTR__memcpy_8c02caf8;
            local_20 = (code *)PTR__memcpy_8c02caf8;
            *(undefined4 *)(DAT_8c02caf2 + param_2) = *(undefined4 *)(DAT_8c02caf0 + param_2);
            (*(code *)puVar2)(local_30,param_2 + iVar6,(iVar8 + 1) * 2);
            (*local_20)(local_2c,param_2 + DAT_8c02caf4,(*(int *)(DAT_8c02caee + param_2) + 1) * 2);
          }
        }
      }
    }
  }
  puVar2 = PTR_DAT_8c02c7f8;
  if (*(int *)(DAT_8c02c7e2 + param_2) != 0) {
    iVar6 = (int)DAT_8c02c7e6;
    uVar3 = *(undefined4 *)(PTR_DAT_8c02c7f8 + 4);
    *(undefined4 *)(DAT_8c02c7e4 + param_2) = 1;
    puVar5 = (undefined4 *)(param_2 + iVar6);
    iVar6 = (int)DAT_8c02c7e8;
    uVar7 = *(undefined4 *)puVar2;
    puVar5[1] = uVar3;
    uVar3 = *(undefined4 *)(puVar2 + 8);
    iVar8 = *(int *)(iVar6 + param_2);
    iVar6 = (int)DAT_8c02c7ea;
    *puVar5 = uVar7;
    puVar5[2] = uVar3;
    *(undefined2 *)(param_2 + DAT_8c02c7ec) =
         *(undefined2 *)(*(int *)(iVar6 + iVar8) + iVar11 * (uint)*(ushort *)(param_2 + 0x54) + 2);
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(*(undefined4 *)(iVar8 + 0x18),param_1);
    }
    else {
      uVar15 = *(undefined8 *)(iVar8 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c02c7ee + param_2) = (int)((ulonglong)uVar15 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c02c7ee + param_2) = uVar15;
    }
  }
  return;
}

