// entry: 8c04cc68
// name: FUN_8c04cc68
// signature: undefined FUN_8c04cc68(void)


void FUN_8c04cc68(undefined4 param_1,uint param_2,uint *param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort *puVar4;
  double in_dr2;
  undefined8 uVar5;
  double dVar6;
  float fVar8;
  double dVar7;
  undefined8 in_xd6;
  undefined8 in_xd8;
  uint uVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar1 = *(int *)((int)DAT_8c04cde6 + (int)param_3);
  if ((iVar1 != 0) && (*(int *)(DAT_8c04cde8 + iVar1) != 0)) {
    (*(code *)PTR_FUN_8c04cdf4)(iVar1);
    puVar2 = *(ushort **)((int)DAT_8c04cde6 + (int)param_3);
    if ((*puVar2 & 4) != 0) {
      puVar4 = *(ushort **)((int)DAT_8c04cde8 + (int)puVar2);
      (*(code *)PTR_FUN_8c04cdf8)(puVar2);
      uVar3 = *puVar4;
      if ((uVar3 & DAT_8c04cdea) == 0) {
        if (in_FPSCR_SZ == '\0') {
          param_3[7] = *(uint *)(puVar2 + 0xc);
          param_3[8] = *(uint *)(puVar2 + 0xe);
          uVar5 = CONCAT44(*(uint *)(puVar2 + 0x10),param_2);
          param_3[9] = *(uint *)(puVar2 + 0x10);
        }
        else {
          *(undefined8 *)(param_3 + 7) = *(undefined8 *)(puVar2 + 0xc);
          *(undefined8 *)(param_3 + 8) = *(undefined8 *)(puVar2 + 0xe);
          uVar5 = *(undefined8 *)(puVar2 + 0x10);
          *(undefined8 *)(param_3 + 9) = uVar5;
        }
        param_2 = (uint)uVar5;
        uVar3 = *puVar4;
      }
      if ((uVar3 & DAT_8c04cdec) == 0) {
        if (in_FPSCR_SZ == '\0') {
          param_3[10] = *(uint *)(puVar2 + 0x12);
          param_3[0xb] = *(uint *)(puVar2 + 0x14);
          uVar5 = CONCAT44(*(uint *)(puVar2 + 0x16),param_2);
          param_3[0xc] = *(uint *)(puVar2 + 0x16);
        }
        else {
          *(undefined8 *)(param_3 + 10) = *(undefined8 *)(puVar2 + 0x12);
          *(undefined8 *)(param_3 + 0xb) = *(undefined8 *)(puVar2 + 0x14);
          uVar5 = *(undefined8 *)(puVar2 + 0x16);
          *(undefined8 *)(param_3 + 0xc) = uVar5;
        }
        param_2 = (uint)uVar5;
        uVar3 = *puVar4;
      }
      if ((uVar3 & DAT_8c04cdee) == 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(puVar2 + 0x18),param_2);
          dVar7 = (double)CONCAT44((undefined4)DAT_8c04cdfc,SUB84(in_dr2,0));
        }
        else {
          dVar6 = *(double *)(puVar2 + 0x18);
          dVar7 = (double)CONCAT44(DAT_8c04cdfc._4_4_,(undefined4)DAT_8c04cdfc);
        }
        if (in_FPSCR_PR == '\0') {
          dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) *
                                   (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar6,0));
        }
        else {
          dVar6 = dVar6 * dVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr2 = (double)CONCAT44(DAT_8c04cdfc._4_4_,SUB84(dVar7,0));
        }
        else {
          in_dr2 = (double)CONCAT44(uRam8c04ce04,DAT_8c04cdfc._4_4_);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = (float)((ulonglong)dVar6 >> 0x20) / (float)((ulonglong)in_dr2 >> 0x20);
          dVar6 = (double)CONCAT44(fVar8,SUB84(dVar6,0));
          uVar9 = (uint)fVar8;
        }
        else {
          dVar6 = dVar6 / in_dr2;
          uVar9 = (uint)dVar6;
        }
        param_2 = SUB84(dVar6,0);
        param_3[0xd] = uVar9;
        uVar3 = *puVar4;
      }
      if ((uVar3 & DAT_8c04cdf0) == 0) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(puVar2 + 0x1a),param_2);
          dVar7 = (double)CONCAT44((undefined4)DAT_8c04cdfc,SUB84(in_dr2,0));
        }
        else {
          dVar6 = *(double *)(puVar2 + 0x1a);
          dVar7 = (double)CONCAT44(DAT_8c04cdfc._4_4_,(undefined4)DAT_8c04cdfc);
        }
        if (in_FPSCR_PR == '\0') {
          dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) *
                                   (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar6,0));
        }
        else {
          dVar6 = dVar6 * dVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c04cdfc._4_4_,SUB84(dVar7,0));
        }
        else {
          dVar7 = (double)CONCAT44(uRam8c04ce04,DAT_8c04cdfc._4_4_);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = (float)((ulonglong)dVar6 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20);
          dVar6 = (double)CONCAT44(fVar8,SUB84(dVar6,0));
          uVar9 = (uint)fVar8;
        }
        else {
          dVar6 = dVar6 / dVar7;
          uVar9 = (uint)dVar6;
        }
        param_2 = SUB84(dVar6,0);
        param_3[0xe] = uVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        param_2 = param_3[7];
        param_3[1] = param_2;
        dVar6 = (double)CONCAT44(param_3[8],param_1);
      }
      else {
        in_xd8 = *(undefined8 *)(param_3 + 7);
        *(undefined8 *)(param_3 + 1) = in_xd8;
        dVar6 = *(double *)(param_3 + 8);
      }
      uVar9 = (uint)((ulonglong)dVar6 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        param_3[2] = uVar9;
        dVar6 = (double)CONCAT44(uVar9,param_3[9]);
      }
      else {
        *(double *)(param_3 + 2) = dVar6;
        in_xd6 = *(undefined8 *)(param_3 + 9);
      }
      *param_3 = *param_3 | 2;
      if (in_FPSCR_SZ == '\0') {
        param_3[3] = SUB84(dVar6,0);
        dVar7 = (double)CONCAT44(param_3[10],param_2);
      }
      else {
        *(undefined8 *)(param_3 + 3) = in_xd6;
        dVar7 = *(double *)(param_3 + 10);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        param_3[4] = (uint)fVar8;
        dVar7 = (double)CONCAT44(param_3[0xb],fVar8);
      }
      else {
        *(undefined8 *)(param_3 + 4) = in_xd8;
        dVar7 = *(double *)(param_3 + 0xb);
      }
      if (in_FPSCR_PR == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                                 (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        param_3[5] = (uint)((ulonglong)dVar6 >> 0x20);
        dVar7 = (double)CONCAT44(param_3[0xc],SUB84(dVar7,0));
      }
      else {
        *(double *)(param_3 + 5) = dVar6;
        dVar7 = *(double *)(param_3 + 0xc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar6,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar6 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        param_3[6] = (uint)fVar8;
      }
      else {
        *(undefined8 *)(param_3 + 6) = in_xd6;
      }
    }
  }
  return;
}

