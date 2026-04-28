// entry: 8c043afa
// name: FUN_8c043afa
// signature: undefined FUN_8c043afa(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c043afa(double param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  double dVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined8 in_dr2;
  float fVar17;
  double dVar18;
  undefined8 in_dr14;
  double dVar19;
  double dVar20;
  undefined8 in_xd8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  puVar3 = PTR_FUN_8c043c58;
  uVar16 = (undefined4)in_dr2;
  if (in_FPSCR_SZ == '\0') {
    puVar15 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar15 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)(*(int *)(DAT_8c043c48 + param_2) + 0x18),
                              *(undefined4 *)(DAT_8c043c4a + param_2));
  }
  else {
    in_xd8 = *(undefined8 *)(DAT_8c043c4a + param_2);
    dVar18 = *(double *)(*(int *)(DAT_8c043c48 + param_2) + 0x18);
  }
  if (in_FPSCR_PR == '\0' && SUB84(dVar18,0) < (float)((ulonglong)dVar18 >> 0x20)) {
    sVar6 = *(short *)(DAT_8c043c4c + param_2);
    if (sVar6 == 0) {
      sVar6 = *(short *)(DAT_8c043c50 + param_2);
      *(short *)((int)puVar15 + -0x10) = sVar6;
      if (-1 < sVar6) {
        iVar11 = 0;
        iVar7 = (*(code *)PTR__rand_8c043c60)();
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44((float)iVar7,SUB84(dVar18,0));
        }
        else {
          dVar18 = (double)iVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(DAT_8c043c64,uVar16);
        }
        else {
          dVar19 = (double)CONCAT44(DAT_8c043c68,DAT_8c043c64);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) /
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 / dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(DAT_8c043c68,SUB84(dVar19,0));
        }
        else {
          dVar19 = (double)CONCAT44(PTR_DAT_8c043c6c,DAT_8c043c68);
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = (float)((ulonglong)dVar18 >> 0x20) * (float)((ulonglong)dVar19 >> 0x20);
          dVar18 = (double)CONCAT44(fVar17,SUB84(dVar18,0));
          iVar7 = (int)fVar17;
        }
        else {
          dVar18 = dVar18 * dVar19;
          iVar7 = (int)dVar18;
        }
        uVar16 = SUB84(dVar18,0);
        iVar7 = (iVar7 + *(short *)((int)puVar15 + -0x10) * 3) * 0x1c;
        iVar5 = *(int *)(PTR_DAT_8c043c6c + iVar7);
        *(undefined **)((int)puVar15 + -0xc) = PTR_DAT_8c043c6c;
        if (0 < iVar5) {
          pcVar13 = PTR_DAT_8c043c70 + iVar7;
          dVar20 = (double)CONCAT44(0x3f800000,(int)in_dr14);
          *(int *)((int)puVar15 + -0xc) = *(int *)((int)puVar15 + -0xc) + iVar7;
          *(undefined **)((int)puVar15 + -8) = PTR_FUN_8c043c58;
          pcVar14 = pcVar13;
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44(0x40000000,(int)in_dr14);
          }
          else {
            dVar20 = dVar20 + dVar20;
          }
          do {
            cVar1 = *pcVar14;
            iVar11 = iVar11 + 1;
            pcVar14 = pcVar14 + 2;
            pcVar2 = pcVar13 + 1;
            pcVar13 = pcVar13 + 2;
            dVar4 = dVar20;
            if (in_FPSCR_SZ == '\0') {
              dVar4 = (double)((ulonglong)param_1 & 0xffffffff);
            }
            param_1 = dVar4;
            (**(code **)((int)puVar15 + -8))
                      (param_1,*(undefined4 *)(DAT_8c043c48 + param_2),cVar1 + 6,*pcVar2 + 6,4);
            uVar16 = SUB84(dVar18,0);
          } while (iVar11 < **(int **)((int)puVar15 + -0xc));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44(*(undefined4 *)(DAT_8c043c4a + param_2),uVar16);
          dVar19 = (double)CONCAT44(DAT_8c043c5c,SUB84(dVar19,0));
        }
        else {
          dVar18 = *(double *)(DAT_8c043c4a + param_2);
          dVar19 = (double)CONCAT44(PTR__rand_8c043c60,DAT_8c043c5c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) +
                                    (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 + dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(DAT_8c043c4a + param_2) = (int)((ulonglong)dVar18 >> 0x20);
        }
        else {
          *(double *)(DAT_8c043c4a + param_2) = dVar18;
        }
      }
    }
    else {
      iVar7 = *(int *)(DAT_8c043c4e + param_2);
      piVar9 = (int *)(PTR_DAT_8c043c54 + iVar7 * 0x1c);
      iVar11 = 0;
      if (0 < *piVar9) {
        piVar10 = piVar9 + 1;
        dVar19 = (double)CONCAT44(0x3f800000,(int)in_dr14);
        piVar12 = piVar10;
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)CONCAT44(0x40000000,(int)in_dr14);
        }
        else {
          dVar19 = dVar19 + dVar19;
        }
        do {
          iVar7 = *piVar10;
          iVar11 = iVar11 + 1;
          piVar10 = (int *)((int)piVar10 + 2);
          dVar20 = dVar19;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = (double)((ulonglong)param_1 & 0xffffffff);
          }
          param_1 = dVar20;
          (*(code *)puVar3)(param_1,*(undefined4 *)(DAT_8c043c48 + param_2),(char)iVar7 + 6,
                            *(char *)((int)piVar12 + 1) + 6,4);
          uVar16 = (undefined4)in_dr2;
          piVar12 = (int *)((int)piVar12 + 2);
        } while (iVar11 < *piVar9);
        if (in_FPSCR_SZ == '\0') {
          dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),
                                    *(undefined4 *)(DAT_8c043c4a + param_2));
        }
        else {
          in_xd8 = *(undefined8 *)(DAT_8c043c4a + param_2);
        }
        sVar6 = *(short *)(DAT_8c043c4c + param_2);
        iVar7 = *(int *)(DAT_8c043c4e + param_2);
      }
      if (sVar6 < 0) {
        *(int *)(DAT_8c043d96 + param_2) = iVar7 + -1;
        if (iVar7 + -1 < 0) {
          *(undefined4 *)(DAT_8c043d96 + param_2) = 0xd;
        }
        *(short *)(DAT_8c043d98 + param_2) = sVar6 + 1;
      }
      else {
        *(int *)(DAT_8c043c4e + param_2) = iVar7 + 1;
        if (0xd < iVar7 + 1) {
          *(undefined4 *)(DAT_8c043c4e + param_2) = 0;
        }
        *(short *)(DAT_8c043c4c + param_2) = sVar6 + -1;
      }
      uVar8 = (uint)*(short *)(DAT_8c043c4c + param_2);
      fVar17 = SUB84(dVar18,0);
      if (uVar8 == 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar19 = (double)CONCAT44(DAT_8c043c5c,uVar16);
        }
        else {
          dVar19 = (double)CONCAT44(PTR__rand_8c043c60,DAT_8c043c5c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = fVar17 + (float)((ulonglong)dVar19 >> 0x20);
        }
        else {
          fVar17 = SUB84(dVar18 + dVar19,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(DAT_8c043c4a + param_2) = fVar17;
        }
        else {
          *(undefined8 *)(DAT_8c043c4a + param_2) = in_xd8;
        }
      }
      else {
        if ((int)uVar8 < 0) {
          uVar8 = ~(~uVar8 + 1 & 1) + 1;
        }
        else {
          uVar8 = uVar8 & 1;
        }
        if (uVar8 == 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(_DAT_8c043db4,uVar16);
          }
          else {
            dVar19 = (double)CONCAT44(PTR_FUN_8c043db8,_DAT_8c043db4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar17 = fVar17 + (float)((ulonglong)dVar19 >> 0x20);
          }
          else {
            fVar17 = SUB84(dVar18 + dVar19,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(DAT_8c043d9a + param_2) = fVar17;
          }
          else {
            *(undefined8 *)(DAT_8c043d9a + param_2) = in_xd8;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(DAT_8c043db0,uVar16);
          }
          else {
            dVar19 = (double)CONCAT44(_DAT_8c043db4,DAT_8c043db0);
          }
          if (in_FPSCR_PR == '\0') {
            fVar17 = fVar17 + (float)((ulonglong)dVar19 >> 0x20);
          }
          else {
            fVar17 = SUB84(dVar18 + dVar19,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(DAT_8c043d9a + param_2) = fVar17;
          }
          else {
            *(undefined8 *)(DAT_8c043d9a + param_2) = in_xd8;
          }
        }
      }
    }
  }
  return;
}

