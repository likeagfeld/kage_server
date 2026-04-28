// query addr: 0x8c091550
// containing entry: 8c09109c
// name: FUN_8c09109c
// signature: undefined FUN_8c09109c(void)
// body addrs: 1828


/* WARNING: Removing unreachable block (ram,0x8c091346) */
/* WARNING: Removing unreachable block (ram,0x8c091256) */
/* WARNING: Removing unreachable block (ram,0x8c091574) */
/* WARNING: Removing unreachable block (ram,0x8c091282) */
/* WARNING: Removing unreachable block (ram,0x8c091368) */

void FUN_8c09109c(double param_1,double param_2,uint *param_3,int param_4,int param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined4 in_fr3;
  undefined8 uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_dr14;
  ulonglong uVar29;
  undefined8 in_xd0;
  double in_xd8;
  double in_xd10;
  bool bVar30;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_14;
  
  if (in_FPSCR_SZ == '\0') {
    puVar16 = (undefined8 *)((int)&local_14 + 4);
    local_14 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_14);
  }
  else {
    puVar16 = &local_14;
    local_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  iVar8 = (int)DAT_8c091126;
  *(int *)((int)puVar16 + iVar8 + 0x38) = param_4;
  *(int *)((int)puVar16 + iVar8 + 0x3c) = param_5;
  iVar11 = *(int *)((int)DAT_8c091128 + (int)param_3);
  *(uint **)((int)puVar16 + iVar8 + 0x34) = param_3;
  iVar11 = iVar11 + param_4 * 0x74;
  *(int *)((int)puVar16 + iVar8 + 0x40) = iVar11;
  *(int *)((int)puVar16 + iVar8 + 0x44) = param_5;
  if ((*param_3 & 1) == 0) {
    uRam8c0912e8 = 0xf79d52c8;
    uRam8c091760 = 0xf208c739;
    return;
  }
  if (*(char *)(iVar11 + 8) == '\x04') {
    uRam8c0912e8 = 0xf79d52c8;
    uRam8c091760 = 0xf208c739;
    return;
  }
  cVar1 = *(char *)(iVar11 + 10);
  if ((cVar1 != '\r') && ((cVar1 != '\v' || (*(char *)((int)DAT_8c09112a + param_3[1]) != '\x01'))))
  {
    *(undefined1 *)(iVar11 + 8) = 4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar11 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(iVar11 + 0x18) = in_xd0;
    }
    if (cVar1 == '\v') {
      *(uint *)((int)param_3 + (int)DAT_8c0915d2) =
           *(uint *)((int)param_3 + (int)DAT_8c0915d2) | 0x10;
      return;
    }
    *(uint *)((int)param_3 + (int)DAT_8c09112c) = *(uint *)((int)param_3 + (int)DAT_8c09112c) | 8;
    return;
  }
  if (*(char *)(iVar11 + 8) == '\a') {
    uRam8c0912e8 = 0xf79d52c8;
    uRam8c091760 = 0xf208c739;
    return;
  }
  if (param_5 == 0) {
    uVar5 = (*(code *)PTR_FUN_8c0915ec)(param_3 + 0x11);
    *(int *)((int)puVar16 + iVar8 + 0x44) = 1 << (uVar5 & 3);
  }
  *(int *)((int)puVar16 + iVar8 + 0x48) = *(int *)((int)puVar16 + iVar8 + 0x40) + 2;
  iVar11 = (*(code *)PTR_FUN_8c0912c8)();
  *(uint *)((int)puVar16 + iVar8 + 0x4c) = param_3[8] * iVar11;
  iVar11 = (*(code *)PTR_FUN_8c0912c8)(6);
  if (*(int *)((*(int *)((int)puVar16 + iVar8 + 0x4c) + iVar11) * 4 +
              *(int *)((int)DAT_8c0912c6 + (int)param_3)) == *(int *)((int)puVar16 + iVar8 + 0x40))
  {
    (*(code *)PTR_FUN_8c0915e8)(param_3,*(int *)((int)puVar16 + iVar8 + 0x40));
  }
  *(undefined4 *)((int)puVar16 + iVar8 + 0x50) = *(undefined4 *)((int)puVar16 + iVar8 + 0x40);
  *(undefined4 *)((int)puVar16 + iVar8 + 0x54) = 0;
  (*(code *)PTR___bfswu_8c0912cc)(*(undefined4 *)((int)puVar16 + iVar8 + 0x44));
  *(undefined4 *)((int)puVar16 + iVar8 + 0x58) = 0;
  *(undefined4 *)((int)puVar16 + iVar8 + 0x5c) = 0;
  iVar11 = *(int *)((int)puVar16 + iVar8 + 0x44);
  if (iVar11 == 1) {
    *(undefined4 *)((int)puVar16 + iVar8 + 0x58) = 0xffffffff;
  }
  else if (iVar11 == 2) {
    *(undefined4 *)((int)puVar16 + iVar8 + 0x58) = 1;
  }
  else if (iVar11 == 4) {
    *(undefined4 *)((int)puVar16 + iVar8 + 0x5c) = 0xffffffff;
  }
  else if (iVar11 == 8) {
    *(undefined4 *)((int)puVar16 + iVar8 + 0x5c) = 1;
  }
  iVar11 = *(int *)((int)puVar16 + iVar8 + 0x50);
  *(ushort *)(iVar11 + 0x28) = *(ushort *)(iVar11 + 0x28) & (ushort)DAT_8c0912d0 | 0x40;
  *(undefined2 *)((int)puVar16 + iVar8 + -4) = *(undefined2 *)(iVar11 + 2);
  if (*(int *)((int)puVar16 + iVar8 + 0x54) == 0) {
    (*(code *)PTR_FUN_8c0915f0)
              (param_3[2],(undefined1 *)((int)puVar16 + iVar8 + -4),
               (undefined1 *)((int)puVar16 + iVar8),(undefined1 *)((int)puVar16 + iVar8 + 8));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + iVar8 + 4) =
           *(undefined4 *)(*(int *)((int)puVar16 + iVar8 + 0x50) + 0x20);
    }
    else {
      *(undefined8 *)((int)puVar16 + iVar8 + 4) =
           *(undefined8 *)(*(int *)((int)puVar16 + iVar8 + 0x50) + 0x20);
    }
    uVar6 = (*(code *)PTR_FUN_8c0915d8)();
    *(undefined4 *)((int)puVar16 + iVar8 + 0x60) = uVar6;
    iVar11 = (*(code *)PTR_FUN_8c0915d8)();
  }
  else {
    (*(code *)PTR__memcpy_8c0912d4)
              ((undefined1 *)((int)puVar16 + iVar8 + -4),
               *(undefined4 *)((int)puVar16 + iVar8 + 0x54),2);
    (*(code *)PTR_FUN_8c0912d8)
              (param_3[2],(undefined1 *)((int)puVar16 + iVar8 + -4),
               (undefined1 *)((int)puVar16 + iVar8),(undefined1 *)((int)puVar16 + iVar8 + 8));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar16 + iVar8 + 4) =
           *(undefined4 *)(*(int *)((int)puVar16 + iVar8 + 0x50) + 0x20);
    }
    else {
      *(undefined8 *)((int)puVar16 + iVar8 + 4) =
           *(undefined8 *)(*(int *)((int)puVar16 + iVar8 + 0x50) + 0x20);
    }
    uVar6 = (*(code *)PTR_FUN_8c0912c8)();
    *(undefined4 *)((int)puVar16 + iVar8 + 0x60) = uVar6;
    iVar11 = (*(code *)PTR_FUN_8c0912c8)();
  }
  iVar7 = (int)(param_3[8] + (uint)((int)param_3[8] < 0)) >> 1;
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44((float)iVar7,
                              (float)(*(int *)((int)puVar16 + iVar8 + 0x60) +
                                     *(int *)((int)puVar16 + iVar8 + 0x58)));
  }
  else {
    dVar25 = (double)iVar7;
  }
  pdVar13 = (double *)((int)puVar16 + iVar8 + 0xc);
  iVar7 = (int)(param_3[9] + (uint)((int)param_3[9] < 0)) >> 1;
  if (in_FPSCR_PR == '\0') {
    fVar22 = SUB84(dVar25,0) - (float)((ulonglong)dVar25 >> 0x20);
  }
  else {
    fVar22 = SUB84(dVar25 - dVar25,0);
  }
  pdVar9 = (double *)((int)puVar16 + iVar8 + 0x14);
  if (in_FPSCR_SZ == '\0') {
    param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),DAT_8c0912dc);
    *(float *)pdVar13 = fVar22;
  }
  else {
    *pdVar13 = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(DAT_8c0912e0,in_fr3);
  }
  else {
    dVar25 = (double)CONCAT44(DAT_8c0912e4,DAT_8c0912e0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar26 = (double)CONCAT44((float)iVar7,(float)(iVar11 + *(int *)((int)puVar16 + iVar8 + 0x5c)));
  }
  else {
    dVar26 = (double)iVar7;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar27 = (double)((ulonglong)DAT_8c0912e4 << 0x20);
  }
  else {
    dVar27 = (double)CONCAT44(uRam8c0912e8,DAT_8c0912e4);
  }
  pdVar12 = (double *)((int)puVar16 + iVar8 + 0x18);
  if (in_FPSCR_PR == '\0') {
    fVar22 = SUB84(dVar26,0) - (float)((ulonglong)dVar26 >> 0x20);
  }
  else {
    fVar22 = SUB84(dVar26 - dVar26,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar9 = fVar22;
    dVar26 = (double)CONCAT44(*(undefined4 *)pdVar13,fVar22);
  }
  else {
    *pdVar9 = in_xd8;
    dVar26 = *pdVar13;
  }
  fVar22 = SUB84(param_1,0);
  if (in_FPSCR_PR == '\0') {
    dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + fVar22,SUB84(dVar26,0));
  }
  else {
    dVar26 = dVar26 + param_1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar13 = (int)((ulonglong)dVar26 >> 0x20);
  }
  else {
    *pdVar13 = dVar26;
  }
  if (in_FPSCR_PR == '\0') {
    dVar26 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) * 1.0,SUB84(dVar26,0));
  }
  else {
    dVar26 = (double)CONCAT44(0x3f800000,SUB84(dVar26,0)) * dVar25;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),*(undefined4 *)pdVar9);
  }
  else {
    in_xd8 = *pdVar9;
  }
  fVar17 = (float)((ulonglong)dVar27 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar23 = SUB84(dVar26,0) + (float)((ulonglong)dVar26 >> 0x20) / fVar17;
  }
  else {
    fVar23 = SUB84(dVar26 / dVar27 + dVar26 / dVar27,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar9 = fVar23;
    *(undefined4 *)((int)puVar16 + iVar8 + 0x18) = *(undefined4 *)pdVar13;
    dVar26 = (double)CONCAT44(*(undefined4 *)pdVar12,fVar23);
    dVar28 = (double)CONCAT44(*(undefined4 *)pdVar13,*(undefined4 *)((int)puVar16 + iVar8 + 0x14));
  }
  else {
    *pdVar9 = in_xd8;
    dVar28 = *pdVar13;
    *(double *)((int)puVar16 + iVar8 + 0x18) = dVar28;
    dVar26 = *pdVar12;
    in_xd10 = *(double *)((int)puVar16 + iVar8 + 0x14);
  }
  fVar23 = SUB84(dVar27,0);
  fVar21 = (float)((ulonglong)dVar26 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar30 = fVar23 < fVar21;
  }
  else {
    bVar30 = dVar27 < dVar26;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + iVar8 + 0x1c) = SUB84(dVar28,0);
  }
  else {
    *(double *)((int)puVar16 + iVar8 + 0x1c) = in_xd10;
  }
  pdVar13 = (double *)((int)puVar16 + iVar8 + 0x1c);
  if (bVar30) {
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)(int)param_3[8],0x40000000);
    }
    else {
      param_2 = (double)(int)param_3[8];
    }
    fVar20 = (float)((ulonglong)param_2 >> 0x20);
    dVar19 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44(fVar21,fVar20);
      dVar19 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                SUB84(dVar26,0) / SUB84(param_2,0) + fVar22);
    }
    else {
      dVar26 = dVar26 / param_2 + param_1;
    }
    in_xd8 = dVar19;
    if (in_FPSCR_PR != '\0' || SUB84(dVar26,0) <= (float)((ulonglong)dVar26 >> 0x20)) {
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44(-fVar20,SUB84(param_2,0));
      }
      else {
        param_2 = -param_2;
      }
      do {
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) +
                                    (float)((ulonglong)param_2 >> 0x20),SUB84(dVar26,0));
        }
        else {
          dVar19 = dVar26 + param_2;
        }
        uVar6 = (undefined4)((ulonglong)dVar19 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar16 + iVar8 + 0x18) = uVar6;
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar19,0));
          dVar28 = (double)CONCAT44(uVar6,SUB84(dVar28,0));
        }
        else {
          *(double *)((int)puVar16 + iVar8 + 0x18) = dVar19;
          dVar26 = *pdVar12;
          dVar28 = dVar19;
        }
      } while (in_FPSCR_PR != '\0' || SUB84(dVar26,0) <= (float)((ulonglong)dVar26 >> 0x20));
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar21 < fVar23;
    }
    else {
      bVar30 = dVar26 < dVar27;
    }
    if (bVar30) {
      dVar19 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar6 = 0x40000000;
      }
      else {
        uVar6 = SUB84(dVar19 + dVar19,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = (double)CONCAT44(DAT_8c091750,SUB84(dVar25,0));
      }
      else {
        dVar25 = (double)CONCAT44(PTR_FUN_8c091754,DAT_8c091750);
      }
      if (in_FPSCR_PR == '\0') {
        param_1 = (double)CONCAT44((float)(int)param_3[8],fVar22);
      }
      else {
        param_1 = (double)(int)param_3[8];
      }
      fVar22 = (float)((ulonglong)param_1 >> 0x20);
      dVar19 = param_1;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(fVar22,uVar6);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = -((float)((ulonglong)dVar19 >> 0x20) / SUB84(dVar19,0) +
                  (float)((ulonglong)dVar25 >> 0x20));
        param_2 = (double)CONCAT44(fVar20,SUB84(dVar19,0));
        bVar30 = fVar20 < fVar21;
      }
      else {
        param_2 = -(dVar19 / dVar19 + dVar25);
        fVar20 = (float)((ulonglong)param_2 >> 0x20);
        bVar30 = param_2 < dVar26;
      }
      while (!bVar30) {
        dVar19 = dVar26;
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar28,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + fVar22,SUB84(dVar19,0));
        }
        else {
          dVar28 = dVar19 + param_1;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar16 + iVar8 + 0x18) = (int)((ulonglong)dVar28 >> 0x20);
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar26,0));
        }
        else {
          *(double *)((int)puVar16 + iVar8 + 0x18) = dVar28;
          dVar26 = *pdVar12;
        }
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar20 < (float)((ulonglong)dVar26 >> 0x20);
        }
        else {
          bVar30 = param_2 < dVar26;
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar26,0));
  }
  else {
    dVar26 = *pdVar13;
  }
  fVar22 = (float)((ulonglong)dVar26 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar30 = fVar23 < fVar22;
  }
  else {
    bVar30 = dVar27 < dVar26;
  }
  if (bVar30) {
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)(int)param_3[9],0x40000000);
    }
    else {
      param_2 = (double)(int)param_3[9];
    }
    fVar23 = (float)((ulonglong)param_2 >> 0x20);
    dVar19 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44(fVar22,fVar23);
      dVar19 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),
                                SUB84(dVar26,0) / SUB84(param_2,0) + SUB84(param_1,0));
    }
    else {
      dVar26 = dVar26 / param_2 + param_1;
    }
    in_xd8 = dVar19;
    if (in_FPSCR_PR != '\0' || SUB84(dVar26,0) <= (float)((ulonglong)dVar26 >> 0x20)) {
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44(-fVar23,SUB84(param_2,0));
      }
      else {
        param_2 = -param_2;
      }
      do {
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) +
                                    (float)((ulonglong)param_2 >> 0x20),SUB84(dVar26,0));
        }
        else {
          dVar19 = dVar26 + param_2;
        }
        uVar6 = (undefined4)((ulonglong)dVar19 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar16 + iVar8 + 0x1c) = uVar6;
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),uVar6);
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar19,0));
        }
        else {
          *(double *)((int)puVar16 + iVar8 + 0x1c) = dVar19;
          dVar26 = *pdVar13;
          in_xd10 = dVar19;
        }
      } while (in_FPSCR_PR != '\0' || SUB84(dVar26,0) <= (float)((ulonglong)dVar26 >> 0x20));
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar22 < fVar23;
    }
    else {
      bVar30 = dVar26 < dVar27;
    }
    if (bVar30) {
      dVar19 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar6 = 0x40000000;
      }
      else {
        uVar6 = SUB84(dVar19 + dVar19,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = (double)CONCAT44(DAT_8c091750,SUB84(dVar25,0));
      }
      else {
        dVar25 = (double)CONCAT44(PTR_FUN_8c091754,DAT_8c091750);
      }
      if (in_FPSCR_PR == '\0') {
        param_1 = (double)CONCAT44((float)(int)param_3[9],SUB84(param_1,0));
      }
      else {
        param_1 = (double)(int)param_3[9];
      }
      fVar23 = (float)((ulonglong)param_1 >> 0x20);
      dVar19 = param_1;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = (double)CONCAT44(fVar23,uVar6);
      }
      if (in_FPSCR_PR == '\0') {
        fVar21 = -((float)((ulonglong)dVar19 >> 0x20) / SUB84(dVar19,0) +
                  (float)((ulonglong)dVar25 >> 0x20));
        param_2 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
        bVar30 = fVar21 < fVar22;
      }
      else {
        param_2 = -(dVar19 / dVar19 + dVar25);
        fVar21 = (float)((ulonglong)param_2 >> 0x20);
        bVar30 = param_2 < dVar26;
      }
      while (!bVar30) {
        dVar19 = dVar26;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                    (int)((ulonglong)dVar26 >> 0x20));
          dVar19 = in_xd10;
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) + fVar23);
        }
        else {
          dVar28 = dVar28 + param_1;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar16 + iVar8 + 0x1c) = SUB84(dVar28,0);
          dVar26 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar26,0));
        }
        else {
          *(double *)((int)puVar16 + iVar8 + 0x1c) = dVar19;
          dVar26 = *pdVar13;
        }
        in_xd10 = dVar19;
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar21 < (float)((ulonglong)dVar26 >> 0x20);
        }
        else {
          bVar30 = param_2 < dVar26;
        }
      }
    }
  }
  uVar5 = param_3[8];
  dVar19 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
  if (in_FPSCR_PR == '\0') {
    uVar6 = 0x40000000;
  }
  else {
    uVar6 = SUB84(dVar19 + dVar19,0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44(0xbf800000,uVar6);
  }
  else {
    dVar19 = -(double)CONCAT44(0x3f800000,uVar6);
  }
  uVar10 = param_3[9];
  pdVar13 = (double *)((int)puVar16 + iVar8 + 0x24);
  if (in_FPSCR_PR == '\0') {
    fVar22 = (float)(int)uVar5 / SUB84(dVar19,0);
  }
  else {
    fVar22 = SUB84((double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),(float)(int)uVar5) / dVar19,0);
  }
  *(undefined1 **)((int)puVar16 + iVar8 + 100) = (undefined1 *)((int)puVar16 + iVar8 + 0x20);
  dVar26 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44(fVar22,fVar22);
  }
  fVar22 = (float)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar26 = (double)CONCAT44(-((float)((ulonglong)dVar26 >> 0x20) + fVar22),SUB84(dVar26,0));
  }
  else {
    dVar26 = -(dVar26 + dVar19);
  }
  uVar6 = (undefined4)((ulonglong)dVar26 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar13 = uVar6;
    *(int *)((int)puVar16 + iVar8 + 0x28) = SUB84(dVar26,0);
  }
  else {
    *pdVar13 = dVar26;
    *(double *)((int)puVar16 + iVar8 + 0x28) = in_xd8;
  }
  if (in_FPSCR_PR == '\0') {
    fVar23 = (float)(int)uVar10 / SUB84(dVar19,0);
  }
  else {
    fVar23 = SUB84((double)CONCAT44(uVar6,(float)(int)uVar10) / dVar19,0);
  }
  dVar26 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44(fVar23,fVar23);
  }
  if (in_FPSCR_PR == '\0') {
    dVar26 = (double)CONCAT44(-((float)((ulonglong)dVar26 >> 0x20) + fVar22),SUB84(dVar26,0));
  }
  else {
    dVar26 = -(dVar26 + dVar19);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + iVar8 + 0x2c) = (int)((ulonglong)dVar26 >> 0x20);
    *(int *)((int)puVar16 + iVar8 + 0x30) = SUB84(dVar26,0);
    dVar26 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar26,0));
  }
  else {
    *(double *)((int)puVar16 + iVar8 + 0x2c) = dVar26;
    *(double *)((int)puVar16 + iVar8 + 0x30) = in_xd8;
    dVar26 = *pdVar13;
  }
  fVar23 = (float)((ulonglong)dVar28 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar30 = fVar23 < (float)((ulonglong)dVar26 >> 0x20);
  }
  else {
    bVar30 = dVar28 < dVar26;
  }
  if (bVar30) {
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)CONCAT44(fVar22,*(undefined4 *)pdVar13);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)CONCAT44(fVar22,fVar23);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + iVar8 + 0x28),SUB84(dVar26,0));
  }
  else {
    dVar26 = *(double *)((int)puVar16 + iVar8 + 0x28);
  }
  if (in_FPSCR_PR == '\0') {
    bVar30 = (float)((ulonglong)dVar26 >> 0x20) < SUB84(dVar19,0);
  }
  else {
    bVar30 = dVar26 < dVar19;
  }
  if ((bVar30) && (in_FPSCR_SZ == '\0')) {
    dVar19 = (double)(ulonglong)*(uint *)((int)puVar16 + iVar8 + 0x28);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + iVar8 + 0x2c),SUB84(dVar26,0));
  }
  else {
    dVar26 = *(double *)((int)puVar16 + iVar8 + 0x2c);
  }
  if (in_FPSCR_PR == '\0') {
    bVar30 = SUB84(dVar28,0) < (float)((ulonglong)dVar26 >> 0x20);
  }
  else {
    bVar30 = dVar28 < dVar26;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)((ulonglong)dVar19 & 0xffffffff);
  }
  if (bVar30) {
    if (in_FPSCR_SZ == '\0') {
      in_xd10 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + iVar8 + 0x2c),SUB84(param_1,0));
    }
    else {
      in_xd10 = *(double *)((int)puVar16 + iVar8 + 0x2c);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    in_xd10 = (double)CONCAT44(SUB84(dVar28,0),SUB84(param_1,0));
  }
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + iVar8 + 0x30),SUB84(dVar26,0));
  }
  else {
    dVar26 = *(double *)((int)puVar16 + iVar8 + 0x30);
  }
  if (in_FPSCR_PR == '\0') {
    bVar30 = (float)((ulonglong)dVar26 >> 0x20) < (float)((ulonglong)in_xd10 >> 0x20);
  }
  else {
    bVar30 = dVar26 < in_xd10;
  }
  if (bVar30) {
    if (in_FPSCR_SZ == '\0') {
      in_xd10 = (double)CONCAT44(*(undefined4 *)((int)puVar16 + iVar8 + 0x30),SUB84(in_xd10,0));
    }
    else {
      in_xd10 = *(double *)((int)puVar16 + iVar8 + 0x30);
    }
  }
  if (in_FPSCR_PR == '\0') {
    fVar22 = SUB84(dVar26,0) * fVar17;
  }
  else {
    fVar22 = SUB84(dVar26 * dVar27,0);
  }
  dVar26 = (double)CONCAT44(DAT_8c091448,fVar22);
  if (in_FPSCR_PR != '\0' || DAT_8c091448 <= fVar22) {
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)CONCAT44(DAT_8c091448 + DAT_8c091448,fVar22 - (DAT_8c091448 + DAT_8c091448));
    }
    else {
      dVar26 = (dVar26 + dVar26) - (dVar26 + dVar26);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar11 = (int)SUB84(dVar26,0);
    in_xd10 = (double)CONCAT44((float)((ulonglong)in_xd10 >> 0x20) * fVar17,SUB84(in_xd10,0));
  }
  else {
    iVar11 = (int)dVar26;
    in_xd10 = in_xd10 * dVar27;
  }
  fVar22 = (float)((ulonglong)in_xd10 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar26 = (double)(ulonglong)(uint)fVar22;
  }
  dVar27 = (double)CONCAT44(DAT_8c091448,SUB84(dVar26,0));
  uVar14 = ((int)(uVar5 + ((int)uVar5 < 0)) >> 1) * 0x10 + iVar11;
  if (in_FPSCR_PR == '\0') {
    bVar30 = fVar22 < DAT_8c091448;
  }
  else {
    bVar30 = in_xd10 < dVar27;
  }
  if (!bVar30) {
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)CONCAT44(DAT_8c091448 + DAT_8c091448,
                                SUB84(dVar26,0) - (DAT_8c091448 + DAT_8c091448));
    }
    else {
      dVar27 = (dVar27 + dVar27) - (dVar27 + dVar27);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar11 = (int)SUB84(dVar27,0);
  }
  else {
    iVar11 = (int)dVar27;
  }
  uVar15 = ((int)(uVar10 + ((int)uVar10 < 0)) >> 1) * 0x10 + iVar11;
  if (uVar5 * 0x10 < uVar14) {
    do {
      uVar14 = uVar14 + uVar5 * -0x10;
    } while (uVar5 * 0x10 < uVar14);
  }
  if (uVar10 << 4 < uVar15) {
    do {
      uVar15 = uVar15 + uVar5 * -0x10;
    } while (uVar10 << 4 < uVar15);
  }
  uVar6 = (*(code *)PTR___divlu_8c09144c)();
  uVar5 = SUB84(in_xd10,0);
  uVar24 = SUB84(dVar27,0);
  (*(code *)PTR___bfswu_8c091450)(uVar6);
  uVar6 = (*(code *)PTR___divlu_8c09144c)();
  (*(code *)PTR___bfswu_8c0915d4)(uVar6);
  puVar4 = PTR___bfswu_8c091854;
  puVar3 = PTR___bfswu_8c0915d4;
  if ((uVar14 & 7) == 0) {
LAB_8c09147c:
    if ((uVar14 & 0xf) != 0) {
      **(byte **)((int)puVar16 + iVar8 + 100) =
           **(byte **)((int)puVar16 + iVar8 + 100) & (byte)DAT_8c091842 | 0x10;
      (*(code *)puVar4)();
      goto LAB_8c09149e;
    }
  }
  else if (((uVar15 & 7) != 0) && (uVar14 < uVar15)) {
    uVar14 = 8;
    goto LAB_8c09147c;
  }
  **(byte **)((int)puVar16 + iVar8 + 100) =
       **(byte **)((int)puVar16 + iVar8 + 100) & (byte)DAT_8c0915c8;
  (*(code *)puVar3)();
