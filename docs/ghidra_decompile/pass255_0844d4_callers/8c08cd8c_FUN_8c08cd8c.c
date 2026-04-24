// entry: 8c08cd8c
// name: FUN_8c08cd8c
// signature: undefined FUN_8c08cd8c(void)


void FUN_8c08cd8c(undefined8 param_1,float param_2,int param_3)

{
  bool bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  float fVar16;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 in_dr12;
  longlong lVar17;
  undefined4 uVar18;
  undefined8 in_dr14;
  undefined8 in_xd8;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_2c [8];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_1c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_1c._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar9 = (undefined1 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)in_dr14,(undefined4)local_24);
  }
  else {
    puVar9 = local_2c;
    uStack_1c = in_dr12;
    local_24 = in_dr14;
  }
  *(undefined4 *)(puVar9 + -4) = in_PR;
  puVar8 = *(ushort **)(DAT_8c08cef2 + param_3);
  if (in_FPSCR_SZ == '\0') {
    param_2 = *(float *)(param_3 + 0x34);
  }
  else {
    in_xd8 = *(undefined8 *)(param_3 + 0x34);
  }
  iVar6 = *(int *)(param_3 + 0x28);
  if (in_FPSCR_PR != '\0' || param_2 <= 0.0) {
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)CONCAT44(0x40000000,param_2);
    }
    else {
      dVar15 = (double)CONCAT44(0x3f800000,param_2) + (double)CONCAT44(0x3f800000,param_2);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(param_3 + 0x34) = (int)((ulonglong)dVar15 >> 0x20);
    }
    else {
      *(double *)(param_3 + 0x34) = dVar15;
    }
    puVar4 = PTR_FUN_8c08cf04;
    puVar3 = PTR_FUN_8c08cf00;
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        if ((*puVar8 & 1) == 0) break;
        iVar7 = iVar7 + 1;
        puVar8 = (ushort *)((int)puVar8 + (int)DAT_8c08cef4);
      } while (iVar7 < iVar6);
    }
    if (iVar7 != iVar6) {
      if (in_FPSCR_SZ == '\0') {
        lVar17 = (ulonglong)DAT_8c08cefc << 0x20;
      }
      else {
        lVar17 = CONCAT44(PTR_FUN_8c08cf00,DAT_8c08cefc);
      }
      dVar13 = 5.26354424712089e-315;
      do {
        do {
          uVar10 = SUB84(dVar15,0);
          uVar18 = SUB84(dVar13,0);
          iVar6 = (*(code *)puVar3)();
          if (in_FPSCR_PR == '\0') {
            fVar12 = (float)iVar6;
          }
          else {
            fVar12 = (float)((ulonglong)(double)iVar6 >> 0x20);
          }
          dVar15 = in_xd14;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(uVar18,uVar18);
          }
          iVar6 = *(int *)(param_3 + 0x20) + -2;
          if (in_FPSCR_PR == '\0') {
            fVar12 = (fVar12 / (float)((ulonglong)lVar17 >> 0x20)) * (float)iVar6 +
                     (float)((ulonglong)dVar15 >> 0x20);
            dVar15 = (double)CONCAT44(fVar12,SUB84(dVar15,0));
            iVar6 = (int)fVar12;
          }
          else {
            uVar10 = SUB84((double)iVar6,0);
            iVar6 = (int)dVar15;
          }
          dVar13 = in_xd14;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(SUB84(dVar15,0),SUB84(dVar15,0));
          }
          *(int *)(puVar9 + -0x14) = iVar6;
          iVar6 = (*(code *)puVar3)();
          if (in_FPSCR_PR == '\0') {
            fVar12 = (float)iVar6;
          }
          else {
            fVar12 = (float)((ulonglong)(double)iVar6 >> 0x20);
          }
          iVar6 = *(int *)(param_3 + 0x24) + -2;
          if (in_FPSCR_PR == '\0') {
            fVar16 = (float)iVar6;
            dVar15 = (double)CONCAT44(fVar16,uVar10);
            fVar12 = (fVar12 / (float)((ulonglong)lVar17 >> 0x20)) * fVar16 +
                     (float)((ulonglong)dVar13 >> 0x20);
            dVar13 = (double)CONCAT44(fVar12,SUB84(dVar13,0));
            iVar6 = (int)fVar12;
          }
          else {
            dVar15 = (double)iVar6;
            iVar6 = (int)dVar13;
          }
          *(int *)(puVar9 + -0x10) = iVar6;
          iVar6 = (*(code *)puVar4)(param_3,*(undefined4 *)(puVar9 + -0x14));
        } while (iVar6 == 0);
        iVar6 = (*(code *)PTR_FUN_8c08cf08)
                          (*(undefined4 *)(param_3 + 8),*(undefined4 *)(puVar9 + -0x14),
                           *(undefined4 *)(puVar9 + -0x10));
        uVar10 = (undefined4)param_1;
        uVar18 = SUB84(dVar15,0);
        bVar1 = false;
        if ((3 < iVar6) && (iVar6 < 0x10)) {
          bVar1 = true;
        }
      } while (bVar1);
      iVar6 = (*(code *)PTR_FUN_8c08cf0c)
                        (param_3,*(undefined4 *)(puVar9 + -0x14),*(undefined4 *)(puVar9 + -0x10));
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44((undefined4)DAT_8c08cf10,uVar10);
        dVar13 = (double)CONCAT44(*(undefined4 *)DAT_8c08cf10._4_4_,uVar18);
      }
      else {
        dVar15 = (double)CONCAT44(DAT_8c08cf10._4_4_,(undefined4)DAT_8c08cf10);
        dVar13 = *DAT_8c08cf10._4_4_;
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) /
                                  (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 / dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(param_3 + 0x18),SUB84(dVar13,0));
      }
      else {
        dVar13 = *(double *)(param_3 + 0x18);
      }
      *(undefined4 *)(puVar9 + -0x1c) = 10;
      *(undefined4 *)(puVar9 + -0x18) = 0;
      *(undefined4 *)(puVar9 + -0x20) = *(undefined4 *)(puVar9 + -0x10);
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) +
                                  (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(DAT_8c08cf18,SUB84(dVar13,0));
      }
      else {
        dVar13 = (double)CONCAT44(PTR_FUN_8c08cf1c,DAT_8c08cf18);
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) +
                                  (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar13;
      }
      (*(code *)PTR_FUN_8c08cf1c)(dVar15,param_3,iVar7,9,*(undefined4 *)(puVar9 + -0x14));
      uVar11 = SUB84(dVar13,0);
      (*(code *)PTR_FUN_8c08cf20)(param_3,puVar8);
      if (iVar6 != 0) {
        *(int *)(puVar9 + -0xc) = iVar6 + 2;
        iVar7 = (*(code *)PTR_FUN_8c08cf24)();
        *(int *)(puVar9 + -8) = *(int *)(param_3 + 0x20) * iVar7;
        iVar7 = (*(code *)PTR_FUN_8c08cf24)();
        *(int *)((*(int *)(puVar9 + -8) + iVar7) * 4 + *(int *)(DAT_8c08cef8 + param_3)) = iVar6;
      }
      uVar5 = DAT_8c08cf28;
      uVar2 = DAT_8c08cefa;
      *(byte *)((int)puVar8 + 9) = *(byte *)((int)puVar8 + 9) & 0xf | 0x70;
      *(byte *)(puVar8 + 8) = (byte)puVar8[8] & (byte)uVar2 | 2;
      if (in_FPSCR_SZ == '\0') {
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        uVar14 = CONCAT44(DAT_8c08cf2c,uVar11);
      }
      else {
        *(ulonglong *)(puVar8 + 10) = (ulonglong)uVar11;
        uVar14 = CONCAT44(uRam8c08cf30,DAT_8c08cf2c);
      }
      iVar6 = (int)DAT_8c08d04a;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar8 + 0x30) = (int)((ulonglong)uVar14 >> 0x20);
      }
      else {
        *(undefined8 *)(puVar8 + 0x30) = uVar14;
      }
      *(uint *)(param_3 + iVar6) = *(uint *)(param_3 + iVar6) | uVar5;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(param_3 + 0x1c),param_2);
    }
    else {
      dVar15 = *(double *)(param_3 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = SUB84(dVar15,0) - (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar12 = SUB84(dVar15 - dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(param_3 + 0x34) = fVar12;
    }
    else {
      *(undefined8 *)(param_3 + 0x34) = in_xd8;
    }
  }
  return;
}

