// entry: 8c02a220
// name: FUN_8c02a220


/* WARNING: Removing unreachable block (ram,0x8c02a400) */
/* WARNING: Removing unreachable block (ram,0x8c02a4dc) */

void FUN_8c02a220(undefined4 param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 in_fr3;
  double dVar17;
  undefined4 uVar18;
  double dVar19;
  float fVar21;
  undefined8 uVar20;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_40;
  uint local_3c;
  byte local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  code *local_20;
  byte *local_1c;
  byte bStack_18;
  int local_14;
  byte bStack_10;
  int local_c;
  
  sVar1 = *(short *)(*(int *)(DAT_8c02a380 + param_2) + 0x68);
  iVar6 = (*(code *)PTR__rand_8c02a3a4)();
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44((float)iVar6,param_1);
  }
  else {
    dVar19 = (double)iVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(DAT_8c02a3a8,in_fr3);
  }
  else {
    dVar17 = (double)CONCAT44(DAT_8c02a3ac,DAT_8c02a3a8);
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) /
                              (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 / dVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(DAT_8c02a3ac,SUB84(dVar17,0));
  }
  else {
    dVar17 = (double)CONCAT44(PTR_DAT_8c02a3b0,DAT_8c02a3ac);
  }
  if (in_FPSCR_PR == '\0') {
    fVar21 = (float)((ulonglong)dVar19 >> 0x20) * (float)((ulonglong)dVar17 >> 0x20);
    dVar19 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
    iVar6 = (int)fVar21;
  }
  else {
    dVar19 = dVar19 * dVar17;
    iVar6 = (int)dVar19;
  }
  uVar18 = SUB84(dVar19,0);
  if (iVar6 < sVar1) {
    iVar6 = 0;
    iVar14 = (int)DAT_8c02a384;
    *(undefined4 *)(DAT_8c02a382 + param_2) = 0;
    iVar10 = 0;
    iVar16 = 8;
    *(undefined4 *)(DAT_8c02a386 + param_2) = 0;
    *(undefined4 *)(DAT_8c02a388 + param_2) = 0;
    *(undefined4 *)(DAT_8c02a38a + param_2) = 0;
    *(undefined4 *)(DAT_8c02a38c + param_2) = 0;
    do {
      puVar8 = (ushort *)
               (*(int *)((int)DAT_8c02a390 + *(int *)(DAT_8c02a38e + param_2)) + iVar14 * iVar10);
      if ((((puVar8 != (ushort *)0x0) && ((*puVar8 & 1) != 0)) && ((puVar8[4] & 4) == 0)) &&
         (*(char *)(*(int *)(DAT_8c02a392 + param_2) + 0xe + iVar10) == '\x02')) {
        iVar6 = iVar6 + 1;
      }
      iVar16 = iVar16 + -1;
      iVar10 = iVar10 + 1;
    } while (iVar16 != 0);
    *(undefined4 *)(DAT_8c02a394 + param_2) = *(undefined4 *)(PTR_DAT_8c02a3b0 + iVar6 * 4);
    uVar15 = *(uint *)(DAT_8c02a396 + param_2);
    uVar13 = *(uint *)(DAT_8c02a398 + param_2);
    uVar12 = *(uint *)(DAT_8c02a39a + param_2);
    iVar6 = *(int *)(DAT_8c02a386 + param_2);
    if (iVar6 == 0) {
      *(undefined4 *)(DAT_8c02a39c + param_2) = 0;
    }
    puVar5 = PTR___bfswu_8c02a548;
    if (iVar6 < *(int *)(DAT_8c02a394 + param_2)) {
      if (((int)(uVar15 - 1) < 0) || (*(int *)(DAT_8c02a39e + param_2) <= (int)(uVar15 - 1))) {
        bVar3 = false;
      }
      else if (((int)(uVar13 - 1) < 0) || (*(int *)(DAT_8c02a3a0 + param_2) <= (int)(uVar13 - 1))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (((int)(uVar15 + 1) < 0) || (*(int *)(DAT_8c02a39e + param_2) <= (int)(uVar15 + 1))) {
          bVar3 = false;
        }
        else if (((int)(uVar13 + 1) < 0) || (*(int *)(DAT_8c02a3a0 + param_2) <= (int)(uVar13 + 1)))
        {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_34 = param_2 + DAT_8c02a536;
          local_30 = param_2 + DAT_8c02a538;
          *(undefined2 *)(local_34 + iVar6 * 2) = 0;
          (*(code *)puVar5)(uVar15 & 0xffff,local_30 + iVar6 * 2,6);
          uVar7 = SUB84(dVar17,0);
          (*(code *)PTR___bfswu_8c02a548)(uVar13 & 0xffff,(int)DAT_8c02a53a);
          local_2c = DAT_8c02a54c;
          puVar8 = (ushort *)(DAT_8c02a54c + (uVar13 * 0x40 + uVar15) * 0x10);
          if ((iVar6 < 1) || ((*puVar8 & 0x20) == 0)) {
            bVar2 = (byte)puVar8[4];
            bVar4 = 0;
            if ((0x4f < bVar2) && ((bVar2 < 0x5a && (0 < iVar6)))) {
              bVar4 = 1;
            }
            local_28 = (uint)bVar4;
            iVar6 = (*(code *)PTR_FUN_8c02a550)
                              (*(undefined4 *)(DAT_8c02a53c + param_2),uVar15,uVar13);
            if (((iVar6 != 0) &&
                (iVar6 = (*(code *)PTR_FUN_8c02a938)(param_2,uVar15,uVar13), iVar6 != 0)) &&
               (local_24 = (*(code *)PTR_FUN_8c02a93c)(param_2,uVar15,uVar13), 0 < local_24)) {
              iVar6 = *(int *)(DAT_8c02a924 + param_2);
              if (iVar6 == local_24) {
                iVar6 = (*(code *)PTR__rand_8c02a944)();
                if (in_FPSCR_PR == '\0') {
                  dVar19 = (double)CONCAT44((float)iVar6,uVar18);
                }
                else {
                  dVar19 = (double)iVar6;
                }
                if (in_FPSCR_SZ == '\0') {
                  dVar17 = (double)CONCAT44(DAT_8c02a948,uVar7);
                }
                else {
                  dVar17 = (double)CONCAT44(DAT_8c02a94c,DAT_8c02a948);
                }
                if (in_FPSCR_PR == '\0') {
                  dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) /
                                            (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar19,0));
                }
                else {
                  dVar19 = dVar19 / dVar17;
                }
                if (in_FPSCR_SZ == '\0') {
                  dVar17 = (double)CONCAT44(DAT_8c02a94c,SUB84(dVar17,0));
                }
                else {
                  dVar17 = (double)CONCAT44(uRam8c02a950,DAT_8c02a94c);
                }
                if (in_FPSCR_PR == '\0') {
                  fVar21 = (float)((ulonglong)dVar19 >> 0x20) * (float)((ulonglong)dVar17 >> 0x20);
                  dVar19 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
                  iVar10 = (int)fVar21;
                }
                else {
                  dVar19 = dVar19 * dVar17;
                  iVar10 = (int)dVar19;
                }
                uVar18 = SUB84(dVar19,0);
                iVar6 = *(int *)(DAT_8c02a924 + param_2);
                if (iVar10 < 0x32) {
                  local_24 = local_24 + 1;
                }
              }
              if (iVar6 < local_24) {
                *(int *)(DAT_8c02a924 + param_2) = local_24;
                iVar10 = (int)DAT_8c02a928;
                *(undefined4 *)(DAT_8c02a926 + param_2) = 1;
                iVar16 = *(int *)(DAT_8c02a92a + param_2);
                iVar6 = (int)DAT_8c02a92c;
                *(int *)(iVar6 + param_2) = iVar16;
                *(undefined2 *)(local_34 + iVar16 * 2) = 1;
                local_20 = (code *)PTR__memcpy_8c02a940;
                iVar6 = *(int *)(iVar6 + param_2);
                *(int *)(DAT_8c02a92e + param_2) = iVar6;
                *(undefined4 *)(DAT_8c02a932 + param_2) = *(undefined4 *)(DAT_8c02a930 + param_2);
                (*local_20)(param_2 + iVar10,(iVar6 + 1) * 2);
                (*local_20)(param_2 + DAT_8c02a934,local_30,
                            (*(int *)(DAT_8c02a92c + param_2) + 1) * 2);
                *(undefined2 *)(local_34 + *(int *)(DAT_8c02a92a + param_2) * 2) = 0;
              }
            }
            *(int *)(DAT_8c02a53e + param_2) = *(int *)(DAT_8c02a53e + param_2) + 1;
            if (local_28 != 0) {
              (*(code *)PTR_FUN_8c02a824)
                        (*(undefined4 *)(DAT_8c02a80a + param_2),uVar15,uVar13,&local_40,&local_3c);
              uVar15 = local_40;
              uVar13 = local_3c;
            }
            local_3c = uVar13;
            local_40 = uVar15;
            (*(code *)PTR___bfswu_8c02a548)(local_40 & 0xffff,6);
            (*(code *)PTR___bfswu_8c02a548)(local_3c & 0xffff,(int)DAT_8c02a53a);
            local_1c = local_38;
            local_38[0] = (local_38[0] & (byte)DAT_8c02a540 | 0x10) & (byte)DAT_8c02a542 | 8;
            bStack_18 = (*(code *)PTR_FUN_8c02a554)(*(undefined4 *)(DAT_8c02a53c + param_2),1);
            local_14 = (*(code *)PTR_FUN_8c02a558)(6);
            local_c = (*(code *)PTR_FUN_8c02a558)((int)DAT_8c02a53a,local_14);
            local_2c = local_2c + (local_c * 0x40 + local_14) * 0x10;
            if ((local_14 + -1 < 0) || (*(int *)(DAT_8c02a544 + param_2) <= local_14 + -1)) {
              bVar3 = false;
            }
            else if ((local_c < 0) || (*(int *)(DAT_8c02a546 + param_2) <= local_c)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) || ((*(ushort *)(local_2c + -0x10) & 4) != 0)) {
              bStack_18 = bStack_18 & 0xfe;
            }
            if ((local_14 + 1 < 0) || (*(int *)(DAT_8c02a6c6 + param_2) <= local_14 + 1)) {
              bVar3 = false;
            }
            else if ((local_c < 0) || (*(int *)(DAT_8c02a6c8 + param_2) <= local_c)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) || ((*(ushort *)(local_2c + 0x10) & 4) != 0)) {
              bStack_18 = bStack_18 & 0xfd;
            }
            if ((local_14 < 0) || (*(int *)(DAT_8c02a6c6 + param_2) <= local_14)) {
              bVar3 = false;
            }
            else if ((local_c + -1 < 0) || (*(int *)(DAT_8c02a6c8 + param_2) <= local_c + -1)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) || ((*(ushort *)(local_2c - DAT_8c02a6ca) & 4) != 0)) {
              bStack_18 = bStack_18 & 0xfb;
            }
            local_c = local_c + 1;
            if ((local_14 < 0) || (*(int *)(DAT_8c02a6c6 + param_2) <= local_14)) {
              bVar3 = false;
            }
            else if ((local_c < 0) || (*(int *)(DAT_8c02a6c8 + param_2) <= local_c)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((!bVar3) || ((*(ushort *)(DAT_8c02a6ca + local_2c) & 4) != 0)) {
              bStack_18 = bStack_18 & 0xf7;
            }
            uVar12 = uVar12 & bStack_18;
            bStack_10 = (byte)uVar12;
            if ((uVar12 & 1) != 0) {
              (*(code *)PTR_FUN_8c02a82c)(param_2,local_40 - 1,local_3c,0xd);
            }
            if ((bStack_10 & 2) != 0) {
              (*(code *)PTR_FUN_8c02a82c)(param_2,local_40 + 1,local_3c,0xe);
            }
            if ((bStack_10 & 4) != 0) {
              (*(code *)PTR_FUN_8c02a82c)(param_2,local_40,local_3c - 1,7);
            }
            if ((bStack_10 & 8) != 0) {
              (*(code *)PTR_FUN_8c02a82c)(param_2,local_40,local_3c + 1,0xb);
            }
            iVar6 = *(int *)(DAT_8c02a802 + param_2) + -1;
            *(int *)(DAT_8c02a802 + param_2) = iVar6;
            if ((iVar6 == 0) && (*(int *)(DAT_8c02a804 + param_2) != 0)) {
              iVar6 = (int)DAT_8c02a814;
              iVar10 = *(int *)(DAT_8c02a812 + param_2);
              *(int *)(DAT_8c02a816 + param_2) = iVar10;
              puVar5 = PTR__memcpy_8c02a828;
              local_20 = (code *)PTR__memcpy_8c02a828;
              *(undefined4 *)(DAT_8c02a81a + param_2) = *(undefined4 *)(DAT_8c02a818 + param_2);
              (*(code *)puVar5)(local_34,param_2 + iVar6,(iVar10 + 1) * 2);
              (*local_20)(local_30,param_2 + DAT_8c02a81c,(*(int *)(DAT_8c02a816 + param_2) + 1) * 2
                         );
            }
          }
        }
      }
    }
    puVar5 = PTR_DAT_8c02a820;
    if (*(int *)(DAT_8c02a804 + param_2) != 0) {
      iVar6 = (int)DAT_8c02a808;
      uVar7 = *(undefined4 *)(PTR_DAT_8c02a820 + 4);
      *(undefined4 *)(DAT_8c02a806 + param_2) = 1;
      puVar9 = (undefined4 *)(param_2 + iVar6);
      iVar6 = (int)DAT_8c02a80a;
      uVar11 = *(undefined4 *)puVar5;
      puVar9[1] = uVar7;
      uVar7 = *(undefined4 *)(puVar5 + 8);
      iVar10 = *(int *)(iVar6 + param_2);
      iVar6 = (int)DAT_8c02a80c;
      *puVar9 = uVar11;
      puVar9[2] = uVar7;
      *(undefined2 *)(param_2 + DAT_8c02a80e) =
           *(undefined2 *)
            (*(int *)(iVar6 + iVar10) + iVar14 * (uint)*(ushort *)(param_2 + 0x54) + 2);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(iVar10 + 0x18),uVar18);
      }
      else {
        uVar20 = *(undefined8 *)(iVar10 + 0x18);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c02a810 + param_2) = (int)((ulonglong)uVar20 >> 0x20);
      }
      else {
        *(undefined8 *)(DAT_8c02a810 + param_2) = uVar20;
      }
    }
  }
  return;
}

