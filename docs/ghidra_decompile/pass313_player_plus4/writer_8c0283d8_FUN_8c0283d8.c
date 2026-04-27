// entry: 8c0283d8
// name: FUN_8c0283d8


/* WARNING: Removing unreachable block (ram,0x8c0283fe) */
/* WARNING: Removing unreachable block (ram,0x8c0283ec) */
/* WARNING: Removing unreachable block (ram,0x8c02864c) */

void FUN_8c0283d8(undefined4 param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  short *psVar14;
  ushort *puVar15;
  int iVar16;
  double dVar17;
  undefined4 uVar18;
  double dVar19;
  undefined8 uVar20;
  float fVar21;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar10 = DAT_8c028558;
  puVar15 = (ushort *)
            (DAT_8c028558 +
            (*(int *)(DAT_8c02853a + param_2) * 0x40 + *(int *)(DAT_8c02853c + param_2)) * 0x10);
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)((ulonglong)*(uint *)(puVar15 + 2) << 0x20);
  }
  else {
    dVar19 = *(double *)(puVar15 + 2);
  }
  bVar3 = false;
  if (((float)((ulonglong)dVar19 >> 0x20) == SUB84(dVar19,0)) && ((*puVar15 & 0x20) == 0)) {
    if (*(int *)(DAT_8c02860c + param_2) != 0) {
      iVar8 = (int)DAT_8c028616;
      *(undefined4 *)(DAT_8c02860c + param_2) = 0;
      iVar10 = *(int *)(DAT_8c028618 + param_2);
      *(undefined2 *)(param_2 + DAT_8c02861c) =
           *(undefined2 *)
            (*(int *)(DAT_8c02861a + iVar10) + iVar8 * (uint)*(ushort *)(param_2 + 0x54) + 2);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(iVar10 + 0x18),SUB84(dVar19,0));
      }
      else {
        uVar20 = *(undefined8 *)(iVar10 + 0x18);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c02861e + param_2) = (int)((ulonglong)uVar20 >> 0x20);
        return;
      }
      *(undefined8 *)(DAT_8c02861e + param_2) = uVar20;
      return;
    }
  }
  else if (*(int *)(DAT_8c02853e + param_2) != 0) goto LAB_8c02841c;
  iVar8 = (*(code *)PTR__rand_8c028620)();
  puVar4 = PTR_DAT_8c02862c;
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44((float)iVar8,SUB84(dVar19,0));
  }
  else {
    dVar19 = (double)iVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),DAT_8c028624);
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) / SUB84(dVar19,0),SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 / dVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),DAT_8c028628);
  }
  if (in_FPSCR_PR == '\0') {
    fVar21 = (float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar19,0);
    dVar19 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
    iVar8 = (int)fVar21;
  }
  else {
    dVar19 = dVar19 * dVar19;
    iVar8 = (int)dVar19;
  }
  if ((*(short *)(*(int *)(DAT_8c02860e + param_2) + 0x60) <= iVar8) && ((*puVar15 & 1) != 0)) {
    *(undefined4 *)(DAT_8c028610 + param_2) = 0;
    uVar12 = *(undefined4 *)(puVar4 + 4);
    *(undefined4 *)(DAT_8c028612 + param_2) = 0;
    puVar11 = (undefined4 *)(param_2 + DAT_8c028614);
    uVar18 = *(undefined4 *)puVar4;
    puVar11[1] = uVar12;
    *puVar11 = uVar18;
    puVar5 = PTR_FUN_8c028630;
    puVar11[2] = *(undefined4 *)(puVar4 + 8);
    (*(code *)puVar5)(param_2);
    return;
  }
