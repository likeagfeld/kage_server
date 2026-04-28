// entry: 8c06f0d4
// name: FUN_8c06f0d4


/* WARNING: Removing unreachable block (ram,0x8c06f74e) */
/* WARNING: Removing unreachable block (ram,0x8c06f764) */
/* WARNING: Removing unreachable block (ram,0x8c06f770) */
/* WARNING: Removing unreachable block (ram,0x8c06f6f0) */
/* WARNING: Removing unreachable block (ram,0x8c06f700) */
/* WARNING: Removing unreachable block (ram,0x8c06f70c) */
/* WARNING: Removing unreachable block (ram,0x8c06f4fa) */
/* WARNING: Removing unreachable block (ram,0x8c06f510) */
/* WARNING: Removing unreachable block (ram,0x8c06f51c) */
/* WARNING: Removing unreachable block (ram,0x8c06f326) */
/* WARNING: Removing unreachable block (ram,0x8c06f336) */
/* WARNING: Removing unreachable block (ram,0x8c06f342) */
/* WARNING: Removing unreachable block (ram,0x8c06f4c6) */
/* WARNING: Removing unreachable block (ram,0x8c06f4dc) */
/* WARNING: Removing unreachable block (ram,0x8c06f4e8) */
/* WARNING: Removing unreachable block (ram,0x8c06f52e) */
/* WARNING: Removing unreachable block (ram,0x8c06f71a) */
/* WARNING: Removing unreachable block (ram,0x8c06f730) */
/* WARNING: Removing unreachable block (ram,0x8c06f73c) */
/* WARNING: Removing unreachable block (ram,0x8c06f782) */

