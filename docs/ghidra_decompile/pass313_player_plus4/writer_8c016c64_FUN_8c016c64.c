// entry: 8c016c64
// name: FUN_8c016c64


void FUN_8c016c64(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  bool bVar15;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar5 = DAT_8c016d24;
  puVar9 = *(uint **)(DAT_8c016d0e + param_1);
  uVar10 = (uint)*(ushort *)(param_1 + 0x54);
  iVar8 = *(int *)((int)DAT_8c016d12 + (int)puVar9) + (int)DAT_8c016d10 * uVar10;
  if ((*puVar9 & 4) == 0) {
    iVar3 = 1;
    if (((*(byte *)(param_2 + 3) & 0x20) != 0) && ((*(byte *)(param_3 + 3) & 0x20) != 0)) {
      iVar3 = 4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c016d1c,0x3f800000);
    }
    else {
      dVar13 = *(double *)PTR_DAT_8c016d1c;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (float)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(fVar14,SUB84(dVar13,0) / fVar14);
    }
    else {
      dVar13 = dVar13 / dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar12 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c016d20 + iVar3 * 4),0x3f800000);
    }
    else {
      dVar12 = *(double *)(PTR_DAT_8c016d20 + iVar3 * 4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) * SUB84(dVar13,0),SUB84(dVar12,0)
                               );
    }
    else {
      dVar12 = dVar12 * dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c016d14 + param_1) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      *(double *)(DAT_8c016d14 + param_1) = dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(DAT_8c016d16 + param_1),
                                *(undefined4 *)(iVar5 + 0x34));
    }
    else {
      dVar13 = *(double *)(DAT_8c016d16 + param_1);
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) + SUB84(dVar13,0),SUB84(dVar13,0)
                               );
    }
    else {
      dVar13 = dVar13 + dVar13;
    }
    fVar14 = (float)((ulonglong)dVar13 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(float *)(DAT_8c016d16 + param_1) = fVar14;
    }
    else {
      *(double *)(DAT_8c016d16 + param_1) = dVar13;
    }
    if ((*(byte *)(param_2 + 3) & 0x10) != 0) {
      iVar5 = 0x40;
      iVar3 = (int)DAT_8c016d1a;
      puVar6 = *(ushort **)((int)DAT_8c016d18 + (int)puVar9);
      do {
        if (((*puVar6 & 1) != 0) && (((int)*(char *)((int)puVar6 + 9) & 0xfU) == uVar10)) {
          return;
        }
        iVar5 = iVar5 + -1;
        puVar6 = (ushort *)((int)puVar6 + iVar3);
      } while (iVar5 != 0);
      if (in_FPSCR_PR == '\0') {
        bVar15 = fVar14 < SUB84(dVar12,0);
      }
      else {
        bVar15 = dVar13 < dVar12;
      }
      if (!bVar15) {
        iVar5 = (*(code *)PTR_FUN_8c016e50)(puVar9,uVar10);
        uVar4 = SUB84(dVar13,0);
        if (iVar5 != 0) {
          (*(code *)PTR_FUN_8c016e54)
                    (*(undefined4 *)(DAT_8c016e48 + param_1),*(undefined2 *)(param_1 + 0x54),
                     *(undefined1 *)(DAT_8c016e4a + param_1),param_2,3);
          iVar5 = 0x40;
          puVar6 = *(ushort **)((int)DAT_8c016e4c + *(int *)(DAT_8c016e48 + param_1));
          do {
            if (((*puVar6 & 1) != 0) &&
               (((short)*(char *)((int)puVar6 + 9) & 0xfU) == *(ushort *)(param_1 + 0x54))) break;
            iVar5 = iVar5 + -1;
            puVar6 = (ushort *)((int)puVar6 + iVar3);
          } while (iVar5 != 0);
          iVar5 = (*(code *)PTR_FUN_8c016e58)(*(undefined4 *)(param_1 + 0x58));
          uVar7 = *(undefined4 *)(iVar5 + 0x84);
          if (in_FPSCR_SZ == '\0') {
            uVar11 = CONCAT44(*(undefined4 *)(iVar5 + 0x80),uVar4);
          }
          else {
            uVar11 = CONCAT44(local_18,*(undefined4 *)(iVar5 + 0x80));
          }
          uVar4 = *(undefined4 *)(iVar5 + 0x88);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar6 + 0x32) = (int)((ulonglong)uVar11 >> 0x20);
            dVar13 = (double)CONCAT44(uVar7,DAT_8c016e5c);
            pcVar1 = (code *)PTR_FUN_8c016e60;
          }
          else {
            *(undefined8 *)(puVar6 + 0x32) = uVar11;
            dVar13 = (double)CONCAT44(local_14,uVar7);
            pcVar1 = (code *)PTR_FUN_8c016e60;
          }
          if (in_FPSCR_PR == '\0') {
            dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) + SUB84(dVar13,0),
                                      SUB84(dVar13,0));
          }
          else {
            dVar13 = dVar13 + dVar13;
          }
          PTR_FUN_8c016e60 = pcVar1;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar6 + 0x34) = (int)((ulonglong)dVar13 >> 0x20);
            uVar11 = CONCAT44(uVar4,SUB84(dVar13,0));
            *(undefined4 *)(puVar6 + 0x36) = uVar4;
          }
          else {
            *(double *)(puVar6 + 0x34) = dVar13;
            uVar11 = CONCAT44(local_10,uVar4);
            *(undefined8 *)(puVar6 + 0x36) = uVar11;
          }
          uVar10 = (uint)uVar11;
          (*pcVar1)(*(undefined4 *)(DAT_8c016e48 + param_1),puVar6 + 0x32,puVar6 + 0x36);
          if (in_FPSCR_SZ == '\0') {
            uVar11 = CONCAT44(*(undefined4 *)(puVar6 + 0x32),*(undefined4 *)(puVar6 + 0x36));
          }
          else {
            uVar11 = *(undefined8 *)(puVar6 + 0x32);
          }
          (*(code *)PTR_FUN_8c016e64)(uVar11,*(undefined4 *)(DAT_8c016e48 + param_1),puVar6 + 1);
          uVar7 = (undefined4)uVar11;
          uVar4 = (*(code *)PTR_FUN_8c016e68)();
          if (in_FPSCR_SZ == '\0') {
            uVar11 = CONCAT44(DAT_8c016e70,uVar7);
          }
          else {
            uVar11 = CONCAT44(PTR_DAT_8c016e74,DAT_8c016e70);
          }
          (*(code *)PTR_FUN_8c016e6c)
                    (uVar11,*(undefined4 *)(DAT_8c016e48 + param_1),puVar6,uVar4,3,param_2);
          puVar2 = PTR_DAT_8c016e74;
          if (PTR_DAT_8c016e74[0x14] == '\0') {
            local_c = *DAT_8c016e84;
          }
          else {
            local_c = *DAT_8c016e78;
          }
          (*(code *)PTR_FUN_8c016e7c)(PTR_DAT_8c016e74[0x15]);
          (*(code *)PTR_FUN_8c016e80)(local_c,puVar2[0x16],puVar2[0x17],0);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(iVar8 + 0xc) = 0;
          }
          else {
            *(ulonglong *)(iVar8 + 0xc) = (ulonglong)uVar10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(DAT_8c016e4e + param_1) = 0;
          }
          else {
            *(ulonglong *)(DAT_8c016e4e + param_1) = (ulonglong)uVar10;
          }
        }
      }
    }
  }
  return;
}