LAB_8c09149e:
  uVar6 = (*(code *)PTR_FUN_8c0915d8)();
  *(undefined4 *)((int)puVar16 + (int)DAT_8c0915cc + iVar8 + -4) = uVar6;
  uVar6 = (*(code *)PTR_FUN_8c0915d8)();
  *(undefined4 *)((int)puVar16 + iVar8 + 0x68) = uVar6;
  *(uint **)((int)puVar16 + iVar8 + 0x6c) = param_3;
  *(undefined4 *)((int)puVar16 + iVar8 + 0x70) =
       *(undefined4 *)((int)puVar16 + (int)DAT_8c0915cc + iVar8 + -4);
  *(undefined4 *)((int)puVar16 + iVar8 + 0x74) = uVar6;
  uVar6 = (*(code *)PTR_FUN_8c0915dc)
                    (param_3,*(undefined4 *)((int)puVar16 + (int)DAT_8c0915cc + iVar8 + -4),1);
  *(undefined4 *)((int)puVar16 + iVar8 + 0x78) = uVar6;
  iVar11 = *(int *)((param_3[8] * *(int *)((int)puVar16 + iVar8 + 0x68) +
                    *(int *)((int)puVar16 + (int)DAT_8c0915cc + iVar8 + -4)) * 4 +
                   *(int *)((int)DAT_8c0915ce + (int)param_3));
  if ((iVar11 == 0) || (*(int *)(iVar11 + 8) != 2)) {
    if (*(int *)((*(int *)(*(int *)((int)puVar16 + iVar8 + 0x6c) + 0x20) *
                  *(int *)((int)puVar16 + iVar8 + 0x74) + *(int *)((int)puVar16 + iVar8 + 0x70)) * 4
                + *(int *)((int)DAT_8c09174a + *(int *)((int)puVar16 + iVar8 + 0x6c))) == 0) {
      iVar11 = (*(code *)PTR_FUN_8c091754)
                         (*(undefined4 *)((int)puVar16 + iVar8 + 0x6c),
                          *(undefined4 *)((int)puVar16 + iVar8 + 0x70),
                          *(undefined4 *)((int)puVar16 + iVar8 + 0x74));
      uVar6 = SUB84(dVar25,0);
      if ((iVar11 == 0) || ((*(byte *)(iVar11 + 9) & 0x7f) != 0)) {
        uVar10 = (uint)*(byte *)(*(int *)(*(int *)((int)puVar16 + iVar8 + 0x6c) + 0x20) *
                                 *(int *)((int)puVar16 + iVar8 + 0x74) +
                                 *(int *)((int)puVar16 + iVar8 + 0x70) +
                                *(int *)((int)DAT_8c09174e + *(int *)((int)puVar16 + iVar8 + 0x6c)))
        ;
        *(uint *)((int)puVar16 + iVar8 + 0x78) = uVar10;
        if ((uVar10 < 0x1c) || (0x4b < uVar10)) {
          if ((*(int *)((int)puVar16 + iVar8 + 0x78) < 0x10) ||
             (0x1b < *(int *)((int)puVar16 + iVar8 + 0x78))) {
            cVar1 = *(char *)(*(int *)(*(int *)((int)puVar16 + iVar8 + 0x6c) + 0x20) *
                              *(int *)((int)puVar16 + iVar8 + 0x74) +
                              *(int *)((int)puVar16 + iVar8 + 0x70) +
                             *(int *)((int)DAT_8c091840 + *(int *)((int)puVar16 + iVar8 + 0x6c)));
            if (cVar1 == '\0') {
              if (in_FPSCR_SZ == '\0') {
                dVar25 = (double)CONCAT44(DAT_8c091850,uVar6);
              }
              else {
                dVar25 = (double)CONCAT44(PTR___bfswu_8c091854,DAT_8c091850);
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) =
                     (int)((ulonglong)dVar25 >> 0x20);
              }
              else {
                *(double *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) = dVar25;
              }
            }
            else if ((cVar1 == '_') || (cVar1 == '`')) {
              if (in_FPSCR_SZ == '\0') {
                dVar25 = (double)CONCAT44(DAT_8c091850,uVar6);
              }
              else {
                dVar25 = (double)CONCAT44(PTR___bfswu_8c091854,DAT_8c091850);
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) =
                     (int)((ulonglong)dVar25 >> 0x20);
              }
              else {
                *(double *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) = dVar25;
              }
            }
            else if ((((cVar1 == 'c') || (cVar1 == 'd')) || (cVar1 == 'e')) || (cVar1 == 'f')) {
              if (in_FPSCR_SZ == '\0') {
                dVar25 = (double)CONCAT44(DAT_8c091848._4_4_,uVar6);
              }
              else {
                dVar25 = (double)CONCAT44(DAT_8c091850,DAT_8c091848._4_4_);
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) =
                     (int)((ulonglong)dVar25 >> 0x20);
              }
              else {
                *(double *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) = dVar25;
              }
            }
            else if (cVar1 == 'g') {
              if (in_FPSCR_SZ == '\0') {
                dVar25 = (double)CONCAT44(DAT_8c091848._4_4_,uVar6);
              }
              else {
                dVar25 = (double)CONCAT44(DAT_8c091850,DAT_8c091848._4_4_);
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) =
                     (int)((ulonglong)dVar25 >> 0x20);
              }
              else {
                *(double *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) = dVar25;
              }
            }
            else {
              in_dr14 = in_dr14 & 0xffffffff;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) = 0;
              }
              else {
                *(ulonglong *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) = in_dr14;
              }
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar25 = (double)CONCAT44(DAT_8c091848._4_4_,uVar6);
            }
            else {
              dVar25 = (double)CONCAT44(DAT_8c091850,DAT_8c091848._4_4_);
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) =
                   (int)((ulonglong)dVar25 >> 0x20);
            }
            else {
              *(double *)((int)puVar16 + (int)DAT_8c09183e + iVar8 + -4) = dVar25;
            }
          }
        }
        else if ((**(char **)(*(int *)((int)puVar16 + iVar8 + 0x6c) + 4) == '\x04') &&
                ((*(char **)(*(int *)((int)puVar16 + iVar8 + 0x6c) + 4))[1] == '\x03')) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)puVar16 + (int)DAT_8c09174c + iVar8 + -4) = 0;
          }
          else {
            *(undefined8 *)((int)puVar16 + (int)DAT_8c09174c + iVar8 + -4) = in_xd0;
          }
        }
        else {
          if (*(short *)(*(int *)(*(int *)((int)puVar16 + iVar8 + 0x6c) + 8) + 0x18) == 0) {
            if (in_FPSCR_SZ == '\0') {
              dVar25 = (double)CONCAT44(DAT_8c091758._4_4_,uVar6);
            }
            else {
              dVar25 = (double)CONCAT44(uRam8c091760,DAT_8c091758._4_4_);
            }
          }
          else if (in_FPSCR_SZ == '\0') {
            dVar25 = (double)CONCAT44((undefined4)DAT_8c091848,uVar6);
          }
          else {
            dVar25 = (double)CONCAT44(DAT_8c091848._4_4_,(undefined4)DAT_8c091848);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar16 + (int)DAT_8c09174c + iVar8 + -4) =
                 (int)((ulonglong)dVar25 >> 0x20);
          }
          else {
            *(double *)((int)puVar16 + (int)DAT_8c09174c + iVar8 + -4) = dVar25;
          }
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar25 = (double)CONCAT44((undefined4)DAT_8c091758,uVar6);
        }
        else {
          dVar25 = (double)CONCAT44(DAT_8c091758._4_4_,(undefined4)DAT_8c091758);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar16 + (int)DAT_8c09174c + iVar8 + -4) = (int)((ulonglong)dVar25 >> 0x20)
          ;
        }
        else {
          *(double *)((int)puVar16 + (int)DAT_8c09174c + iVar8 + -4) = dVar25;
        }
      }
    }
    else {
      dVar25 = (double)CONCAT44(0x3f800000,SUB84(dVar25,0));
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar16 + (int)DAT_8c09174c + iVar8 + -4) = 0x3f800000;
      }
      else {
        *(double *)((int)puVar16 + (int)DAT_8c09174c + iVar8 + -4) = dVar25;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar25 = (double)CONCAT44(DAT_8c0915e0,SUB84(dVar25,0));
    }
    else {
      dVar25 = (double)CONCAT44(PTR_FUN_8c0915e4,DAT_8c0915e0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar16 + (int)DAT_8c0915d0 + iVar8 + -4) = (int)((ulonglong)dVar25 >> 0x20);
    }
    else {
      *(double *)((int)puVar16 + (int)DAT_8c0915d0 + iVar8 + -4) = dVar25;
    }
  }
  puVar3 = PTR_FUN_8c0915e4;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)((int)puVar16 + (int)DAT_8c0915d0 + iVar8 + -4),SUB84(dVar25,0)
                     );
  }
  else {
    uVar18 = *(undefined8 *)((int)puVar16 + (int)DAT_8c0915d0 + iVar8 + -4);
  }
  uVar29 = in_dr14 & 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar16 + iVar8 + 0x10) = (int)((ulonglong)uVar18 >> 0x20);
    uVar18 = CONCAT44(*(undefined4 *)((int)puVar16 + iVar8),uVar24);
  }
  else {
    *(undefined8 *)((int)puVar16 + iVar8 + 0x10) = uVar18;
    uVar18 = *(undefined8 *)((int)puVar16 + iVar8);
  }
  iVar11 = *(int *)((int)puVar16 + iVar8 + 0x50);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(iVar11 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
    *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)((int)puVar16 + iVar8 + 4);
    *(undefined4 *)(iVar11 + 0x24) = *(undefined4 *)((int)puVar16 + iVar8 + 8);
    uVar2 = (ulonglong)uVar5;
  }
  else {
    *(undefined8 *)(iVar11 + 0x1c) = uVar18;
    *(undefined8 *)(iVar11 + 0x20) = *(undefined8 *)((int)puVar16 + iVar8 + 4);
    *(undefined8 *)(iVar11 + 0x24) = *(undefined8 *)((int)puVar16 + iVar8 + 8);
    uVar2 = uVar29;
  }
  (*(code *)puVar3)(uVar2,iVar11 + 0x2c);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(iVar11 + 0x6c) = (int)(uVar29 >> 0x20);
  }
  else {
    *(ulonglong *)(iVar11 + 0x6c) = uVar29;
  }
  *(undefined1 *)(iVar11 + 8) = 7;
                    /* WARNING: Read-only address (ram,0x8c0912e8) is written */
                    /* WARNING: Read-only address (ram,0x8c091760) is written */
  return;
}

