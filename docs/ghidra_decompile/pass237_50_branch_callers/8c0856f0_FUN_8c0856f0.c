// entry: 8c0856f0
// name: FUN_8c0856f0
// signature: undefined FUN_8c0856f0(void)


/* WARNING: Removing unreachable block (ram,0x8c085976) */
/* WARNING: Removing unreachable block (ram,0x8c085886) */
/* WARNING: Removing unreachable block (ram,0x8c085b9c) */
/* WARNING: Removing unreachable block (ram,0x8c0858b2) */
/* WARNING: Removing unreachable block (ram,0x8c085998) */

void FUN_8c0856f0(double param_1,double param_2,uint *param_3,int param_4,int param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  double *pdVar11;
  double *pdVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  double dVar16;
  float fVar17;
  undefined4 in_fr3;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
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
    puVar15 = (undefined8 *)((int)&local_14 + 4);
    local_14 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_14);
  }
  else {
    puVar15 = &local_14;
    local_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  *(int *)((int)puVar15 + -0x44) = param_5;
  uVar5 = *param_3;
  *(int *)((int)puVar15 + -0x48) = param_4;
  *(uint **)((int)puVar15 + -0x4c) = param_3;
  if ((uVar5 & 1) == 0) {
    uRam8c085924 = 0xf950f973;
    uRam8c085d5c = 0x3637e34b;
    return;
  }
  if (*(char *)(param_4 + 8) == '\x04') {
    uRam8c085924 = 0xf950f973;
    uRam8c085d5c = 0x3637e34b;
    return;
  }
  cVar1 = *(char *)(param_4 + 10);
  if ((cVar1 != '\r') && ((cVar1 != '\v' || (*(char *)((int)DAT_8c08576a + param_3[1]) != '\x01'))))
  {
    *(undefined1 *)(param_4 + 8) = 4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(param_4 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(param_4 + 0x18) = in_xd0;
    }
    if (cVar1 == '\v') {
      *(uint *)((int)param_3 + (int)DAT_8c085c02) =
           *(uint *)((int)param_3 + (int)DAT_8c085c02) | 0x10;
      return;
    }
    *(uint *)((int)param_3 + (int)DAT_8c085768) = *(uint *)((int)param_3 + (int)DAT_8c085768) | 8;
    return;
  }
  if (*(char *)(param_4 + 8) == '\a') {
    uRam8c085924 = 0xf950f973;
    uRam8c085d5c = 0x3637e34b;
    return;
  }
  if (param_5 == 0) {
    uVar5 = (*(code *)PTR_FUN_8c085c18)(param_3 + 0x11);
    *(int *)((int)puVar15 + -0x44) = 1 << (uVar5 & 3);
  }
  *(int *)((int)puVar15 + -0x40) = param_4 + 2;
  iVar6 = (*(code *)PTR_FUN_8c085904)();
  *(uint *)((int)puVar15 + -0x3c) = param_3[8] * iVar6;
  iVar6 = (*(code *)PTR_FUN_8c085904)();
  if (*(int *)((*(int *)((int)puVar15 + -0x3c) + iVar6) * 4 +
              *(int *)((int)DAT_8c085900 + (int)param_3)) == param_4) {
    (*(code *)PTR_FUN_8c085c1c)(param_3,param_4);
  }
  *(int *)((int)puVar15 + -0x38) = param_4;
  *(undefined4 *)((int)puVar15 + -0x34) = 0;
  (*(code *)PTR_FUN_8c085908)(*(undefined4 *)((int)puVar15 + -0x44));
  *(undefined4 *)((int)puVar15 + -0x30) = 0;
  *(undefined4 *)((int)puVar15 + -0x2c) = 0;
  iVar6 = *(int *)((int)puVar15 + -0x44);
  if (iVar6 == 1) {
    *(undefined4 *)((int)puVar15 + -0x30) = 0xffffffff;
  }
  else if (iVar6 == 2) {
    *(undefined4 *)((int)puVar15 + -0x30) = 1;
  }
  else if (iVar6 == 4) {
    *(undefined4 *)((int)puVar15 + -0x2c) = 0xffffffff;
  }
  else if (iVar6 == 8) {
    *(undefined4 *)((int)puVar15 + -0x2c) = 1;
  }
  iVar6 = *(int *)((int)puVar15 + -0x38);
  *(ushort *)(iVar6 + 0x28) = *(ushort *)(iVar6 + 0x28) & (ushort)DAT_8c08590c | 0x40;
  *(undefined2 *)((int)puVar15 + -0x84) = *(undefined2 *)(iVar6 + 2);
  if (*(int *)((int)puVar15 + -0x34) == 0) {
    (*(code *)PTR_FUN_8c085c20)
              (param_3[2],(undefined1 *)((int)puVar15 + -0x84),(undefined1 *)((int)puVar15 + -0x80),
               (undefined1 *)((int)puVar15 + -0x78));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0x7c) = *(undefined4 *)(*(int *)((int)puVar15 + -0x38) + 0x20)
      ;
    }
    else {
      *(undefined8 *)((int)puVar15 + -0x7c) = *(undefined8 *)(*(int *)((int)puVar15 + -0x38) + 0x20)
      ;
    }
    uVar7 = (*(code *)PTR_FUN_8c085c08)();
    *(undefined4 *)((int)puVar15 + -0x28) = uVar7;
    iVar6 = (*(code *)PTR_FUN_8c085c08)();
  }
  else {
    (*(code *)PTR_FUN_8c085910)
              ((undefined1 *)((int)puVar15 + -0x84),*(undefined4 *)((int)puVar15 + -0x34),2);
    (*(code *)PTR_FUN_8c085914)
              (param_3[2],(undefined1 *)((int)puVar15 + -0x84),(undefined1 *)((int)puVar15 + -0x80),
               (undefined1 *)((int)puVar15 + -0x78));
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0x7c) = *(undefined4 *)(*(int *)((int)puVar15 + -0x38) + 0x20)
      ;
    }
    else {
      *(undefined8 *)((int)puVar15 + -0x7c) = *(undefined8 *)(*(int *)((int)puVar15 + -0x38) + 0x20)
      ;
    }
    uVar7 = (*(code *)PTR_FUN_8c085904)();
    *(undefined4 *)((int)puVar15 + -0x28) = uVar7;
    iVar6 = (*(code *)PTR_FUN_8c085904)();
  }
  iVar8 = (int)(param_3[8] + (uint)((int)param_3[8] < 0)) >> 1;
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((float)iVar8,
                              (float)(*(int *)((int)puVar15 + -0x28) +
                                     *(int *)((int)puVar15 + -0x30)));
  }
  else {
    dVar24 = (double)iVar8;
  }
  pdVar12 = (double *)((int)puVar15 + -0x74);
  iVar8 = (int)(param_3[9] + (uint)((int)param_3[9] < 0)) >> 1;
  if (in_FPSCR_PR == '\0') {
    fVar21 = SUB84(dVar24,0) - (float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    fVar21 = SUB84(dVar24 - dVar24,0);
  }
  pdVar9 = (double *)((int)puVar15 + -0x6c);
  if (in_FPSCR_SZ == '\0') {
    param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),DAT_8c085918);
    *(float *)pdVar12 = fVar21;
  }
  else {
    *pdVar12 = in_xd8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(DAT_8c08591c,in_fr3);
  }
  else {
    dVar24 = (double)CONCAT44(DAT_8c085920,DAT_8c08591c);
  }
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44((float)iVar8,(float)(iVar6 + *(int *)((int)puVar15 + -0x2c)));
  }
  else {
    dVar25 = (double)iVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)((ulonglong)DAT_8c085920 << 0x20);
  }
  else {
    dVar16 = (double)CONCAT44(uRam8c085924,DAT_8c085920);
  }
  pdVar11 = (double *)((int)puVar15 + -0x68);
  if (in_FPSCR_PR == '\0') {
    fVar21 = SUB84(dVar25,0) - (float)((ulonglong)dVar25 >> 0x20);
  }
  else {
    fVar21 = SUB84(dVar25 - dVar25,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar9 = fVar21;
    dVar25 = (double)CONCAT44(*(undefined4 *)pdVar12,fVar21);
  }
  else {
    *pdVar9 = in_xd8;
    dVar25 = *pdVar12;
  }
  fVar21 = SUB84(param_1,0);
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) + fVar21,SUB84(dVar25,0));
  }
  else {
    dVar25 = dVar25 + param_1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)pdVar12 = (int)((ulonglong)dVar25 >> 0x20);
  }
  else {
    *pdVar12 = dVar25;
  }
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) * 1.0,SUB84(dVar25,0));
  }
  else {
    dVar25 = (double)CONCAT44(0x3f800000,SUB84(dVar25,0)) * dVar24;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),*(undefined4 *)pdVar9);
  }
  else {
    in_xd8 = *pdVar9;
  }
  fVar17 = (float)((ulonglong)dVar16 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar22 = SUB84(dVar25,0) + (float)((ulonglong)dVar25 >> 0x20) / fVar17;
  }
  else {
    fVar22 = SUB84(dVar25 / dVar16 + dVar25 / dVar16,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)pdVar9 = fVar22;
    *(undefined4 *)((int)puVar15 + -0x68) = *(undefined4 *)pdVar12;
    dVar25 = (double)CONCAT44(*(undefined4 *)pdVar11,fVar22);
    dVar28 = (double)CONCAT44(*(undefined4 *)pdVar12,*(undefined4 *)((int)puVar15 + -0x6c));
  }
  else {
    *pdVar9 = in_xd8;
    dVar28 = *pdVar12;
    *(double *)((int)puVar15 + -0x68) = dVar28;
    dVar25 = *pdVar11;
    in_xd10 = *(double *)((int)puVar15 + -0x6c);
  }
  fVar22 = SUB84(dVar16,0);
  fVar20 = (float)((ulonglong)dVar25 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar30 = fVar22 < fVar20;
  }
  else {
    bVar30 = dVar16 < dVar25;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar15 + -100) = SUB84(dVar28,0);
  }
  else {
    *(double *)((int)puVar15 + -100) = in_xd10;
  }
  pdVar12 = (double *)((int)puVar15 + -100);
  if (bVar30) {
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)(int)param_3[8],0x40000000);
    }
    else {
      param_2 = (double)(int)param_3[8];
    }
    fVar19 = (float)((ulonglong)param_2 >> 0x20);
    dVar26 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar25 = (double)CONCAT44(fVar20,fVar19);
      dVar26 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                SUB84(dVar25,0) / SUB84(param_2,0) + fVar21);
    }
    else {
      dVar25 = dVar25 / param_2 + param_1;
    }
    in_xd8 = dVar26;
    if (in_FPSCR_PR != '\0' || SUB84(dVar25,0) <= (float)((ulonglong)dVar25 >> 0x20)) {
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44(-fVar19,SUB84(param_2,0));
      }
      else {
        param_2 = -param_2;
      }
      do {
        if (in_FPSCR_PR == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) +
                                    (float)((ulonglong)param_2 >> 0x20),SUB84(dVar25,0));
        }
        else {
          dVar26 = dVar25 + param_2;
        }
        uVar7 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar15 + -0x68) = uVar7;
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(dVar26,0));
          dVar28 = (double)CONCAT44(uVar7,SUB84(dVar28,0));
        }
        else {
          *(double *)((int)puVar15 + -0x68) = dVar26;
          dVar25 = *pdVar11;
          dVar28 = dVar26;
        }
      } while (in_FPSCR_PR != '\0' || SUB84(dVar25,0) <= (float)((ulonglong)dVar25 >> 0x20));
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar20 < fVar22;
    }
    else {
      bVar30 = dVar25 < dVar16;
    }
    if (bVar30) {
      dVar26 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar7 = 0x40000000;
      }
      else {
        uVar7 = SUB84(dVar26 + dVar26,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(DAT_8c085d50,SUB84(dVar24,0));
      }
      else {
        dVar24 = (double)CONCAT44(PTR_FUN_8c085d54,DAT_8c085d50);
      }
      if (in_FPSCR_PR == '\0') {
        param_1 = (double)CONCAT44((float)(int)param_3[8],fVar21);
      }
      else {
        param_1 = (double)(int)param_3[8];
      }
      fVar21 = (float)((ulonglong)param_1 >> 0x20);
      dVar26 = param_1;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44(fVar21,uVar7);
      }
      if (in_FPSCR_PR == '\0') {
        fVar19 = -((float)((ulonglong)dVar26 >> 0x20) / SUB84(dVar26,0) +
                  (float)((ulonglong)dVar24 >> 0x20));
        param_2 = (double)CONCAT44(fVar19,SUB84(dVar26,0));
        bVar30 = fVar19 < fVar20;
      }
      else {
        param_2 = -(dVar26 / dVar26 + dVar24);
        fVar19 = (float)((ulonglong)param_2 >> 0x20);
        bVar30 = param_2 < dVar25;
      }
      while (!bVar30) {
        dVar26 = dVar25;
        if (in_FPSCR_SZ == '\0') {
          dVar26 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),SUB84(dVar28,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) + fVar21,SUB84(dVar26,0));
        }
        else {
          dVar28 = dVar26 + param_1;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar15 + -0x68) = (int)((ulonglong)dVar28 >> 0x20);
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar11,SUB84(dVar25,0));
        }
        else {
          *(double *)((int)puVar15 + -0x68) = dVar28;
          dVar25 = *pdVar11;
        }
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar19 < (float)((ulonglong)dVar25 >> 0x20);
        }
        else {
          bVar30 = param_2 < dVar25;
        }
      }
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar25,0));
  }
  else {
    dVar25 = *pdVar12;
  }
  fVar21 = (float)((ulonglong)dVar25 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar30 = fVar22 < fVar21;
  }
  else {
    bVar30 = dVar16 < dVar25;
  }
  if (bVar30) {
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)(int)param_3[9],0x40000000);
    }
    else {
      param_2 = (double)(int)param_3[9];
    }
    fVar22 = (float)((ulonglong)param_2 >> 0x20);
    dVar26 = param_2;
    if (in_FPSCR_SZ == '\0') {
      dVar25 = (double)CONCAT44(fVar21,fVar22);
      dVar26 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),
                                SUB84(dVar25,0) / SUB84(param_2,0) + SUB84(param_1,0));
    }
    else {
      dVar25 = dVar25 / param_2 + param_1;
    }
    in_xd8 = dVar26;
    if (in_FPSCR_PR != '\0' || SUB84(dVar25,0) <= (float)((ulonglong)dVar25 >> 0x20)) {
      if (in_FPSCR_PR == '\0') {
        param_2 = (double)CONCAT44(-fVar22,SUB84(param_2,0));
      }
      else {
        param_2 = -param_2;
      }
      do {
        if (in_FPSCR_PR == '\0') {
          dVar26 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) +
                                    (float)((ulonglong)param_2 >> 0x20),SUB84(dVar25,0));
        }
        else {
          dVar26 = dVar25 + param_2;
        }
        uVar7 = (undefined4)((ulonglong)dVar26 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar15 + -100) = uVar7;
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),uVar7);
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar26,0));
        }
        else {
          *(double *)((int)puVar15 + -100) = dVar26;
          dVar25 = *pdVar12;
          in_xd10 = dVar26;
        }
      } while (in_FPSCR_PR != '\0' || SUB84(dVar25,0) <= (float)((ulonglong)dVar25 >> 0x20));
    }
  }
  else {
    if (in_FPSCR_PR == '\0') {
      bVar30 = fVar21 < fVar22;
    }
    else {
      bVar30 = dVar25 < dVar16;
    }
    if (bVar30) {
      dVar26 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
      if (in_FPSCR_PR == '\0') {
        uVar7 = 0x40000000;
      }
      else {
        uVar7 = SUB84(dVar26 + dVar26,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar24 = (double)CONCAT44(DAT_8c085d50,SUB84(dVar24,0));
      }
      else {
        dVar24 = (double)CONCAT44(PTR_FUN_8c085d54,DAT_8c085d50);
      }
      if (in_FPSCR_PR == '\0') {
        param_1 = (double)CONCAT44((float)(int)param_3[9],SUB84(param_1,0));
      }
      else {
        param_1 = (double)(int)param_3[9];
      }
      fVar22 = (float)((ulonglong)param_1 >> 0x20);
      dVar26 = param_1;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44(fVar22,uVar7);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = -((float)((ulonglong)dVar26 >> 0x20) / SUB84(dVar26,0) +
                  (float)((ulonglong)dVar24 >> 0x20));
        param_2 = (double)CONCAT44(fVar20,SUB84(dVar26,0));
        bVar30 = fVar20 < fVar21;
      }
      else {
        param_2 = -(dVar26 / dVar26 + dVar24);
        fVar20 = (float)((ulonglong)param_2 >> 0x20);
        bVar30 = param_2 < dVar25;
      }
      while (!bVar30) {
        dVar26 = dVar25;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),
                                    (int)((ulonglong)dVar25 >> 0x20));
          dVar26 = in_xd10;
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) + fVar22);
        }
        else {
          dVar28 = dVar28 + param_1;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar15 + -100) = SUB84(dVar28,0);
          dVar25 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar25,0));
        }
        else {
          *(double *)((int)puVar15 + -100) = dVar26;
          dVar25 = *pdVar12;
        }
        in_xd10 = dVar26;
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar20 < (float)((ulonglong)dVar25 >> 0x20);
        }
        else {
          bVar30 = param_2 < dVar25;
        }
      }
    }
  }
  uVar7 = SUB84(dVar24,0);
  uVar5 = param_3[8];
  dVar24 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),0x3f800000);
  if (in_FPSCR_PR == '\0') {
    uVar18 = 0x40000000;
  }
  else {
    uVar18 = SUB84(dVar24 + dVar24,0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44(0xbf800000,uVar18);
  }
  else {
    dVar24 = -(double)CONCAT44(0x3f800000,uVar18);
  }
  uVar10 = param_3[9];
  pdVar12 = (double *)((int)puVar15 + -0x5c);
  if (in_FPSCR_PR == '\0') {
    fVar21 = (float)(int)uVar5 / SUB84(dVar24,0);
  }
  else {
    fVar21 = SUB84((double)CONCAT44((int)((ulonglong)dVar25 >> 0x20),(float)(int)uVar5) / dVar24,0);
  }
  *(undefined1 **)((int)puVar15 + -0x24) = (undefined1 *)((int)puVar15 + -0x60);
  dVar25 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(fVar21,fVar21);
  }
  fVar21 = (float)((ulonglong)dVar24 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44(-((float)((ulonglong)dVar25 >> 0x20) + fVar21),SUB84(dVar25,0));
  }
  else {
    dVar25 = -(dVar25 + dVar24);
  }
  uVar18 = (undefined4)((ulonglong)dVar25 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)pdVar12 = uVar18;
    *(int *)((int)puVar15 + -0x58) = SUB84(dVar25,0);
  }
  else {
    *pdVar12 = dVar25;
    *(double *)((int)puVar15 + -0x58) = in_xd8;
  }
  if (in_FPSCR_PR == '\0') {
    fVar22 = (float)(int)uVar10 / SUB84(dVar24,0);
  }
  else {
    fVar22 = SUB84((double)CONCAT44(uVar18,(float)(int)uVar10) / dVar24,0);
  }
  dVar25 = in_xd8;
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(fVar22,fVar22);
  }
  if (in_FPSCR_PR == '\0') {
    dVar25 = (double)CONCAT44(-((float)((ulonglong)dVar25 >> 0x20) + fVar21),SUB84(dVar25,0));
  }
  else {
    dVar25 = -(dVar25 + dVar24);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar15 + -0x54) = (int)((ulonglong)dVar25 >> 0x20);
    *(int *)((int)puVar15 + -0x50) = SUB84(dVar25,0);
    dVar25 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar25,0));
  }
  else {
    *(double *)((int)puVar15 + -0x54) = dVar25;
    *(double *)((int)puVar15 + -0x50) = in_xd8;
    dVar25 = *pdVar12;
  }
  fVar22 = (float)((ulonglong)dVar28 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar30 = fVar22 < (float)((ulonglong)dVar25 >> 0x20);
  }
  else {
    bVar30 = dVar28 < dVar25;
  }
  if (bVar30) {
    if (in_FPSCR_SZ == '\0') {
      dVar24 = (double)CONCAT44(fVar21,*(undefined4 *)pdVar12);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(fVar21,fVar22);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(*(undefined4 *)((int)puVar15 + -0x58),SUB84(dVar25,0));
  }
  else {
    dVar25 = *(double *)((int)puVar15 + -0x58);
  }
  if (in_FPSCR_PR == '\0') {
    bVar30 = (float)((ulonglong)dVar25 >> 0x20) < SUB84(dVar24,0);
  }
  else {
    bVar30 = dVar25 < dVar24;
  }
  if ((bVar30) && (in_FPSCR_SZ == '\0')) {
    dVar24 = (double)(ulonglong)*(uint *)((int)puVar15 + -0x58);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)CONCAT44(*(undefined4 *)((int)puVar15 + -0x54),SUB84(dVar25,0));
  }
  else {
    dVar25 = *(double *)((int)puVar15 + -0x54);
  }
  if (in_FPSCR_PR == '\0') {
    bVar30 = SUB84(dVar28,0) < (float)((ulonglong)dVar25 >> 0x20);
  }
  else {
    bVar30 = dVar28 < dVar25;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)((ulonglong)dVar24 & 0xffffffff);
  }
  if (bVar30) {
    if (in_FPSCR_SZ == '\0') {
      in_xd10 = (double)CONCAT44(*(undefined4 *)((int)puVar15 + -0x54),SUB84(param_1,0));
    }
    else {
      in_xd10 = *(double *)((int)puVar15 + -0x54);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    in_xd10 = (double)CONCAT44(SUB84(dVar28,0),SUB84(param_1,0));
  }
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(*(undefined4 *)((int)puVar15 + -0x50),SUB84(dVar25,0));
  }
  else {
    dVar24 = *(double *)((int)puVar15 + -0x50);
  }
  if (in_FPSCR_PR == '\0') {
    bVar30 = (float)((ulonglong)dVar24 >> 0x20) < (float)((ulonglong)in_xd10 >> 0x20);
  }
  else {
    bVar30 = dVar24 < in_xd10;
  }
  if (bVar30) {
    if (in_FPSCR_SZ == '\0') {
      in_xd10 = (double)CONCAT44(*(undefined4 *)((int)puVar15 + -0x50),SUB84(in_xd10,0));
    }
    else {
      in_xd10 = *(double *)((int)puVar15 + -0x50);
    }
  }
  if (in_FPSCR_PR == '\0') {
    fVar21 = SUB84(dVar24,0) * fVar17;
  }
  else {
    fVar21 = SUB84(dVar24 * dVar16,0);
  }
  dVar24 = (double)CONCAT44(DAT_8c085a84,fVar21);
  if (in_FPSCR_PR != '\0' || DAT_8c085a84 <= fVar21) {
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44(DAT_8c085a84 + DAT_8c085a84,fVar21 - (DAT_8c085a84 + DAT_8c085a84));
    }
    else {
      dVar24 = (dVar24 + dVar24) - (dVar24 + dVar24);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar6 = (int)SUB84(dVar24,0);
    in_xd10 = (double)CONCAT44((float)((ulonglong)in_xd10 >> 0x20) * fVar17,SUB84(in_xd10,0));
  }
  else {
    iVar6 = (int)dVar24;
    in_xd10 = in_xd10 * dVar16;
  }
  fVar21 = (float)((ulonglong)in_xd10 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)(ulonglong)(uint)fVar21;
  }
  dVar25 = (double)CONCAT44(DAT_8c085a84,SUB84(dVar24,0));
  uVar13 = ((int)(uVar5 + ((int)uVar5 < 0)) >> 1) * 0x10 + iVar6;
  if (in_FPSCR_PR == '\0') {
    bVar30 = fVar21 < DAT_8c085a84;
  }
  else {
    bVar30 = in_xd10 < dVar25;
  }
  if (!bVar30) {
    if (in_FPSCR_PR == '\0') {
      dVar25 = (double)CONCAT44(DAT_8c085a84 + DAT_8c085a84,
                                SUB84(dVar24,0) - (DAT_8c085a84 + DAT_8c085a84));
    }
    else {
      dVar25 = (dVar25 + dVar25) - (dVar25 + dVar25);
    }
  }
  if (in_FPSCR_PR == '\0') {
    iVar6 = (int)SUB84(dVar25,0);
  }
  else {
    iVar6 = (int)dVar25;
  }
  uVar14 = ((int)(uVar10 + ((int)uVar10 < 0)) >> 1) * 0x10 + iVar6;
  if (uVar5 * 0x10 < uVar13) {
    do {
      uVar13 = uVar13 + uVar5 * -0x10;
    } while (uVar5 * 0x10 < uVar13);
  }
  if (uVar10 << 4 < uVar14) {
    do {
      uVar14 = uVar14 + uVar5 * -0x10;
    } while (uVar10 << 4 < uVar14);
  }
  uVar18 = (*(code *)PTR_FUN_8c085a88)();
  uVar5 = SUB84(in_xd10,0);
  uVar23 = SUB84(dVar25,0);
  (*(code *)PTR_FUN_8c085a8c)(uVar18);
  uVar18 = (*(code *)PTR_FUN_8c085a88)();
  (*(code *)PTR_FUN_8c085a8c)(uVar18);
  puVar4 = PTR_FUN_8c085e7c;
  puVar3 = PTR_FUN_8c085c04;
  if ((uVar13 & 7) == 0) {
LAB_8c085ab0:
    if ((uVar13 & 0xf) == 0) goto LAB_8c085abc;
    **(byte **)((int)puVar15 + -0x24) =
         **(byte **)((int)puVar15 + -0x24) & (byte)DAT_8c085e6c | 0x10;
    (*(code *)puVar4)();
  }
  else {
    if (((uVar14 & 7) != 0) && (uVar13 < uVar14)) {
      uVar13 = 8;
      goto LAB_8c085ab0;
    }
LAB_8c085abc:
    **(byte **)((int)puVar15 + -0x24) = **(byte **)((int)puVar15 + -0x24) & (byte)DAT_8c085bfa;
    (*(code *)puVar3)();
  }
  uVar18 = (*(code *)PTR_FUN_8c085c08)();
  *(undefined4 *)((int)puVar15 + -8) = uVar18;
  uVar18 = (*(code *)PTR_FUN_8c085c08)();
  *(undefined4 *)((int)puVar15 + -0x20) = uVar18;
  *(uint **)((int)puVar15 + -0x1c) = param_3;
  *(undefined4 *)((int)puVar15 + -0x18) = *(undefined4 *)((int)puVar15 + -8);
  *(undefined4 *)((int)puVar15 + -0x14) = uVar18;
  uVar18 = (*(code *)PTR_FUN_8c085c0c)(param_3,*(undefined4 *)((int)puVar15 + -8),1);
  *(undefined4 *)((int)puVar15 + -0x10) = uVar18;
  iVar6 = *(int *)((param_3[8] * *(int *)((int)puVar15 + -0x20) + *(int *)((int)puVar15 + -8)) * 4 +
                  *(int *)((int)DAT_8c085c00 + (int)param_3));
  if ((iVar6 != 0) && (*(int *)(iVar6 + 8) == 2)) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0xc) = DAT_8c085c10;
    }
    else {
      *(ulonglong *)((int)puVar15 + -0xc) = CONCAT44(PTR_FUN_8c085c14,DAT_8c085c10);
    }
    goto LAB_8c085b48;
  }
  if (*(int *)((*(int *)(*(int *)((int)puVar15 + -0x1c) + 0x20) * *(int *)((int)puVar15 + -0x14) +
               *(int *)((int)puVar15 + -0x18)) * 4 +
              *(int *)((int)DAT_8c085d4a + *(int *)((int)puVar15 + -0x1c))) != 0) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0xc) = 0x3f800000;
    }
    else {
      *(ulonglong *)((int)puVar15 + -0xc) = CONCAT44(0x3f800000,uVar7);
    }
    goto LAB_8c085b48;
  }
  iVar6 = (*(code *)PTR_FUN_8c085d54)
                    (*(undefined4 *)((int)puVar15 + -0x1c),*(undefined4 *)((int)puVar15 + -0x18),
                     *(undefined4 *)((int)puVar15 + -0x14));
  if ((iVar6 != 0) && ((*(byte *)(iVar6 + 9) & 0x7f) == 0)) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0xc) = (undefined4)DAT_8c085e74;
    }
    else {
      *(ulonglong *)((int)puVar15 + -0xc) = CONCAT44(DAT_8c085e74._4_4_,(undefined4)DAT_8c085e74);
    }
    goto LAB_8c085b48;
  }
  uVar10 = (uint)*(byte *)(*(int *)(*(int *)((int)puVar15 + -0x1c) + 0x20) *
                           *(int *)((int)puVar15 + -0x14) + *(int *)((int)puVar15 + -0x18) +
                          *(int *)((int)DAT_8c085d4c + *(int *)((int)puVar15 + -0x1c)));
  *(uint *)((int)puVar15 + -0x10) = uVar10;
  if (uVar10 < 0x1c) {
    if (0xf < uVar10) goto LAB_8c085d34;
  }
  else {
    if (uVar10 < 0x4c) {
      if ((**(char **)(*(int *)((int)puVar15 + -0x1c) + 4) == '\x04') &&
         ((*(char **)(*(int *)((int)puVar15 + -0x1c) + 4))[1] == '\x03')) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)puVar15 + -0xc) = 0;
        }
        else {
          *(undefined8 *)((int)puVar15 + -0xc) = in_xd0;
        }
      }
      else {
        if (*(short *)(*(int *)(*(int *)((int)puVar15 + -0x1c) + 8) + 0x18) == 0) {
          if (in_FPSCR_SZ == '\0') {
            uVar27 = CONCAT44(DAT_8c085e74._4_4_,uVar7);
          }
          else {
            uVar27 = CONCAT44(PTR_FUN_8c085e7c,DAT_8c085e74._4_4_);
          }
        }
        else if (in_FPSCR_SZ == '\0') {
          uVar27 = CONCAT44(DAT_8c085e70,uVar7);
        }
        else {
          uVar27 = CONCAT44((undefined4)DAT_8c085e74,DAT_8c085e70);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar15 + -0xc) = (int)((ulonglong)uVar27 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar15 + -0xc) = uVar27;
        }
      }
      goto LAB_8c085b48;
    }
