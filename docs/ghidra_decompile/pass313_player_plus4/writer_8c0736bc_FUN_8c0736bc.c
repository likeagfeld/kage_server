// entry: 8c0736bc
// name: FUN_8c0736bc


void FUN_8c0736bc(double param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  char *pcVar15;
  undefined8 *puVar16;
  double dVar17;
  undefined8 in_dr14;
  double dVar18;
  bool bVar19;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar16 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar16 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  cVar1 = *(char *)(param_3 + 0x30);
  if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
    pcVar15 = PTR_DAT_8c0738e8 + DAT_8c0738e2;
    if (*pcVar15 == '\0') {
      uVar13 = *DAT_8c0738f8;
    }
    else {
      uVar13 = *DAT_8c0738ec;
    }
    (*(code *)PTR_FUN_8c0738f0)(uVar13,pcVar15[1]);
    (*(code *)PTR_FUN_8c0738f4)(uVar13,pcVar15[2],pcVar15[3],0);
  }
  else if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
    pcVar15 = PTR_DAT_8c073848 + DAT_8c07382c;
    cVar1 = *pcVar15;
    *(char **)((int)puVar16 + -0x18) = pcVar15;
    if (cVar1 == '\0') {
      *(undefined4 *)((int)puVar16 + -0x14) = *DAT_8c0738f8;
    }
    else {
      *(undefined4 *)((int)puVar16 + -0x14) = *DAT_8c07384c;
    }
    (*(code *)PTR_FUN_8c073850)(pcVar15[1]);
    (*(code *)PTR_FUN_8c073854)
              (*(undefined4 *)((int)puVar16 + -0x14),
               *(undefined1 *)(*(int *)((int)puVar16 + -0x18) + 2),
               *(undefined1 *)(*(int *)((int)puVar16 + -0x18) + 3),0);
  }
  puVar5 = PTR_FUN_8c073858;
  puVar4 = PTR_DAT_8c073848;
  uVar14 = (uint)in_dr14;
  bVar2 = *(byte *)(DAT_8c07382e + param_3);
  bVar3 = (byte)DAT_8c073830;
  *(undefined **)((int)puVar16 + -0x10) = PTR_DAT_8c073848;
  *(byte *)(DAT_8c07382e + param_3) = (bVar2 & 0x7f | bVar3) & (byte)DAT_8c073832 | 0x40;
  (*(code *)puVar5)((*(uint *)(DAT_8c073834 + param_3) & DAT_8c07385c) + 1,(int)DAT_8c073836);
  **(uint **)(DAT_8c073838 + param_3) = **(uint **)(DAT_8c073838 + param_3) | 0x20;
  if (puVar4[0x10] == '\0') {
    uVar13 = *DAT_8c0738f8;
  }
  else {
    uVar13 = *DAT_8c07384c;
  }
  dVar18 = (double)(ulonglong)uVar14;
  (*(code *)PTR_FUN_8c073850)(uVar13,puVar4[0x11]);
  uVar14 = 0;
  (*(code *)PTR_FUN_8c073854)(uVar13,puVar4[0x12],puVar4[0x13],0);
  iVar12 = 8;
  *(int *)((int)puVar16 + -0xc) = param_3 + DAT_8c07383a;
  *(int *)((int)puVar16 + -0x1c) = param_3 + DAT_8c07383c;
  iVar10 = param_3 + 0x3e;
  *(int *)((int)puVar16 + -0x20) = param_3 + DAT_8c07383e;
  do {
    if (*(char *)(iVar10 + uVar14) != '\x03') {
      iVar9 = (int)DAT_8c073842 * uVar14 +
              *(int *)((int)DAT_8c073840 + *(int *)(DAT_8c073838 + param_3));
      if ((*(byte *)(iVar9 + 8) & 4) == 0) {
        if ((int)uVar14 < 0) {
          uVar7 = 1 >> (~uVar14 & 0x1f) + 1;
        }
        else {
          uVar7 = 1 << (uVar14 & 0x1f);
        }
        if ((*(uint *)(DAT_8c073a06 + param_3) & uVar7) == 0) {
          dVar17 = dVar18;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = (double)((ulonglong)param_1 & 0xffffffff);
          }
          param_1 = dVar17;
          (*(code *)PTR_FUN_8c073a0c)
                    (*(int *)(*(int *)((int)puVar16 + -0xc) + uVar14 * 4) + 0x10,0xd);
        }
        else {
          iVar9 = *(int *)((int)puVar16 + -0xc);
          dVar17 = dVar18;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = (double)((ulonglong)param_1 & 0xffffffff);
          }
          uVar7 = SUB84(dVar17,0);
          (*(code *)PTR_FUN_8c073a0c)(*(int *)(iVar9 + uVar14 * 4) + 0x10,0xc);
          param_1 = dVar18;
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)(ulonglong)uVar7;
          }
          (*(code *)PTR_FUN_8c073a10)(*(undefined4 *)(iVar9 + uVar14 * 4));
          iVar6 = DAT_8c073a14;
          if ((*(int *)(*(int *)(iVar9 + uVar14 * 4) + 0x24) == 0) &&
             (*(short *)(*(int *)(*(int *)((int)puVar16 + -0xc) + uVar14 * 4) + 0x56) == 0)) {
            if (0 < **(short **)((int)puVar16 + -0x1c)) {
              *(int *)((int)puVar16 + -0x2c) = iVar12;
              *(int *)((int)puVar16 + -0x28) = iVar10;
              *(int *)((int)puVar16 + -0x24) = param_3;
              iVar12 = *(int *)((int)puVar16 + -0x20);
              psVar11 = *(short **)((int)puVar16 + -0x1c);
              iVar10 = 0;
              do {
                iVar9 = iVar10 + 1;
                pbVar8 = (byte *)(iVar6 + *(short *)(iVar10 * 2 + iVar12 + uVar14 * 8) + -0xe);
                *pbVar8 = *pbVar8 & 0x7f | bVar3;
                pbVar8 = (byte *)(iVar6 + *(short *)(iVar10 * 2 + iVar12 + uVar14 * 8) + -0xe);
                *pbVar8 = *pbVar8 & bVar3 | 1;
                iVar10 = iVar9;
              } while (iVar9 < *psVar11);
              param_3 = *(int *)((int)puVar16 + -0x24);
              iVar10 = *(int *)((int)puVar16 + -0x28);
              iVar12 = *(int *)((int)puVar16 + -0x2c);
            }
            pcVar15 = (char *)(*(int *)((int)puVar16 + -0x10) + (int)DAT_8c073a08);
            if (*pcVar15 == '\0') {
              uVar13 = *DAT_8c073a24;
            }
            else {
              uVar13 = *DAT_8c073a18;
            }
            (*(code *)PTR_FUN_8c073a1c)(uVar13,pcVar15[1]);
            (*(code *)PTR_FUN_8c073a20)(uVar13,pcVar15[2],pcVar15[3],0);
          }
        }
      }
      else if ((*(byte *)(iVar9 + 0x19) != 0) && (*(byte *)(iVar9 + 0x19) < 4)) {
        if (((int)*(char *)(*(int *)(*(int *)((int)puVar16 + -0xc) + uVar14 * 4) + 0x12) &
            (int)DAT_8c073844) == 4) {
          *(undefined1 *)(iVar9 + 0x19) = 0;
        }
        else {
          dVar17 = dVar18;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = (double)((ulonglong)param_1 & 0xffffffff);
          }
          param_1 = dVar17;
          (*(code *)PTR_FUN_8c0738fc)
                    (param_1,*(int *)(*(int *)((int)puVar16 + -0xc) + uVar14 * 4) + 0x10,0x13);
        }
      }
    }
    iVar12 = iVar12 + -1;
    uVar14 = uVar14 + 1;
  } while (iVar12 != 0);
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(*(undefined4 *)(*(int *)(DAT_8c073838 + param_3) + 0x14),(int)param_2)
    ;
  }
  else {
    dVar17 = *(double *)(*(int *)(DAT_8c073838 + param_3) + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    bVar19 = (float)((ulonglong)dVar18 >> 0x20) < (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    bVar19 = dVar18 < dVar17;
  }
  if (!bVar19) {
    iVar12 = param_3 + DAT_8c073b62;
    iVar10 = *(int *)(*(int *)(iVar12 + 8) + 0x28);
    iVar10 = (**(code **)(iVar10 + 0x80))(*(int *)(iVar12 + 8) + *(int *)(iVar10 + 0x78));
    if (iVar10 == 0) {
      cVar1 = *(char *)(param_3 + 0x30);
      if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
        cVar1 = *(char *)(*(int *)((int)puVar16 + -0x10) + (int)DAT_8c073b66);
        *(char **)((int)puVar16 + -0x10) =
             (char *)(*(int *)((int)puVar16 + -0x10) + (int)DAT_8c073b66);
        if (cVar1 == '\0') {
          *(undefined4 *)((int)puVar16 + -8) = *DAT_8c073b8c;
        }
        else {
          *(undefined4 *)((int)puVar16 + -8) = *DAT_8c073b7c;
        }
        (*(code *)PTR_FUN_8c073b80)(*(undefined1 *)(*(int *)((int)puVar16 + -0x10) + 1));
        (*(code *)PTR_FUN_8c073b84)
                  (*(undefined4 *)((int)puVar16 + -8),
                   *(undefined1 *)(*(int *)((int)puVar16 + -0x10) + 2),
                   *(undefined1 *)(*(int *)((int)puVar16 + -0x10) + 3),0);
      }
      else if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
        cVar1 = *(char *)(*(int *)((int)puVar16 + -0x10) + (int)DAT_8c073b64);
        *(char **)((int)puVar16 + -0x10) =
             (char *)(*(int *)((int)puVar16 + -0x10) + (int)DAT_8c073b64);
        if (cVar1 == '\0') {
          *(undefined4 *)((int)puVar16 + -0x14) = *DAT_8c073b8c;
        }
        else {
          *(undefined4 *)((int)puVar16 + -0x14) = *DAT_8c073b7c;
        }
        iVar10 = *(int *)((int)puVar16 + -0x10);
        (*(code *)PTR_FUN_8c073b80)(*(undefined1 *)(iVar10 + 1));
        (*(code *)PTR_FUN_8c073b84)
                  (*(undefined4 *)((int)puVar16 + -0x14),*(undefined1 *)(iVar10 + 2),
                   *(undefined1 *)(iVar10 + 3),0);
      }
      (*(code *)PTR_FUN_8c073b88)(*(undefined4 *)(iVar12 + 8));
    }
  }
  (*(code *)PTR_FUN_8c0738e4)(*(undefined4 *)(DAT_8c0738e0 + param_3));
  return;
}

