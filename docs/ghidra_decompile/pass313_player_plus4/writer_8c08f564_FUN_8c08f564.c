// entry: 8c08f564
// name: FUN_8c08f564


/* WARNING: Removing unreachable block (ram,0x8c08f64e) */
/* WARNING: Removing unreachable block (ram,0x8c08f648) */
/* WARNING: Removing unreachable block (ram,0x8c08f6a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c08f564(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  undefined4 in_fr3;
  double dVar10;
  double dVar11;
  uint uVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar6 = *(int *)(DAT_8c08f5a2 + param_2) + DAT_8c08f5a0 * param_3;
  if (*(int *)(DAT_8c08f5a4 + iVar6) != 0) {
    iVar3 = (int)DAT_8c08f6be;
    iVar5 = *(int *)(DAT_8c08f5a4 + iVar6) + -1;
    *(int *)(DAT_8c08f6c0 + iVar6) = iVar5;
    iVar5 = *(int *)(DAT_8c08f6c2 + param_2) + (uint)*(byte *)(iVar5 + iVar6 + iVar3) * 0x74;
    iVar3 = (*(code *)PTR__rand_8c08f6cc)(iVar6,&DAT_8c2856fc);
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44((float)iVar3,param_1);
    }
    else {
      dVar11 = (double)iVar3;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(DAT_8c08f6d0,in_fr3);
    }
    else {
      dVar10 = (double)CONCAT44(DAT_8c08f6d4,DAT_8c08f6d0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) /
                                (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
    }
    else {
      dVar11 = dVar11 / dVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(DAT_8c08f6d4,SUB84(dVar10,0));
    }
    else {
      dVar10 = (double)CONCAT44(_FUN_8c08f6d8,DAT_8c08f6d4);
    }
    *(undefined4 *)(iVar5 + 0x70) = 0;
    uVar2 = (uint)*(byte *)(iVar5 + 10);
    if (in_FPSCR_PR == '\0') {
      uVar12 = (uint)((float)((ulonglong)dVar11 >> 0x20) * (float)((ulonglong)dVar10 >> 0x20));
    }
    else {
      uVar12 = (uint)(dVar11 * dVar10);
    }
    if ((int)uVar12 < 0) {
      iVar3 = 1 >> (~uVar12 & 0x1f) + 1;
    }
    else {
      iVar3 = 1 << (uVar12 & 0x1f);
    }
    if (uVar2 == 0xe) {
      iVar7 = *(int *)(param_2 + 0x10);
      iVar8 = iVar7 + DAT_8c08f6c4;
      if (0 < *(short *)(param_3 * 2 + iVar8)) {
        psVar9 = (short *)(iVar8 + param_3 * 2);
        iVar8 = (int)DAT_8c08f6c6;
        sVar4 = *psVar9 + -1;
        *psVar9 = sVar4;
        bVar1 = *(byte *)(iVar5 + 10);
        *(undefined2 *)(iVar7 + iVar8 + param_3 * 8 + sVar4 * 2) = 0;
        uVar2 = (uint)bVar1;
      }
    }
    psVar9 = (short *)(*(int *)(param_2 + 0x10) + (int)DAT_8c08f6ca + param_3 * 0x1e + uVar2 * 2);
    *psVar9 = *psVar9 + -1;
    FUN_8c08e990(param_2,iVar5,iVar3,1,iVar6 + 0x10,psVar9);
  }
  return;
}

