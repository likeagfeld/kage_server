// entry: 8c105a58
// name: FUN_8c105a58


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c105a58(double param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  short sVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 in_dr2;
  undefined8 uVar22;
  ulonglong uVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 in_dr14;
  ulonglong uVar26;
  ulonglong in_xd14;
  undefined4 in_PR;
  undefined2 uVar27;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  puVar3 = PTR___modlu_8c105c10;
  puVar2 = PTR___divlu_8c105c0c;
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_c);
    puVar21 = &uStack_c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr14;
  }
  else {
    puVar21 = (undefined8 *)auStack_14;
    uStack_c = in_dr14;
  }
  *(undefined4 *)((int)puVar21 + -4) = in_PR;
  iVar12 = (int)DAT_8c105bf0;
  *(int *)((int)puVar21 + (int)DAT_8c105bf2 + iVar12 + -4) = param_3;
  uVar14 = *(undefined4 *)(param_3 + 0x44);
  uVar27 = *(undefined2 *)(PTR_DAT_8c105c08 + 2);
  *(undefined2 *)((int)puVar21 + iVar12 + 4) = *(undefined2 *)PTR_DAT_8c105c08;
  *(undefined2 *)((int)puVar21 + iVar12 + 6) = uVar27;
  *(undefined2 *)((int)puVar21 + iVar12 + 8) = *(undefined2 *)(PTR_DAT_8c105c08 + 4);
  *(undefined2 *)((int)puVar21 + iVar12 + 10) = *(undefined2 *)(PTR_DAT_8c105c08 + 6);
  *(undefined2 *)((int)puVar21 + iVar12 + 0xc) = *(undefined2 *)(PTR_DAT_8c105c08 + 8);
  uVar5 = *(undefined4 *)(PTR_DAT_8c105c14 + 4);
  *(undefined4 *)((int)puVar21 + iVar12 + 0x24) = *(undefined4 *)PTR_DAT_8c105c14;
  *(undefined4 *)((int)puVar21 + iVar12 + 0x28) = uVar5;
  uVar5 = *(undefined4 *)(PTR_DAT_8c105c14 + 0xc);
  *(undefined4 *)((int)puVar21 + iVar12 + 0x2c) = *(undefined4 *)(PTR_DAT_8c105c14 + 8);
  *(undefined4 *)((int)puVar21 + iVar12 + 0x30) = uVar5;
  uVar5 = *(undefined4 *)(PTR_DAT_8c105c14 + 0x14);
  *(undefined4 *)((int)puVar21 + iVar12 + 0x34) = *(undefined4 *)(PTR_DAT_8c105c14 + 0x10);
  *(undefined4 *)((int)puVar21 + iVar12 + 0x38) = uVar5;
  uVar5 = *(undefined4 *)(PTR_DAT_8c105c14 + 0x1c);
  *(undefined4 *)((int)puVar21 + iVar12 + 0x3c) = *(undefined4 *)(PTR_DAT_8c105c14 + 0x18);
  *(undefined4 *)((int)puVar21 + iVar12 + 0x40) = uVar5;
  uVar5 = *(undefined4 *)(PTR_DAT_8c105c14 + 0x24);
  *(undefined4 *)((int)puVar21 + iVar12 + 0x44) = *(undefined4 *)(PTR_DAT_8c105c14 + 0x20);
  *(undefined4 *)((int)puVar21 + iVar12 + 0x48) = uVar5;
  *(undefined4 *)((int)puVar21 + iVar12 + 0x48) = *(undefined4 *)(*(int *)(param_3 + 0x34) + 4);
  iVar6 = *(int *)(param_3 + 0x40) * 0x3a + (int)DAT_8c105bf4;
  if (in_FPSCR_PR == '\0') {
    dVar24 = (double)CONCAT44((float)iVar6,param_2);
  }
  else {
    dVar24 = (double)iVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar21 + iVar12 + 0x28) = (int)((ulonglong)dVar24 >> 0x20);
  }
  else {
    *(double *)((int)puVar21 + iVar12 + 0x28) = dVar24;
  }
  uVar5 = (*(code *)PTR___divlu_8c105c0c)(uVar14);
  *(undefined4 *)((int)puVar21 + (int)DAT_8c105bf6 + iVar12 + -4) = uVar5;
  uVar5 = (*(code *)puVar2)();
  *(undefined4 *)((int)puVar21 + (int)DAT_8c105bf8 + iVar12 + -4) = uVar5;
  iVar6 = (*(code *)puVar2)(uVar5);
  *(int *)((int)puVar21 + iVar12 + 0x10) = iVar6 * 0x16;
  iVar6 = (*(code *)puVar3)();
  *(int *)((int)puVar21 + iVar12 + 0x14) = iVar6 * 0x16;
  *(int *)((int)puVar21 + iVar12 + 0x18) = (int)DAT_8c105bfa;
  uVar5 = (*(code *)puVar3)();
  *(undefined4 *)((int)puVar21 + (int)DAT_8c105bfc + iVar12 + -4) = uVar5;
  iVar6 = (*(code *)puVar2)();
  iVar18 = 5;
  *(int *)((int)puVar21 + iVar12 + 0x1c) = iVar6 * 0x16;
  iVar6 = (*(code *)puVar3)();
  iVar16 = (int)DAT_8c105bfe;
  *(int *)((int)puVar21 + iVar12 + 0x20) = iVar6 * 0x16;
  iVar19 = 0;
  iVar6 = 0;
  do {
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((float)(int)*(short *)((int)puVar21 + iVar19 * 2 + iVar12 + 4),
                                SUB84(dVar24,0));
    }
    else {
      dVar24 = (double)(int)*(short *)((int)puVar21 + iVar19 * 2 + iVar12 + 4);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar21 + iVar12 + 0x24) = (int)((ulonglong)dVar24 >> 0x20);
    }
    else {
      *(double *)((int)puVar21 + iVar12 + 0x24) = dVar24;
    }
    *(short *)((int)puVar21 + iVar12 + 0x34) =
         (short)*(undefined4 *)((int)puVar21 + iVar19 * 4 + iVar12 + 0x10);
    if (in_FPSCR_PR == '\0') {
      param_1 = (double)CONCAT44((float)(iVar16 - iVar19),SUB84(param_1,0));
    }
    else {
      param_1 = (double)(iVar16 - iVar19);
    }
    iVar19 = iVar19 + 1;
    (*(code *)PTR_FUN_8c105c18)
              (param_1,*(undefined4 *)
                        (iVar6 + *(int *)(*(int *)((int)puVar21 + (int)DAT_8c105bf2 + iVar12 + -4) +
                                         0x2c) + 0x14),(undefined4 *)((int)puVar21 + iVar12 + 0x24),
               0);
    puVar2 = PTR_FUN_8c105c1c;
    uVar5 = (undefined4)in_dr14;
    uVar14 = (undefined4)in_dr2;
    iVar18 = iVar18 + -1;
    iVar6 = iVar6 + 4;
  } while (iVar18 != 0);
  iVar6 = *(int *)((int)puVar21 + (int)DAT_8c105bf2 + iVar12 + -4);
  *(undefined4 *)((int)puVar21 + iVar12) = 1;
  uVar13 = *(undefined4 *)(*(int *)(iVar6 + 0x38) + 4);
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)CONCAT44(*(undefined4 *)((int)puVar21 + iVar12 + 0x28),SUB84(dVar24,0));
    uVar5 = DAT_8c105c20;
  }
  else {
    dVar24 = *(double *)((int)puVar21 + iVar12 + 0x28);
    in_xd14 = CONCAT44(PTR_FUN_8c105c24,DAT_8c105c20);
  }
  if (in_FPSCR_PR == '\0') {
    uVar27 = (undefined2)(int)(float)((ulonglong)dVar24 >> 0x20);
  }
  else {
    uVar27 = (undefined2)(int)dVar24;
  }
  *(undefined2 *)((int)puVar21 + iVar12 + -4) = uVar27;
  uVar23 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    uVar23 = CONCAT44(uVar5,SUB84(param_1,0));
  }
  (*(code *)PTR_FUN_8c105c24)(uVar23,uVar13,0,(int)DAT_8c105c00,0x1c);
  uVar13 = SUB84(dVar24,0);
  iVar6 = (*(code *)puVar2)();
  iVar16 = (*(code *)puVar2)();
  if (iVar16 == 7) {
    uVar7 = 2;
  }
  else {
    uVar7 = 0;
  }
  iVar16 = (*(code *)puVar2)();
  if (iVar16 == 7) {
    uVar8 = 4;
  }
  else {
    uVar8 = 0;
  }
  iVar16 = (*(code *)puVar2)();
  if (iVar16 == 7) {
    uVar9 = 8;
  }
  else {
    uVar9 = 0;
  }
  if ((*(byte *)(*(int *)((int)puVar21 + (int)DAT_8c105da6 + iVar12 + -4) + 0x4a) & 7) == 7) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = 0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar21 + iVar12 + 0x4c) = DAT_8c105dc8;
    uVar22 = CONCAT44(DAT_8c105dcc,uVar14);
  }
  else {
    *(ulonglong *)((int)puVar21 + iVar12 + 0x4c) = CONCAT44(DAT_8c105dcc,DAT_8c105dc8);
    uVar22 = CONCAT44(DAT_8c105dd0,DAT_8c105dcc);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar21 + iVar12 + 0x50) = (int)((ulonglong)uVar22 >> 0x20);
    uVar25 = CONCAT44(DAT_8c105dd4,uVar13);
    *(undefined4 *)((int)puVar21 + iVar12 + 0x54) = DAT_8c105dd4;
    *(undefined4 *)((int)puVar21 + iVar12 + 0x58) = DAT_8c105dd4;
  }
  else {
    *(undefined8 *)((int)puVar21 + iVar12 + 0x50) = uVar22;
    uVar25 = CONCAT44(_DAT_8c105dd8,DAT_8c105dd4);
    *(undefined8 *)((int)puVar21 + iVar12 + 0x54) = uVar25;
    *(undefined8 *)((int)puVar21 + iVar12 + 0x58) = uVar25;
  }
  *(undefined2 *)((int)puVar21 + iVar12 + 0x5c) = 0;
  *(undefined2 *)((int)puVar21 + iVar12 + 0x5e) = DAT_8c105da8;
  *(undefined2 *)((int)puVar21 + iVar12 + 0x60) = 0;
  *(undefined2 *)((int)puVar21 + iVar12 + 0x62) = 0;
  *(undefined4 *)((int)puVar21 + iVar12 + 100) = 0xffffffff;
  *(undefined4 *)((int)puVar21 + iVar12 + 0x68) = DAT_8c105dd0;
  *(undefined4 *)((int)puVar21 + iVar12 + 0x6c) = 0;
  *(undefined4 *)((int)puVar21 + iVar12 + 0x70) = 0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar21 + iVar12 + 0x74) = _DAT_8c105dd8;
    *(undefined4 *)((int)puVar21 + iVar12 + 0x78) = _DAT_8c105ddc;
    uVar22 = CONCAT44(DAT_8c105de0,(int)uVar22);
  }
  else {
    *(ulonglong *)((int)puVar21 + iVar12 + 0x74) = CONCAT44(_DAT_8c105ddc,_DAT_8c105dd8);
    *(ulonglong *)((int)puVar21 + iVar12 + 0x78) = CONCAT44(DAT_8c105de0,_DAT_8c105ddc);
    uVar22 = CONCAT44(DAT_8c105de4,DAT_8c105de0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar21 + (int)DAT_8c105daa + iVar12 + -4) = (int)((ulonglong)uVar22 >> 0x20);
    uVar22 = CONCAT44(DAT_8c105de4,(int)uVar22);
  }
  else {
    *(undefined8 *)((int)puVar21 + (int)DAT_8c105daa + iVar12 + -4) = uVar22;
    uVar22 = CONCAT44(_DAT_8c105de8,DAT_8c105de4);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar21 + (int)DAT_8c105dac + iVar12 + -4) = (int)((ulonglong)uVar22 >> 0x20);
  }
  else {
    *(undefined8 *)((int)puVar21 + (int)DAT_8c105dac + iVar12 + -4) = uVar22;
  }
  *(undefined2 *)((int)puVar21 + (int)DAT_8c105dae + iVar12 + -4) = 0;
  *(short *)((int)puVar21 + (int)DAT_8c105db0 + iVar12 + -4) = DAT_8c105da6;
  *(undefined2 *)((int)puVar21 + (int)DAT_8c105db2 + iVar12 + -4) = 0x70;
  *(undefined2 *)((int)puVar21 + (int)DAT_8c105db4 + iVar12 + -4) = 0x20;
  *(undefined4 *)((int)puVar21 + (int)DAT_8c105db6 + iVar12 + -4) = 0xffffffff;
  *(undefined4 *)((int)puVar21 + (int)DAT_8c105db8 + iVar12 + -4) = DAT_8c105dd0;
  *(undefined4 *)((int)puVar21 + (int)DAT_8c105dba + iVar12 + -4) = 0;
  *(undefined4 *)((int)puVar21 + (int)DAT_8c105dbc + iVar12 + -4) = 0;
  if (((int)*(char *)(*(int *)((int)puVar21 + (int)DAT_8c105da6 + iVar12 + -4) + 0x4b) & 0x80U) == 0
     ) {
    iVar16 = *(int *)((int)puVar21 + (int)DAT_8c105e6c + iVar12 + -4);
    *(undefined4 *)((int)puVar21 + iVar12 + 0x98) = *(undefined4 *)(*(int *)(iVar16 + 0x34) + 4);
    iVar6 = *(int *)(iVar16 + 0x40) * 0x3a + (int)DAT_8c105e6e;
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((float)iVar6,(int)uVar25);
    }
    else {
      dVar24 = (double)iVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar21 + iVar12 + 0x78) = (int)((ulonglong)dVar24 >> 0x20);
    }
    else {
      *(double *)((int)puVar21 + iVar12 + 0x78) = dVar24;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar22 = CONCAT44(DAT_8c105e74,(int)uVar23);
    }
    else {
      uVar22 = CONCAT44(uRam8c105e78,DAT_8c105e74);
    }
    (*(code *)PTR_FUN_8c105e70)
              (uVar22,**(undefined4 **)(iVar16 + 0x2c),(undefined1 *)((int)puVar21 + iVar12 + 0x74),
               0);
    uVar14 = (undefined4)uVar22;
    uVar13 = 0x20;
    sVar15 = (short)*(undefined4 *)(iVar16 + 0x40) * 0x3a + DAT_8c105e6e;
  }
  else {
    iVar16 = *(int *)((int)puVar21 + (int)DAT_8c105da6 + iVar12 + -4);
    iVar19 = (int)DAT_8c105dc0;
    uVar17 = 0;
    iVar18 = 0;
    sVar15 = 0x20;
    *(undefined4 *)((int)puVar21 + iVar12 + 0x70) = *(undefined4 *)(*(int *)(iVar16 + 0x34) + 4);
    iVar20 = 5;
    iVar16 = *(int *)(iVar16 + 0x40) * 0x3a + (int)DAT_8c105dbe;
    if (in_FPSCR_PR == '\0') {
      dVar24 = (double)CONCAT44((float)iVar16,(int)uVar25);
    }
    else {
      dVar24 = (double)iVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar21 + iVar12 + 0x50) = (int)((ulonglong)dVar24 >> 0x20);
      uVar26 = CONCAT44(_DAT_8c105de8,uVar5);
    }
    else {
      *(double *)((int)puVar21 + iVar12 + 0x50) = dVar24;
      uVar26 = CONCAT44(PTR_FUN_8c105dec,_DAT_8c105de8);
    }
    do {
      if (in_FPSCR_PR == '\0') {
        dVar24 = (double)CONCAT44((float)iVar19,SUB84(dVar24,0));
      }
      else {
        dVar24 = (double)iVar19;
      }
      if ((int)uVar17 < 0) {
        uVar11 = 1 >> (~uVar17 & 0x1f) + 1;
      }
      else {
        uVar11 = 1 << (uVar17 & 0x1f);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar21 + iVar12 + 0x4c) = (int)((ulonglong)dVar24 >> 0x20);
      }
      else {
        *(double *)((int)puVar21 + iVar12 + 0x4c) = dVar24;
      }
      if (((iVar6 == 7 | uVar7 | uVar8 | uVar9 | uVar10) & uVar11) == 0) {
        *(undefined2 *)((int)puVar21 + iVar12 + 0x5c) = 0;
      }
      else {
        *(short *)((int)puVar21 + iVar12 + 0x5c) = sVar15;
      }
      uVar4 = uVar26;
      if (in_FPSCR_SZ == '\0') {
        uVar4 = uVar23 & 0xffffffff;
      }
      uVar23 = uVar4;
      uVar17 = uVar17 + 1;
      sVar15 = sVar15 + 0x20;
      iVar19 = iVar19 + 0x15;
      puVar1 = (undefined4 *)
               (iVar18 + *(int *)(*(int *)((int)puVar21 + (int)DAT_8c105da6 + iVar12 + -4) + 0x2c));
      iVar18 = iVar18 + 4;
      (*(code *)PTR_FUN_8c105dec)(uVar23,*puVar1,(undefined1 *)((int)puVar21 + iVar12 + 0x4c),0);
      uVar5 = (undefined4)uVar26;
      uVar14 = (undefined4)uVar23;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    uVar13 = 0x14;
    sVar15 = (short)*(undefined4 *)(*(int *)((int)puVar21 + (int)DAT_8c105da6 + iVar12 + -4) + 0x40)
             * 0x3a + DAT_8c105dbe;
  }
  *(short *)((int)puVar21 + iVar12 + -4) = sVar15;
  iVar6 = *(int *)((int)puVar21 + (int)DAT_8c105da6 + iVar12 + -4);
  *(undefined4 *)((int)puVar21 + iVar12) = 1;
  if (in_FPSCR_SZ == '\0') {
    in_xd14 = CONCAT44(uVar5,uVar14);
  }
  (*(code *)PTR_FUN_8c105df0)(in_xd14,**(undefined4 **)(iVar6 + 0x38),0,(int)DAT_8c105dc2,uVar13);
  return;
}

