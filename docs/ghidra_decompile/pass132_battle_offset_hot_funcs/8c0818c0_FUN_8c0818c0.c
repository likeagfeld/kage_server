// entry: 8c0818c0
// name: FUN_8c0818c0
// signature: undefined FUN_8c0818c0(void)


void FUN_8c0818c0(double param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  double dVar20;
  undefined8 in_dr14;
  float fVar22;
  double dVar21;
  int iVar23;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  uVar13 = (undefined4)in_dr14;
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_24);
    puVar19 = &uStack_24;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = uVar13;
  }
  else {
    puVar19 = (undefined8 *)auStack_2c;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar19 + -4) = in_PR;
  iVar8 = (int)DAT_8c081a0e;
  *(undefined4 *)((int)puVar19 + iVar8 + 0x4c) = param_2;
  *(undefined4 *)((int)puVar19 + iVar8 + 0x50) = 1;
  pcVar11 = *(char **)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 4);
  if (*pcVar11 != '\0') {
    uRam8c081c64 = 0x62f3e300;
    uRam8c082520 = 0x56f1e044;
    return;
  }
  cVar1 = pcVar11[DAT_8c081a10];
  if (cVar1 == '\x02') {
    iVar16 = *(int *)((int)puVar19 + iVar8 + 0x4c);
    (*(code *)PTR_FUN_8c081b90)(iVar16 + 0x44);
    uVar13 = (undefined4)in_dr14;
    iVar5 = (*(code *)PTR_FUN_8c081b94)();
    iVar16 = *(int *)(iVar16 + 4);
    if (*(char *)(DAT_8c081b8c + iVar16) == '\0') {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(DAT_8c081c60,uVar13);
        *(undefined4 *)((int)puVar19 + iVar8 + 0x54) = DAT_8c081c60;
      }
      else {
        dVar21 = (double)CONCAT44(uRam8c081c64,DAT_8c081c60);
        *(double *)((int)puVar19 + iVar8 + 0x54) = dVar21;
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((undefined4)DAT_8c081b98,uVar13);
      *(undefined4 *)((int)puVar19 + iVar8 + 0x54) = (undefined4)DAT_8c081b98;
    }
    else {
      dVar21 = (double)CONCAT44(DAT_8c081b98._4_4_,(undefined4)DAT_8c081b98);
      *(double *)((int)puVar19 + iVar8 + 0x54) = dVar21;
    }
    if (*(char *)(DAT_8c081b8e + iVar16) == '\0') {
      *(undefined4 *)((int)puVar19 + iVar8 + 0x50) = 0;
      iVar17 = *(int *)((int)puVar19 + iVar8 + 0x4c);
      iVar16 = *(int *)(iVar17 + 0x24);
      iVar9 = *(int *)(iVar17 + 0x20);
      *(undefined4 *)((int)puVar19 + iVar8 + 4) = 3;
      *(undefined4 *)((int)puVar19 + iVar8 + -4) = 3;
      *(undefined4 *)((int)puVar19 + iVar8 + 0x58) = 0;
      iVar17 = *(int *)(iVar17 + 0x30);
      *(int *)((int)puVar19 + iVar8 + 8) = iVar16 + -4;
      *(int *)((int)puVar19 + iVar8) = iVar9 + -4;
      if (iVar5 == 0) goto LAB_8c081ca0;
    }
    else {
      *(undefined4 *)((int)puVar19 + iVar8 + 0x58) = 0;
      iVar16 = *(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x30);
      if (iVar5 == 0) goto LAB_8c081930;
    }
    iVar16 = 0;
    iVar17 = *(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x24);
    iVar9 = *(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x20);
    if (iVar5 == 1) {
      iVar17 = iVar17 + -1;
      iVar9 = iVar9 + -2;
      *(int *)((int)puVar19 + iVar8 + 0x5c) = iVar9;
      iVar17 = (int)(iVar17 + (uint)(iVar17 < 0)) >> 1;
      *(int *)((int)puVar19 + iVar8 + 0x60) = iVar17;
      if (0 < iVar17) {
        iVar17 = 0;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),DAT_8c081b98._4_4_);
        }
        do {
          iVar5 = iVar17 + 1;
          if (*(int *)((int)puVar19 + iVar8 + 0x50) == 0) {
            iVar18 = *(int *)((int)puVar19 + iVar8 + -4) + -1;
            if (iVar9 <= *(int *)((int)puVar19 + iVar8 + -4) + -1) {
              iVar18 = iVar9;
            }
            if (0 < iVar18) {
              iVar18 = iVar16;
              iVar6 = 1;
              iVar23 = *(int *)((int)puVar19 + iVar8 + -4) + -1;
              if (iVar9 <= *(int *)((int)puVar19 + iVar8 + -4) + -1) {
                iVar23 = iVar9;
              }
              do {
                iVar14 = iVar6 + 1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(param_1,0));
                }
                param_1 = dVar20;
                iVar16 = iVar18 + 1;
                (*(code *)PTR_FUN_8c081ba0)
                          (param_1,*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar18,iVar6,iVar5);
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar18 = iVar16;
                iVar6 = iVar14;
              } while (iVar14 <= iVar23);
            }
            iVar18 = *(int *)((int)puVar19 + iVar8 + -4);
            if (iVar18 < 2) {
              iVar18 = 1;
            }
            if (iVar18 <= iVar9) {
              *(undefined4 *)((int)puVar19 + iVar8 + 0x68) =
                   *(undefined4 *)((int)puVar19 + iVar8 + 4);
              *(undefined4 *)((int)puVar19 + iVar8 + 0x6c) =
                   *(undefined4 *)((int)puVar19 + iVar8 + 8);
              iVar6 = *(int *)((int)puVar19 + iVar8);
              do {
                if (((iVar6 < iVar18) || (iVar5 < *(int *)((int)puVar19 + iVar8 + 0x68))) ||
                   (*(int *)((int)puVar19 + iVar8 + 0x6c) < iVar5)) {
                  dVar20 = dVar21;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                  }
                  param_1 = dVar20;
                  (*(code *)PTR_FUN_8c082518)
                            (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,iVar18,iVar5);
                  iVar16 = iVar16 + 1;
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                              SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 <= iVar9);
            }
            uVar12 = *(uint *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x24);
          }
          else {
            iVar18 = iVar16;
            iVar6 = 1;
            if (0 < iVar9) {
              do {
                iVar23 = iVar6 + 1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                param_1 = dVar20;
                iVar16 = iVar18 + 1;
                (*(code *)PTR_FUN_8c082254)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar18,iVar6,iVar5);
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar18 = iVar16;
                iVar6 = iVar23;
              } while (iVar23 <= iVar9);
            }
            uVar12 = *(uint *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x24);
          }
          bVar10 = false;
          if ((int)uVar12 < 0) {
            uVar7 = ~(~uVar12 + 1 & 1) + 1;
          }
          else {
            uVar7 = uVar12 & 1;
          }
          if ((uVar7 != 0) && (iVar5 == *(int *)((int)puVar19 + iVar8 + 0x60))) {
            bVar10 = true;
          }
          if (!bVar10) {
            iVar18 = (uVar12 - iVar17) + -2;
            iVar17 = iVar9;
            if (*(int *)((int)puVar19 + iVar8 + 0x50) == 0) {
              iVar17 = *(int *)((int)puVar19 + iVar8 + -4);
              if (iVar17 < 2) {
                iVar17 = 1;
              }
              if (iVar17 <= iVar9) {
                *(undefined4 *)((int)puVar19 + iVar8 + 0x70) = *(undefined4 *)((int)puVar19 + iVar8)
                ;
                *(undefined4 *)((int)puVar19 + iVar8 + 0x74) =
                     *(undefined4 *)((int)puVar19 + iVar8 + 4);
                iVar6 = *(int *)((int)puVar19 + iVar8 + -4);
                *(undefined4 *)((int)puVar19 + iVar8 + 0x78) =
                     *(undefined4 *)((int)puVar19 + iVar8 + 8);
                *(int *)((int)puVar19 + (int)DAT_8c081c5a + iVar8 + -4) = iVar6;
                iVar17 = iVar9;
                if (iVar6 < 2) {
                  *(undefined4 *)((int)puVar19 + (int)DAT_8c081c5a + iVar8 + -4) = 1;
                }
                do {
                  if (((*(int *)((int)puVar19 + iVar8 + 0x70) < iVar17) ||
                      (iVar18 < *(int *)((int)puVar19 + iVar8 + 0x74))) ||
                     (*(int *)((int)puVar19 + iVar8 + 0x78) < iVar18)) {
                    dVar20 = dVar21;
                    if (in_FPSCR_SZ == '\0') {
                      dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                    }
                    param_1 = dVar20;
                    (*(code *)PTR_FUN_8c081c5c)
                              (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,iVar17,iVar18);
                    iVar16 = iVar16 + 1;
                    if (in_FPSCR_PR == '\0') {
                      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0)
                                                ,SUB84(dVar21,0));
                    }
                    else {
                      dVar21 = dVar21 + dVar21;
                    }
                  }
                  iVar17 = iVar17 + -1;
                } while (*(int *)((int)puVar19 + (int)DAT_8c081c5a + iVar8 + -4) <= iVar17);
              }
              iVar17 = *(int *)((int)puVar19 + iVar8 + -4) + -1;
              if (iVar9 <= *(int *)((int)puVar19 + iVar8 + -4) + -1) {
                iVar17 = iVar9;
              }
              while (0 < iVar17) {
                    /* WARNING: Read-only address (ram,0x8c081c64) is written */
                    /* WARNING: Read-only address (ram,0x8c082520) is written */
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                (*(code *)PTR_FUN_8c081c5c)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,iVar17,iVar18);
                param_1 = dVar20;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                  iVar16 = iVar16 + 1;
                  iVar17 = iVar17 + -1;
                }
                else {
                  dVar21 = dVar21 + dVar21;
                  iVar16 = iVar16 + 1;
                  iVar17 = iVar17 + -1;
                }
              }
            }
            else {
              while (0 < iVar17) {
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                (*(code *)PTR_FUN_8c0823bc)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,iVar17,iVar18);
                param_1 = dVar20;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                  iVar17 = iVar17 + -1;
                  iVar16 = iVar16 + 1;
                }
                else {
                  dVar21 = dVar21 + dVar21;
                  iVar17 = iVar17 + -1;
                  iVar16 = iVar16 + 1;
                }
              }
            }
          }
          iVar17 = iVar5;
        } while (iVar5 < *(int *)((int)puVar19 + iVar8 + 0x60));
        *(int *)((int)puVar19 + iVar8 + 0x58) = iVar16;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar19 + iVar8 + 0x54) = (int)((ulonglong)dVar21 >> 0x20);
        }
        else {
          *(double *)((int)puVar19 + iVar8 + 0x54) = dVar21;
        }
      }
    }
    else {
      iVar9 = iVar9 + -1;
      *(int *)((int)puVar19 + iVar8 + 0x5c) = (int)(iVar9 + (uint)(iVar9 < 0)) >> 1;
      *(int *)((int)puVar19 + iVar8 + 0x60) = iVar17 + -2;
      if (*(int *)((int)puVar19 + iVar8 + 0x50) == 0) {
        iVar16 = 0;
        if (0 < *(int *)((int)puVar19 + iVar8 + 0x5c)) {
          iVar9 = *(int *)((int)puVar19 + iVar8 + 0x58);
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar19 + iVar8 + 0x54),DAT_8c0820e8);
          }
          else {
            dVar21 = *(double *)((int)puVar19 + iVar8 + 0x54);
          }
          do {
            *(int *)((int)puVar19 + (int)DAT_8c0820de + iVar8 + -4) = iVar16 + 1;
            iVar5 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
            iVar17 = 1;
            if (*(int *)((int)puVar19 + iVar8 + 0x60) <= iVar5) {
              iVar5 = *(int *)((int)puVar19 + iVar8 + 0x60);
            }
            if (0 < iVar5) {
              if (*(int *)((int)puVar19 + (int)DAT_8c0820de + iVar8 + -4) <
                  *(int *)((int)puVar19 + iVar8 + -4)) {
                iVar5 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
                if (*(int *)((int)puVar19 + iVar8 + 0x60) <= iVar5) {
                  iVar5 = *(int *)((int)puVar19 + iVar8 + 0x60);
                }
                *(int *)((int)puVar19 + (int)DAT_8c0820e0 + iVar8 + -4) = iVar16;
                uVar13 = *(undefined4 *)((int)puVar19 + (int)DAT_8c0820de + iVar8 + -4);
                iVar16 = iVar9;
                do {
                  iVar18 = iVar17 + 1;
                  dVar20 = dVar21;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                  }
                  param_1 = dVar20;
                  iVar9 = iVar16 + 1;
                  (*(code *)PTR_FUN_8c0820ec)
                            (param_1,*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,uVar13,
                             iVar17);
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                              SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                  iVar16 = iVar9;
                  iVar17 = iVar18;
                } while (iVar18 <= iVar5);
                iVar16 = *(int *)((int)puVar19 + (int)DAT_8c0820e0 + iVar8 + -4);
              }
              else if (*(int *)((int)puVar19 + iVar8) <
                       *(int *)((int)puVar19 + (int)DAT_8c082724 + iVar8 + -4)) {
                iVar5 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
                if (*(int *)((int)puVar19 + iVar8 + 0x60) <= iVar5) {
                  iVar5 = *(int *)((int)puVar19 + iVar8 + 0x60);
                }
                *(int *)((int)puVar19 + (int)DAT_8c082726 + iVar8 + -4) = iVar16;
                uVar13 = *(undefined4 *)((int)puVar19 + (int)DAT_8c082724 + iVar8 + -4);
                iVar16 = iVar9;
                do {
                  iVar18 = iVar17 + 1;
                  dVar20 = dVar21;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                  }
                  param_1 = dVar20;
                  iVar9 = iVar16 + 1;
                  (*(code *)PTR_FUN_8c082730)
                            (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,uVar13,iVar17);
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                              SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                  iVar16 = iVar9;
                  iVar17 = iVar18;
                } while (iVar18 <= iVar5);
                iVar16 = *(int *)((int)puVar19 + (int)DAT_8c082726 + iVar8 + -4);
              }
              else {
                iVar5 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
                if (*(int *)((int)puVar19 + iVar8 + 0x60) <= iVar5) {
                  iVar5 = *(int *)((int)puVar19 + iVar8 + 0x60);
                }
                *(int *)((int)puVar19 + (int)DAT_8c082722 + iVar8 + -4) = iVar16;
                uVar13 = *(undefined4 *)((int)puVar19 + (int)DAT_8c082724 + iVar8 + -4);
                iVar16 = iVar9;
                do {
                  iVar18 = iVar17 + 1;
                  dVar20 = dVar21;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                  }
                  param_1 = dVar20;
                  iVar9 = iVar16 + 1;
                  (*(code *)PTR_FUN_8c082730)
                            (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,uVar13,iVar17);
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                              SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                  iVar16 = iVar9;
                  iVar17 = iVar18;
                } while (iVar18 <= iVar5);
                iVar16 = *(int *)((int)puVar19 + (int)DAT_8c082722 + iVar8 + -4);
              }
            }
            iVar17 = *(int *)((int)puVar19 + iVar8 + 4);
            if (iVar17 < 2) {
              iVar17 = 1;
            }
            if (iVar17 <= *(int *)((int)puVar19 + iVar8 + 0x60)) {
              if (*(int *)((int)puVar19 + (int)DAT_8c0820de + iVar8 + -4) <
                  *(int *)((int)puVar19 + iVar8 + -4)) {
                *(int *)((int)puVar19 + (int)DAT_8c0820e2 + iVar8 + -4) = iVar16;
                iVar5 = *(int *)((int)puVar19 + iVar8 + 0x60);
                iVar16 = iVar9;
                do {
                  iVar18 = iVar17 + 1;
                  iVar9 = iVar16 + 1;
                  fVar22 = (float)((ulonglong)dVar21 >> 0x20);
                  dVar20 = dVar21;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)CONCAT44(fVar22,SUB84(param_1,0));
                  }
                  param_1 = dVar20;
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44(fVar22 + SUB84(dVar21,0),SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                  (*(code *)PTR_FUN_8c0820ec)
                            (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,
                             *(undefined4 *)((int)puVar19 + (int)DAT_8c0820de + iVar8 + -4),iVar17);
                  iVar16 = iVar9;
                  iVar17 = iVar18;
                } while (iVar18 <= iVar5);
                iVar16 = *(int *)((int)puVar19 + (int)DAT_8c0820e2 + iVar8 + -4);
              }
              else if (*(int *)((int)puVar19 + iVar8) <
                       *(int *)((int)puVar19 + (int)DAT_8c082724 + iVar8 + -4)) {
                *(int *)((int)puVar19 + (int)DAT_8c08272a + iVar8 + -4) = iVar16;
                iVar5 = *(int *)((int)puVar19 + iVar8 + 0x60);
                iVar16 = iVar9;
                do {
                  iVar18 = iVar17 + 1;
                  iVar9 = iVar16 + 1;
                  fVar22 = (float)((ulonglong)dVar21 >> 0x20);
                  dVar20 = dVar21;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)CONCAT44(fVar22,SUB84(param_1,0));
                  }
                  param_1 = dVar20;
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44(fVar22 + SUB84(dVar21,0),SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                  (*(code *)PTR_FUN_8c082730)
                            (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,
                             *(undefined4 *)((int)puVar19 + (int)DAT_8c082724 + iVar8 + -4),iVar17);
                  iVar16 = iVar9;
                  iVar17 = iVar18;
                } while (iVar18 <= iVar5);
                iVar16 = *(int *)((int)puVar19 + (int)DAT_8c08272a + iVar8 + -4);
              }
              else {
                iVar18 = *(int *)((int)puVar19 + iVar8 + 8);
                *(int *)((int)puVar19 + (int)DAT_8c082728 + iVar8 + -4) = iVar16;
                iVar5 = *(int *)((int)puVar19 + iVar8 + 0x60);
                iVar16 = iVar9;
                do {
                  iVar9 = iVar16;
                  if (iVar18 < iVar17) {
                    fVar22 = (float)((ulonglong)dVar21 >> 0x20);
                    dVar20 = dVar21;
                    if (in_FPSCR_SZ == '\0') {
                      dVar20 = (double)CONCAT44(fVar22,SUB84(param_1,0));
                    }
                    param_1 = dVar20;
                    iVar9 = iVar16 + 1;
                    if (in_FPSCR_PR == '\0') {
                      dVar21 = (double)CONCAT44(fVar22 + SUB84(dVar21,0),SUB84(dVar21,0));
                    }
                    else {
                      dVar21 = dVar21 + dVar21;
                    }
                    (*(code *)PTR_FUN_8c082638)
                              (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,
                               *(undefined4 *)((int)puVar19 + (int)DAT_8c082632 + iVar8 + -4),iVar17
                              );
                  }
                  iVar17 = iVar17 + 1;
                  iVar16 = iVar9;
                } while (iVar17 <= iVar5);
                iVar16 = *(int *)((int)puVar19 + (int)DAT_8c082634 + iVar8 + -4);
              }
            }
            puVar4 = PTR_FUN_8c08285c;
            puVar3 = PTR_FUN_8c082250;
            bVar10 = false;
            uVar12 = *(uint *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x20);
            *(uint *)((int)puVar19 + (int)DAT_8c0820e4 + iVar8 + -4) = uVar12;
            if ((int)uVar12 < 0) {
              uVar7 = ~(~uVar12 + 1 & 1) + 1;
            }
            else {
              uVar7 = uVar12 & 1;
            }
            if ((uVar7 != 0) &&
               (*(int *)((int)puVar19 + (int)DAT_8c0820de + iVar8 + -4) ==
                *(int *)((int)puVar19 + iVar8 + 0x5c))) {
              bVar10 = true;
            }
            if (!bVar10) {
              iVar17 = *(int *)((int)puVar19 + iVar8 + 4);
              iVar16 = (uVar12 - iVar16) + -2;
              *(int *)((int)puVar19 + (int)DAT_8c0820e4 + iVar8 + -4) = iVar16;
              iVar5 = *(int *)((int)puVar19 + iVar8 + 0x60);
              if (iVar17 < 2) {
                iVar17 = 1;
              }
              if (iVar17 <= *(int *)((int)puVar19 + iVar8 + 0x60)) {
                if (iVar16 < *(int *)((int)puVar19 + iVar8 + -4)) {
                  iVar17 = *(int *)((int)puVar19 + iVar8 + 4);
                  if (iVar17 < 2) {
                    iVar17 = 1;
                  }
                  do {
                    uVar2 = DAT_8c082242;
                    iVar18 = iVar9 * 0x14;
                    iVar9 = iVar9 + 1;
                    puVar15 = (undefined2 *)
                              (*(int *)((int)DAT_8c082240 + *(int *)((int)puVar19 + iVar8 + 0x4c)) +
                              iVar18);
                    *puVar15 = 1;
                    *(byte *)(puVar15 + 1) =
                         (*(byte *)(puVar15 + 1) & (byte)uVar2 | 0x10) & (byte)DAT_8c082244 | 8;
                    (*(code *)puVar3)(*(undefined4 *)((int)puVar19 + (int)DAT_8c082246 + iVar8 + -4)
                                     );
                    (*(code *)puVar3)();
                    fVar22 = (float)((ulonglong)dVar21 >> 0x20);
                    if (in_FPSCR_SZ == '\0') {
                      *(float *)(puVar15 + 6) = fVar22;
                    }
                    else {
                      *(double *)(puVar15 + 6) = dVar21;
                    }
                    iVar6 = *(int *)((int)puVar19 + iVar8 + 0x4c);
                    iVar18 = (int)DAT_8c08224a;
                    *(undefined4 *)(puVar15 + 4) = 0;
                    iVar23 = *(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x20) * iVar5;
                    iVar5 = iVar5 + -1;
                    *(undefined2 **)(iVar23 * 4 + iVar16 * 4 + *(int *)(iVar18 + iVar6)) = puVar15;
                    if (in_FPSCR_PR == '\0') {
                      dVar21 = (double)CONCAT44(fVar22 + SUB84(dVar21,0),SUB84(dVar21,0));
                    }
                    else {
                      dVar21 = dVar21 + dVar21;
                    }
                  } while (iVar17 <= iVar5);
                }
                else if (*(int *)((int)puVar19 + iVar8) < iVar16) {
                  iVar17 = *(int *)((int)puVar19 + iVar8 + 4);
                  if (iVar17 < 2) {
                    iVar17 = 1;
                  }
                  do {
                    uVar2 = DAT_8c08284c;
                    iVar18 = iVar9 * 0x14;
                    iVar9 = iVar9 + 1;
                    puVar15 = (undefined2 *)
                              (*(int *)((int)DAT_8c08284a + *(int *)((int)puVar19 + iVar8 + 0x4c)) +
                              iVar18);
                    *puVar15 = 1;
                    *(byte *)(puVar15 + 1) =
                         (*(byte *)(puVar15 + 1) & (byte)uVar2 | 0x10) & (byte)DAT_8c08284e | 8;
                    (*(code *)puVar4)(*(undefined4 *)((int)puVar19 + (int)DAT_8c082850 + iVar8 + -4)
                                     );
                    (*(code *)puVar4)();
                    fVar22 = (float)((ulonglong)dVar21 >> 0x20);
                    if (in_FPSCR_SZ == '\0') {
                      *(float *)(puVar15 + 6) = fVar22;
                    }
                    else {
                      *(double *)(puVar15 + 6) = dVar21;
                    }
                    iVar6 = *(int *)((int)puVar19 + iVar8 + 0x4c);
                    iVar18 = (int)DAT_8c082854;
                    *(undefined4 *)(puVar15 + 4) = 0;
                    iVar23 = *(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x20) * iVar5;
                    iVar5 = iVar5 + -1;
                    *(undefined2 **)(iVar23 * 4 + iVar16 * 4 + *(int *)(iVar18 + iVar6)) = puVar15;
                    if (in_FPSCR_PR == '\0') {
                      dVar21 = (double)CONCAT44(fVar22 + SUB84(dVar21,0),SUB84(dVar21,0));
                    }
                    else {
                      dVar21 = dVar21 + dVar21;
                    }
                  } while (iVar17 <= iVar5);
                }
                else {
                  iVar17 = *(int *)((int)puVar19 + iVar8 + 4);
                  *(undefined4 *)((int)puVar19 + (int)DAT_8c08272c + iVar8 + -4) =
                       *(undefined4 *)((int)puVar19 + iVar8 + 8);
                  if (iVar17 < 2) {
                    iVar17 = 1;
                  }
                  do {
                    puVar3 = PTR_FUN_8c082514;
                    uVar2 = DAT_8c082506;
                    if (*(int *)((int)puVar19 + (int)DAT_8c082510 + iVar8 + -4) < iVar5) {
                      iVar18 = iVar9 * 0x14;
                      iVar9 = iVar9 + 1;
                      puVar15 = (undefined2 *)
                                (*(int *)((int)DAT_8c082504 + *(int *)((int)puVar19 + iVar8 + 0x4c))
                                + iVar18);
                      *puVar15 = 1;
                      *(byte *)(puVar15 + 1) =
                           (*(byte *)(puVar15 + 1) & (byte)uVar2 | 0x10) & (byte)DAT_8c082508 | 8;
                      (*(code *)puVar3)(*(undefined4 *)
                                         ((int)puVar19 + (int)DAT_8c08250a + iVar8 + -4));
                      (*(code *)puVar3)();
                      fVar22 = (float)((ulonglong)dVar21 >> 0x20);
                      if (in_FPSCR_SZ == '\0') {
                        *(float *)(puVar15 + 6) = fVar22;
                      }
                      else {
                        *(double *)(puVar15 + 6) = dVar21;
                      }
                      iVar6 = *(int *)((int)puVar19 + iVar8 + 0x4c);
                      iVar18 = (int)DAT_8c08250e;
                      if (in_FPSCR_PR == '\0') {
                        dVar21 = (double)CONCAT44(fVar22 + SUB84(dVar21,0),SUB84(dVar21,0));
                      }
                      else {
                        dVar21 = dVar21 + dVar21;
                      }
                      *(undefined4 *)(puVar15 + 4) = 0;
                      *(undefined2 **)
                       (*(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x20) * iVar5 * 4 +
                        iVar16 * 4 + *(int *)(iVar18 + iVar6)) = puVar15;
                    }
                    iVar5 = iVar5 + -1;
                  } while (iVar17 <= iVar5);
                }
              }
              puVar3 = PTR_FUN_8c082250;
              iVar16 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
              if (*(int *)((int)puVar19 + iVar8 + 0x60) <= iVar16) {
                iVar16 = *(int *)((int)puVar19 + iVar8 + 0x60);
              }
              if (0 < iVar16) {
                iVar17 = *(int *)((int)puVar19 + (int)DAT_8c082246 + iVar8 + -4);
                do {
                  uVar2 = DAT_8c082242;
                  iVar5 = iVar9 * 0x14;
                  iVar9 = iVar9 + 1;
                  puVar15 = (undefined2 *)
                            (*(int *)((int)DAT_8c082240 + *(int *)((int)puVar19 + iVar8 + 0x4c)) +
                            iVar5);
                  *puVar15 = 1;
                  *(byte *)(puVar15 + 1) =
                       (*(byte *)(puVar15 + 1) & (byte)uVar2 | 0x10) & (byte)DAT_8c082244 | 8;
                  (*(code *)puVar3)();
                  (*(code *)puVar3)();
                  fVar22 = (float)((ulonglong)dVar21 >> 0x20);
                  if (in_FPSCR_SZ == '\0') {
                    *(float *)(puVar15 + 6) = fVar22;
                  }
                  else {
                    *(double *)(puVar15 + 6) = dVar21;
                  }
                  iVar18 = *(int *)((int)puVar19 + iVar8 + 0x4c);
                  iVar5 = (int)DAT_8c08224a;
                  *(undefined4 *)(puVar15 + 4) = 0;
                  iVar6 = *(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x20) * iVar16;
                  iVar16 = iVar16 + -1;
                  *(undefined2 **)(iVar6 * 4 + iVar17 * 4 + *(int *)(iVar5 + iVar18)) = puVar15;
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44(fVar22 + SUB84(dVar21,0),SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                } while (0 < iVar16);
              }
            }
            iVar16 = *(int *)((int)puVar19 + (int)DAT_8c08224c + iVar8 + -4);
          } while (*(int *)((int)puVar19 + (int)DAT_8c08224c + iVar8 + -4) <
                   *(int *)((int)puVar19 + iVar8 + 0x5c));
        }
      }
      else {
        *(undefined4 *)((int)puVar19 + (int)DAT_8c0823aa + iVar8 + -4) = 0;
        if (0 < *(int *)((int)puVar19 + iVar8 + 0x5c)) {
          *(undefined4 *)((int)puVar19 + (int)DAT_8c0823ac + iVar8 + -4) = 1;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)(ulonglong)DAT_8c0823c0;
          }
          iVar16 = *(int *)((int)puVar19 + iVar8 + 0x4c);
          iVar9 = *(int *)((int)puVar19 + iVar8 + 0x58);
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)((int)puVar19 + iVar8 + 0x54),SUB84(dVar21,0));
          }
          else {
            dVar21 = *(double *)((int)puVar19 + iVar8 + 0x54);
          }
          do {
            iVar17 = iVar9;
            iVar5 = 1;
            if (0 < *(int *)((int)puVar19 + iVar8 + 0x60)) {
              do {
                iVar18 = iVar5 + 1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(param_1,0));
                }
                param_1 = dVar20;
                iVar9 = iVar17 + 1;
                (*(code *)PTR_FUN_8c0823bc)
                          (param_1,iVar16,iVar17,
                           *(undefined4 *)((int)puVar19 + (int)DAT_8c0823ac + iVar8 + -4),iVar5);
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar17 = iVar9;
                iVar5 = iVar18;
              } while (iVar18 <= *(int *)((int)puVar19 + iVar8 + 0x60));
            }
            puVar3 = PTR_FUN_8c0823c4;
            uVar12 = *(uint *)(iVar16 + 0x20);
            bVar10 = false;
            if ((int)uVar12 < 0) {
              uVar7 = ~(~uVar12 + 1 & 1) + 1;
            }
            else {
              uVar7 = uVar12 & 1;
            }
            if ((uVar7 != 0) &&
               (*(int *)((int)puVar19 + (int)DAT_8c0823ac + iVar8 + -4) ==
                *(int *)((int)puVar19 + iVar8 + 0x5c))) {
              bVar10 = true;
            }
            if (!bVar10) {
              iVar17 = *(int *)((int)puVar19 + iVar8 + 0x60);
              if (0 < iVar17) {
                *(uint *)((int)puVar19 + (int)DAT_8c0823ae + iVar8 + -4) =
                     ((uVar12 - *(int *)((int)puVar19 + (int)DAT_8c0823aa + iVar8 + -4)) + -2) * 4;
                do {
                  uVar2 = DAT_8c0823b2;
                  puVar15 = (undefined2 *)(*(int *)(DAT_8c0823b0 + iVar16) + iVar9 * 0x14);
                  *puVar15 = 1;
                  iVar9 = iVar9 + 1;
                  *(byte *)(puVar15 + 1) =
                       (*(byte *)(puVar15 + 1) & (byte)uVar2 | 0x10) & (byte)DAT_8c0823b4 | 8;
                  (*(code *)puVar3)();
                  (*(code *)puVar3)();
                  fVar22 = (float)((ulonglong)dVar21 >> 0x20);
                  if (in_FPSCR_SZ == '\0') {
                    *(float *)(puVar15 + 6) = fVar22;
                  }
                  else {
                    *(double *)(puVar15 + 6) = dVar21;
                  }
                  *(undefined4 *)(puVar15 + 4) = 0;
                  iVar5 = *(int *)(iVar16 + 0x20) * iVar17;
                  iVar17 = iVar17 + -1;
                  *(undefined2 **)
                   (iVar5 * 4 + *(int *)((int)puVar19 + (int)DAT_8c0823ae + iVar8 + -4) +
                   *(int *)(DAT_8c0823b8 + iVar16)) = puVar15;
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44(fVar22 + SUB84(dVar21,0),SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                } while (0 < iVar17);
              }
            }
            *(int *)((int)puVar19 + (int)DAT_8c0823aa + iVar8 + -4) =
                 *(int *)((int)puVar19 + (int)DAT_8c0823aa + iVar8 + -4) + 1;
            *(int *)((int)puVar19 + (int)DAT_8c0823ac + iVar8 + -4) =
                 *(int *)((int)puVar19 + (int)DAT_8c0823ac + iVar8 + -4) + 1;
          } while (*(int *)((int)puVar19 + (int)DAT_8c0823aa + iVar8 + -4) <
                   *(int *)((int)puVar19 + iVar8 + 0x5c));
        }
      }
    }
  }
  else {
    if (pcVar11[DAT_8c081a12] == '\0') {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(DAT_8c08251c,uVar13);
        *(undefined4 *)((int)puVar19 + iVar8 + 0x54) = DAT_8c08251c;
      }
      else {
        dVar21 = (double)CONCAT44(0x56f1e044,DAT_8c08251c);
        *(double *)((int)puVar19 + iVar8 + 0x54) = dVar21;
      }
    }
    else if (in_FPSCR_SZ == '\0') {
      dVar21 = (double)CONCAT44((undefined4)DAT_8c081a18,uVar13);
      *(undefined4 *)((int)puVar19 + iVar8 + 0x54) = (undefined4)DAT_8c081a18;
    }
    else {
      dVar21 = (double)CONCAT44(DAT_8c081a18._4_4_,(undefined4)DAT_8c081a18);
      *(double *)((int)puVar19 + iVar8 + 0x54) = dVar21;
    }
    if (cVar1 != '\0') {
      *(undefined4 *)((int)puVar19 + iVar8 + 0x58) = 0;
      iVar16 = *(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x30);
LAB_8c081930:
      iVar9 = 1;
      iVar17 = *(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x24);
      iVar18 = *(int *)(*(int *)((int)puVar19 + iVar8 + 0x4c) + 0x20) + -2;
      *(int *)((int)puVar19 + iVar8 + 0x5c) = iVar18;
      iVar17 = iVar17 + -2;
      *(int *)((int)puVar19 + iVar8 + 0x60) = iVar17;
      iVar5 = 1;
      if (iVar16 == 0) {
        return;
      }
      iVar6 = iVar9;
      iVar23 = 0;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),DAT_8c081a18._4_4_);
      }
      do {
        while (iVar6 <= iVar18) {
                    /* WARNING: Read-only address (ram,0x8c081c64) is written */
                    /* WARNING: Read-only address (ram,0x8c082520) is written */
          dVar20 = dVar21;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(param_1,0));
          }
          (*(code *)PTR_FUN_8c081a20)
                    (dVar20,*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar23,iVar6,iVar5);
          iVar16 = iVar16 + -1;
          param_1 = dVar20;
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                      SUB84(dVar21,0));
            iVar6 = iVar6 + 1;
            iVar23 = iVar23 + 1;
          }
          else {
            dVar21 = dVar21 + dVar21;
            iVar6 = iVar6 + 1;
            iVar23 = iVar23 + 1;
          }
        }
                    /* WARNING: Read-only address (ram,0x8c081c64) is written */
                    /* WARNING: Read-only address (ram,0x8c082520) is written */
        iVar6 = iVar5;
        if (iVar5 < iVar17) {
          while (iVar6 = iVar6 + 1, iVar6 <= iVar17) {
                    /* WARNING: Read-only address (ram,0x8c081c64) is written */
                    /* WARNING: Read-only address (ram,0x8c082520) is written */
            dVar20 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
            }
            (*(code *)PTR_FUN_8c081a20)
                      (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar23,iVar18,iVar6);
            iVar16 = iVar16 + -1;
            param_1 = dVar20;
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                        SUB84(dVar21,0));
              iVar23 = iVar23 + 1;
            }
            else {
              dVar21 = dVar21 + dVar21;
              iVar23 = iVar23 + 1;
            }
          }
        }
        *(int *)((int)puVar19 + iVar8 + 100) = iVar5 + 1;
        iVar6 = iVar18;
        if (iVar5 < iVar17) {
          while (iVar6 = iVar6 + -1, iVar9 <= iVar6) {
                    /* WARNING: Read-only address (ram,0x8c081c64) is written */
                    /* WARNING: Read-only address (ram,0x8c082520) is written */
            dVar20 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
            }
            (*(code *)PTR_FUN_8c081a20)
                      (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar23,iVar6,iVar17);
            iVar16 = iVar16 + -1;
            param_1 = dVar20;
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                        SUB84(dVar21,0));
              iVar23 = iVar23 + 1;
            }
            else {
              dVar21 = dVar21 + dVar21;
              iVar23 = iVar23 + 1;
            }
          }
        }
        iVar18 = iVar18 + -1;
        iVar6 = iVar17;
        if (iVar5 < iVar17) {
          while (iVar6 = iVar6 + -1, iVar5 < iVar6) {
                    /* WARNING: Read-only address (ram,0x8c081c64) is written */
                    /* WARNING: Read-only address (ram,0x8c082520) is written */
            dVar20 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
            }
            (*(code *)PTR_FUN_8c081a20)
                      (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar23,iVar9,iVar6);
            iVar16 = iVar16 + -1;
            param_1 = dVar20;
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                        SUB84(dVar21,0));
              iVar23 = iVar23 + 1;
            }
            else {
              dVar21 = dVar21 + dVar21;
              iVar23 = iVar23 + 1;
            }
          }
        }
        iVar9 = iVar9 + 1;
        iVar5 = *(int *)((int)puVar19 + iVar8 + 100);
        iVar17 = iVar17 + -1;
        iVar6 = iVar9;
      } while (iVar16 != 0);
      *(int *)((int)puVar19 + iVar8 + 0x58) = iVar23;
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar19 + iVar8 + 0x54) = (int)((ulonglong)dVar21 >> 0x20);
        return;
      }
      *(double *)((int)puVar19 + iVar8 + 0x54) = dVar21;
      return;
    }
    *(undefined4 *)((int)puVar19 + iVar8 + 0x50) = 0;
    iVar17 = *(int *)((int)puVar19 + iVar8 + 0x4c);
    iVar16 = *(int *)(iVar17 + 0x24);
    iVar9 = *(int *)(iVar17 + 0x20);
    *(undefined4 *)((int)puVar19 + iVar8 + 4) = 3;
    *(undefined4 *)((int)puVar19 + iVar8 + -4) = 3;
    *(undefined4 *)((int)puVar19 + iVar8 + 0x58) = 0;
    iVar17 = *(int *)(iVar17 + 0x30);
    *(int *)((int)puVar19 + iVar8 + 8) = iVar16 + -4;
    *(int *)((int)puVar19 + iVar8) = iVar9 + -4;
