// entry: 8c07dd36
// name: FUN_8c07dd36


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c07dd36(double param_1,double param_2,double param_3,int param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 uVar10;
  int iVar11;
  code *pcVar12;
  undefined1 *puVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  undefined8 in_dr12;
  double dVar19;
  double dVar20;
  double in_xd8;
  double in_xd14;
  bool bVar21;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr12;
    puVar13 = auStack_2c;
  }
  else {
    puVar13 = auStack_3c;
    uStack_24 = in_dr12;
  }
  *(undefined4 *)(puVar13 + -4) = in_PR;
  iVar6 = (int)DAT_8c07dea8;
  puVar9 = *(ushort **)(DAT_8c07deaa + param_4);
  *(int *)(puVar13 + iVar6 + 0x20) = param_4;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(DAT_8c07debc,(int)in_dr12);
    uVar2 = DAT_8c07deb8;
  }
  else {
    dVar19 = (double)CONCAT44(DAT_8c07dec0,DAT_8c07debc);
    uVar2 = DAT_8c07debc;
  }
  *(int *)(puVar13 + iVar6 + 0x24) = param_4 + DAT_8c07deac;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),DAT_8c07dec0);
  }
  iVar8 = (int)DAT_8c07deae;
  dVar20 = (double)((ulonglong)uVar2 << 0x20);
  do {
    if ((*puVar9 & 1) != 0) {
      bVar5 = *(byte *)((int)puVar9 + 9) & 0x7f;
      if (bVar5 == 1) {
        if (in_FPSCR_SZ == '\0') {
          param_3 = (double)CONCAT44(*(undefined4 *)(puVar9 + 6),SUB84(param_3,0));
          fVar15 = *(float *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x1c);
        }
        else {
          param_3 = *(double *)(puVar9 + 6);
          fVar15 = (float)((ulonglong)*(undefined8 *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x1c) >>
                          0x20);
        }
        fVar18 = (float)((ulonglong)param_3 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar18 = fVar15 * (float)((ulonglong)dVar19 >> 0x20) + fVar18;
          param_3 = (double)CONCAT44(fVar18,SUB84(param_3,0));
          bVar21 = fVar18 < SUB84(dVar19,0);
        }
        else {
          bVar21 = param_3 < dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar9 + 6) = fVar18;
        }
        else {
          *(double *)(puVar9 + 6) = param_3;
        }
        puVar1 = PTR_FUN_8c07e2f0;
        if (!bVar21) {
          iVar3 = (*(code *)PTR_FUN_8c07e2f0)();
          iVar4 = (*(code *)puVar1)();
          *(undefined4 *)
           ((*(int *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x20) * iVar3 + iVar4) * 4 +
           *(int *)((int)DAT_8c07e2e6 + *(int *)(puVar13 + iVar6 + 0x20))) = 0;
          *puVar9 = *puVar9 & 0xfffe;
          if (((int)*(char *)((int)puVar9 + 9) & 0x80U) != 0) {
            iVar4 = *(int *)(puVar13 + iVar6 + 0x20);
            iVar3 = *(int *)(DAT_8c07e2ea + iVar4) +
                    ((int)(char)puVar9[4] & (int)DAT_8c07e2e8) * 0x74;
            *(ushort *)(iVar3 + 2) = puVar9[1];
            *(undefined1 *)(iVar3 + 8) = 2;
            puVar1 = PTR_FUN_8c07e2f4;
            if (in_FPSCR_SZ == '\0') {
              *(int *)(iVar3 + 0x18) = SUB84(dVar20,0);
            }
            else {
              *(double *)(iVar3 + 0x18) = in_xd14;
            }
            (*(code *)puVar1)(iVar4);
            **(uint **)(puVar13 + iVar6 + 0x24) = **(uint **)(puVar13 + iVar6 + 0x24) | 4;
          }
        }
      }
      else {
        fVar15 = SUB84(dVar20,0);
        if (bVar5 == 3) {
          if (in_FPSCR_SZ == '\0') {
            param_3 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x1c),
                                       *(undefined4 *)(puVar9 + 6));
          }
          else {
            in_xd8 = *(double *)(puVar9 + 6);
            param_3 = *(double *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar17 = (float)((ulonglong)param_3 >> 0x20);
            fVar18 = SUB84(param_3,0) - fVar17;
            param_3 = (double)CONCAT44(fVar17,fVar18);
            bVar21 = fVar15 < fVar18;
          }
          else {
            param_3 = param_3 - param_3;
            fVar18 = SUB84(param_3,0);
            bVar21 = dVar20 < param_3;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar9 + 6) = fVar18;
          }
          else {
            *(double *)(puVar9 + 6) = in_xd8;
          }
          if (!bVar21) {
            *(byte *)((int)puVar9 + 9) = *(byte *)((int)puVar9 + 9) & (byte)DAT_8c07e2ec | 4;
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar9 + 6) = fVar15;
            }
            else {
              *(double *)(puVar9 + 6) = in_xd14;
            }
          }
        }
        else if (bVar5 == 4) {
          if (in_FPSCR_SZ == '\0') {
            param_2 = (double)CONCAT44(*(undefined4 *)(puVar9 + 6),SUB84(param_2,0));
            dVar16 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x1c),
                                      SUB84(param_3,0));
          }
          else {
            param_2 = *(double *)(puVar9 + 6);
            dVar16 = *(double *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x1c);
          }
          iVar3 = 0;
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) +
                                       (float)((ulonglong)dVar16 >> 0x20),SUB84(param_2,0));
          }
          else {
            param_2 = param_2 + dVar16;
          }
          uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)_DAT_8c07dec4,SUB84(param_1,0));
            *(undefined4 *)(puVar9 + 6) = uVar10;
            dVar16 = (double)CONCAT44(DAT_8c07dec8,SUB84(dVar16,0));
            param_2 = (double)CONCAT44(uVar10,uVar10);
          }
          else {
            param_1 = *_DAT_8c07dec4;
            *(double *)(puVar9 + 6) = param_2;
            dVar16 = (double)CONCAT44(PTR_FUN_8c07decc,DAT_8c07dec8);
          }
          if (in_FPSCR_PR == '\0') {
            fVar17 = (float)((ulonglong)dVar16 >> 0x20) / (float)((ulonglong)param_1 >> 0x20);
            dVar16 = (double)CONCAT44(fVar17,SUB84(dVar16,0));
            fVar18 = (float)((ulonglong)param_2 >> 0x20) * fVar17;
            param_2 = (double)CONCAT44(fVar18,SUB84(param_2,0));
            bVar21 = fVar15 < fVar18;
          }
          else {
            dVar16 = dVar16 / param_1;
            fVar17 = (float)((ulonglong)dVar16 >> 0x20);
            param_2 = param_2 * dVar16;
            fVar18 = (float)((ulonglong)param_2 >> 0x20);
            bVar21 = dVar20 < param_2;
          }
          dVar14 = in_xd14;
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(fVar17,fVar15);
            dVar14 = in_xd8;
          }
          in_xd8 = dVar14;
          if (bVar21) {
            dVar14 = in_xd14;
            if (in_FPSCR_SZ == '\0') {
              dVar14 = (double)((longlong)dVar20 << 0x20);
            }
            do {
              iVar3 = iVar3 + 1;
              if (in_FPSCR_PR == '\0') {
                dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                          (float)((ulonglong)dVar14 >> 0x20) *
                                          (float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar16,0));
                dVar14 = (double)((ulonglong)(uint)(float)iVar3 << 0x20);
                bVar21 = (float)iVar3 < fVar18;
              }
              else {
                dVar14 = (double)iVar3;
                bVar21 = dVar14 < param_2;
              }
            } while (bVar21);
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = SUB84(dVar16,0) / SUB84(param_2,0);
          }
          else {
            fVar18 = SUB84(dVar16 / param_2,0);
          }
          if (in_FPSCR_SZ == '\0') {
            param_3 = (double)CONCAT44(*(undefined4 *)(puVar9 + 8),fVar18);
          }
          else {
            param_3 = *(double *)(puVar9 + 8);
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = (float)((ulonglong)param_3 >> 0x20) + SUB84(param_3,0);
            param_3 = (double)CONCAT44(fVar18,SUB84(param_3,0));
            bVar21 = fVar15 < fVar18;
          }
          else {
            param_3 = param_3 + param_3;
            fVar18 = (float)((ulonglong)param_3 >> 0x20);
            bVar21 = dVar20 < param_3;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(puVar9 + 8) = fVar18;
          }
          else {
            *(double *)(puVar9 + 8) = param_3;
          }
          puVar1 = PTR_FUN_8c07decc;
          if (!bVar21) {
            *(undefined4 *)(puVar13 + iVar6 + 0x1c) = 0;
            *(ushort **)(puVar13 + iVar6 + 0x18) = puVar9;
            iVar3 = (*(code *)PTR_FUN_8c07decc)();
            uVar10 = *(undefined4 *)(puVar13 + iVar6 + 0x1c);
            iVar4 = (*(code *)puVar1)();
            iVar7 = 0;
            *(undefined **)(puVar13 + iVar6 + 0x28) = puVar1;
            *(undefined4 *)(puVar13 + iVar6 + 0x2c) = 0;
            iVar11 = 8;
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar13 + iVar6 + 0x10) = (int)((ulonglong)dVar19 >> 0x20);
            }
            else {
              *(double *)(puVar13 + iVar6 + 0x10) = dVar19;
            }
            *(int *)(puVar13 + iVar6 + 0x14) = iVar8;
            dVar16 = (double)CONCAT44(0x3f800000,SUB84(dVar19,0));
            if (in_FPSCR_PR == '\0') {
              dVar16 = (double)CONCAT44(0x40000000,SUB84(dVar19,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            iVar8 = (int)DAT_8c07deb2;
            do {
              puVar9 = (ushort *)
                       (*(int *)((int)DAT_8c07deb4 + *(int *)(puVar13 + iVar6 + 0x20)) +
                       iVar8 * iVar7);
              *(ushort **)(puVar13 + iVar6 + 0x68) = puVar9;
              bVar21 = false;
              if (((*(byte *)((int)puVar9 + 0xb) & 1) == 0) && ((*puVar9 & 0x14) != 0)) {
                bVar21 = true;
              }
              if (bVar21) {
LAB_8c07e2be:
                bVar21 = false;
              }
              else {
                *(code **)(puVar13 + iVar6 + 0x6c) = *(code **)(puVar13 + iVar6 + 0x28);
                iVar7 = (**(code **)(puVar13 + iVar6 + 0x28))(puVar9 + 1);
                if (iVar7 != iVar3) goto LAB_8c07e2be;
                *(code **)(puVar13 + iVar6 + 0x70) = *(code **)(puVar13 + iVar6 + 0x28);
                iVar7 = (**(code **)(puVar13 + iVar6 + 0x28))();
                if (iVar7 != iVar4) goto LAB_8c07e2be;
                bVar21 = true;
              }
              if (bVar21) {
                iVar7 = *(int *)((int)DAT_8c07deb4 + *(int *)(puVar13 + iVar6 + 0x20)) +
                        iVar8 * *(int *)(puVar13 + iVar6 + 0x2c);
                if ((*(byte *)(iVar7 + 8) & 4) == 0) {
                  *(byte *)(iVar7 + 8) = *(byte *)(iVar7 + 8) | 0x20;
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(iVar7 + 0xc) = (int)((ulonglong)dVar16 >> 0x20);
                  }
                  else {
                    *(double *)(iVar7 + 0xc) = dVar16;
                  }
                }
                uVar10 = 1;
                (*(code *)PTR_FUN_8c07ded0)(*(undefined4 *)(puVar13 + iVar6 + 0x20));
              }
              iVar11 = iVar11 + -1;
              iVar7 = *(int *)(puVar13 + iVar6 + 0x2c) + 1;
              *(int *)(puVar13 + iVar6 + 0x2c) = iVar7;
            } while (iVar11 != 0);
            if (in_FPSCR_SZ == '\0') {
              dVar19 = (double)CONCAT44(*(undefined4 *)(puVar13 + iVar6 + 0x10),SUB84(dVar16,0));
            }
            else {
              dVar19 = *(double *)(puVar13 + iVar6 + 0x10);
            }
            uVar2 = **(uint **)(puVar13 + iVar6 + 0x20);
            *(undefined4 *)(puVar13 + iVar6 + 0x1c) = uVar10;
            puVar9 = *(ushort **)(puVar13 + iVar6 + 0x18);
            iVar8 = *(int *)(puVar13 + iVar6 + 0x14);
            if (((uVar2 & 2) == 0) ||
               ((((-1 < iVar3 && (iVar3 < *(int *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x20))) &&
                 (-1 < iVar4)) && (iVar4 < *(int *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x24))))) {
              *(undefined4 *)(puVar13 + iVar6 + 0x30) =
                   *(undefined4 *)
                    ((*(int *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x20) * iVar4 + iVar3) * 4 +
                    *(int *)((int)DAT_8c07e2ee + *(int *)(puVar13 + iVar6 + 0x20)));
            }
            else {
              *(undefined4 *)(puVar13 + iVar6 + 0x30) = 0;
            }
            if (*(int *)(puVar13 + iVar6 + 0x30) != 0) {
              iVar7 = *(int *)(puVar13 + iVar6 + 0x30);
              pcVar12 = *(code **)(puVar13 + iVar6 + 0x28);
              *(byte *)(iVar7 + 9) = *(byte *)(iVar7 + 9) & 0xf | 0x30;
              if (in_FPSCR_SZ == '\0') {
                *(int *)(iVar7 + 0x14) = SUB84(dVar20,0);
              }
              else {
                *(double *)(iVar7 + 0x14) = in_xd14;
              }
              *(int *)(puVar13 + iVar6 + 0x34) = iVar7 + 2;
              uVar10 = (*pcVar12)();
              *(undefined4 *)(puVar13 + iVar6 + 0x38) = uVar10;
              iVar7 = (*pcVar12)();
              if (*(char *)(*(int *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x20) *
                            *(int *)(puVar13 + iVar6 + 0x38) + iVar7 +
                           *(int *)((int)DAT_8c07e04a + *(int *)(puVar13 + iVar6 + 0x20))) == '[') {
                *(undefined4 *)(puVar13 + iVar6 + 0x3c) = 0xb;
              }
              else {
                *(uint *)(puVar13 + iVar6 + 0x3c) =
                     ((int)*(char *)(*(int *)(puVar13 + iVar6 + 0x30) + 8) & 0xfU) + 1;
              }
              iVar7 = *(int *)(puVar13 + iVar6 + 0x3c);
              (*(code *)PTR___bfswu_8c07e050)();
              if (*(int *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x38) < iVar7) {
                *(undefined4 *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x38) =
                     *(undefined4 *)(puVar13 + iVar6 + 0x3c);
              }
              pcVar12 = *(code **)(puVar13 + iVar6 + 0x28);
              uVar10 = (*pcVar12)();
              *(undefined4 *)(puVar13 + iVar6 + 0x40) = uVar10;
              iVar7 = (*pcVar12)();
              if (*(int *)((*(int *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x20) *
                            *(int *)(puVar13 + iVar6 + 0x40) + iVar7) * 4 +
                          *(int *)((int)DAT_8c07e04e + *(int *)(puVar13 + iVar6 + 0x20))) ==
                  *(int *)(puVar13 + iVar6 + 0x30)) {
                pcVar12 = *(code **)(puVar13 + iVar6 + 0x28);
                uVar10 = (*pcVar12)();
                *(undefined4 *)(puVar13 + iVar6 + 0x44) = uVar10;
                iVar7 = (*pcVar12)();
                *(undefined4 *)
                 ((*(int *)(*(int *)(puVar13 + iVar6 + 0x20) + 0x20) *
                   *(int *)(puVar13 + iVar6 + 0x44) + iVar7) * 4 +
                 *(int *)((int)DAT_8c07e04e + *(int *)(puVar13 + iVar6 + 0x20))) = 0;
              }
              iVar7 = 0;
              if (0 < *(int *)(puVar13 + iVar6 + 0x3c)) {
                *(int *)(puVar13 + iVar6 + 0xc) = iVar4;
                *(undefined4 *)(puVar13 + iVar6 + 0x48) = *(undefined4 *)(puVar13 + iVar6 + 0x34);
                *(undefined4 *)(puVar13 + iVar6 + 0x4c) = *(undefined4 *)(puVar13 + iVar6 + 0x34);
                do {
                  *(code **)(puVar13 + iVar6 + 0x74) = *(code **)(puVar13 + iVar6 + 0x28);
                  iVar4 = (**(code **)(puVar13 + iVar6 + 0x28))();
                  *(code **)(puVar13 + iVar6 + 0x78) = *(code **)(puVar13 + iVar6 + 0x28);
                  uVar10 = (**(code **)(puVar13 + iVar6 + 0x28))();
                  *(undefined4 *)(puVar13 + iVar6 + -4) = 0;
                  iVar4 = (*(code *)PTR_FUN_8c07e054)
                                    (*(undefined4 *)(puVar13 + iVar6 + 0x20),
                                     *(undefined4 *)(puVar13 + iVar6 + 0x30),iVar4 - iVar7,uVar10);
                  if (iVar4 == 0) {
                    iVar4 = *(int *)(puVar13 + iVar6 + 0xc);
                    goto LAB_8c07e058;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < *(int *)(puVar13 + iVar6 + 0x3c));
                iVar4 = *(int *)(puVar13 + iVar6 + 0xc);
              }
LAB_8c07e058:
              iVar7 = 1;
              if (1 < *(int *)(puVar13 + iVar6 + 0x3c)) {
                *(int *)(puVar13 + iVar6 + 8) = iVar4;
                *(undefined4 *)(puVar13 + iVar6 + 0x50) = *(undefined4 *)(puVar13 + iVar6 + 0x34);
                *(undefined4 *)(puVar13 + iVar6 + 0x54) = *(undefined4 *)(puVar13 + iVar6 + 0x34);
                do {
                  pcVar12 = *(code **)(puVar13 + iVar6 + 0x28);
                  *(code **)(puVar13 + (int)DAT_8c07e1bc + iVar6 + -4) = pcVar12;
                  iVar4 = (*pcVar12)();
                  pcVar12 = *(code **)(puVar13 + iVar6 + 0x28);
                  *(code **)(puVar13 + (int)DAT_8c07e1be + iVar6 + -4) = pcVar12;
                  uVar10 = (*pcVar12)();
                  *(undefined4 *)(puVar13 + iVar6 + -4) = 0;
                  iVar4 = (*(code *)PTR_FUN_8c07e1cc)
                                    (*(undefined4 *)(puVar13 + iVar6 + 0x20),
                                     *(undefined4 *)(puVar13 + iVar6 + 0x30),iVar4 + iVar7,uVar10);
                  if (iVar4 == 0) {
                    iVar4 = *(int *)(puVar13 + iVar6 + 8);
                    goto LAB_8c07e0b4;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < *(int *)(puVar13 + iVar6 + 0x3c));
                iVar4 = *(int *)(puVar13 + iVar6 + 8);
              }
LAB_8c07e0b4:
              iVar7 = 1;
              if (1 < *(int *)(puVar13 + iVar6 + 0x3c)) {
                *(int *)(puVar13 + iVar6 + 4) = iVar4;
                *(undefined4 *)(puVar13 + iVar6 + 0x58) = *(undefined4 *)(puVar13 + iVar6 + 0x34);
                *(undefined4 *)(puVar13 + iVar6 + 0x5c) = *(undefined4 *)(puVar13 + iVar6 + 0x34);
                do {
                  pcVar12 = *(code **)(puVar13 + iVar6 + 0x28);
                  *(code **)(puVar13 + (int)DAT_8c07e1c0 + iVar6 + -4) = pcVar12;
                  uVar10 = (*pcVar12)();
                  pcVar12 = *(code **)(puVar13 + iVar6 + 0x28);
                  *(code **)(puVar13 + (int)DAT_8c07e1c2 + iVar6 + -4) = pcVar12;
                  iVar4 = (*pcVar12)();
                  *(undefined4 *)(puVar13 + iVar6 + -4) = 0;
                  iVar4 = (*(code *)PTR_FUN_8c07e1cc)
                                    (*(undefined4 *)(puVar13 + iVar6 + 0x20),
                                     *(undefined4 *)(puVar13 + iVar6 + 0x30),uVar10,iVar4 - iVar7);
                  if (iVar4 == 0) {
                    iVar4 = *(int *)(puVar13 + iVar6 + 4);
                    goto LAB_8c07e110;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < *(int *)(puVar13 + iVar6 + 0x3c));
                iVar4 = *(int *)(puVar13 + iVar6 + 4);
              }
LAB_8c07e110:
              iVar7 = 1;
              if (1 < *(int *)(puVar13 + iVar6 + 0x3c)) {
                *(int *)(puVar13 + iVar6) = iVar4;
                *(undefined4 *)(puVar13 + iVar6 + 0x60) = *(undefined4 *)(puVar13 + iVar6 + 0x34);
                *(undefined4 *)(puVar13 + iVar6 + 100) = *(undefined4 *)(puVar13 + iVar6 + 0x34);
                do {
                  pcVar12 = *(code **)(puVar13 + iVar6 + 0x28);
                  *(code **)(puVar13 + (int)DAT_8c07e1c4 + iVar6 + -4) = pcVar12;
                  uVar10 = (*pcVar12)();
                  pcVar12 = *(code **)(puVar13 + iVar6 + 0x28);
                  *(code **)(puVar13 + (int)DAT_8c07e1c6 + iVar6 + -4) = pcVar12;
                  iVar4 = (*pcVar12)();
                  *(undefined4 *)(puVar13 + iVar6 + -4) = 0;
                  iVar4 = (*(code *)PTR_FUN_8c07e1cc)
                                    (*(undefined4 *)(puVar13 + iVar6 + 0x20),
                                     *(undefined4 *)(puVar13 + iVar6 + 0x30),uVar10,iVar4 + iVar7);
                  if (iVar4 == 0) {
                    iVar4 = *(int *)(puVar13 + iVar6);
                    goto LAB_8c07e16c;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < *(int *)(puVar13 + iVar6 + 0x3c));
                iVar4 = *(int *)(puVar13 + iVar6);
              }
            }
LAB_8c07e16c:
            iVar3 = (*(code *)PTR_FUN_8c07e1d0)(*(undefined4 *)(puVar13 + iVar6 + 0x20),iVar3,iVar4)
            ;
            if (iVar3 != 0) {
              (*(code *)PTR_FUN_8c07e1d4)(*(undefined4 *)(puVar13 + iVar6 + 0x20),iVar3,0);
            }
            if (*(int *)(puVar13 + iVar6 + 0x1c) == 0) {
              *(byte *)((int)puVar9 + 9) = *(byte *)((int)puVar9 + 9) & (byte)DAT_8c07e1bc;
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar9 + 6) = SUB84(dVar20,0);
                *(int *)(puVar9 + 8) = SUB84(dVar20,0);
              }
              else {
                *(double *)(puVar9 + 6) = in_xd14;
                *(double *)(puVar9 + 8) = in_xd14;
              }
            }
            else {
              (*(code *)PTR_FUN_8c07e2f8)(*(undefined4 *)(puVar13 + iVar6 + 0x20),puVar9);
            }
          }
        }
      }
    }
    iVar8 = iVar8 + -1;
    puVar9 = puVar9 + 10;
    if (iVar8 == 0) {
      return;
    }
  } while( true );
}

