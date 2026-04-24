// entry: 8c066de0
// name: FUN_8c066de0
// signature: undefined FUN_8c066de0(void)


/* WARNING: Removing unreachable block (ram,0x8c066f06) */

void FUN_8c066de0(double param_1,double param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  double dVar13;
  uint uVar14;
  undefined8 in_dr12;
  double dVar15;
  float fVar16;
  double dVar17;
  undefined8 in_xd12;
  double in_xd14;
  bool bVar18;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_38 [16];
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_20);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_20._0_4_ = (int)in_dr12;
    puVar11 = auStack_28;
  }
  else {
    puVar11 = local_38;
    uStack_20 = in_dr12;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  iVar8 = 0;
  iVar10 = *(int *)((int)DAT_8c066eca + *(int *)(DAT_8c066ec8 + param_3));
  uVar4 = (*(code *)PTR_FUN_8c066ed4)(2,2);
  uVar14 = (uint)in_dr12;
  *(undefined4 *)(puVar11 + -0xc) = uVar4;
  (*(code *)PTR_FUN_8c066ed8)();
  sVar1 = *(short *)(iVar10 + 8);
  *(int *)(puVar11 + -0x10) = iVar10;
  iVar10 = (int)*(short *)(iVar10 + 10) * (int)sVar1;
  *(int *)(puVar11 + -8) = iVar10;
  if (0 < iVar10) {
    dVar15 = (double)(ulonglong)uVar14;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)(ulonglong)DAT_8c066edc;
    }
    else {
      in_xd12 = CONCAT44(PTR_FUN_8c066ee0,DAT_8c066edc);
    }
    do {
      iVar10 = *(int *)(DAT_8c066ecc + param_3);
      puVar9 = (ushort *)(*(int *)(DAT_8c066ece + iVar10) + iVar8 * 0x14);
      if ((*puVar9 & 1) != 0) {
        iVar5 = (*(code *)PTR_FUN_8c066ee0)();
        iVar7 = *(int *)(iVar10 + 0x20);
        iVar6 = (*(code *)PTR_FUN_8c066ee0)();
        if (*(char *)(iVar7 * iVar5 + iVar6 + *(int *)(DAT_8c066ed2 + iVar10)) != 'b') {
          iVar5 = (*(code *)PTR_FUN_8c066ee0)();
          iVar7 = *(int *)(iVar10 + 0x20);
          iVar6 = (*(code *)PTR_FUN_8c066ee0)();
          uVar4 = SUB84(param_1,0);
          uVar12 = SUB84(param_2,0);
          if (*(char *)(iVar7 * iVar5 + iVar6 + *(int *)(DAT_8c066ed2 + iVar10)) != '[') {
            (*(code *)PTR_FUN_8c06707c)();
            fVar16 = (float)-((int)((int)*(short *)(*(int *)(puVar11 + -0x10) + 8) +
                                   (uint)(*(short *)(*(int *)(puVar11 + -0x10) + 8) < 0)) >> 1);
            uVar2 = (*(code *)PTR_FUN_8c067080)();
            if (in_FPSCR_PR == '\0') {
              dVar13 = (double)CONCAT44((float)uVar2,uVar12);
            }
            else {
              dVar13 = (double)uVar2;
            }
            iVar10 = -((int)((int)*(short *)(*(int *)(puVar11 + -0x10) + 10) +
                            (uint)(*(short *)(*(int *)(puVar11 + -0x10) + 10) < 0)) >> 1);
            if (in_FPSCR_PR == '\0') {
              dVar17 = (double)CONCAT44((float)iVar10,fVar16 + (float)((ulonglong)dVar13 >> 0x20));
            }
            else {
              dVar17 = (double)iVar10;
            }
            uVar2 = (*(code *)PTR_FUN_8c067080)();
            if (in_FPSCR_PR == '\0') {
              dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                        SUB84(dVar17,0) + SUB84(dVar15,0));
              param_2 = (double)CONCAT44((float)uVar2,SUB84(dVar13,0));
            }
            else {
              dVar17 = dVar17 + dVar15;
              param_2 = (double)uVar2;
            }
            dVar13 = in_xd14;
            if (in_FPSCR_SZ == '\0') {
              dVar13 = (double)CONCAT44(SUB84(dVar17,0),(int)((ulonglong)dVar15 >> 0x20));
            }
            if (in_FPSCR_PR == '\0') {
              dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                        (float)((ulonglong)param_2 >> 0x20) + SUB84(dVar15,0),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + param_2 + dVar15;
            }
            param_1 = dVar17;
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),uVar4);
            }
            (*(code *)PTR_FUN_8c067084)(dVar13,param_1,0);
            if (in_FPSCR_SZ == '\0') {
              dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),*(undefined4 *)(puVar9 + 6)
                                       );
              dVar13 = in_xd14;
            }
            else {
              dVar13 = *(double *)(puVar9 + 6);
            }
            fVar16 = (float)((ulonglong)dVar15 >> 0x20);
            if (in_FPSCR_PR == '\0') {
              bVar18 = SUB84(dVar17,0) < fVar16;
            }
            else {
              bVar18 = dVar17 < dVar15;
            }
            in_xd14 = dVar13;
            if ((bVar18) && (in_xd14 = dVar15, in_FPSCR_SZ == '\0')) {
              dVar17 = (double)(ulonglong)(uint)fVar16;
              in_xd14 = dVar13;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar13 = (double)CONCAT44(DAT_8c067088,SUB84(dVar17,0));
            }
            else {
              dVar13 = (double)CONCAT44(PTR_FUN_8c06708c,DAT_8c067088);
            }
            dVar17 = dVar13;
            if (((puVar9[8] & 0x20) != 0) && (dVar17 = dVar15, in_FPSCR_SZ == '\0')) {
              dVar17 = (double)CONCAT44(fVar16,SUB84(dVar13,0));
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(puVar11 + -0x28) = fVar16;
              *(int *)(puVar11 + -0x24) = SUB84(dVar15,0);
              *(float *)(puVar11 + -0x20) = fVar16;
            }
            else {
              *(double *)(puVar11 + -0x28) = dVar15;
              *(undefined8 *)(puVar11 + -0x24) = in_xd12;
              *(double *)(puVar11 + -0x20) = dVar15;
            }
            *(uint *)(puVar11 + -0x1c) = ((int)(char)puVar9[8] & 0x80U) == 0 ^ 1;
            uVar3 = (*(code *)PTR_FUN_8c067080)();
            *(undefined2 *)(puVar11 + -0x18) = uVar3;
            *(ushort *)(puVar11 + -0x16) = (short)*(char *)((int)puVar9 + 0x11) & 3;
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar11 + -0x14) = (int)((ulonglong)dVar17 >> 0x20);
            }
            else {
              *(double *)(puVar11 + -0x14) = dVar17;
            }
            (*(code *)PTR_FUN_8c06708c)
                      (puVar11 + -0x28,puVar11 + -0x1c,*(undefined4 *)(puVar11 + -0xc));
            (*(code *)PTR_FUN_8c067090)();
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(puVar11 + -8));
  }
  (*(code *)PTR_FUN_8c066ee4)();
  return;
}

