// entry: 8c073f36
// name: FUN_8c073f36
// signature: undefined FUN_8c073f36(void)


/* WARNING: Removing unreachable block (ram,0x8c074234) */

void FUN_8c073f36(double param_1,double param_2,int param_3)

{
  double *pdVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  char *pcVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_30;
  
  if (((int)*(char *)(param_3 + 0x12) & (int)DAT_8c073f74) == 0xf) {
    iVar18 = 0;
    (*(code *)PTR_FUN_8c0740f4)(param_3);
    piVar15 = *(int **)(*(int *)(DAT_8c0740e4 + param_3) + 0x5c);
    piVar16 = *(int **)(*(int *)(DAT_8c0740e4 + param_3) + 0x58);
    iVar7 = *(int *)(DAT_8c0740e6 + param_3);
    iVar17 = 0x18;
    do {
      iVar2 = (*(code *)PTR_FUN_8c0740f8)(4,(int)piVar15 + iVar18 * 6 + 6);
      if (iVar2 == 6) {
        iVar2 = (*(code *)PTR_FUN_8c0740f8)(4,(int)piVar16 + iVar18 * 6 + 6);
        uVar3 = DAT_8c0740fc;
        if (iVar2 == 4) {
          iVar2 = iVar18 * 6;
          *(byte *)((int)piVar16 + iVar2 + 7) = *(byte *)((int)piVar16 + iVar2 + 7) & 0xf;
          *(byte *)((int)piVar15 + iVar18 * 6 + 7) = *(byte *)((int)piVar15 + iVar18 * 6 + 7) & 0xf;
          *(ushort *)((int)piVar16 + iVar2 + 8) =
               *(ushort *)((int)piVar16 + iVar2 + 8) & (ushort)uVar3;
        }
LAB_8c074008:
        (*(code *)PTR_FUN_8c074100)
                  ((int)(short)(*(ushort *)((int)piVar15 + iVar18 * 6 + 8) & DAT_8c0740e8),
                   (int)DAT_8c0740ea);
      }
      else {
        iVar2 = (*(code *)PTR_FUN_8c0742f8)(4,(int)piVar15 + iVar18 * 6 + 6);
        if ((iVar2 != 5) ||
           ((iVar2 = (*(code *)PTR_FUN_8c0742f8)(4,(int)piVar16 + iVar18 * 6 + 6), iVar2 != 4 &&
            (iVar2 = (*(code *)PTR_FUN_8c0742f8)(4,(int)piVar16 + iVar18 * 6 + 6), iVar2 != 0))))
        goto LAB_8c074008;
        uVar9 = (*(code *)PTR_FUN_8c0742fc)(*(undefined4 *)(DAT_8c0742e8 + param_3),iVar18);
        uVar11 = *piVar15 + (int)(short)(*(ushort *)((int)piVar15 + iVar18 * 6 + 8) & DAT_8c0742ea);
        uVar12 = (*(code *)PTR_FUN_8c074300)(*(undefined4 *)(DAT_8c0742ec + param_3));
        iVar2 = (*(code *)PTR_FUN_8c0742f8)(4,(int)piVar16 + iVar18 * 6 + 6);
        if (iVar2 == 4) {
          if (uVar9 == uVar11) goto LAB_8c07421a;
        }
        else if (uVar9 < uVar11) {
LAB_8c07421a:
          if (uVar12 <= uVar11) {
            iVar2 = *(int *)(DAT_8c0742ee + param_3);
            fVar21 = (float)(int)(uVar11 - uVar12);
            dVar20 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),fVar21);
            if ((int)(uVar11 - uVar12) < 0) {
              if (in_FPSCR_SZ == '\0') {
                param_1 = (double)CONCAT44(DAT_8c074304,SUB84(param_1,0));
              }
              else {
                param_1 = (double)CONCAT44(DAT_8c074308,DAT_8c074304);
              }
              if (in_FPSCR_PR == '\0') {
                dVar20 = (double)(ulonglong)(uint)(fVar21 + (float)((ulonglong)param_1 >> 0x20));
              }
              else {
                dVar20 = dVar20 + param_1;
              }
            }
            if (in_FPSCR_SZ == '\0') {
              param_2 = (double)CONCAT44(*(undefined4 *)DAT_8c074308,SUB84(dVar20,0));
            }
            else {
              param_2 = *DAT_8c074308;
            }
            if (in_FPSCR_PR == '\0') {
              fVar21 = (float)((ulonglong)param_2 >> 0x20);
              param_2 = (double)CONCAT44(fVar21,SUB84(param_2,0) / fVar21);
            }
            else {
              param_2 = param_2 / param_2;
            }
            puVar13 = *(ushort **)(DAT_8c0742f0 + iVar2);
            iVar19 = 0;
            if (0 < iVar7) {
              do {
                if ((*puVar13 & 1) == 0) break;
                iVar19 = iVar19 + 1;
                puVar13 = (ushort *)((int)puVar13 + (int)DAT_8c0742f2);
              } while (iVar19 < iVar7);
            }
            if (iVar19 < iVar7) {
              uVar3 = (*(code *)PTR_FUN_8c0742f8)((int)DAT_8c0742f4,(int)piVar15 + iVar18 * 6 + 6);
              uVar4 = (*(code *)PTR_FUN_8c0742f8)((int)piVar15 + iVar18 * 6 + 4,6);
              uVar5 = (*(code *)PTR_FUN_8c0742f8)((int)piVar15 + iVar18 * 6 + 4,(int)DAT_8c0742f6);
              (*(code *)PTR_FUN_8c07430c)
                        (iVar2,iVar19,uVar3,uVar4,uVar5,
                         *(byte *)((int)piVar15 + iVar18 * 6 + 6) & 0xf,0);
              (*(code *)PTR_FUN_8c0743d0)(*(undefined4 *)(DAT_8c0742e8 + param_3),iVar18,iVar19);
              (*(code *)PTR_FUN_8c0743d4)(*(undefined4 *)(DAT_8c0743cc + param_3),iVar18,uVar11);
              pcVar14 = PTR_DAT_8c0743d8 + DAT_8c0743ce;
              *(byte *)((int)piVar15 + iVar18 * 6 + 7) =
                   *(byte *)((int)piVar15 + iVar18 * 6 + 7) & 0xf | 0x10;
              *(byte *)((int)piVar16 + iVar18 * 6 + 7) =
                   *(byte *)((int)piVar16 + iVar18 * 6 + 7) & 0xf | 0x10;
              if (*pcVar14 == '\0') {
                uStack_30 = *DAT_8c0743e8;
              }
              else {
                uStack_30 = *DAT_8c0743dc;
              }
              (*(code *)PTR_FUN_8c0743e0)(pcVar14[1]);
              (*(code *)PTR_FUN_8c0743e4)(uStack_30,pcVar14[2],pcVar14[3],0);
            }
            goto LAB_8c074008;
          }
          *(byte *)((int)piVar15 + iVar18 * 6 + 7) = *(byte *)((int)piVar15 + iVar18 * 6 + 7) & 0xf;
          *(byte *)((int)piVar16 + iVar18 * 6 + 7) = *(byte *)((int)piVar16 + iVar18 * 6 + 7) & 0xf;
        }
      }
      pdVar1 = DAT_8c074104;
      iVar17 = iVar17 + -1;
      iVar18 = iVar18 + 1;
    } while (iVar17 != 0);
    iVar7 = (int)DAT_8c0740e4;
    *piVar16 = *piVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(param_1,0));
    }
    else {
      dVar20 = *pdVar1;
    }
    iVar17 = *(int *)(*(int *)(iVar7 + param_3) + 0x6c);
    iVar7 = *(int *)(*(int *)(iVar7 + param_3) + 0x68);
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)(ulonglong)*(uint *)(DAT_8c0740ec + param_3);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(*(undefined4 *)(DAT_8c0740ee + param_3),SUB84(param_2,0));
    }
    else {
      dVar22 = *(double *)(DAT_8c0740ee + param_3);
    }
    if (in_FPSCR_PR == '\0') {
      fVar21 = SUB84(dVar22,0) - (float)((ulonglong)dVar22 >> 0x20);
    }
    else {
      fVar21 = SUB84(dVar22 - dVar22,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = (double)CONCAT44(DAT_8c074108,fVar21);
    }
    else {
      dVar22 = (double)CONCAT44(uRam8c07410c,DAT_8c074108);
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) /
                                (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar22,0));
    }
    else {
      dVar22 = dVar22 / dVar20;
    }
    if (in_FPSCR_PR == '\0' && SUB84(dVar22,0) < (float)((ulonglong)dVar22 >> 0x20)) {
      iVar18 = 0;
      uVar9 = 0;
      if (0 < *(int *)(DAT_8c0740f0 + param_3)) {
        do {
          uVar12 = uVar9;
          if ((int)uVar9 < 0) {
            uVar12 = uVar9 + 7;
          }
          uVar12 = (uint)*(byte *)(iVar17 + ((int)uVar12 >> 3));
          if ((int)uVar9 < 0) {
            uVar11 = ~(~uVar9 + 1 & 7) + 1;
          }
          else {
            uVar11 = uVar9 & 7;
          }
          uVar11 = -uVar11;
          if ((int)uVar11 < 0) {
            uVar12 = (int)uVar12 >> (~uVar11 & 0x1f) + 1;
          }
          else {
            uVar12 = uVar12 << (uVar11 & 0x1f);
          }
          if ((uVar12 & 1) == 0) {
            iVar18 = iVar18 + 1;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < *(int *)(DAT_8c0740f0 + param_3));
      }
      if (0 < iVar18) goto LAB_8c073f56;
    }
    iVar18 = *(int *)(DAT_8c0740f0 + param_3);
    uVar9 = 0;
    if (0 < iVar18) {
      do {
        if ((int)uVar9 < 0) {
          uVar12 = ~(~uVar9 + 1 & 7) + 1;
          uVar11 = uVar9 + 7;
        }
        else {
          uVar12 = uVar9 & 7;
          uVar11 = uVar9;
        }
        iVar2 = (int)uVar11 >> 3;
        uVar8 = -uVar12;
        uVar11 = (uint)*(byte *)(iVar2 + iVar17);
        if ((int)uVar8 < 0) {
          uVar11 = (int)uVar11 >> (~uVar8 & 0x1f) + 1;
        }
        else {
          uVar11 = uVar11 << (uVar8 & 0x1f);
        }
        if ((uVar11 & 1) == 0) {
          uVar8 = -uVar12;
          uVar11 = (uint)*(byte *)(iVar2 + iVar7);
          if ((int)uVar8 < 0) {
            uVar11 = (int)uVar11 >> (~uVar8 & 0x1f) + 1;
          }
          else {
            uVar11 = uVar11 << (uVar8 & 0x1f);
          }
          if ((uVar11 & 1) != 0) {
            (*(code *)PTR_FUN_8c074164)(*(undefined4 *)(DAT_8c074160 + param_3),uVar9);
            iVar18 = (int)DAT_8c074162;
            pbVar10 = (byte *)(iVar7 + iVar2);
            if ((int)uVar12 < 0) {
              bVar6 = (byte)(1 >> (~uVar12 & 0x1f) + 1);
            }
            else {
              bVar6 = (byte)(1 << (uVar12 & 0x1f));
            }
            *pbVar10 = *pbVar10 & ~bVar6;
            iVar18 = *(int *)(iVar18 + param_3);
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < iVar18);
    }
  }
LAB_8c073f56:
  *(undefined4 *)(*(int *)(DAT_8c073f76 + param_3) + 0x44) = 0;
  return;
}

