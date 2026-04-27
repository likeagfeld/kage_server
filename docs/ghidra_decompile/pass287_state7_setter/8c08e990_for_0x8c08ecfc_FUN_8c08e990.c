// query addr: 0x8c08ecfc
// containing entry: 8c08e990
// name: FUN_8c08e990
// signature: undefined FUN_8c08e990(void)
// body addrs: 1318


/* WARNING: Removing unreachable block (ram,0x8c08eb36) */
/* WARNING: Removing unreachable block (ram,0x8c08ea4c) */
/* WARNING: Removing unreachable block (ram,0x8c08ea7a) */
/* WARNING: Removing unreachable block (ram,0x8c08eb52) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c08e990(double param_1,double param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,undefined4 param_7)

{
  byte bVar1;
  double *pdVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  double *pdVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 in_fr3;
  uint uVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 in_dr14;
  double dVar27;
  double in_xd0;
  double in_xd8;
  bool bVar28;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar16 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar16 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  *(undefined4 *)((int)puVar16 + -0xc) = param_7;
  (*(code *)PTR___bfswu_8c08eb14)(param_5 + 0x28);
  uVar14 = (uint)in_dr14;
  iVar10 = 0;
  iVar9 = 0;
  if (param_6 == 1) {
    iVar10 = -*(int *)((int)puVar16 + -0xc);
  }
  else if (param_6 == 2) {
    iVar10 = *(int *)((int)puVar16 + -0xc);
  }
  else if (param_6 == 4) {
    iVar9 = -*(int *)((int)puVar16 + -0xc);
  }
  else if (param_6 == 8) {
    iVar9 = *(int *)((int)puVar16 + -0xc);
  }
  (*(code *)PTR___bfswu_8c08eb14)(*(uint *)((int)puVar16 + -0xc) & 0xffff);
  pcVar8 = (code *)PTR_FUN_8c08edf8;
  *(undefined2 *)((int)puVar16 + -0x44) = *(undefined2 *)(param_5 + 2);
  if (*(int *)((int)puVar16 + 0x20) == 0) {
    (*(code *)PTR_FUN_8c08edf4)
              (*(undefined4 *)(param_4 + 8),(undefined1 *)((int)puVar16 + -0x44),
               (undefined1 *)((int)puVar16 + -0x40),(undefined1 *)((int)puVar16 + -0x38));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + -0x3c) = *(undefined4 *)(param_5 + 0x20);
    }
    else {
      *(undefined8 *)((int)puVar16 + -0x3c) = *(undefined8 *)(param_5 + 0x20);
    }
    uVar4 = (*pcVar8)();
    *(undefined4 *)((int)puVar16 + -8) = uVar4;
    iVar5 = (*pcVar8)((int)DAT_8c08ede8);
    uVar4 = extraout_fr1_00;
  }
  else {
    (*(code *)PTR__memcpy_8c08eb18)
              ((undefined1 *)((int)puVar16 + -0x44),*(int *)((int)puVar16 + 0x20),2);
    pcVar8 = (code *)PTR_FUN_8c08eb20;
    (*(code *)PTR_FUN_8c08eb1c)
              (*(undefined4 *)(param_4 + 8),(undefined1 *)((int)puVar16 + -0x44),
               (undefined1 *)((int)puVar16 + -0x40),(undefined1 *)((int)puVar16 + -0x38));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + -0x3c) = *(undefined4 *)(param_5 + 0x20);
    }
    else {
      *(undefined8 *)((int)puVar16 + -0x3c) = *(undefined8 *)(param_5 + 0x20);
    }
    uVar4 = (*pcVar8)();
    *(undefined4 *)((int)puVar16 + -8) = uVar4;
    iVar5 = (*pcVar8)((int)DAT_8c08eb10);
    uVar4 = extraout_fr1;
  }
  puVar3 = PTR___bfswu_8c08eca0;
  dVar27 = (double)(ulonglong)uVar14;
  pdVar13 = (double *)((int)puVar16 + -0x34);
  iVar6 = (int)(*(int *)(param_4 + 0x20) + (uint)(*(int *)(param_4 + 0x20) < 0)) >> 1;
  if (in_FPSCR_PR == '\0') {
    dVar23 = (double)CONCAT44((float)iVar6,(float)(*(int *)((int)puVar16 + -8) + iVar10));
  }
  else {
    dVar23 = (double)iVar6;
  }
  pdVar7 = (double *)((int)puVar16 + -0x2c);
  iVar10 = (int)(*(int *)(param_4 + 0x24) + (uint)(*(int *)(param_4 + 0x24) < 0)) >> 1;
  if (in_FPSCR_PR == '\0') {
    fVar19 = SUB84(dVar23,0) - (float)((ulonglong)dVar23 >> 0x20);
  }
  else {
    fVar19 = SUB84(dVar23 - dVar23,0);
  }
  if (in_FPSCR_SZ == '\0') {
    param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),DAT_8c08eb24);
    dVar23 = (double)CONCAT44(DAT_8c08eb28,in_fr3);
    *(float *)pdVar13 = fVar19;
  }
  else {
    dVar23 = (double)CONCAT44(DAT_8c08eb2c,DAT_8c08eb28);
    *pdVar13 = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(DAT_8c08eb2c,uVar4);
  }
  else {
    dVar25 = (double)CONCAT44(uRam8c08eb30,DAT_8c08eb2c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)(iVar5 + iVar9) - (float)iVar10;
  }
  else {
    dVar24 = (double)iVar10;
    fVar19 = SUB84(dVar24 - dVar24,0);
  }
  pdVar2 = (double *)((int)puVar16 + -0x28);
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar7 = fVar19;
    dVar24 = (double)CONCAT44(*(undefined4 *)pdVar13,fVar19);
  }
  else {
    *pdVar7 = in_xd8;
    dVar24 = *pdVar13;
  }
  fVar19 = SUB84(param_1,0);
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) + fVar19,SUB84(dVar24,0));
  }
  else {
    dVar24 = dVar24 + param_1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar13 = (int)((ulonglong)dVar24 >> 0x20);
  }
  else {
    *pdVar13 = dVar24;
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) * 1.0,SUB84(dVar24,0));
  }
  else {
    dVar24 = (double)CONCAT44(0x3f800000,SUB84(dVar24,0)) * dVar23;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),*(undefined4 *)pdVar7);
  }
  else {
    in_xd8 = *pdVar7;
  }
  fVar21 = (float)((ulonglong)dVar25 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar20 = SUB84(dVar24,0) + (float)((ulonglong)dVar24 >> 0x20) / fVar21;
  }
  else {
    fVar20 = SUB84(dVar24 / dVar25 + dVar24 / dVar25,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar7 = fVar20;
    dVar25 = (double)CONCAT44(fVar21,*(undefined4 *)pdVar13);
    *(undefined4 *)((int)puVar16 + -0x28) = *(undefined4 *)pdVar13;
    dVar24 = (double)CONCAT44(*(undefined4 *)pdVar2,fVar20);
    dVar26 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x2c),param_3);
  }
  else {
    *pdVar7 = in_xd8;
    in_xd0 = *pdVar13;
    *(double *)((int)puVar16 + -0x28) = in_xd0;
    dVar24 = *pdVar2;
    dVar26 = *(double *)((int)puVar16 + -0x2c);
  }
  fVar21 = (float)((ulonglong)dVar24 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar28 = 0.0 < fVar21;
  }
  else {
    bVar28 = dVar27 < dVar24;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + -0x24) = (int)((ulonglong)dVar26 >> 0x20);
  }
  else {
    *(double *)((int)puVar16 + -0x24) = dVar26;
  }
  pdVar13 = (double *)((int)puVar16 + -0x24);
  if (bVar28) {
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),0x40000000);
    }
    else {
      param_2 = (double)*(int *)(param_4 + 0x20);
    }
    fVar20 = (float)((ulonglong)param_2 >> 0x20);
    dVar18 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44(fVar21,fVar20);
      dVar18 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                SUB84(dVar24,0) / SUB84(param_2,0) + fVar19);
    }
    else {
      dVar24 = dVar24 / param_2 + param_1;
    }
    in_xd8 = dVar18;
    if (in_FPSCR_PR != '\0' || SUB84(dVar24,0) <= (float)((ulonglong)dVar24 >> 0x20)) {
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44(-fVar20,SUB84(param_2,0));
      }
      else {
        param_2 = -param_2;
      }
      do {
        if (in_FPSCR_PR == '\0') {
          dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) +
                                    (float)((ulonglong)param_2 >> 0x20),SUB84(dVar24,0));
        }
        else {
          dVar24 = dVar24 + param_2;
        }
        uVar4 = (undefined4)((ulonglong)dVar24 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar16 + -0x28) = uVar4;
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),uVar4);
          dVar24 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar24,0));
        }
        else {
          *(double *)((int)puVar16 + -0x28) = dVar24;
          dVar24 = *pdVar2;
        }
      } while (in_FPSCR_PR != '\0' || SUB84(dVar24,0) <= (float)((ulonglong)dVar24 >> 0x20));
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar28 = fVar21 < 0.0;
    }
    else {
      bVar28 = dVar24 < dVar27;
    }
    if (bVar28) {
      dVar18 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar4 = 0x40000000;
      }
      else {
        uVar4 = SUB84(dVar18 + dVar18,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar23 = (double)CONCAT44(DAT_8c08edfc,SUB84(dVar23,0));
      }
      else {
        dVar23 = (double)CONCAT44(uRam8c08ee00,DAT_8c08edfc);
      }
      if (in_FPSCR_PR == '\0') {
        param_1 = (double)CONCAT44((float)*(int *)(param_4 + 0x20),fVar19);
      }
      else {
        param_1 = (double)*(int *)(param_4 + 0x20);
      }
      fVar19 = (float)((ulonglong)param_1 >> 0x20);
      dVar18 = param_1;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(fVar19,uVar4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = -((float)((ulonglong)dVar18 >> 0x20) / SUB84(dVar18,0) +
                  (float)((ulonglong)dVar23 >> 0x20));
        param_2 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
        bVar28 = fVar20 < fVar21;
      }
      else {
        param_2 = -(dVar18 / dVar18 + dVar23);
        fVar20 = (float)((ulonglong)param_2 >> 0x20);
        bVar28 = param_2 < dVar24;
      }
      while (!bVar28) {
        dVar18 = dVar24;
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                    (int)((ulonglong)dVar24 >> 0x20));
          dVar18 = in_xd0;
        }
        if (in_FPSCR_PR == '\0') {
          dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar25,0) + fVar19);
        }
        else {
          dVar25 = dVar25 + param_1;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar16 + -0x28) = SUB84(dVar25,0);
          dVar24 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar24,0));
        }
        else {
          *(double *)((int)puVar16 + -0x28) = dVar18;
          dVar24 = *pdVar2;
        }
        in_xd0 = dVar18;
        if (in_FPSCR_PR == '\0') {
          bVar28 = fVar20 < (float)((ulonglong)dVar24 >> 0x20);
        }
        else {
          bVar28 = param_2 < dVar24;
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar24,0));
  }
  else {
    dVar24 = *pdVar13;
  }
  fVar19 = (float)((ulonglong)dVar24 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar28 = 0.0 < fVar19;
  }
  else {
    bVar28 = dVar27 < dVar24;
  }
  if (bVar28) {
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),0x40000000);
    }
    else {
      param_2 = (double)*(int *)(param_4 + 0x24);
    }
    fVar21 = (float)((ulonglong)param_2 >> 0x20);
    dVar23 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44(fVar19,fVar21);
      dVar23 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                                SUB84(dVar24,0) / SUB84(param_2,0) + SUB84(param_1,0));
    }
    else {
      dVar24 = dVar24 / param_2 + param_1;
    }
    in_xd8 = dVar23;
    if (in_FPSCR_PR != '\0' || SUB84(dVar24,0) <= (float)((ulonglong)dVar24 >> 0x20)) {
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44(-fVar21,SUB84(param_2,0));
      }
      else {
        param_2 = -param_2;
      }
      do {
        if (in_FPSCR_PR == '\0') {
          dVar23 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) +
                                    (float)((ulonglong)param_2 >> 0x20),SUB84(dVar24,0));
        }
        else {
          dVar23 = dVar24 + param_2;
        }
        uVar4 = (undefined4)((ulonglong)dVar23 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar16 + -0x24) = uVar4;
          dVar24 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar23,0));
          dVar26 = (double)CONCAT44(uVar4,SUB84(dVar26,0));
        }
        else {
          *(double *)((int)puVar16 + -0x24) = dVar23;
          dVar24 = *pdVar13;
          dVar26 = dVar23;
        }
      } while (in_FPSCR_PR != '\0' || SUB84(dVar24,0) <= (float)((ulonglong)dVar24 >> 0x20));
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar28 = fVar19 < 0.0;
    }
    else {
      bVar28 = dVar24 < dVar27;
    }
    if (bVar28) {
      dVar18 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar4 = 0x40000000;
      }
      else {
        uVar4 = SUB84(dVar18 + dVar18,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar23 = (double)CONCAT44(DAT_8c08edfc,SUB84(dVar23,0));
      }
      else {
        dVar23 = (double)CONCAT44(uRam8c08ee00,DAT_8c08edfc);
      }
      if (in_FPSCR_PR == '\0') {
        param_1 = (double)CONCAT44((float)*(int *)(param_4 + 0x24),SUB84(param_1,0));
      }
      else {
        param_1 = (double)*(int *)(param_4 + 0x24);
      }
      fVar21 = (float)((ulonglong)param_1 >> 0x20);
      dVar18 = param_1;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)CONCAT44(fVar21,uVar4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = -((float)((ulonglong)dVar18 >> 0x20) / SUB84(dVar18,0) +
                  (float)((ulonglong)dVar23 >> 0x20));
        param_2 = (double)CONCAT44(fVar20,SUB84(dVar18,0));
        bVar28 = fVar20 < fVar19;
      }
      else {
        param_2 = -(dVar18 / dVar18 + dVar23);
        fVar20 = (float)((ulonglong)param_2 >> 0x20);
        bVar28 = param_2 < dVar24;
      }
      while (!bVar28) {
        dVar23 = dVar24;
        if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar26,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + fVar21,SUB84(dVar23,0));
        }
        else {
          dVar26 = dVar23 + param_1;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar16 + -0x24) = (int)((ulonglong)dVar26 >> 0x20);
          dVar24 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar24,0));
        }
        else {
          *(double *)((int)puVar16 + -0x24) = dVar26;
          dVar24 = *pdVar13;
        }
        if (in_FPSCR_PR == '\0') {
          bVar28 = fVar20 < (float)((ulonglong)dVar24 >> 0x20);
        }
        else {
          bVar28 = param_2 < dVar24;
        }
      }
    }
  }
  iVar9 = *(int *)(param_4 + 0x20);
  dVar23 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
  if (in_FPSCR_PR == '\0') {
    uVar4 = 0x40000000;
  }
  else {
    uVar4 = SUB84(dVar23 + dVar23,0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar23 = (double)CONCAT44(0xbf800000,uVar4);
  }
  else {
    dVar23 = -(double)CONCAT44(0x3f800000,uVar4);
  }
  iVar10 = *(int *)(param_4 + 0x24);
  pdVar13 = (double *)((int)puVar16 + -0x1c);
  if (in_FPSCR_PR == '\0') {
    fVar19 = (float)iVar9 / SUB84(dVar23,0);
  }
  else {
    fVar19 = SUB84((double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),(float)iVar9) / dVar23,0);
  }
  dVar24 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(fVar19,fVar19);
  }
  fVar19 = (float)((ulonglong)dVar23 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44(-((float)((ulonglong)dVar24 >> 0x20) + fVar19),SUB84(dVar24,0));
  }
  else {
    dVar24 = -(dVar24 + dVar23);
  }
  uVar4 = (undefined4)((ulonglong)dVar24 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar13 = uVar4;
    *(int *)((int)puVar16 + -0x18) = SUB84(dVar24,0);
  }
  else {
    *pdVar13 = dVar24;
    *(double *)((int)puVar16 + -0x18) = in_xd8;
  }
  if (in_FPSCR_PR == '\0') {
    fVar21 = (float)iVar10 / SUB84(dVar23,0);
  }
  else {
    fVar21 = SUB84((double)CONCAT44(uVar4,(float)iVar10) / dVar23,0);
  }
  dVar24 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(fVar21,fVar21);
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44(-((float)((ulonglong)dVar24 >> 0x20) + fVar19),SUB84(dVar24,0));
  }
  else {
    dVar24 = -(dVar24 + dVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + -0x14) = (int)((ulonglong)dVar24 >> 0x20);
    *(int *)((int)puVar16 + -0x10) = SUB84(dVar24,0);
    dVar24 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar24,0));
  }
  else {
    *(double *)((int)puVar16 + -0x14) = dVar24;
    *(double *)((int)puVar16 + -0x10) = in_xd8;
    dVar24 = *pdVar13;
  }
  if (in_FPSCR_PR == '\0') {
    bVar28 = SUB84(dVar25,0) < (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    bVar28 = dVar25 < dVar24;
  }
  pbVar11 = (byte *)((int)puVar16 + -0x20);
  if (bVar28) {
    if (in_FPSCR_SZ == '\0') {
      dVar23 = (double)CONCAT44(fVar19,*(undefined4 *)pdVar13);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(fVar19,SUB84(dVar25,0));
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x18),SUB84(dVar24,0));
  }
  else {
    dVar24 = *(double *)((int)puVar16 + -0x18);
  }
  if (in_FPSCR_PR == '\0') {
    bVar28 = (float)((ulonglong)dVar24 >> 0x20) < SUB84(dVar23,0);
  }
  else {
    bVar28 = dVar24 < dVar23;
  }
  if ((bVar28) && (in_FPSCR_SZ == '\0')) {
    dVar23 = (double)(ulonglong)*(uint *)((int)puVar16 + -0x18);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x14),SUB84(dVar24,0));
  }
  else {
    dVar24 = *(double *)((int)puVar16 + -0x14);
  }
  fVar19 = (float)((ulonglong)dVar26 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar28 = fVar19 < (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    bVar28 = dVar26 < dVar24;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)((ulonglong)dVar23 & 0xffffffff);
  }
  if (bVar28) {
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x14),SUB84(param_1,0));
    }
    else {
      dVar26 = *(double *)((int)puVar16 + -0x14);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44(fVar19,SUB84(param_1,0));
  }
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x10),SUB84(dVar24,0));
  }
  else {
    dVar23 = *(double *)((int)puVar16 + -0x10);
  }
  if (in_FPSCR_PR == '\0') {
    bVar28 = (float)((ulonglong)dVar23 >> 0x20) < (float)((ulonglong)dVar26 >> 0x20);
  }
  else {
    bVar28 = dVar23 < dVar26;
  }
  if (bVar28) {
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + -0x10),SUB84(dVar26,0));
    }
    else {
      dVar26 = *(double *)((int)puVar16 + -0x10);
    }
  }
  fVar19 = (float)((ulonglong)dVar25 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar21 = SUB84(dVar23,0) * fVar19;
  }
  else {
    fVar21 = SUB84(dVar23 * dVar25,0);
  }
  dVar23 = (double)CONCAT44(DAT_8c08ec98,fVar21);
  if (in_FPSCR_PR != '\0' || DAT_8c08ec98 <= fVar21) {
    if (in_FPSCR_PR == '\0') {
      dVar23 = (double)CONCAT44(DAT_8c08ec98 + DAT_8c08ec98,fVar21 - (DAT_8c08ec98 + DAT_8c08ec98));
    }
    else {
      dVar23 = (dVar23 + dVar23) - (dVar23 + dVar23);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar5 = (int)SUB84(dVar23,0);
    dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * fVar19,SUB84(dVar26,0));
  }
  else {
    iVar5 = (int)dVar23;
    dVar26 = dVar26 * dVar25;
  }
  fVar19 = (float)((ulonglong)dVar26 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)(ulonglong)(uint)fVar19;
  }
  dVar25 = (double)CONCAT44(DAT_8c08ec98,SUB84(dVar23,0));
  uVar14 = ((int)(iVar9 + (uint)(iVar9 < 0)) >> 1) * 0x10 + iVar5;
  if (in_FPSCR_PR == '\0') {
    bVar28 = fVar19 < DAT_8c08ec98;
  }
  else {
    bVar28 = dVar26 < dVar25;
  }
  if (!bVar28) {
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44(DAT_8c08ec98 + DAT_8c08ec98,
                                SUB84(dVar23,0) - (DAT_8c08ec98 + DAT_8c08ec98));
    }
    else {
      dVar25 = (dVar25 + dVar25) - (dVar25 + dVar25);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar5 = (int)SUB84(dVar25,0);
  }
  else {
    iVar5 = (int)dVar25;
  }
  uVar12 = ((int)(iVar10 + (uint)(iVar10 < 0)) >> 1) * 0x10 + iVar5;
  if ((uint)(iVar9 * 0x10) < uVar14) {
    do {
      uVar14 = uVar14 + iVar9 * -0x10;
    } while ((uint)(iVar9 * 0x10) < uVar14);
  }
  if ((uint)(iVar10 << 4) < uVar12) {
    do {
      uVar12 = uVar12 + iVar9 * -0x10;
    } while ((uint)(iVar10 << 4) < uVar12);
  }
  uVar4 = (*(code *)PTR___divlu_8c08ec9c)();
  uVar17 = SUB84(dVar26,0);
  uVar22 = SUB84(dVar25,0);
  (*(code *)puVar3)(uVar4);
  (*(code *)PTR___divlu_8c08ec9c)();
  (*(code *)puVar3)();
  if ((uVar14 & 7) == 0) {
LAB_8c08ec4a:
    uVar15 = 0;
    if ((uVar14 & 0xf) == 0) goto LAB_8c08ec58;
    *pbVar11 = *pbVar11 & (byte)DAT_8c08ef0a | 0x10;
    (*(code *)PTR___bfswu_8c08ef20)(uVar12 & 0xf);
  }
  else {
    if (((uVar12 & 7) != 0) && (uVar14 < uVar12)) {
      uVar14 = 8;
      goto LAB_8c08ec4a;
    }
    uVar15 = uVar14 & 0xf;
LAB_8c08ec58:
    *pbVar11 = *pbVar11 & (byte)DAT_8c08ec92;
    (*(code *)PTR___bfswu_8c08eca0)(uVar15);
  }
  iVar9 = (*pcVar8)();
  iVar10 = (*pcVar8)();
  (*(code *)PTR_FUN_8c08eca4)(param_4,iVar9,iVar10,1);
  iVar5 = *(int *)((*(int *)(param_4 + 0x20) * iVar10 + iVar9) * 4 +
                  *(int *)(DAT_8c08ec96 + param_4));
  if ((iVar5 == 0) || (*(int *)(iVar5 + 8) != 2)) {
    if (*(int *)((*(int *)(param_4 + 0x20) * iVar10 + iVar9) * 4 + *(int *)(DAT_8c08edea + param_4))
        == 0) {
      iVar5 = (*(code *)PTR_FUN_8c08ef10)(param_4,iVar9,iVar10);
      if ((iVar5 == 0) || ((*(byte *)(iVar5 + 9) & 0x7f) != 0)) {
        bVar1 = *(byte *)(*(int *)(param_4 + 0x20) * iVar10 + iVar9 +
                         *(int *)(DAT_8c08ef08 + param_4));
        uVar4 = (undefined4)((ulonglong)dVar27 >> 0x20);
        dVar23 = dVar27;
        if (bVar1 < 0x1c) {
          if (0xf < bVar1) {
            if (in_FPSCR_SZ == '\0') {
              dVar23 = (double)CONCAT44(DAT_8c08ef14,uVar22);
            }
            else {
              dVar23 = (double)CONCAT44(_DAT_8c08ef18,DAT_8c08ef14);
            }
            goto LAB_8c08ecca;
          }
        }
        else if (bVar1 < 0x4c) {
          if ((**(char **)(param_4 + 4) == '\x04') && ((*(char **)(param_4 + 4))[1] == '\x03')) {
            if (in_FPSCR_SZ == '\0') {
              dVar23 = (double)CONCAT44(uVar4,uVar22);
            }
          }
          else if (*(short *)(*(int *)(param_4 + 8) + 0x18) == 0) {
            if (in_FPSCR_SZ == '\0') {
              dVar23 = (double)CONCAT44(DAT_8c08ef14,uVar22);
            }
            else {
              dVar23 = (double)CONCAT44(_DAT_8c08ef18,DAT_8c08ef14);
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            dVar23 = (double)CONCAT44(_DAT_8c08ef18,uVar22);
          }
          else {
            dVar23 = (double)CONCAT44(DAT_8c08ef1c,_DAT_8c08ef18);
          }
          goto LAB_8c08ecca;
        }
        if (bVar1 == 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar23 = (double)CONCAT44(DAT_8c08ef1c,uVar22);
          }
          else {
            dVar23 = (double)CONCAT44(PTR___bfswu_8c08ef20,DAT_8c08ef1c);
          }
        }
        else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
          if (in_FPSCR_SZ == '\0') {
            dVar23 = (double)CONCAT44(DAT_8c08ef1c,uVar22);
          }
          else {
            dVar23 = (double)CONCAT44(PTR___bfswu_8c08ef20,DAT_8c08ef1c);
          }
        }
        else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) || (bVar1 == 0x66)) {
          if (in_FPSCR_SZ == '\0') {
            dVar23 = (double)CONCAT44(DAT_8c08ef14,uVar22);
          }
          else {
            dVar23 = (double)CONCAT44(_DAT_8c08ef18,DAT_8c08ef14);
          }
        }
        else if (bVar1 == 0x67) {
          if (in_FPSCR_SZ == '\0') {
            dVar23 = (double)CONCAT44(DAT_8c08ef14,uVar22);
          }
          else {
            dVar23 = (double)CONCAT44(_DAT_8c08ef18,DAT_8c08ef14);
          }
        }
        else if (in_FPSCR_SZ == '\0') {
          dVar23 = (double)CONCAT44(uVar4,uVar22);
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        dVar23 = (double)CONCAT44(DAT_8c08ef1c,uVar22);
      }
      else {
        dVar23 = (double)CONCAT44(PTR___bfswu_8c08ef20,DAT_8c08ef1c);
      }
    }
    else {
      dVar23 = (double)CONCAT44(0x3f800000,uVar22);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(DAT_8c08edec,uVar22);
  }
  else {
    dVar23 = (double)CONCAT44(PTR_FUN_8c08edf0,DAT_8c08edec);
  }
LAB_8c08ecca:
  puVar3 = PTR_FUN_8c08edf0;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + -0x30) = (int)((ulonglong)dVar23 >> 0x20);
    *(undefined4 *)(param_5 + 0x1c) = *(undefined4 *)((int)puVar16 + -0x40);
    *(undefined4 *)(param_5 + 0x20) = *(undefined4 *)((int)puVar16 + -0x3c);
    *(undefined4 *)(param_5 + 0x24) = *(undefined4 *)((int)puVar16 + -0x38);
    dVar23 = (double)(ulonglong)uVar17;
  }
  else {
    *(double *)((int)puVar16 + -0x30) = dVar23;
    *(undefined8 *)(param_5 + 0x1c) = *(undefined8 *)((int)puVar16 + -0x40);
    *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)((int)puVar16 + -0x3c);
    *(undefined8 *)(param_5 + 0x24) = *(undefined8 *)((int)puVar16 + -0x38);
    dVar23 = dVar27;
  }
  (*(code *)puVar3)(dVar23,param_5 + 0x2c);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(param_5 + 0x6c) = (int)((ulonglong)dVar27 >> 0x20);
  }
  else {
    *(double *)(param_5 + 0x6c) = dVar27;
  }
  *(undefined1 *)(param_5 + 8) = 7;
  return;
}

