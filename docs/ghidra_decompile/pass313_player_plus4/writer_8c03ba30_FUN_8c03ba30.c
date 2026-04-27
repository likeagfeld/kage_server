// entry: 8c03ba30
// name: FUN_8c03ba30


void FUN_8c03ba30(ulonglong param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  double dVar18;
  float fVar19;
  double in_dr12;
  double dVar20;
  double dVar21;
  undefined8 in_xd12;
  ulonglong in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_60 [15];
  undefined1 local_24 [16];
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  puVar5 = PTR_FUN_8c03bbec;
  uVar7 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_c = (double)CONCAT44(uVar7,(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = SUB84(in_dr12,0);
    puVar16 = auStack_14;
  }
  else {
    puVar16 = local_24;
    uStack_c = in_dr12;
  }
  *(undefined4 *)(puVar16 + -4) = in_PR;
  iVar13 = 0;
  iVar14 = *(int *)(DAT_8c03bbca + param_3);
  iVar15 = *(int *)(iVar14 + 0x28);
  iVar8 = 0;
  if (0 < iVar15) {
    do {
      puVar9 = (ushort *)(*(int *)(DAT_8c03bbcc + iVar14) + iVar8 * 0x88);
      if ((*puVar9 & 1) == 0) {
        *(ushort **)(puVar16 + iVar13 * 4 + -0x3c) = puVar9;
        *(int *)(puVar16 + iVar13 * 4 + -0x2c) = iVar8;
        iVar13 = iVar13 + 1;
        iVar14 = *(int *)(DAT_8c03bcba + param_3);
        if (iVar13 == 4) break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar15);
  }
  iVar13 = 4;
  uVar12 = *(undefined4 *)(PTR_DAT_8c03bbe4 + 4);
  *(undefined4 *)(puVar16 + -0x1c) = *(undefined4 *)PTR_DAT_8c03bbe4;
  *(undefined4 *)(puVar16 + -0x18) = uVar12;
  uVar12 = *(undefined4 *)(PTR_DAT_8c03bbe4 + 0xc);
  *(undefined4 *)(puVar16 + -0x14) = *(undefined4 *)(PTR_DAT_8c03bbe4 + 8);
  *(undefined4 *)(puVar16 + -0x10) = uVar12;
  uVar10 = (uint)*(ushort *)(param_3 + 0x54);
  uVar12 = 0;
  *(undefined2 *)(puVar16 + -0xc) =
       *(undefined2 *)(*(int *)(DAT_8c03bbce + iVar14) + (int)DAT_8c03bbd0 * uVar10 + 2);
  iVar8 = *(int *)(DAT_8c03bbd6 + param_3);
  sVar2 = *(short *)(iVar8 + uVar10 * 0x1e + 2);
  sVar3 = *(short *)(iVar8 + DAT_8c03bbd4 + uVar10 * 0x1e + 2);
  sVar4 = *(short *)(iVar8 + DAT_8c03bbd8 + uVar10 * 0x1e + 2);
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c03bbe8,param_2);
  }
  else {
    dVar18 = *(double *)PTR_DAT_8c03bbe8;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr12 = (double)CONCAT44(uVar7,*(undefined4 *)(iVar14 + 0x18));
  }
  else {
    in_xd12 = *(undefined8 *)(iVar14 + 0x18);
  }
  iVar8 = 0;
  if (in_FPSCR_PR == '\0') {
    fVar19 = SUB84(in_dr12,0) + (float)((ulonglong)dVar18 >> 0x20);
  }
  else {
    fVar19 = SUB84(in_dr12 + dVar18,0);
  }
  uVar7 = (*(code *)PTR_FUN_8c03bbec)(dVar18);
  *(undefined4 *)(puVar16 + -8) = uVar7;
  uVar6 = (*(code *)puVar5)();
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44((undefined4)DAT_8c03bbf0,fVar19);
    dVar21 = (double)CONCAT44(DAT_8c03bbf0._4_4_,uVar12);
  }
  else {
    dVar20 = (double)CONCAT44(DAT_8c03bbf0._4_4_,(undefined4)DAT_8c03bbf0);
    dVar21 = (double)CONCAT44(PTR_FUN_8c03bbf8,DAT_8c03bbf0._4_4_);
  }
  do {
    uVar12 = SUB84(dVar18,0);
    uVar1 = *(undefined2 *)(param_3 + 0x54);
    *(int *)(puVar16 + -0x44) = (int)sVar2 + (int)sVar3 + (int)sVar4;
    uVar7 = *(undefined4 *)(DAT_8c03bbca + param_3);
    uVar17 = in_xd12;
    if (in_FPSCR_SZ == '\0') {
      uVar17 = CONCAT44(SUB84(dVar20,0),(int)param_1);
    }
    uVar11 = *(undefined4 *)(puVar16 + iVar8 * 4 + -0x2c);
    *(undefined4 *)(puVar16 + -0x48) = *(undefined4 *)(puVar16 + -8);
    *(undefined4 *)(puVar16 + -0x40) = 0;
    iVar15 = iVar8 * 4;
    (*(code *)PTR_FUN_8c03bbf8)(uVar17,uVar7,uVar11,uVar1,uVar6);
    uVar7 = DAT_8c03bc00;
    puVar5 = PTR___bfswu_8c03bbfc;
    uVar10 = (uint)uVar17;
    *(byte *)(*(int *)(puVar16 + iVar8 * 4 + -0x3c) + 0x11) =
         *(byte *)(*(int *)(puVar16 + iVar8 * 4 + -0x3c) + 0x11) & (byte)DAT_8c03bbda;
    *(ushort *)(*(int *)(puVar16 + iVar8 * 4 + -0x3c) + 0x10) =
         *(ushort *)(*(int *)(puVar16 + iVar8 * 4 + -0x3c) + 0x10) & (ushort)uVar7 | DAT_8c03bbdc;
    (*(code *)puVar5)(*(uint *)(puVar16 + iVar8 * 4 + -0x1c) & 0xffff,4);
    *(byte *)(*(int *)(puVar16 + iVar8 * 4 + -0x3c) + 0x10) =
         *(byte *)(*(int *)(puVar16 + iVar8 * 4 + -0x3c) + 0x10) & (byte)DAT_8c03bbde | 1;
    iVar14 = (*(code *)PTR__rand_8c03bc04)();
    if (in_FPSCR_PR == '\0') {
      dVar18 = (double)CONCAT44((float)iVar14,uVar12);
    }
    else {
      dVar18 = (double)iVar14;
    }
    if (in_FPSCR_PR == '\0') {
      fVar19 = ((float)((ulonglong)dVar18 >> 0x20) / (float)((ulonglong)dVar20 >> 0x20)) *
               (float)((ulonglong)dVar21 >> 0x20);
      dVar18 = (double)CONCAT44(fVar19,SUB84(dVar18,0));
      iVar14 = (int)fVar19;
    }
    else {
      dVar18 = (dVar18 / dVar20) * dVar21;
      iVar14 = (int)dVar18;
    }
    (*(code *)PTR___bfswu_8c03bbfc)
              (iVar14 + 1U & 0xffff,*(int *)(puVar16 + iVar8 * 4 + -0x3c) + 0x10);
    (*(code *)PTR_FUN_8c03bcc0)
              (*(undefined4 *)(DAT_8c03bcba + param_3),*(undefined4 *)(puVar16 + iVar8 * 4 + -0x3c))
    ;
    uVar7 = (*(code *)PTR_FUN_8c03bcc4)(4);
    iVar8 = iVar8 + 1;
    uVar12 = (*(code *)PTR_FUN_8c03bcc4)((int)DAT_8c03bcbc);
    param_1 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      param_1 = (ulonglong)uVar10;
    }
    uVar11 = *(undefined4 *)(DAT_8c03bcba + param_3);
    *(undefined4 *)(puVar16 + -0x48) = 0;
    (*(code *)PTR_FUN_8c03bcc8)(uVar11,*(undefined4 *)(puVar16 + iVar15 + -0x3c),uVar7,uVar12);
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  return;
}