LAB_8c085d34:
    if (*(int *)((int)puVar15 + -0x10) < 0x1c) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar15 + -0xc) = DAT_8c085d58;
      }
      else {
        *(ulonglong *)((int)puVar15 + -0xc) = CONCAT44(uRam8c085d5c,DAT_8c085d58);
      }
      goto LAB_8c085b48;
    }
  }
  cVar1 = *(char *)(*(int *)(*(int *)((int)puVar15 + -0x1c) + 0x20) * *(int *)((int)puVar15 + -0x14)
                    + *(int *)((int)puVar15 + -0x18) +
                   *(int *)((int)DAT_8c085e6a + *(int *)((int)puVar15 + -0x1c)));
  if (cVar1 == '\0') {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0xc) = (undefined4)DAT_8c085e74;
    }
    else {
      *(ulonglong *)((int)puVar15 + -0xc) = CONCAT44(DAT_8c085e74._4_4_,(undefined4)DAT_8c085e74);
    }
  }
  else if ((cVar1 == '_') || (cVar1 == '`')) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0xc) = (undefined4)DAT_8c085e74;
    }
    else {
      *(ulonglong *)((int)puVar15 + -0xc) = CONCAT44(DAT_8c085e74._4_4_,(undefined4)DAT_8c085e74);
    }
  }
  else if ((((cVar1 == 'c') || (cVar1 == 'd')) || (cVar1 == 'e')) || (cVar1 == 'f')) {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0xc) = DAT_8c085e74._4_4_;
    }
    else {
      *(ulonglong *)((int)puVar15 + -0xc) = CONCAT44(PTR_FUN_8c085e7c,DAT_8c085e74._4_4_);
    }
  }
  else if (cVar1 == 'g') {
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0xc) = DAT_8c085e74._4_4_;
    }
    else {
      *(ulonglong *)((int)puVar15 + -0xc) = CONCAT44(PTR_FUN_8c085e7c,DAT_8c085e74._4_4_);
    }
  }
  else {
    in_dr14 = in_dr14 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar15 + -0xc) = 0;
    }
    else {
      *(ulonglong *)((int)puVar15 + -0xc) = in_dr14;
    }
  }
