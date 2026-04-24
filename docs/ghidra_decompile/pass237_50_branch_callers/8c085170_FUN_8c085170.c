// entry: 8c085170
// name: FUN_8c085170
// signature: undefined FUN_8c085170(void)


/* WARNING: Removing unreachable block (ram,0x8c0852e6) */
/* WARNING: Removing unreachable block (ram,0x8c0852ec) */
/* WARNING: Removing unreachable block (ram,0x8c0854c2) */
/* WARNING: Removing unreachable block (ram,0x8c0854c8) */
/* WARNING: Removing unreachable block (ram,0x8c0855b6) */
/* WARNING: Removing unreachable block (ram,0x8c0855ac) */
/* WARNING: Removing unreachable block (ram,0x8c0855b2) */
/* WARNING: Removing unreachable block (ram,0x8c0854b4) */
/* WARNING: Removing unreachable block (ram,0x8c085686) */
/* WARNING: Removing unreachable block (ram,0x8c0852d8) */

void FUN_8c085170(undefined4 param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint in_fr3;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  char cVar16;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  puVar4 = PTR_FUN_8c085620;
  iVar10 = *(int *)(DAT_8c0852f4 + param_2) + DAT_8c0852f2 * param_3;
  uVar6 = (uint)*(byte *)(param_4 + 10);
  if (((uVar6 != 0) && (uVar6 != 1)) && (uVar6 != 2)) {
    if (((((uVar6 == 3) || (uVar6 == 4)) || ((uVar6 == 5 || ((uVar6 == 6 || (uVar6 == 7)))))) ||
        (uVar6 == 8)) || ((uVar6 == 9 || (uVar6 == 10)))) {
      iVar5 = (*(code *)PTR_FUN_8c085620)(param_4 + 9);
      bVar2 = *(byte *)(param_4 + 10);
      iVar9 = *(int *)(param_2 + 0x10);
      uVar6 = (uint)bVar2;
      if ((*(short *)(uVar6 * 2 + iVar9 + iVar5 * 0x1e) == 0) &&
         ((*(short *)(uVar6 * 2 + iVar9 + DAT_8c08561a + iVar5 * 0x1e) == 0 &&
          (*(short *)(uVar6 * 2 + iVar9 + DAT_8c085614 + iVar5 * 0x1e) == 0)))) {
        *(undefined1 *)(param_4 + 8) = 5;
        iVar5 = (*(code *)puVar4)();
        *(undefined2 *)
         (*(int *)(param_2 + 0x10) + (int)DAT_8c0856b6 + iVar5 * 0x1e + (uint)bVar2 * 2) = 1;
      }
      else {
        *(undefined1 *)(param_4 + 8) = 0xd;
      }
      goto LAB_8c085228;
    }
    if (uVar6 == 0xb) {
      if (*(char *)((int)DAT_8c08547a + *(int *)(param_2 + 4)) == '\x01') {
        iVar5 = (*(code *)PTR_FUN_8c085480)(param_4,&DAT_8c2856fc);
        iVar9 = *(int *)(param_2 + 0x10);
        if (((*(short *)(iVar9 + iVar5 * 0x1e + 0x16) != 0) ||
            (*(short *)(iVar9 + DAT_8c08547c + iVar5 * 0x1e + 0x16) != 0)) ||
           (*(short *)(iVar9 + DAT_8c085472 + iVar5 * 0x1e + 0x16) != 0)) {
          iVar5 = *(int *)(DAT_8c085478 + param_2) + *(char *)(iVar10 + 0x1b) * 0x74;
          *(undefined2 *)(iVar5 + 2) = *(undefined2 *)(iVar10 + 2);
          (*(code *)PTR_FUN_8c085484)(param_2,iVar5,0);
        }
      }
      *(char *)(iVar10 + 0x1b) = (char)*(undefined2 *)(param_4 + 4);
      iVar5 = (*(code *)PTR_FUN_8c085488)();
      puVar4 = PTR_FUN_8c085480;
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)iVar5,param_1);
      }
      else {
        dVar15 = (double)iVar5;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(DAT_8c08548c,in_fr3);
      }
      else {
        dVar13 = (double)CONCAT44(DAT_8c085490,DAT_8c08548c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) /
                                  (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 / dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(DAT_8c085490,SUB84(dVar13,0));
      }
      else {
        dVar13 = (double)CONCAT44(DAT_8c085494,DAT_8c085490);
      }
      if (in_FPSCR_PR == '\0') {
        cVar16 = (char)(int)((float)((ulonglong)dVar15 >> 0x20) * (float)((ulonglong)dVar13 >> 0x20)
                            );
      }
      else {
        cVar16 = (char)(int)(dVar15 * dVar13);
      }
      *(char *)(iVar10 + 0x18) = cVar16 + '\x01';
      if (in_FPSCR_SZ == '\0') {
        uVar14 = CONCAT44(DAT_8c085494,SUB84(dVar13,0));
        *(undefined4 *)(iVar10 + 0x14) = DAT_8c085494;
      }
      else {
        uVar14 = CONCAT44(PTR_FUN_8c085498,DAT_8c085494);
        *(undefined8 *)(iVar10 + 0x14) = uVar14;
      }
      in_fr3 = (uint)uVar14;
      *(undefined1 *)(param_4 + 8) = 5;
      uVar11 = (*(code *)puVar4)();
      (*(code *)PTR_FUN_8c085498)(*(undefined4 *)(param_2 + 0x10),uVar11,0xb,1,1);
      goto LAB_8c085228;
    }
    if ((uVar6 != 0xd) && (uVar6 != 0xe)) goto LAB_8c085228;
  }
  *(undefined1 *)(param_4 + 8) = 5;
  iVar5 = (*(code *)puVar4)();
  psVar8 = (short *)(*(int *)(param_2 + 0x10) + (int)DAT_8c08561a + iVar5 * 0x1e + uVar6 * 2);
  *psVar8 = *psVar8 + 1;
  if (uVar6 == 0xe) {
    iVar9 = *(int *)(param_2 + 0x10);
    iVar5 = (int)DAT_8c085618;
    psVar8 = (short *)(iVar9 + DAT_8c085616 + param_3 * 2);
    uVar11 = *(undefined4 *)(param_4 + 0xc);
    sVar1 = *psVar8;
    *psVar8 = sVar1 + 1;
    *(short *)(iVar9 + iVar5 + param_3 * 8 + sVar1 * 2) = (short)uVar11 + 0xe;
  }
