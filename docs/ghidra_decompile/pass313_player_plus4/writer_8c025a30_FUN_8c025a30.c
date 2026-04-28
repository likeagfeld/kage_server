// entry: 8c025a30
// name: FUN_8c025a30


/* WARNING: Removing unreachable block (ram,0x8c025f5a) */
/* WARNING: Removing unreachable block (ram,0x8c025e9e) */
/* WARNING: Removing unreachable block (ram,0x8c0265f0) */
/* WARNING: Removing unreachable block (ram,0x8c025ca0) */
/* WARNING: Removing unreachable block (ram,0x8c026284) */
/* WARNING: Removing unreachable block (ram,0x8c025d00) */
/* WARNING: Removing unreachable block (ram,0x8c025e32) */
/* WARNING: Removing unreachable block (ram,0x8c026638) */
/* WARNING: Removing unreachable block (ram,0x8c02606a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c025a30(ulonglong param_1,double param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined *puVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined2 *puVar16;
  ushort *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined2 *puVar22;
  undefined8 *puVar23;
  undefined4 uVar24;
  undefined8 in_dr2;
  double dVar25;
  undefined4 uVar26;
  double dVar27;
  float fVar28;
  undefined8 in_dr14;
  undefined8 uVar29;
  ulonglong uVar30;
  double in_xd8;
  double dVar31;
  ulonglong in_xd14;
  bool bVar32;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_c);
    puVar23 = &uStack_c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr14;
  }
  else {
    puVar23 = (undefined8 *)auStack_14;
    uStack_c = in_dr14;
  }
  *(undefined4 *)((int)puVar23 + -4) = in_PR;
  iVar18 = 0;
  iVar12 = *(int *)(DAT_8c025b84 + param_3);
  *(int *)((int)puVar23 + -0x70) = param_3;
  *(undefined2 **)((int)puVar23 + -0x6c) = DAT_8c025b90;
  if (0 < iVar12) {
    uVar29 = 0;
    iVar10 = *(int *)(DAT_8c025b86 + param_3);
    puVar16 = DAT_8c025b90;
    do {
      puVar6 = PTR_FUN_8c025b94;
      iVar19 = 0;
      puVar22 = puVar16;
      if (0 < iVar10) {
        *(undefined2 **)((int)puVar23 + -0x74) = puVar16;
        do {
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar22 + 2) = (int)uVar29;
          }
          else {
            *(ulonglong *)(puVar22 + 2) = in_xd14;
          }
          puVar22[5] = 0xffff;
          puVar22[6] = 0;
          cVar7 = (*(code *)puVar6)(*(undefined4 *)(DAT_8c025b88 + param_3),iVar19,iVar18,1);
          *(char *)(puVar22 + 4) = cVar7;
          if ((((cVar7 == '\0') || (cVar7 == '\x02')) || (cVar7 == 'Z')) || (cVar7 == '_')) {
            *puVar22 = 1;
          }
          else if (cVar7 == 'h') {
            *puVar22 = 9;
          }
          else if (cVar7 == 'i') {
            *puVar22 = 0x21;
          }
          else if (cVar7 == 'j') {
            *puVar22 = 4;
          }
          else if (cVar7 == 'k') {
            iVar12 = (*(code *)PTR_FUN_8c026204)
                               (*(undefined4 *)(DAT_8c0261fa + param_3),iVar19,iVar18);
            uVar8 = *(undefined1 *)(iVar12 + 10);
            *puVar22 = 0x10;
            *(undefined1 *)((int)puVar22 + 9) = uVar8;
            *(undefined1 *)((int)puVar23 + -0x68) = uVar8;
            if (*(char *)(iVar12 + 8) == '\x03') {
              iVar10 = *(int *)(DAT_8c0261fc + param_3);
              uVar1 = *(ushort *)(param_3 + 0x54);
              *(int *)((int)puVar23 + -0x60) = iVar10 + DAT_8c0261fe;
              uVar15 = (uint)*(byte *)((int)puVar23 + -0x68);
              uVar21 = (uint)uVar1;
              *(uint *)((int)puVar23 + -0x5c) = uVar21;
              *(int *)((int)puVar23 + -0x58) = iVar10 + DAT_8c026200;
              iVar12 = *(int *)(DAT_8c026202 + param_3) + 4;
              *(uint *)((int)puVar23 + -0x54) = uVar21;
              *(int *)((int)puVar23 + -0x50) = iVar12;
              *(int *)((int)puVar23 + -100) = iVar10;
              *(uint *)((int)puVar23 + -0x50) = iVar12 + (uint)*(byte *)((int)puVar23 + -0x68) * 2;
              iVar10 = iVar10 + uVar21 * 0x1e;
              *(int *)((int)puVar23 + -100) = iVar10;
              sVar3 = *(short *)(uVar15 * 2 + iVar10);
              iVar12 = *(int *)((int)puVar23 + -0x60) + *(int *)((int)puVar23 + -0x5c) * 0x1e;
              *(int *)((int)puVar23 + -0x5c) = *(int *)((int)puVar23 + -0x5c) * 0x1e;
              sVar4 = *(short *)(uVar15 * 2 + iVar12);
              *(int *)((int)puVar23 + -0x60) = iVar12;
              iVar12 = *(int *)((int)puVar23 + -0x58) + *(int *)((int)puVar23 + -0x54) * 0x1e;
              *(int *)((int)puVar23 + -0x54) = *(int *)((int)puVar23 + -0x54) * 0x1e;
              sVar5 = *(short *)(uVar15 * 2 + iVar12);
              *(int *)((int)puVar23 + -0x58) = iVar12;
              if ((int)**(short **)((int)puVar23 + -0x50) <= (int)sVar3 + (int)sVar4 + (int)sVar5) {
                *puVar22 = 0;
              }
            }
          }
          else {
            *puVar22 = 0;
          }
          iVar19 = iVar19 + 1;
          iVar10 = *(int *)(DAT_8c025b86 + param_3);
          puVar22 = puVar22 + 8;
        } while (iVar19 < iVar10);
        puVar16 = *(undefined2 **)((int)puVar23 + -0x74);
        iVar12 = *(int *)(DAT_8c025b84 + param_3);
      }
      iVar18 = iVar18 + 1;
      puVar16 = (undefined2 *)((int)puVar16 + (int)DAT_8c025b8a);
    } while (iVar18 < iVar12);
    *(undefined2 **)((int)puVar23 + -0x1c) = puVar22;
  }
  uVar9 = (undefined4)in_dr2;
  *(undefined4 *)((int)puVar23 + -0x24) = *(undefined4 *)((int)puVar23 + -0x6c);
  *(undefined4 *)((int)puVar23 + -0x20) = 0;
  if (0 < iVar12) {
    uVar30 = 0;
    iVar18 = *(int *)(DAT_8c025b86 + param_3);
    do {
      *(undefined4 *)((int)puVar23 + -0x1c) = *(undefined4 *)((int)puVar23 + -0x24);
      *(undefined4 *)((int)puVar23 + -0x18) = 0;
      if (0 < iVar18) {
        do {
          puVar6 = PTR_FUN_8c0263a4;
          if (((**(ushort **)((int)puVar23 + -0x1c) & 0x20) != 0) &&
             ((**(ushort **)((int)puVar23 + -0x1c) & 4) == 0)) {
            iVar12 = (*(code *)PTR_FUN_8c0263a0)
                               (*(undefined4 *)(DAT_8c026390 + param_3),
                                *(undefined4 *)((int)puVar23 + -0x18),
                                *(undefined4 *)((int)puVar23 + -0x20));
            iVar18 = (*(code *)puVar6)(6);
            iVar10 = (*(code *)puVar6)((int)DAT_8c026392);
            uVar9 = SUB84(param_2,0);
            uVar26 = (undefined4)uVar30;
            *(uint *)((int)puVar23 + -0x4c) = (uint)(-1 < iVar18);
            if ((-1 < iVar18 == 0) || (*(int *)(DAT_8c026394 + param_3) <= iVar18)) {
              bVar32 = false;
            }
            else if ((iVar10 < 0) || (*(int *)(DAT_8c026396 + param_3) <= iVar10)) {
              bVar32 = false;
            }
            else {
              bVar32 = true;
            }
            if ((bVar32) &&
               (puVar11 = (ushort *)
                          (*(int *)((int)puVar23 + -0x6c) + (iVar10 * 0x40 + iVar18) * 0x10),
               uVar1 = *puVar11, *(ushort **)((int)puVar23 + -0x48) = puVar11,
               (uVar1 & DAT_8c026398) == 0)) {
              uVar30 = in_xd14;
              if (in_FPSCR_SZ == '\0') {
                uVar30 = CONCAT44(uVar26,(int)param_1);
              }
              param_1 = uVar30;
              dVar27 = (double)FUN_8c026d1c(param_1,param_3,iVar12);
              uVar1 = DAT_8c026398;
              fVar28 = (float)((ulonglong)dVar27 >> 0x20);
              uVar24 = SUB84(dVar27,0);
              if (in_FPSCR_SZ == '\0') {
                uVar24 = uVar26;
              }
              uVar30 = CONCAT44(fVar28,uVar24);
              if (in_FPSCR_SZ == '\0') {
                param_2 = (double)CONCAT44(*(undefined4 *)(*(int *)(DAT_8c02639a + param_3) + 100),
                                           uVar9);
              }
              else {
                param_2 = *(double *)(*(int *)(DAT_8c02639a + param_3) + 100);
              }
              if (in_FPSCR_PR == '\0') {
                bVar32 = fVar28 < (float)((ulonglong)param_2 >> 0x20);
              }
              else {
                bVar32 = dVar27 < param_2;
              }
              cVar7 = *(char *)(*(int *)(*(int *)(DAT_8c026390 + param_3) + 0x20) * iVar10 + iVar18
                               + *(int *)((int)DAT_8c02639c + *(int *)(DAT_8c026390 + param_3)));
              *(uint *)((int)puVar23 + -0x44) = (uint)bVar32;
              if (cVar7 == '[') {
                *(undefined4 *)((int)puVar23 + -0x40) = 10;
              }
              else {
                *(uint *)((int)puVar23 + -0x40) = (int)*(char *)(iVar12 + 8) & 0xf;
              }
              *(int *)((int)puVar23 + -0x40) = *(int *)((int)puVar23 + -0x40) + 1;
              puVar11 = *(ushort **)((int)puVar23 + -0x48);
              if (in_FPSCR_SZ == '\0') {
                *(float *)(puVar11 + 2) = fVar28;
              }
              else {
                *(ulonglong *)(puVar11 + 2) = uVar30;
              }
              uVar2 = *puVar11;
              *puVar11 = uVar2 | uVar1;
              if (*(int *)((int)puVar23 + -0x44) != 0) {
                **(ushort **)((int)puVar23 + -0x48) = uVar2 | uVar1 | 1;
              }
              iVar12 = 1;
              if (1 < *(int *)((int)puVar23 + -0x40)) {
                *(uint *)((int)puVar23 + -0x3c) = (uint)(-1 < iVar10);
                iVar19 = *(int *)((int)puVar23 + -0x40) + -1;
                puVar11 = *(ushort **)((int)puVar23 + -0x48);
                do {
                  puVar17 = puVar11 + -8;
                  uVar15 = (uint)param_1;
                  iVar13 = iVar18 - iVar12;
                  if ((iVar13 < 0) || (*(int *)(DAT_8c026394 + param_3) <= iVar13)) {
                    bVar32 = false;
                  }
                  else if ((*(int *)((int)puVar23 + -0x3c) == 0) ||
                          (*(int *)(DAT_8c026396 + param_3) <= iVar10)) {
                    bVar32 = false;
                  }
                  else {
                    bVar32 = true;
                  }
                  if (!bVar32) break;
                  iVar20 = *(int *)(DAT_8c026390 + param_3);
                  if (*(int *)((iVar10 * *(int *)(iVar20 + 0x20) + iVar13) * 4 +
                              *(int *)(DAT_8c02639e + iVar20)) == 0) {
                    uVar8 = (*(code *)PTR_FUN_8c02675c)(iVar20,iVar10,1);
                    iVar13 = (*(code *)PTR_FUN_8c026760)
                                       (*(undefined4 *)(DAT_8c026758 + param_3),uVar8);
                    if (iVar13 == 0) break;
                    iVar13 = *(int *)((int)puVar23 + -0x44);
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar11 + -6) = (int)(uVar30 >> 0x20);
                    }
                    else {
                      *(ulonglong *)(puVar11 + -6) = uVar30;
                    }
                    if (iVar13 != 0) {
                      *puVar17 = *puVar17 | 1;
                    }
                  }
                  else {
                    uVar9 = (*(code *)PTR_FUN_8c0263a0)(iVar20,iVar10);
                    param_1 = uVar30;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (ulonglong)uVar15;
                    }
                    FUN_8c026764(param_3,uVar9);
                  }
                  iVar19 = iVar19 + -1;
                  iVar12 = iVar12 + 1;
                  puVar11 = puVar17;
                } while (iVar19 != 0);
              }
              iVar12 = 1;
              if (1 < *(int *)((int)puVar23 + -0x40)) {
                *(uint *)((int)puVar23 + -0x38) = (uint)(-1 < iVar10);
                puVar11 = *(ushort **)((int)puVar23 + -0x48);
                do {
                  puVar17 = puVar11 + 8;
                  uVar15 = (uint)param_1;
                  if ((iVar12 + iVar18 < 0) || (*(int *)(DAT_8c026514 + param_3) <= iVar12 + iVar18)
                     ) {
                    bVar32 = false;
                  }
                  else if ((*(int *)((int)puVar23 + -0x38) == 0) ||
                          (*(int *)(DAT_8c026516 + param_3) <= iVar10)) {
                    bVar32 = false;
                  }
                  else {
                    bVar32 = true;
                  }
                  if (!bVar32) break;
                  iVar19 = *(int *)(DAT_8c026518 + param_3);
                  if (*(int *)((iVar12 + iVar10 * *(int *)(iVar19 + 0x20)) * 4 + iVar18 * 4 +
                              *(int *)(DAT_8c02651a + iVar19)) == 0) {
                    uVar8 = (*(code *)PTR_FUN_8c02675c)(iVar19,iVar10,1);
                    iVar19 = (*(code *)PTR_FUN_8c026760)
                                       (*(undefined4 *)(DAT_8c026758 + param_3),uVar8);
                    if (iVar19 == 0) break;
                    iVar19 = *(int *)((int)puVar23 + -0x44);
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar11 + 10) = (int)(uVar30 >> 0x20);
                    }
                    else {
                      *(ulonglong *)(puVar11 + 10) = uVar30;
                    }
                    if (iVar19 != 0) {
                      *puVar17 = *puVar17 | 1;
                    }
                  }
                  else {
                    uVar9 = (*(code *)PTR_FUN_8c026520)(iVar19,iVar10);
                    param_1 = uVar30;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (ulonglong)uVar15;
                    }
                    FUN_8c026764(param_3,uVar9);
                  }
                  iVar12 = iVar12 + 1;
                  puVar11 = puVar17;
                } while (iVar12 < *(int *)((int)puVar23 + -0x40));
              }
              puVar11 = (ushort *)(*(int *)((int)puVar23 + -0x48) - (int)DAT_8c02651c);
              iVar12 = 1;
              if (1 < *(int *)((int)puVar23 + -0x40)) {
                *(int *)((int)puVar23 + -0x34) = iVar18 << 2;
                iVar19 = *(int *)((int)puVar23 + -0x40) + -1;
                do {
                  uVar15 = (uint)param_1;
                  if ((*(int *)((int)puVar23 + -0x4c) == 0) ||
                     (*(int *)(DAT_8c026514 + param_3) <= iVar18)) {
                    bVar32 = false;
                  }
                  else if ((iVar10 - iVar12 < 0) ||
                          (*(int *)(DAT_8c026516 + param_3) <= iVar10 - iVar12)) {
                    bVar32 = false;
                  }
                  else {
                    bVar32 = true;
                  }
                  if (!bVar32) break;
                  iVar13 = iVar10 - iVar12;
                  if (*(int *)(*(int *)(*(int *)(DAT_8c026518 + param_3) + 0x20) * iVar13 * 4 +
                               *(int *)((int)puVar23 + -0x34) +
                              *(int *)((int)DAT_8c02651a + *(int *)(DAT_8c026518 + param_3))) == 0)
                  {
                    uVar8 = (*(code *)PTR_FUN_8c02675c)(iVar18,iVar13,1);
                    iVar13 = (*(code *)PTR_FUN_8c026760)
                                       (*(undefined4 *)(DAT_8c026758 + param_3),uVar8);
                    if (iVar13 == 0) break;
                    iVar13 = *(int *)((int)puVar23 + -0x44);
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar11 + 2) = (int)(uVar30 >> 0x20);
                    }
                    else {
                      *(ulonglong *)(puVar11 + 2) = uVar30;
                    }
                    if (iVar13 != 0) {
                      *puVar11 = *puVar11 | 1;
                    }
                  }
                  else {
                    uVar9 = (*(code *)PTR_FUN_8c026520)(iVar18,iVar13);
                    param_1 = uVar30;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (ulonglong)uVar15;
                    }
                    FUN_8c026764(param_3,uVar9);
                  }
                  iVar19 = iVar19 + -1;
                  iVar12 = iVar12 + 1;
                  puVar11 = (ushort *)((int)puVar11 - (int)DAT_8c02651c);
                } while (iVar19 != 0);
              }
              iVar12 = 1;
              puVar11 = (ushort *)(*(int *)((int)puVar23 + -0x48) + (int)DAT_8c02651c);
              if (1 < *(int *)((int)puVar23 + -0x40)) {
                do {
                  uVar15 = (uint)param_1;
                  if ((*(int *)((int)puVar23 + -0x4c) == 0) ||
                     (*(int *)(DAT_8c026652 + param_3) <= iVar18)) {
                    bVar32 = false;
                  }
                  else if ((iVar12 + iVar10 < 0) ||
                          (*(int *)(DAT_8c026654 + param_3) <= iVar12 + iVar10)) {
                    bVar32 = false;
                  }
                  else {
                    bVar32 = true;
                  }
                  if (!bVar32) break;
                  iVar19 = iVar12 + iVar10;
                  if (*(int *)(*(int *)(*(int *)(DAT_8c026656 + param_3) + 0x20) * iVar19 * 4 +
                               iVar18 * 4 +
                              *(int *)((int)DAT_8c026658 + *(int *)(DAT_8c026656 + param_3))) == 0)
                  {
                    uVar8 = (*(code *)PTR_FUN_8c02675c)(iVar18,iVar19,1);
                    iVar19 = (*(code *)PTR_FUN_8c026760)
                                       (*(undefined4 *)(DAT_8c026758 + param_3),uVar8);
                    if (iVar19 == 0) break;
                    iVar19 = *(int *)((int)puVar23 + -0x44);
                    if (in_FPSCR_SZ == '\0') {
                      *(int *)(puVar11 + 2) = (int)(uVar30 >> 0x20);
                    }
                    else {
                      *(ulonglong *)(puVar11 + 2) = uVar30;
                    }
                    if (iVar19 != 0) {
                      *puVar11 = *puVar11 | 1;
                    }
                  }
                  else {
                    uVar9 = (*(code *)PTR_FUN_8c02665c)(iVar18,iVar19);
                    param_1 = uVar30;
                    if (in_FPSCR_SZ == '\0') {
                      param_1 = (ulonglong)uVar15;
                    }
                    FUN_8c026764(param_3,uVar9);
                  }
                  iVar12 = iVar12 + 1;
                  puVar11 = (ushort *)((int)puVar11 + (int)DAT_8c02665a);
                } while (iVar12 < *(int *)((int)puVar23 + -0x40));
              }
            }
          }
          *(int *)((int)puVar23 + -0x18) = *(int *)((int)puVar23 + -0x18) + 1;
          *(int *)((int)puVar23 + -0x1c) = *(int *)((int)puVar23 + -0x1c) + 0x10;
          iVar18 = *(int *)(DAT_8c025b86 + param_3);
        } while (*(int *)((int)puVar23 + -0x18) < iVar18);
        iVar12 = *(int *)(DAT_8c025b84 + param_3);
      }
      uVar9 = (undefined4)in_dr2;
      *(int *)((int)puVar23 + -0x20) = *(int *)((int)puVar23 + -0x20) + 1;
      *(int *)((int)puVar23 + -0x24) = *(int *)((int)puVar23 + -0x24) + (int)DAT_8c025b8a;
    } while (*(int *)((int)puVar23 + -0x20) < iVar12);
  }
  if ((**(char **)(DAT_8c025b8c + param_3) == '\0') &&
     ((**(uint **)(DAT_8c025b88 + param_3) & 4) != 0)) {
    iVar12 = *(int *)((int)puVar23 + -0x6c);
    *(undefined4 *)((int)puVar23 + -0x30) = 5;
    if (in_FPSCR_SZ == '\0') {
      uVar26 = *(undefined4 *)(DAT_8c025d08 + param_3);
      dVar27 = (double)CONCAT44(DAT_8c025d14,uVar9);
      dVar31 = (double)CONCAT44(uVar26,uVar26);
    }
    else {
      dVar31 = *(double *)(DAT_8c025d08 + param_3);
      dVar27 = (double)CONCAT44(_DAT_8c025d18,DAT_8c025d14);
      in_xd8 = dVar31;
    }
    if (in_FPSCR_PR == '\0') {
      dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) *
                                (float)((ulonglong)dVar27 >> 0x20),SUB84(dVar31,0));
    }
    else {
      dVar31 = dVar31 * dVar27;
    }
    dVar25 = (double)CONCAT44(0x3f800000,SUB84(dVar27,0));
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44(0x40000000,SUB84(dVar27,0));
    }
    else {
      dVar25 = dVar25 + dVar25;
    }
    *(int *)((int)puVar23 + -0x6c) = iVar12 + DAT_8c025d0a;
    if (in_FPSCR_PR == '\0') {
      dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) /
                                (float)((ulonglong)dVar25 >> 0x20),SUB84(dVar31,0));
    }
    else {
      dVar31 = dVar31 / dVar25;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar23 + -0x2c) = (int)((ulonglong)dVar31 >> 0x20);
      *(int *)((int)puVar23 + -0x28) = SUB84(dVar31,0);
    }
    else {
      *(double *)((int)puVar23 + -0x2c) = dVar31;
      *(double *)((int)puVar23 + -0x28) = in_xd8;
    }
    *(int *)((int)puVar23 + -0x1c) = iVar12 + DAT_8c025d0a;
    iVar10 = *(int *)((int)puVar23 + -0x70);
    iVar18 = 1;
    iVar19 = *(int *)(DAT_8c025d0c + iVar10);
    iVar12 = iVar19 + -3;
    if (0 < iVar12) {
      iVar13 = *(int *)((int)puVar23 + -0x30);
      puVar11 = *(ushort **)((int)puVar23 + -0x1c);
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar23 + -0x2c),
                                  *(undefined4 *)((int)puVar23 + -0x28));
      }
      else {
        dVar27 = *(double *)((int)puVar23 + -0x2c);
      }
      do {
        fVar28 = (float)((ulonglong)dVar27 >> 0x20);
        if (iVar13 < 1) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar23 + -0x2c) = fVar28;
          }
          else {
            *(double *)((int)puVar23 + -0x2c) = dVar27;
          }
          *(int *)((int)puVar23 + -0x30) = iVar13;
          goto LAB_8c025c2c;
        }
        if ((char)puVar11[4] != '\0') {
          iVar13 = iVar13 + -1;
          *puVar11 = *puVar11 | 1;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar11 + 2) = fVar28;
          }
          else {
            *(double *)(puVar11 + 2) = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = (double)CONCAT44(fVar28 + SUB84(dVar27,0),SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar27;
          }
          iVar19 = *(int *)(DAT_8c025d0c + iVar10);
          iVar12 = iVar19 + -3;
        }
        iVar18 = iVar18 + 1;
        puVar11 = puVar11 + 8;
        *(ushort **)((int)puVar23 + -0x1c) = puVar11;
      } while (iVar18 <= iVar12);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar23 + -0x2c) = (int)((ulonglong)dVar27 >> 0x20);
      }
      else {
        *(double *)((int)puVar23 + -0x2c) = dVar27;
      }
      *(int *)((int)puVar23 + -0x30) = iVar13;
    }
LAB_8c025c2c:
    iVar12 = _DAT_8c025d18;
    iVar13 = *(int *)(DAT_8c025d0e + iVar10);
    puVar11 = (ushort *)(_DAT_8c025d18 + (iVar19 + 0x3e) * 0x10);
    iVar18 = iVar13 + -3;
    iVar20 = iVar19 + -2;
    iVar14 = 1;
    if (0 < iVar18) {
      iVar19 = (int)DAT_8c025d10;
      iVar20 = *(int *)((int)puVar23 + -0x30);
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar23 + -0x2c),
                                  *(undefined4 *)((int)puVar23 + -0x28));
      }
      else {
        dVar27 = *(double *)((int)puVar23 + -0x2c);
      }
      do {
        fVar28 = (float)((ulonglong)dVar27 >> 0x20);
        if (iVar20 < 1) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar23 + -0x2c) = fVar28;
          }
          else {
            *(double *)((int)puVar23 + -0x2c) = dVar27;
          }
          *(int *)((int)puVar23 + -0x30) = iVar20;
          iVar19 = *(int *)(DAT_8c026652 + iVar10);
          iVar20 = iVar19 + -2;
          goto LAB_8c025c9c;
        }
        if ((char)puVar11[4] != '\0') {
          iVar20 = iVar20 + -1;
          *puVar11 = *puVar11 | 1;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar11 + 2) = fVar28;
          }
          else {
            *(double *)(puVar11 + 2) = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = (double)CONCAT44(fVar28 + SUB84(dVar27,0),SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar27;
          }
          iVar13 = *(int *)(DAT_8c025d0e + iVar10);
          iVar18 = iVar13 + -3;
        }
        iVar14 = iVar14 + 1;
        puVar11 = (ushort *)((int)puVar11 + iVar19);
      } while (iVar14 <= iVar18);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar23 + -0x2c) = (int)((ulonglong)dVar27 >> 0x20);
      }
      else {
        *(double *)((int)puVar23 + -0x2c) = dVar27;
      }
      *(int *)((int)puVar23 + -0x30) = iVar20;
      iVar19 = *(int *)(DAT_8c025d0c + iVar10);
      iVar20 = iVar19 + -2;
    }
LAB_8c025c9c:
    iVar18 = iVar13 * 0x40;
    iVar13 = iVar13 + -2;
    puVar11 = (ushort *)(iVar12 + (iVar18 + iVar19 + (int)DAT_8c025d12) * 0x10);
    if (1 < iVar20) {
      iVar18 = *(int *)((int)puVar23 + -0x30);
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar23 + -0x2c),
                                  *(undefined4 *)((int)puVar23 + -0x28));
      }
      else {
        dVar27 = *(double *)((int)puVar23 + -0x2c);
      }
      do {
        fVar28 = (float)((ulonglong)dVar27 >> 0x20);
        if (iVar18 < 1) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar23 + -0x2c) = fVar28;
          }
          else {
            *(double *)((int)puVar23 + -0x2c) = dVar27;
          }
          *(int *)((int)puVar23 + -0x30) = iVar18;
          iVar18 = *(int *)(DAT_8c026654 + iVar10) << 6;
          iVar13 = *(int *)(DAT_8c026654 + iVar10) + -2;
          goto LAB_8c025d04;
        }
        if ((char)puVar11[4] != '\0') {
          iVar18 = iVar18 + -1;
          *puVar11 = *puVar11 | 1;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar11 + 2) = fVar28;
          }
          else {
            *(double *)(puVar11 + 2) = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = (double)CONCAT44(fVar28 + SUB84(dVar27,0),SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar27;
          }
        }
        iVar20 = iVar20 + -1;
        puVar11 = puVar11 + -8;
      } while (1 < iVar20);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar23 + -0x2c) = (int)((ulonglong)dVar27 >> 0x20);
      }
      else {
        *(double *)((int)puVar23 + -0x2c) = dVar27;
      }
      *(int *)((int)puVar23 + -0x30) = iVar18;
      iVar18 = *(int *)(DAT_8c025d0e + iVar10) << 6;
      iVar13 = *(int *)(DAT_8c025d0e + iVar10) + -2;
    }
LAB_8c025d04:
    puVar11 = (ushort *)(iVar12 + (iVar18 + -0x7f) * 0x10);
    if (1 < iVar13) {
      iVar19 = (int)DAT_8c025e80;
      iVar18 = *(int *)((int)puVar23 + -0x30);
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar23 + -0x2c),
                                  *(undefined4 *)((int)puVar23 + -0x28));
      }
      else {
        dVar27 = *(double *)((int)puVar23 + -0x2c);
      }
      do {
        fVar28 = (float)((ulonglong)dVar27 >> 0x20);
        if (iVar18 < 1) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar23 + -0x2c) = fVar28;
          }
          else {
            *(double *)((int)puVar23 + -0x2c) = dVar27;
          }
          *(int *)((int)puVar23 + -0x30) = iVar18;
          iVar18 = *(int *)(DAT_8c026652 + iVar10);
          goto LAB_8c025d6a;
        }
        if ((char)puVar11[4] != '\0') {
          iVar18 = iVar18 + -1;
          *puVar11 = *puVar11 | 1;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar11 + 2) = fVar28;
          }
          else {
            *(double *)(puVar11 + 2) = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = (double)CONCAT44(fVar28 + SUB84(dVar27,0),SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar27;
          }
        }
        iVar13 = iVar13 + -1;
        puVar11 = (ushort *)((int)puVar11 - iVar19);
      } while (1 < iVar13);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar23 + -0x2c) = (int)((ulonglong)dVar27 >> 0x20);
      }
      else {
        *(double *)((int)puVar23 + -0x2c) = dVar27;
      }
      *(int *)((int)puVar23 + -0x30) = iVar18;
    }
    iVar18 = *(int *)(DAT_8c025e82 + iVar10);
LAB_8c025d6a:
    iVar19 = iVar18 + -4;
    puVar11 = (ushort *)(iVar12 + DAT_8c025e84);
    iVar13 = 2;
    if (1 < iVar19) {
      iVar20 = *(int *)((int)puVar23 + -0x30);
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar23 + -0x2c),
                                  *(undefined4 *)((int)puVar23 + -0x28));
      }
      else {
        dVar27 = *(double *)((int)puVar23 + -0x2c);
      }
      do {
        fVar28 = (float)((ulonglong)dVar27 >> 0x20);
        if (iVar20 < 1) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar23 + -0x2c) = fVar28;
          }
          else {
            *(double *)((int)puVar23 + -0x2c) = dVar27;
          }
          *(int *)((int)puVar23 + -0x30) = iVar20;
          iVar19 = *(int *)(DAT_8c026654 + iVar10);
          goto LAB_8c025dc4;
        }
        if ((char)puVar11[4] != '\0') {
          iVar20 = iVar20 + -1;
          *puVar11 = *puVar11 | 1;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar11 + 2) = fVar28;
          }
          else {
            *(double *)(puVar11 + 2) = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = (double)CONCAT44(fVar28 + SUB84(dVar27,0),SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar27;
          }
          iVar18 = *(int *)(DAT_8c025e82 + iVar10);
          iVar19 = iVar18 + -4;
        }
        iVar13 = iVar13 + 1;
        puVar11 = puVar11 + 8;
      } while (iVar13 <= iVar19);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar23 + -0x2c) = (int)((ulonglong)dVar27 >> 0x20);
      }
      else {
        *(double *)((int)puVar23 + -0x2c) = dVar27;
      }
      *(int *)((int)puVar23 + -0x30) = iVar20;
    }
    iVar19 = *(int *)(DAT_8c025e86 + iVar10);
LAB_8c025dc4:
    puVar11 = (ushort *)(iVar12 + (iVar18 + 0x7d) * 0x10);
    iVar13 = iVar19 + -4;
    iVar20 = iVar18 + -3;
    iVar14 = 2;
    if (1 < iVar13) {
      iVar18 = (int)DAT_8c025e80;
      iVar20 = *(int *)((int)puVar23 + -0x30);
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar23 + -0x2c),
                                  *(undefined4 *)((int)puVar23 + -0x28));
      }
      else {
        dVar27 = *(double *)((int)puVar23 + -0x2c);
      }
      do {
        fVar28 = (float)((ulonglong)dVar27 >> 0x20);
        if (iVar20 < 1) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar23 + -0x2c) = fVar28;
          }
          else {
            *(double *)((int)puVar23 + -0x2c) = dVar27;
          }
          *(int *)((int)puVar23 + -0x30) = iVar20;
          iVar18 = *(int *)(DAT_8c026652 + iVar10);
          iVar20 = iVar18 + -3;
          goto LAB_8c025e2e;
        }
        if ((char)puVar11[4] != '\0') {
          iVar20 = iVar20 + -1;
          *puVar11 = *puVar11 | 1;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar11 + 2) = fVar28;
          }
          else {
            *(double *)(puVar11 + 2) = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = (double)CONCAT44(fVar28 + SUB84(dVar27,0),SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar27;
          }
          iVar19 = *(int *)(DAT_8c025e86 + iVar10);
          iVar13 = iVar19 + -4;
        }
        iVar14 = iVar14 + 1;
        puVar11 = (ushort *)((int)puVar11 + iVar18);
      } while (iVar14 <= iVar13);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar23 + -0x2c) = (int)((ulonglong)dVar27 >> 0x20);
      }
      else {
        *(double *)((int)puVar23 + -0x2c) = dVar27;
      }
      *(int *)((int)puVar23 + -0x30) = iVar20;
      iVar18 = *(int *)(DAT_8c025e82 + iVar10);
      iVar20 = iVar18 + -3;
    }
LAB_8c025e2e:
    iVar13 = iVar19 * 0x40;
    iVar19 = iVar19 + -3;
    puVar11 = (ushort *)(iVar12 + (iVar13 + iVar18 + (int)DAT_8c025e88) * 0x10);
    if (2 < iVar20) {
      iVar18 = *(int *)((int)puVar23 + -0x30);
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar23 + -0x2c),
                                  *(undefined4 *)((int)puVar23 + -0x28));
      }
      else {
        dVar27 = *(double *)((int)puVar23 + -0x2c);
      }
      do {
        fVar28 = (float)((ulonglong)dVar27 >> 0x20);
        if (iVar18 < 1) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar23 + -0x2c) = fVar28;
          }
          else {
            *(double *)((int)puVar23 + -0x2c) = dVar27;
          }
          *(int *)((int)puVar23 + -0x30) = iVar18;
          iVar13 = *(int *)(DAT_8c026654 + iVar10) << 6;
          iVar19 = *(int *)(DAT_8c026654 + iVar10) + -3;
          goto LAB_8c025ea2;
        }
        if ((char)puVar11[4] != '\0') {
          iVar18 = iVar18 + -1;
          *puVar11 = *puVar11 | 1;
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar11 + 2) = fVar28;
          }
          else {
            *(double *)(puVar11 + 2) = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = (double)CONCAT44(fVar28 + SUB84(dVar27,0),SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar27;
          }
        }
        iVar20 = iVar20 + -1;
        puVar11 = puVar11 + -8;
      } while (2 < iVar20);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar23 + -0x2c) = (int)((ulonglong)dVar27 >> 0x20);
      }
      else {
        *(double *)((int)puVar23 + -0x2c) = dVar27;
      }
      *(int *)((int)puVar23 + -0x30) = iVar18;
      iVar13 = *(int *)(DAT_8c025fec + iVar10) << 6;
      iVar19 = *(int *)(DAT_8c025fec + iVar10) + -3;
    }
LAB_8c025ea2:
    puVar11 = (ushort *)(iVar12 + (iVar13 + DAT_8c025fee) * 0x10);
    if (2 < iVar19) {
      iVar18 = (int)DAT_8c025ff0;
      iVar12 = *(int *)((int)puVar23 + -0x30);
      if (in_FPSCR_SZ == '\0') {
        dVar27 = (double)CONCAT44(*(undefined4 *)((int)puVar23 + -0x2c),
                                  *(undefined4 *)((int)puVar23 + -0x28));
      }
      else {
        dVar27 = *(double *)((int)puVar23 + -0x2c);
      }
      do {
        if (iVar12 < 1) break;
        if ((char)puVar11[4] != '\0') {
          iVar12 = iVar12 + -1;
          *puVar11 = *puVar11 | 1;
          fVar28 = (float)((ulonglong)dVar27 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar11 + 2) = fVar28;
          }
          else {
            *(double *)(puVar11 + 2) = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = (double)CONCAT44(fVar28 + SUB84(dVar27,0),SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar27;
          }
        }
        iVar19 = iVar19 + -1;
        puVar11 = (ushort *)((int)puVar11 - iVar18);
      } while (2 < iVar19);
    }
  }
  uVar21 = (uint)*(ushort *)(*(int *)((int)puVar23 + -0x70) + 0x54);
  iVar12 = 0;
  *(uint *)((int)puVar23 + -0x10) =
       (uint)*(byte *)(uVar21 + *(int *)((int)DAT_8c025ff2 + *(int *)((int)puVar23 + -0x70)) + 6);
  uVar15 = uVar21;
  if (7 < uVar21) {
    uVar15 = 8;
  }
  if (uVar15 != 0) {
    *(uint *)((int)puVar23 + -0x14) = uVar21;
    iVar18 = (int)DAT_8c025ff6;
    do {
      puVar6 = PTR_FUN_8c026004;
      puVar11 = (ushort *)
                (DAT_8c025ff8 * iVar12 +
                *(int *)((int)DAT_8c025ffc +
                        *(int *)((int)DAT_8c025ffa + *(int *)((int)puVar23 + -0x70))));
      *(ushort **)((int)puVar23 + -0xc) = puVar11;
      if (((puVar11 != (ushort *)0x0) && ((*puVar11 & 1) != 0)) && ((puVar11[4] & 4) == 0)) {
        iVar10 = (*(code *)PTR_FUN_8c026004)();
        iVar19 = (*(code *)puVar6)(6);
        puVar11 = (ushort *)(DAT_8c026008 + (iVar10 * 0x40 + iVar19) * 0x10);
        uVar21 = (uint)*(byte *)(iVar12 + *(int *)((int)DAT_8c025ff2 +
                                                  *(int *)((int)puVar23 + -0x70)) + 6);
        *puVar11 = *puVar11 | 0x40;
        if ((uVar21 == 0) || (*(uint *)((int)puVar23 + -0x10) != uVar21)) {
          iVar10 = *(int *)((int)DAT_8c025ffe + *(int *)((int)puVar23 + -0x70));
          *(int *)((int)puVar23 + -8) = iVar10;
          puVar11[6] = *(short *)(iVar10 + iVar12 * 0x1e + 0x1a) +
                       *(short *)(iVar10 + DAT_8c026000 + iVar12 * 0x1e + 0x1a) +
                       *(short *)(iVar10 + iVar18 + iVar12 * 0x1e + 0x1a) + puVar11[6] + 1;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar15);
    uVar21 = *(uint *)((int)puVar23 + -0x14);
  }
  iVar12 = uVar21 + 1;
  if (iVar12 < 1) {
    iVar12 = 0;
  }
  if (iVar12 < 8) {
    iVar18 = (int)DAT_8c026122;
    do {
      puVar6 = PTR_FUN_8c026134;
      puVar11 = (ushort *)
                (DAT_8c026124 * iVar12 +
                *(int *)((int)DAT_8c026128 +
                        *(int *)((int)DAT_8c026126 + *(int *)((int)puVar23 + -0x70))));
      *(ushort **)((int)puVar23 + -0xc) = puVar11;
      if (((puVar11 != (ushort *)0x0) && ((*puVar11 & 1) != 0)) && ((puVar11[4] & 4) == 0)) {
        iVar10 = (*(code *)PTR_FUN_8c026134)(iVar18);
        iVar19 = (*(code *)puVar6)(6);
        puVar11 = (ushort *)(DAT_8c026138 + (iVar10 * 0x40 + iVar19) * 0x10);
        uVar15 = (uint)*(byte *)(iVar12 + *(int *)((int)DAT_8c02612a +
                                                  *(int *)((int)puVar23 + -0x70)) + 6);
        *puVar11 = *puVar11 | 0x40;
        if ((uVar15 == 0) || (*(uint *)((int)puVar23 + -0x10) != uVar15)) {
          iVar10 = *(int *)((int)DAT_8c02612c + *(int *)((int)puVar23 + -0x70));
          *(int *)((int)puVar23 + -8) = iVar10;
          puVar11[6] = *(short *)(iVar10 + iVar12 * 0x1e + 0x1a) +
                       *(short *)(iVar10 + DAT_8c02612e + iVar12 * 0x1e + 0x1a) +
                       *(short *)(iVar10 + DAT_8c026130 + iVar12 * 0x1e + 0x1a) + puVar11[6] + 1;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 8);
  }
  return;
}

