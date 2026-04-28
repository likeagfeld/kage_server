// query addr: 0x8c0e6c52
// containing entry: 8c0e6c52
// name: FUN_8c0e6c52
// signature: undefined FUN_8c0e6c52(void)
// body addrs: 824


void FUN_8c0e6c52(undefined4 param_1,int param_2)

{
  double *pdVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar2 = PTR_DAT_8c0e6dd0;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(DAT_8c0e6dcc + 0x34));
  }
  else {
    dVar13 = *(double *)(param_2 + 0x60);
  }
  uVar9 = (uint)DAT_8c0e6dc8;
  if (in_FPSCR_PR == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) + SUB84(dVar13,0),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 + dVar13;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(param_2 + 0x60) = (int)((ulonglong)dVar13 >> 0x20);
  }
  else {
    *(double *)(param_2 + 0x60) = dVar13;
  }
  uVar11 = (uint)*(char *)(param_2 + 0x12);
  piVar6 = (int *)(puVar2 + (uVar11 & uVar9) * 0xc);
  iVar10 = param_2 + *piVar6;
  puVar7 = (undefined4 *)(puVar2 + (uVar11 & uVar9) * 0xc);
  if ((int)puVar7[1] < 0) {
    pcVar5 = *(code **)(puVar2 + (uVar11 & uVar9) * 0xc + 8);
  }
  else {
    piVar8 = (int *)(*(int *)(*(int *)(puVar2 + (uVar11 & uVar9) * 0xc + 8) + iVar10) +
                    *(int *)(puVar2 + (uVar11 & uVar9) * 0xc + 4) * 0xc);
    iVar10 = iVar10 + *piVar8;
    pcVar5 = (code *)piVar8[2];
  }
  (*pcVar5)(iVar10,piVar6[1],piVar6[2],*puVar7,puVar7[2]);
  uVar4 = uStack_14;
  iVar10 = *(int *)(param_2 + 0x40);
  uStack_14 = SUB84(dVar13,0);
  uVar3 = uStack_14;
  if (iVar10 == 1) {
LAB_8c0e6e30:
    if (*DAT_8c0e6f04 == 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(param_2 + 0x60),param_1);
        dVar14 = (double)CONCAT44(*(undefined4 *)(param_2 + 100),DAT_8c0e6f0c);
      }
      else {
        dVar13 = *(double *)(param_2 + 0x60);
        dVar14 = *(double *)(param_2 + 100);
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) -
                                  (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar13,0));
      }
      else {
        dVar13 = dVar13 - dVar14;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(*(undefined4 *)DAT_8c0e6f08,SUB84(dVar14,0));
      }
      else {
        dVar14 = *DAT_8c0e6f08;
      }
      if (in_FPSCR_PR == '\0') {
        bVar15 = SUB84(dVar14,0) / (float)((ulonglong)dVar14 >> 0x20) <
                 (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        bVar15 = dVar14 / dVar14 < dVar13;
      }
      uStack_14 = uVar4;
      if (!bVar15) {
        return;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        uStack_14 = 0;
      }
      local_18 = 1;
      if (in_FPSCR_SZ == '\0') {
        uStack_10 = 0;
      }
      else {
        uStack_c = 0;
        uStack_10 = uVar3;
      }
      uStack_c = FUN_8c0e7778(param_2);
      if (((int)*(char *)(*DAT_8c0e6f04 + 0x12) & uVar9) == 0) {
        (*(code *)PTR_FUN_8c0e6f14)(0x20,&local_18);
        *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x40);
        uVar4 = uStack_14;
      }
      else {
        uVar4 = uStack_14;
        if (*(int *)(param_2 + 0x2c) != *(int *)(param_2 + 0x40)) {
          (*(code *)PTR_FUN_8c0e6f14)(0x20,&local_18);
          *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x40);
          uVar4 = uStack_14;
        }
      }
