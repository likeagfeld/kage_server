// entry: 8c011390
// name: FUN_8c011390


/* WARNING: Removing unreachable block (ram,0x8c011550) */
/* WARNING: Removing unreachable block (ram,0x8c0118ea) */
/* WARNING: Removing unreachable block (ram,0x8c0113be) */
/* WARNING: Removing unreachable block (ram,0x8c011714) */
/* WARNING: Removing unreachable block (ram,0x8c01187c) */
/* WARNING: Removing unreachable block (ram,0x8c01181c) */
/* WARNING: Removing unreachable block (ram,0x8c01183a) */
/* WARNING: Removing unreachable block (ram,0x8c0113a4) */
/* WARNING: Removing unreachable block (ram,0x8c0113b0) */
/* WARNING: Removing unreachable block (ram,0x8c0117ba) */
/* WARNING: Removing unreachable block (ram,0x8c011818) */
/* WARNING: Removing unreachable block (ram,0x8c0117c0) */
/* WARNING: Removing unreachable block (ram,0x8c011850) */
/* WARNING: Removing unreachable block (ram,0x8c011708) */
/* WARNING: Removing unreachable block (ram,0x8c011720) */
/* WARNING: Removing unreachable block (ram,0x8c01194a) */
/* WARNING: Removing unreachable block (ram,0x8c011512) */
/* WARNING: Removing unreachable block (ram,0x8c01155c) */
/* WARNING: Removing unreachable block (ram,0x8c0118fe) */
/* WARNING: Removing unreachable block (ram,0x8c011974) */
/* WARNING: Removing unreachable block (ram,0x8c011960) */
/* WARNING: Removing unreachable block (ram,0x8c011902) */
/* WARNING: Removing unreachable block (ram,0x8c0118d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c011390(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 in_fr1;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  float fVar15;
  double dVar16;
  float fVar18;
  double dVar17;
  undefined8 in_dr12;
  ulonglong in_dr14;
  double dVar19;
  float fVar21;
  double dVar20;
  double in_xd8;
  double in_xd14;
  bool bVar22;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_1c [8];
  undefined8 local_14;
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)(in_dr14 >> 0x20);
    puVar11 = (undefined1 *)((int)&local_14 + 4);
    local_14 = CONCAT44((int)in_dr14,(undefined4)local_14);
  }
  else {
    puVar11 = local_1c;
    uStack_c = in_dr12;
    local_14 = in_dr14;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)(DAT_8c01151e + param_3),param_1);
  }
  else {
    dVar13 = *(double *)(DAT_8c01151e + param_3);
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (ulonglong)*(uint *)(DAT_8c011520 + param_3);
  }
  else {
    in_xd14 = *(double *)(DAT_8c011520 + param_3);
  }
  fVar18 = (float)((ulonglong)dVar13 >> 0x20);
  fVar15 = (float)in_dr14;
  if (fVar18 == fVar15) {
    uRam8c01154c = 0xf908c716;
    uRam8c0115b4 = 0xf008c762;
    uRam8c011760 = 0x9af03;
    uRam8c01187c = 0x42086263;
    return;
  }
  bVar22 = fVar15 == 0.0;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(fVar18,fVar18);
    dVar12 = (double)(CONCAT44(fVar18,fVar15) << 0x20);
    dVar19 = (double)CONCAT44(fVar18,fVar15);
  }
  else {
    fVar15 = SUB84(dVar13,0);
    dVar12 = in_xd14;
    dVar19 = dVar13;
  }
  fVar18 = SUB84(dVar13,0);
  if (bVar22) {
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44((undefined4)DAT_8c011740,in_fr1);
    }
    else {
      dVar13 = (double)CONCAT44(DAT_8c011740._4_4_,(undefined4)DAT_8c011740);
    }
    if (in_FPSCR_PR == '\0') {
      bVar22 = (float)((ulonglong)dVar19 >> 0x20) < (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      bVar22 = dVar19 < dVar13;
    }
    if (!bVar22) {
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(DAT_8c011740._4_4_,SUB84(dVar12,0));
      }
      else {
        dVar12 = (double)CONCAT44(PTR_DAT_8c011748,DAT_8c011740._4_4_);
      }
    }
    uVar10 = *(undefined4 *)(PTR_DAT_8c011748 + 4);
    *(undefined4 *)(puVar11 + -0x48) = *(undefined4 *)PTR_DAT_8c011748;
    *(undefined4 *)(puVar11 + -0x44) = uVar10;
    uVar10 = *(undefined4 *)(PTR_DAT_8c011748 + 0xc);
    *(undefined4 *)(puVar11 + -0x40) = *(undefined4 *)(PTR_DAT_8c011748 + 8);
    *(undefined4 *)(puVar11 + -0x3c) = uVar10;
    uVar10 = *(undefined4 *)(PTR_DAT_8c011748 + 0x14);
    *(undefined4 *)(puVar11 + -0x38) = *(undefined4 *)(PTR_DAT_8c011748 + 0x10);
    *(undefined4 *)(puVar11 + -0x34) = uVar10;
    iVar8 = *(int *)(DAT_8c011730 + param_3);
    *(undefined1 **)(puVar11 + -0x1c) = puVar11 + -0x48;
    iVar8 = *(int *)(DAT_8c011732 + iVar8);
    uVar2 = *(ushort *)(param_3 + 0x54);
    *(ushort *)(puVar11 + -0x18) = uVar2;
    if ((*(uint *)(param_3 + 0x2c) & (int)DAT_8c011736) == 0) {
      cVar1 = *(char *)(iVar8 + (int)DAT_8c011734 * (uint)uVar2 + 0x18);
      if (cVar1 == '\x01') {
        iVar8 = 5;
      }
      else if (cVar1 == '\x02') {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(DAT_8c011738 + param_3) + (int)DAT_8c01173a;
        uVar7 = (uint)*(ushort *)(puVar11 + -0x18);
        if (((*(short *)(iVar8 + uVar7 * 0x1e + 0x18) == 0) &&
            (*(int *)(puVar11 + -0xc) = iVar8 + DAT_8c01173c,
            *(short *)(iVar8 + DAT_8c01173c + uVar7 * 0x1e + 0x18) == 0)) &&
           (*(int *)(puVar11 + -8) = iVar8 + DAT_8c01173e,
           *(short *)(iVar8 + DAT_8c01173e + uVar7 * 0x1e + 0x18) == 0)) {
          uVar7 = (uint)*(ushort *)(puVar11 + -0x18);
          sVar4 = *(short *)(iVar8 + uVar7 * 0x1e + 4);
          sVar5 = *(short *)(*(int *)(puVar11 + -0xc) + uVar7 * 0x1e + 4);
          *(uint *)(puVar11 + -0xc) = *(int *)(puVar11 + -0xc) + uVar7 * 0x1e;
          iVar8 = *(int *)(puVar11 + -8);
          *(uint *)(puVar11 + -8) = iVar8 + uVar7 * 0x1e;
          iVar8 = (int)sVar4 + (int)sVar5 + (int)*(short *)(iVar8 + uVar7 * 0x1e + 4);
        }
        else {
          iVar8 = (int)*(short *)(iVar8 + DAT_8c01186c + (uint)*(ushort *)(puVar11 + -0x18) * 0x1e +
                                 4) +
                  (int)*(short *)(iVar8 + DAT_8c011868 + (uint)*(ushort *)(puVar11 + -0x18) * 0x1e +
                                 4);
        }
        if (4 < iVar8) {
          iVar8 = 4;
        }
      }
    }
    else {
      iVar8 = *(int *)(DAT_8c01186a + param_3);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(iVar8 * 4 + *(int *)(puVar11 + -0x1c)),fVar18);
      puVar6 = DAT_8c011750;
    }
    else {
      dVar13 = *(double *)(iVar8 * 4 + *(int *)(puVar11 + -0x1c));
      puVar6 = PTR__abs_8c011754;
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                SUB84(dVar13,0) - (float)((ulonglong)dVar12 >> 0x20));
    }
    else {
      dVar13 = dVar13 - dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(*(undefined4 *)DAT_8c01174c,puVar6);
    }
    else {
      dVar16 = *DAT_8c01174c;
    }
    if (in_FPSCR_PR == '\0') {
      iVar8 = (int)SUB84(dVar13,0);
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      fVar15 = SUB84(dVar16,0) / fVar18;
      dVar16 = (double)CONCAT44(fVar18,fVar15);
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * fVar15,SUB84(dVar13,0));
    }
    else {
      iVar8 = (int)dVar13;
      dVar16 = dVar16 / dVar16;
      dVar13 = dVar13 * dVar16;
    }
    uVar10 = SUB84(dVar16,0);
    uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar11 + -0x14) = uVar14;
      dVar16 = (double)CONCAT44(uVar14,(int)in_dr12);
    }
    else {
      *(double *)(puVar11 + -0x14) = dVar13;
      dVar16 = dVar13;
    }
    iVar8 = (*(code *)PTR__abs_8c011754)(iVar8);
    uVar7 = (uint)((ulonglong)dVar12 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)iVar8,uVar10);
    }
    else {
      dVar17 = (double)iVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(puVar11 + -0x14),SUB84(dVar13,0));
    }
    else {
      dVar13 = *(double *)(puVar11 + -0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar22 = (float)((ulonglong)dVar13 >> 0x20) < (float)((ulonglong)dVar17 >> 0x20);
    }
    else {
      bVar22 = dVar13 < dVar17;
    }
    if (!bVar22) {
LAB_8c0118ac:
      dVar20 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(SUB84(dVar19,0),SUB84(dVar19,0));
      }
      goto LAB_8c01156a;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((undefined4)DAT_8c011758,SUB84(dVar17,0));
    }
    else {
      dVar17 = (double)CONCAT44(DAT_8c011758._4_4_,(undefined4)DAT_8c011758);
    }
    fVar15 = (float)((ulonglong)dVar17 >> 0x20);
    fVar18 = SUB84(dVar19,0);
    if (fVar18 == fVar15) goto LAB_8c01189e;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(fVar15,DAT_8c011758._4_4_);
    }
    if (fVar18 != SUB84(dVar17,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44((undefined4)DAT_8c011740,extraout_fr1_00);
      }
      else {
        dVar13 = (double)CONCAT44(DAT_8c011740._4_4_,(undefined4)DAT_8c011740);
      }
      fVar15 = (float)((ulonglong)dVar13 >> 0x20);
      if (fVar18 != fVar15) {
        fVar21 = (float)((ulonglong)dVar19 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar22 = fVar21 < fVar15;
        }
        else {
          bVar22 = dVar19 < dVar13;
        }
        fVar15 = (float)((ulonglong)dVar16 >> 0x20);
        if (bVar22) {
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44(fVar21 - fVar15,fVar18);
          }
          else {
            dVar20 = dVar19 - dVar16;
          }
        }
        else if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44(fVar21 + fVar15,fVar18);
        }
        else {
          dVar20 = dVar19 + dVar16;
        }
        goto LAB_8c01156a;
      }
LAB_8c011560:
      fVar15 = (float)((ulonglong)dVar19 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar22 = fVar15 < (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        bVar22 = dVar19 < dVar13;
      }
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      if (bVar22) {
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)CONCAT44(fVar15 + fVar18,SUB84(dVar19,0));
        }
        else {
          dVar20 = dVar19 + dVar16;
        }
      }
      else if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44(fVar15 - fVar18,SUB84(dVar19,0));
      }
      else {
        dVar20 = dVar19 - dVar16;
      }
      goto LAB_8c01156a;
    }
LAB_8c011890:
    dVar12 = (double)((ulonglong)uVar7 << 0x20);
    fVar15 = (float)((ulonglong)dVar19 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar15 < 0.0;
    }
    else {
      bVar22 = dVar19 < dVar12;
    }
    fVar18 = (float)((ulonglong)dVar16 >> 0x20);
    if (bVar22) {
LAB_8c011780:
      if (in_FPSCR_PR == '\0') {
        bVar22 = fVar15 < (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        bVar22 = dVar19 < dVar17;
      }
      if (!bVar22) {
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(DAT_8c011870,SUB84(dVar17,0));
        }
        else {
          dVar17 = (double)CONCAT44(_DAT_8c011874,DAT_8c011870);
        }
        if (in_FPSCR_PR == '\0') {
          bVar22 = fVar15 < (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          bVar22 = dVar19 < dVar17;
        }
        if (bVar22) goto LAB_8c011794;
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44(fVar15 - fVar18,SUB84(dVar19,0));
      }
      else {
        dVar20 = dVar19 - dVar16;
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        bVar22 = fVar15 < SUB84(dVar17,0);
      }
      else {
        bVar22 = dVar19 < dVar17;
      }
      if (!bVar22) goto LAB_8c011780;
LAB_8c011794:
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44(fVar15 + fVar18,SUB84(dVar19,0));
      }
      else {
        dVar20 = dVar19 + dVar16;
      }
    }
    goto LAB_8c01156a;
  }
  if (fVar18 == SUB84(dVar12,0)) {
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(DAT_8c011530,in_fr1);
    }
    else {
      dVar13 = (double)CONCAT44(DAT_8c011534,DAT_8c011530);
    }
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar15 < (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      bVar22 = dVar19 < dVar13;
    }
    if ((!bVar22) && (in_FPSCR_SZ == '\0')) {
      fVar18 = DAT_8c011534;
    }
  }
  uVar10 = *(undefined4 *)(PTR_DAT_8c011538 + 4);
  *(undefined4 *)(puVar11 + -0x48) = *(undefined4 *)PTR_DAT_8c011538;
  *(undefined4 *)(puVar11 + -0x44) = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c011538 + 0xc);
  *(undefined4 *)(puVar11 + -0x40) = *(undefined4 *)(PTR_DAT_8c011538 + 8);
  *(undefined4 *)(puVar11 + -0x3c) = uVar10;
  uVar10 = *(undefined4 *)(PTR_DAT_8c011538 + 0x14);
  *(undefined4 *)(puVar11 + -0x38) = *(undefined4 *)(PTR_DAT_8c011538 + 0x10);
  *(undefined4 *)(puVar11 + -0x34) = uVar10;
  iVar8 = *(int *)((int)DAT_8c011524 + *(int *)(DAT_8c011522 + param_3));
  uVar2 = *(ushort *)(param_3 + 0x54);
  *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x48;
  uVar7 = (uint)uVar2;
  if ((*(uint *)(param_3 + 0x2c) & (int)DAT_8c011528) == 0) {
    cVar1 = *(char *)(iVar8 + (int)DAT_8c011526 * uVar7 + 0x18);
    if (cVar1 == '\x01') {
      iVar8 = 5;
    }
    else if (cVar1 == '\x02') {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(DAT_8c01152a + param_3);
      *(uint *)(puVar11 + -0x10) = uVar7;
      iVar8 = iVar8 + DAT_8c01152c;
      if (((*(short *)(iVar8 + uVar7 * 0x1e + 0x18) == 0) &&
          (*(int *)(puVar11 + -0x2c) = iVar8 + DAT_8c01151e,
          *(short *)(iVar8 + DAT_8c01151e + *(int *)(puVar11 + -0x10) * 0x1e + 0x18) == 0)) &&
         (*(int *)(puVar11 + -0x28) = iVar8 + DAT_8c01152e,
         *(short *)(iVar8 + DAT_8c01152e + *(int *)(puVar11 + -0x10) * 0x1e + 0x18) == 0)) {
        sVar4 = *(short *)(iVar8 + uVar7 * 0x1e + 4);
        iVar8 = *(int *)(puVar11 + -0x2c);
        *(uint *)(puVar11 + -0x2c) = iVar8 + uVar7 * 0x1e;
        sVar5 = *(short *)(iVar8 + uVar7 * 0x1e + 4);
        sVar3 = *(short *)(*(int *)(puVar11 + -0x28) + uVar7 * 0x1e + 4);
        *(uint *)(puVar11 + -0x28) = *(int *)(puVar11 + -0x28) + uVar7 * 0x1e;
        iVar8 = (int)sVar4 + (int)sVar5 + (int)sVar3;
      }
      else {
        *(int *)(puVar11 + -0x24) = (int)*(short *)(iVar8 + DAT_8c011990 + uVar7 * 0x1e + 4);
        iVar8 = *(int *)(puVar11 + -0x24) + (int)*(short *)(iVar8 + DAT_8c01198e + uVar7 * 0x1e + 4)
        ;
        *(int *)(puVar11 + -0x24) = iVar8;
      }
      if (4 < iVar8) {
        iVar8 = 4;
      }
    }
  }
  else {
    iVar8 = *(int *)(DAT_8c011992 + param_3);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)(iVar8 * 4 + *(int *)(puVar11 + -0x30)),fVar18);
    param_2 = DAT_8c011540;
  }
  else {
    dVar13 = *(double *)(iVar8 * 4 + *(int *)(puVar11 + -0x30));
    in_xd8 = (double)CONCAT44(PTR__abs_8c011544,DAT_8c011540);
  }
  if (in_FPSCR_PR == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                              SUB84(dVar13,0) - (float)((ulonglong)dVar12 >> 0x20));
  }
  else {
    dVar13 = dVar13 - dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd8 = (double)CONCAT44(param_2,*DAT_8c01153c);
  }
  if (in_FPSCR_PR == '\0') {
    iVar8 = (int)SUB84(dVar13,0);
    fVar15 = (float)((ulonglong)in_xd8 >> 0x20) / SUB84(in_xd8,0);
    dVar16 = (double)CONCAT44(fVar15,SUB84(in_xd8,0));
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * fVar15,SUB84(dVar13,0));
  }
  else {
    iVar8 = (int)dVar13;
    dVar16 = in_xd8 / in_xd8;
    dVar13 = dVar13 * dVar16;
  }
  uVar10 = SUB84(dVar16,0);
  uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar11 + -0x20) = uVar14;
    dVar16 = (double)CONCAT44(uVar14,(int)in_dr12);
  }
  else {
    *(double *)(puVar11 + -0x20) = dVar13;
    dVar16 = dVar13;
  }
  iVar8 = (*(code *)PTR__abs_8c011544)(iVar8);
  uVar7 = (uint)((ulonglong)dVar12 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44((float)iVar8,uVar10);
  }
  else {
    dVar17 = (double)iVar8;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)(puVar11 + -0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = *(double *)(puVar11 + -0x20);
  }
  if (in_FPSCR_PR == '\0') {
    bVar22 = (float)((ulonglong)dVar13 >> 0x20) < (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    bVar22 = dVar13 < dVar17;
  }
  if (!bVar22) goto LAB_8c0118ac;
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(DAT_8c011548,SUB84(dVar17,0));
  }
  else {
    dVar17 = (double)CONCAT44(uRam8c01154c,DAT_8c011548);
  }
  fVar15 = (float)((ulonglong)dVar17 >> 0x20);
  fVar18 = SUB84(dVar19,0);
  if (fVar18 != fVar15) {
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(fVar15,(undefined4)DAT_8c0115a8);
    }
    if (fVar18 != SUB84(dVar17,0)) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(DAT_8c0115a8._4_4_,extraout_fr1);
      }
      else {
        dVar13 = (double)CONCAT44(_DAT_8c0115b0,DAT_8c0115a8._4_4_);
      }
      dVar20 = dVar19;
      if (fVar18 != (float)((ulonglong)dVar13 >> 0x20)) goto LAB_8c01156a;
      goto LAB_8c011560;
    }
    goto LAB_8c011890;
  }
LAB_8c01189e:
  dVar12 = (double)((ulonglong)uVar7 << 0x20);
  fVar15 = (float)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar22 = fVar15 < 0.0;
  }
  else {
    bVar22 = dVar19 < dVar12;
  }
  fVar18 = (float)((ulonglong)dVar16 >> 0x20);
  if (bVar22) {
LAB_8c011764:
    if (in_FPSCR_PR == '\0') {
      bVar22 = (float)((ulonglong)dVar17 >> 0x20) < fVar15;
    }
    else {
      bVar22 = dVar17 < dVar19;
    }
    if (bVar22) {
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(DAT_8c011870,SUB84(dVar17,0));
      }
      else {
        dVar17 = (double)CONCAT44(_DAT_8c011874,DAT_8c011870);
      }
      if (in_FPSCR_PR == '\0') {
        bVar22 = fVar15 < (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        bVar22 = dVar19 < dVar17;
      }
      if (bVar22) goto LAB_8c01177c;
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(fVar15 + fVar18,SUB84(dVar19,0));
    }
    else {
      dVar20 = dVar19 + dVar16;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),_DAT_8c011874);
    }
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar15 < SUB84(dVar17,0);
    }
    else {
      bVar22 = dVar19 < dVar17;
    }
    if (!bVar22) goto LAB_8c011764;
LAB_8c01177c:
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(fVar15 - fVar18,SUB84(dVar19,0));
    }
    else {
      dVar20 = dVar19 - dVar16;
    }
  }
LAB_8c01156a:
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(_DAT_8c0115b0,SUB84(dVar17,0));
  }
  else {
    dVar13 = (double)CONCAT44(uRam8c0115b4,_DAT_8c0115b0);
  }
  fVar15 = (float)((ulonglong)dVar13 >> 0x20);
  fVar18 = (float)((ulonglong)dVar20 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar22 = fVar18 < fVar15;
  }
  else {
    bVar22 = dVar20 < dVar13;
  }
  if (bVar22) {
    if (in_FPSCR_PR == '\0') {
      bVar22 = fVar18 < 0.0;
    }
    else {
      bVar22 = dVar20 < (double)((ulonglong)dVar12 & 0xffffffff00000000);
    }
    if (bVar22) {
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44(fVar18 + fVar15,SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 + dVar13;
      }
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(_DAT_8c011878,SUB84(dVar13,0));
    }
    else {
      dVar13 = (double)CONCAT44(uRam8c01187c,_DAT_8c011878);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44(fVar18 + (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar20,0));
    }
    else {
      dVar20 = dVar20 + dVar13;
    }
  }
  uVar7 = *(uint *)(param_3 + 0x2c);
  uVar10 = (undefined4)((ulonglong)dVar20 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0115a2 + param_3) = uVar10;
  }
  else {
    *(double *)(DAT_8c0115a2 + param_3) = dVar20;
  }
  uVar9 = (uint)DAT_8c0115a6;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c0115a4 + param_3) = uVar10;
  }
  else {
    *(double *)(DAT_8c0115a4 + param_3) = dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c0115a2 + param_3) = SUB84(dVar20,0);
  }
  else {
    *(double *)(DAT_8c0115a2 + param_3) = in_xd14;
  }
  *(uint *)(param_3 + 0x2c) = uVar7 | uVar9 | uVar9;
                    /* WARNING: Read-only address (ram,0x8c01154c) is written */
                    /* WARNING: Read-only address (ram,0x8c0115b4) is written */
                    /* WARNING: Read-only address (ram,0x8c011760) is written */
                    /* WARNING: Read-only address (ram,0x8c01187c) is written */
  return;
}

