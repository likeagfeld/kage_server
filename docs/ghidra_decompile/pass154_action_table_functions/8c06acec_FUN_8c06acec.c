// entry: 8c06acec
// name: FUN_8c06acec
// signature: undefined FUN_8c06acec(void)


/* WARNING: Removing unreachable block (ram,0x8c06ad46) */

void FUN_8c06acec(uint param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 in_fr3;
  double dVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  ulonglong in_dr14;
  ulonglong uVar17;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar9 = (undefined8 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)uStack_24);
  }
  else {
    puVar9 = &uStack_24;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar9 + -4) = in_PR;
  *(undefined4 *)((int)puVar9 + -0xc) = 0;
  iVar7 = *(int *)((int)DAT_8c06ae56 + *(int *)(DAT_8c06ae54 + param_3));
  if ((iVar7 == 0) || (((int)*(char *)(DAT_8c06ae58 + param_3) & 0x80U) != 0)) {
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44(0x40000000,in_fr3);
    }
    else {
      dVar10 = (double)CONCAT44(0x3f800000,in_fr3) + (double)CONCAT44(0x3f800000,in_fr3);
    }
    iVar7 = *(int *)((int)DAT_8c06ae62 + *(int *)(DAT_8c06ae54 + param_3));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c06ae5a + param_3) = (int)((ulonglong)dVar10 >> 0x20);
    }
    else {
      *(double *)(DAT_8c06ae5a + param_3) = dVar10;
    }
    *(undefined4 *)((int)puVar9 + -0xc) = 1;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(DAT_8c06ae64,in_fr3);
    }
    else {
      dVar10 = (double)CONCAT44(PTR_FUN_8c06ae68,DAT_8c06ae64);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c06ae5a + param_3) = (int)((ulonglong)dVar10 >> 0x20);
    }
    else {
      *(double *)(DAT_8c06ae5a + param_3) = dVar10;
    }
  }
  uVar6 = SUB84(dVar10,0);
  uVar17 = in_dr14 & 0xffffffff;
  iVar3 = (*(code *)PTR_FUN_8c06ae68)();
  iVar4 = (*(code *)PTR_FUN_8c06ae6c)(iVar7);
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)iVar3;
  }
  else {
    fVar16 = (float)((ulonglong)(double)iVar3 >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(DAT_8c06ae70,uVar6);
  }
  else {
    dVar10 = (double)CONCAT44(PTR_FUN_8c06ae74,DAT_8c06ae70);
  }
  uVar13 = uVar17;
  if (in_FPSCR_SZ == '\0') {
    uVar13 = (ulonglong)param_1;
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)((fVar16 / (float)((ulonglong)dVar10 >> 0x20)) * (float)iVar4);
  }
  else {
    dVar10 = (double)CONCAT44(fVar16,(float)iVar4) / dVar10;
    iVar3 = (int)(dVar10 * dVar10);
  }
  (*(code *)PTR_FUN_8c06ae74)(uVar13,iVar7,iVar3);
  uVar6 = *(undefined4 *)((int)DAT_8c06ae5c + *(int *)(DAT_8c06ae54 + param_3));
  iVar7 = (*(code *)PTR_FUN_8c06ae78)(uVar6);
  puVar1 = PTR_FUN_8c06ae7c;
  if (0 < iVar7) {
    *(uint *)((int)puVar9 + -8) = (uint)(*(int *)((int)puVar9 + -0xc) == 0);
    iVar3 = 0;
    iVar4 = 0;
    do {
      uVar11 = (uint)uVar13;
      iVar8 = *(int *)(DAT_8c06ae54 + param_3);
      uVar5 = (*(code *)puVar1)(uVar6,iVar3,0);
      uVar13 = uVar17;
      if (in_FPSCR_SZ == '\0') {
        uVar13 = (ulonglong)uVar11;
      }
      uVar12 = (uint)uVar13;
      (*(code *)PTR_FUN_8c06ae80)
                (uVar13,*(undefined4 *)(iVar4 + *(int *)(DAT_8c06ae5e + iVar8)),uVar5);
      iVar8 = *(int *)(DAT_8c06ae54 + param_3);
      uVar5 = (*(code *)puVar1)(uVar6,iVar3,0);
      uVar11 = (uint)uVar17;
      if (in_FPSCR_SZ == '\0') {
        uVar11 = uVar12;
      }
      (*(code *)PTR_FUN_8c06ae84)(*(undefined4 *)(iVar4 + *(int *)(DAT_8c06ae5e + iVar8)),uVar5);
      uVar13 = uVar17;
      if (in_FPSCR_SZ == '\0') {
        uVar13 = (ulonglong)uVar11;
      }
      (*(code *)PTR_FUN_8c06ae88)
                (*(undefined4 *)
                  (iVar4 + *(int *)((int)DAT_8c06ae5e + *(int *)(DAT_8c06ae54 + param_3))),0);
      (*(code *)PTR_FUN_8c06ae8c)
                (*(undefined4 *)
                  (iVar4 + *(int *)((int)DAT_8c06ae5e + *(int *)(DAT_8c06ae54 + param_3))),
                 *(undefined4 *)((int)puVar9 + -8));
      iVar7 = iVar7 + -1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar7 != 0);
  }
  uVar5 = (undefined4)uVar13;
  uVar14 = (undefined4)param_2;
  if (*(int *)((int)puVar9 + -0xc) == 0) {
    iVar3 = 0;
    iVar7 = (*(code *)PTR_FUN_8c06af24)(uVar6);
    puVar1 = PTR_FUN_8c06af28;
    uVar5 = (undefined4)uVar13;
    uVar14 = (undefined4)param_2;
    if (0 < iVar7) {
      iVar4 = 0;
      do {
        iVar8 = (*(code *)puVar1)(uVar6,iVar3,2);
        uVar11 = (uint)uVar13;
        if (iVar8 < 4) {
          iVar8 = *(int *)(DAT_8c06af20 + param_3);
          uVar5 = (*(code *)puVar1)(uVar6,iVar3,0);
          uVar13 = uVar17;
          if (in_FPSCR_SZ == '\0') {
            uVar13 = (ulonglong)uVar11;
          }
          uVar12 = (uint)uVar13;
          (*(code *)PTR_FUN_8c06af2c)
                    (uVar13,*(undefined4 *)(iVar4 + *(int *)(DAT_8c06af22 + iVar8)),uVar5);
          iVar8 = *(int *)(DAT_8c06af20 + param_3);
          uVar5 = (*(code *)puVar1)(uVar6,iVar3,0);
          uVar11 = (uint)uVar17;
          if (in_FPSCR_SZ == '\0') {
            uVar11 = uVar12;
          }
          (*(code *)PTR_FUN_8c06af30)(*(undefined4 *)(iVar4 + *(int *)(DAT_8c06af22 + iVar8)),uVar5)
          ;
          uVar13 = uVar17;
          if (in_FPSCR_SZ == '\0') {
            uVar13 = (ulonglong)uVar11;
          }
          (*(code *)PTR_FUN_8c06af34)
                    (*(undefined4 *)
                      (iVar4 + *(int *)((int)DAT_8c06af22 + *(int *)(DAT_8c06af20 + param_3))),0);
        }
        uVar5 = (undefined4)uVar13;
        uVar14 = (undefined4)param_2;
        iVar7 = iVar7 + -1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar7 != 0);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    uVar15 = CONCAT44(DAT_8c06ae98,uVar14);
    uVar5 = DAT_8c06ae90;
  }
  else {
    uVar15 = CONCAT44(PTR_FUN_8c06ae9c,DAT_8c06ae98);
  }
  uVar13 = CONCAT44(0x3f800000,uVar5);
  iVar4 = 0;
  (*(code *)PTR_FUN_8c06ae9c)(uVar13,uVar15,DAT_8c06ae94,0xffffffff);
  iVar7 = (int)DAT_8c06ae60;
  iVar3 = 8;
  do {
    if (*(int *)(param_3 + iVar7 + iVar4 * 4) != 0) {
      uVar2 = uVar17;
      if (in_FPSCR_SZ == '\0') {
        uVar2 = uVar13 & 0xffffffff;
      }
      uVar13 = uVar2;
      (*(code *)PTR_FUN_8c06aea0)(uVar13,*(int *)(param_3 + iVar7 + iVar4 * 4) + 0x10,0);
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar3 != 0);
  *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) & 0xfffffff7;
  return;
}