LAB_8c0e6e6c:
      uStack_14 = uVar4;
      if (in_FPSCR_SZ == '\0') {
        pdVar1 = (double *)(param_2 + 0x60);
        dVar13 = (double)CONCAT44(*(undefined4 *)DAT_8c0e6f08,param_1);
      }
      else {
        pdVar1 = (double *)(param_2 + 100);
        dVar13 = *DAT_8c0e6f08;
      }
      dVar14 = *pdVar1;
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar14 - dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(DAT_8c0e6f0c,fVar12);
      }
      else {
        dVar14 = (double)CONCAT44(PTR_FUN_8c0e6f10,DAT_8c0e6f0c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) /
                                  (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar14,0));
      }
      else {
        dVar14 = dVar14 / dVar13;
      }
      if (in_FPSCR_PR != '\0' || SUB84(dVar14,0) <= (float)((ulonglong)dVar14 >> 0x20)) {
        return;
      }
      if ((*DAT_8c0e6f04 != 0) && (((int)*(char *)(*DAT_8c0e6f04 + 0x12) & uVar9) == 2)) {
        (*(code *)PTR_FUN_8c0e6f18)();
        *(undefined4 *)(param_2 + 0x2c) = 0;
      }
    }
    (*(code *)PTR_FUN_8c0e6f10)(param_2 + 0x3c,0x1b,0);
  }
  else {
    if (iVar10 == 2) goto LAB_8c0e6dec;
    if (iVar10 == 3) {
LAB_8c0e6f1c:
      if (*DAT_8c0e7068 == 0) {
        return;
      }
      if (in_FPSCR_SZ == '\0') {
        uStack_14 = 0;
      }
      local_18 = 1;
      if (in_FPSCR_SZ == '\0') {
        uStack_10 = 0;
      }
      else {
        uStack_c = 0;
        uStack_10 = uVar3;
      }
      uStack_c = FUN_8c0e7778(param_2);
      if (((int)*(char *)(*DAT_8c0e7068 + 0x12) & uVar9) == 0) {
        (*(code *)PTR_FUN_8c0e7074)(0x1f,&local_18);
        *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x40);
        return;
      }
      if (*(int *)(param_2 + 0x2c) != *(int *)(param_2 + 0x40)) {
        (*(code *)PTR_FUN_8c0e7074)(0x20,&local_18);
        *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x40);
        return;
      }
      iVar10 = (*(code *)PTR_FUN_8c0e706c)();
      if (iVar10 == -1) {
        return;
      }
      if (((int)*(char *)(*DAT_8c0e7068 + 0x12) & uVar9) != 2) {
        return;
      }
      (*(code *)PTR_FUN_8c0e7070)();
      *(undefined4 *)(param_2 + 0x2c) = 0;
      return;
    }
    if (iVar10 == 4) goto LAB_8c0e6e30;
    if (iVar10 == 5) goto LAB_8c0e6dec;
    if (iVar10 == 6) goto LAB_8c0e6f1c;
    if (iVar10 == 7) goto LAB_8c0e6e30;
    if (iVar10 == 8) goto LAB_8c0e6dec;
    if (iVar10 == 9) goto LAB_8c0e6f1c;
    if (iVar10 == 10) goto LAB_8c0e6e30;
    if (iVar10 != 0xb) {
      if (iVar10 == 0xc) goto LAB_8c0e6f1c;
      if (iVar10 == 0xd) goto LAB_8c0e6e6c;
      if (iVar10 != 0xe) {
        if (iVar10 == 0xf) goto LAB_8c0e6f1c;
        if (iVar10 == 0x10) goto LAB_8c0e6e30;
        if (iVar10 != 0x11) {
          if (iVar10 == 0x12) goto LAB_8c0e6f1c;
          if (iVar10 != 0x13) {
            if (iVar10 == 0x14) goto LAB_8c0e6e30;
            if (iVar10 != 0x15) {
              if (iVar10 == 0x16) goto LAB_8c0e6f1c;
              if (iVar10 == 0x17) goto LAB_8c0e6e30;
              if (iVar10 != 0x18) {
                if (iVar10 == 0x19) goto LAB_8c0e6f1c;
                if (iVar10 != 0x1a) {
                  return;
                }
              }
            }
          }
        }
      }
    }
LAB_8c0e6dec:
    if ((*DAT_8c0e6f04 != 0) && (((int)*(char *)(*DAT_8c0e6f04 + 0x12) & uVar9) == 2)) {
      (*(code *)PTR_FUN_8c0e6f18)();
      *(undefined4 *)(param_2 + 0x2c) = 0;
    }
  }
  return;
}