void FUN_8c06f0d4(uint param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined2 *puVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  uint uVar15;
  int iVar16;
  undefined2 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char *pcVar23;
  undefined8 *puVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  ulonglong in_dr14;
  bool bVar29;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar24 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar24 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar24 + -4) = in_PR;
  *(int *)((int)puVar24 + -0x3c) = param_3;
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)(ulonglong)param_1;
  }
  else {
    dVar25 = *(double *)(DAT_8c06f240 + 0x34);
  }
  uVar15 = SUB84(dVar25,0);
  iVar20 = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)(in_dr14 & 0xffffffff);
  }
  uVar22 = *(undefined4 *)((int)DAT_8c06f22c + *(int *)(DAT_8c06f22a + param_3));
  (*(code *)PTR_FUN_8c06f244)(uVar22);
  (*(code *)PTR_FUN_8c06f248)(uVar22,0);
  dVar26 = (double)(ulonglong)uVar15;
  (*(code *)PTR_FUN_8c06f24c)(uVar22);
  uVar22 = *(undefined4 *)((int)DAT_8c06f22e + *(int *)(DAT_8c06f22a + param_3));
  iVar9 = (*(code *)PTR_FUN_8c06f250)(uVar22);
  puVar5 = PTR_FUN_8c06f254;
  uVar21 = SUB84(dVar26,0);
  if (0 < iVar9) {
    iVar18 = 0;
    do {
      iVar10 = (*(code *)puVar5)(uVar22,iVar20,2);
      if (iVar10 < 4) {
        dVar8 = dVar25;
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)((ulonglong)dVar26 & 0xffffffff);
        }
        dVar26 = dVar8;
        (*(code *)PTR_FUN_8c06f414)
                  (dVar26,*(undefined4 *)
                           (iVar18 + *(int *)((int)DAT_8c06f3ee + *(int *)(DAT_8c06f3ec + param_3)))
                  );
      }
      uVar21 = SUB84(dVar26,0);
      iVar9 = iVar9 + -1;
      iVar20 = iVar20 + 1;
      iVar18 = iVar18 + 4;
    } while (iVar9 != 0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar27 = CONCAT44(*(undefined4 *)(DAT_8c06f240 + 0x34),uVar21);
  }
  else {
    uVar27 = *(undefined8 *)(DAT_8c06f240 + 0x34);
  }
  (*(code *)PTR_FUN_8c06f258)(uVar27,*(undefined4 *)(DAT_8c06f230 + param_3));
  uVar22 = (undefined4)uVar27;
  (*(code *)PTR_FUN_8c06f25c)(param_3);
  (*(code *)PTR_FUN_8c06f260)(param_3);
  if (((**(uint **)(DAT_8c06f230 + param_3) & 4) != 0) &&
     ((**(uint **)(DAT_8c06f230 + param_3) & 8) == 0)) {
    iVar18 = param_3 + DAT_8c06f3f0;
    iVar9 = *(int *)(iVar18 + 4);
    iVar20 = *(int *)(*(int *)(iVar18 + 4) + 0x28);
    *(int *)((int)puVar24 + -0x38) = iVar18;
    iVar20 = (**(code **)(iVar20 + 0x80))(iVar9 + *(int *)(iVar20 + 0x78));
    if (iVar20 == 0) {
      (*(code *)PTR_FUN_8c06f418)(*(undefined4 *)(*(int *)((int)puVar24 + -0x38) + 4));
      **(uint **)(DAT_8c06f3e2 + param_3) = **(uint **)(DAT_8c06f3e2 + param_3) | 8;
    }
  }
  (*(code *)PTR_FUN_8c06f264)(param_3,0);
  if (in_FPSCR_SZ == '\0') {
    uVar28 = CONCAT44(*(undefined4 *)(*(int *)(DAT_8c06f230 + param_3) + 0x14),uVar22);
  }
  else {
    uVar28 = *(ulonglong *)(*(int *)(DAT_8c06f230 + param_3) + 0x14);
  }
  (*(code *)PTR_FUN_8c06f268)(uVar28,*(undefined4 *)(DAT_8c06f232 + param_3));
  uVar15 = SUB84(dVar25,0);
  if (in_FPSCR_SZ == '\0') {
    dVar25 = (double)(uVar28 & 0xffffffff);
  }
  (*(code *)PTR_FUN_8c06f26c)
            (dVar25,*(undefined4 *)(DAT_8c06f232 + param_3),
             (**(uint **)(DAT_8c06f230 + param_3) & 4) != 0);
  iVar20 = (int)DAT_8c06f234;
  uVar22 = (*(code *)PTR_FUN_8c06f270)(*(undefined4 *)(param_3 + iVar20));
  (*(code *)PTR_FUN_8c06f274)(uVar22,0);
  if (((*(byte *)(DAT_8c06f236 + param_3) & 0x40) == 0) &&
     (iVar9 = *(int *)((int)DAT_8c06f55e + *(int *)(DAT_8c06f55c + param_3)),
     iVar9 = (**(code **)(iVar9 + 0x74))(*(int *)(DAT_8c06f55c + param_3) + *(int *)(iVar9 + 0x6c)),
     iVar9 == 0)) {
    if (((*(uint *)(*(int *)(*(int *)PTR_DAT_8c06f574 + 0x20) + 0x10) & 8) != 0) &&
       (piVar11 = (int *)(*(int *)(*(int *)((int)DAT_8c06f560 + *(int *)((int)puVar24 + -0x3c)) +
                                  0x28) + (int)DAT_8c06f562),
       iVar20 = (*(code *)piVar11[2])
                          (*(int *)((int)DAT_8c06f560 + *(int *)((int)puVar24 + -0x3c)) + *piVar11),
       iVar20 == 0)) {
      iVar20 = *(int *)(*(int *)((int)DAT_8c06f908 + *(int *)((int)puVar24 + -0x3c)) + 0x28);
      (**(code **)(iVar20 + 0x80))
                (*(int *)((int)DAT_8c06f908 + *(int *)((int)puVar24 + -0x3c)) +
                 *(int *)(iVar20 + 0x78),1,1);
    }
    iVar9 = *(int *)((int)puVar24 + -0x3c);
    piVar11 = (int *)(*(int *)(*(int *)(DAT_8c06f560 + iVar9) + 0x28) + (int)DAT_8c06f564);
    iVar20 = (*(code *)piVar11[2])(*(int *)(DAT_8c06f560 + iVar9) + *piVar11);
    if (iVar20 != 0) {
      piVar11 = (int *)(*(int *)(*(int *)(DAT_8c06f560 + iVar9) + 0x28) + (int)DAT_8c06f566);
      iVar20 = (*(code *)piVar11[2])(*(int *)(DAT_8c06f560 + iVar9) + *piVar11);
      if ((iVar20 != 1) && (iVar20 == 2)) {
        (*(code *)PTR_FUN_8c06f928)(iVar9 + 0x10,1);
      }
      piVar11 = (int *)(*(int *)(*(int *)(DAT_8c06f560 + iVar9) + 0x28) + (int)DAT_8c06f568);
      (*(code *)piVar11[2])(*(int *)(DAT_8c06f560 + iVar9) + *piVar11);
    }
  }
  else {
    puVar6 = PTR_DAT_8c06f27c;
    puVar5 = PTR_FUN_8c06f278;
    pcVar23 = PTR_DAT_8c06f27c + 0x10;
    iVar9 = (int)DAT_8c06f23e;
    *(byte *)(DAT_8c06f236 + param_3) =
         (*(byte *)(DAT_8c06f236 + param_3) & 0x7f | (byte)DAT_8c06f23a) & (byte)DAT_8c06f23c | 0x40
    ;
    (*(code *)puVar5)(iVar9);
    **(uint **)(DAT_8c06f230 + param_3) = **(uint **)(DAT_8c06f230 + param_3) | 0x20;
    if (*pcVar23 == '\0') {
      uVar22 = *DAT_8c06f284;
    }
    else {
      uVar22 = *DAT_8c06f578;
    }
    (*(code *)PTR_FUN_8c06f288)(uVar22,puVar6[0x11]);
    (*(code *)PTR_FUN_8c06f28c)(uVar22,puVar6[0x12],puVar6[0x13],0);
    uVar22 = (*(code *)PTR_FUN_8c06f3f4)(*(undefined4 *)(param_3 + iVar20));
    (*(code *)PTR_FUN_8c06f3f8)(uVar22,0);
    uVar7 = DAT_8c06f3dc;
    uVar19 = 0;
    iVar20 = 8;
    dVar26 = (double)(ulonglong)uVar15;
    *(int *)((int)puVar24 + -0x2c) = *(int *)((int)puVar24 + -0x3c) + 0x3e;
    uVar22 = 0;
    do {
      puVar5 = PTR_FUN_8c06f400;
      if (*(char *)(*(int *)((int)puVar24 + -0x2c) + uVar19) != '\x03') {
        if ((uVar19 == 0) &&
           ((*(uint *)((int)DAT_8c06f3de + *(int *)((int)puVar24 + -0x3c)) & 1) != 0)) {
          pcVar23 = PTR_DAT_8c06f3fc + DAT_8c06f3e0;
          if (*pcVar23 == '\0') {
            uVar21 = *DAT_8c06f57c;
          }
          else {
            uVar21 = *DAT_8c06f408;
          }
          (*(code *)PTR_FUN_8c06f404)(uVar21,pcVar23[1]);
          (*(code *)puVar5)(uVar21,pcVar23[2],pcVar23[3],0);
        }
        uVar17 = (undefined2)uVar22;
        if ((*(byte *)(*(int *)((int)DAT_8c06f3e4 +
                               *(int *)((int)DAT_8c06f3e2 + *(int *)((int)puVar24 + -0x3c))) +
                       (int)DAT_8c06f3e6 * uVar19 + 8) & 4) == 0) {
          if ((int)uVar19 < 0) {
            uVar15 = 1 >> (~uVar19 & 0x1f) + 1;
          }
          else {
            uVar15 = 1 << (uVar19 & 0x1f);
          }
          iVar9 = *(int *)((int)puVar24 + -0x3c) + (int)DAT_8c06f6aa;
          if ((*(uint *)((int)DAT_8c06f6a8 + *(int *)((int)puVar24 + -0x3c)) & uVar15) == 0) {
            dVar8 = dVar26;
            if (in_FPSCR_SZ == '\0') {
              dVar8 = (double)((ulonglong)dVar25 & 0xffffffff);
            }
            dVar25 = dVar8;
            (*(code *)PTR_FUN_8c06f7bc)(*(int *)(iVar9 + uVar19 * 4) + 0x10,0xd);
            if (uVar19 == 0) {
              iVar10 = *(int *)((int)puVar24 + -0x3c);
              iVar9 = (int)DAT_8c06f7b0;
              iVar18 = 2;
              puVar14 = (undefined2 *)(iVar10 + iVar9 + (int)DAT_8c06f7b6);
              puVar12 = puVar14 + 1;
              do {
                iVar18 = iVar18 + -1;
                *puVar14 = uVar17;
                *puVar12 = uVar17;
                puVar14 = puVar14 + 2;
                puVar12 = puVar12 + 2;
              } while (iVar18 != 0);
              *(undefined2 *)(iVar10 + iVar9 + (int)DAT_8c06f7b8) = uVar17;
            }
          }
          else {
            dVar8 = dVar26;
            if (in_FPSCR_SZ == '\0') {
              dVar8 = (double)((ulonglong)dVar25 & 0xffffffff);
            }
            dVar25 = dVar8;
            (*(code *)PTR_FUN_8c06f6b4)(dVar25,*(int *)(iVar9 + uVar19 * 4) + 0x10,0xc);
            iVar9 = DAT_8c06f6b8;
            if (uVar19 == 0) {
              iVar18 = 0;
              if (0 < *(short *)(*(int *)((int)puVar24 + -0x3c) + (int)DAT_8c06f6ac)) {
                iVar16 = *(int *)((int)puVar24 + -0x3c);
                iVar10 = (int)DAT_8c06f6ae;
                *(undefined4 *)((int)puVar24 + -0x34) = uVar22;
                *(int *)((int)puVar24 + -0x30) = iVar20;
                sVar1 = *(short *)(*(int *)((int)puVar24 + -0x3c) + (int)DAT_8c06f6ac);
                do {
                  pbVar13 = (byte *)(iVar9 + *(short *)(iVar16 + iVar10 + iVar18 * 2) + -0xe);
                  *pbVar13 = *pbVar13 & 0x7f | (byte)uVar7;
                  iVar20 = iVar18 * 2;
                  iVar18 = iVar18 + 1;
                  pbVar13 = (byte *)(iVar9 + *(short *)(iVar16 + iVar10 + iVar20) + -0xe);
                  *pbVar13 = *pbVar13 & (byte)uVar7 | 1;
                } while (iVar18 < sVar1);
                iVar20 = *(int *)((int)puVar24 + -0x30);
                uVar22 = *(undefined4 *)((int)puVar24 + -0x34);
              }
              puVar5 = PTR_FUN_8c06f6c0;
              cVar2 = *(char *)(*(int *)((int)puVar24 + -0x3c) + 0x30);
              if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
                pcVar23 = PTR_DAT_8c06f6bc + DAT_8c06f6b2;
                if (*pcVar23 == '\0') {
                  uVar21 = *DAT_8c06f6cc;
                }
                else {
                  uVar21 = *DAT_8c06f6c8;
                }
                (*(code *)PTR_FUN_8c06f6c4)(uVar21,pcVar23[1]);
                (*(code *)puVar5)(uVar21,pcVar23[2],pcVar23[3],0);
              }
              else if ((cVar2 == '\x03') || (cVar2 == '\x04')) {
                pcVar23 = PTR_DAT_8c06f6bc + DAT_8c06f6b0;
                cVar2 = *pcVar23;
                *(char **)((int)puVar24 + -0x28) = pcVar23;
                *(undefined **)((int)puVar24 + -0x1c) = PTR_FUN_8c06f6c0;
                if (cVar2 == '\0') {
                  *(undefined4 *)((int)puVar24 + -0x18) = *DAT_8c06f6cc;
                }
                else {
                  *(undefined4 *)((int)puVar24 + -0x18) = *DAT_8c06f6c8;
                }
                (*(code *)PTR_FUN_8c06f6c4)(pcVar23[1]);
                uVar3 = *(undefined1 *)(*(int *)((int)puVar24 + -0x28) + 2);
                uVar4 = *(undefined1 *)(*(int *)((int)puVar24 + -0x28) + 3);
                *(code **)((int)puVar24 + -0x10) = *(code **)((int)puVar24 + -0x1c);
                (**(code **)((int)puVar24 + -0x1c))
                          (*(undefined4 *)((int)puVar24 + -0x18),uVar3,uVar4,0);
              }
            }
          }
        }
        else if (uVar19 == 0) {
          iVar10 = *(int *)((int)puVar24 + -0x3c);
          iVar9 = (int)DAT_8c06f56a;
          iVar18 = 2;
          puVar14 = (undefined2 *)(iVar10 + iVar9 + (int)DAT_8c06f570);
          puVar12 = puVar14 + 1;
          do {
            iVar18 = iVar18 + -1;
            *puVar14 = uVar17;
            *puVar12 = uVar17;
            puVar14 = puVar14 + 2;
            puVar12 = puVar12 + 2;
          } while (iVar18 != 0);
          *(undefined2 *)(iVar10 + iVar9 + (int)DAT_8c06f572) = uVar17;
        }
      }
      uVar15 = SUB84(dVar25,0);
      iVar20 = iVar20 + -1;
      uVar19 = uVar19 + 1;
    } while (iVar20 != 0);
    if (in_FPSCR_SZ == '\0') {
      dVar25 = (double)CONCAT44(*(undefined4 *)
                                 (*(int *)((int)DAT_8c06f3e2 + *(int *)((int)puVar24 + -0x3c)) +
                                 0x14),(int)param_2);
    }
    else {
      dVar25 = *(double *)(*(int *)((int)DAT_8c06f3e2 + *(int *)((int)puVar24 + -0x3c)) + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar29 = (float)((ulonglong)dVar26 >> 0x20) < (float)((ulonglong)dVar25 >> 0x20);
    }
    else {
      bVar29 = dVar26 < dVar25;
    }
    if (!bVar29) {
      iVar9 = *(int *)((int)puVar24 + -0x3c) + (int)DAT_8c06f902;
      iVar20 = *(int *)(*(int *)(iVar9 + 8) + 0x28);
      iVar20 = (**(code **)(iVar20 + 0x80))(*(int *)(iVar9 + 8) + *(int *)(iVar20 + 0x78));
      if (iVar20 == 0) {
        cVar2 = *(char *)(*(int *)((int)puVar24 + -0x3c) + 0x30);
        if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
          pcVar23 = PTR_DAT_8c06f910 + DAT_8c06f906;
          cVar2 = *pcVar23;
          *(char **)((int)puVar24 + -0x20) = pcVar23;
          *(undefined **)((int)puVar24 + -0x1c) = PTR_FUN_8c06f914;
          if (cVar2 == '\0') {
            *(undefined4 *)((int)puVar24 + -0x14) = *DAT_8c06f91c;
          }
          else {
            *(undefined4 *)((int)puVar24 + -0x14) = *DAT_8c06f924;
          }
          (*(code *)PTR_FUN_8c06f918)(pcVar23[1]);
          uVar3 = *(undefined1 *)(*(int *)((int)puVar24 + -0x20) + 2);
          uVar4 = *(undefined1 *)(*(int *)((int)puVar24 + -0x20) + 3);
          *(code **)((int)puVar24 + -8) = *(code **)((int)puVar24 + -0x1c);
          (**(code **)((int)puVar24 + -0x1c))(*(undefined4 *)((int)puVar24 + -0x14),uVar3,uVar4,0);
        }
        else if ((cVar2 == '\x03') || (cVar2 == '\x04')) {
          pcVar23 = PTR_DAT_8c06f910 + DAT_8c06f904;
          cVar2 = *pcVar23;
          *(char **)((int)puVar24 + -0x24) = pcVar23;
          *(undefined **)((int)puVar24 + -0x1c) = PTR_FUN_8c06f914;
          if (cVar2 == '\0') {
            *(undefined4 *)((int)puVar24 + -0x18) = *DAT_8c06f91c;
          }
          else {
            *(undefined4 *)((int)puVar24 + -0x18) = *DAT_8c06f924;
          }
          (*(code *)PTR_FUN_8c06f918)(pcVar23[1]);
          uVar3 = *(undefined1 *)(*(int *)((int)puVar24 + -0x24) + 2);
          uVar4 = *(undefined1 *)(*(int *)((int)puVar24 + -0x24) + 3);
          *(code **)((int)puVar24 + -0xc) = *(code **)((int)puVar24 + -0x1c);
          (**(code **)((int)puVar24 + -0x1c))(*(undefined4 *)((int)puVar24 + -0x18),uVar3,uVar4,0);
        }
        (*(code *)PTR_FUN_8c06f920)(*(undefined4 *)(iVar9 + 8));
      }
    }
    (*(code *)PTR_FUN_8c06f40c)(*(undefined4 *)((int)DAT_8c06f3ea + *(int *)((int)puVar24 + -0x3c)))
    ;
    if (in_FPSCR_SZ == '\0') {
      dVar26 = (double)(ulonglong)uVar15;
    }
    (*(code *)PTR_FUN_8c06f410)(dVar26,*(int *)((int)puVar24 + -0x3c) + 0x10,0xe);
  }
  return;
}

