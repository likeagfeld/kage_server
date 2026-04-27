// entry: 8c03e536
// name: FUN_8c03e536


void FUN_8c03e536(uint param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong in_dr14;
  float fVar15;
  bool bVar16;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar9 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar9 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar9 + -4) = in_PR;
  iVar6 = (int)DAT_8c03e57e;
  *(undefined2 *)(DAT_8c03e57c + param_3) = 0;
  dVar13 = (double)(in_dr14 & 0xffffffff);
  iVar6 = *(int *)((int)DAT_8c03e580 + *(int *)(DAT_8c03e572 + param_3)) +
          iVar6 * (uint)*(ushort *)(param_3 + 0x54);
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x20),param_2);
  }
  else {
    dVar14 = *(double *)(iVar6 + 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    bVar16 = 0.0 < (float)((ulonglong)dVar14 >> 0x20);
  }
  else {
    bVar16 = dVar13 < dVar14;
  }
  if (!bVar16) {
    dVar12 = dVar13;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)(ulonglong)param_1;
    }
    uVar10 = SUB84(dVar12,0);
    piVar3 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c03e6c0);
    (*(code *)piVar3[2])(param_3 + *piVar3,1);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(DAT_8c03e6c2 + param_3),SUB84(dVar14,0));
    }
    else {
      dVar14 = *(double *)(DAT_8c03e6c2 + param_3);
    }
    fVar15 = (float)((ulonglong)dVar13 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar16 = (float)((ulonglong)dVar14 >> 0x20) == fVar15;
    }
    else {
      bVar16 = dVar14 == dVar13;
    }
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | (int)DAT_8c03e6c4;
    puVar2 = PTR_DAT_8c03e6d0;
    if (bVar16) {
      pcVar8 = PTR_DAT_8c03e6d0 + DAT_8c03e6c6;
      cVar1 = *pcVar8;
      *(char **)((int)puVar9 + -0x1c) = pcVar8;
      if (cVar1 == '\0') {
        *(undefined4 *)((int)puVar9 + -0xc) = *DAT_8c03e704;
      }
      else {
        *(undefined4 *)((int)puVar9 + -0xc) = *DAT_8c03e6d4;
      }
      (*(code *)PTR_FUN_8c03e6d8)(pcVar8[1]);
      (*(code *)PTR_FUN_8c03e6dc)
                (*(undefined4 *)((int)puVar9 + -0xc),
                 *(undefined1 *)(*(int *)((int)puVar9 + -0x1c) + 2),
                 *(undefined1 *)(*(int *)((int)puVar9 + -0x1c) + 3),0);
      pcVar8 = puVar2 + DAT_8c03e6c8;
      if (*pcVar8 == '\0') {
        *(undefined4 *)((int)puVar9 + -0x18) = *DAT_8c03e704;
      }
      else {
        *(undefined4 *)((int)puVar9 + -0x18) = *DAT_8c03e6d4;
      }
      (*(code *)PTR_FUN_8c03e6d8)(pcVar8[1]);
      (*(code *)PTR_FUN_8c03e6dc)(*(undefined4 *)((int)puVar9 + -0x18),pcVar8[2],pcVar8[3],0);
      dVar14 = dVar13;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)(ulonglong)uVar10;
      }
      uVar10 = SUB84(dVar14,0);
      (*(code *)PTR_FUN_8c03e6e0)(dVar14,*(undefined4 *)(param_3 + 0x58),0x15);
      *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | DAT_8c03e6e4;
      uVar4 = *(undefined4 *)(param_3 + DAT_8c03e6ca + 0x20);
      *(int *)((int)puVar9 + -0x14) = param_3 + DAT_8c03e6ca;
      (*(code *)PTR_FUN_8c03e6e8)(uVar4,1);
      dVar14 = dVar13;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)(ulonglong)uVar10;
      }
      uVar10 = SUB84(dVar14,0);
      (*(code *)PTR_FUN_8c03e6e0)(dVar14,*(undefined4 *)(*(int *)((int)puVar9 + -0x14) + 0x20),0);
      dVar14 = dVar13;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)(ulonglong)uVar10;
      }
      uVar10 = SUB84(dVar14,0);
      (*(code *)PTR_FUN_8c03e6ec)(dVar14,*(undefined4 *)(*(int *)((int)puVar9 + -0x14) + 0x20),0);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)(ulonglong)uVar10;
      }
      uVar11 = SUB84(dVar13,0);
      (*(code *)PTR_FUN_8c03e6f0)(dVar13,*(undefined4 *)(*(int *)((int)puVar9 + -0x14) + 0x20),0);
      uVar5 = *(undefined4 *)(param_3 + 0x58);
      puVar7 = (undefined4 *)(*(int *)(param_3 + 0x28) + (int)DAT_8c03e6c0);
      uVar4 = *puVar7;
      *(undefined4 **)((int)puVar9 + -0x10) = puVar7;
      *(undefined4 *)((int)puVar9 + -8) = uVar4;
      uVar4 = (*(code *)PTR_FUN_8c03e6f4)(uVar5);
      if (in_FPSCR_SZ == '\0') {
        uVar4 = uVar11;
      }
      (**(code **)(*(int *)((int)puVar9 + -0x10) + 8))(uVar4,param_3 + *(int *)((int)puVar9 + -8),1)
      ;
      puVar2 = PTR_DAT_8c03e6f8;
      iVar6 = (int)DAT_8c03e6cc;
      *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | (int)DAT_8c03e6c4;
      puVar7 = (undefined4 *)(param_3 + DAT_8c03e6ce);
      uVar4 = *(undefined4 *)puVar2;
      puVar7[1] = *(undefined4 *)(puVar2 + 4);
      *puVar7 = uVar4;
      puVar7[2] = *(undefined4 *)(puVar2 + 8);
      *(undefined4 *)(iVar6 + param_3) = 1;
    }
    else {
      dVar14 = dVar13;
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(fVar15,uVar10);
      }
      uVar10 = SUB84(dVar14,0);
      (*(code *)PTR_FUN_8c03e6fc)(dVar14,param_3);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)(ulonglong)uVar10;
      }
      (*(code *)PTR_FUN_8c03e700)(dVar13,param_3);
    }
  }
  return;
}

