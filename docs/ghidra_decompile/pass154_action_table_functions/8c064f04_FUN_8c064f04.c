// entry: 8c064f04
// name: FUN_8c064f04
// signature: undefined FUN_8c064f04(void)


void FUN_8c064f04(ulonglong param_1,ulonglong param_2,double param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  short *psVar11;
  ushort *puVar12;
  undefined1 *puVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 in_dr12;
  ulonglong in_dr14;
  double dVar20;
  double in_xd14;
  bool bVar21;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [8];
  undefined8 uStack_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)(in_dr14 >> 0x20);
    puVar13 = (undefined1 *)((int)&uStack_2c + 4);
    uStack_2c = CONCAT44((int)in_dr14,(undefined4)uStack_2c);
  }
  else {
    puVar13 = auStack_34;
    uStack_24 = in_dr12;
    uStack_2c = in_dr14;
  }
  *(undefined4 *)(puVar13 + -4) = in_PR;
  *(int *)(puVar13 + -8) = param_4;
  if (*(char *)(param_4 + 0x30) == '\x02') {
    iVar8 = 8;
    dVar20 = (double)(in_dr14 & 0xffffffff);
    iVar6 = *(int *)((int)DAT_8c065060 + *(int *)(puVar13 + -8));
    piVar9 = (int *)(*(int *)(puVar13 + -8) + (int)DAT_8c06505e);
    iVar7 = (int)DAT_8c065064;
    psVar11 = *(short **)(DAT_8c065062 + iVar6);
    piVar10 = piVar9;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)(ulonglong)(uint)DAT_8c06506c;
      dVar14 = (double)CONCAT44(DAT_8c06506c._4_4_,(int)in_dr12);
    }
    else {
      in_xd14 = (double)CONCAT44(DAT_8c06506c._4_4_,(uint)DAT_8c06506c);
      dVar14 = (double)CONCAT44(PTR_FUN_8c065074,DAT_8c06506c._4_4_);
    }
    do {
      uVar17 = (undefined4)param_1;
      if (*piVar10 != 0) {
        iVar4 = *(int *)(*piVar9 + 0x58);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar13 + -0x20) = *(undefined4 *)(iVar4 + 0x4c);
          *(undefined4 *)(puVar13 + -0x1c) = *(undefined4 *)(iVar4 + 0x50);
          uVar18 = CONCAT44(*(undefined4 *)(iVar4 + 0x54),SUB84(param_3,0));
        }
        else {
          *(undefined8 *)(puVar13 + -0x20) = *(undefined8 *)(iVar4 + 0x4c);
          *(undefined8 *)(puVar13 + -0x1c) = *(undefined8 *)(iVar4 + 0x50);
          uVar18 = *(undefined8 *)(iVar4 + 0x54);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar13 + -0x18) = (int)((ulonglong)uVar18 >> 0x20);
        }
        else {
          *(undefined8 *)(puVar13 + -0x18) = uVar18;
        }
        *(undefined4 *)(puVar13 + -0x10) = *(undefined4 *)(puVar13 + -0x1c);
        *(undefined4 *)(puVar13 + -0xc) = *(undefined4 *)(puVar13 + -0x18);
        sVar1 = *psVar11;
        *(undefined4 *)(puVar13 + -0x14) = *(undefined4 *)(puVar13 + -0x20);
        uVar3 = (undefined4)((ulonglong)dVar20 >> 0x20);
        if (sVar1 == 0) {
          dVar19 = in_xd14;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = (double)CONCAT44(SUB84(dVar20,0),*(undefined4 *)DAT_8c06512c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) / SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 / dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = uVar3;
          }
          uVar3 = *(undefined4 *)(PTR_DAT_8c065134 + 4);
          *(undefined4 *)(puVar13 + -0x54) = *(undefined4 *)PTR_DAT_8c065134;
          *(undefined4 *)(puVar13 + -0x50) = uVar3;
          uVar5 = *(undefined4 *)(PTR_DAT_8c065134 + 8);
          *(undefined4 *)(puVar13 + -0x48) = *(undefined4 *)(PTR_DAT_8c065134 + 0xc);
          uVar3 = *(undefined4 *)(PTR_DAT_8c065134 + 0x10);
          *(undefined4 *)(puVar13 + -0x4c) = uVar5;
          *(undefined4 *)(puVar13 + -0x44) = uVar3;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar13 + -0x54) = (int)((ulonglong)dVar19 >> 0x20);
            param_3 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),SUB84(dVar19,0));
          }
          else {
            *(double *)(puVar13 + -0x54) = dVar19;
            param_3 = dVar14;
          }
          if (in_FPSCR_PR == '\0') {
            param_3 = (double)CONCAT44((float)((ulonglong)param_3 >> 0x20) / SUB84(param_3,0),
                                       SUB84(param_3,0));
          }
          else {
            param_3 = param_3 / param_3;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar13 + -0x50) = (int)((ulonglong)param_3 >> 0x20);
            param_1 = CONCAT44(*(undefined4 *)(puVar13 + -0x14),uVar17);
            param_2 = CONCAT44(*(undefined4 *)(puVar13 + -0xc),(int)param_2);
          }
          else {
            *(double *)(puVar13 + -0x50) = param_3;
            param_1 = *(ulonglong *)(puVar13 + -0x14);
            param_2 = *(ulonglong *)(puVar13 + -0xc);
          }
          (*(code *)PTR_FUN_8c065138)(param_1,param_2,iVar6,puVar13 + -0x54);
        }
        else if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(psVar11 + 6) = *(undefined4 *)(puVar13 + -0x14);
          *(undefined4 *)(psVar11 + 8) = uVar3;
          param_3 = (double)CONCAT44(*(undefined4 *)(puVar13 + -0xc),(int)uVar18);
          *(undefined4 *)(psVar11 + 10) = *(undefined4 *)(puVar13 + -0xc);
        }
        else {
          *(undefined8 *)(psVar11 + 6) = *(undefined8 *)(puVar13 + -0x14);
          *(double *)(psVar11 + 8) = dVar20;
          param_3 = *(double *)(puVar13 + -0xc);
          *(double *)(psVar11 + 10) = param_3;
        }
      }
      iVar8 = iVar8 + -1;
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
      psVar11 = (short *)((int)psVar11 + iVar7);
    } while (iVar8 != 0);
    iVar6 = *(int *)((int)DAT_8c065060 + *(int *)(puVar13 + -8));
    iVar7 = *(int *)(iVar6 + 0x28);
    puVar12 = *(ushort **)(DAT_8c065066 + iVar6);
    iVar8 = 0;
    if (0 < iVar7) {
      iVar4 = (int)DAT_8c065068;
      do {
        if ((*puVar12 & 1) != 0) {
          if (in_FPSCR_SZ == '\0') {
            param_3 = (double)CONCAT44(*(undefined4 *)(puVar12 + 0xc),SUB84(param_3,0));
          }
          else {
            param_3 = *(double *)(puVar12 + 0xc);
          }
          if (in_FPSCR_PR == '\0') {
            bVar21 = (float)((ulonglong)param_3 >> 0x20) == (float)((ulonglong)dVar20 >> 0x20);
          }
          else {
            bVar21 = param_3 == dVar20;
          }
          if (bVar21) {
            iVar2 = (*(code *)PTR_FUN_8c065074)();
            uVar15 = (uint)param_1;
            uVar16 = (uint)param_2;
            uVar17 = SUB84(param_3,0);
            if (iVar2 == 9) {
              uVar5 = *(undefined4 *)(PTR_DAT_8c065120 + 4);
              *(undefined4 *)(puVar13 + -0x30) = *(undefined4 *)PTR_DAT_8c065120;
              uVar3 = *(undefined4 *)(PTR_DAT_8c065120 + 8);
              *(undefined4 *)(puVar13 + -0x2c) = uVar5;
              uVar5 = *(undefined4 *)(PTR_DAT_8c065120 + 0xc);
              *(undefined4 *)(puVar13 + -0x28) = uVar3;
              *(undefined4 *)(puVar13 + -0x24) = uVar5;
              uVar3 = (*(code *)PTR_FUN_8c065124)
                                (*(undefined4 *)((int)DAT_8c06511e + *(int *)(puVar13 + -8)),
                                 *(undefined4 *)(puVar13 + -0x30),*(undefined4 *)(puVar13 + -0x2c),0
                                );
              dVar14 = (double)(*(code *)PTR_FUN_8c065128)(uVar3);
              if (in_FPSCR_SZ == '\0') {
                dVar19 = (double)CONCAT44(*(undefined4 *)DAT_8c06512c,uVar17);
                uVar15 = (uint)((ulonglong)dVar20 >> 0x20);
              }
              else {
                dVar19 = *DAT_8c06512c;
              }
              if (in_FPSCR_PR == '\0') {
                param_3 = (double)CONCAT44((float)(int)((float)((ulonglong)dVar14 >> 0x20) *
                                                       (float)((ulonglong)dVar19 >> 0x20)),
                                           SUB84(dVar19,0));
              }
              else {
                param_3 = (double)(int)(dVar14 * dVar19);
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar13 + -0x24) = (int)((ulonglong)param_3 >> 0x20);
                param_1 = CONCAT44(*(undefined4 *)(puVar12 + 0x32),uVar15);
                param_2 = CONCAT44(*(undefined4 *)(puVar12 + 0x36),uVar16);
              }
              else {
                *(double *)(puVar13 + -0x24) = param_3;
                param_1 = *(ulonglong *)(puVar12 + 0x32);
                param_2 = *(ulonglong *)(puVar12 + 0x36);
              }
              (*(code *)PTR_FUN_8c065130)(param_1,param_2,iVar6,puVar13 + -0x30);
            }
            else if (iVar2 == 0xb) {
              uVar5 = *(undefined4 *)(PTR_DAT_8c065078 + 4);
              *(undefined4 *)(puVar13 + -0x40) = *(undefined4 *)PTR_DAT_8c065078;
              uVar3 = *(undefined4 *)(PTR_DAT_8c065078 + 0xc);
              *(undefined4 *)(puVar13 + -0x3c) = uVar5;
              uVar5 = *(undefined4 *)(PTR_DAT_8c065078 + 8);
              *(undefined4 *)(puVar13 + -0x34) = uVar3;
              *(undefined4 *)(puVar13 + -0x38) = uVar5;
              uVar3 = (*(code *)PTR_FUN_8c06507c)
                                (*(undefined4 *)((int)DAT_8c06506a + *(int *)(puVar13 + -8)),
                                 *(undefined4 *)(puVar13 + -0x40),*(undefined4 *)(puVar13 + -0x3c),0
                                );
              dVar14 = (double)(*(code *)PTR_FUN_8c065080)(uVar3);
              if (in_FPSCR_SZ == '\0') {
                dVar19 = (double)CONCAT44(*(undefined4 *)DAT_8c065084,uVar17);
                uVar15 = (uint)((ulonglong)dVar20 >> 0x20);
              }
              else {
                dVar19 = *DAT_8c065084;
              }
              if (in_FPSCR_PR == '\0') {
                param_3 = (double)CONCAT44((float)(int)((float)((ulonglong)dVar14 >> 0x20) *
                                                       (float)((ulonglong)dVar19 >> 0x20)),
                                           SUB84(dVar19,0));
              }
              else {
                param_3 = (double)(int)(dVar14 * dVar19);
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar13 + -0x34) = (int)((ulonglong)param_3 >> 0x20);
                param_1 = (ulonglong)uVar15;
                param_2 = (ulonglong)uVar16;
              }
              else {
                *(double *)(puVar13 + -0x34) = param_3;
                param_1 = *(ulonglong *)(puVar12 + 0x32);
                param_2 = *(ulonglong *)(puVar12 + 0x36);
              }
              (*(code *)PTR_FUN_8c065088)(iVar6,puVar13 + -0x40);
            }
          }
        }
        iVar8 = iVar8 + 1;
        puVar12 = (ushort *)((int)puVar12 + iVar4);
      } while (iVar8 < iVar7);
    }
  }
  return;
}

