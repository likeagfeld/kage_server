// entry: 8c03b670
// name: FUN_8c03b670


void FUN_8c03b670(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  ushort *puVar14;
  char *pcVar15;
  undefined8 *puVar16;
  double dVar17;
  double dVar18;
  uint uVar19;
  undefined8 in_dr14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar16 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar16 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  *(int *)((int)puVar16 + -0x1c) = param_3;
  iVar5 = (*(code *)PTR_FUN_8c03b7f4)(*(undefined4 *)(*(int *)(param_3 + 0x58) + 4),3);
  puVar4 = PTR_FUN_8c03b7f8;
  uVar19 = (uint)in_dr14;
  if (iVar5 == 0) {
    cVar1 = *(char *)((int)DAT_8c03b7e0 + *(int *)((int)puVar16 + -0x1c));
    if (cVar1 == '\x01') {
      *(undefined4 *)((int)puVar16 + -0x18) = 0xffffffff;
      *(undefined4 *)((int)puVar16 + -0x14) = 0;
    }
    else if (cVar1 == '\x02') {
      *(undefined4 *)((int)puVar16 + -0x18) = 1;
      *(undefined4 *)((int)puVar16 + -0x14) = 0;
    }
    else if (cVar1 == '\x04') {
      *(undefined4 *)((int)puVar16 + -0x18) = 0;
      *(undefined4 *)((int)puVar16 + -0x14) = 0xffffffff;
    }
    else if (cVar1 == '\b') {
      *(undefined4 *)((int)puVar16 + -0x18) = 0;
      *(undefined4 *)((int)puVar16 + -0x14) = 1;
    }
    iVar12 = *(int *)((int)puVar16 + -0x1c);
    iVar8 = 0;
    iVar11 = *(int *)(DAT_8c03b7e2 + iVar12);
    uVar9 = (uint)*(ushort *)(iVar12 + 0x54);
    iVar5 = (*(code *)PTR_FUN_8c03b7f8)((int)DAT_8c03b7e4);
    *(int *)((int)puVar16 + -0x10) = iVar5 + *(int *)((int)puVar16 + -0x18);
    iVar5 = (*(code *)puVar4)((int)DAT_8c03b7e8);
    iVar5 = iVar5 + *(int *)((int)puVar16 + -0x14);
    iVar12 = *(int *)(DAT_8c03b7ea + iVar12);
    *(undefined4 *)((int)puVar16 + -0x24) = *(undefined4 *)(iVar11 + 0x28);
    *(int *)((int)puVar16 + -0xc) =
         (int)*(short *)(iVar12 + uVar9 * 0x1e + 2) +
         (int)*(short *)(iVar12 + DAT_8c03b7ec + uVar9 * 0x1e + 2) +
         (int)*(short *)(iVar12 + DAT_8c03b7ee + uVar9 * 0x1e + 2);
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(*(undefined4 *)(iVar11 + 0x18),param_1);
      dVar18 = (double)CONCAT44(DAT_8c03b800,param_2);
    }
    else {
      dVar17 = *(double *)(iVar11 + 0x18);
      dVar18 = (double)CONCAT44(PTR_FUN_8c03b804,DAT_8c03b800);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) +
                                (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 + dVar18;
    }
    dVar18 = dVar17;
    if (in_FPSCR_SZ == '\0') {
      dVar18 = (double)(ulonglong)uVar19;
    }
    iVar12 = (*(code *)PTR_FUN_8c03b7fc)(dVar17,iVar11,uVar9);
    if (0 < iVar12) {
      puVar10 = *(ushort **)((int)puVar16 + -8);
      do {
        iVar12 = (*(code *)PTR_FUN_8c03b804)
                           (*(undefined4 *)((int)DAT_8c03b7e2 + *(int *)((int)puVar16 + -0x1c)),
                            *(undefined4 *)((int)puVar16 + -0x10),iVar5);
        if (iVar12 == 0) {
          *(ushort **)((int)puVar16 + -8) = puVar10;
          goto LAB_8c03b882;
        }
        iVar11 = 8;
        iVar12 = *(int *)((int)DAT_8c03b7e2 + *(int *)((int)puVar16 + -0x1c));
        *(int *)((int)puVar16 + -0x20) = iVar12;
        puVar14 = *(ushort **)(DAT_8c03b7e6 + iVar12);
        iVar12 = (int)DAT_8c03b7e4;
        do {
          if (((((*(byte *)((int)puVar14 + 0xb) & 1) == 0) && ((puVar14[4] & 0x14) == 0)) &&
              ((*puVar14 & 1) != 0)) &&
             (iVar6 = (*(code *)PTR_FUN_8c03ba1c)(), iVar6 == *(int *)((int)puVar16 + -0x10))) {
            iVar6 = (*(code *)PTR_FUN_8c03ba1c)();
            uVar19 = SUB84(dVar17,0);
            if (iVar6 == iVar5) {
              iVar12 = *(int *)((int)puVar16 + -0x20);
              bVar3 = true;
              goto LAB_8c03b7a6;
            }
          }
          uVar19 = SUB84(dVar17,0);
          iVar11 = iVar11 + -1;
          puVar14 = (ushort *)((int)puVar14 + iVar12);
        } while (iVar11 != 0);
        iVar12 = *(int *)((int)puVar16 + -0x20);
        bVar3 = false;
LAB_8c03b7a6:
        if (bVar3) {
          *(ushort **)((int)puVar16 + -8) = puVar10;
          goto LAB_8c03b882;
        }
        if (iVar8 < *(int *)((int)puVar16 + -0x24)) {
          *(int *)((int)puVar16 + -0x28) = iVar5;
          puVar14 = (ushort *)(iVar8 * 0x88 + *(int *)(DAT_8c03b7f0 + iVar12));
          do {
            puVar10 = puVar14;
            if ((*puVar10 & 1) == 0) {
              iVar5 = *(int *)((int)puVar16 + -0x28);
              goto LAB_8c03b80e;
            }
            iVar8 = iVar8 + 1;
            puVar14 = (ushort *)((int)puVar10 + (int)DAT_8c03b7f2);
          } while (iVar8 < *(int *)((int)puVar16 + -0x24));
          iVar5 = *(int *)((int)puVar16 + -0x28);
        }
LAB_8c03b80e:
        iVar12 = *(int *)((int)puVar16 + -0x1c);
        iVar11 = *(int *)((int)puVar16 + -0x10);
        *(byte *)(puVar10 + 8) = (byte)puVar10[8] & (byte)DAT_8c03b964;
        uVar2 = *(undefined2 *)(iVar12 + 0x54);
        *(undefined4 *)((int)puVar16 + -0x30) = *(undefined4 *)((int)puVar16 + -0xc);
        uVar13 = *(undefined4 *)(DAT_8c03b966 + iVar12);
        *(undefined4 *)((int)puVar16 + -0x2c) = 0;
        *(int *)((int)puVar16 + -0x34) = iVar5;
        dVar17 = dVar18;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)(ulonglong)uVar19;
        }
        (*(code *)PTR_FUN_8c03b974)(dVar17,uVar13,iVar8,uVar2,iVar11);
        iVar12 = *(int *)(DAT_8c03b966 + iVar12);
        if (*(int *)((*(int *)(iVar12 + 0x20) * iVar5 + iVar11) * 4 +
                    *(int *)(DAT_8c03b968 + iVar12)) == 0) {
          iVar11 = *(int *)((int)puVar16 + -0x1c);
          uVar2 = *(undefined2 *)(iVar11 + 0x54);
          *(undefined4 *)((int)puVar16 + -0x34) = 0;
          (*(code *)PTR_FUN_8c03ba20)(iVar12,*(undefined4 *)((int)puVar16 + -0x10),iVar5,uVar2);
          iVar12 = *(int *)(DAT_8c03ba1a + iVar11);
        }
        *(int *)((int)puVar16 + -0x10) =
             *(int *)((int)puVar16 + -0x10) + *(int *)((int)puVar16 + -0x18);
        iVar5 = iVar5 + *(int *)((int)puVar16 + -0x14);
        iVar12 = (*(code *)PTR_FUN_8c03b978)
                           (iVar12,*(undefined2 *)(*(int *)((int)puVar16 + -0x1c) + 0x54));
      } while (0 < iVar12);
      *(ushort **)((int)puVar16 + -8) = puVar10;
    }
