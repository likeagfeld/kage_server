// entry: 8c03e1f0
// name: FUN_8c03e1f0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c03e1f0(undefined4 param_1,int param_2)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_fr1;
  uint in_fr3;
  double dVar8;
  float fVar9;
  double dVar10;
  float fVar12;
  undefined8 uVar11;
  bool bVar13;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  puVar2 = PTR__rand_8c03e34c;
  dVar8 = (double)(ulonglong)in_fr3;
  iVar6 = *(int *)((int)DAT_8c03e33e + *(int *)(DAT_8c03e33a + param_2)) +
          (int)DAT_8c03e33c * (uint)*(ushort *)(param_2 + 0x54);
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x20),param_1);
  }
  else {
    dVar10 = *(double *)(iVar6 + 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    bVar13 = 0.0 < (float)((ulonglong)dVar10 >> 0x20);
  }
  else {
    bVar13 = dVar8 < dVar10;
  }
  if (!bVar13) {
    sVar1 = *(short *)(DAT_8c03e340 + param_2);
    if (sVar1 == 2) {
      *(undefined2 *)(DAT_8c03e340 + param_2) = 0;
      iVar6 = (*(code *)puVar2)();
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((float)iVar6,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)iVar6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c03e350,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)CONCAT44(DAT_8c03e354,DAT_8c03e350);
      }
      if (in_FPSCR_PR == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) /
                                  (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 / dVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)CONCAT44(DAT_8c03e354,SUB84(dVar8,0));
      }
      else {
        dVar8 = (double)CONCAT44(PTR_DAT_8c03e358,DAT_8c03e354);
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = (float)((ulonglong)dVar10 >> 0x20) * (float)((ulonglong)dVar8 >> 0x20);
        dVar10 = (double)CONCAT44(fVar12,SUB84(dVar10,0));
        iVar6 = (int)fVar12;
      }
      else {
        dVar10 = dVar10 * dVar8;
        iVar6 = (int)dVar10;
      }
      iVar6 = *(int *)(PTR_DAT_8c03e358 + iVar6 * 4);
      *(int *)(DAT_8c03e342 + param_2) = iVar6;
      puVar3 = PTR__rand_8c03e47c;
      puVar2 = PTR_DAT_8c03e35c;
      uVar4 = SUB84(dVar10,0);
      if (((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 2)) {
        *(undefined2 *)(DAT_8c03e344 + param_2) = 0;
        *(undefined2 *)(DAT_8c03e340 + param_2) = 7;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(*(undefined4 *)(*(int *)(DAT_8c03e33a + param_2) + 0x18),uVar4);
          dVar8 = (double)CONCAT44(DAT_8c03e368,SUB84(dVar8,0));
        }
        else {
          dVar10 = *(double *)(*(int *)(DAT_8c03e33a + param_2) + 0x18);
          dVar8 = (double)CONCAT44(uRam8c03e36c,DAT_8c03e368);
        }
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) +
                                    (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar10,0));
        }
        else {
          dVar10 = dVar10 + dVar8;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(DAT_8c03e34a + param_2) = (int)((ulonglong)dVar10 >> 0x20);
        }
        else {
          *(double *)(DAT_8c03e34a + param_2) = dVar10;
        }
      }
      else if (((iVar6 == 3) || (iVar6 == 4)) || (iVar6 == 5)) {
        *(undefined2 *)(DAT_8c03e46e + param_2) = 0;
        *(undefined2 *)(DAT_8c03e470 + param_2) = 8;
        if (in_FPSCR_SZ == '\0') {
          uVar7 = *(undefined4 *)(*(int *)(DAT_8c03e472 + param_2) + 0x18);
          uVar11 = CONCAT44(uVar7,uVar4);
          local_c = CONCAT44(in_PR,uVar7);
        }
        else {
          uVar11 = *(undefined8 *)(*(int *)(DAT_8c03e472 + param_2) + 0x18);
          local_c = uVar11;
        }
        uVar4 = (undefined4)uVar11;
        iVar6 = (*(code *)puVar3)();
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)CONCAT44((float)iVar6,extraout_fr1);
        }
        else {
          dVar10 = (double)iVar6;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(DAT_8c03e480,SUB84(dVar8,0));
          local_c = CONCAT44((undefined4)local_c,uVar4);
        }
        else {
          dVar8 = (double)CONCAT44(DAT_8c03e484,DAT_8c03e480);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = (float)((ulonglong)dVar10 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar12 = (float)((ulonglong)(dVar10 / dVar8) >> 0x20);
        }
        fVar9 = _DAT_8c03e488;
        if (in_FPSCR_SZ == '\0') {
          fVar9 = DAT_8c03e484;
        }
        if (in_FPSCR_PR == '\0') {
          local_c = CONCAT44(fVar12 * fVar9 + (float)((ulonglong)local_c >> 0x20),(int)local_c);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(DAT_8c03e474 + param_2) = (int)((ulonglong)local_c >> 0x20);
        }
        else {
          *(undefined8 *)(DAT_8c03e474 + param_2) = local_c;
        }
      }
      else if (iVar6 == 6) {
        iVar6 = (int)DAT_8c03e346;
        uVar7 = *(undefined4 *)(PTR_DAT_8c03e35c + 4);
        *(short *)(DAT_8c03e344 + param_2) = *(short *)(DAT_8c03e344 + param_2) + 1;
        puVar5 = (undefined4 *)(param_2 + iVar6);
        iVar6 = (int)DAT_8c03e348;
        *puVar5 = *(undefined4 *)puVar2;
        uVar4 = *(undefined4 *)(puVar2 + 8);
        puVar5[1] = uVar7;
        puVar5[2] = uVar4;
        *(undefined4 *)(iVar6 + param_2) = 1;
      }
      else {
        *(short *)(DAT_8c03e46e + param_2) = *(short *)(DAT_8c03e46e + param_2) + 1;
        *(undefined2 *)(DAT_8c03e470 + param_2) = 6;
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(*(undefined4 *)(*(int *)(DAT_8c03e472 + param_2) + 0x18),uVar4);
          dVar8 = (double)CONCAT44(_DAT_8c03e488,SUB84(dVar8,0));
        }
        else {
          dVar10 = *(double *)(*(int *)(DAT_8c03e472 + param_2) + 0x18);
          dVar8 = (double)CONCAT44(PTR_DAT_8c03e48c,_DAT_8c03e488);
        }
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) +
                                    (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar10,0));
        }
        else {
          dVar10 = dVar10 + dVar8;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(DAT_8c03e474 + param_2) = (int)((ulonglong)dVar10 >> 0x20);
        }
        else {
          *(double *)(DAT_8c03e474 + param_2) = dVar10;
        }
      }
      puVar2 = PTR_DAT_8c03e360;
      if (2 < *(short *)(DAT_8c03e344 + param_2)) {
        *(undefined2 *)(DAT_8c03e344 + param_2) = 0;
        uVar4 = *(undefined4 *)puVar2;
        puVar5 = (undefined4 *)(param_2 + DAT_8c03e346);
        *(undefined4 *)(DAT_8c03e342 + param_2) = 5;
        uVar7 = *(undefined4 *)(puVar2 + 4);
        *puVar5 = uVar4;
        uVar4 = *(undefined4 *)(puVar2 + 8);
        iVar6 = (int)DAT_8c03e348;
        puVar5[1] = uVar7;
        *(undefined4 *)(iVar6 + param_2) = 1;
        puVar5[2] = uVar4;
      }
    }
    else {
      if (sVar1 != 3) {
        if (sVar1 != 4) {
          if (sVar1 != 5) {
            uRam8c03e36c = 0xe300907f;
            return;
          }
          *(undefined2 *)(DAT_8c03e340 + param_2) = 0;
          return;
        }
        *(undefined4 *)(DAT_8c03e342 + param_2) = 2;
      }
      puVar2 = PTR_DAT_8c03e364;
      uVar4 = *(undefined4 *)PTR_DAT_8c03e364;
      puVar5 = (undefined4 *)(param_2 + DAT_8c03e346);
      *(undefined2 *)(DAT_8c03e340 + param_2) = 0;
      uVar7 = *(undefined4 *)(puVar2 + 4);
      *puVar5 = uVar4;
      uVar4 = *(undefined4 *)(puVar2 + 8);
      iVar6 = (int)DAT_8c03e348;
      puVar5[1] = uVar7;
      *(undefined4 *)(iVar6 + param_2) = 1;
      puVar5[2] = uVar4;
    }
  }
                    /* WARNING: Read-only address (ram,0x8c03e36c) is written */
  return;
}

