// entry: 8c06a91e
// name: FUN_8c06a91e
// signature: undefined FUN_8c06a91e(void)


void FUN_8c06a91e(ulonglong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9,
                 int param_10,int param_11,int param_12,int param_13)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 uVar4;
  int in_r0;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  code *in_r2;
  int iVar8;
  undefined4 unaff_r8;
  int iVar9;
  int iVar10;
  int unaff_r14;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 in_xd14;
  char in_FPSCR_SZ;
  
  (*in_r2)(*(undefined4 *)(in_r0 + unaff_r14));
  iVar5 = (int)DAT_8c06a9b4;
  *(undefined4 *)(*(int *)(iVar5 + unaff_r14) + 0x10) = unaff_r8;
  (*(code *)PTR_FUN_8c06a9c8)(*(undefined4 *)(iVar5 + unaff_r14));
  (*(code *)PTR_FUN_8c06a9cc)(*(undefined4 *)(DAT_8c06a9b4 + unaff_r14));
  puVar2 = PTR_FUN_8c06a9d0;
  iVar5 = *(int *)((int)DAT_8c06a9b6 + *(int *)(DAT_8c06a9b4 + unaff_r14));
  iVar11 = 4;
  (**(code **)(iVar5 + 0x5c))
            (*(int *)(DAT_8c06a9b4 + unaff_r14) + *(int *)(iVar5 + 0x54),
             *(char *)(DAT_8c06a9b8 + unaff_r14) == '\x01');
  iVar10 = 0;
  iVar5 = (int)DAT_8c06a9ba;
  (*(code *)PTR_FUN_8c06a9d4)(*(undefined4 *)(DAT_8c06a9b4 + param_11));
  do {
    (*(code *)puVar2)(*(int *)(DAT_8c06a9b0 + param_11) + iVar10 + 0x48);
    iVar3 = param_11;
    iVar11 = iVar11 + -1;
    iVar10 = iVar10 + iVar5;
  } while (iVar11 != 0);
  if (in_FPSCR_SZ == '\0') {
    param_6 = 0;
  }
  else {
    param_7._0_2_ = 0;
    param_7._2_2_ = 0;
    param_6 = param_2;
  }
  iVar12 = 0;
  iVar10 = 8;
  iVar11 = param_11 + DAT_8c06a9bc;
  param_13 = param_11 + DAT_8c06a9a2;
  uVar15 = 0x3f800000;
  iVar5 = (int)DAT_8c06ab7c;
  param_4 = param_6;
  param_5 = param_6;
  do {
    iVar9 = *(int *)((int)DAT_8c06ab82 + *(int *)(DAT_8c06ab80 + iVar3)) + DAT_8c06ab7e * iVar12;
    if (*(int *)(iVar11 + iVar12 * 4) != 0) {
      uVar14 = uVar15;
      if (in_FPSCR_SZ == '\0') {
        uVar14 = param_1 & 0xffffffff;
      }
      uVar13 = (uint)uVar14;
      (*(code *)PTR_FUN_8c06ab94)(uVar14,*(int *)(iVar11 + iVar12 * 4) + 0x10,0);
      puVar2 = PTR_FUN_8c06ab98;
      param_12 = iVar9;
      (*(code *)PTR_FUN_8c06ab9c)(param_13,*(undefined2 *)(*(int *)(iVar11 + iVar12 * 4) + 0x54),1);
      (*(code *)PTR_FUN_8c06aba0)(*(undefined4 *)(DAT_8c06ab80 + iVar3),iVar12);
      param_3 = (undefined2)param_7;
      (*(code *)PTR_FUN_8c06aba4)
                (*(undefined4 *)((int)DAT_8c06ab86 + *(int *)(DAT_8c06ab84 + iVar3)),&param_3,
                 &param_4,&param_6);
      (*(code *)PTR_FUN_8c06aba8)(*(undefined4 *)(iVar11 + iVar12 * 4),&param_4);
      iVar7 = (int)(uVar15 >> 0x20);
      param_10 = iVar7;
      if (in_FPSCR_SZ != '\0') {
        param_8 = (int)uVar15;
        param_10 = param_8;
        param_11 = iVar7;
      }
      param_8 = param_10;
      param_9 = param_10;
      (*(code *)PTR_FUN_8c06abac)(*(undefined4 *)(iVar11 + iVar12 * 4),&param_8);
      param_8 = (int)uVar15;
      param_10 = param_8;
      if (in_FPSCR_SZ != '\0') {
        param_11 = (int)((ulonglong)in_xd14 >> 0x20);
        param_8 = (int)in_xd14;
        param_10 = param_11;
      }
      param_9 = param_10;
      (*(code *)PTR_FUN_8c06abb0)(*(undefined4 *)(iVar11 + iVar12 * 4),&param_8);
      uVar4 = DAT_8c06ab88;
      iVar7 = (int)DAT_8c06ab8c;
      *(undefined4 *)((int)DAT_8c06ab8a + *(int *)(iVar11 + iVar12 * 4)) =
           *(undefined4 *)(DAT_8c06ab80 + iVar3);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(iVar9 + 0x28) = (int)uVar15;
      }
      else {
        *(undefined8 *)(iVar9 + 0x28) = in_xd14;
      }
      *(undefined2 *)(iVar9 + 2) = param_3;
      *(byte *)(iVar9 + 8) = *(byte *)(iVar9 + 8) & (byte)uVar4;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(iVar9 + 0x20) = (int)(uVar15 >> 0x20);
      }
      else {
        *(ulonglong *)(iVar9 + 0x20) = uVar15;
      }
      (*(code *)puVar2)(*(int *)(iVar11 + iVar12 * 4) + iVar7,0,4);
      (*(code *)puVar2)(*(int *)(iVar11 + iVar12 * 4) + (int)DAT_8c06ab8e,0,4);
      *(undefined2 *)(*(int *)(iVar11 + iVar12 * 4) + (int)DAT_8c06ab8c) = param_3;
      param_1 = uVar15;
      if (in_FPSCR_SZ == '\0') {
        param_1 = (ulonglong)uVar13;
      }
      *(undefined2 *)(*(int *)(iVar11 + iVar12 * 4) + (int)DAT_8c06ab8e) = param_3;
      *(undefined1 *)((int)DAT_8c06ab90 + *(int *)(iVar11 + iVar12 * 4)) = 8;
      (*(code *)PTR_FUN_8c06abb4)(*(undefined4 *)(iVar11 + iVar12 * 4));
      (*(code *)PTR_FUN_8c06abb8)(*(undefined4 *)(iVar11 + iVar12 * 4),0);
      iVar9 = param_12;
      iVar8 = 3;
      iVar7 = 0;
      do {
        iVar8 = iVar8 + -1;
        *(undefined4 *)(*(int *)(iVar12 * 4 + iVar11) + iVar5 + iVar7 + 0x1c) = 0;
        iVar7 = iVar7 + 0x30;
      } while (iVar8 != 0);
      (*(code *)PTR_FUN_8c06acdc)
                (*(undefined4 *)(DAT_8c06ab80 + iVar3),iVar12,
                 *(int *)(iVar11 + iVar12 * 4) + (int)DAT_8c06ab8c,
                 *(int *)(iVar11 + iVar12 * 4) + (int)DAT_8c06acd4);
      cVar1 = *(char *)(iVar3 + 0x3e + iVar12);
      if (cVar1 == '\0') {
        if (*(int *)(iVar3 + 0x24) == 3) {
          uVar6 = (*(code *)PTR_FUN_8c06ace0)(*(undefined4 *)(DAT_8c06acd6 + iVar3),7,0xe,0);
          (*(code *)PTR_FUN_8c06ace4)(*(undefined4 *)(iVar11 + iVar12 * 4),6,uVar6);
        }
        *(undefined2 *)(iVar9 + 0x1e) = 1;
        *(undefined2 *)(iVar9 + 0x1c) = 1;
      }
      else if (cVar1 == '\x01') {
        *(undefined2 *)(iVar9 + 0x1e) = 1;
        *(undefined2 *)(iVar9 + 0x1c) = 1;
      }
      else if (cVar1 == '\x02') {
        uVar4 = (undefined2)**(undefined4 **)((int)DAT_8c06acd8 + *(int *)(iVar11 + iVar12 * 4));
        *(undefined2 *)(iVar9 + 0x1e) = uVar4;
        *(undefined2 *)(iVar9 + 0x1c) = uVar4;
        (*(code *)PTR_FUN_8c06ace8)(*(undefined4 *)(iVar11 + iVar12 * 4));
      }
    }
    iVar10 = iVar10 + -1;
    iVar12 = iVar12 + 1;
  } while (iVar10 != 0);
  return;
}

