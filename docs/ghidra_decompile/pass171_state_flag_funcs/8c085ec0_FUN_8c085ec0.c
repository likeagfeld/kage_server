// entry: 8c085ec0
// name: FUN_8c085ec0
// signature: undefined FUN_8c085ec0(void)


/* WARNING: Removing unreachable block (ram,0x8c08612c) */

undefined4 FUN_8c085ec0(uint *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  uint extraout_fr3;
  uint extraout_fr3_00;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 in_dr14;
  double dVar17;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  puVar3 = PTR_FUN_8c085fac;
  if (in_FPSCR_SZ == '\0') {
    puVar14 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar14 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar14 + -4) = in_PR;
  iVar5 = (*(code *)PTR_FUN_8c085fac)();
  uVar16 = (undefined4)in_dr14;
  uVar6 = (*(code *)puVar3)();
  puVar3 = PTR_FUN_8c085fb0;
  *(undefined4 *)((int)puVar14 + -0x20) = uVar6;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(param_2 + 0x68) = 0;
  }
  else {
    *(ulonglong *)(param_2 + 0x68) = (ulonglong)extraout_fr3;
  }
  iVar7 = (*(code *)puVar3)(param_1,iVar5,uVar6);
  puVar4 = PTR_FUN_8c086194;
  puVar3 = PTR_FUN_8c085fac;
  if (iVar7 != 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(param_1[0x10],*(undefined4 *)(iVar7 + 0xc));
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0x10);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar15 < (float)((ulonglong)uVar15 >> 0x20)) {
      *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xf | 0x30;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(param_2 + 0x14) = 0;
      }
      else {
        *(ulonglong *)(param_2 + 0x14) = (ulonglong)extraout_fr3_00;
      }
      iVar5 = (*(code *)puVar3)();
      *(uint *)((int)puVar14 + -0x1c) = param_1[8] * iVar5;
      iVar5 = (*(code *)puVar3)();
      puVar3 = PTR_FUN_8c085fac;
      if (*(int *)((*(int *)((int)puVar14 + -0x1c) + iVar5) * 4 +
                  *(int *)((int)DAT_8c085fa2 + (int)param_1)) != param_2) {
        iVar5 = (*(code *)PTR_FUN_8c085fac)();
        *(uint *)((int)puVar14 + -0x18) = param_1[8] * iVar5;
        iVar5 = (*(code *)puVar3)();
        *(int *)((*(int *)((int)puVar14 + -0x18) + iVar5) * 4 +
                *(int *)((int)DAT_8c085fa2 + (int)param_1)) = param_2;
      }
      *(undefined4 *)((int)puVar14 + -0x24) = 1;
      (*(code *)PTR_FUN_8c085fb4)(param_1,param_2,0,0);
      return 0;
    }
  }
  if (*(int *)((param_1[8] * *(int *)((int)puVar14 + -0x20) + iVar5) * 4 +
              *(int *)((int)DAT_8c0860f4 + (int)param_1)) != 0) {
    if (((*param_1 & 2) == 0) ||
       ((((-1 < iVar5 && (iVar5 < (int)param_1[8])) && (-1 < *(int *)((int)puVar14 + -0x20))) &&
        (*(int *)((int)puVar14 + -0x20) < (int)param_1[9])))) {
      iVar7 = *(int *)((param_1[8] * *(int *)((int)puVar14 + -0x20) + iVar5) * 4 +
                      *(int *)((int)DAT_8c0860f4 + (int)param_1));
    }
    else {
      iVar7 = 0;
    }
    if (((*(char *)(iVar7 + 8) == '\x03') && ((*param_1 & 1) != 0)) &&
       (*(char *)(iVar7 + 8) != '\x04')) {
      cVar2 = *(char *)(iVar7 + 10);
      if ((cVar2 == '\r') ||
         ((cVar2 == '\v' && (*(char *)((int)DAT_8c0860f6 + param_1[1]) == '\x01')))) {
        if (*(char *)(iVar7 + 8) != '\a') {
          uVar8 = (*(code *)PTR_FUN_8c086190)(param_1 + 0x11);
          *(int *)((int)puVar14 + -0x14) = 1 << (uVar8 & 3);
          *(int *)((int)puVar14 + -0x10) = iVar7 + 2;
          iVar12 = (*(code *)puVar4)();
          *(uint *)((int)puVar14 + -0xc) = param_1[8] * iVar12;
          iVar12 = (*(code *)puVar4)(6);
          if (*(int *)((*(int *)((int)puVar14 + -0xc) + iVar12) * 4 +
                      *(int *)((int)DAT_8c08618a + (int)param_1)) == iVar7) {
            (*(code *)PTR_FUN_8c08619c)(param_1,iVar7);
          }
          *(undefined4 *)((int)puVar14 + -0x24) = 0;
          (*(code *)PTR_FUN_8c086198)(param_1,iVar7,*(undefined4 *)((int)puVar14 + -0x14),1);
        }
      }
      else {
        *(undefined1 *)(iVar7 + 8) = 4;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(iVar7 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(iVar7 + 0x18) = (ulonglong)extraout_fr3_00;
        }
        if (cVar2 == '\v') {
          *(uint *)((int)param_1 + (int)DAT_8c08618c) =
               *(uint *)((int)param_1 + (int)DAT_8c08618c) | 0x10;
        }
        else {
          *(uint *)((int)param_1 + (int)DAT_8c0860f8) =
               *(uint *)((int)param_1 + (int)DAT_8c0860f8) | 8;
        }
      }
    }
  }
  if (in_FPSCR_PR == '\0') {
    dVar17 = (double)CONCAT44(0x40000000,uVar16);
  }
  else {
    dVar17 = (double)CONCAT44(0x3f800000,uVar16) + (double)CONCAT44(0x3f800000,uVar16);
  }
  iVar13 = 0;
  iVar7 = (int)DAT_8c0860f0;
  iVar12 = 8;
  do {
    bVar9 = false;
    puVar10 = (ushort *)(*(int *)((int)DAT_8c0860f2 + (int)param_1) + iVar7 * iVar13);
    bVar1 = *(byte *)((int)puVar10 + 0xb);
    *(ushort **)((int)puVar14 + -8) = puVar10;
    if (((bVar1 & 1) == 0) && ((*puVar10 & 0x14) != 0)) {
      bVar9 = true;
    }
    if (((bVar9) || (iVar11 = (*(code *)PTR_FUN_8c0860fc)(puVar10 + 1), iVar11 != iVar5)) ||
       (iVar11 = (*(code *)PTR_FUN_8c0860fc)(), iVar11 != *(int *)((int)puVar14 + -0x20))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      iVar11 = *(int *)((int)DAT_8c0860f2 + (int)param_1) + iVar7 * iVar13;
      if ((*(byte *)(iVar11 + 8) & 0x84) == 0) {
        *(byte *)(iVar11 + 8) = *(byte *)(iVar11 + 8) | 0x20;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(iVar11 + 0xc) = (int)((ulonglong)dVar17 >> 0x20);
        }
        else {
          *(double *)(iVar11 + 0xc) = dVar17;
        }
      }
      (*(code *)PTR_FUN_8c086100)(param_1,iVar13);
    }
    iVar12 = iVar12 + -1;
    iVar13 = iVar13 + 1;
  } while (iVar12 != 0);
  return 1;
}

