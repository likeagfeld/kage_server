// entry: 8c03fe8c
// name: FUN_8c03fe8c
// signature: undefined FUN_8c03fe8c(void)


void FUN_8c03fe8c(double param_1,double param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  short sVar7;
  ushort *puVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int unaff_r11;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  double dVar18;
  float fVar20;
  double dVar19;
  undefined8 in_dr14;
  undefined4 in_PR;
  short sVar21;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_2c [8];
  undefined8 uStack_24;
  
  uVar17 = SUB84(param_2,0);
  puVar13 = &DAT_8c285538;
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_24);
    puVar16 = &uStack_24;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr14;
  }
  else {
    puVar16 = (undefined8 *)local_2c;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  bVar4 = false;
  uVar6 = *(undefined4 *)(*(int *)(DAT_8c03ffee + param_3) + 0x28);
  *(undefined4 *)((int)puVar16 + -0x28) = 0xffffffff;
  *(undefined4 *)((int)puVar16 + -0x2c) = 0xffffffff;
  iVar10 = *DAT_8c03fff8;
  *(short *)((int)puVar16 + -0x1c) = (short)uVar6;
  iVar15 = 0;
  if ((*(short *)(iVar10 + 8) == 2) || (*(short *)(iVar10 + 8) == 3)) {
    iVar10 = (*(code *)PTR_FUN_8c040308)();
    if (in_FPSCR_PR == '\0') {
      dVar18 = (double)CONCAT44((float)iVar10,uVar17);
    }
    else {
      dVar18 = (double)iVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44(DAT_8c040310,DAT_8c04030c);
    }
    else {
      param_2 = (double)CONCAT44(uRam8c040314,DAT_8c040310);
    }
    if (in_FPSCR_PR == '\0') {
      fVar20 = ((float)((ulonglong)dVar18 >> 0x20) / SUB84(param_2,0)) *
               (float)((ulonglong)param_2 >> 0x20);
      dVar18 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
      iVar10 = (int)fVar20;
    }
    else {
      dVar18 = (dVar18 / param_2) * param_2;
      iVar10 = (int)dVar18;
    }
    uVar17 = SUB84(dVar18,0);
    *(int *)((int)puVar16 + -0x2c) = iVar10;
    iVar10 = (*(code *)PTR_FUN_8c040308)();
    if (in_FPSCR_PR == '\0') {
      fVar20 = ((float)iVar10 / SUB84(param_2,0)) * (float)((ulonglong)param_2 >> 0x20);
      param_2 = (double)CONCAT44(fVar20,uVar17);
      iVar10 = (int)fVar20;
    }
    else {
      param_2 = ((double)iVar10 / param_2) * param_2;
      iVar10 = (int)param_2;
    }
    *(int *)((int)puVar16 + -0x28) = iVar10 + 4;
  }
  *(undefined2 *)((int)puVar16 + -0x18) = 0;
  if (0 < *(short *)((int)puVar16 + -0x1c)) {
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)CONCAT44(DAT_8c03fffc._4_4_,(undefined4)DAT_8c03fffc);
    }
    else {
      dVar18 = (double)CONCAT44(uRam8c040004,DAT_8c03fffc._4_4_);
    }
    do {
      puVar8 = (ushort *)
               (*(int *)((int)DAT_8c03fff0 + *(int *)(DAT_8c03ffee + param_3)) +
               *(short *)((int)puVar16 + -0x18) * 0x88);
      uVar1 = *puVar8;
      *(ushort **)((int)puVar16 + -0x14) = puVar8;
      if ((uVar1 & 1) == 0) {
        do {
          uVar17 = SUB84(param_2,0);
          iVar10 = *DAT_8c03fff8;
          iVar11 = *(int *)(DAT_8c03fff2 + param_3) + 1;
          sVar9 = (short)((int)(iVar11 + (uint)(iVar11 < 0)) >> 1);
          iVar11 = (int)sVar9;
          *(short *)((int)puVar16 + -0x10) = sVar9;
          sVar3 = sVar9 * 2;
          iVar14 = (int)(short)(sVar3 + -3);
          sVar2 = (short)*(undefined4 *)(DAT_8c03fff4 + param_3);
          sVar7 = sVar2 + -2;
          *(short *)((int)puVar16 + -0xc) = sVar7;
          sVar21 = *(short *)(iVar10 + 8);
          if (sVar21 == 1) {
            iVar10 = (*(code *)PTR_FUN_8c040308)();
            if (in_FPSCR_PR == '\0') {
              dVar19 = (double)CONCAT44((float)iVar10,uVar17);
            }
            else {
              dVar19 = (double)iVar10;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = ((float)((ulonglong)dVar19 >> 0x20) / SUB84(dVar18,0)) *
                       (float)((ulonglong)dVar18 >> 0x20);
              param_2 = (double)CONCAT44(fVar20,SUB84(dVar19,0));
              sVar21 = (short)(int)fVar20;
            }
            else {
              param_2 = (dVar19 / dVar18) * dVar18;
              sVar21 = (short)(int)param_2;
            }
            sVar21 = sVar21 + -1;
            if (iVar15 == 0) {
              unaff_r11 = (int)(short)((short)((int)(*(short *)((int)puVar16 + -0x10) + iVar14 +
                                                    (uint)(*(short *)((int)puVar16 + -0x10) + iVar14
                                                          < 0)) >> 1) + sVar21);
              puVar13 = (undefined1 *)
                        (int)(short)((int)(*(short *)((int)puVar16 + -0xc) + 1 +
                                          (uint)(*(short *)((int)puVar16 + -0xc) + 1 < 0)) >> 1);
            }
            else if (iVar15 == 1) {
              iVar10 = ((int)(*(short *)((int)puVar16 + -0xc) + 1 +
                             (uint)(*(short *)((int)puVar16 + -0xc) + 1 < 0)) >> 1) + 1;
              unaff_r11 = (int)(short)((short)((int)(*(short *)((int)puVar16 + -0x10) + iVar14 +
                                                    (uint)(*(short *)((int)puVar16 + -0x10) + iVar14
                                                          < 0)) >> 1) + sVar21);
              puVar13 = (undefined1 *)(int)(short)((int)(iVar10 + (uint)(iVar10 < 0)) >> 1);
            }
            else if (iVar15 == 2) {
              iVar10 = *(short *)((int)puVar16 + -0xc) + 1;
              iVar10 = ((int)(iVar10 + (uint)(iVar10 < 0)) >> 1) +
                       (int)*(short *)((int)puVar16 + -0xc);
              unaff_r11 = (int)(short)((short)((int)(*(short *)((int)puVar16 + -0x10) + iVar14 +
                                                    (uint)(*(short *)((int)puVar16 + -0x10) + iVar14
                                                          < 0)) >> 1) + sVar21);
              puVar13 = (undefined1 *)(int)(short)((int)(iVar10 + (uint)(iVar10 < 0)) >> 1);
            }
            else if (iVar15 == 3) {
              unaff_r11 = (int)(short)((short)((int)(*(short *)((int)puVar16 + -0x10) + iVar14 +
                                                    (uint)(*(short *)((int)puVar16 + -0x10) + iVar14
                                                          < 0)) >> 1) + sVar21);
              puVar13 = (undefined1 *)0x1;
            }
            else if (iVar15 == 4) {
              unaff_r11 = (int)(short)((short)((int)(*(short *)((int)puVar16 + -0x10) + iVar14 +
                                                    (uint)(*(short *)((int)puVar16 + -0x10) + iVar14
                                                          < 0)) >> 1) + sVar21);
              puVar13 = (undefined1 *)(int)*(short *)((int)puVar16 + -0xc);
            }
            else {
              bVar4 = true;
            }
          }
          else if (sVar21 == 2) {
            if (iVar15 == 0) {
              unaff_r11 = iVar11;
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -3);
            }
            else if (iVar15 == 1) {
              unaff_r11 = iVar14;
              puVar13 = (undefined1 *)0x2;
            }
            else if (iVar15 == 2) {
              unaff_r11 = iVar11;
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -5);
            }
            else if (iVar15 == 3) {
              unaff_r11 = iVar14;
              puVar13 = (undefined1 *)0x4;
            }
            else if (iVar15 == 4) {
              unaff_r11 = iVar11;
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -7);
            }
            else if (iVar15 == 5) {
              unaff_r11 = iVar14;
              puVar13 = (undefined1 *)0x6;
            }
            else if (iVar15 == 6) {
              unaff_r11 = (int)(short)(sVar9 + 1);
              puVar13 = (undefined1 *)0x1;
            }
            else if (iVar15 == 7) {
              unaff_r11 = (int)(short)(sVar3 + -4);
              puVar13 = (undefined1 *)(int)sVar7;
            }
            else {
              bVar4 = true;
            }
          }
          else if (sVar21 == 3) {
            if (iVar15 == 0) {
              puVar13 = (undefined1 *)0x2;
              unaff_r11 = iVar11;
            }
            else if (iVar15 == 1) {
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -3);
              unaff_r11 = iVar14;
            }
            else if (iVar15 == 2) {
              puVar13 = (undefined1 *)0x4;
              unaff_r11 = iVar11;
            }
            else if (iVar15 == 3) {
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -5);
              unaff_r11 = iVar14;
            }
            else if (iVar15 == 4) {
              puVar13 = (undefined1 *)0x6;
              unaff_r11 = iVar11;
            }
            else if (iVar15 == 5) {
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -7);
              unaff_r11 = iVar14;
            }
            else if (iVar15 == 6) {
              unaff_r11 = (int)(short)(sVar9 + 1);
              puVar13 = (undefined1 *)(int)sVar7;
            }
            else if (iVar15 == 7) {
              unaff_r11 = (int)(short)(sVar3 + -4);
              puVar13 = (undefined1 *)0x1;
            }
            else {
              bVar4 = true;
            }
          }
          else if (sVar21 == 4) {
            if (iVar15 == 0) {
              puVar13 = (undefined1 *)0x2;
              unaff_r11 = (int)(short)((int)(iVar11 + iVar14 + (uint)(iVar11 + iVar14 < 0)) >> 1);
            }
            else if (iVar15 == 1) {
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -5);
              unaff_r11 = iVar11;
            }
            else if (iVar15 == 2) {
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -5);
              unaff_r11 = iVar14;
            }
            else if (iVar15 == 3) {
              puVar13 = (undefined1 *)0x4;
              unaff_r11 = (int)(short)((int)(iVar11 + iVar14 + (uint)(iVar11 + iVar14 < 0)) >> 1);
            }
            else if (iVar15 == 4) {
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -3);
              unaff_r11 = iVar11;
            }
            else if (iVar15 == 5) {
              puVar13 = (undefined1 *)(int)(short)(sVar2 + -3);
              unaff_r11 = iVar14;
            }
            else {
              bVar4 = true;
            }
          }
          else {
            bVar4 = true;
          }
          uVar6 = SUB84(param_2,0);
          uVar17 = SUB84(param_1,0);
          iVar15 = (int)(short)((short)iVar15 + 1);
        } while ((!bVar4) &&
                ((((((iVar15 == *(int *)((int)puVar16 + -0x2c) ||
                     (iVar15 == *(int *)((int)puVar16 + -0x28))) ||
                    (unaff_r11 < *(short *)((int)puVar16 + -0x10))) ||
                   ((iVar14 < unaff_r11 || ((int)puVar13 < 1)))) ||
                  (((int)*(short *)((int)puVar16 + -0xc) < (int)puVar13 ||
                   (*(int *)((*(int *)(*(int *)(DAT_8c03ffee + param_3) + 0x20) * (int)puVar13 +
                             unaff_r11) * 4 +
                            *(int *)((int)DAT_8c03fff6 + *(int *)(DAT_8c03ffee + param_3))) != 0))))
                 || ((unaff_r11 == *(int *)(DAT_8c040174 + param_3) &&
                     (puVar13 == *(undefined1 **)(DAT_8c040176 + param_3)))))));
        if (bVar4) {
          return;
        }
        iVar10 = (*(code *)PTR_FUN_8c040188)
                           (*(undefined4 *)(DAT_8c040178 + param_3),*(undefined2 *)(param_3 + 0x54))
        ;
        if (iVar10 == 0) {
          return;
        }
        *(undefined1 **)((int)puVar16 + -0x38) = puVar13;
        uVar12 = (uint)*(ushort *)(param_3 + 0x54);
        iVar10 = *(int *)(DAT_8c04017a + param_3);
        *(int *)((int)puVar16 + -8) = iVar10;
        sVar21 = *(short *)(iVar10 + uVar12 * 0x1e + 2);
        sVar2 = *(short *)(iVar10 + DAT_8c04017c + uVar12 * 0x1e + 2);
        sVar3 = *(short *)(*(int *)((int)puVar16 + -8) + (int)DAT_8c04017e + uVar12 * 0x1e + 2);
        *(undefined4 *)((int)puVar16 + -0x30) = 0;
        *(int *)((int)puVar16 + -0x34) = (int)(short)(sVar21 + sVar2 + sVar3);
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)(DAT_8c040178 + param_3) + 0x18),uVar17
                                    );
          param_2 = (double)CONCAT44(DAT_8c040190,uVar6);
        }
        else {
          param_1 = *(double *)(*(int *)(DAT_8c040178 + param_3) + 0x18);
          param_2 = (double)CONCAT44(PTR_FUN_8c040194,DAT_8c040190);
        }
        if (in_FPSCR_PR == '\0') {
          param_1 = (double)CONCAT44((float)((ulonglong)param_1 >> 0x20) +
                                     (float)((ulonglong)param_2 >> 0x20),SUB84(param_1,0));
        }
        else {
          param_1 = param_1 + param_2;
        }
        (*(code *)PTR_FUN_8c04018c)(param_1,(int)*(short *)((int)puVar16 + -0x18),uVar12,unaff_r11);
        puVar5 = PTR_FUN_8c040194;
        *(byte *)(*(int *)((int)puVar16 + -0x14) + 0x10) =
             *(byte *)(*(int *)((int)puVar16 + -0x14) + 0x10) & (byte)DAT_8c040180;
        (*(code *)puVar5)(*(undefined4 *)(DAT_8c040174 + param_3));
        (*(code *)PTR_FUN_8c040194)(*(undefined4 *)(DAT_8c040176 + param_3));
        *(byte *)((int)puVar16 + -0x24) =
             (*(byte *)((int)puVar16 + -0x24) & (byte)DAT_8c040184 | 0x10) & (byte)DAT_8c04017c | 8;
        (*(code *)PTR_FUN_8c040194)();
        (*(code *)PTR_FUN_8c040194)();
        *(byte *)((int)puVar16 + -0x20) =
             (*(byte *)((int)puVar16 + -0x20) & (byte)DAT_8c040184 | 0x10) & (byte)DAT_8c04017c | 8;
        (*(code *)PTR_FUN_8c040198)
                  (*(undefined4 *)(DAT_8c040178 + param_3),*(undefined4 *)((int)puVar16 + -0x14),
                   (undefined1 *)((int)puVar16 + -0x20),(undefined1 *)((int)puVar16 + -0x24));
      }
      *(short *)((int)puVar16 + -0x18) = *(short *)((int)puVar16 + -0x18) + 1;
    } while (*(short *)((int)puVar16 + -0x18) < *(short *)((int)puVar16 + -0x1c));
  }
                    /* WARNING: Read-only address (ram,0x8c040004) is written */
                    /* WARNING: Read-only address (ram,0x8c040314) is written */
  return;
}