LAB_8c02841c:
  puVar4 = PTR_DAT_8c028ac4;
  uVar18 = SUB84(dVar19,0);
  iVar8 = *(int *)(DAT_8c028540 + param_2);
  uVar1 = *(ushort *)(param_2 + 0x54);
  psVar14 = (short *)(param_2 + DAT_8c028546);
  if (*psVar14 == *(short *)(*(int *)(DAT_8c028544 + iVar8) + (int)DAT_8c028542 * (uint)uVar1 + 2))
  {
    if (in_FPSCR_SZ == '\0') {
      uVar18 = *(undefined4 *)(iVar8 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c028acc,param_1);
      dVar19 = (double)CONCAT44(*(undefined4 *)(DAT_8c028abe + param_2),uVar18);
    }
    else {
      dVar17 = *(double *)PTR_DAT_8c028acc;
      dVar19 = *(double *)(DAT_8c028abe + param_2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) +
                                (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar19,0));
    }
    else {
      dVar19 = dVar19 + dVar17;
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar19 >> 0x20) < SUB84(dVar19,0)) {
      *(undefined4 *)(DAT_8c028ac0 + param_2) = 0;
      uVar12 = *(undefined4 *)puVar4;
      *(undefined4 *)(DAT_8c028ac2 + param_2) = 0;
      *(undefined4 *)(DAT_8c028aba + param_2) = 0;
      puVar11 = (undefined4 *)(param_2 + DAT_8c028abc);
      uVar18 = *(undefined4 *)(puVar4 + 4);
      *puVar11 = uVar12;
      puVar11[1] = uVar18;
      puVar5 = PTR_FUN_8c028ac8;
      puVar11[2] = *(undefined4 *)(puVar4 + 8);
      (*(code *)puVar5)(param_2);
      if (*(int *)(DAT_8c028aba + param_2) != 0) {
        return;
      }
      FUN_8c028f4c(param_2);
      return;
    }
  }
  else {
    iVar16 = (int)DAT_8c028542;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x18),uVar18);
    }
    else {
      dVar19 = *(double *)(iVar8 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c028548 + param_2) = (int)((ulonglong)dVar19 >> 0x20);
    }
    else {
      *(double *)(DAT_8c028548 + param_2) = dVar19;
    }
    *psVar14 = *(short *)(*(int *)(DAT_8c028544 + iVar8) + iVar16 * (uint)uVar1 + 2);
  }
  uVar18 = SUB84(dVar19,0);
  iVar8 = *(int *)(DAT_8c02854a + param_2);
  iVar16 = *(int *)(DAT_8c02854c + param_2);
  if (iVar8 <= iVar16) {
    iVar9 = (int)DAT_8c02854e;
    iVar13 = param_2 + DAT_8c028550;
    do {
      iVar6 = (*(code *)PTR_FUN_8c02855c)(param_2 + iVar9 + iVar8 * 2);
      iVar7 = (*(code *)PTR_FUN_8c02855c)(param_2 + iVar9 + iVar8 * 2);
      puVar5 = PTR_DAT_8c0288d4;
      puVar4 = PTR_DAT_8c0288d0;
      uVar18 = SUB84(dVar19,0);
      if ((((iVar6 != *(int *)(DAT_8c02853c + param_2)) ||
           (iVar7 != *(int *)(DAT_8c02853a + param_2))) || (*(int *)(DAT_8c028554 + param_2) < 6))
         || (10 < *(int *)(DAT_8c028554 + param_2))) {
        if (*(int *)(DAT_8c028734 + param_2) == 0) {
          return;
        }
        *(undefined4 *)(DAT_8c028736 + param_2) = 0;
        if (*(int *)(DAT_8c028738 + param_2) == 0) {
          iVar8 = (*(code *)PTR__rand_8c028a24)();
          puVar4 = PTR_DAT_8c028a30;
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)iVar8,uVar18);
          }
          else {
            dVar19 = (double)iVar8;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),DAT_8c028a28);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) / SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 / dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),DAT_8c028a2c);
          }
          if (in_FPSCR_PR == '\0') {
            iVar8 = (int)((float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar19,0));
          }
          else {
            iVar8 = (int)(dVar19 * dVar19);
          }
          if ((*(short *)(*(int *)(DAT_8c028a14 + param_2) + 0x60) <= iVar8) &&
             ((*(ushort *)(iVar10 + (iVar7 * 0x40 + iVar6) * 0x10) & 1) != 0)) {
            *(undefined4 *)(DAT_8c028a16 + param_2) = 0;
            uVar12 = *(undefined4 *)(puVar4 + 4);
            *(undefined4 *)(DAT_8c028a18 + param_2) = 0;
            puVar11 = (undefined4 *)(param_2 + DAT_8c028a1a);
            uVar18 = *(undefined4 *)puVar4;
            puVar11[1] = uVar12;
            *puVar11 = uVar18;
            puVar5 = PTR_FUN_8c028a34;
            puVar11[2] = *(undefined4 *)(puVar4 + 8);
            (*(code *)puVar5)(param_2);
            return;
          }
        }
        iVar8 = *(int *)(DAT_8c02873a + param_2);
        iVar10 = *(int *)(DAT_8c02873c + param_2);
        iVar16 = *(int *)(DAT_8c02873e + param_2);
        if (iVar7 == iVar8) {
          if (iVar10 < iVar6) {
            *(uint *)(DAT_8c028a16 + param_2) = *(uint *)(DAT_8c028a16 + param_2) | 2;
            *(undefined4 *)(DAT_8c028a20 + param_2) = 2;
          }
          else if (iVar6 < iVar10) {
            *(uint *)(DAT_8c028a16 + param_2) = *(uint *)(DAT_8c028a16 + param_2) | 1;
            *(undefined4 *)(DAT_8c028a20 + param_2) = 1;
          }
          else if (*(int *)(DAT_8c028a1c + param_2) == 0) {
            if (*(int *)(DAT_8c028a1e + param_2) < 6) {
              *(uint *)(DAT_8c028a16 + param_2) = *(uint *)(DAT_8c028a16 + param_2) | 2;
              *(undefined4 *)(DAT_8c028a20 + param_2) = 2;
              bVar3 = true;
            }
            else if (10 < *(int *)(DAT_8c028a1e + param_2)) {
              *(uint *)(DAT_8c028a16 + param_2) = *(uint *)(DAT_8c028a16 + param_2) | 1;
              *(undefined4 *)(DAT_8c028a20 + param_2) = 1;
              bVar3 = true;
            }
          }
          else if (*(int *)(DAT_8c028a1c + param_2) == 1) {
            if (*(int *)(DAT_8c028a1e + param_2) < 6) {
              *(uint *)(DAT_8c028a16 + param_2) = *(uint *)(DAT_8c028a16 + param_2) | 8;
              *(undefined4 *)(DAT_8c028a20 + param_2) = 8;
              bVar3 = true;
            }
            else if (10 < *(int *)(DAT_8c028a1e + param_2)) {
              *(uint *)(DAT_8c028a16 + param_2) = *(uint *)(DAT_8c028a16 + param_2) | 4;
              *(undefined4 *)(DAT_8c028a20 + param_2) = 4;
              bVar3 = true;
            }
          }
        }
        else if (iVar6 == iVar10) {
          if (iVar8 < iVar7) {
            *(uint *)(DAT_8c028a16 + param_2) = *(uint *)(DAT_8c028a16 + param_2) | 8;
            *(undefined4 *)(DAT_8c028a20 + param_2) = 8;
          }
          else if (iVar7 < iVar8) {
            *(uint *)(DAT_8c028740 + param_2) = *(uint *)(DAT_8c028740 + param_2) | 4;
            *(undefined4 *)(DAT_8c028736 + param_2) = 4;
          }
        }
        if (*(short *)(iVar16 * 2 + iVar13) == 2) {
          iVar16 = *(int *)(DAT_8c028742 + param_2);
          iVar10 = (*(code *)PTR_FUN_8c028750)(param_2 + DAT_8c028746);
          iVar9 = *(int *)(iVar16 + 0x20);
          iVar8 = (*(code *)PTR_FUN_8c028750)(6);
          if ((*(int *)((iVar9 * iVar10 + iVar8) * 4 + *(int *)(DAT_8c028748 + iVar16)) == 0) &&
             (*(int *)(DAT_8c02874a + param_2) != 0)) {
            *(undefined4 *)(DAT_8c028a22 + param_2) = 0;
            *(undefined4 *)(DAT_8c028a18 + param_2) = 0;
            return;
          }
        }
        if (bVar3) {
          return;
        }
        if ((*(uint *)(DAT_8c028736 + param_2) & *(uint *)(DAT_8c02874c + param_2)) != 0) {
          return;
        }
        if (*(int *)(DAT_8c02874a + param_2) != 0) {
          return;
        }
        *(undefined4 *)(DAT_8c028740 + param_2) = 0;
        puVar4 = PTR_DAT_8c028ac4;
        if (*(int *)(DAT_8c028738 + param_2) != 0) {
          *(undefined4 *)(DAT_8c028aba + param_2) = 0;
          puVar11 = (undefined4 *)(param_2 + DAT_8c028abc);
          uVar18 = *(undefined4 *)puVar4;
          puVar11[1] = *(undefined4 *)(puVar4 + 4);
          *puVar11 = uVar18;
          puVar5 = PTR_FUN_8c028ac8;
          puVar11[2] = *(undefined4 *)(puVar4 + 8);
          (*(code *)puVar5)(param_2);
          if (*(int *)(DAT_8c028aba + param_2) != 0) {
            return;
          }
          FUN_8c028f4c(param_2);
          return;
        }
        *(undefined4 *)(DAT_8c028734 + param_2) = 0;
        return;
      }
      if (iVar8 <= iVar16) {
        sVar2 = *(short *)(iVar8 * 2 + iVar13);
        if (sVar2 == 1) {
          iVar8 = (*(code *)PTR_FUN_8c0288c0)
                            (*(undefined4 *)(DAT_8c0288ae + param_2),*(undefined2 *)(param_2 + 0x54)
                            );
          if ((iVar8 != 0) &&
             (iVar8 = (*(code *)PTR_FUN_8c0288c4)
                                (param_2,*(undefined4 *)(DAT_8c0288b0 + param_2),
                                 *(undefined4 *)(DAT_8c0288b2 + param_2)), iVar8 != 0)) {
            *(uint *)(DAT_8c0288b4 + param_2) = *(uint *)(DAT_8c0288b4 + param_2) | 0x10;
            puVar4 = PTR_FUN_8c0288c8;
            *(undefined2 *)(iVar13 + *(int *)(DAT_8c0288b6 + param_2) * 2) = 0;
            iVar8 = (*(code *)puVar4)(param_2);
            if (iVar8 != 0) goto LAB_8c0284e6;
          }
          *(undefined4 *)(DAT_8c0288b8 + param_2) = 1;
          *(undefined4 *)(DAT_8c0288ba + param_2) = 0;
        }
        else {
          if (sVar2 == 2) {
            puVar11 = (undefined4 *)(param_2 + DAT_8c0288bc);
            uVar12 = *(undefined4 *)PTR_DAT_8c0288d0;
            puVar11[1] = *(undefined4 *)(PTR_DAT_8c0288d0 + 4);
            uVar18 = *(undefined4 *)(puVar4 + 8);
            *puVar11 = uVar12;
            puVar11[2] = uVar18;
            return;
          }
          if (sVar2 == 3) {
            puVar11 = (undefined4 *)(param_2 + DAT_8c0288bc);
            uVar12 = *(undefined4 *)PTR_DAT_8c0288d4;
            puVar11[1] = *(undefined4 *)(PTR_DAT_8c0288d4 + 4);
            uVar18 = *(undefined4 *)(puVar5 + 8);
            *puVar11 = uVar12;
            puVar11[2] = uVar18;
            return;
          }
          if (sVar2 == 4) {
            iVar8 = (*(code *)PTR_FUN_8c0288c0)
                              (*(undefined4 *)(DAT_8c0288ae + param_2),
                               *(undefined2 *)(param_2 + 0x54));
            if ((iVar8 != 0) &&
               (iVar8 = (*(code *)PTR_FUN_8c0288c4)
                                  (param_2,*(undefined4 *)(DAT_8c0288b0 + param_2),
                                   *(undefined4 *)(DAT_8c0288b2 + param_2)), iVar8 != 0)) {
              *(uint *)(DAT_8c0288b4 + param_2) = *(uint *)(DAT_8c0288b4 + param_2) | 0x10;
              puVar4 = PTR_FUN_8c0288cc;
              *(undefined2 *)(iVar13 + *(int *)(DAT_8c0288b6 + param_2) * 2) = 0;
              iVar8 = (*(code *)puVar4)(param_2);
              if (iVar8 != 0) goto LAB_8c0284e6;
            }
            *(undefined4 *)(DAT_8c0288b8 + param_2) = 1;
            *(undefined4 *)(DAT_8c0288ba + param_2) = 0;
          }
          else if (((sVar2 == 5) &&
                   (iVar8 = (*(code *)PTR_FUN_8c0288c0)
                                      (*(undefined4 *)(DAT_8c0288ae + param_2),
                                       *(undefined2 *)(param_2 + 0x54)), iVar8 != 0)) &&
                  (iVar8 = (*(code *)PTR_FUN_8c0288c4)
                                     (param_2,*(undefined4 *)(DAT_8c0288b0 + param_2),
                                      *(undefined4 *)(DAT_8c0288b2 + param_2)), iVar8 != 0)) {
            *(uint *)(DAT_8c0288b4 + param_2) = *(uint *)(DAT_8c0288b4 + param_2) | 0x10;
            *(undefined2 *)(iVar13 + *(int *)(DAT_8c0288b6 + param_2) * 2) = 0;
          }
        }
      }
LAB_8c0284e6:
      uVar18 = SUB84(dVar19,0);
      iVar8 = *(int *)(DAT_8c02854a + param_2) + 1;
      *(int *)(DAT_8c02854a + param_2) = iVar8;
      iVar16 = *(int *)(DAT_8c02854c + param_2);
    } while (iVar8 <= iVar16);
  }
  iVar10 = (int)DAT_8c028542;
  *(undefined4 *)(DAT_8c02853e + param_2) = 0;
  *(undefined4 *)(DAT_8c028556 + param_2) = 0;
  iVar8 = *(int *)(DAT_8c028540 + param_2);
  *psVar14 = *(short *)(*(int *)(DAT_8c028544 + iVar8) + iVar10 * (uint)*(ushort *)(param_2 + 0x54)
                       + 2);
  if (in_FPSCR_SZ == '\0') {
    uVar20 = CONCAT44(*(undefined4 *)(iVar8 + 0x18),uVar18);
  }
  else {
    uVar20 = *(undefined8 *)(iVar8 + 0x18);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c028548 + param_2) = (int)((ulonglong)uVar20 >> 0x20);
  }
  else {
    *(undefined8 *)(DAT_8c028548 + param_2) = uVar20;
  }
  return;
}

