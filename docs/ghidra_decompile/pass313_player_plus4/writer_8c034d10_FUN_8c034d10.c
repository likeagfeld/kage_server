// entry: 8c034d10
// name: FUN_8c034d10


/* WARNING: Removing unreachable block (ram,0x8c034f48) */
/* WARNING: Removing unreachable block (ram,0x8c0355c4) */
/* WARNING: Removing unreachable block (ram,0x8c035388) */
/* WARNING: Removing unreachable block (ram,0x8c035336) */
/* WARNING: Removing unreachable block (ram,0x8c035488) */
/* WARNING: Removing unreachable block (ram,0x8c034e0c) */
/* WARNING: Removing unreachable block (ram,0x8c0350b4) */
/* WARNING: Removing unreachable block (ram,0x8c0354ee) */

void FUN_8c034d10(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint in_fr3;
  uint uVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  bool bVar22;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_68;
  
  puVar2 = PTR_DAT_8c034eb4;
  uVar11 = *(uint *)(DAT_8c034e88 + param_3);
  bVar1 = false;
  local_68 = *(uint *)(DAT_8c034e8a + param_3);
  if (*(int *)(DAT_8c034e8c + param_3) == 0) goto LAB_8c0351b4;
  *(undefined4 *)(DAT_8c034e8e + param_3) = 0;
  uVar3 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(DAT_8c034e90 + param_3) = 1;
  uVar8 = *(undefined4 *)puVar2;
  *(undefined4 *)(DAT_8c034e92 + param_3) = 0;
  *(undefined4 *)(DAT_8c034e94 + param_3) = 1;
  iVar4 = (int)DAT_8c034e98;
  puVar10 = (undefined4 *)(param_3 + DAT_8c034e96);
  iVar6 = (int)DAT_8c034e9a;
  puVar10[1] = uVar3;
  uVar3 = *(undefined4 *)(puVar2 + 8);
  iVar9 = *(int *)(iVar4 + param_3);
  iVar4 = (int)DAT_8c034e9c;
  *puVar10 = uVar8;
  puVar10[2] = uVar3;
  *(undefined2 *)(param_3 + DAT_8c034e9e) =
       *(undefined2 *)(*(int *)(iVar4 + iVar9) + iVar6 * (uint)*(ushort *)(param_3 + 0x54) + 2);
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x18),param_2);
  }
  else {
    dVar18 = *(double *)(iVar9 + 0x18);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c034ea0 + param_3) = (int)((ulonglong)dVar18 >> 0x20);
  }
  else {
    *(double *)(DAT_8c034ea0 + param_3) = dVar18;
  }
  *(undefined4 *)(DAT_8c034ea2 + param_3) = 1;
  *(undefined4 *)(DAT_8c034ea4 + param_3) = 0;
  *(undefined4 *)(DAT_8c034ea6 + param_3) = 0;
  iVar4 = *(int *)(DAT_8c034ea8 + param_3);
  if (iVar4 == 0) {
    if (((int)uVar11 < 0) || (*(int *)(DAT_8c035464 + param_3) <= (int)uVar11)) {
      bVar22 = false;
    }
    else if (((int)local_68 < 0) || (*(int *)(DAT_8c035466 + param_3) <= (int)local_68)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if ((bVar22) &&
       (iVar6 = (*(code *)PTR_FUN_8c035478)(*(undefined4 *)(DAT_8c035468 + param_3),uVar11,local_68)
       , iVar4 = DAT_8c03547c, iVar6 != 0)) {
      dVar15 = (double)(ulonglong)in_fr3;
      iVar6 = DAT_8c03547c + (local_68 * 0x40 + uVar11) * 0x10;
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)(iVar6 + 4),param_1);
      }
      else {
        dVar16 = *(double *)(iVar6 + 4);
      }
      fVar21 = (float)((ulonglong)dVar16 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar22 = fVar21 == 0.0;
      }
      else {
        bVar22 = dVar16 == dVar15;
      }
      if ((bVar22) || (iVar6 = *(int *)(DAT_8c03546a + param_3), iVar6 < 1)) {
        bVar22 = false;
      }
      else {
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44((float)iVar6,SUB84(dVar18,0));
        }
        else {
          dVar18 = (double)iVar6;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                    *(undefined4 *)(DAT_8c03546c + param_3));
          dVar15 = (double)CONCAT44(DAT_8c035480,in_fr3);
        }
        else {
          dVar15 = (double)CONCAT44(PTR___bfswu_8c035484,DAT_8c035480);
        }
        if (in_FPSCR_PR == '\0') {
          fVar20 = (float)((ulonglong)dVar18 >> 0x20) + (float)((ulonglong)dVar15 >> 0x20);
          fVar17 = SUB84(dVar18,0) * fVar20;
          dVar18 = (double)CONCAT44(fVar20,fVar17);
          bVar22 = fVar17 < fVar21;
        }
        else {
          dVar18 = (dVar18 + dVar15) * (dVar18 + dVar15);
          bVar22 = dVar18 < dVar16;
        }
        bVar22 = (bool)(bVar22 ^ 1);
      }
      uVar14 = SUB84(dVar15,0);
      if (!bVar22) {
        iVar6 = 0;
        if ((*(uint *)(DAT_8c03546e + param_3) & 1) == 0) {
          if ((*(uint *)(DAT_8c03546e + param_3) & 2) != 0) {
            iVar6 = 1;
          }
        }
        else {
          iVar6 = -1;
        }
        iVar9 = (int)DAT_8c03546a;
        iVar12 = (int)DAT_8c035472;
        *(undefined2 *)(param_3 + DAT_8c035470 + *(int *)(iVar9 + param_3) * 2) = 0;
        puVar2 = PTR___bfswu_8c035484;
        iVar12 = param_3 + iVar12;
        iVar9 = *(int *)(iVar9 + param_3);
        (*(code *)PTR___bfswu_8c035484)(uVar11 & 0xffff,iVar12 + iVar9 * 2,6,0,iVar12);
        uVar3 = SUB84(dVar16,0);
        (*(code *)puVar2)(local_68 & 0xffff,(int)DAT_8c035474,iVar12 + iVar9 * 2);
        *(int *)(DAT_8c03546a + param_3) = iVar9 + 1;
        uVar11 = uVar11 + iVar6;
        if (((int)uVar11 < 0) || (*(int *)(DAT_8c035464 + param_3) <= (int)uVar11)) {
          bVar22 = false;
        }
        else if (((int)local_68 < 0) || (*(int *)(DAT_8c035466 + param_3) <= (int)local_68)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        if ((bVar22) &&
           (iVar6 = (*(code *)PTR_FUN_8c035478)
                              (*(undefined4 *)(DAT_8c035468 + param_3),uVar11,local_68,uVar11,
                               iVar9 + 1), puVar2 = PTR___bfswu_8c03563c, iVar6 != 0)) {
          dVar15 = (double)(ulonglong)uVar14;
          iVar6 = iVar4 + (local_68 * 0x40 + uVar11) * 0x10;
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)(iVar6 + 4),uVar3);
          }
          else {
            dVar16 = *(double *)(iVar6 + 4);
          }
          fVar21 = (float)((ulonglong)dVar16 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar22 = fVar21 == 0.0;
          }
          else {
            bVar22 = dVar16 == dVar15;
          }
          if ((bVar22) || (iVar6 = *(int *)(DAT_8c035624 + param_3), iVar6 < 1)) {
            bVar22 = false;
          }
          else {
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44((float)iVar6,SUB84(dVar18,0));
            }
            else {
              dVar18 = (double)iVar6;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                        *(undefined4 *)(DAT_8c035626 + param_3));
              dVar15 = (double)CONCAT44(DAT_8c035638,uVar14);
            }
            else {
              dVar15 = (double)CONCAT44(PTR___bfswu_8c03563c,DAT_8c035638);
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = (float)((ulonglong)dVar18 >> 0x20) + (float)((ulonglong)dVar15 >> 0x20);
              fVar17 = SUB84(dVar18,0) * fVar20;
              dVar18 = (double)CONCAT44(fVar20,fVar17);
              bVar22 = fVar17 < fVar21;
            }
            else {
              dVar18 = (dVar18 + dVar15) * (dVar18 + dVar15);
              bVar22 = dVar18 < dVar16;
            }
            bVar22 = (bool)(bVar22 ^ 1);
          }
          uVar14 = SUB84(dVar15,0);
          if (!bVar22) {
            iVar12 = 0;
            iVar6 = param_3 + DAT_8c035628;
            iVar9 = param_3 + DAT_8c03562a;
            if ((*(uint *)(DAT_8c03562c + param_3) & 4) == 0) {
              if ((*(uint *)(DAT_8c03562c + param_3) & 8) != 0) {
                iVar12 = 1;
              }
            }
            else {
              iVar12 = -1;
            }
            iVar13 = (int)DAT_8c035624;
            *(undefined2 *)(iVar6 + *(int *)(iVar13 + param_3) * 2) = 0;
            iVar13 = *(int *)(iVar13 + param_3);
            (*(code *)puVar2)(uVar11 & 0xffff,iVar9 + iVar13 * 2,6,uVar11,0);
            uVar3 = SUB84(dVar16,0);
            (*(code *)puVar2)(local_68 & 0xffff,(int)DAT_8c03562e);
            *(int *)(DAT_8c035624 + param_3) = iVar13 + 1;
            local_68 = local_68 + iVar12;
            if (((int)uVar11 < 0) || (*(int *)(DAT_8c035630 + param_3) <= (int)uVar11)) {
              bVar22 = false;
            }
            else if (((int)local_68 < 0) || (*(int *)(DAT_8c035632 + param_3) <= (int)local_68)) {
              bVar22 = false;
            }
            else {
              bVar22 = true;
            }
            if ((bVar22) &&
               (iVar12 = (*(code *)PTR_FUN_8c035640)
                                   (*(undefined4 *)(DAT_8c035634 + param_3),uVar11,local_68,
                                    iVar13 + 1), iVar12 != 0)) {
              dVar15 = (double)(ulonglong)uVar14;
              iVar4 = iVar4 + (local_68 * 0x40 + uVar11) * 0x10;
              if (in_FPSCR_SZ == '\0') {
                dVar16 = (double)CONCAT44(*(undefined4 *)(iVar4 + 4),uVar3);
              }
              else {
                dVar16 = *(double *)(iVar4 + 4);
              }
              fVar21 = (float)((ulonglong)dVar16 >> 0x20);
              if (in_FPSCR_PR == '\0') {
                bVar22 = fVar21 == 0.0;
              }
              else {
                bVar22 = dVar16 == dVar15;
              }
              if ((bVar22) || (iVar12 = *(int *)(DAT_8c035624 + param_3), iVar12 < 1)) {
                bVar22 = false;
              }
              else {
                if (in_FPSCR_PR == '\0') {
                  dVar18 = (double)CONCAT44((float)iVar12,SUB84(dVar18,0));
                }
                else {
                  dVar18 = (double)iVar12;
                }
                if (in_FPSCR_SZ == '\0') {
                  dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                            *(undefined4 *)(DAT_8c035626 + param_3));
                  dVar15 = (double)CONCAT44(DAT_8c035638,uVar14);
                }
                else {
                  dVar15 = (double)CONCAT44(PTR___bfswu_8c03563c,DAT_8c035638);
                }
                if (in_FPSCR_PR == '\0') {
                  fVar20 = (float)((ulonglong)dVar18 >> 0x20) + (float)((ulonglong)dVar15 >> 0x20);
                  fVar17 = SUB84(dVar18,0) * fVar20;
                  dVar18 = (double)CONCAT44(fVar20,fVar17);
                  bVar22 = fVar17 < fVar21;
                }
                else {
                  dVar18 = (dVar18 + dVar15) * (dVar18 + dVar15);
                  bVar22 = dVar18 < dVar16;
                }
                bVar22 = (bool)(bVar22 ^ 1);
              }
              uVar3 = SUB84(dVar15,0);
              uVar8 = SUB84(dVar18,0);
              if (!bVar22) {
                    /* WARNING: Read-only address (ram,0x8c03506c) is written */
                    /* WARNING: Read-only address (ram,0x8c0357e8) is written */
                iVar12 = (int)DAT_8c035624;
                puVar5 = (undefined2 *)(iVar6 + *(int *)(iVar12 + param_3) * 2);
                *puVar5 = 0;
                iVar6 = *(int *)(iVar12 + param_3);
                (*(code *)puVar2)(uVar11 & 0xffff,iVar9 + iVar6 * 2,6,iVar4,iVar6,puVar5);
                (*(code *)puVar2)(local_68 & 0xffff,(int)DAT_8c0357d6,iVar9 + iVar6 * 2);
                bVar1 = true;
                iVar4 = (*(code *)PTR__rand_8c0357e0)();
                if (in_FPSCR_PR == '\0') {
                  dVar18 = (double)CONCAT44((float)iVar4,uVar8);
                }
                else {
                  dVar18 = (double)iVar4;
                }
                if (in_FPSCR_SZ == '\0') {
                  dVar15 = (double)CONCAT44(DAT_8c0357e4,uVar3);
                }
                else {
                  dVar15 = (double)CONCAT44(uRam8c0357e8,DAT_8c0357e4);
                }
                if (in_FPSCR_PR == '\0') {
                  dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) /
                                            (float)((ulonglong)dVar15 >> 0x20),SUB84(dVar18,0));
                }
                else {
                  dVar18 = dVar18 / dVar15;
                }
                dVar15 = (double)CONCAT44(0x3f800000,SUB84(dVar15,0));
                if (in_FPSCR_PR == '\0') {
                  fVar21 = (float)((ulonglong)dVar18 >> 0x20) * 2.0;
                  dVar18 = (double)CONCAT44(fVar21,SUB84(dVar18,0));
                  iVar4 = (int)fVar21;
                }
                else {
                  dVar18 = dVar18 * (dVar15 + dVar15);
                  iVar4 = (int)dVar18;
                }
                *(int *)(DAT_8c0357d8 + param_3) = iVar4;
                iVar4 = uVar11 - 2;
                if ((iVar4 < 0) || (*(int *)(DAT_8c0357da + param_3) <= iVar4)) {
                  bVar22 = false;
                }
                else if (((int)local_68 < 0) || (*(int *)(DAT_8c0357dc + param_3) <= (int)local_68))
                {
                  bVar22 = false;
                }
                else {
                  bVar22 = true;
                }
                if ((((bVar22) &&
                     (iVar6 = (*(code *)PTR_FUN_8c035950)
                                        (*(undefined4 *)(DAT_8c03594a + param_3),uVar11 - 1,local_68
                                        ), iVar6 != 0)) &&
                    (iVar6 = (*(code *)PTR_FUN_8c035950)
                                       (*(undefined4 *)(DAT_8c03594a + param_3),iVar4,local_68),
                    iVar6 != 0)) &&
                   (iVar4 = (*(code *)PTR_FUN_8c035954)(param_3,iVar4,local_68), iVar4 != 0)) {
                  *(undefined4 *)(DAT_8c03594c + param_3) = 1;
                }
                else {
                  iVar4 = uVar11 + 2;
                  if ((iVar4 < 0) || (*(int *)(DAT_8c0357da + param_3) <= iVar4)) {
                    bVar22 = false;
                  }
                  else if (((int)local_68 < 0) ||
                          (*(int *)(DAT_8c0357dc + param_3) <= (int)local_68)) {
                    bVar22 = false;
                  }
                  else {
                    bVar22 = true;
                  }
                  if ((((bVar22) &&
                       (iVar6 = (*(code *)PTR_FUN_8c035950)
                                          (*(undefined4 *)(DAT_8c03594a + param_3),uVar11 + 1,
                                           local_68), iVar6 != 0)) &&
                      (iVar6 = (*(code *)PTR_FUN_8c035950)
                                         (*(undefined4 *)(DAT_8c03594a + param_3),iVar4,local_68),
                      iVar6 != 0)) &&
                     (iVar4 = (*(code *)PTR_FUN_8c035954)(param_3,iVar4,local_68), iVar4 != 0)) {
                    *(undefined4 *)(DAT_8c03594c + param_3) = 2;
                  }
                  else {
                    iVar4 = local_68 - 2;
                    if (((int)uVar11 < 0) || (*(int *)(DAT_8c0357da + param_3) <= (int)uVar11)) {
                      bVar22 = false;
                    }
                    else if ((iVar4 < 0) || (*(int *)(DAT_8c0357dc + param_3) <= iVar4)) {
                      bVar22 = false;
                    }
                    else {
                      bVar22 = true;
                    }
                    if ((((bVar22) &&
                         (iVar6 = (*(code *)PTR_FUN_8c035950)
                                            (*(undefined4 *)(DAT_8c03594a + param_3),uVar11,
                                             local_68 - 1), iVar6 != 0)) &&
                        (iVar6 = (*(code *)PTR_FUN_8c035950)
                                           (*(undefined4 *)(DAT_8c03594a + param_3),uVar11,iVar4),
                        iVar6 != 0)) &&
                       (iVar4 = (*(code *)PTR_FUN_8c035954)(param_3,uVar11,iVar4), iVar4 != 0)) {
                      *(undefined4 *)(DAT_8c03594c + param_3) = 4;
                    }
                    else {
                      iVar4 = local_68 + 2;
                      if (((int)uVar11 < 0) || (*(int *)(DAT_8c0357da + param_3) <= (int)uVar11)) {
                        bVar22 = false;
                      }
                      else if ((iVar4 < 0) || (*(int *)(DAT_8c0357dc + param_3) <= iVar4)) {
                        bVar22 = false;
                      }
                      else {
                        bVar22 = true;
                      }
                      if ((((bVar22) &&
                           (iVar6 = (*(code *)PTR_FUN_8c035950)
                                              (*(undefined4 *)(DAT_8c03594a + param_3),uVar11,
                                               local_68 + 1), iVar6 != 0)) &&
                          (iVar6 = (*(code *)PTR_FUN_8c035950)
                                             (*(undefined4 *)(DAT_8c03594a + param_3),uVar11,iVar4),
                          iVar6 != 0)) &&
                         (iVar4 = (*(code *)PTR_FUN_8c035954)(param_3,uVar11,iVar4), iVar4 != 0)) {
                        *(undefined4 *)(DAT_8c03594c + param_3) = 8;
                      }
                      else {
                        bVar1 = false;
                      }
                    }
                  }
                }
                *(int *)(DAT_8c035948 + param_3) = *(int *)(DAT_8c035948 + param_3) + 1;
              }
            }
          }
        }
      }
    }
  }
  else if (iVar4 == 1) {
LAB_8c035018:
    if (((((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(DAT_8c035052 + param_3))) &&
         (-1 < (int)local_68)) &&
        (((int)local_68 < *(int *)(DAT_8c03517c + param_3) &&
         (iVar4 = (*(code *)PTR_FUN_8c035190)
                            (*(undefined4 *)(DAT_8c03517e + param_3),uVar11,local_68), iVar4 != 0)))
        ) && (iVar4 = (*(code *)PTR_FUN_8c035194)(param_3,uVar11,local_68), iVar4 != 0)) {
      iVar4 = DAT_8c035198 + (local_68 * 0x40 + uVar11) * 0x10;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)(iVar4 + 4),param_1);
      }
      else {
        dVar15 = *(double *)(iVar4 + 4);
      }
      fVar21 = (float)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar22 = fVar21 == 0.0;
      }
      else {
        bVar22 = dVar15 == (double)(ulonglong)in_fr3;
      }
      if ((bVar22) || (iVar4 = *(int *)(DAT_8c035180 + param_3), iVar4 < 1)) {
LAB_8c0350f0:
        iVar6 = (int)DAT_8c035186;
        *(undefined2 *)(param_3 + DAT_8c035184 + *(int *)(DAT_8c035180 + param_3) * 2) = 5;
        puVar2 = PTR___bfswu_8c0351a0;
        iVar6 = param_3 + iVar6;
        iVar4 = *(int *)(DAT_8c035180 + param_3);
        (*(code *)PTR___bfswu_8c0351a0)(iVar6 + iVar4 * 2,6,uVar11 & 0xffff,iVar6);
        (*(code *)puVar2)(local_68 & 0xffff,iVar6 + iVar4 * 2);
        *(int *)(DAT_8c03518a + param_3) = *(int *)(DAT_8c03518a + param_3) + 1;
        *(int *)(DAT_8c03518c + param_3) = iVar4;
        *(undefined4 *)(DAT_8c035180 + param_3) = 0;
        return;
      }
      if (in_FPSCR_PR == '\0') {
        dVar18 = (double)CONCAT44((float)iVar4,SUB84(dVar18,0));
      }
      else {
        dVar18 = (double)iVar4;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                  *(undefined4 *)(DAT_8c035182 + param_3));
        dVar16 = (double)CONCAT44(DAT_8c03519c,in_fr3);
      }
      else {
        dVar16 = (double)CONCAT44(PTR___bfswu_8c0351a0,DAT_8c03519c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar18 >> 0x20) + (float)((ulonglong)dVar16 >> 0x20);
        fVar17 = SUB84(dVar18,0) * fVar20;
        dVar18 = (double)CONCAT44(fVar20,fVar17);
        bVar22 = fVar17 < fVar21;
      }
      else {
        dVar18 = (dVar18 + dVar16) * (dVar18 + dVar16);
        bVar22 = dVar18 < dVar15;
      }
      if (!(bool)(bVar22 ^ 1)) goto LAB_8c0350f0;
    }
  }
  else {
    if ((iVar4 != 2) && (iVar4 != 3)) {
      if (iVar4 != 4) goto LAB_8c0351a4;
      *(undefined4 *)(DAT_8c034e8c + param_3) = 0;
    }
    iVar4 = *(int *)(DAT_8c034eaa + param_3);
    if (iVar4 == 1) {
      iVar4 = -1;
      iVar6 = 0;
    }
    else if (iVar4 == 2) {
      iVar4 = 1;
      iVar6 = 0;
    }
    else if (iVar4 == 4) {
      iVar4 = 0;
      iVar6 = -1;
    }
    else if (iVar4 == 8) {
      iVar4 = 0;
      iVar6 = 1;
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
    }
    dVar15 = (double)(ulonglong)in_fr3;
    iVar9 = DAT_8c034eb8 + (local_68 * 0x40 + uVar11) * 0x10;
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(*(undefined4 *)(iVar9 + 4),param_1);
    }
    else {
      dVar16 = *(double *)(iVar9 + 4);
    }
    fVar21 = (float)((ulonglong)dVar16 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar21 == 0.0;
    }
    else {
      bVar22 = dVar16 == dVar15;
    }
    if ((bVar22) || (iVar9 = *(int *)(DAT_8c034ea4 + param_3), iVar9 < 1)) {
      bVar22 = false;
    }
    else {
      if (in_FPSCR_PR == '\0') {
        dVar18 = (double)CONCAT44((float)iVar9,SUB84(dVar18,0));
      }
      else {
        dVar18 = (double)iVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                  *(undefined4 *)(DAT_8c034eac + param_3));
        dVar15 = (double)CONCAT44(DAT_8c034ebc,in_fr3);
      }
      else {
        dVar15 = (double)CONCAT44(PTR___bfswu_8c034ec0,DAT_8c034ebc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = (float)((ulonglong)dVar18 >> 0x20) + (float)((ulonglong)dVar15 >> 0x20);
        fVar17 = SUB84(dVar18,0) * fVar20;
        dVar18 = (double)CONCAT44(fVar20,fVar17);
        bVar22 = fVar17 < fVar21;
      }
      else {
        dVar18 = (dVar18 + dVar15) * (dVar18 + dVar15);
        bVar22 = dVar18 < dVar16;
      }
      bVar22 = (bool)(bVar22 ^ 1);
    }
    uVar14 = SUB84(dVar15,0);
    if (!bVar22) {
      iVar9 = (int)DAT_8c034ea4;
      iVar13 = (int)DAT_8c034eae;
      iVar12 = (int)DAT_8c034eb0;
      *(undefined2 *)(param_3 + iVar13 + *(int *)(iVar9 + param_3) * 2) = 0;
      puVar2 = PTR___bfswu_8c034ec0;
      iVar9 = *(int *)(iVar9 + param_3);
      iVar12 = param_3 + iVar12;
      (*(code *)PTR___bfswu_8c034ec0)(uVar11 & 0xffff,iVar12 + iVar9 * 2,6);
      uVar3 = SUB84(dVar16,0);
      (*(code *)puVar2)(local_68 & 0xffff,iVar12 + iVar9 * 2);
      uVar11 = uVar11 + iVar4;
      *(int *)(DAT_8c035050 + param_3) = iVar9 + 1;
      local_68 = local_68 + iVar6;
      if ((((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(DAT_8c035052 + param_3))) &&
          (-1 < (int)local_68)) &&
         (((int)local_68 < *(int *)(DAT_8c035054 + param_3) &&
          (iVar9 = (*(code *)PTR_FUN_8c035060)
                             (*(undefined4 *)(DAT_8c035056 + param_3),uVar11,local_68), iVar9 != 0))
         )) {
        dVar15 = (double)(ulonglong)uVar14;
        iVar9 = DAT_8c035064 + (local_68 * 0x40 + uVar11) * 0x10;
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)(iVar9 + 4),uVar3);
        }
        else {
          dVar16 = *(double *)(iVar9 + 4);
        }
        fVar21 = (float)((ulonglong)dVar16 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar22 = fVar21 == 0.0;
        }
        else {
          bVar22 = dVar16 == dVar15;
        }
        if ((!bVar22) && (iVar9 = *(int *)(DAT_8c035050 + param_3), 0 < iVar9)) {
          if (in_FPSCR_PR == '\0') {
            dVar18 = (double)CONCAT44((float)iVar9,SUB84(dVar18,0));
          }
          else {
            dVar18 = (double)iVar9;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                      *(undefined4 *)(DAT_8c035058 + param_3));
            dVar15 = (double)CONCAT44(DAT_8c035068,uVar14);
          }
          else {
            dVar15 = (double)CONCAT44(uRam8c03506c,DAT_8c035068);
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = (float)((ulonglong)dVar18 >> 0x20) + (float)((ulonglong)dVar15 >> 0x20);
            fVar17 = SUB84(dVar18,0) * fVar20;
            dVar18 = (double)CONCAT44(fVar20,fVar17);
            bVar22 = fVar17 < fVar21;
          }
          else {
            dVar18 = (dVar18 + dVar15) * (dVar18 + dVar15);
            bVar22 = dVar18 < dVar16;
          }
          if ((bool)(bVar22 ^ 1)) goto LAB_8c0351a4;
        }
        in_fr3 = SUB84(dVar15,0);
        iVar9 = (int)DAT_8c035050;
        *(undefined2 *)(param_3 + iVar13 + *(int *)(iVar9 + param_3) * 2) = 0;
        iVar9 = *(int *)(iVar9 + param_3);
        (*(code *)puVar2)(uVar11 & 0xffff,iVar12 + iVar9 * 2,6);
        param_1 = SUB84(dVar16,0);
        (*(code *)puVar2)(local_68 & 0xffff);
        *(int *)(DAT_8c035050 + param_3) = iVar9 + 1;
        uVar11 = uVar11 + iVar4;
        local_68 = local_68 + iVar6;
        if (*(int *)(DAT_8c03505a + param_3) == 1) {
          iVar4 = *(int *)(DAT_8c03505c + param_3);
          uVar3 = 0;
          if (iVar4 == 4) {
            uVar3 = 1;
          }
          else if (iVar4 == 2) {
            uVar3 = 4;
          }
          if (iVar4 == 8) {
            uVar3 = 2;
          }
          if (iVar4 == 1) {
            uVar3 = 8;
          }
          *(undefined4 *)(DAT_8c03505c + param_3) = uVar3;
        }
        else {
          iVar4 = *(int *)(DAT_8c0359f4 + param_3);
          uVar3 = 0;
          if (iVar4 == 4) {
            uVar3 = 2;
          }
          if (iVar4 == 2) {
            uVar3 = 8;
          }
          if (iVar4 == 8) {
            uVar3 = 1;
          }
          if (iVar4 == 1) {
            uVar3 = 4;
          }
          *(undefined4 *)(DAT_8c0359f4 + param_3) = uVar3;
        }
        goto LAB_8c035018;
      }
    }
  }