LAB_8c085228:
  puVar4 = PTR_FUN_8c085300;
  if (*(char *)(param_4 + 10) != '\v') {
    if (*(char *)((int)DAT_8c0852f6 + *(int *)(param_2 + 4)) == '\x01') {
      iVar5 = (*(code *)PTR_FUN_8c085300)(param_4 + 9);
      iVar9 = *(int *)(param_2 + 0x10);
      if (((*(short *)(iVar9 + iVar5 * 0x1e + 0x16) != 0) ||
          (*(short *)(iVar9 + DAT_8c0852f8 + iVar5 * 0x1e + 0x16) != 0)) ||
         (*(short *)(iVar9 + DAT_8c0852fa + iVar5 * 0x1e + 0x16) != 0)) {
        iVar5 = *(int *)(DAT_8c0852fc + param_2) + *(char *)(iVar10 + 0x1b) * 0x74;
        *(undefined2 *)(iVar5 + 2) = *(undefined2 *)(iVar10 + 2);
        (*(code *)PTR_FUN_8c085304)(param_2,iVar5,0);
        *(undefined1 *)(iVar10 + 0x18) = 0;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(iVar10 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(iVar10 + 0x14) = (ulonglong)in_fr3;
        }
        iVar5 = (*(code *)puVar4)();
        *(undefined2 *)(*(int *)(param_2 + 0x10) + (int)DAT_8c0856b6 + iVar5 * 0x1e + 0x16) = 0;
      }
    }
    if (*(char *)(param_4 + 8) == '\x05') {
      uVar3 = *(undefined2 *)(param_4 + 4);
      iVar5 = (int)DAT_8c08561c;
      iVar9 = *(int *)(DAT_8c08561e + iVar10);
      *(int *)(DAT_8c08561e + iVar10) = iVar9 + 1;
      *(char *)(iVar10 + iVar5 + iVar9) = (char)uVar3;
    }
    else if (*(char *)(param_4 + 8) == '\r') {
      iVar5 = 0;
      iVar12 = *(int *)(DAT_8c085474 + iVar10);
      iVar9 = 0;
      if (0 < iVar12) {
        iVar7 = iVar10 + DAT_8c085476;
        do {
          if (*(char *)(*(int *)(DAT_8c085478 + param_2) + (uint)*(byte *)(iVar7 + iVar9) * 0x74 +
                       10) != *(char *)(param_4 + 10)) {
            *(undefined1 *)(iVar5 + iVar7) = *(undefined1 *)(iVar7 + iVar9);
            iVar5 = iVar5 + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar12);
      }
      *(char *)(iVar10 + DAT_8c085476 + iVar5) = (char)*(undefined2 *)(param_4 + 4);
    }
  }
  return;
}