LAB_8c081ca0:
    iVar5 = 0;
    *(int *)((int)puVar19 + iVar8 + 0x5c) = iVar9 + -2;
    *(int *)((int)puVar19 + iVar8 + 0x2c) = iVar16 + -2;
    *(int *)((int)puVar19 + iVar8 + 0x60) = iVar16 + -2;
    *(undefined4 *)((int)puVar19 + iVar8 + 0x10) = 1;
    *(int *)((int)puVar19 + iVar8 + 0x40) = iVar9 + -2;
    iVar16 = 1;
    if (iVar17 != 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),DAT_8c081df0);
      }
      do {
        iVar9 = *(int *)((int)puVar19 + iVar8 + -4) + -1;
        if (*(int *)((int)puVar19 + iVar8 + 0x40) <= iVar9) {
          iVar9 = *(int *)((int)puVar19 + iVar8 + 0x40);
        }
        if (*(int *)((int)puVar19 + iVar8 + 0x10) <= iVar9) {
          iVar6 = *(int *)((int)puVar19 + iVar8 + -4) + -1;
          iVar9 = iVar5;
          iVar18 = *(int *)((int)puVar19 + iVar8 + 0x10);
          if (*(int *)((int)puVar19 + iVar8 + 0x40) <= iVar6) {
            iVar6 = *(int *)((int)puVar19 + iVar8 + 0x40);
          }
          do {
            iVar23 = iVar18 + 1;
            dVar20 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(param_1,0));
            }
            param_1 = dVar20;
            iVar5 = iVar9 + 1;
            (*(code *)PTR_FUN_8c081df4)
                      (param_1,*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar9,iVar18,iVar16);
            iVar17 = iVar17 + -1;
            if (in_FPSCR_PR == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 + dVar21;
            }
            iVar9 = iVar5;
            iVar18 = iVar23;
          } while (iVar23 <= iVar6);
        }
        iVar9 = *(int *)((int)puVar19 + iVar8 + -4);
        if (iVar9 <= *(int *)((int)puVar19 + iVar8 + 0x10)) {
          iVar9 = *(int *)((int)puVar19 + iVar8 + 0x10);
        }
        if (iVar9 <= *(int *)((int)puVar19 + iVar8 + 0x40)) {
          iVar23 = *(int *)((int)puVar19 + iVar8);
          iVar6 = *(int *)((int)puVar19 + iVar8 + 4);
          iVar18 = *(int *)((int)puVar19 + iVar8 + 8);
          do {
            if (((iVar23 < iVar9) || (iVar16 < iVar6)) || (iVar18 < iVar16)) {
              dVar20 = dVar21;
              if (in_FPSCR_SZ == '\0') {
                dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
              }
              param_1 = dVar20;
              (*(code *)PTR_FUN_8c082518)
                        (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar5,iVar9,iVar16);
              iVar5 = iVar5 + 1;
              if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                          SUB84(dVar21,0));
              }
              else {
                dVar21 = dVar21 + dVar21;
              }
              iVar17 = iVar17 + -1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 <= *(int *)((int)puVar19 + iVar8 + 0x40));
        }
        if (iVar16 < *(int *)((int)puVar19 + iVar8 + 0x2c)) {
          iVar18 = iVar16 + 1;
          iVar9 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
          if (*(int *)((int)puVar19 + iVar8 + 0x2c) <= iVar9) {
            iVar9 = *(int *)((int)puVar19 + iVar8 + 0x2c);
          }
          if (iVar18 <= iVar9) {
            if (*(int *)((int)puVar19 + iVar8 + 0x40) < *(int *)((int)puVar19 + iVar8 + -4)) {
              iVar9 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
              if (*(int *)((int)puVar19 + iVar8 + 0x2c) <= iVar9) {
                iVar9 = *(int *)((int)puVar19 + iVar8 + 0x2c);
              }
              *(int *)((int)puVar19 + iVar8 + 0x3c) = iVar16;
              uVar13 = *(undefined4 *)((int)puVar19 + iVar8 + 0x40);
              iVar16 = iVar5;
              iVar6 = iVar18;
              do {
                iVar23 = iVar6 + 1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                param_1 = dVar20;
                iVar5 = iVar16 + 1;
                (*(code *)PTR_FUN_8c081df4)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,uVar13,iVar6);
                iVar17 = iVar17 + -1;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar16 = iVar5;
                iVar6 = iVar23;
              } while (iVar23 <= iVar9);
              iVar16 = *(int *)((int)puVar19 + iVar8 + 0x3c);
            }
            else if (*(int *)((int)puVar19 + iVar8) < *(int *)((int)puVar19 + iVar8 + 0x40)) {
              iVar9 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
              if (*(int *)((int)puVar19 + iVar8 + 0x2c) <= iVar9) {
                iVar9 = *(int *)((int)puVar19 + iVar8 + 0x2c);
              }
              *(int *)((int)puVar19 + iVar8 + 0x44) = iVar16;
              uVar13 = *(undefined4 *)((int)puVar19 + iVar8 + 0x40);
              iVar16 = iVar5;
              iVar6 = iVar18;
              do {
                iVar23 = iVar6 + 1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                param_1 = dVar20;
                iVar5 = iVar16 + 1;
                (*(code *)PTR_FUN_8c082638)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,uVar13,iVar6);
                iVar17 = iVar17 + -1;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar16 = iVar5;
                iVar6 = iVar23;
              } while (iVar23 <= iVar9);
              iVar16 = *(int *)((int)puVar19 + iVar8 + 0x44);
            }
            else {
              iVar9 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
              if (*(int *)((int)puVar19 + iVar8 + 0x2c) <= iVar9) {
                iVar9 = *(int *)((int)puVar19 + iVar8 + 0x2c);
              }
              *(int *)((int)puVar19 + iVar8 + 0x48) = iVar16;
              uVar13 = *(undefined4 *)((int)puVar19 + iVar8 + 0x40);
              iVar16 = iVar5;
              iVar6 = iVar18;
              do {
                iVar23 = iVar6 + 1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                param_1 = dVar20;
                iVar5 = iVar16 + 1;
                (*(code *)PTR_FUN_8c082518)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,uVar13,iVar6);
                iVar17 = iVar17 + -1;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar16 = iVar5;
                iVar6 = iVar23;
              } while (iVar23 <= iVar9);
              iVar16 = *(int *)((int)puVar19 + iVar8 + 0x48);
            }
          }
          iVar9 = *(int *)((int)puVar19 + iVar8 + 4);
          if (*(int *)((int)puVar19 + iVar8 + 4) <= iVar18) {
            iVar9 = iVar18;
          }
          if (iVar9 <= *(int *)((int)puVar19 + iVar8 + 0x2c)) {
            if (*(int *)((int)puVar19 + iVar8 + 0x40) < *(int *)((int)puVar19 + iVar8 + -4)) {
              *(int *)((int)puVar19 + iVar8 + 0x30) = iVar16;
              iVar16 = *(int *)((int)puVar19 + iVar8 + 0x2c);
              do {
                iVar18 = iVar9 + 1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                param_1 = dVar20;
                (*(code *)PTR_FUN_8c081df4)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar5,
                           *(undefined4 *)((int)puVar19 + iVar8 + 0x40),iVar9);
                iVar5 = iVar5 + 1;
                iVar17 = iVar17 + -1;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar9 = iVar18;
              } while (iVar18 <= iVar16);
              iVar16 = *(int *)((int)puVar19 + iVar8 + 0x30);
            }
            else if (*(int *)((int)puVar19 + iVar8) < *(int *)((int)puVar19 + iVar8 + 0x40)) {
              *(int *)((int)puVar19 + iVar8 + 0x34) = iVar16;
              iVar16 = *(int *)((int)puVar19 + iVar8 + 0x2c);
              do {
                iVar18 = iVar9 + 1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                param_1 = dVar20;
                (*(code *)PTR_FUN_8c082638)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar5,
                           *(undefined4 *)((int)puVar19 + iVar8 + 0x40),iVar9);
                iVar5 = iVar5 + 1;
                iVar17 = iVar17 + -1;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar9 = iVar18;
              } while (iVar18 <= iVar16);
              iVar16 = *(int *)((int)puVar19 + iVar8 + 0x34);
            }
            else {
              *(int *)((int)puVar19 + iVar8 + 0x38) = iVar16;
              iVar18 = *(int *)((int)puVar19 + iVar8 + 0x2c);
              iVar6 = *(int *)((int)puVar19 + iVar8 + 8);
              iVar16 = iVar5;
              do {
                iVar5 = iVar16;
                if (iVar6 < iVar9) {
                  dVar20 = dVar21;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                  }
                  param_1 = dVar20;
                  iVar5 = iVar16 + 1;
                  (*(code *)PTR_FUN_8c082518)
                            (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar16,
                             *(undefined4 *)((int)puVar19 + iVar8 + 0x40),iVar9);
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                              SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                  iVar17 = iVar17 + -1;
                }
                iVar9 = iVar9 + 1;
                iVar16 = iVar5;
              } while (iVar9 <= iVar18);
              iVar16 = *(int *)((int)puVar19 + iVar8 + 0x38);
            }
          }
        }
        iVar9 = *(int *)((int)puVar19 + iVar8 + 0x2c);
        *(int *)((int)puVar19 + (int)DAT_8c081dec + iVar8 + -4) = iVar16 + 1;
        if (iVar16 < iVar9) {
          iVar9 = *(int *)((int)puVar19 + iVar8 + -4);
          iVar18 = *(int *)((int)puVar19 + iVar8 + 0x40) + -1;
          if (iVar9 <= *(int *)((int)puVar19 + iVar8 + 0x10)) {
            iVar9 = *(int *)((int)puVar19 + iVar8 + 0x10);
          }
          if (iVar9 <= iVar18) {
            iVar23 = *(int *)((int)puVar19 + iVar8 + -4);
            *(undefined4 *)((int)puVar19 + (int)DAT_8c081f26 + iVar8 + -4) =
                 *(undefined4 *)((int)puVar19 + iVar8 + 4);
            iVar9 = *(int *)((int)puVar19 + iVar8 + 0x10);
            iVar6 = *(int *)((int)puVar19 + iVar8);
            *(undefined4 *)((int)puVar19 + (int)DAT_8c081f28 + iVar8 + -4) =
                 *(undefined4 *)((int)puVar19 + iVar8 + 8);
            if (iVar23 <= iVar9) {
              iVar23 = *(int *)((int)puVar19 + iVar8 + 0x10);
            }
            *(int *)((int)puVar19 + iVar8 + 0x28) = iVar18;
            iVar9 = *(int *)((int)puVar19 + iVar8 + 0x2c);
            do {
              if (((iVar6 < iVar18) ||
                  (iVar9 < *(int *)((int)puVar19 + (int)DAT_8c081f26 + iVar8 + -4))) ||
                 (*(int *)((int)puVar19 + (int)DAT_8c081f28 + iVar8 + -4) < iVar9)) {
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                param_1 = dVar20;
                (*(code *)PTR_FUN_8c081f2c)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar5,iVar18,iVar9);
                iVar5 = iVar5 + 1;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar17 = iVar17 + -1;
              }
              iVar18 = iVar18 + -1;
            } while (iVar23 <= iVar18);
            iVar18 = *(int *)((int)puVar19 + iVar8 + 0x28);
          }
          iVar9 = *(int *)((int)puVar19 + iVar8 + -4) + -1;
          if (iVar18 <= *(int *)((int)puVar19 + iVar8 + -4) + -1) {
            iVar9 = iVar18;
          }
          if (*(int *)((int)puVar19 + iVar8 + 0x10) <= iVar9) {
            do {
              dVar20 = dVar21;
              if (in_FPSCR_SZ == '\0') {
                dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
              }
              param_1 = dVar20;
              (*(code *)PTR_FUN_8c081f2c)
                        (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar5,iVar9,
                         *(undefined4 *)((int)puVar19 + iVar8 + 0x2c));
              iVar9 = iVar9 + -1;
              iVar5 = iVar5 + 1;
              if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                          SUB84(dVar21,0));
              }
              else {
                dVar21 = dVar21 + dVar21;
              }
              iVar17 = iVar17 + -1;
            } while (*(int *)((int)puVar19 + iVar8 + 0x10) <= iVar9);
          }
        }
        iVar9 = *(int *)((int)puVar19 + iVar8 + 0x40) + -1;
        if (iVar16 < *(int *)((int)puVar19 + iVar8 + 0x2c)) {
          iVar6 = *(int *)((int)puVar19 + iVar8 + 0x2c) + -1;
          iVar18 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
          if (*(int *)((int)puVar19 + iVar8 + 4) + -1 <= iVar16) {
            iVar18 = iVar16;
          }
          if (iVar18 < iVar6) {
            if (*(int *)((int)puVar19 + iVar8 + 0x10) < *(int *)((int)puVar19 + iVar8 + -4)) {
              iVar18 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
              if (*(int *)((int)puVar19 + iVar8 + 4) + -1 <= iVar16) {
                iVar18 = iVar16;
              }
              *(int *)((int)puVar19 + iVar8 + 0x14) = iVar6;
              uVar13 = *(undefined4 *)((int)puVar19 + iVar8 + 0x10);
              iVar23 = iVar5;
              do {
                iVar14 = iVar6 + -1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                param_1 = dVar20;
                iVar5 = iVar23 + 1;
                (*(code *)PTR_FUN_8c081f2c)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar23,uVar13,iVar6);
                iVar17 = iVar17 + -1;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar23 = iVar5;
                iVar6 = iVar14;
              } while (iVar18 < iVar14);
              iVar6 = *(int *)((int)puVar19 + iVar8 + 0x14);
            }
            else if (*(int *)((int)puVar19 + iVar8) < *(int *)((int)puVar19 + iVar8 + 0x10)) {
              iVar18 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
              if (*(int *)((int)puVar19 + iVar8 + 4) + -1 <= iVar16) {
                iVar18 = iVar16;
              }
              *(int *)((int)puVar19 + iVar8 + 0x18) = iVar6;
              uVar13 = *(undefined4 *)((int)puVar19 + iVar8 + 0x10);
              iVar23 = iVar5;
              do {
                iVar14 = iVar6 + -1;
                dVar20 = dVar21;
                if (in_FPSCR_SZ == '\0') {
                  dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                }
                param_1 = dVar20;
                iVar5 = iVar23 + 1;
                (*(code *)PTR_FUN_8c082638)
                          (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar23,uVar13,iVar6);
                iVar17 = iVar17 + -1;
                if (in_FPSCR_PR == '\0') {
                  dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                            SUB84(dVar21,0));
                }
                else {
                  dVar21 = dVar21 + dVar21;
                }
                iVar23 = iVar5;
                iVar6 = iVar14;
              } while (iVar18 < iVar14);
              iVar6 = *(int *)((int)puVar19 + iVar8 + 0x18);
            }
            else {
              *(undefined4 *)((int)puVar19 + iVar8 + 0x24) =
                   *(undefined4 *)((int)puVar19 + iVar8 + 8);
              iVar18 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
              if (*(int *)((int)puVar19 + iVar8 + 4) + -1 <= iVar16) {
                iVar18 = iVar16;
              }
              *(int *)((int)puVar19 + iVar8 + 0x1c) = iVar6;
              *(int *)((int)puVar19 + iVar8 + 0x20) = iVar9;
              uVar13 = *(undefined4 *)((int)puVar19 + iVar8 + 0x10);
              iVar9 = *(int *)((int)puVar19 + iVar8 + 0x24);
              do {
                if (iVar9 < iVar6) {
                  dVar20 = dVar21;
                  if (in_FPSCR_SZ == '\0') {
                    dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
                  }
                  param_1 = dVar20;
                  (*(code *)PTR_FUN_8c081f88)
                            (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar5,uVar13,iVar6);
                  iVar5 = iVar5 + 1;
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                              SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar21;
                  }
                  iVar17 = iVar17 + -1;
                }
                iVar6 = iVar6 + -1;
              } while (iVar18 < iVar6);
              iVar9 = *(int *)((int)puVar19 + iVar8 + 0x20);
              iVar6 = *(int *)((int)puVar19 + iVar8 + 0x1c);
            }
          }
          iVar18 = *(int *)((int)puVar19 + iVar8 + 4) + -1;
          if (iVar6 <= *(int *)((int)puVar19 + iVar8 + 4) + -1) {
            iVar18 = iVar6;
          }
          if (iVar16 < iVar18) {
            *(int *)((int)puVar19 + iVar8 + 0xc) = iVar9;
            uVar13 = *(undefined4 *)((int)puVar19 + iVar8 + 0x10);
            iVar9 = iVar5;
            do {
              iVar6 = iVar18 + -1;
              dVar20 = dVar21;
              if (in_FPSCR_SZ == '\0') {
                dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
              }
              param_1 = dVar20;
              iVar5 = iVar9 + 1;
              (*(code *)PTR_FUN_8c081f2c)
                        (*(undefined4 *)((int)puVar19 + iVar8 + 0x4c),iVar9,uVar13,iVar18);
              iVar17 = iVar17 + -1;
              if (in_FPSCR_PR == '\0') {
                dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),
                                          SUB84(dVar21,0));
              }
              else {
                dVar21 = dVar21 + dVar21;
              }
              iVar9 = iVar5;
              iVar18 = iVar6;
            } while (iVar16 < iVar6);
            iVar9 = *(int *)((int)puVar19 + iVar8 + 0xc);
          }
        }
        *(int *)((int)puVar19 + iVar8 + 0x10) = *(int *)((int)puVar19 + iVar8 + 0x10) + 1;
        iVar16 = *(int *)((int)puVar19 + (int)DAT_8c081f84 + iVar8 + -4);
        *(int *)((int)puVar19 + iVar8 + 0x40) = iVar9;
        *(int *)((int)puVar19 + iVar8 + 0x2c) = *(int *)((int)puVar19 + iVar8 + 0x2c) + -1;
      } while (iVar17 != 0);
      *(int *)((int)puVar19 + iVar8 + 0x58) = iVar5;
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar19 + iVar8 + 0x54) = (int)((ulonglong)dVar21 >> 0x20);
      }
      else {
        *(double *)((int)puVar19 + iVar8 + 0x54) = dVar21;
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x8c081c64) is written */
                    /* WARNING: Read-only address (ram,0x8c082520) is written */
  return;
}

