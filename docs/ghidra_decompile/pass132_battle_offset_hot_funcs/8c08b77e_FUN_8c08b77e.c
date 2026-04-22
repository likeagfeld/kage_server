// entry: 8c08b77e
// name: FUN_8c08b77e
// signature: undefined FUN_8c08b77e(void)


/* WARNING: Removing unreachable block (ram,0x8c08b842) */
/* WARNING: Removing unreachable block (ram,0x8c08b88e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8c08b77e(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_fr3;
  undefined4 uVar5;
  double dVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 in_xf4;
  undefined4 in_xf6;
  float in_xf8;
  bool bVar15;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float local_44;
  undefined4 uStackY_40;
  undefined4 uVar16;
  int iStack_2c;
  int local_28;
  undefined1 *puVar17;
  
  puVar1 = PTR_FUN_8c08b7d4;
  puVar17 = &DAT_8c2856fc;
  uStackY_40 = in_xf4;
  iVar2 = (*(code *)PTR_FUN_8c08b7d4)(&DAT_8c2856fc);
  iVar3 = (*(code *)puVar1)();
  if (iVar2 != iVar3) {
    iVar2 = (*(code *)puVar1)(puVar17);
    iVar3 = (*(code *)puVar1)();
    if (iVar2 != iVar3) {
      return 0;
    }
  }
  iVar2 = (*(code *)puVar1)(puVar17);
  iVar3 = (*(code *)puVar1)();
  iVar2 = (*(code *)PTR_FUN_8c08b938)(iVar2 - iVar3);
  iVar3 = (*(code *)puVar1)();
  iVar4 = (*(code *)puVar1)();
  iVar3 = (*(code *)PTR_FUN_8c08b938)(iVar3 - iVar4);
  if ((iVar2 < 2) && (iVar3 < 2)) {
    local_28 = (*(code *)puVar1)();
    iVar2 = (*(code *)puVar1)();
    iVar3 = (int)(*(int *)(param_3 + 0x20) + (uint)(*(int *)(param_3 + 0x20) < 0)) >> 1;
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((float)iVar3,param_2);
    }
    else {
      dVar13 = (double)iVar3;
    }
    fVar11 = (float)((ulonglong)dVar13 >> 0x20);
    local_44 = fVar11;
    if (in_FPSCR_SZ != '\0') {
      local_44 = SUB84(dVar13,0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)local_28,
                               (float)((int)(*(int *)(param_3 + 0x24) +
                                            (uint)(*(int *)(param_3 + 0x24) < 0)) >> 1));
      dVar9 = (double)CONCAT44((float)iVar2,param_1);
    }
    else {
      dVar6 = (double)local_28;
      dVar9 = (double)iVar2;
    }
    if (in_FPSCR_SZ == '\0') {
      uStackY_40 = SUB84(dVar6,0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar11,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(DAT_8c08b93c,in_fr3);
    }
    else {
      dVar14 = (double)CONCAT44(DAT_8c08b940,DAT_8c08b93c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - SUB84(dVar6,0),SUB84(dVar9,0));
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                               (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar9 = dVar9 - dVar6;
      dVar6 = dVar6 + dVar14;
    }
    fVar8 = SUB84(dVar14,0);
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(fVar11,0x3f800000);
      uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar14 = (double)CONCAT44(DAT_8c08b940,fVar8);
      fVar8 = in_xf8;
    }
    else {
      uVar7 = SUB84(dVar6,0);
      dVar14 = (double)CONCAT44(DAT_8c08b944,DAT_8c08b940);
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                SUB84(dVar13,0) * (float)((ulonglong)dVar14 >> 0x20));
    }
    else {
      dVar13 = dVar13 * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(DAT_8c08b944,SUB84(dVar14,0));
    }
    else {
      dVar14 = (double)CONCAT44(_FUN_8c08b948,DAT_8c08b944);
    }
    if (in_FPSCR_PR == '\0') {
      fVar11 = SUB84(dVar13,0) / (float)((ulonglong)dVar14 >> 0x20);
      dVar13 = (double)(ulonglong)(uint)fVar11;
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + fVar11,SUB84(dVar9,0));
    }
    else {
      dVar13 = dVar13 / dVar14;
      fVar11 = SUB84(dVar13,0);
      dVar9 = dVar9 + dVar13;
    }
    uVar12 = SUB84(dVar13,0);
    uVar16 = (undefined4)((ulonglong)dVar9 >> 0x20);
    if (in_FPSCR_SZ != '\0') {
      uVar16 = SUB84(dVar9,0);
      fVar11 = fVar8;
    }
    iVar2 = (*(code *)puVar1)();
    uVar10 = (undefined4)((ulonglong)dVar9 >> 0x20);
    uVar5 = SUB84(dVar14,0);
    iVar3 = (*(code *)puVar1)();
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(local_44,uVar12);
      dVar9 = (double)CONCAT44(DAT_8c08b93c,uVar5);
    }
    else {
      dVar13 = (double)CONCAT44(uStackY_40,local_44);
      dVar9 = (double)CONCAT44(DAT_8c08b940,DAT_8c08b93c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44((float)iVar3,SUB84(dVar13,0));
      dVar13 = (double)CONCAT44(uVar10,((float)iVar2 - (float)((ulonglong)dVar13 >> 0x20)) +
                                       (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      dVar14 = (double)iVar3;
      dVar13 = ((double)CONCAT44(uVar10,(float)iVar2) - dVar13) + dVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      in_xf6 = SUB84(dVar13,0);
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uStackY_40);
      dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar11);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = (double)CONCAT44(((float)((ulonglong)dVar14 >> 0x20) - SUB84(dVar6,0)) +
                                SUB84(dVar14,0),SUB84(dVar14,0));
    }
    else {
      dVar14 = (dVar14 - dVar6) + (dVar14 - dVar6);
    }
    iVar2 = (int)((ulonglong)dVar14 >> 0x20);
    iStack_2c = iVar2;
    if (in_FPSCR_SZ != '\0') {
      iStack_2c = SUB84(dVar14,0);
      local_28 = iVar2;
    }
    iVar2 = (*(code *)puVar1)();
    uVar10 = SUB84(dVar14,0);
    uVar12 = SUB84(dVar9,0);
    uVar5 = SUB84(dVar6,0);
    iVar3 = (*(code *)puVar1)();
    if (iVar2 == iVar3) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(uVar16,SUB84(dVar13,0));
        dVar6 = (double)CONCAT44(iStack_2c,uVar10);
      }
      else {
        dVar13 = (double)CONCAT44(in_xf6,uVar16);
        dVar6 = (double)CONCAT44(local_28,iStack_2c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = (float)((ulonglong)dVar13 >> 0x20) - (float)((ulonglong)dVar6 >> 0x20);
        dVar13 = (double)CONCAT44(fVar11,SUB84(dVar13,0));
        iVar2 = (int)fVar11;
      }
      else {
        dVar13 = dVar13 - dVar6;
        fVar11 = (float)((ulonglong)dVar13 >> 0x20);
        iVar2 = (int)dVar13;
      }
      if (in_FPSCR_SZ != '\0') {
        fVar11 = SUB84(dVar13,0);
        in_xf6 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      iVar2 = (*(code *)PTR_FUN_8c08b938)(iVar2,fVar11,in_xf6);
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)iVar2,SUB84(dVar6,0));
      }
      else {
        dVar13 = (double)iVar2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c08b93c,uVar12);
      }
      else {
        dVar6 = (double)CONCAT44(DAT_8c08b940,DAT_8c08b93c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar15 = (float)((ulonglong)dVar13 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar15 = dVar13 < dVar6;
      }
      if (bVar15) {
        return 1;
      }
    }
    else {
      iVar2 = (*(code *)puVar1)();
      iVar3 = (*(code *)puVar1)();
      if (iVar2 == iVar3) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(uVar7,uVar5);
          dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),in_xf6);
        }
        else {
          dVar6 = (double)CONCAT44(fVar11,uVar7);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = (float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar13,0);
          dVar6 = (double)CONCAT44(fVar8,SUB84(dVar6,0));
          iVar2 = (int)fVar8;
        }
        else {
          dVar6 = dVar6 - dVar13;
          fVar8 = (float)((ulonglong)dVar6 >> 0x20);
          iVar2 = (int)dVar6;
        }
        if (in_FPSCR_SZ != '\0') {
          fVar8 = SUB84(dVar6,0);
          fVar11 = (float)((ulonglong)dVar6 >> 0x20);
        }
        iVar2 = (*(code *)PTR_FUN_8c08b938)(iVar2,fVar8,fVar11);
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)CONCAT44((float)iVar2,uVar10);
        }
        else {
          dVar13 = (double)iVar2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c08b93c,uVar12);
        }
        else {
          dVar6 = (double)CONCAT44(DAT_8c08b940,DAT_8c08b93c);
        }
        if (in_FPSCR_PR == '\0') {
          bVar15 = (float)((ulonglong)dVar13 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar15 = dVar13 < dVar6;
        }
        if (bVar15) {
          return 1;
        }
      }
    }
  }
  return 0;
}

