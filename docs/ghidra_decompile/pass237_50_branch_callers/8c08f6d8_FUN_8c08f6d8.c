// entry: 8c08f6d8
// name: FUN_8c08f6d8
// signature: undefined FUN_8c08f6d8(void)


/* WARNING: Removing unreachable block (ram,0x8c08fbe8) */
/* WARNING: Removing unreachable block (ram,0x8c08fbfe) */
/* WARNING: Removing unreachable block (ram,0x8c08fc06) */
/* WARNING: Removing unreachable block (ram,0x8c08fbb0) */
/* WARNING: Removing unreachable block (ram,0x8c08fbde) */
/* WARNING: Removing unreachable block (ram,0x8c08fbe4) */
/* WARNING: Removing unreachable block (ram,0x8c08fbb6) */
/* WARNING: Removing unreachable block (ram,0x8c08fbd2) */
/* WARNING: Removing unreachable block (ram,0x8c08fbda) */
/* WARNING: Removing unreachable block (ram,0x8c08f8cc) */
/* WARNING: Removing unreachable block (ram,0x8c08f8e0) */

void FUN_8c08f6d8(double param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  int iVar13;
  ushort *puVar14;
  short *psVar15;
  uint uVar16;
  int iVar17;
  double in_dr2;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_20;
  
  iVar7 = (int)DAT_8c08f83e;
  uVar11 = param_2[8];
  uVar16 = param_2[9];
  *(uint *)((int)&local_20 + DAT_8c08f844 + iVar7) =
       *(int *)((int)DAT_8c08f842 + (int)param_2) + (int)DAT_8c08f840 * param_3;
  *(uint *)((int)&local_20 + DAT_8c08f846 + iVar7) = uVar11 - 2;
  *(uint *)((int)&local_20 + DAT_8c08f848 + iVar7) = uVar16 - 2;
  if ((*param_2 & 1) != 0) {
    uVar11 = param_2[0xb];
    puVar14 = *(ushort **)((int)DAT_8c08f84a + (int)param_2);
    iVar13 = 0;
    if (0 < (int)uVar11) {
      if ((int)param_3 < 0) {
        iVar8 = 1 >> (~param_3 & 0x1f) + 1;
      }
      else {
        iVar8 = 1 << (param_3 & 0x1f);
      }
      *(int *)((int)&local_20 + DAT_8c08f84c + iVar7) = iVar8;
      do {
        if ((*puVar14 & 1) != 0) {
          if ((((char)puVar14[4] == '\t') || ((char)puVar14[4] == '\f')) &&
             (uVar16 = (*(code *)PTR_FUN_8c08f860)(), puVar4 = PTR_FUN_8c08f864, uVar16 == param_3))
          {
            iVar8 = (*(code *)PTR_FUN_8c08f864)();
            puVar5 = PTR_FUN_8c08f868;
            *(uint *)((int)&local_20 + DAT_8c08f850 + iVar7) = param_2[8] * iVar8;
            iVar8 = (*(code *)puVar4)();
            if (*(ushort **)
                 ((*(int *)((int)&local_20 + DAT_8c08f850 + iVar7) + iVar8) * 4 +
                 *(int *)((int)DAT_8c08f852 + (int)param_2)) == puVar14) {
              (*(code *)PTR_FUN_8c08f988)(param_2,puVar14);
            }
            (*(code *)puVar5)(param_2,param_3,puVar14);
            uVar11 = param_2[0xb];
          }
          else {
            puVar4 = PTR_FUN_8c08f98c;
            if ((*(uint *)(puVar14 + 0x38) & *(uint *)((int)&local_20 + DAT_8c08f97e + iVar7)) != 0)
            {
              puVar14[0x38] = 0;
              puVar14[0x39] = 0;
              *(undefined1 *)(puVar14 + 4) = 3;
              iVar8 = (*(code *)puVar4)();
              puVar5 = PTR_FUN_8c08f990;
              *(uint *)((int)&local_20 + DAT_8c08f980 + iVar7) = param_2[8] * iVar8;
              iVar8 = (*(code *)puVar4)();
              if (*(ushort **)
                   ((*(int *)((int)&local_20 + DAT_8c08f980 + iVar7) + iVar8) * 4 +
                   *(int *)((int)DAT_8c08f982 + (int)param_2)) == puVar14) {
                (*(code *)PTR_FUN_8c08f988)(param_2,puVar14);
              }
              (*(code *)puVar5)(param_2,param_3,puVar14);
              uVar11 = param_2[0xb];
            }
          }
        }
        iVar13 = iVar13 + 1;
        puVar14 = puVar14 + 0x3a;
      } while (iVar13 < (int)uVar11);
    }
    if ((*(char *)((int)DAT_8c08f854 + param_2[1]) == '\x01') &&
       (((uVar11 = param_2[4], *(short *)(uVar11 + param_3 * 0x1e + 0x16) != 0 ||
         (*(short *)(uVar11 + (int)DAT_8c08f856 + param_3 * 0x1e + 0x16) != 0)) ||
        (*(short *)(uVar11 + (int)DAT_8c08f858 + param_3 * 0x1e + 0x16) != 0)))) {
      iVar13 = (int)DAT_8c08f85a;
      iVar17 = *(int *)((int)&local_20 + DAT_8c08f844 + iVar7);
      in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff);
      uVar1 = *(undefined1 *)(iVar17 + 0x1b);
      iVar8 = *(int *)(DAT_8c08f85c + iVar17);
      *(int *)(DAT_8c08f85c + iVar17) = iVar8 + 1;
      *(undefined1 *)(iVar17 + iVar13 + iVar8) = uVar1;
      *(undefined1 *)(iVar17 + 0x18) = 0;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(iVar17 + 0x14) = 0;
      }
      else {
        *(double *)(iVar17 + 0x14) = in_dr2;
      }
    }
    iVar13 = 0;
    if (0 < *(int *)((int)DAT_8c08f85c + *(int *)((int)&local_20 + DAT_8c08f844 + iVar7))) {
      *(int *)((int)&local_20 + DAT_8c08f972 + iVar7) =
           *(int *)((int)&local_20 + DAT_8c08f844 + iVar7) + (int)DAT_8c08f85a;
      do {
        iVar8 = (*(code *)PTR_FUN_8c08f984)(param_2);
        if (iVar8 == 0) break;
        puVar14 = (ushort *)
                  (*(int *)((int)DAT_8c08f976 + (int)param_2) +
                  (uint)*(byte *)(iVar13 + *(int *)((int)&local_20 + DAT_8c08f972 + iVar7)) * 0x74);
        if ((char)puVar14[5] == '\v') {
          *puVar14 = *puVar14 & 0xfffe;
        }
        else {
          if ((char)puVar14[5] == '\x0e') {
            uVar11 = param_2[4];
            iVar8 = uVar11 + (int)DAT_8c08fb02;
            if (0 < *(short *)(param_3 * 2 + iVar8)) {
              psVar15 = (short *)(iVar8 + param_3 * 2);
              iVar8 = (int)DAT_8c08fb04;
              sVar6 = *psVar15 + -1;
              *psVar15 = sVar6;
              *(undefined2 *)(uVar11 + iVar8 + param_3 * 8 + sVar6 * 2) = 0;
            }
          }
          *(int *)((int)&local_20 + DAT_8c08fb06 + iVar7) = iVar13;
          uVar11 = *(uint *)((int)&local_20 + DAT_8c08fb08 + iVar7);
          do {
            do {
              do {
                (*(code *)PTR_FUN_8c08fb1c)(param_2 + 0x11);
                iVar13 = (*(code *)PTR_FUN_8c08fb20)();
                *(int *)((int)&local_20 + DAT_8c08fb0c + iVar7) = iVar13 + 1;
                (*(code *)PTR_FUN_8c08fb1c)(param_2 + 0x11);
                iVar13 = (*(code *)PTR_FUN_8c08fb20)();
                *(int *)((int)&local_20 + DAT_8c08fb10 + iVar7) = iVar13 + 1;
                iVar13 = (*(code *)PTR_FUN_8c08fb24)
                                   (param_2,*(undefined4 *)((int)&local_20 + DAT_8c08fb0c + iVar7));
              } while (iVar13 == 0);
              iVar13 = *(int *)((int)&local_20 + DAT_8c08fb10 + iVar7);
              uVar16 = *(uint *)((int)&local_20 + DAT_8c08fb0c + iVar7);
              bVar2 = *(byte *)(param_2[8] * iVar13 + uVar16 +
                               *(int *)((int)DAT_8c08fb12 + (int)param_2));
              bVar3 = false;
              if ((3 < bVar2) && (bVar2 < 0x10)) {
                bVar3 = true;
              }
            } while (bVar3);
            if ((*param_2 & 2) == 0) {
              *(uint *)((int)&local_20 + DAT_8c08fc18 + iVar7) = uVar11;
              iVar13 = *(int *)((int)&local_20 + DAT_8c08fc1e + iVar7);
              *(undefined1 *)(puVar14 + 4) = 10;
              goto LAB_8c08fa88;
            }
            if ((int)uVar16 < 0x20) {
              *(int *)((int)&local_20 + DAT_8c08fb14 + iVar7) = (int)&local_20 + iVar13 * 4 + iVar7;
              uVar11 = uVar16;
            }
            else {
              *(int *)((int)&local_20 + DAT_8c08fc1a + iVar7) =
                   (int)&local_20 + (int)DAT_8c08fc1c + iVar13 * 4 + iVar7;
              uVar11 = uVar16 - 0x20;
            }
            if ((int)uVar11 < 0) {
              uVar9 = 1 >> (~uVar11 & 0x1f) + 1;
            }
            else {
              uVar9 = 1 << (uVar11 & 0x1f);
            }
          } while ((**(uint **)((int)&local_20 + DAT_8c08fb14 + iVar7) & uVar9) != 0);
          *(uint *)((int)&local_20 + DAT_8c08fb08 + iVar7) = uVar11;
          iVar13 = *(int *)((int)&local_20 + DAT_8c08fb06 + iVar7);
          *(undefined1 *)(puVar14 + 4) = 8;
LAB_8c08fa88:
          if (in_FPSCR_SZ == '\0') {
            puVar14[0xc] = 0;
            puVar14[0xd] = 0;
            param_1 = (double)CONCAT44(param_2[5],SUB84(param_1,0));
          }
          else {
            *(ulonglong *)(puVar14 + 0xc) = (ulonglong)in_dr2 & 0xffffffff;
            param_1 = *(double *)(param_2 + 5);
          }
          puVar4 = PTR_FUN_8c08fb28;
          if (in_FPSCR_PR == '\0') {
            in_dr2 = (double)CONCAT44(0xbf800000,SUB84(in_dr2,0));
            param_1 = (double)CONCAT44((float)((ulonglong)param_1 >> 0x20) + -1.0,SUB84(param_1,0));
          }
          else {
            in_dr2 = -(double)CONCAT44(0x3f800000,SUB84(in_dr2,0));
            param_1 = param_1 + in_dr2;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar14 + 10) = (int)((ulonglong)param_1 >> 0x20);
          }
          else {
            *(double *)(puVar14 + 10) = param_1;
          }
          (*(code *)puVar4)(uVar16 & 0xffff);
          (*(code *)PTR_FUN_8c08fb28)(*(undefined4 *)((int)&local_20 + DAT_8c08fb10 + iVar7));
          *(byte *)(puVar14 + 1) =
               ((byte)puVar14[1] & (byte)DAT_8c08fb16 | 0x10) & (byte)DAT_8c08fb18 | 8;
          if ((char)puVar14[5] == '\x0e') {
            uVar11 = param_2[4];
            iVar8 = uVar11 + (int)DAT_8c08fb02;
            if (0 < *(short *)(param_3 * 2 + iVar8)) {
              psVar15 = (short *)(iVar8 + param_3 * 2);
              iVar8 = (int)DAT_8c08fb04;
              sVar6 = *psVar15 + -1;
              *psVar15 = sVar6;
              *(undefined2 *)(uVar11 + iVar8 + param_3 * 8 + sVar6 * 2) = 0;
            }
          }
          puVar14[0x38] = 0;
          puVar14[0x39] = 0;
          if ((*param_2 & 2) == 0) {
            (*(code *)PTR_FUN_8c08fc2c)(param_2,puVar14);
          }
          else {
            uVar11 = *(uint *)((int)&local_20 + DAT_8c08fc18 + iVar7);
            if ((int)uVar11 < 0) {
              uVar11 = 1 >> (~uVar11 & 0x1f) + 1;
            }
            else {
              uVar11 = 1 << (uVar11 & 0x1f);
            }
            puVar10 = *(uint **)((int)&local_20 + DAT_8c08fc1a + iVar7);
            *puVar10 = *puVar10 | uVar11;
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)((int)DAT_8c08f97a + *(int *)((int)&local_20 + DAT_8c08f978 + iVar7)
                                ));
    }
    *(undefined4 *)((int)DAT_8c08f97a + *(int *)((int)&local_20 + DAT_8c08f978 + iVar7)) = 0;
    puVar12 = (undefined2 *)(param_2[4] + (int)DAT_8c08fc20 + param_3 * 0x1e);
    iVar7 = 0xf;
    do {
      iVar7 = iVar7 + -1;
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    } while (iVar7 != 0);
  }
  return;
}

