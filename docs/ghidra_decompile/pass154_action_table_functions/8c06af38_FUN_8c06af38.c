// entry: 8c06af38
// name: FUN_8c06af38
// signature: undefined FUN_8c06af38(void)


undefined4 FUN_8c06af38(undefined4 param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  undefined8 in_dr14;
  bool bVar16;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_24;
  
  iVar3 = DAT_8c06b074;
  if (in_FPSCR_SZ == '\0') {
    puVar9 = (undefined8 *)((int)&uStack_24 + 4);
    uStack_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_24);
  }
  else {
    puVar9 = &uStack_24;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar9 + -4) = in_PR;
  iVar7 = *(int *)((int)DAT_8c06b062 + *(int *)(DAT_8c06b060 + param_3));
  bVar16 = false;
  if ((iVar7 == 0) || (((int)*(char *)(DAT_8c06b064 + param_3) & 0x80U) != 0)) {
    bVar16 = true;
    iVar7 = *(int *)((int)DAT_8c06b066 + *(int *)(DAT_8c06b060 + param_3));
  }
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(*(undefined4 *)(DAT_8c06b074 + 0x34),param_1);
  }
  else {
    uVar10 = *(ulonglong *)(DAT_8c06b074 + 0x34);
  }
  (*(code *)PTR_FUN_8c06b078)(uVar10,iVar7);
  uVar14 = (uint)in_dr14;
  (*(code *)PTR_FUN_8c06b07c)(iVar7,0);
  if (in_FPSCR_SZ == '\0') {
    uVar12 = (ulonglong)param_2;
  }
  else {
    uVar12 = *(ulonglong *)(iVar3 + 0x34);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar12 = (ulonglong)uVar14;
  }
  uVar6 = *(undefined4 *)((int)DAT_8c06b068 + *(int *)(DAT_8c06b060 + param_3));
  iVar3 = (*(code *)PTR_FUN_8c06b080)(uVar6);
  puVar1 = PTR_FUN_8c06b084;
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      uVar2 = uVar12;
      if (in_FPSCR_SZ == '\0') {
        uVar2 = uVar10 & 0xffffffff;
      }
      uVar10 = uVar2;
      (*(code *)puVar1)(uVar10,*(undefined4 *)
                                (iVar8 + *(int *)((int)DAT_8c06b06a +
                                                 *(int *)(DAT_8c06b060 + param_3))));
      iVar3 = iVar3 + -1;
      iVar8 = iVar8 + 4;
    } while (iVar3 != 0);
  }
  iVar3 = (*(code *)PTR_FUN_8c06b088)(uVar6);
  puVar1 = PTR_FUN_8c06b084;
  uVar15 = (uint)uVar12;
  uVar14 = (uint)uVar10;
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      uVar2 = uVar12;
      if (in_FPSCR_SZ == '\0') {
        uVar2 = uVar10 & 0xffffffff;
      }
      uVar10 = uVar2;
      (*(code *)puVar1)(uVar10,*(undefined4 *)
                                (iVar8 + *(int *)((int)DAT_8c06b06c +
                                                 *(int *)(DAT_8c06b060 + param_3))));
      uVar15 = (uint)uVar12;
      uVar14 = (uint)uVar10;
      iVar3 = iVar3 + -1;
      iVar8 = iVar8 + 4;
    } while (iVar3 != 0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)(DAT_8c06b06e + param_3),
                              *(undefined4 *)(DAT_8c06b074 + 0x34));
  }
  else {
    dVar13 = *(double *)(DAT_8c06b06e + param_3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - SUB84(dVar13,0),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 - dVar13;
  }
  uVar4 = (undefined4)((ulonglong)dVar13 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c06b06e + param_3) = uVar4;
  }
  else {
    *(double *)(DAT_8c06b06e + param_3) = dVar13;
  }
  if (bVar16) {
    if ((*(uint *)(param_3 + 0x2c) & 8) == 0) {
      (*(code *)PTR_FUN_8c06b098)(*(undefined4 *)(param_3 + DAT_8c06b070));
      *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | 8;
    }
    dVar11 = (double)(ulonglong)uVar15;
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(DAT_8c06b06e + param_3),SUB84(dVar13,0));
    }
    else {
      dVar13 = *(double *)(DAT_8c06b06e + param_3);
    }
    if (in_FPSCR_PR == '\0') {
      bVar16 = 0.0 < (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      bVar16 = dVar11 < dVar13;
    }
    if (bVar16) {
      return 0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)(ulonglong)uVar14;
    }
    (*(code *)PTR_FUN_8c06b094)
              (dVar11,*(undefined4 *)((int)DAT_8c06b066 + *(int *)(DAT_8c06b060 + param_3)),0);
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(uVar4,DAT_8c06b08c);
    }
    if ((in_FPSCR_PR == '\0' && (float)((ulonglong)dVar13 >> 0x20) < SUB84(dVar13,0)) &&
       ((*(uint *)(param_3 + 0x2c) & 8) == 0)) {
      (*(code *)PTR_FUN_8c06b150)(*(undefined4 *)(param_3 + DAT_8c06b148));
      *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | 8;
    }
    iVar3 = (*(code *)PTR_FUN_8c06b090)(iVar7);
    if (iVar3 != 0) {
      return 0;
    }
    uVar12 = (ulonglong)uVar15;
    iVar3 = 0;
    uVar10 = uVar12;
    if (in_FPSCR_SZ == '\0') {
      uVar10 = (ulonglong)uVar14;
    }
    (*(code *)PTR_FUN_8c06b160)
              (uVar10,*(undefined4 *)((int)DAT_8c06b14e + *(int *)(DAT_8c06b14a + param_3)),0);
    iVar7 = (*(code *)PTR_FUN_8c06b164)(uVar6);
    puVar1 = PTR_FUN_8c06b168;
    if (0 < iVar7) {
      iVar8 = 0;
      do {
        iVar5 = (*(code *)puVar1)(uVar6,iVar3,2);
        uVar14 = (uint)uVar10;
        if (iVar5 < 4) {
          iVar5 = *(int *)(DAT_8c06b14a + param_3);
          uVar4 = (*(code *)puVar1)(uVar6,iVar3,1);
          uVar10 = uVar12;
          if (in_FPSCR_SZ == '\0') {
            uVar10 = (ulonglong)uVar14;
          }
          uVar15 = (uint)uVar10;
          (*(code *)PTR_FUN_8c06b154)
                    (uVar10,*(undefined4 *)(iVar8 + *(int *)(DAT_8c06b14c + iVar5)),uVar4);
          iVar5 = *(int *)(DAT_8c06b14a + param_3);
          uVar4 = (*(code *)puVar1)(uVar6,iVar3,1);
          uVar14 = (uint)uVar12;
          if (in_FPSCR_SZ == '\0') {
            uVar14 = uVar15;
          }
          (*(code *)PTR_FUN_8c06b158)(*(undefined4 *)(iVar8 + *(int *)(DAT_8c06b14c + iVar5)),uVar4)
          ;
          uVar10 = uVar12;
          if (in_FPSCR_SZ == '\0') {
            uVar10 = (ulonglong)uVar14;
          }
          (*(code *)PTR_FUN_8c06b15c)
                    (*(undefined4 *)
                      (iVar8 + *(int *)((int)DAT_8c06b14c + *(int *)(DAT_8c06b14a + param_3))),0);
        }
        iVar7 = iVar7 + -1;
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 4;
      } while (iVar7 != 0);
    }
  }
  return 1;
}