LAB_8c03b882:
    puVar4 = PTR_DAT_8c03b97c;
    if (PTR_DAT_8c03b97c[100] == '\0') {
      uVar13 = *DAT_8c03b990;
    }
    else {
      uVar13 = *DAT_8c03b980;
    }
    (*(code *)PTR_FUN_8c03b984)(uVar13,PTR_DAT_8c03b97c[0x65]);
    (*(code *)PTR_FUN_8c03b988)(uVar13,puVar4[0x66],puVar4[0x67],0);
    pcVar15 = puVar4 + DAT_8c03b96a;
    if (*pcVar15 == '\0') {
      uVar13 = *DAT_8c03b990;
    }
    else {
      uVar13 = *DAT_8c03b980;
    }
    (*(code *)PTR_FUN_8c03b984)(uVar13,pcVar15[1]);
    (*(code *)PTR_FUN_8c03b988)(uVar13,pcVar15[2],pcVar15[3],0);
    pcVar15 = puVar4 + DAT_8c03b96c;
    if (*pcVar15 == '\0') {
      uVar13 = *DAT_8c03b990;
    }
    else {
      uVar13 = *DAT_8c03b980;
    }
    (*(code *)PTR_FUN_8c03b984)(uVar13,pcVar15[1]);
    iVar12 = *(int *)((int)puVar16 + -0x1c);
    (*(code *)PTR_FUN_8c03b988)(uVar13,pcVar15[2],pcVar15[3],0);
    iVar5 = (int)DAT_8c03b96e;
    *(uint *)(iVar12 + 0x2c) = *(uint *)(iVar12 + 0x2c) & DAT_8c03b98c;
    piVar7 = (int *)(*(int *)(iVar12 + 0x28) + iVar5);
    (*(code *)piVar7[2])(iVar12 + *piVar7,0);
    *(undefined4 *)(DAT_8c03b970 + iVar12) = 0;
  }
  else {
    *(undefined4 *)((int)DAT_8c03b970 + *(int *)((int)puVar16 + -0x1c)) = 1;
  }
  return;
}

