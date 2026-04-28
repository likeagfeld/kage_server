// entry: 8c03bff8
// name: FUN_8c03bff8


void FUN_8c03bff8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  ushort *puVar15;
  char *pcVar16;
  undefined8 *puVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  undefined8 in_dr14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  puVar4 = PTR_FUN_8c03c180;
  if (in_FPSCR_SZ == '\0') {
    puVar17 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar17 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar17 + -4) = in_PR;
  *(int *)((int)puVar17 + -0x20) = param_3;
  cVar1 = *(char *)(DAT_8c03c168 + param_3);
  if (cVar1 == '\x01') {
    *(undefined4 *)((int)puVar17 + -0x1c) = 0xffffffff;
    *(undefined4 *)((int)puVar17 + -0x18) = 0;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)((int)puVar17 + -0x1c) = 1;
    *(undefined4 *)((int)puVar17 + -0x18) = 0;
  }
  else if (cVar1 == '\x04') {
    *(undefined4 *)((int)puVar17 + -0x1c) = 0;
    *(undefined4 *)((int)puVar17 + -0x18) = 0xffffffff;
  }
  else if (cVar1 == '\b') {
    *(undefined4 *)((int)puVar17 + -0x1c) = 0;
    *(undefined4 *)((int)puVar17 + -0x18) = 1;
  }
  iVar13 = *(int *)((int)puVar17 + -0x20);
  iVar12 = *(int *)(DAT_8c03c16a + iVar13);
  uVar10 = (uint)*(ushort *)(iVar13 + 0x54);
  iVar7 = (*(code *)PTR_FUN_8c03c180)((int)DAT_8c03c16c);
  uVar20 = (uint)in_dr14;
  *(int *)((int)puVar17 + -0x14) = iVar7 + *(int *)((int)puVar17 + -0x1c);
  iVar7 = (*(code *)puVar4)();
  iVar7 = iVar7 + *(int *)((int)puVar17 + -0x18);
  iVar13 = *(int *)(DAT_8c03c172 + iVar13);
  *(undefined4 *)((int)puVar17 + -0x10) = 0;
  *(undefined4 *)((int)puVar17 + -0x28) = *(undefined4 *)(iVar12 + 0x28);
  *(int *)((int)puVar17 + -0xc) =
       (int)*(short *)(iVar13 + uVar10 * 0x1e + 2) +
       (int)*(short *)(iVar13 + DAT_8c03c174 + uVar10 * 0x1e + 2) +
       (int)*(short *)(iVar13 + DAT_8c03c176 + uVar10 * 0x1e + 2);
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)(iVar12 + 0x18),param_1);
    dVar19 = (double)CONCAT44(DAT_8c03c184,param_2);
  }
  else {
    dVar18 = *(double *)(iVar12 + 0x18);
    dVar19 = (double)CONCAT44(PTR_FUN_8c03c188,DAT_8c03c184);
  }
  if (in_FPSCR_PR == '\0') {
    dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) +
                              (float)((ulonglong)dVar19 >> 0x20),SUB84(dVar18,0));
  }
  else {
    dVar18 = dVar18 + dVar19;
  }
  dVar19 = dVar18;
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)(ulonglong)uVar20;
  }
  iVar13 = (*(code *)PTR_FUN_8c03c188)(dVar18,iVar12,uVar10);
  if (0 < iVar13) {
    puVar11 = *(ushort **)((int)puVar17 + -8);
    do {
      iVar13 = (*(code *)PTR_FUN_8c03c18c)
                         (*(undefined4 *)((int)DAT_8c03c16a + *(int *)((int)puVar17 + -0x20)),
                          *(undefined4 *)((int)puVar17 + -0x14),iVar7);
      if (iVar13 == 0) {
        *(ushort **)((int)puVar17 + -8) = puVar11;
        goto LAB_8c03c1fc;
      }
      iVar12 = 8;
      iVar13 = *(int *)((int)DAT_8c03c16a + *(int *)((int)puVar17 + -0x20));
      *(int *)((int)puVar17 + -0x24) = iVar13;
      puVar15 = *(ushort **)(DAT_8c03c16e + iVar13);
      iVar13 = (int)DAT_8c03c16c;
      do {
        if (((((*(byte *)((int)puVar15 + 0xb) & 1) == 0) && ((puVar15[4] & 0x14) == 0)) &&
            ((*puVar15 & 1) != 0)) &&
           (iVar8 = (*(code *)PTR_FUN_8c03c3b0)(), iVar8 == *(int *)((int)puVar17 + -0x14))) {
          iVar8 = (*(code *)PTR_FUN_8c03c3b0)();
          uVar10 = SUB84(dVar18,0);
          if (iVar8 == iVar7) {
            iVar13 = *(int *)((int)puVar17 + -0x24);
            bVar3 = true;
            goto LAB_8c03c11a;
          }
        }
        uVar10 = SUB84(dVar18,0);
        iVar12 = iVar12 + -1;
        puVar15 = (ushort *)((int)puVar15 + iVar13);
      } while (iVar12 != 0);
      iVar13 = *(int *)((int)puVar17 + -0x24);
      bVar3 = false;
LAB_8c03c11a:
      if (bVar3) {
        *(ushort **)((int)puVar17 + -8) = puVar11;
        goto LAB_8c03c1fc;
      }
      if (*(int *)((int)puVar17 + -0x10) < *(int *)((int)puVar17 + -0x28)) {
        iVar13 = *(int *)(DAT_8c03c178 + iVar13);
        *(int *)((int)puVar17 + -0x2c) = iVar7;
        puVar15 = (ushort *)(*(int *)((int)puVar17 + -0x10) * 0x88 + iVar13);
        do {
          puVar11 = puVar15;
          if ((*puVar11 & 1) == 0) {
            iVar7 = *(int *)((int)puVar17 + -0x2c);
            goto LAB_8c03c160;
          }
          iVar7 = *(int *)((int)puVar17 + -0x10);
          *(int *)((int)puVar17 + -0x10) = iVar7 + 1;
          puVar15 = (ushort *)((int)puVar11 + (int)DAT_8c03c17a);
        } while (iVar7 + 1 < *(int *)((int)puVar17 + -0x28));
        iVar7 = *(int *)((int)puVar17 + -0x2c);
      }
LAB_8c03c160:
      iVar13 = *(int *)((int)puVar17 + -0x20);
      uVar9 = *(undefined4 *)((int)puVar17 + -0x10);
      *(byte *)(puVar11 + 8) = (byte)puVar11[8] & (byte)DAT_8c03c17c;
      uVar2 = *(undefined2 *)(iVar13 + 0x54);
      *(undefined4 *)((int)puVar17 + -0x34) = *(undefined4 *)((int)puVar17 + -0xc);
      uVar14 = *(undefined4 *)(DAT_8c03c2e2 + iVar13);
      *(undefined4 *)((int)puVar17 + -0x30) = 0;
      iVar12 = *(int *)((int)puVar17 + -0x14);
      *(int *)((int)puVar17 + -0x38) = iVar7;
      dVar18 = dVar19;
      if (in_FPSCR_SZ == '\0') {
        dVar18 = (double)(ulonglong)uVar10;
      }
      (*(code *)PTR_FUN_8c03c2ec)(dVar18,uVar14,uVar9,uVar2,iVar12);
      iVar13 = *(int *)(DAT_8c03c2e2 + iVar13);
      if (*(int *)((*(int *)(iVar13 + 0x20) * iVar7 + iVar12) * 4 + *(int *)(DAT_8c03c2e4 + iVar13))
          == 0) {
        iVar12 = *(int *)((int)puVar17 + -0x20);
        uVar2 = *(undefined2 *)(iVar12 + 0x54);
        *(undefined4 *)((int)puVar17 + -0x38) = 0;
        (*(code *)PTR_FUN_8c03c304)(iVar13,*(undefined4 *)((int)puVar17 + -0x14),iVar7,uVar2);
        iVar13 = *(int *)(DAT_8c03c2e2 + iVar12);
      }
      *(int *)((int)puVar17 + -0x14) =
           *(int *)((int)puVar17 + -0x14) + *(int *)((int)puVar17 + -0x1c);
      iVar7 = iVar7 + *(int *)((int)puVar17 + -0x18);
      iVar13 = (*(code *)PTR_FUN_8c03c2f0)
                         (iVar13,*(undefined2 *)(*(int *)((int)puVar17 + -0x20) + 0x54));
    } while (0 < iVar13);
    *(ushort **)((int)puVar17 + -8) = puVar11;
  }
