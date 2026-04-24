// entry: 8c06691c
// name: FUN_8c06691c
// signature: undefined FUN_8c06691c(void)


void FUN_8c06691c(undefined8 param_1,double param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 in_dr12;
  undefined4 uVar16;
  undefined8 in_dr14;
  double dVar17;
  double in_xd14;
  bool bVar18;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_34 [8];
  undefined8 local_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar13 = (undefined1 *)((int)&local_2c + 4);
    local_2c = CONCAT44((int)in_dr14,(undefined4)local_2c);
  }
  else {
    puVar13 = local_34;
    uStack_24 = in_dr12;
    local_2c = in_dr14;
  }
  *(undefined4 *)(puVar13 + -4) = in_PR;
  iVar10 = 0;
  iVar12 = *(int *)(DAT_8c066988 + param_3);
  (*(code *)PTR_FUN_8c066990)();
  *(int *)(puVar13 + -0x18) = iVar12;
  puVar11 = *(ushort **)((int)DAT_8c06698c + *(int *)(DAT_8c06698a + param_3));
  if (0 < iVar12) {
    dVar17 = 0.0;
    do {
      puVar1 = PTR_FUN_8c066b0c;
      if ((*puVar11 & 1) != 0) {
        uVar2 = (*(code *)PTR_FUN_8c066b0c)();
        uVar3 = (*(code *)puVar1)();
        iVar12 = (*(code *)PTR_FUN_8c066b10)(*(undefined4 *)(DAT_8c066b06 + param_3),uVar2,uVar3);
        if (iVar12 != 0) {
          iVar9 = *(int *)(DAT_8c066b06 + param_3);
          iVar12 = (*(code *)puVar1)();
          iVar7 = *(int *)(iVar9 + 0x20);
          iVar4 = (*(code *)puVar1)();
          if (*(char *)(iVar7 * iVar12 + iVar4 + *(int *)(DAT_8c066b08 + iVar9)) == 'b') {
LAB_8c066a12:
            iVar12 = (*(code *)puVar1)();
            if (iVar12 != 6) goto LAB_8c06695c;
          }
          else {
            iVar12 = (*(code *)puVar1)();
            *(int *)(puVar13 + -0x14) = *(int *)(iVar9 + 0x20) * iVar12;
            iVar12 = (*(code *)puVar1)();
            if (*(char *)(*(int *)(puVar13 + -0x14) + iVar12 + *(int *)(DAT_8c066b08 + iVar9)) ==
                '[') goto LAB_8c066a12;
          }
          *(ushort **)(puVar13 + -0x10) = puVar11 + 4;
          iVar12 = (*(code *)puVar1)();
          uVar3 = SUB84(param_2,0);
          uVar2 = (undefined4)param_1;
          if ((((iVar12 == 1) || (iVar12 == 2)) || (iVar12 == 3)) || (iVar12 == 0xd)) {
            iVar12 = (*(code *)puVar1)();
            uVar3 = SUB84(param_2,0);
            uVar2 = (undefined4)param_1;
            uVar16 = SUB84(dVar17,0);
            if (iVar12 == 3) {
              uVar2 = (*(code *)puVar1)();
              uVar3 = (*(code *)puVar1)();
              iVar12 = (*(code *)PTR_FUN_8c066c84)(iVar9,uVar2,uVar3);
              uVar3 = SUB84(param_2,0);
              uVar2 = (undefined4)param_1;
              uVar16 = SUB84(dVar17,0);
              if (iVar12 != 0) goto LAB_8c06695c;
            }
            iVar4 = *(int *)(DAT_8c066c70 + param_3);
            iVar12 = (*(code *)puVar1)();
            *(int *)(puVar13 + -0xc) = *(int *)(iVar4 + 0x20) * iVar12;
            iVar12 = (*(code *)puVar1)();
            uVar8 = (uint)(*(ushort **)
                            ((*(int *)(puVar13 + -0xc) + iVar12) * 4 +
                            *(int *)(DAT_8c066c74 + iVar4)) == puVar11);
            *(uint *)(puVar13 + -8) = uVar8;
            if (uVar8 != 0) {
              (*(code *)PTR_FUN_8c066c88)(iVar4,puVar11);
              iVar4 = *(int *)(DAT_8c066c70 + param_3);
            }
            uVar5 = (*(code *)puVar1)();
            uVar6 = (*(code *)puVar1)();
            uVar14 = (*(code *)PTR_FUN_8c066c7c)(iVar4,uVar5,uVar6);
            uVar5 = (undefined4)uVar14;
            if (in_FPSCR_SZ == '\0') {
              uVar5 = uVar16;
            }
            dVar17 = (double)CONCAT44((int)((ulonglong)uVar14 >> 0x20),uVar5);
            iVar12 = (*(code *)puVar1)();
            dVar15 = dVar17;
            if (iVar12 == 3) {
              iVar12 = (*(code *)puVar1)();
              iVar4 = (*(code *)puVar1)();
              iVar12 = *(int *)((*(int *)(*(int *)(DAT_8c066c70 + param_3) + 0x20) * iVar4 + iVar12)
                                * 4 + *(int *)((int)DAT_8c066c76 + *(int *)(DAT_8c066c70 + param_3))
                               );
              if (iVar12 == 0) {
                bVar18 = false;
              }
              else {
                bVar18 = *(int *)(iVar12 + 8) == 2;
              }
              dVar15 = dVar17;
              if ((bVar18) && (dVar15 = in_xd14, in_FPSCR_SZ == '\0')) {
                dVar15 = (double)CONCAT44(SUB84(dVar17,0),SUB84(dVar17,0));
              }
            }
            if (*(int *)(puVar13 + -8) != 0) {
              (*(code *)PTR_FUN_8c066c80)(*(undefined4 *)(DAT_8c066c70 + param_3),puVar11);
            }
          }
          else {
            dVar15 = in_xd14;
            if (in_FPSCR_SZ == '\0') {
              dVar15 = (double)CONCAT44(SUB84(dVar17,0),SUB84(dVar17,0));
            }
          }
          dVar17 = dVar15;
          (*(code *)PTR_FUN_8c066b14)();
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)(puVar11 + 0x32),
                                      *(undefined4 *)(puVar11 + 0x34));
            param_1 = CONCAT44(*(undefined4 *)(puVar11 + 0x36),uVar2);
          }
          else {
            dVar15 = *(double *)(puVar11 + 0x32);
            param_1 = *(undefined8 *)(puVar11 + 0x36);
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) + (float)((ulonglong)dVar17 >> 0x20));
          }
          else {
            dVar15 = dVar15 + dVar17;
          }
          (*(code *)PTR_FUN_8c066b18)(dVar15,param_1,0);
          if ((puVar11[8] & 7) == 1) {
            uVar2 = 0;
          }
          else if ((puVar11[8] & 7) == 2) {
            uVar2 = 1;
          }
          else {
            uVar2 = 2;
          }
          iVar12 = (*(code *)puVar1)();
          if (iVar12 == 1) {
            (*(code *)PTR_FUN_8c066c8c)
                      (*(undefined4 *)(DAT_8c066c78 + param_3),0,*(byte *)((int)puVar11 + 9) & 0xf,
                       uVar2);
          }
          else if (iVar12 == 2) {
LAB_8c066c38:
            (*(code *)PTR_FUN_8c066c8c)
                      (*(undefined4 *)(DAT_8c066c78 + param_3),1,*(byte *)((int)puVar11 + 9) & 0xf,
                       uVar2);
          }
          else if (iVar12 == 3) {
            (*(code *)PTR_FUN_8c066c8c)
                      (*(undefined4 *)(DAT_8c066c78 + param_3),2,*(byte *)((int)puVar11 + 9) & 0xf,
                       uVar2);
          }
          else if ((((iVar12 == 4) || (iVar12 == 5)) ||
                   ((iVar12 == 6 ||
                    ((((iVar12 == 7 || (iVar12 == 9)) || (iVar12 == 10)) ||
                     ((iVar12 == 0xb || (iVar12 == 0xd)))))))) || (iVar12 == 0xe))
          goto LAB_8c066c38;
          if (in_FPSCR_SZ == '\0') {
            param_2 = (double)CONCAT44(*(undefined4 *)(puVar11 + 0x38),uVar3);
          }
          else {
            param_2 = *(double *)(puVar11 + 0x38);
          }
          if (in_FPSCR_PR == '\0') {
            bVar18 = SUB84(dVar17,0) < (float)((ulonglong)param_2 >> 0x20);
          }
          else {
            bVar18 = dVar17 < param_2;
          }
          if (bVar18) {
            uVar2 = (*(code *)PTR_FUN_8c066db8)(*(undefined4 *)(DAT_8c066daa + param_3),7,0xc,0);
            if (in_FPSCR_SZ == '\0') {
              param_2 = (double)((ulonglong)param_2 & 0xffffffff);
            }
            else {
              param_2 = *(double *)(puVar11 + 0x38);
            }
            (*(code *)PTR_FUN_8c066dc0)(uVar2,0);
            (*(code *)PTR_FUN_8c066dc4)(uVar2);
            (*(code *)PTR_FUN_8c066dc8)(uVar2);
          }
          (*(code *)PTR_FUN_8c066b1c)();
        }
      }
LAB_8c06695c:
      iVar10 = iVar10 + 1;
      puVar11 = (ushort *)((int)puVar11 + (int)DAT_8c06698e);
    } while (iVar10 < *(int *)(puVar13 + -0x18));
  }
  (*(code *)PTR_FUN_8c066998)();
  return;
}

