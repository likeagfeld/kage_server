// entry: 8c0743ec
// name: FUN_8c0743ec
// signature: undefined FUN_8c0743ec(void)


void FUN_8c0743ec(double param_1,double param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined8 in_dr14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar17 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar17 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar17 + -4) = in_PR;
  if (((int)*(char *)(param_3 + 0x12) & (int)DAT_8c074502) == 0xf) {
    iVar13 = 0;
    *(undefined4 *)((int)puVar17 + -0x10) = 0;
    iVar15 = 8;
    pbVar16 = *(byte **)(*(int *)(DAT_8c074504 + param_3) + 0x70);
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(DAT_8c074510,(int)in_dr14);
    }
    else {
      dVar20 = (double)CONCAT44(PTR_FUN_8c074514,DAT_8c074510);
    }
    *(int *)((int)puVar17 + -0xc) = param_3 + DAT_8c074506;
    do {
      uVar5 = SUB84(param_1,0);
      if ((*(char *)(param_3 + 0x3e + iVar13) == '\x01') &&
         (iVar14 = *(int *)(*(int *)((int)puVar17 + -0xc) + iVar13 * 4), iVar14 != 0)) {
        if ((pbVar16[2] & 8) == 0) {
          if (((pbVar16[2] & 4) != 0) && ((*(byte *)(iVar14 + DAT_8c0747a0 + 2) & 4) == 0)) {
            iVar13 = *(int *)((int)DAT_8c0747a4 + *(int *)(DAT_8c0747a2 + param_3)) +
                     DAT_8c0747a6 * iVar13;
            if ((*(byte *)(iVar13 + 0xb) & 6) != 0) {
              param_2 = (double)((ulonglong)param_2 & 0xffffffff);
              *(byte *)(iVar13 + 0xb) = *(byte *)(iVar13 + 0xb) & 0xf9;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(iVar13 + 0x24) = 0;
              }
              else {
                *(double *)(iVar13 + 0x24) = param_2;
              }
            }
          }
          puVar2 = PTR_FUN_8c0747bc;
          puVar1 = PTR_FUN_8c0747b8;
          uVar18 = SUB84(param_2,0);
          iVar13 = (int)DAT_8c0747a8;
          uVar4 = (*(code *)PTR_FUN_8c0747b8)(6);
          (*(code *)puVar2)(uVar4,6);
          uVar4 = (*(code *)puVar1)(iVar13);
          (*(code *)puVar2)(uVar4,iVar13);
          (*(code *)puVar2)(-(((*pbVar16 & 0x10) == 0) - 1),(int)DAT_8c0747aa);
          (*(code *)puVar2)(*pbVar16 & 0xf,(int)DAT_8c0747ac);
          *(byte *)((int)puVar17 + -0x12) = pbVar16[2];
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)DAT_8c0747c0,uVar5);
          }
          else {
            param_1 = *DAT_8c0747c0;
          }
          *(byte *)((int)puVar17 + -0x11) = pbVar16[3] & 0xf;
          if (in_FPSCR_SZ == '\0') {
            uVar18 = *(undefined4 *)(DAT_8c0747ae + param_3);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = (double)CONCAT44(*(undefined4 *)(DAT_8c0747b0 + param_3),uVar18);
          }
          else {
            dVar21 = *(double *)(DAT_8c0747b0 + param_3);
          }
          if (in_FPSCR_PR == '\0') {
            fVar19 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
          }
          else {
            fVar19 = SUB84(dVar21 - dVar21,0);
          }
          param_2 = dVar20;
          if (in_FPSCR_SZ == '\0') {
            param_2 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar19);
          }
          if (in_FPSCR_PR == '\0') {
            param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) /
                                       (float)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
          }
          else {
            param_2 = param_2 / param_1;
          }
          if (in_FPSCR_PR == '\0' && SUB84(param_2,0) < (float)((ulonglong)param_2 >> 0x20)) {
            uVar5 = (*(code *)PTR_FUN_8c074af8)(6);
            *(undefined **)((int)puVar17 + -0x2c) = PTR_s_____Invalid_X_Pos__d_PlayerID__d_8c074afc;
            *(undefined4 *)((int)puVar17 + -0x28) = uVar5;
            *(undefined4 *)((int)puVar17 + -0x24) = *(undefined4 *)((int)puVar17 + -0x10);
            (*(code *)PTR_FUN_8c074b00)(param_3);
            iVar13 = (*(code *)PTR_FUN_8c074b04)
                               (*(undefined4 *)(DAT_8c074aec + param_3),
                                *(undefined4 *)((int)puVar17 + -0x10),
                                (undefined1 *)((int)puVar17 + -0x18));
            puVar1 = PTR_FUN_8c074af8;
            if (iVar13 != 0) {
              *(byte *)((int)puVar17 + -0x18) =
                   (*(byte *)((int)puVar17 + -0x18) & (byte)DAT_8c074aee | 0x10) &
                   (byte)DAT_8c074af0 | 8;
            }
            uVar6 = (*(code *)PTR_FUN_8c074af8)(6);
            uVar7 = (*(code *)puVar1)(6);
            if (((((int)(uVar6 & 0xffff) < (int)((uVar7 & 0xffff) - 1)) ||
                 ((uVar6 & 0xffff) < (uVar7 & 0xffff) + 1)) ||
                (uVar6 = (*(code *)PTR_FUN_8c074af8)((int)DAT_8c074af2),
                (int)(uVar6 & 0xffff) < (int)((uVar7 & 0xffff) - 1))) ||
               ((uVar6 & 0xffff) < (uVar7 & 0xffff) + 1)) {
              puVar1 = PTR_FUN_8c074b08;
              iVar13 = (int)DAT_8c074af2;
              (*(code *)PTR_FUN_8c074b08)(6);
              uVar5 = (*(code *)PTR_FUN_8c074af8)(iVar13);
              (*(code *)puVar1)(uVar5,iVar13);
              (*(code *)puVar1)(-(((*(byte *)((int)puVar17 + -0x18) & 0x10) == 0) - 1),
                                (int)DAT_8c074af4);
              (*(code *)puVar1)(*(byte *)((int)puVar17 + -0x18) & 0xf,(int)DAT_8c074af6);
            }
          }
          uVar3 = (*(code *)PTR_FUN_8c0747b8)(6);
          if ((uVar3 == 0) || (*(int *)(DAT_8c0747b2 + param_3) <= (int)(uint)uVar3)) {
            *(undefined **)((int)puVar17 + -0x2c) = PTR_s_____Invalid_X_Pos__d_PlayerID__d_8c0748bc;
            *(uint *)((int)puVar17 + -0x28) = (uint)uVar3;
            *(undefined4 *)((int)puVar17 + -0x24) = *(undefined4 *)((int)puVar17 + -0x10);
            (*(code *)PTR_FUN_8c0748c0)(param_3);
            iVar13 = (*(code *)PTR_FUN_8c0748c4)
                               (*(undefined4 *)(DAT_8c0748b0 + param_3),
                                *(undefined4 *)((int)puVar17 + -0x10),
                                (undefined1 *)((int)puVar17 + -0x18));
            puVar2 = PTR_FUN_8c0748cc;
            puVar1 = PTR_FUN_8c0748c8;
            if (iVar13 != 0) {
              *(byte *)((int)puVar17 + -0x18) =
                   (*(byte *)((int)puVar17 + -0x18) & (byte)DAT_8c0748b2 | 0x10) &
                   (byte)DAT_8c0748b4 | 8;
            }
            iVar13 = (int)DAT_8c0748b6;
            uVar5 = (*(code *)PTR_FUN_8c0748c8)(6);
            (*(code *)puVar2)(uVar5,6);
            uVar5 = (*(code *)puVar1)(iVar13);
            (*(code *)puVar2)(uVar5,iVar13);
            (*(code *)puVar2)(-(((*(byte *)((int)puVar17 + -0x18) & 0x10) == 0) - 1),
                              (int)DAT_8c0748b8);
            (*(code *)puVar2)(*(byte *)((int)puVar17 + -0x18) & 0xf,(int)DAT_8c0748ba);
            *(undefined **)((int)puVar17 + -0x2c) = PTR_s____Update_PlayerID__d_8c0748d0;
            *(undefined4 *)((int)puVar17 + -0x28) = *(undefined4 *)((int)puVar17 + -0x10);
            (*(code *)PTR_FUN_8c0748c0)(param_3);
            uVar5 = (*(code *)puVar1)(6);
            uVar4 = (*(code *)puVar1)(iVar13);
            *(undefined4 *)((int)puVar17 + -0x28) = uVar5;
            *(undefined4 *)((int)puVar17 + -0x24) = uVar4;
            *(undefined **)((int)puVar17 + -0x2c) = PTR_s____mPosition__d__d__d__d_8c0748d4;
            *(uint *)((int)puVar17 + -0x20) =
                 -((((int)*(char *)((int)puVar17 + -0x14) & 0x10U) == 0) - 1);
            *(uint *)((int)puVar17 + -0x1c) = (int)*(char *)((int)puVar17 + -0x14) & 0xf;
            (*(code *)PTR_FUN_8c0748c0)(param_3);
          }
          uVar3 = (*(code *)PTR_FUN_8c0747b8)((int)DAT_8c0747a8);
          if ((uVar3 == 0) || (*(int *)(DAT_8c0747b4 + param_3) <= (int)(uint)uVar3)) {
            *(undefined **)((int)puVar17 + -0x2c) = PTR_s_____Invalid_Y_Pos__d_PlayerID__d_8c0749d4;
            *(uint *)((int)puVar17 + -0x28) = (uint)uVar3;
            *(undefined4 *)((int)puVar17 + -0x24) = *(undefined4 *)((int)puVar17 + -0x10);
            (*(code *)PTR_FUN_8c0749d8)(param_3);
            iVar13 = (*(code *)PTR_FUN_8c0749dc)
                               (*(undefined4 *)(DAT_8c0749c6 + param_3),
                                *(undefined4 *)((int)puVar17 + -0x10),
                                (undefined1 *)((int)puVar17 + -0x18));
            if (iVar13 != 0) {
              *(byte *)((int)puVar17 + -0x18) =
                   (*(byte *)((int)puVar17 + -0x18) & (byte)DAT_8c0749c8 | 0x10) &
                   (byte)DAT_8c0749ca | 8;
            }
            iVar13 = (int)DAT_8c0749cc;
            uVar5 = (*(code *)PTR_FUN_8c0749e0)(6);
            (*(code *)PTR_FUN_8c0749e4)(uVar5,6);
            uVar5 = (*(code *)PTR_FUN_8c0749e0)(iVar13);
            (*(code *)PTR_FUN_8c0749e4)(uVar5,iVar13);
            (*(code *)PTR_FUN_8c0749e4)
                      (-(((*(byte *)((int)puVar17 + -0x18) & 0x10) == 0) - 1),(int)DAT_8c0749ce);
            (*(code *)PTR_FUN_8c0749e4)(*(byte *)((int)puVar17 + -0x18) & 0xf,(int)DAT_8c0749d0);
            *(undefined **)((int)puVar17 + -0x2c) = PTR_s____Update_PlayerID__d_8c0749e8;
            *(undefined4 *)((int)puVar17 + -0x28) = *(undefined4 *)((int)puVar17 + -0x10);
            (*(code *)PTR_FUN_8c0749d8)(param_3);
            uVar5 = (*(code *)PTR_FUN_8c0749e0)(6);
            uVar4 = (*(code *)PTR_FUN_8c0749e0)(iVar13);
            *(undefined **)((int)puVar17 + -0x2c) = PTR_s____mPosition__d__d__d__d_8c0749ec;
            *(undefined4 *)((int)puVar17 + -0x28) = uVar5;
            *(undefined4 *)((int)puVar17 + -0x24) = uVar4;
            *(uint *)((int)puVar17 + -0x20) =
                 -((((int)*(char *)((int)puVar17 + -0x14) & 0x10U) == 0) - 1);
            *(uint *)((int)puVar17 + -0x1c) = (int)*(char *)((int)puVar17 + -0x14) & 0xf;
            (*(code *)PTR_FUN_8c0749d8)(param_3);
          }
          (*(code *)PTR_FUN_8c0747c4)(iVar14,(undefined1 *)((int)puVar17 + -0x14));
        }
        else if (*(char *)(param_3 + 0x3e + iVar13) != '\x03') {
          iVar14 = *(int *)((int)puVar17 + -0xc);
          *(undefined1 *)(iVar13 + param_3 + 0x3e) = 3;
          (*(code *)PTR_FUN_8c07467c)(*(undefined4 *)(iVar14 + iVar13 * 4));
          iVar13 = *(int *)(*(int *)(*(int *)((int)puVar17 + -0x10) * 4 + iVar14) + 0x28);
          (**(code **)(iVar13 + 0x2c))
                    (*(int *)(iVar14 + *(int *)((int)puVar17 + -0x10) * 4) + *(int *)(iVar13 + 0x24)
                    );
          uVar6 = *(uint *)((int)puVar17 + -0x10);
          if (*(int *)(iVar14 + uVar6 * 4) != 0) {
            if (*(int *)(*(int *)((int)puVar17 + -0xc) + uVar6 * 4) != 0) {
              iVar13 = *(int *)(*(int *)(uVar6 * 4 + *(int *)((int)puVar17 + -0xc)) + 0x28);
              (**(code **)(iVar13 + 0x14))
                        (*(int *)(*(int *)((int)puVar17 + -0xc) + uVar6 * 4) +
                         *(int *)(iVar13 + 0xc),3);
            }
            uVar6 = *(uint *)((int)puVar17 + -0x10);
            *(undefined4 *)(uVar6 * 4 + *(int *)((int)puVar17 + -0xc)) = 0;
          }
          if ((int)uVar6 < 0) {
            uVar7 = 1 >> (~uVar6 & 0x1f) + 1;
          }
          else {
            uVar7 = 1 << (uVar6 & 0x1f);
          }
          *(uint *)((int)puVar17 + -0x28) = uVar6;
          *(uint *)((int)DAT_8c074672 + *(int *)(DAT_8c074670 + param_3)) =
               *(uint *)((int)DAT_8c074672 + *(int *)(DAT_8c074670 + param_3)) | uVar7;
          *(undefined4 *)(*(int *)(DAT_8c074670 + param_3) + 0x48) = 0x18;
          *(undefined **)((int)puVar17 + -0x2c) = PTR_s____Now_Lost_PlayerID__d_8c074680;
          (*(code *)PTR_FUN_8c074684)(param_3);
          puVar9 = (ushort *)
                   ((int)DAT_8c074676 * *(int *)((int)puVar17 + -0x10) +
                   *(int *)((int)DAT_8c074674 + *(int *)(DAT_8c07466e + param_3)));
          if ((puVar9 != (ushort *)0x0) && ((*puVar9 & 1) != 0)) {
            *puVar9 = *puVar9 & 0xfffe;
          }
        }
      }
      uVar4 = SUB84(param_2,0);
      uVar5 = SUB84(param_1,0);
      iVar15 = iVar15 + -1;
      pbVar16 = pbVar16 + 4;
      iVar13 = *(int *)((int)puVar17 + -0x10) + 1;
      *(int *)((int)puVar17 + -0x10) = iVar13;
    } while (iVar15 != 0);
    (*(code *)PTR_FUN_8c074514)(param_3);
    iVar15 = *(int *)(*(int *)(DAT_8c074504 + param_3) + 0x6c);
    iVar13 = *(int *)(*(int *)(DAT_8c074504 + param_3) + 0x68);
    if (in_FPSCR_SZ == '\0') {
      uVar4 = *(undefined4 *)(DAT_8c074508 + param_3);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(undefined4 *)(DAT_8c07450a + param_3),uVar4);
      dVar21 = (double)CONCAT44(DAT_8c07451c,uVar5);
    }
    else {
      dVar20 = *(double *)(DAT_8c07450a + param_3);
      dVar21 = (double)CONCAT44(uRam8c074520,DAT_8c07451c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar19 = SUB84(dVar20,0) - (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      fVar19 = SUB84(dVar20 - dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(undefined4 *)DAT_8c074518,SUB84(dVar21,0));
      dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),fVar19);
    }
    else {
      dVar20 = *DAT_8c074518;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) /
                                (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 / dVar20;
    }
    if (in_FPSCR_PR == '\0' && SUB84(dVar21,0) < (float)((ulonglong)dVar21 >> 0x20)) {
      iVar14 = 0;
      uVar6 = 0;
      if (0 < *(int *)(DAT_8c07450c + param_3)) {
        do {
          uVar7 = uVar6;
          if ((int)uVar6 < 0) {
            uVar7 = uVar6 + 7;
          }
          uVar7 = (uint)*(byte *)(iVar15 + ((int)uVar7 >> 3));
          if ((int)uVar6 < 0) {
            uVar11 = ~(~uVar6 + 1 & 7) + 1;
          }
          else {
            uVar11 = uVar6 & 7;
          }
          uVar11 = -uVar11;
          if ((int)uVar11 < 0) {
            uVar7 = (int)uVar7 >> (~uVar11 & 0x1f) + 1;
          }
          else {
            uVar7 = uVar7 << (uVar11 & 0x1f);
          }
          if ((uVar7 & 1) == 0) {
            iVar14 = iVar14 + 1;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < *(int *)(DAT_8c07450c + param_3));
      }
      if (0 < iVar14) goto LAB_8c0744e2;
    }
    iVar14 = *(int *)(DAT_8c07466c + param_3);
    uVar6 = 0;
    if (0 < iVar14) {
      do {
        if ((int)uVar6 < 0) {
          uVar7 = ~(~uVar6 + 1 & 7) + 1;
          uVar11 = uVar6 + 7;
        }
        else {
          uVar7 = uVar6 & 7;
          uVar11 = uVar6;
        }
        iVar12 = (int)uVar11 >> 3;
        uVar10 = -uVar7;
        uVar11 = (uint)*(byte *)(iVar12 + iVar15);
        if ((int)uVar10 < 0) {
          uVar11 = (int)uVar11 >> (~uVar10 & 0x1f) + 1;
        }
        else {
          uVar11 = uVar11 << (uVar10 & 0x1f);
        }
        *(int *)((int)puVar17 + -8) = iVar12;
        if ((uVar11 & 1) == 0) {
          uVar11 = (uint)*(byte *)(iVar12 + iVar13);
          uVar10 = -uVar7;
          if ((int)uVar10 < 0) {
            uVar11 = (int)uVar11 >> (~uVar10 & 0x1f) + 1;
          }
          else {
            uVar11 = uVar11 << (uVar10 & 0x1f);
          }
          if ((uVar11 & 1) != 0) {
            (*(code *)PTR_FUN_8c074678)(*(undefined4 *)(DAT_8c07466e + param_3),uVar6);
            iVar14 = (int)DAT_8c07466c;
            pbVar16 = (byte *)(iVar13 + *(int *)((int)puVar17 + -8));
            if ((int)uVar7 < 0) {
              bVar8 = (byte)(1 >> (~uVar7 & 0x1f) + 1);
            }
            else {
              bVar8 = (byte)(1 << (uVar7 & 0x1f));
            }
            *pbVar16 = *pbVar16 & ~bVar8;
            iVar14 = *(int *)(iVar14 + param_3);
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < iVar14);
    }
  }
LAB_8c0744e2:
  *(undefined4 *)(*(int *)(DAT_8c074504 + param_3) + 0x44) = 0;
  return;
}