LAB_8c085b48:
  puVar3 = PTR_FUN_8c085c14;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar15 + -0x70) = *(undefined4 *)((int)puVar15 + -0xc);
    uVar27 = CONCAT44(*(undefined4 *)((int)puVar15 + -0x80),uVar23);
  }
  else {
    *(undefined8 *)((int)puVar15 + -0x70) = *(undefined8 *)((int)puVar15 + -0xc);
    uVar27 = *(undefined8 *)((int)puVar15 + -0x80);
  }
  iVar6 = *(int *)((int)puVar15 + -0x38);
  uVar29 = in_dr14 & 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar27 >> 0x20);
    *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)((int)puVar15 + -0x7c);
    *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)((int)puVar15 + -0x78);
    uVar2 = (ulonglong)uVar5;
  }
  else {
    *(undefined8 *)(iVar6 + 0x1c) = uVar27;
    *(undefined8 *)(iVar6 + 0x20) = *(undefined8 *)((int)puVar15 + -0x7c);
    *(undefined8 *)(iVar6 + 0x24) = *(undefined8 *)((int)puVar15 + -0x78);
    uVar2 = uVar29;
  }
  (*(code *)puVar3)(uVar2,iVar6 + 0x2c);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(iVar6 + 0x6c) = (int)(uVar29 >> 0x20);
  }
  else {
    *(ulonglong *)(iVar6 + 0x6c) = uVar29;
  }
  *(undefined1 *)(iVar6 + 8) = 7;
                    /* WARNING: Read-only address (ram,0x8c085924) is written */
                    /* WARNING: Read-only address (ram,0x8c085d5c) is written */
  return;
}

