// entry: 8c02722c
// name: FUN_8c02722c


/* WARNING: Removing unreachable block (ram,0x8c028044) */
/* WARNING: Removing unreachable block (ram,0x8c027f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c02722c(double param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  int *piVar15;
  ushort *puVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined4 extraout_fr1;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  double in_dr2;
  double *pdVar29;
  double dVar30;
  double *pdVar33;
  undefined8 uVar31;
  float fVar34;
  double dVar32;
  float fVar35;
  undefined8 in_dr12;
  double in_dr14;
  undefined4 in_PR;
  undefined2 uVar36;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte abStack_8000 [32740];
  undefined1 auStack_1c [8];
  undefined8 local_14;
  undefined8 uStack_c;
  
  uVar5 = SUB84(param_1,0);
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar25 = (undefined1 *)((int)&local_14 + 4);
    local_14 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)local_14);
  }
  else {
    puVar25 = auStack_1c;
    uStack_c = in_dr12;
    local_14 = in_dr14;
  }
  *(undefined4 *)(puVar25 + -4) = in_PR;
  iVar8 = (int)DAT_8c027398;
  iVar20 = (int)DAT_8c02739a;
  *(int *)(puVar25 + iVar8 + 0x78) = param_2;
  iVar19 = *(int *)(DAT_8c02739c + param_2);
  uVar11 = (uint)*(ushort *)(param_2 + 0x54);
  *(uint *)(puVar25 + (int)DAT_8c0273a0 + iVar8 + -4) =
       *(int *)(DAT_8c02739e + iVar19) + iVar20 * uVar11;
  cVar1 = **(char **)(DAT_8c0273a2 + param_2);
  *(char **)(puVar25 + (int)DAT_8c0273a4 + iVar8 + -4) = *(char **)(DAT_8c0273a2 + param_2);
  if (cVar1 == '\x01') {
    *(uint *)(puVar25 + (int)DAT_8c027658 + iVar8 + -4) = uVar11;
    iVar13 = *(int *)(puVar25 + (int)DAT_8c02765c + iVar8 + -4);
    *(int *)(puVar25 + (int)DAT_8c02765e + iVar8 + -4) = iVar13 + 6;
    *(uint *)(puVar25 + (int)DAT_8c027660 + iVar8 + -4) = (uint)*(byte *)(uVar11 + iVar13 + 6);
    *(undefined4 *)(puVar25 + (int)DAT_8c027664 + iVar8 + -4) = 0;
    *(undefined4 *)(puVar25 + (int)DAT_8c027666 + iVar8 + -4) = 0;
    *(undefined4 *)(puVar25 + (int)DAT_8c027668 + iVar8 + -4) = 0;
    iVar13 = *(int *)((int)DAT_8c02766a + *(int *)(puVar25 + iVar8 + 0x78));
    *(int *)(puVar25 + (int)DAT_8c02766c + iVar8 + -4) = iVar13;
    *(int *)(puVar25 + (int)DAT_8c02766e + iVar8 + -4) = iVar13 + DAT_8c027662;
    *(int *)(puVar25 + (int)DAT_8c027670 + iVar8 + -4) = iVar13 + DAT_8c02765a;
    iVar13 = (int)*(short *)(iVar13 + uVar11 * 0x1e + 0x1a) +
             (int)*(short *)(iVar13 + DAT_8c027662 + uVar11 * 0x1e + 0x1a) +
             (int)*(short *)(iVar13 + DAT_8c02765a + uVar11 * 0x1e + 0x1a);
    *(int *)(puVar25 + (int)DAT_8c027672 + iVar8 + -4) = iVar13;
    *(int *)(puVar25 + (int)DAT_8c027674 + iVar8 + -4) = iVar13;
    *(uint *)(puVar25 + (int)DAT_8c027676 + iVar8 + -4) = (uint)(iVar13 != 0);
    iVar23 = *(int *)(puVar25 + (int)DAT_8c027658 + iVar8 + -4);
    *(int *)(puVar25 + (int)DAT_8c027678 + iVar8 + -4) = iVar23;
    *(undefined4 *)(puVar25 + (int)DAT_8c02767a + iVar8 + -4) = 0;
    *(undefined4 *)(puVar25 + iVar8 + 0x68) = 0;
    iVar17 = 0;
    if (7 < iVar23) {
      iVar23 = 8;
    }
    if (0 < iVar23) {
      iVar21 = *(int *)(DAT_8c02767c + iVar19);
      *(undefined4 *)(puVar25 + iVar8 + 0x74) =
           *(undefined4 *)(puVar25 + (int)DAT_8c02765e + iVar8 + -4);
      *(int *)(puVar25 + iVar8 + 0x6c) = iVar13;
      *(int *)(puVar25 + iVar8 + 0x70) = iVar19;
      iVar19 = *(int *)(puVar25 + iVar8 + 0x74);
      iVar13 = *(int *)(puVar25 + iVar8 + 0x68);
      do {
        puVar14 = (ushort *)(iVar21 + iVar20 * iVar17);
        if (((puVar14 != (ushort *)0x0) && ((*puVar14 & 1) != 0)) && ((puVar14[4] & 4) == 0)) {
          iVar24 = (int)*(short *)(iVar17 * 0x1e +
                                   *(int *)(puVar25 + (int)DAT_8c02766c + iVar8 + -4) + 0x1a) +
                   (int)*(short *)(iVar17 * 0x1e +
                                   *(int *)(puVar25 + (int)DAT_8c02766e + iVar8 + -4) + 0x1a) +
                   (int)*(short *)(iVar17 * 0x1e +
                                   *(int *)(puVar25 + (int)DAT_8c027670 + iVar8 + -4) + 0x1a);
          if (iVar24 != 0) {
            if ((*(byte *)(iVar19 + iVar17) == 0) ||
               (*(uint *)(puVar25 + (int)DAT_8c027660 + iVar8 + -4) !=
                (uint)*(byte *)(iVar19 + iVar17))) {
              iVar13 = iVar13 + 1;
              if (*(int *)(puVar25 + (int)DAT_8c0278ca + iVar8 + -4) < iVar24) {
                *(int *)(puVar25 + (int)DAT_8c0278ca + iVar8 + -4) = iVar24;
                *(int *)(puVar25 + (int)DAT_8c0278cc + iVar8 + -4) = iVar17;
              }
            }
            else {
              *(int *)(puVar25 + (int)DAT_8c027676 + iVar8 + -4) =
                   *(int *)(puVar25 + (int)DAT_8c027676 + iVar8 + -4) + 1;
              *(int *)(puVar25 + (int)DAT_8c027674 + iVar8 + -4) =
                   *(int *)(puVar25 + (int)DAT_8c027674 + iVar8 + -4) + iVar24;
              if (*(int *)(puVar25 + (int)DAT_8c027672 + iVar8 + -4) < iVar24) {
                *(int *)(puVar25 + (int)DAT_8c027672 + iVar8 + -4) = iVar24;
                *(int *)(puVar25 + (int)DAT_8c027678 + iVar8 + -4) = iVar17;
              }
            }
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar23);
      *(int *)(puVar25 + iVar8 + 0x68) = iVar13;
      iVar19 = *(int *)(puVar25 + iVar8 + 0x70);
      iVar13 = *(int *)(puVar25 + iVar8 + 0x6c);
    }
    iVar17 = *(int *)(puVar25 + (int)DAT_8c0277c8 + iVar8 + -4) + 1;
    if (iVar17 < 1) {
      iVar17 = 0;
    }
    if (iVar17 < 8) {
      iVar21 = *(int *)(DAT_8c0277ca + iVar19);
      iVar23 = *(int *)(puVar25 + (int)DAT_8c0277cc + iVar8 + -4);
      *(int *)(puVar25 + iVar8 + 100) = iVar13;
      iVar19 = *(int *)(puVar25 + iVar8 + 0x68);
      do {
        puVar14 = (ushort *)(iVar21 + iVar20 * iVar17);
        if (((puVar14 != (ushort *)0x0) && ((*puVar14 & 1) != 0)) && ((puVar14[4] & 4) == 0)) {
          iVar13 = (int)*(short *)(iVar17 * 0x1e +
                                   *(int *)(puVar25 + (int)DAT_8c0277ce + iVar8 + -4) + 0x1a) +
                   (int)*(short *)(iVar17 * 0x1e +
                                   *(int *)(puVar25 + (int)DAT_8c0277d0 + iVar8 + -4) + 0x1a) +
                   (int)*(short *)(iVar17 * 0x1e +
                                   *(int *)(puVar25 + (int)DAT_8c0277d2 + iVar8 + -4) + 0x1a);
          if (iVar13 != 0) {
            if ((*(byte *)(iVar23 + iVar17) == 0) ||
               (*(uint *)(puVar25 + (int)DAT_8c0277d4 + iVar8 + -4) !=
                (uint)*(byte *)(iVar23 + iVar17))) {
              iVar19 = iVar19 + 1;
              if (*(int *)(puVar25 + (int)DAT_8c0283b2 + iVar8 + -4) < iVar13) {
                *(int *)(puVar25 + (int)DAT_8c0283b2 + iVar8 + -4) = iVar13;
                *(int *)(puVar25 + (int)DAT_8c0283b4 + iVar8 + -4) = iVar17;
              }
            }
            else {
              *(int *)(puVar25 + (int)DAT_8c0277d6 + iVar8 + -4) =
                   *(int *)(puVar25 + (int)DAT_8c0277d6 + iVar8 + -4) + 1;
              *(int *)(puVar25 + (int)DAT_8c0277d8 + iVar8 + -4) =
                   *(int *)(puVar25 + (int)DAT_8c0277d8 + iVar8 + -4) + iVar13;
              if (*(int *)(puVar25 + (int)DAT_8c0277da + iVar8 + -4) < iVar13) {
                *(int *)(puVar25 + (int)DAT_8c0277da + iVar8 + -4) = iVar13;
                *(int *)(puVar25 + (int)DAT_8c0277dc + iVar8 + -4) = iVar17;
              }
            }
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < 8);
      *(int *)(puVar25 + iVar8 + 0x68) = iVar19;
      iVar13 = *(int *)(puVar25 + iVar8 + 100);
    }
    if ((((*(int *)(puVar25 + (int)DAT_8c0277d8 + iVar8 + -4) < 3) ||
         (*(int *)(puVar25 + (int)DAT_8c0277d6 + iVar8 + -4) < 2)) ||
        (*(int *)(puVar25 + (int)DAT_8c0277dc + iVar8 + -4) ==
         *(int *)(puVar25 + (int)DAT_8c0277c8 + iVar8 + -4))) || (iVar13 < 1)) {
      if (1 < *(int *)(puVar25 + iVar8 + 0x68)) {
        iVar19 = (*(code *)PTR__rand_8c0283c0)();
        if (in_FPSCR_PR == '\0') {
          dVar32 = (double)CONCAT44((float)iVar19,uVar5);
        }
        else {
          dVar32 = (double)iVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),DAT_8c0283c4);
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),DAT_8c0283c8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar35 = ((float)((ulonglong)dVar32 >> 0x20) / SUB84(in_dr14,0)) * SUB84(dVar32,0);
          param_1 = (double)CONCAT44(fVar35,SUB84(dVar32,0));
          iVar19 = (int)fVar35;
        }
        else {
          param_1 = (dVar32 / in_dr14) * (dVar32 / in_dr14);
          iVar19 = (int)param_1;
        }
        if (iVar19 < 0x3c) {
          *(undefined4 *)(puVar25 + (int)DAT_8c0283b6 + iVar8 + -4) = 1;
          *(undefined4 *)(puVar25 + (int)DAT_8c0283b8 + iVar8 + -4) =
               *(undefined4 *)(puVar25 + (int)DAT_8c0283b4 + iVar8 + -4);
        }
      }
      if (2 < *(int *)(puVar25 + (int)DAT_8c0278ce + iVar8 + -4)) goto LAB_8c027782;
    }
    else if (*(int *)(puVar25 + (int)DAT_8c0277da + iVar8 + -4) < 3) {
      *(undefined4 *)(puVar25 + (int)DAT_8c0278d0 + iVar8 + -4) = 1;
      *(undefined4 *)(puVar25 + (int)DAT_8c0278d4 + iVar8 + -4) =
           *(undefined4 *)(puVar25 + (int)DAT_8c0278d2 + iVar8 + -4);
      if (1 < *(int *)(puVar25 + iVar8 + 0x68)) {
        iVar19 = (*(code *)PTR__rand_8c0278d8)();
        if (in_FPSCR_PR == '\0') {
          dVar32 = (double)CONCAT44((float)iVar19,uVar5);
        }
        else {
          dVar32 = (double)iVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),DAT_8c0278dc);
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),DAT_8c0278e0);
        }
        if (in_FPSCR_PR == '\0') {
          fVar35 = ((float)((ulonglong)dVar32 >> 0x20) / SUB84(in_dr14,0)) * SUB84(dVar32,0);
          param_1 = (double)CONCAT44(fVar35,SUB84(dVar32,0));
          iVar19 = (int)fVar35;
        }
        else {
          param_1 = (dVar32 / in_dr14) * (dVar32 / in_dr14);
          iVar19 = (int)param_1;
        }
        if (iVar19 < 0x3c) {
          *(undefined4 *)(puVar25 + (int)DAT_8c0278d0 + iVar8 + -4) = 1;
          *(undefined4 *)(puVar25 + (int)DAT_8c0278d4 + iVar8 + -4) =
               *(undefined4 *)(puVar25 + (int)DAT_8c0278cc + iVar8 + -4);
        }
      }
    }
    else {
      if (1 < *(int *)(puVar25 + iVar8 + 0x68)) {
        iVar19 = (*(code *)PTR__rand_8c0283c0)();
        if (in_FPSCR_PR == '\0') {
          dVar32 = (double)CONCAT44((float)iVar19,uVar5);
        }
        else {
          dVar32 = (double)iVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),DAT_8c0283c4);
          dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),DAT_8c0283c8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar35 = ((float)((ulonglong)dVar32 >> 0x20) / SUB84(in_dr14,0)) * SUB84(dVar32,0);
          param_1 = (double)CONCAT44(fVar35,SUB84(dVar32,0));
          iVar19 = (int)fVar35;
        }
        else {
          param_1 = (dVar32 / in_dr14) * (dVar32 / in_dr14);
          iVar19 = (int)param_1;
        }
        if (iVar19 < 0x3c) {
          *(undefined4 *)(puVar25 + (int)DAT_8c0283b6 + iVar8 + -4) = 1;
          *(undefined4 *)(puVar25 + (int)DAT_8c0283b8 + iVar8 + -4) =
               *(undefined4 *)(puVar25 + (int)DAT_8c0283b4 + iVar8 + -4);
        }
      }
LAB_8c027782:
      if (*(int *)(puVar25 + (int)DAT_8c0277dc + iVar8 + -4) ==
          *(int *)(puVar25 + (int)DAT_8c0277c8 + iVar8 + -4)) {
        *(undefined4 *)(puVar25 + (int)DAT_8c0277de + iVar8 + -4) = 1;
        *(undefined4 *)(puVar25 + (int)DAT_8c0277e0 + iVar8 + -4) = 0;
      }
    }
    uVar5 = SUB84(param_1,0);
    if (2 < *(int *)(puVar25 + (int)DAT_8c0277e2 + iVar8 + -4)) {
      iVar19 = (*(code *)PTR__rand_8c0278d8)();
      if (in_FPSCR_PR == '\0') {
        dVar32 = (double)CONCAT44((float)iVar19,uVar5);
      }
      else {
        dVar32 = (double)iVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),DAT_8c0278dc);
        dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),DAT_8c0278e0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar35 = ((float)((ulonglong)dVar32 >> 0x20) / SUB84(in_dr14,0)) * SUB84(dVar32,0);
        param_1 = (double)CONCAT44(fVar35,SUB84(dVar32,0));
        iVar19 = (int)fVar35;
      }
      else {
        param_1 = (dVar32 / in_dr14) * (dVar32 / in_dr14);
        iVar19 = (int)param_1;
      }
      if (iVar19 < 0x3c) {
        *(undefined4 *)(puVar25 + (int)DAT_8c0278d6 + iVar8 + -4) = 1;
        *(undefined4 *)(puVar25 + (int)DAT_8c0278d0 + iVar8 + -4) = 0;
      }
    }
    iVar19 = *(int *)(puVar25 + iVar8 + 0x78);
    *(undefined4 *)(DAT_8c0277e4 + iVar19) =
         *(undefined4 *)(puVar25 + (int)DAT_8c0277e0 + iVar8 + -4);
    *(undefined4 *)(DAT_8c0277e8 + iVar19) =
         *(undefined4 *)(puVar25 + (int)DAT_8c0277e6 + iVar8 + -4);
    *(undefined4 *)(DAT_8c0277ea + iVar19) =
         *(undefined4 *)(puVar25 + (int)DAT_8c0277de + iVar8 + -4);
    *(undefined4 *)(DAT_8c0278c4 + iVar19) =
         *(undefined4 *)(puVar25 + (int)DAT_8c0277ec + iVar8 + -4);
    *(undefined4 *)(puVar25 + (int)DAT_8c0278c8 + iVar8 + -4) =
         *(undefined4 *)(DAT_8c0278c6 + iVar19);
  }
  else {
    *(undefined4 *)((int)DAT_8c0273a6 + *(int *)(puVar25 + iVar8 + 0x78)) = 0;
    *(undefined4 *)((int)DAT_8c0273a8 + *(int *)(puVar25 + iVar8 + 0x78)) = 0;
  }
  puVar3 = PTR_FUN_8c0273c8;
  iVar19 = *(int *)(puVar25 + (int)DAT_8c0273a0 + iVar8 + -4);
  uVar5 = (*(code *)PTR_FUN_8c0273c8)(6);
  *(undefined4 *)(puVar25 + (int)DAT_8c0273aa + iVar8 + -4) = uVar5;
  iVar20 = *(int *)(puVar25 + iVar8 + 0x78);
  *(undefined4 *)(DAT_8c0273ac + iVar20) = uVar5;
  iVar13 = (int)DAT_8c0273ae;
  uVar5 = (*(code *)puVar3)(iVar13);
  *(undefined4 *)(puVar25 + (int)DAT_8c0273b0 + iVar8 + -4) = uVar5;
  *(undefined4 *)(DAT_8c0273b2 + iVar20) = uVar5;
  *(uint *)(DAT_8c0273b4 + iVar20) = (int)*(char *)(iVar19 + 2) & 0xf;
  puVar3 = PTR___bfswu_8c0273cc;
  *(uint *)(DAT_8c0273b6 + iVar20) = -(((*(byte *)(iVar19 + 2) & 0x10) == 0) - 1);
  (*(code *)puVar3)(6,(int)(*(int *)(DAT_8c0273b8 + iVar20) +
                           (uint)(*(int *)(DAT_8c0273b8 + iVar20) < 0)) >> 1 & 0xffff);
  iVar19 = *(int *)(DAT_8c0273bc + iVar20);
  *(int *)(puVar25 + (int)DAT_8c0273be + iVar8 + -4) = iVar19;
  (*(code *)puVar3)((int)(iVar19 + (uint)(iVar19 < 0)) >> 1 & 0xffff,iVar13);
  uVar9 = (undefined4)in_dr12;
  uVar18 = SUB84(in_dr14,0);
  uVar5 = SUB84(param_1,0);
  *(undefined4 *)(DAT_8c0273c0 + iVar20) = 0;
  if (**(char **)(puVar25 + (int)DAT_8c0273a4 + iVar8 + -4) == '\x01') {
    if ((*(int *)((int)DAT_8c0273a8 + *(int *)(puVar25 + iVar8 + 0x78)) == 0) &&
       (*(int *)((int)DAT_8c0279e2 + *(int *)(puVar25 + iVar8 + 0x78)) == 0)) {
      *(undefined4 *)(puVar25 + iVar8 + 0x60) = 0;
      if (0 < *(int *)(puVar25 + (int)DAT_8c0279e4 + iVar8 + -4)) {
        *(int *)(puVar25 + (int)DAT_8c0279e8 + iVar8 + -4) =
             -*(int *)(puVar25 + (int)DAT_8c0279e6 + iVar8 + -4);
        *(int *)(puVar25 + (int)DAT_8c0279ec + iVar8 + -4) =
             -*(int *)(puVar25 + (int)DAT_8c0279ea + iVar8 + -4);
        iVar20 = *(int *)((int)DAT_8c0279ee + *(int *)(puVar25 + iVar8 + 0x78));
        iVar19 = DAT_8c0273d0;
        puVar14 = DAT_8c0273d4;
        do {
          uVar11 = 0;
          if (0 < iVar20) {
            uVar5 = *(undefined4 *)((int)DAT_8c0279f0 + *(int *)(puVar25 + iVar8 + 0x78));
            iVar23 = *(int *)(puVar25 + iVar8 + 0x60);
            iVar17 = *(int *)(puVar25 + (int)DAT_8c0279ec + iVar8 + -4);
            *(ushort **)(puVar25 + iVar8 + 0x5c) = puVar14;
            uVar12 = *(uint *)(puVar25 + iVar8 + 0x60);
            do {
              if ((((*puVar14 & 0x10) != 0) && (*(char *)((int)puVar14 + 9) == '\r')) &&
                 (iVar21 = (uVar11 + *(int *)(puVar25 + (int)DAT_8c0279e8 + iVar8 + -4)) *
                           (uVar11 + *(int *)(puVar25 + (int)DAT_8c0279e8 + iVar8 + -4)) +
                           (iVar23 + iVar17) * (iVar23 + iVar17), iVar21 < iVar19)) {
                (*(code *)PTR___bfswu_8c0279f4)(uVar11 & 0xffff);
                (*(code *)PTR___bfswu_8c0279f4)(uVar12 & 0xffff);
                uVar5 = 1;
                iVar20 = *(int *)((int)DAT_8c0279ee + *(int *)(puVar25 + iVar8 + 0x78));
                iVar19 = iVar21;
              }
              uVar11 = uVar11 + 1;
              puVar14 = puVar14 + 8;
            } while ((int)uVar11 < iVar20);
            puVar14 = *(ushort **)(puVar25 + iVar8 + 0x5c);
            *(undefined4 *)((int)DAT_8c0279f0 + *(int *)(puVar25 + iVar8 + 0x78)) = uVar5;
          }
          uVar9 = (undefined4)in_dr12;
          uVar18 = SUB84(in_dr14,0);
          uVar5 = SUB84(param_1,0);
          *(int *)(puVar25 + iVar8 + 0x60) = *(int *)(puVar25 + iVar8 + 0x60) + 1;
          puVar14 = (ushort *)((int)puVar14 + (int)DAT_8c0279f2);
        } while (*(int *)(puVar25 + iVar8 + 0x60) <
                 *(int *)(puVar25 + (int)DAT_8c0279e4 + iVar8 + -4));
      }
    }
    else {
      uVar11 = 0;
      puVar14 = DAT_8c0273d4;
      if (0 < *(int *)(puVar25 + (int)DAT_8c0273be + iVar8 + -4)) {
        do {
          puVar3 = PTR___bfswu_8c0279f4;
          uVar12 = 0;
          puVar16 = puVar14;
          if (0 < *(int *)((int)DAT_8c0273b8 + *(int *)(puVar25 + iVar8 + 0x78))) {
            do {
              if ((char)puVar16[4] == '^') {
                (*(code *)PTR___bfswu_8c0279f4)(uVar12 & 0xffff,6);
                (*(code *)puVar3)(uVar11 & 0xffff);
                *(undefined4 *)((int)DAT_8c0279f0 + *(int *)(puVar25 + iVar8 + 0x78)) = 1;
                break;
              }
              uVar12 = uVar12 + 1;
              puVar16 = puVar16 + 8;
            } while ((int)uVar12 < *(int *)((int)DAT_8c0273b8 + *(int *)(puVar25 + iVar8 + 0x78)));
          }
          uVar9 = (undefined4)in_dr12;
          uVar18 = SUB84(in_dr14,0);
          uVar5 = SUB84(param_1,0);
          uVar11 = uVar11 + 1;
          puVar14 = (ushort *)((int)puVar14 + (int)DAT_8c0273c2);
        } while ((int)uVar11 < *(int *)(puVar25 + (int)DAT_8c0273be + iVar8 + -4));
      }
    }
  }
  uVar6 = (*(code *)PTR_FUN_8c0273c8)(6);
  puVar3 = PTR_FUN_8c0273c8;
  iVar19 = *(int *)(puVar25 + iVar8 + 0x78);
  *(undefined4 *)(DAT_8c0273c4 + iVar19) = uVar6;
  uVar6 = (*(code *)puVar3)(iVar13);
  puVar3 = PTR___bfswu_8c0274c4;
  *(undefined4 *)(DAT_8c0273c6 + iVar19) = uVar6;
  (*(code *)puVar3)(*(uint *)(puVar25 + (int)DAT_8c0274aa + iVar8 + -4) & 0xffff,6);
  (*(code *)PTR___bfswu_8c0274c4)(iVar13,*(undefined4 *)(puVar25 + (int)DAT_8c0274ac + iVar8 + -4));
  puVar25[iVar8 + 0x1c] =
       (puVar25[iVar8 + 0x1c] & (byte)DAT_8c0274ae | 0x10) & (byte)DAT_8c0274b0 | 8;
  uVar6 = (*(code *)PTR_FUN_8c0274c8)(iVar19,puVar25 + iVar8 + 0x1c);
  puVar3 = PTR_FUN_8c0274cc;
  *(undefined4 *)(DAT_8c0274b2 + iVar19) = uVar6;
  uVar6 = (*(code *)puVar3)(iVar19);
  dVar30 = (double)CONCAT44(0x3f800000,uVar5);
  *(undefined4 *)(DAT_8c0274b4 + iVar19) = uVar6;
  dVar32 = dVar30;
  if (in_FPSCR_SZ == '\0') {
    dVar32 = (double)CONCAT44(0x3f800000,uVar18);
  }
  dVar26 = (double)(*(code *)PTR_FUN_8c0274d0)(iVar19,0);
  if (in_FPSCR_PR == '\0') {
    dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) /
                              (float)((ulonglong)dVar26 >> 0x20),SUB84(dVar32,0));
  }
  else {
    dVar32 = dVar32 / dVar26;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar30 = (double)CONCAT44(*(undefined4 *)DAT_8c0274d4,SUB84(dVar30,0));
  }
  else {
    dVar30 = *DAT_8c0274d4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) /
                              (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar32,0));
  }
  else {
    dVar32 = dVar32 / dVar30;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c0274b6 + iVar19) = (int)((ulonglong)dVar32 >> 0x20);
  }
  else {
    *(double *)(DAT_8c0274b6 + iVar19) = dVar32;
  }
  puVar4 = PTR_DAT_8c027e2c;
  puVar3 = PTR__rand_8c027a98;
  cVar1 = *(char *)(*(int *)(puVar25 + (int)DAT_8c0274b8 + iVar8 + -4) + 0x19);
  if (cVar1 == '\x02') {
    iVar19 = *(int *)(puVar25 + iVar8 + 0x78);
    *(undefined2 *)(DAT_8c027a8e + iVar19) = 0;
    *(undefined2 *)(DAT_8c027a90 + iVar19) = 0;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)CONCAT44((undefined4)DAT_8c027a9c,uVar9);
    }
    else {
      dVar26 = (double)CONCAT44(DAT_8c027a9c._4_4_,(undefined4)DAT_8c027a9c);
    }
    iVar20 = (*(code *)puVar3)();
    puVar3 = PTR__rand_8c027a98;
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)CONCAT44((float)iVar20,extraout_fr1);
    }
    else {
      dVar27 = (double)iVar20;
    }
    pdVar29 = DAT_8c027aa4;
    pdVar33 = DAT_8c027aa8;
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),DAT_8c027a9c._4_4_);
      pdVar29 = SUB84(dVar30,0);
      pdVar33 = DAT_8c027aa4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar35 = (float)((ulonglong)dVar27 >> 0x20) / SUB84(dVar32,0);
    }
    else {
      fVar35 = (float)((ulonglong)(dVar27 / dVar32) >> 0x20);
    }
    dVar30 = dVar26;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = (double)CONCAT44((int)((ulonglong)dVar26 >> 0x20),SUB84(dVar32,0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = (double)CONCAT44(fVar35 * (float)pdVar33 + (float)((ulonglong)dVar30 >> 0x20),
                                SUB84(dVar30,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)CONCAT44(*(undefined4 *)DAT_8c027aa8,pdVar29);
    }
    else {
      dVar32 = *DAT_8c027aa8;
    }
    if (in_FPSCR_PR == '\0') {
      fVar35 = (float)((ulonglong)dVar30 >> 0x20) * (float)((ulonglong)dVar32 >> 0x20);
      dVar30 = (double)CONCAT44(fVar35,SUB84(dVar30,0));
      uVar36 = (undefined2)(int)fVar35;
    }
    else {
      dVar30 = dVar30 * dVar32;
      uVar36 = (undefined2)(int)dVar30;
    }
    *(undefined2 *)(DAT_8c027a92 + iVar19) = uVar36;
    iVar20 = (*(code *)puVar3)();
    puVar3 = PTR__rand_8c027a98;
    if (in_FPSCR_PR == '\0') {
      dVar32 = (double)CONCAT44((float)iVar20,SUB84(dVar32,0));
    }
    else {
      dVar32 = (double)iVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),*(undefined4 *)DAT_8c027aa8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar35 = ((float)((ulonglong)dVar32 >> 0x20) / SUB84(dVar30,0) +
               (float)((ulonglong)dVar26 >> 0x20)) * SUB84(dVar32,0);
      dVar26 = (double)CONCAT44(fVar35,SUB84(dVar32,0));
      uVar36 = (undefined2)(int)fVar35;
    }
    else {
      dVar26 = dVar32 / dVar30 + dVar26;
      dVar26 = dVar26 * dVar26;
      uVar36 = (undefined2)(int)dVar26;
    }
    uVar5 = SUB84(dVar26,0);
    *(undefined2 *)(DAT_8c027a94 + iVar19) = uVar36;
    iVar19 = (*(code *)puVar3)();
    if (in_FPSCR_PR == '\0') {
      dVar32 = (double)CONCAT44((float)iVar19,uVar5);
    }
    else {
      dVar32 = (double)iVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)CONCAT44((int)((ulonglong)dVar32 >> 0x20),DAT_8c027aac);
    }
    if (in_FPSCR_PR == '\0') {
      iVar19 = (int)(((float)((ulonglong)dVar32 >> 0x20) / SUB84(dVar30,0)) * SUB84(dVar32,0));
    }
    else {
      iVar19 = (int)((dVar32 / dVar30) * (dVar32 / dVar30));
    }
    if (0x31 < iVar19) {
      return;
    }
    *(undefined2 *)((int)DAT_8c027a94 + *(int *)(puVar25 + iVar8 + 0x78)) = 0;
    return;
  }
  if (cVar1 == '\x03') {
    (*(code *)PTR_FUN_8c027ab0)(*(undefined4 *)(puVar25 + iVar8 + 0x78));
    return;
  }
  if (cVar1 == '\x04') {
    *(undefined4 *)((int)DAT_8c0274ba + *(int *)(puVar25 + iVar8 + 0x78)) = 0;
    *(undefined4 *)((int)DAT_8c0274bc + *(int *)(puVar25 + iVar8 + 0x78)) = 0;
    *(undefined4 *)((int)DAT_8c0274be + *(int *)(puVar25 + iVar8 + 0x78)) = 1;
    return;
  }
  if (((int)*(char *)(*(int *)(puVar25 + iVar8 + 0x78) + 0x12) & (int)DAT_8c027c12) == 4) {
    *(undefined4 *)((int)DAT_8c027c90 + *(int *)(puVar25 + iVar8 + 0x78)) = 0;
    *(undefined4 *)((int)DAT_8c027c92 + *(int *)(puVar25 + iVar8 + 0x78)) = 0;
    *(undefined4 *)((int)DAT_8c027c94 + *(int *)(puVar25 + iVar8 + 0x78)) = 1;
    return;
  }
  if (*(int *)((int)DAT_8c027c14 + *(int *)(puVar25 + iVar8 + 0x78)) == 1) {
LAB_8c027d74:
    puVar3 = PTR_DAT_8c027e34;
    uVar5 = SUB84(dVar30,0);
    uVar28 = SUB84(in_dr2,0);
    iVar20 = *(int *)(puVar25 + iVar8 + 0x78);
    iVar19 = (int)DAT_8c027e1e;
    *(undefined4 *)(DAT_8c027e0c + iVar20) = 0;
    puVar22 = (undefined4 *)(iVar20 + iVar19);
    uVar18 = *(undefined4 *)puVar3;
    *(undefined4 *)(DAT_8c027e20 + iVar20) = 1;
    uVar6 = *(undefined4 *)(puVar3 + 4);
    *(undefined4 *)(DAT_8c027e22 + iVar20) = 0;
    uVar9 = *(undefined4 *)(puVar3 + 8);
    iVar19 = *(int *)(DAT_8c027e10 + iVar20);
    *puVar22 = uVar18;
    puVar22[1] = uVar6;
    puVar22[2] = uVar9;
    puVar4 = PTR_FUN_8c02811c;
    if (iVar19 == 0) {
      if (*(int *)(DAT_8c027e0a + iVar20) != 0) {
        *(undefined4 *)(DAT_8c028108 + iVar20) = 0;
        (*(code *)puVar4)(iVar20);
        if (*(int *)(DAT_8c028104 + iVar20) != 0) goto LAB_8c028092;
        FUN_8c028f4c(iVar20);
        goto LAB_8c028086;
      }
      if (*(int *)(DAT_8c027e24 + iVar20) != 0) {
        if (*(uint *)(DAT_8c027e26 + iVar20) == (uint)*(ushort *)(iVar20 + 0x54)) {
          cVar1 = *(char *)((uint)*(ushort *)(iVar20 + 0x54) +
                           *(int *)(DAT_8c027e14 + iVar20) + 0x16);
          if ((cVar1 == '\x06') || (cVar1 == '\b')) goto LAB_8c027dec;
          (*(code *)PTR_FUN_8c028124)(iVar20);
          if (*(int *)(DAT_8c028104 + iVar20) != 0) goto LAB_8c028092;
          FUN_8c028f4c(iVar20);
        }
        else {
          (*(code *)PTR_FUN_8c028120)(iVar20);
        }
        goto LAB_8c028086;
      }
LAB_8c027dec:
      if (*(int *)(DAT_8c027e28 + iVar20) != 0) {
        if (*(int *)(DAT_8c02810a + iVar20) == 0) {
          if (*(int *)(DAT_8c02810c + iVar20) == 0) {
            (*(code *)PTR_FUN_8c028128)(iVar20);
          }
          else {
            (*(code *)PTR_FUN_8c0282a0)(iVar20);
          }
        }
        else {
          (*(code *)PTR_FUN_8c02829c)(iVar20);
          if (*(int *)(DAT_8c028286 + iVar20) != 0) goto LAB_8c028092;
          (*(code *)PTR_FUN_8c0282a0)(iVar20);
        }
        goto LAB_8c028086;
      }
      iVar19 = (int)DAT_8c027fac;
      *puVar22 = uVar18;
      *(undefined4 *)(iVar19 + iVar20) = 0;
      iVar19 = (int)DAT_8c027fae;
      puVar22[1] = uVar6;
      iVar19 = *(int *)(iVar19 + iVar20);
      puVar22[2] = uVar9;
      if (in_FPSCR_SZ == '\0') {
        uVar31 = CONCAT44(*(undefined4 *)(iVar19 + 0x18),uVar5);
      }
      else {
        uVar31 = *(undefined8 *)(iVar19 + 0x18);
      }
      iVar19 = (int)DAT_8c027fb2;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c027fb0 + iVar20) = (int)((ulonglong)uVar31 >> 0x20);
      }
      else {
        *(undefined8 *)(DAT_8c027fb0 + iVar20) = uVar31;
      }
      iVar19 = *(int *)(DAT_8c027fb4 + iVar20) + iVar19;
      iVar13 = *(int *)(DAT_8c027fb6 + iVar20);
      puVar10 = (undefined4 *)(PTR_DAT_8c027fc8 + *(short *)(iVar13 * 2 + iVar19) * 0xc);
      uVar9 = *puVar10;
      *(undefined4 *)(puVar25 + iVar8 + 0x24) = puVar10[1];
      uVar5 = puVar10[2];
      *(undefined4 *)(puVar25 + iVar8 + 0x20) = uVar9;
      *(undefined4 *)(puVar25 + iVar8 + 0x28) = uVar5;
      iVar17 = iVar20 + *(int *)(puVar25 + iVar8 + 0x20);
      puVar10 = (undefined4 *)(PTR_DAT_8c027fc8 + *(short *)(iVar13 * 2 + iVar19) * 0xc);
      uVar5 = *puVar10;
      *(undefined4 *)(puVar25 + iVar8 + 0x30) = puVar10[1];
      *(undefined4 *)(puVar25 + iVar8 + 0x2c) = uVar5;
      *(undefined4 *)(puVar25 + iVar8 + 0x34) = puVar10[2];
      if (*(int *)(puVar25 + iVar8 + 0x30) < 0) {
        puVar10 = (undefined4 *)(PTR_DAT_8c027fc8 + *(short *)(iVar13 * 2 + iVar19) * 0xc);
        uVar9 = puVar10[1];
        *(undefined4 *)(puVar25 + iVar8 + 0x50) = *puVar10;
        uVar5 = puVar10[2];
        *(undefined4 *)(puVar25 + iVar8 + 0x54) = uVar9;
        *(undefined4 *)(puVar25 + iVar8 + 0x58) = uVar5;
        pcVar7 = *(code **)(puVar25 + iVar8 + 0x58);
      }
      else {
        puVar10 = (undefined4 *)(PTR_DAT_8c027fc8 + *(short *)(iVar13 * 2 + iVar19) * 0xc);
        uVar9 = puVar10[1];
        *(undefined4 *)(puVar25 + iVar8 + 0x38) = *puVar10;
        uVar5 = puVar10[2];
        *(undefined4 *)(puVar25 + iVar8 + 0x3c) = uVar9;
        *(undefined4 *)(puVar25 + iVar8 + 0x40) = uVar5;
        puVar10 = (undefined4 *)(PTR_DAT_8c027fc8 + *(short *)(iVar13 * 2 + iVar19) * 0xc);
        uVar9 = *puVar10;
        *(undefined4 *)(puVar25 + iVar8 + 0x48) = puVar10[1];
        uVar5 = puVar10[2];
        *(undefined4 *)(puVar25 + iVar8 + 0x44) = uVar9;
        *(undefined4 *)(puVar25 + iVar8 + 0x4c) = uVar5;
        piVar15 = (int *)(*(int *)(puVar25 + iVar8 + 0x40) + iVar17);
        iVar17 = iVar17 + *(int *)(*piVar15 + *(int *)(puVar25 + iVar8 + 0x48) * 0xc);
        pcVar7 = (code *)((int *)(*piVar15 + *(int *)(puVar25 + iVar8 + 0x48) * 0xc))[2];
      }
      (*pcVar7)(iVar17);
      uVar5 = (undefined4)uVar31;
      if (*(int *)(DAT_8c027fac + iVar20) != 0) {
        iVar13 = (int)DAT_8c02828a;
        iVar19 = *(int *)(DAT_8c028288 + iVar20);
        *(int *)(DAT_8c02828c + iVar20) = iVar19;
        iVar19 = iVar19 + 1;
        *(int *)(DAT_8c028288 + iVar20) = iVar19;
        iVar17 = *(int *)(DAT_8c02828e + iVar20);
        *(int *)(puVar25 + (int)DAT_8c028290 + iVar8 + -4) = iVar17;
        if ((*(short *)(iVar19 * 2 + iVar17 + iVar13) != 10) &&
           (iVar13 = (int)*(short *)(iVar19 * 2 + iVar17 + iVar13), iVar13 < 0xd))
        goto LAB_8c028374;
        if (*(short *)(iVar17 + 0x7e) <= iVar19) {
          *(int *)(DAT_8c028288 + iVar20) = iVar19 - *(short *)(iVar17 + 0x7e);
        }
        goto LAB_8c028092;
      }
      iVar17 = (int)DAT_8c027fb2;
      iVar19 = *(int *)(DAT_8c027fb6 + iVar20) + 1;
      *(int *)(DAT_8c027fb6 + iVar20) = iVar19;
      iVar23 = *(int *)(DAT_8c027fb4 + iVar20);
      *(int *)(puVar25 + (int)DAT_8c027fb8 + iVar8 + -4) = iVar23;
      if ((*(short *)(iVar19 * 2 + iVar23 + iVar17) != 10) &&
         (iVar13 = iVar19 * 2, *(short *)(iVar13 + iVar23 + iVar17) < 0xd)) {
LAB_8c028374:
        iVar19 = (*(code *)PTR__rand_8c0283c0)(iVar13);
        if (in_FPSCR_PR == '\0') {
          dVar32 = (double)CONCAT44((float)iVar19,uVar5);
        }
        else {
          dVar32 = (double)iVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar30 = (double)CONCAT44(DAT_8c0283c4,uVar28);
        }
        else {
          dVar30 = (double)CONCAT44(DAT_8c0283c8,DAT_8c0283c4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) /
                                    (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar32,0));
        }
        else {
          dVar32 = dVar32 / dVar30;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)CONCAT44(DAT_8c0283c8,SUB84(dVar30,0));
        }
        else {
          in_dr2 = (double)CONCAT44(_LAB_8c0283cc,DAT_8c0283c8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar35 = (float)((ulonglong)dVar32 >> 0x20) * (float)((ulonglong)in_dr2 >> 0x20);
          dVar32 = (double)CONCAT44(fVar35,SUB84(dVar32,0));
          iVar19 = (int)fVar35;
        }
        else {
          dVar32 = dVar32 * in_dr2;
          iVar19 = (int)dVar32;
        }
        uVar5 = SUB84(dVar32,0);
        if (iVar19 < 0x1e) {
          *(int *)(DAT_8c028288 + iVar20) = *(int *)(DAT_8c028288 + iVar20) + 1;
        }
        iVar19 = *(int *)(DAT_8c02828e + iVar20);
        *(int *)(puVar25 + (int)DAT_8c028290 + iVar8 + -4) = iVar19;
        iVar19 = (int)*(short *)(iVar19 + 0x7e);
        if (iVar19 <= *(int *)(DAT_8c028288 + iVar20)) {
          *(int *)(DAT_8c028288 + iVar20) = *(int *)(DAT_8c028288 + iVar20) - iVar19;
        }
        goto LAB_8c028086;
      }
      if (*(short *)(iVar23 + 0x7e) <= iVar19) {
        *(int *)(DAT_8c027fb6 + iVar20) = iVar19 - *(short *)(iVar23 + 0x7e);
      }
    }
    else {
      (*(code *)PTR_FUN_8c028118)(iVar20);
LAB_8c028086:
      uVar28 = SUB84(in_dr2,0);
      if (*(int *)(DAT_8c028104 + iVar20) != 0) {
LAB_8c028092:
        *(undefined4 *)(DAT_8c028106 + iVar20) = 2;
        goto LAB_8c027ae4;
      }
    }
    if ((*(ushort *)
          (DAT_8c027fcc +
          (*(int *)(DAT_8c027fba + iVar20) * 0x40 + *(int *)(DAT_8c027fbc + iVar20)) * 0x10) & 1) !=
        0) {
      iVar19 = (*(code *)PTR__rand_8c0282a4)();
      if (in_FPSCR_PR == '\0') {
        dVar32 = (double)CONCAT44((float)iVar19,uVar5);
      }
      else {
        dVar32 = (double)iVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar30 = (double)CONCAT44(DAT_8c0282a8,uVar28);
      }
      else {
        dVar30 = (double)CONCAT44(DAT_8c0282ac,DAT_8c0282a8);
      }
      if (in_FPSCR_PR == '\0') {
        dVar32 = (double)CONCAT44((float)((ulonglong)dVar32 >> 0x20) /
                                  (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar32,0));
      }
      else {
        dVar32 = dVar32 / dVar30;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar30 = (double)CONCAT44(DAT_8c0282ac,SUB84(dVar30,0));
      }
      else {
        dVar30 = (double)CONCAT44(PTR_FUN_8c0282b0,DAT_8c0282ac);
      }
      if (in_FPSCR_PR == '\0') {
        iVar19 = (int)((float)((ulonglong)dVar32 >> 0x20) * (float)((ulonglong)dVar30 >> 0x20));
      }
      else {
        iVar19 = (int)(dVar32 * dVar30);
      }
      if (*(short *)(*(int *)(DAT_8c02828e + iVar20) + 0x60) <= iVar19) {
        iVar19 = (int)DAT_8c028286;
        uVar9 = *(undefined4 *)puVar3;
        puVar22[1] = *(undefined4 *)(puVar3 + 4);
        uVar5 = *(undefined4 *)(puVar3 + 8);
        *(undefined4 *)(iVar19 + iVar20) = 0;
        *puVar22 = uVar9;
        puVar3 = PTR_FUN_8c0282b0;
        puVar22[2] = uVar5;
        (*(code *)puVar3)(iVar20);
        if (*(int *)(DAT_8c028286 + iVar20) == 0) goto LAB_8c027b56;
        *(undefined4 *)(DAT_8c028292 + iVar20) = 2;
        goto LAB_8c027ae4;
      }
    }
    *(undefined4 *)(DAT_8c027fbe + iVar20) = 0;
    *(undefined4 *)(DAT_8c027fc0 + iVar20) = 0;
    *(undefined4 *)(DAT_8c027fc2 + iVar20) = 0;
    if (*(int *)(DAT_8c027fb6 + iVar20) == *(int *)(DAT_8c027fc4 + iVar20)) {
      iVar19 = (int)DAT_8c028286;
      uVar9 = *(undefined4 *)(puVar3 + 4);
      *puVar22 = *(undefined4 *)puVar3;
      uVar5 = *(undefined4 *)(puVar3 + 8);
      *(undefined4 *)(iVar19 + iVar20) = 0;
      puVar22[1] = uVar9;
      puVar22[2] = uVar5;
      FUN_8c028f4c(iVar20);
      *(undefined4 *)(DAT_8c028292 + iVar20) = 2;
    }
    else {
      *(undefined4 *)(DAT_8c027fc6 + iVar20) = 1;
    }
  }
  else {
    if (*(int *)((int)DAT_8c027c14 + *(int *)(puVar25 + iVar8 + 0x78)) != 2) {
      iVar19 = (int)DAT_8c027dfc;
      iVar20 = *(int *)(puVar25 + iVar8 + 0x78);
      *(undefined4 *)(DAT_8c027dfe + iVar20) = 0;
      puVar22 = (undefined4 *)(iVar20 + iVar19);
      uVar5 = *(undefined4 *)(puVar4 + 4);
      *(undefined4 *)(DAT_8c027e00 + iVar20) = 0;
      uVar9 = *(undefined4 *)puVar4;
      *(undefined4 *)(DAT_8c027e02 + iVar20) = 0;
      iVar19 = (int)DAT_8c027e04;
      puVar22[1] = uVar5;
      *(undefined4 *)(iVar19 + iVar20) = 0;
      uVar5 = *(undefined4 *)(puVar4 + 8);
      *(undefined4 *)(DAT_8c027e06 + iVar20) = 0;
      iVar19 = (int)DAT_8c027e08;
      *puVar22 = uVar9;
      *(undefined4 *)(iVar19 + iVar20) = 0;
      iVar19 = (int)DAT_8c027e0a;
      puVar22[2] = uVar5;
      *(undefined4 *)(iVar19 + iVar20) = 0;
      *(undefined4 *)(DAT_8c027e0c + iVar20) = 0;
      *(undefined4 *)(DAT_8c027e0e + iVar20) = 0;
      *(undefined4 *)(DAT_8c027e10 + iVar20) = 0;
      iVar19 = 8;
      (*(code *)PTR_FUN_8c027e30)(iVar20);
      uVar5 = SUB84(in_dr2,0);
      uVar11 = 0;
      *(undefined4 *)(puVar25 + (int)DAT_8c027e12 + iVar8 + -4) = 0;
      do {
        uVar2 = *(ushort *)(*(int *)(puVar25 + iVar8 + 0x78) + 0x54);
        if (uVar11 != uVar2) {
          iVar20 = *(int *)((int)DAT_8c027e14 + *(int *)(puVar25 + iVar8 + 0x78));
          *(int *)(puVar25 + (int)DAT_8c027e16 + iVar8 + -4) = iVar20;
          iVar20 = iVar20 + 6;
          if (((*(char *)(uVar11 + iVar20) != '\0') &&
              (*(char *)(uVar11 + iVar20) != *(char *)((uint)uVar2 + iVar20))) &&
             (*(char *)(uVar11 + *(int *)(puVar25 + (int)DAT_8c027e16 + iVar8 + -4) + 0xe) != '\x02'
             )) {
            iVar20 = *(int *)(puVar25 + (int)DAT_8c027e12 + iVar8 + -4);
            *(int *)(puVar25 + (int)DAT_8c027e12 + iVar8 + -4) = iVar20 + 1;
            *(uint *)(puVar25 + iVar20 * 4 + iVar8 + -4) = uVar11;
          }
        }
        iVar19 = iVar19 + -1;
        uVar11 = uVar11 + 1;
      } while (iVar19 != 0);
      if (*(int *)(puVar25 + (int)DAT_8c027e12 + iVar8 + -4) == 0) {
        iVar20 = *(int *)(puVar25 + iVar8 + 0x78);
        uVar11 = 0;
        iVar17 = 8;
        iVar13 = *(int *)(puVar25 + (int)DAT_8c0280f4 + iVar8 + -4);
        iVar19 = *(int *)(puVar25 + (int)DAT_8c0280f6 + iVar8 + -4);
        do {
          uVar12 = (uint)*(ushort *)(iVar20 + 0x54);
          if (uVar11 != uVar12) {
            iVar13 = *(int *)(DAT_8c0280f8 + iVar20);
            iVar23 = iVar13 + 6;
            if (((*(char *)(uVar11 + iVar23) != '\0') &&
                (*(char *)(uVar11 + iVar23) != *(char *)(uVar12 + iVar23))) &&
               (*(char *)(uVar11 + iVar13 + 0xe) == '\x02')) {
              *(uint *)(puVar25 + iVar19 * 4 + iVar8 + -4) = uVar11;
              iVar19 = iVar19 + 1;
            }
          }
          iVar17 = iVar17 + -1;
          uVar11 = uVar11 + 1;
        } while (iVar17 != 0);
        *(int *)(puVar25 + (int)DAT_8c0280f6 + iVar8 + -4) = iVar19;
        *(int *)(puVar25 + (int)DAT_8c0280f4 + iVar8 + -4) = iVar13;
      }
      if (*(int *)(puVar25 + (int)DAT_8c027e12 + iVar8 + -4) == 0) {
        iVar19 = *(int *)(puVar25 + iVar8 + 0x78);
        *(undefined4 *)(DAT_8c027e18 + iVar19) = 0xffffffff;
        *(undefined4 *)(DAT_8c027e1a + iVar19) = 0;
      }
      else {
        iVar19 = (*(code *)PTR__rand_8c028110)();
        if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)CONCAT44(DAT_8c028114,uVar5);
        }
        else {
          in_dr2 = (double)CONCAT44(PTR_FUN_8c028118,DAT_8c028114);
        }
        iVar20 = (int)DAT_8c0280fa;
        if (in_FPSCR_PR == '\0') {
          fVar35 = (float)iVar19 / (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          fVar35 = SUB84((double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),(float)iVar19) / in_dr2,0
                        );
        }
        if (in_FPSCR_PR == '\0') {
          fVar34 = (float)*(int *)(puVar25 + (int)DAT_8c0280f6 + iVar8 + -4);
          fVar35 = fVar35 * fVar34;
          dVar30 = (double)CONCAT44(fVar34,fVar35);
          iVar19 = (int)fVar35;
        }
        else {
          dVar30 = (double)*(int *)(puVar25 + (int)DAT_8c0280f6 + iVar8 + -4);
          dVar30 = dVar30 * dVar30;
          iVar19 = (int)dVar30;
        }
        iVar13 = *(int *)(puVar25 + iVar19 * 4 + iVar8 + -4);
        iVar19 = *(int *)(puVar25 + iVar8 + 0x78);
        *(int *)(DAT_8c0280fc + iVar19) = iVar13;
        *(int *)(DAT_8c028102 + iVar19) =
             *(int *)((int)DAT_8c028100 + *(int *)(DAT_8c0280fe + iVar19)) + iVar20 * iVar13 + 2;
      }
      *(undefined4 *)(DAT_8c027e1c + iVar19) = 1;
      goto LAB_8c027d74;
    }
LAB_8c027ae4:
    iVar20 = *(int *)(puVar25 + iVar8 + 0x78);
    iVar19 = iVar20 + *(int *)(DAT_8c027c16 + iVar20);
    if (*(int *)(DAT_8c027c18 + iVar20) < 0) {
      pcVar7 = *(code **)(DAT_8c028294 + iVar20);
    }
    else {
      piVar15 = (int *)(*(int *)(*(int *)(DAT_8c027c1a + iVar20) + iVar19) +
                       *(int *)(DAT_8c027c18 + iVar20) * 0xc);
      iVar19 = iVar19 + *piVar15;
      pcVar7 = (code *)piVar15[2];
    }
    (*pcVar7)(iVar19);
    iVar19 = *(int *)(DAT_8c027c1c + iVar20);
    if (iVar19 != 0) {
      iVar13 = iVar20 + *(int *)(DAT_8c027c1e + iVar20);
      if (iVar19 < 0) {
        pcVar7 = *(code **)(DAT_8c028296 + iVar20);
      }
      else {
        piVar15 = (int *)(*(int *)(*(int *)(DAT_8c027c20 + iVar20) + iVar13) + iVar19 * 0xc);
        iVar13 = iVar13 + *piVar15;
        pcVar7 = (code *)piVar15[2];
      }
      (*pcVar7)(iVar13);
    }
    if (*(int *)(DAT_8c027c22 + iVar20) == 0) {
      *(undefined4 *)(DAT_8c027c14 + iVar20) = 1;
    }
  }
LAB_8c027b56:
  (*(code *)PTR_FUN_8c027c34)(iVar20);
  puVar3 = PTR_FUN_8c027c38;
  puVar14 = *(ushort **)(DAT_8c027c24 + iVar20);
  *(ushort **)(puVar25 + (int)DAT_8c027c26 + iVar8 + -4) = puVar14;
  if (puVar14 != (ushort *)0x0) {
    uVar5 = (*(code *)PTR_FUN_8c027c38)(6);
    *(undefined4 *)(puVar25 + (int)DAT_8c027c28 + iVar8 + -4) = uVar5;
    uVar5 = (*(code *)puVar3)((int)DAT_8c027c2a);
    uVar2 = *puVar14;
    *(undefined4 *)(puVar25 + (int)DAT_8c027c2c + iVar8 + -4) = uVar5;
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(DAT_8c028298 + iVar20) = 0;
    }
    else {
      iVar19 = (*(code *)puVar3)(4);
      if ((iVar19 == 4) || (iVar19 = (*(code *)puVar3)(4), iVar19 == 6)) {
        uVar11 = (*(code *)puVar3)((int)DAT_8c027c2e);
        if (uVar11 == *(ushort *)(iVar20 + 0x54)) {
          iVar19 = (*(code *)PTR_FUN_8c0283bc)
                             (iVar20,*(undefined4 *)(puVar25 + (int)DAT_8c0283aa + iVar8 + -4),
                              *(undefined4 *)(puVar25 + (int)DAT_8c0283ac + iVar8 + -4));
          if (iVar19 != 0) {
            *(uint *)(DAT_8c0283ae + iVar20) = *(uint *)(DAT_8c0283ae + iVar20) | 0x20;
            *(undefined4 *)(DAT_8c0283b0 + iVar20) = 0;
          }
        }
        else {
          *(undefined4 *)(DAT_8c027c24 + iVar20) = 0;
        }
      }
    }
  }
  if (*(char *)(*(int *)(puVar25 + (int)DAT_8c027c30 + iVar8 + -4) + 0x18) == '\a') {
    uVar11 = *(uint *)(DAT_8c027c32 + iVar20);
    *(uint *)(DAT_8c027c32 + iVar20) = uVar11 & 0xfffffff0;
    if ((uVar11 & 1) != 0) {
      *(uint *)(DAT_8c027c32 + iVar20) = uVar11 & 0xfffffff0 | 2;
    }
    if ((uVar11 & 2) != 0) {
      *(uint *)(DAT_8c027c8e + iVar20) = *(uint *)(DAT_8c027c8e + iVar20) | 1;
    }
    if ((uVar11 & 4) != 0) {
      *(uint *)(DAT_8c027c8e + iVar20) = *(uint *)(DAT_8c027c8e + iVar20) | 8;
    }
    if ((uVar11 & 8) != 0) {
      *(uint *)(DAT_8c027c8e + iVar20) = *(uint *)(DAT_8c027c8e + iVar20) | 4;
    }
  }
                    /* WARNING: Read-only address (ram,0x8c0278e4) is written */
  return;
}

