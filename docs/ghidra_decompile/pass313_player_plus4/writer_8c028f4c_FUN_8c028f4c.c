// entry: 8c028f4c
// name: FUN_8c028f4c


/* WARNING: Removing unreachable block (ram,0x8c029168) */
/* WARNING: Removing unreachable block (ram,0x8c029312) */

void FUN_8c028f4c(double param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  double in_dr2;
  undefined4 uVar16;
  float fVar17;
  float fVar19;
  undefined8 uVar18;
  ulonglong in_dr14;
  double dVar20;
  bool bVar21;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  uVar16 = SUB84(param_1,0);
  if (in_FPSCR_SZ == '\0') {
    puVar15 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar15 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  iVar11 = 0;
  *(undefined4 *)(DAT_8c0290d0 + param_2) = 0;
  iVar9 = 0;
  iVar14 = 8;
  iVar12 = (int)DAT_8c0290d4;
  *(undefined4 *)(DAT_8c0290d2 + param_2) = 0;
  *(undefined4 *)(DAT_8c0290d6 + param_2) = 0;
  *(undefined4 *)(DAT_8c0290d8 + param_2) = 0;
  *(undefined4 *)(DAT_8c0290da + param_2) = 0;
  do {
    puVar6 = (ushort *)
             (*(int *)((int)DAT_8c0290de + *(int *)(DAT_8c0290dc + param_2)) + iVar12 * iVar9);
    if ((((puVar6 != (ushort *)0x0) && ((*puVar6 & 1) != 0)) && ((puVar6[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c0290e0 + param_2) + 0xe + iVar9) == '\x02')) {
      iVar11 = iVar11 + 1;
    }
    iVar14 = iVar14 + -1;
    iVar9 = iVar9 + 1;
  } while (iVar14 != 0);
  *(undefined4 *)(DAT_8c0290e2 + param_2) = *(undefined4 *)(PTR_DAT_8c0290f4 + iVar11 * 4);
  *(undefined4 *)((int)puVar15 + -0x28) = *(undefined4 *)(DAT_8c0290e4 + param_2);
  *(undefined4 *)((int)puVar15 + -0x24) = *(undefined4 *)(DAT_8c0290e6 + param_2);
  uVar13 = *(uint *)(DAT_8c0290e8 + param_2) & 0xff;
  iVar9 = *(int *)(DAT_8c0290d2 + param_2);
  if (iVar9 < *(int *)(DAT_8c0290e2 + param_2)) {
    dVar20 = (double)(in_dr14 & 0xffffffff);
    do {
      uVar16 = SUB84(param_1,0);
      uVar5 = SUB84(in_dr2,0);
      iVar11 = *(int *)((int)puVar15 + -0x28) + -1;
      *(int *)((int)puVar15 + -0x20) = *(int *)((int)puVar15 + -0x24) + -1;
      if ((iVar11 < 0) || (*(int *)(DAT_8c0290ea + param_2) <= iVar11)) {
        bVar21 = false;
      }
      else if ((*(int *)((int)puVar15 + -0x20) < 0) ||
              (*(int *)(DAT_8c0290ec + param_2) <= *(int *)((int)puVar15 + -0x20))) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if (!bVar21) break;
      iVar14 = *(int *)((int)puVar15 + -0x28) + 1;
      *(int *)((int)puVar15 + -0x1c) = iVar14;
      *(int *)((int)puVar15 + -0x18) = *(int *)((int)puVar15 + -0x24) + 1;
      if ((iVar14 < 0) || (*(int *)(DAT_8c0290ea + param_2) <= *(int *)((int)puVar15 + -0x1c))) {
        bVar21 = false;
      }
      else if ((*(int *)((int)puVar15 + -0x18) < 0) ||
              (*(int *)(DAT_8c0290ec + param_2) <= *(int *)((int)puVar15 + -0x18))) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if (!bVar21) break;
      iVar3 = (int)DAT_8c0290ee;
      iVar4 = (int)DAT_8c0290f0;
      *(undefined4 *)(DAT_8c0290d8 + param_2) = 1;
      iVar14 = (int)DAT_8c0290d6;
      *(undefined2 *)(param_2 + iVar3 + iVar9 * 2) = 0;
      puVar1 = PTR___bfswu_8c0290f8;
      *(int *)(iVar14 + param_2) = iVar9;
      (*(code *)puVar1)(param_2 + iVar4 + iVar9 * 2,6);
      (*(code *)PTR___bfswu_8c029264)(*(uint *)((int)puVar15 + -0x24) & 0xffff,(int)DAT_8c029256);
      (*(code *)PTR___bfswu_8c029264)(*(uint *)((int)puVar15 + -0x28) & 0xffff,6);
      (*(code *)PTR___bfswu_8c029264)(*(uint *)((int)puVar15 + -0x24) & 0xffff,(int)DAT_8c029256);
      *(byte *)((int)puVar15 + -0x40) =
           (*(byte *)((int)puVar15 + -0x40) & (byte)DAT_8c029258 | 0x10) & (byte)DAT_8c02925a | 8;
      uVar2 = (*(code *)PTR_FUN_8c029268)(param_2,(undefined1 *)((int)puVar15 + -0x40));
      uVar13 = uVar13 & uVar2;
      puVar6 = (ushort *)(DAT_8c02926c + (*(int *)((int)puVar15 + -0x24) * 0x40 + iVar11) * 0x10);
      fVar19 = (float)((ulonglong)dVar20 >> 0x20);
      if ((*puVar6 & 1) != 0) {
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(*(undefined4 *)(puVar6 + 2),SUB84(param_1,0));
        }
        else {
          param_1 = *(double *)(puVar6 + 2);
        }
        if (in_FPSCR_PR == '\0') {
          bVar21 = (float)((ulonglong)param_1 >> 0x20) == fVar19;
        }
        else {
          bVar21 = param_1 == dVar20;
        }
        if (!bVar21) {
          uVar13 = uVar13 & 0xfffffffe;
        }
      }
      puVar7 = puVar6 + 0x10;
      if ((*puVar7 & 1) != 0) {
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(*(undefined4 *)(puVar6 + 0x12),SUB84(param_1,0));
        }
        else {
          param_1 = *(double *)(puVar6 + 0x12);
        }
        if (in_FPSCR_PR == '\0') {
          bVar21 = (float)((ulonglong)param_1 >> 0x20) == fVar19;
        }
        else {
          bVar21 = param_1 == dVar20;
        }
        if (!bVar21) {
          uVar13 = uVar13 & 0xfffffffd;
        }
      }
      puVar6 = (ushort *)((int)puVar7 + (-0x10 - DAT_8c02925c));
      if ((*puVar6 & 1) != 0) {
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(*(undefined4 *)((int)puVar7 + (-0xc - DAT_8c02925c)),
                                     SUB84(param_1,0));
        }
        else {
          param_1 = *(double *)((int)puVar7 + (-0xc - DAT_8c02925c));
        }
        if (in_FPSCR_PR == '\0') {
          bVar21 = (float)((ulonglong)param_1 >> 0x20) == fVar19;
        }
        else {
          bVar21 = param_1 == dVar20;
        }
        if (!bVar21) {
          uVar13 = uVar13 & 0xfffffffb;
        }
      }
      puVar6 = (ushort *)((int)puVar6 + (int)DAT_8c02925e);
      if ((*puVar6 & 1) != 0) {
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(*(undefined4 *)(puVar6 + 2),SUB84(param_1,0));
        }
        else {
          param_1 = *(double *)(puVar6 + 2);
        }
        if (in_FPSCR_PR == '\0') {
          bVar21 = (float)((ulonglong)param_1 >> 0x20) == fVar19;
        }
        else {
          bVar21 = param_1 == dVar20;
        }
        if (!bVar21) {
          uVar13 = uVar13 & 0xfffffff7;
        }
      }
      uVar16 = SUB84(param_1,0);
      if (uVar13 == 0) break;
      if ((uVar13 & 1) == 0) {
        iVar9 = 0;
      }
      else {
        *(undefined4 *)((int)puVar15 + -0x14) = 0;
        if ((*(int *)(DAT_8c029260 + param_2) != 0) &&
           (iVar9 = (*(code *)PTR_FUN_8c029270)(6), iVar9 < *(int *)((int)puVar15 + -0x28))) {
          *(undefined4 *)((int)puVar15 + -0x14) = 1;
        }
        if (*(int *)((int)puVar15 + -0x14) == 0) {
          iVar9 = 1;
        }
        else {
          iVar9 = 4;
        }
      }
      *(int *)((int)puVar15 + -0x50) = iVar9;
      if ((uVar13 & 2) == 0) {
        iVar14 = 0;
      }
      else {
        *(undefined4 *)((int)puVar15 + -0x10) = 0;
        if ((*(int *)(DAT_8c029260 + param_2) != 0) &&
           (iVar14 = (*(code *)PTR_FUN_8c029270)(6), *(int *)((int)puVar15 + -0x28) < iVar14)) {
          *(undefined4 *)((int)puVar15 + -0x10) = 1;
        }
        if (*(int *)((int)puVar15 + -0x10) == 0) {
          iVar14 = 1;
        }
        else {
          iVar14 = 4;
        }
      }
      *(int *)((int)puVar15 + -0x4c) = iVar14;
      if ((uVar13 & 4) == 0) {
        iVar3 = 0;
      }
      else {
        *(undefined4 *)((int)puVar15 + -0xc) = 0;
        if ((*(int *)(DAT_8c0293ba + param_2) != 0) &&
           (iVar3 = (*(code *)PTR_FUN_8c0293c8)((int)DAT_8c0293bc),
           *(int *)((int)puVar15 + -0x24) < iVar3)) {
          *(undefined4 *)((int)puVar15 + -0xc) = 1;
        }
        if (*(int *)((int)puVar15 + -0xc) == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = 4;
        }
      }
      *(int *)((int)puVar15 + -0x48) = iVar3;
      if ((uVar13 & 8) == 0) {
        iVar4 = 0;
      }
      else {
        *(undefined4 *)((int)puVar15 + -8) = 0;
        if ((*(int *)(DAT_8c0293ba + param_2) != 0) &&
           (iVar4 = (*(code *)PTR_FUN_8c0293c8)((int)DAT_8c0293bc),
           iVar4 < *(int *)((int)puVar15 + -0x24))) {
          *(undefined4 *)((int)puVar15 + -8) = 1;
        }
        if (*(int *)((int)puVar15 + -8) == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = 4;
        }
      }
      *(int *)((int)puVar15 + -0x44) = iVar4;
      *(int *)((int)puVar15 + -0x38) = iVar12;
      iVar12 = (*(code *)PTR__rand_8c0293cc)();
      if (in_FPSCR_PR == '\0') {
        fVar19 = (float)iVar12;
      }
      else {
        fVar19 = (float)((ulonglong)(double)iVar12 >> 0x20);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)CONCAT44(DAT_8c0293d0,uVar5);
      }
      else {
        in_dr2 = (double)CONCAT44(uRam8c0293d4,DAT_8c0293d0);
      }
      fVar17 = (float)(iVar9 + iVar14 + iVar3 + iVar4);
      if (in_FPSCR_PR == '\0') {
        param_1 = (double)CONCAT44(fVar19 / (float)((ulonglong)in_dr2 >> 0x20),fVar17);
      }
      else {
        param_1 = (double)CONCAT44(fVar19,fVar17) / in_dr2;
      }
      *(int *)((int)puVar15 + -0x2c) = -*(int *)((int)puVar15 + -0x50);
      *(int *)((int)puVar15 + -0x30) = -*(int *)((int)puVar15 + -0x4c);
      *(int *)((int)puVar15 + -0x34) = -*(int *)((int)puVar15 + -0x48);
      *(int *)((int)puVar15 + -0x3c) = iVar11;
      if (in_FPSCR_PR == '\0') {
        fVar19 = (float)((ulonglong)param_1 >> 0x20) * SUB84(param_1,0);
        param_1 = (double)CONCAT44(fVar19,SUB84(param_1,0));
        iVar9 = (int)fVar19;
      }
      else {
        param_1 = param_1 * param_1;
        iVar9 = (int)param_1;
      }
      uVar16 = SUB84(param_1,0);
      do {
        if ((*(int *)((int)puVar15 + -0x50) != 0) &&
           (iVar9 = iVar9 + *(int *)((int)puVar15 + -0x2c), iVar9 < 0)) {
          uVar13 = 0xd;
          iVar12 = *(int *)((int)puVar15 + -0x38);
          *(undefined4 *)((int)puVar15 + -0x28) = *(undefined4 *)((int)puVar15 + -0x3c);
          goto LAB_8c029376;
        }
        if ((*(int *)((int)puVar15 + -0x4c) != 0) &&
           (iVar9 = iVar9 + -*(int *)((int)puVar15 + -0x4c), iVar9 < 0)) {
          uVar13 = 0xe;
          iVar12 = *(int *)((int)puVar15 + -0x38);
          *(undefined4 *)((int)puVar15 + -0x28) = *(undefined4 *)((int)puVar15 + -0x1c);
          goto LAB_8c029376;
        }
        if ((*(int *)((int)puVar15 + -0x48) != 0) &&
           (iVar9 = iVar9 + -*(int *)((int)puVar15 + -0x48), iVar9 < 0)) {
          uVar13 = 7;
          iVar12 = *(int *)((int)puVar15 + -0x38);
          *(undefined4 *)((int)puVar15 + -0x24) = *(undefined4 *)((int)puVar15 + -0x20);
          goto LAB_8c029376;
        }
      } while ((*(int *)((int)puVar15 + -0x44) == 0) ||
              (iVar9 = iVar9 - *(int *)((int)puVar15 + -0x44), -1 < iVar9));
      uVar13 = 0xb;
      iVar12 = *(int *)((int)puVar15 + -0x38);
      *(undefined4 *)((int)puVar15 + -0x24) = *(undefined4 *)((int)puVar15 + -0x18);
