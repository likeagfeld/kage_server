// entry: 8c03ae04
// name: FUN_8c03ae04


/* WARNING: Removing unreachable block (ram,0x8c03b326) */
/* WARNING: Removing unreachable block (ram,0x8c03b1ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c03ae04(uint param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  double dVar18;
  ulonglong uVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar23;
  double dVar22;
  undefined4 uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  float fVar29;
  double dVar27;
  double dVar28;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  ulonglong in_dr14;
  ulonglong in_xd6;
  double in_xd8;
  ulonglong in_xd14;
  bool bVar33;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  puVar3 = PTR_FUN_8c03af3c;
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)uStack_c);
    puVar17 = &uStack_c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr14;
  }
  else {
    puVar17 = (undefined8 *)auStack_14;
    uStack_c = in_dr14;
  }
  *(undefined4 *)((int)puVar17 + -4) = in_PR;
  *(int *)((int)puVar17 + -0x38) = param_4;
  *(undefined4 *)(DAT_8c03af32 + param_4) = 1;
  iVar5 = (*(code *)puVar3)(*(undefined4 *)(param_4 + 0x58));
  if (iVar5 == 0xf) {
    iVar5 = (*(code *)PTR_FUN_8c03af44)
                      (*(undefined4 *)(*(int *)(*(int *)((int)puVar17 + -0x38) + 0x58) + 4),3);
    if (iVar5 == 0) {
      iVar5 = *(int *)((int)puVar17 + -0x38);
      uVar31 = 0;
      uVar6 = *(undefined4 *)(iVar5 + DAT_8c03af3a + 0x1c);
      *(int *)((int)puVar17 + -0x34) = iVar5 + DAT_8c03af3a;
      (*(code *)PTR_FUN_8c03af48)(uVar6,1);
      uVar26 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        uVar26 = CONCAT44(uVar31,param_1);
      }
      (*(code *)PTR_FUN_8c03af4c)(uVar26,*(undefined4 *)(*(int *)((int)puVar17 + -0x34) + 0x1c),0);
      uVar19 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(uVar31,(int)uVar26);
      }
      (*(code *)PTR_FUN_8c03af50)(uVar19,*(undefined4 *)(*(int *)((int)puVar17 + -0x34) + 0x1c),0);
      uVar26 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        uVar26 = CONCAT44(uVar31,(int)uVar19);
      }
      (*(code *)PTR_FUN_8c03af54)(uVar26,*(undefined4 *)(*(int *)((int)puVar17 + -0x34) + 0x1c),0);
      if (in_FPSCR_SZ == '\0') {
        in_xd14 = CONCAT44(uVar31,(int)uVar26);
      }
      (*(code *)PTR_FUN_8c03af4c)(in_xd14,*(undefined4 *)(iVar5 + 0x58),0x10);
      iVar12 = (int)DAT_8c03af36;
      *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar5 + 0x2c) | DAT_8c03af58;
      piVar9 = (int *)(*(int *)(iVar5 + 0x28) + iVar12);
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)DAT_8c03af5c,(int)in_xd14);
        dVar28 = (double)CONCAT44(DAT_8c03af40,param_3);
      }
      else {
        dVar18 = *DAT_8c03af5c;
        dVar28 = (double)CONCAT44(PTR_FUN_8c03af44,DAT_8c03af40);
      }
      if (in_FPSCR_PR == '\0') {
        dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) +
                                  (float)((ulonglong)dVar28 >> 0x20),SUB84(dVar18,0));
      }
      else {
        dVar18 = dVar18 + dVar28;
      }
      (*(code *)piVar9[2])(dVar18,iVar5 + *piVar9,1);
      cVar1 = PTR_DAT_8c03af60[0x60];
      *(undefined **)((int)puVar17 + -0x30) = PTR_DAT_8c03af60 + 0x60;
      if (cVar1 == '\0') {
        *(undefined4 *)((int)puVar17 + -0x2c) = *DAT_8c03af70;
      }
      else {
        *(undefined4 *)((int)puVar17 + -0x2c) = *DAT_8c03af64;
      }
      (*(code *)PTR_FUN_8c03af68)(PTR_DAT_8c03af60[0x61]);
      (*(code *)PTR_FUN_8c03af6c)
                (*(undefined4 *)((int)puVar17 + -0x2c),
                 *(undefined1 *)(*(int *)((int)puVar17 + -0x30) + 2),
                 *(undefined1 *)(*(int *)((int)puVar17 + -0x30) + 3),0);
    }
  }
  else {
    iVar5 = *(int *)((int)DAT_8c03af38 +
                    *(int *)((int)DAT_8c03af36 + *(int *)((int)puVar17 + -0x38))) +
            (int)DAT_8c03af34 * (uint)*(ushort *)(*(int *)((int)puVar17 + -0x38) + 0x54);
    if (in_FPSCR_SZ == '\0') {
      uVar25 = CONCAT44(*(undefined4 *)(iVar5 + 0x20),DAT_8c03af40);
    }
    else {
      uVar25 = *(undefined8 *)(iVar5 + 0x20);
      in_xd8 = (double)CONCAT44(PTR_FUN_8c03af44,DAT_8c03af40);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar25 >> 0x20) <= (float)uVar25) {
      iVar13 = *(int *)((int)puVar17 + -0x38);
      dVar18 = (double)(in_dr14 & 0xffffffff00000000);
      iVar12 = 0;
      iVar5 = 1;
      (*(code *)PTR_FUN_8c03b0f8)(*(undefined4 *)(iVar13 + DAT_8c03b0e4 + 0x1c),0);
      uVar26 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        uVar26 = (ulonglong)param_1;
      }
      (*(code *)PTR_FUN_8c03b0fc)(*(undefined4 *)(iVar13 + 0x58),0x12);
      *(uint *)(iVar13 + 0x2c) = *(uint *)(iVar13 + 0x2c) | DAT_8c03b100;
      *(undefined4 *)((int)puVar17 + -0x28) = DAT_8c03b104;
      iVar15 = *(int *)(DAT_8c03b0e6 + iVar13) + -2;
      *(int *)((int)puVar17 + -0x24) = iVar15;
      iVar13 = *(int *)(DAT_8c03b0e8 + iVar13) + -2;
      *(int *)((int)puVar17 + -0x20) = iVar13;
      uVar6 = (*(code *)PTR_FUN_8c03b108)(iVar13 * iVar15 * 2);
      uVar23 = (undefined4)uVar25;
      uVar31 = (undefined4)uVar26;
      uVar21 = (undefined4)param_2;
      *(undefined4 *)((int)puVar17 + -0x1c) = uVar6;
      if (0 < iVar13) {
        if (*(int *)((int)puVar17 + -0x24) < 1) {
          do {
            iVar5 = iVar5 + 1;
          } while (iVar5 <= *(int *)((int)puVar17 + -0x20));
        }
        else {
          iVar5 = (int)DAT_8c03b0ea;
          *(int *)((int)puVar17 + -0x20) = *(int *)((int)puVar17 + -0x20) << 10;
          do {
            uVar14 = 1;
            do {
              puVar3 = PTR___bfswu_8c03b10c;
              if ((*(ushort *)(uVar14 * 0x10 + iVar5 + *(int *)((int)puVar17 + -0x28)) &
                  DAT_8c03b0ec) == 0) {
                (*(code *)PTR___bfswu_8c03b10c)(uVar14 & 0xffff);
                (*(code *)puVar3)();
                *(byte *)(*(int *)((int)puVar17 + -0x1c) + iVar12 * 2) =
                     (*(byte *)(*(int *)((int)puVar17 + -0x1c) + iVar12 * 2) & (byte)DAT_8c03b0f0 |
                     0x10) & (byte)DAT_8c03b0f2 | 8;
                uVar7 = (*(code *)PTR_FUN_8c03b110)
                                  (*(undefined4 *)
                                    ((int)DAT_8c03b0f4 + *(int *)((int)puVar17 + -0x38)),0);
                iVar15 = 0;
                iVar13 = 2;
                do {
                  uVar10 = uVar7 >> 1;
                  uVar8 = uVar7 & 1;
                  uVar7 = (uVar10 & 0xff) >> 1;
                  iVar13 = iVar13 + -1;
                  iVar15 = iVar15 + uVar8 + (uVar10 & 1);
                } while (iVar13 != 0);
                if (2 < iVar15) {
                  iVar12 = iVar12 + 1;
                }
              }
              uVar23 = (undefined4)uVar25;
              uVar31 = (undefined4)uVar26;
              uVar21 = (undefined4)param_2;
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 <= *(int *)((int)puVar17 + -0x24));
            iVar5 = iVar5 + DAT_8c03b0ea;
          } while (iVar5 <= *(int *)((int)puVar17 + -0x20));
        }
      }
      if (iVar12 == 0) {
        iVar5 = *(int *)((int)puVar17 + -0x38);
        uVar2 = *(undefined2 *)(iVar5 + 0x54);
        *(undefined1 **)((int)puVar17 + -0x78) = (undefined1 *)((int)puVar17 + -0x74);
        (*(code *)PTR_FUN_8c03b114)(*(undefined4 *)(DAT_8c03b0f4 + iVar5),uVar2);
        *(undefined2 *)(iVar5 + DAT_8c03b0f6) = *(undefined2 *)((int)puVar17 + -0x74);
      }
      else {
        iVar5 = (*(code *)PTR__rand_8c03b350)();
        if (in_FPSCR_PR == '\0') {
          dVar28 = (double)CONCAT44((float)iVar5,uVar23);
        }
        else {
          dVar28 = (double)iVar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),DAT_8c03b354);
        }
        else {
          in_xd8 = (double)CONCAT44(_LAB_8c03b358,DAT_8c03b354);
        }
        if (in_FPSCR_PR == '\0') {
          fVar30 = (float)((ulonglong)dVar28 >> 0x20) / SUB84(dVar28,0);
        }
        else {
          fVar30 = (float)((ulonglong)(dVar28 / dVar28) >> 0x20);
        }
        dVar28 = (double)CONCAT44(fVar30,(float)iVar12);
        if (in_FPSCR_PR == '\0') {
          iVar5 = (int)(fVar30 * (float)iVar12);
        }
        else {
          iVar5 = (int)(dVar28 * dVar28);
        }
        *(undefined2 *)(*(int *)((int)puVar17 + -0x38) + (int)DAT_8c03b34a) =
             *(undefined2 *)(iVar5 * 2 + *(int *)((int)puVar17 + -0x1c));
      }
      *(byte *)((int)DAT_8c03b0f6 + *(int *)((int)puVar17 + -0x38)) =
           (*(byte *)((int)DAT_8c03b0f6 + *(int *)((int)puVar17 + -0x38)) & (byte)DAT_8c03b0f0 |
           0x10) & (byte)DAT_8c03b0f2 | 8;
      if (*(int *)((int)puVar17 + -0x1c) != 0) {
        (*(code *)PTR_FUN_8c03b118)(*(undefined4 *)((int)puVar17 + -0x1c));
      }
      uVar6 = (*(code *)PTR_FUN_8c03b11c)();
      *(undefined4 *)((int)puVar17 + -0x18) = uVar6;
      uVar6 = (*(code *)PTR_FUN_8c03b29c)();
      iVar5 = *(int *)((int)puVar17 + -0x38);
      *(undefined4 *)((int)puVar17 + -0x78) = uVar6;
      (*(code *)PTR_FUN_8c03b2a0)
                (*(undefined4 *)(DAT_8c03b294 + iVar5),(undefined1 *)((int)puVar17 + -0x70),
                 (undefined1 *)((int)puVar17 + -0x6c),*(undefined4 *)((int)puVar17 + -0x18));
      iVar5 = *(int *)(iVar5 + 0x58);
      if (in_FPSCR_SZ == '\0') {
        uVar24 = *(undefined4 *)(iVar5 + 0x4c);
        uVar23 = *(undefined4 *)(iVar5 + 0x50);
        dVar28 = (double)CONCAT44(uVar23,uVar21);
        uVar6 = *(undefined4 *)(iVar5 + 0x54);
        uVar26 = CONCAT44(uVar6,uVar24);
        *(undefined4 *)((int)puVar17 + -0x68) = uVar24;
        *(undefined4 *)((int)puVar17 + -100) = uVar23;
        *(undefined4 *)((int)puVar17 + -0x60) = uVar6;
      }
      else {
        in_xd8 = *(double *)(iVar5 + 0x4c);
        dVar28 = *(double *)(iVar5 + 0x50);
        uVar26 = *(ulonglong *)(iVar5 + 0x54);
        uVar24 = (undefined4)uVar26;
        *(double *)((int)puVar17 + -0x68) = in_xd8;
        uVar23 = (undefined4)((ulonglong)dVar28 >> 0x20);
        *(double *)((int)puVar17 + -100) = dVar28;
        uVar6 = (undefined4)(uVar26 >> 0x20);
        *(ulonglong *)((int)puVar17 + -0x60) = uVar26;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)((int)puVar17 + -0x70),uVar31);
      }
      else {
        uVar19 = *(ulonglong *)((int)puVar17 + -0x70);
      }
      *(undefined4 *)((int)puVar17 + -0x5c) = *(undefined4 *)((int)puVar17 + -0x68);
      if (in_FPSCR_SZ == '\0') {
        dVar28 = (double)CONCAT44(uVar23,(int)(uVar19 >> 0x20));
        dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x5c),(int)uVar19);
        uVar19 = in_xd6;
      }
      else {
        dVar20 = *(double *)((int)puVar17 + -0x5c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                  SUB84(dVar28,0) - (float)((ulonglong)dVar20 >> 0x20));
      }
      else {
        dVar28 = dVar28 - dVar20;
      }
      *(undefined4 *)((int)puVar17 + -0x54) = *(undefined4 *)((int)puVar17 + -0x60);
      fVar30 = SUB84(dVar28,0);
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar17 + -0x14) = fVar30;
        *(undefined4 *)((int)puVar17 + -0x50) = uVar24;
        *(int *)((int)puVar17 + -0x4c) = (int)((ulonglong)dVar28 >> 0x20);
      }
      else {
        *(ulonglong *)((int)puVar17 + -0x14) = uVar19;
        *(double *)((int)puVar17 + -0x50) = in_xd8;
        *(double *)((int)puVar17 + -0x4c) = dVar28;
      }
      *(undefined4 *)((int)puVar17 + -0x58) = *(undefined4 *)((int)puVar17 + -100);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar17 + -0x48) = uVar6;
      }
      else {
        *(ulonglong *)((int)puVar17 + -0x48) = uVar26;
      }
      *(undefined4 *)((int)puVar17 + -0x40) = *(undefined4 *)((int)puVar17 + -0x4c);
      if (in_FPSCR_SZ == '\0') {
        uVar26 = (ulonglong)*(uint *)((int)puVar17 + -0x6c);
      }
      else {
        in_xd8 = *(double *)((int)puVar17 + -0x6c);
      }
      *(undefined4 *)((int)puVar17 + -0x3c) = *(undefined4 *)((int)puVar17 + -0x48);
      if (in_FPSCR_SZ == '\0') {
        in_xd8 = (double)CONCAT44((int)uVar26,*(undefined4 *)((int)puVar17 + -0x3c));
      }
      if (in_FPSCR_PR == '\0') {
        in_xd8 = (double)CONCAT44((float)((ulonglong)in_xd8 >> 0x20) - SUB84(in_xd8,0),
                                  SUB84(in_xd8,0));
      }
      else {
        in_xd8 = in_xd8 - in_xd8;
      }
      fVar29 = (float)((ulonglong)in_xd8 >> 0x20);
      fVar32 = SUB84(dVar18,0);
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar17 + -0x10) = fVar29;
      }
      else {
        *(double *)((int)puVar17 + -0x10) = in_xd8;
      }
      *(undefined4 *)((int)puVar17 + -0x44) = *(undefined4 *)((int)puVar17 + -0x50);
      if (fVar29 == fVar32) {
        if (in_FPSCR_PR == '\0') {
          bVar33 = fVar32 < fVar30;
        }
        else {
          bVar33 = dVar18 < dVar28;
        }
        if (bVar33) {
          if (in_FPSCR_SZ == '\0') {
            dVar28 = (double)CONCAT44(DAT_8c03b2a4,fVar32);
          }
          else {
            dVar28 = (double)CONCAT44(PTR_FUN_8c03b2a8,DAT_8c03b2a4);
          }
        }
        else {
          if (in_FPSCR_PR == '\0') {
            bVar33 = fVar30 < fVar32;
          }
          else {
            bVar33 = dVar28 < dVar18;
          }
          if (bVar33) {
            if (in_FPSCR_SZ == '\0') {
              dVar28 = (double)CONCAT44(DAT_8c03b34c,fVar32);
            }
            else {
              dVar28 = (double)CONCAT44(PTR__rand_8c03b350,DAT_8c03b34c);
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            dVar28 = (double)CONCAT44(*(undefined4 *)
                                       ((int)DAT_8c03b348 + *(int *)((int)puVar17 + -0x38)),fVar32);
          }
          else {
            dVar28 = *(double *)((int)DAT_8c03b348 + *(int *)((int)puVar17 + -0x38));
          }
        }
      }
      else {
        if (in_FPSCR_PR == '\0') {
          fVar30 = fVar30 / fVar29;
        }
        else {
          fVar30 = SUB84(dVar28 / in_xd8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar19 = (ulonglong)dVar20 & 0xffffffff;
        }
        uVar6 = (undefined4)uVar19;
        dVar28 = (double)(*(code *)PTR_FID_conflict__atan_8c03b2cc)();
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(DAT_8c03b2d4,DAT_8c03b2d0);
        }
        else {
          dVar20 = (double)CONCAT44(DAT_8c03b2d8,DAT_8c03b2d4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) * SUB84(dVar20,0),
                                    SUB84(dVar28,0));
        }
        else {
          dVar28 = dVar28 * dVar20;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar22 = (double)CONCAT44(DAT_8c03b2d8,fVar30);
        }
        else {
          dVar22 = (double)CONCAT44(DAT_8c03b2dc,DAT_8c03b2d8);
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) /
                                    (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar28,0));
        }
        else {
          dVar28 = dVar28 / dVar20;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar17 + -0x10),SUB84(dVar20,0));
        }
        else {
          dVar27 = *(double *)((int)puVar17 + -0x10);
        }
        fVar30 = (float)((ulonglong)dVar22 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar33 = (float)((ulonglong)dVar27 >> 0x20) < SUB84(dVar18,0);
          dVar20 = (double)CONCAT44(((float)(int)(float)((ulonglong)dVar28 >> 0x20) * fVar30) /
                                    SUB84(dVar27,0),uVar6);
        }
        else {
          bVar33 = dVar27 < dVar18;
          dVar20 = ((double)(int)dVar28 * dVar22) / dVar27;
        }
        dVar28 = dVar20;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar18,0));
        }
        fVar32 = (float)((ulonglong)dVar28 >> 0x20);
        fVar29 = SUB84(dVar28,0);
        if (bVar33) {
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44(DAT_8c03b2dc,SUB84(dVar27,0));
          }
          else {
            dVar18 = (double)CONCAT44(uRam8c03b2e0,DAT_8c03b2dc);
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = (double)CONCAT44(fVar32 + (float)((ulonglong)dVar18 >> 0x20),fVar29);
          }
          else {
            dVar28 = dVar28 + dVar18;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)CONCAT44(fVar30,*(undefined4 *)((int)puVar17 + -0x14));
          }
          if (in_FPSCR_PR == '\0') {
            bVar33 = SUB84(dVar22,0) < fVar29;
          }
          else {
            bVar33 = dVar22 < dVar28;
          }
          if (bVar33) {
            if (in_FPSCR_PR == '\0') {
              dVar28 = (double)CONCAT44(fVar32 + (float)((ulonglong)dVar22 >> 0x20),fVar29);
            }
            else {
              dVar28 = dVar28 + dVar22;
            }
          }
        }
      }
      iVar5 = *(int *)((int)puVar17 + -0x38);
      dVar18 = dVar28;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar20,0));
      }
      (*(code *)PTR_FUN_8c03b2a8)(dVar18,iVar5);
      dVar20 = dVar28;
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)((ulonglong)dVar18 & 0xffffffff);
      }
      uVar14 = SUB84(dVar20,0);
      (*(code *)PTR_FUN_8c03b2ac)(dVar20,iVar5);
      uVar6 = SUB84(dVar28,0);
      if (in_FPSCR_SZ == '\0') {
        dVar28 = (double)(ulonglong)uVar14;
      }
      uVar31 = SUB84(dVar28,0);
      (*(code *)PTR_FUN_8c03b2b0)(dVar28,*(undefined4 *)(iVar5 + 0x58));
      if (in_FPSCR_SZ == '\0') {
        in_xd14 = CONCAT44(uVar6,uVar31);
      }
      piVar9 = (int *)(*(int *)(iVar5 + 0x28) + (int)DAT_8c03b294);
      (*(code *)piVar9[2])(in_xd14,iVar5 + *piVar9,1);
      puVar4 = PTR_DAT_8c03b2b8;
      puVar3 = PTR_DAT_8c03b2b4;
      *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar5 + 0x2c) | (int)DAT_8c03b296;
      pcVar11 = puVar4 + 0x6c;
      puVar16 = (undefined4 *)(iVar5 + DAT_8c03b298);
      uVar6 = *(undefined4 *)puVar3;
      puVar16[1] = *(undefined4 *)(puVar3 + 4);
      *puVar16 = uVar6;
      uVar6 = *(undefined4 *)(puVar3 + 8);
      *(char **)((int)puVar17 + -0xc) = pcVar11;
      puVar16[2] = uVar6;
      if (*pcVar11 == '\0') {
        *(undefined4 *)((int)puVar17 + -8) = *DAT_8c03b2c8;
      }
      else {
        *(undefined4 *)((int)puVar17 + -8) = *DAT_8c03b2bc;
      }
      (*(code *)PTR_FUN_8c03b2c0)(puVar4[0x6d]);
      (*(code *)PTR_FUN_8c03b2c4)
                (*(undefined4 *)((int)puVar17 + -8),
                 *(undefined1 *)(*(int *)((int)puVar17 + -0xc) + 2),
                 *(undefined1 *)(*(int *)((int)puVar17 + -0xc) + 3),0);
    }
  }
  return;
}

