// entry: 8c02aee0
// name: FUN_8c02aee0


/* WARNING: Removing unreachable block (ram,0x8c02b094) */
/* WARNING: Removing unreachable block (ram,0x8c02b1ac) */

void FUN_8c02aee0(undefined4 param_1,int param_2)

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
  *(undefined4 *)(DAT_8c02b044 + param_2) = 0;
  iVar6 = 0;
  iVar13 = 8;
  iVar11 = (int)DAT_8c02b048;
  *(undefined4 *)(DAT_8c02b046 + param_2) = 0;
  *(undefined4 *)(DAT_8c02b04a + param_2) = 0;
  *(undefined4 *)(DAT_8c02b04c + param_2) = 0;
  *(undefined4 *)(DAT_8c02b04e + param_2) = 0;
  do {
    puVar4 = (ushort *)
             (*(int *)((int)DAT_8c02b052 + *(int *)(DAT_8c02b050 + param_2)) + iVar11 * iVar6);
    if ((((puVar4 != (ushort *)0x0) && ((*puVar4 & 1) != 0)) && ((puVar4[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02b054 + param_2) + 0xe + iVar6) == '\x02')) {
      iVar8 = iVar8 + 1;
    }
    iVar13 = iVar13 + -1;
    iVar6 = iVar6 + 1;
  } while (iVar13 != 0);
  *(undefined4 *)(DAT_8c02b056 + param_2) = *(undefined4 *)(PTR_DAT_8c02b068 + iVar8 * 4);
  uVar10 = *(uint *)(DAT_8c02b058 + param_2);
  uVar12 = *(uint *)(DAT_8c02b05a + param_2);
  uVar9 = *(uint *)(DAT_8c02b05c + param_2);
  iVar6 = *(int *)(DAT_8c02b046 + param_2);
  if (iVar6 == 0) {
    *(undefined4 *)(DAT_8c02b05e + param_2) = 0;
  }
  puVar2 = PTR___bfswu_8c02b06c;
  if (iVar6 < *(int *)(DAT_8c02b056 + param_2)) {
    local_40 = uVar10 - 1;
    local_3c = uVar12 - 1;
    if ((local_40 < 0) || (*(int *)(DAT_8c02b060 + param_2) <= local_40)) {
      bVar1 = false;
    }
    else if ((local_3c < 0) || (*(int *)(DAT_8c02b062 + param_2) <= local_3c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_38 = uVar10 + 1;
      local_34 = uVar12 + 1;
      if ((local_38 < 0) || (*(int *)(DAT_8c02b060 + param_2) <= local_38)) {
        bVar1 = false;
      }
      else if ((local_34 < 0) || (*(int *)(DAT_8c02b062 + param_2) <= local_34)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_30 = param_2 + DAT_8c02b064;
        local_2c = param_2 + DAT_8c02b066;
        *(undefined2 *)(local_30 + iVar6 * 2) = 0;
        (*(code *)puVar2)(uVar10 & 0xffff,local_2c + iVar6 * 2,6);
        (*(code *)PTR___bfswu_8c02b124)(uVar12 & 0xffff,local_2c + iVar6 * 2);
        local_28 = DAT_8c02b128;
        if ((iVar6 < 1) ||
           ((*(ushort *)(DAT_8c02b128 + (uVar12 * 0x40 + uVar10) * 0x10) & 0x20) == 0)) {
          iVar6 = (*(code *)PTR_FUN_8c02b2c0)(*(undefined4 *)(DAT_8c02b2b0 + param_2),uVar10,uVar12)
          ;
          if ((iVar6 != 0) &&
             ((iVar6 = (*(code *)PTR_FUN_8c02b564)(param_2,uVar10,uVar12), iVar6 != 0 &&
              (iVar6 = (*(code *)PTR_FUN_8c02b568)(param_2,uVar10,uVar12), 0 < iVar6)))) {
            iVar8 = *(int *)(DAT_8c02b54c + param_2);
            local_24 = iVar6;
            if ((iVar8 == iVar6) && (iVar6 != 0)) {
              iVar6 = (*(code *)PTR__rand_8c02b570)();
              if (in_FPSCR_PR == '\0') {
                dVar16 = (double)CONCAT44((float)iVar6,param_1);
              }
              else {
                dVar16 = (double)iVar6;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar14 = (double)CONCAT44(DAT_8c02b574,in_fr3);
              }
              else {
                dVar14 = (double)CONCAT44(DAT_8c02b578,DAT_8c02b574);
              }
              if (in_FPSCR_PR == '\0') {
                dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) /
                                          (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar16,0));
              }
              else {
                dVar16 = dVar16 / dVar14;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar14 = (double)CONCAT44(DAT_8c02b578,SUB84(dVar14,0));
              }
              else {
                dVar14 = (double)CONCAT44(uRam8c02b57c,DAT_8c02b578);
              }
              if (in_FPSCR_PR == '\0') {
                fVar17 = (float)((ulonglong)dVar16 >> 0x20) * (float)((ulonglong)dVar14 >> 0x20);
                dVar16 = (double)CONCAT44(fVar17,SUB84(dVar16,0));
                iVar6 = (int)fVar17;
              }
              else {
                dVar16 = dVar16 * dVar14;
                iVar6 = (int)dVar16;
              }
              param_1 = SUB84(dVar16,0);
              iVar8 = *(int *)(DAT_8c02b54c + param_2);
              if (iVar6 < 0x32) {
                local_24 = local_24 + 1;
              }
            }
            if (iVar8 < local_24) {
              *(int *)(DAT_8c02b54c + param_2) = local_24;
              iVar8 = (int)DAT_8c02b550;
              *(undefined4 *)(DAT_8c02b54e + param_2) = 1;
              iVar13 = *(int *)(DAT_8c02b552 + param_2);
              iVar6 = (int)DAT_8c02b554;
              *(int *)(iVar6 + param_2) = iVar13;
              *(undefined2 *)(local_30 + iVar13 * 2) = 1;
              local_20 = (code *)PTR__memcpy_8c02b56c;
              iVar6 = *(int *)(iVar6 + param_2);
              *(int *)(DAT_8c02b556 + param_2) = iVar6;
              *(undefined4 *)(DAT_8c02b55a + param_2) = *(undefined4 *)(DAT_8c02b558 + param_2);
              (*local_20)(param_2 + iVar8,(iVar6 + 1) * 2);
              (*local_20)(param_2 + DAT_8c02b55c,local_2c,(*(int *)(DAT_8c02b554 + param_2) + 1) * 2
                         );
              *(undefined2 *)(local_30 + *(int *)(DAT_8c02b552 + param_2) * 2) = 0;
            }
          }
          puVar2 = PTR___bfswu_8c02b2c4;
          *(int *)(DAT_8c02b2b2 + param_2) = *(int *)(DAT_8c02b2b2 + param_2) + 1;
          local_1c = local_44;
          (*(code *)puVar2)(uVar10 & 0xffff,6);
          (*(code *)PTR___bfswu_8c02b2c4)(uVar12 & 0xffff,(int)DAT_8c02b2b4);
          local_44[0] = (local_44[0] & (byte)DAT_8c02b2b6 | 0x10) & (byte)DAT_8c02b2b8 | 8;
          bStack_18 = (*(code *)PTR_FUN_8c02b2c8)
                                (*(undefined4 *)(DAT_8c02b2b0 + param_2),local_44,1);
          local_14 = (*(code *)PTR_FUN_8c02b2cc)(6);
          local_c = (*(code *)PTR_FUN_8c02b2cc)(local_14);
          local_28 = local_28 + (local_c * 0x40 + local_14) * 0x10;
          if ((local_14 + -1 < 0) || (*(int *)(DAT_8c02b2ba + param_2) <= local_14 + -1)) {
            bVar1 = false;
          }
          else if ((local_c < 0) || (*(int *)(DAT_8c02b2bc + param_2) <= local_c)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_28 + -0x10) & 4) != 0)) {
            bStack_18 = bStack_18 & 0xfe;
          }
          if ((local_14 + 1 < 0) || (*(int *)(DAT_8c02b2ba + param_2) <= local_14 + 1)) {
            bVar1 = false;
          }
          else if ((local_c < 0) || (*(int *)(DAT_8c02b2bc + param_2) <= local_c)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_28 + 0x10) & 4) != 0)) {
            bStack_18 = bStack_18 & 0xfd;
          }
          if ((local_14 < 0) || (*(int *)(DAT_8c02b2ba + param_2) <= local_14)) {
            bVar1 = false;
          }
          else if ((local_c + -1 < 0) || (*(int *)(DAT_8c02b414 + param_2) <= local_c + -1)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(local_28 - DAT_8c02b416) & 4) != 0)) {
            bStack_18 = bStack_18 & 0xfb;
          }
          local_c = local_c + 1;
          if ((local_14 < 0) || (*(int *)(DAT_8c02b418 + param_2) <= local_14)) {
            bVar1 = false;
          }
          else if ((local_c < 0) || (*(int *)(DAT_8c02b414 + param_2) <= local_c)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((!bVar1) || ((*(ushort *)(DAT_8c02b416 + local_28) & 4) != 0)) {
            bStack_18 = bStack_18 & 0xf7;
          }
          uVar9 = uVar9 & bStack_18;
          bStack_10 = (byte)uVar9;
          if ((uVar9 & 1) != 0) {
            (*(code *)PTR_FUN_8c02b560)(param_2,local_40,uVar12,0xd);
          }
          if ((bStack_10 & 2) != 0) {
            (*(code *)PTR_FUN_8c02b560)(param_2,local_38,uVar12,0xe);
          }
          if ((bStack_10 & 4) != 0) {
            (*(code *)PTR_FUN_8c02b430)(param_2,uVar10,local_3c,7);
          }
          if ((bStack_10 & 8) != 0) {
            (*(code *)PTR_FUN_8c02b430)(param_2,uVar10,local_34,0xb);
          }
          iVar6 = *(int *)(DAT_8c02b41a + param_2) + -1;
          *(int *)(DAT_8c02b41a + param_2) = iVar6;
          if ((iVar6 == 0) && (*(int *)(DAT_8c02b41c + param_2) != 0)) {
            iVar6 = (int)DAT_8c02b420;
            iVar8 = *(int *)(DAT_8c02b41e + param_2);
            *(int *)(DAT_8c02b422 + param_2) = iVar8;
            puVar2 = PTR__memcpy_8c02b42c;
            local_20 = (code *)PTR__memcpy_8c02b42c;
            *(undefined4 *)(DAT_8c02b426 + param_2) = *(undefined4 *)(DAT_8c02b424 + param_2);
            (*(code *)puVar2)(local_30,param_2 + iVar6,(iVar8 + 1) * 2);
            (*local_20)(local_2c,param_2 + DAT_8c02b428,(*(int *)(DAT_8c02b422 + param_2) + 1) * 2);
          }
        }
      }
    }
  }
  puVar2 = PTR_DAT_8c02b12c;
  if (*(int *)(DAT_8c02b116 + param_2) != 0) {
    iVar6 = (int)DAT_8c02b11a;
    uVar3 = *(undefined4 *)(PTR_DAT_8c02b12c + 4);
    *(undefined4 *)(DAT_8c02b118 + param_2) = 1;
    puVar5 = (undefined4 *)(param_2 + iVar6);
    iVar6 = (int)DAT_8c02b11c;
    uVar7 = *(undefined4 *)puVar2;
    puVar5[1] = uVar3;
    uVar3 = *(undefined4 *)(puVar2 + 8);
    iVar8 = *(int *)(iVar6 + param_2);
    iVar6 = (int)DAT_8c02b11e;
    *puVar5 = uVar7;
    puVar5[2] = uVar3;
    *(undefined2 *)(param_2 + DAT_8c02b120) =
         *(undefined2 *)(*(int *)(iVar6 + iVar8) + iVar11 * (uint)*(ushort *)(param_2 + 0x54) + 2);
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(*(undefined4 *)(iVar8 + 0x18),param_1);
    }
    else {
      uVar15 = *(undefined8 *)(iVar8 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c02b122 + param_2) = (int)((ulonglong)uVar15 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c02b122 + param_2) = uVar15;
    }
  }
  return;
}