LAB_8c03c1fc:
  puVar6 = PTR_FUN_8c03c300;
  puVar5 = PTR_FUN_8c03c2fc;
  puVar4 = PTR_DAT_8c03c2f4;
  if (PTR_DAT_8c03c2f4[100] == '\0') {
    uVar14 = *DAT_8c03c308;
  }
  else {
    uVar14 = *DAT_8c03c2f8;
  }
  (*(code *)PTR_FUN_8c03c2fc)(uVar14,PTR_DAT_8c03c2f4[0x65]);
  (*(code *)puVar6)(uVar14,puVar4[0x66],puVar4[0x67],0);
  pcVar16 = puVar4 + DAT_8c03c2e6;
  if (*pcVar16 == '\0') {
    uVar14 = *DAT_8c03c308;
  }
  else {
    uVar14 = *DAT_8c03c2f8;
  }
  (*(code *)puVar5)(uVar14,pcVar16[1]);
  (*(code *)puVar6)(uVar14,pcVar16[2],pcVar16[3],0);
  pcVar16 = puVar4 + DAT_8c03c2e8;
  if (*pcVar16 == '\0') {
    uVar14 = *DAT_8c03c308;
  }
  else {
    uVar14 = *DAT_8c03c2f8;
  }
  (*(code *)puVar5)(uVar14,pcVar16[1]);
  (*(code *)puVar6)(uVar14,pcVar16[2],pcVar16[3],0);
  return;
}