LAB_8c029376:
      iVar9 = *(int *)(DAT_8c0293be + param_2) + 1;
      *(int *)(DAT_8c0293be + param_2) = iVar9;
    } while (iVar9 < *(int *)(DAT_8c0293c0 + param_2));
  }
  *(undefined4 *)(DAT_8c0293be + param_2) = 0;
  if (*(int *)(DAT_8c0293c2 + param_2) != 0) {
    if (*(int *)(DAT_8c0293c4 + param_2) < 3) {
      *(undefined4 *)(DAT_8c0293c2 + param_2) = 0;
      *(undefined4 *)(DAT_8c0293c4 + param_2) = 0;
      if (*(int *)(DAT_8c0293c2 + param_2) == 0) {
        return;
      }
    }
    puVar1 = PTR_DAT_8c029488;
    iVar9 = (int)DAT_8c02947c;
    uVar5 = *(undefined4 *)PTR_DAT_8c029488;
    *(undefined4 *)(DAT_8c02947a + param_2) = 1;
    puVar8 = (undefined4 *)(param_2 + iVar9);
    iVar9 = (int)DAT_8c02947e;
    uVar10 = *(undefined4 *)(puVar1 + 4);
    *puVar8 = uVar5;
    uVar5 = *(undefined4 *)(puVar1 + 8);
    iVar11 = *(int *)(iVar9 + param_2);
    iVar9 = (int)DAT_8c029480;
    puVar8[1] = uVar10;
    puVar8[2] = uVar5;
    *(undefined2 *)(param_2 + DAT_8c029482) =
         *(undefined2 *)(*(int *)(iVar9 + iVar11) + iVar12 * (uint)*(ushort *)(param_2 + 0x54) + 2);
    if (in_FPSCR_SZ == '\0') {
      uVar18 = CONCAT44(*(undefined4 *)(iVar11 + 0x18),uVar16);
    }
    else {
      uVar18 = *(undefined8 *)(iVar11 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c029484 + param_2) = (int)((ulonglong)uVar18 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c029484 + param_2) = uVar18;
    }
  }
                    /* WARNING: Read-only address (ram,0x8c0293d4) is written */
  return;
}

