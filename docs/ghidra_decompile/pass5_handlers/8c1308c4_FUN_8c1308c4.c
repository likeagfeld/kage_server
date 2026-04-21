// entry: 8c1308c4
// name: FUN_8c1308c4
// signature: undefined FUN_8c1308c4(void)


void FUN_8c1308c4(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  double dVar14;
  undefined8 in_dr12;
  double dVar15;
  float fVar16;
  undefined8 in_dr14;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 in_xd8;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  
  puVar1 = PTR_FUN_8c130a40;
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_20);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_20._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar12 = (undefined1 *)((int)&local_28 + 4);
    local_28 = CONCAT44((float)in_dr14,(undefined4)local_28);
  }
  else {
    puVar12 = auStack_30;
    uStack_20 = in_dr12;
    local_28 = in_dr14;
  }
  *(undefined4 *)(puVar12 + -4) = in_PR;
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)((ulonglong)(uint)(float)param_2 << 0x20);
  }
  else {
    dVar15 = (double)param_2;
  }
  puVar13 = DAT_8c130a3c;
  fVar16 = DAT_8c130a38;
  if (in_FPSCR_SZ != '\0') {
    in_xd14 = CONCAT44(DAT_8c130a3c,DAT_8c130a38);
    puVar13 = PTR_FUN_8c130a40;
    fVar16 = (float)in_dr14;
  }
  iVar10 = 3;
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)((ulonglong)dVar15 >> 0x20) * (float)puVar13 + fVar16;
  }
  iVar9 = (int)DAT_8c130a26;
  iVar8 = (int)DAT_8c130a28;
  uVar17 = (ulonglong)(uint)fVar16;
  iVar11 = 0;
  do {
    iVar2 = (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x7c),iVar11);
    puVar6 = (undefined4 *)(iVar2 + iVar8);
    puVar5 = (undefined4 *)(iVar2 + iVar9);
    uVar7 = *puVar6;
    puVar5[1] = puVar6[1];
    uVar4 = puVar6[2];
    *puVar5 = uVar7;
    puVar5[2] = uVar4;
    iVar2 = (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x7c),iVar11);
    uVar4 = (undefined4)(uVar17 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar12 + -0xc) = (int)uVar17;
      *(undefined4 *)(puVar12 + -8) = uVar4;
    }
    else {
      *(undefined8 *)(puVar12 + -0xc) = in_xd14;
      *(ulonglong *)(puVar12 + -8) = uVar17;
    }
    iVar10 = iVar10 + -1;
    iVar3 = (int)DAT_8c130a26;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar12 + -0x10) = uVar4;
      dVar14 = (double)CONCAT44(*(undefined4 *)(iVar3 + iVar2),*(undefined4 *)(puVar12 + -0x10));
    }
    else {
      *(ulonglong *)(puVar12 + -0x10) = uVar17;
      dVar14 = *(double *)(iVar3 + iVar2);
      in_xd8 = *(undefined8 *)(puVar12 + -0x10);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + SUB84(dVar14,0),SUB84(dVar14,0)
                               );
    }
    else {
      dVar14 = dVar14 + dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar3 + iVar2) = (int)((ulonglong)dVar14 >> 0x20);
    }
    else {
      *(double *)(iVar3 + iVar2) = dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(puVar12 + -0xc),
                                *(undefined4 *)(DAT_8c130a2a + iVar2));
    }
    else {
      in_xd8 = *(undefined8 *)(DAT_8c130a2a + iVar2);
      dVar14 = *(double *)(puVar12 + -0xc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar16 = SUB84(dVar14 + dVar14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(DAT_8c130a2a + iVar2) = fVar16;
    }
    else {
      *(undefined8 *)(DAT_8c130a2a + iVar2) = in_xd8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(DAT_8c130a2c + iVar2),*(undefined4 *)(puVar12 + -8))
      ;
    }
    else {
      dVar14 = *(double *)(DAT_8c130a2c + iVar2);
      in_xd8 = *(undefined8 *)(puVar12 + -8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + SUB84(dVar14,0),SUB84(dVar14,0)
                               );
    }
    else {
      dVar14 = dVar14 + dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c130a2c + iVar2) = (int)((ulonglong)dVar14 >> 0x20);
    }
    else {
      *(double *)(DAT_8c130a2c + iVar2) = dVar14;
    }
    iVar11 = iVar11 + 1;
  } while (iVar10 != 0);
  if (in_FPSCR_PR == '\0') {
    fVar16 = 2.0;
  }
  else {
    fVar16 = SUB84((double)CONCAT44(uVar4,0x3f800000) + (double)CONCAT44(uVar4,0x3f800000),0);
  }
  puVar13 = PTR_DAT_8c130a48;
  if (in_FPSCR_SZ == '\0') {
    puVar13 = DAT_8c130a44;
  }
  iVar11 = 3;
  uVar18 = CONCAT44(0x3f800000,fVar16);
  iVar10 = 3;
  if (in_FPSCR_PR == '\0') {
    uVar18 = CONCAT44(0x3f800000,(float)((ulonglong)dVar15 >> 0x20) * (float)puVar13 + fVar16);
  }
  do {
    iVar8 = (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x7c),iVar10);
    (**(code **)(*(int *)(iVar8 + 0x78) + 0x38))
              (uVar18,iVar8 + *(int *)(*(int *)(iVar8 + 0x78) + 0x30));
    iVar11 = iVar11 + -1;
    iVar10 = iVar10 + 1;
  } while (iVar11 != 0);
  return;
}