LAB_8c0351a4:
  param_2 = SUB84(dVar18,0);
  *(undefined4 *)(DAT_8c0352a0 + param_3) = *(undefined4 *)(DAT_8c03529e + param_3);
  *(undefined4 *)(DAT_8c03529e + param_3) = 0;
LAB_8c0351b4:
  puVar2 = PTR_DAT_8c0352c0;
  if (!bVar1) {
    *(undefined4 *)(DAT_8c0352a2 + param_3) = 0;
    iVar6 = 0;
    iVar13 = 8;
    iVar4 = (int)DAT_8c0352a6;
    *(undefined4 *)(DAT_8c0352a4 + param_3) = 0;
    puVar10 = (undefined4 *)(param_3 + iVar4);
    uVar3 = *(undefined4 *)puVar2;
    *(undefined4 *)(DAT_8c0352a8 + param_3) = 1;
    iVar4 = (int)DAT_8c03529e;
    *puVar10 = uVar3;
    *(undefined4 *)(iVar4 + param_3) = 0;
    uVar3 = *(undefined4 *)(puVar2 + 8);
    *(undefined4 *)(DAT_8c0352a0 + param_3) = 0;
    uVar8 = *(undefined4 *)(puVar2 + 4);
    *(undefined4 *)(DAT_8c0352aa + param_3) = 0;
    iVar4 = (int)DAT_8c0352a2;
    puVar10[2] = uVar3;
    *(undefined4 *)(iVar4 + param_3) = 0;
    iVar4 = (int)DAT_8c0352ac;
    puVar10[1] = uVar8;
    iVar9 = 0;
    iVar12 = (int)DAT_8c0352b0;
    do {
      puVar7 = (ushort *)(*(int *)((int)DAT_8c0352ae + *(int *)(iVar4 + param_3)) + iVar12 * iVar9);
      if (((puVar7 != (ushort *)0x0) && ((*puVar7 & 1) != 0)) &&
         (((puVar7[4] & 4) == 0 &&
          (*(char *)(*(int *)(DAT_8c0352b2 + param_3) + 0xe + iVar9) == '\x02')))) {
        iVar6 = iVar6 + 1;
      }
      iVar13 = iVar13 + -1;
      iVar9 = iVar9 + 1;
    } while (iVar13 != 0);
    *(undefined4 *)(DAT_8c0352b4 + param_3) = *(undefined4 *)(PTR_DAT_8c0352c4 + iVar6 * 4);
    (*(code *)PTR_FUN_8c0352c8)
              (param_3,*(undefined4 *)(DAT_8c0352b6 + param_3),
               *(undefined4 *)(DAT_8c0352b8 + param_3),*(undefined4 *)(DAT_8c0352ba + param_3));
    puVar2 = PTR_DAT_8c0352cc;
    if (*(int *)(DAT_8c0352aa + param_3) != 0) {
      uVar3 = *(undefined4 *)(PTR_DAT_8c0352cc + 4);
      *(undefined4 *)(DAT_8c0352a4 + param_3) = 1;
      iVar4 = (int)DAT_8c0352ac;
      uVar8 = *(undefined4 *)puVar2;
      puVar10[1] = uVar3;
      uVar3 = *(undefined4 *)(puVar2 + 8);
      iVar6 = *(int *)(iVar4 + param_3);
      iVar4 = (int)DAT_8c0352ae;
      *puVar10 = uVar8;
      puVar10[2] = uVar3;
      *(undefined2 *)(param_3 + DAT_8c0352bc) =
           *(undefined2 *)(*(int *)(iVar4 + iVar6) + iVar12 * (uint)*(ushort *)(param_3 + 0x54) + 2)
      ;
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)(iVar6 + 0x18),param_2);
      }
      else {
        uVar19 = *(undefined8 *)(iVar6 + 0x18);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c0352be + param_3) = (int)((ulonglong)uVar19 >> 0x20);
      }
      else {
        *(undefined8 *)(DAT_8c0352be + param_3) = uVar19;
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x8c03506c) is written */
                    /* WARNING: Read-only address (ram,0x8c0357e8) is written */
  return;
}

