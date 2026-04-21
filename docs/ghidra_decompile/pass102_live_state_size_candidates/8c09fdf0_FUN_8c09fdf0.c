// entry: 8c09fdf0
// name: FUN_8c09fdf0
// signature: undefined FUN_8c09fdf0(void)


/* WARNING: Removing unreachable block (ram,0x8c09fefc) */
/* WARNING: Removing unreachable block (ram,0x8c09fef2) */
/* WARNING: Removing unreachable block (ram,0x8c09ff08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_8c09fdf0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_fr1;
  undefined4 extraout_fr1;
  double dVar8;
  double in_dr2;
  double dVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar2 = *(int *)((int)DAT_8c09ff46 + (int)param_1);
  if (DAT_8c09ff48 <= iVar2) {
    if (iVar2 == DAT_8c09ff4a) {
      FUN_8c09fc38(param_1,(int)DAT_8c09ff58,0);
      in_fr1 = extraout_fr1;
    }
    uVar1 = DAT_8c09ff60;
    uVar4 = DAT_8c09ff5c;
    iVar7 = (int)DAT_8c09ff4c;
    iVar6 = (int)DAT_8c09ff4e;
    iVar2 = 0;
    do {
      iVar5 = iVar2 + 1;
      uVar3 = param_1[iVar2] & uVar4 | param_1[iVar5] & uVar1;
      iVar7 = iVar7 + -1;
      param_1[iVar2] =
           param_1[iVar2 + iVar6] ^ uVar3 >> 1 ^ *(uint *)(PTR_DAT_8c09ff64 + (uVar3 & 1) * 4);
      iVar2 = iVar5;
    } while (iVar7 != 0);
    iVar2 = (int)DAT_8c09ff50;
    if (iVar5 < iVar2) {
      iVar6 = (int)DAT_8c09ff52;
      do {
        iVar7 = iVar5 + 1;
        uVar3 = param_1[iVar5] & uVar4 | param_1[iVar7] & uVar1;
        param_1[iVar5] =
             param_1[iVar5 + iVar6] ^ uVar3 >> 1 ^ *(uint *)(PTR_DAT_8c09ff64 + (uVar3 & 1) * 4);
        iVar5 = iVar7;
      } while (iVar7 < iVar2);
    }
    uVar4 = *(uint *)((int)DAT_8c09ff54 + (int)param_1) & uVar4 | *param_1 & uVar1;
    iVar6 = (int)DAT_8c09ff46;
    *(uint *)((int)param_1 + (int)DAT_8c09ff54) =
         *(uint *)((int)DAT_8c09ff56 + (int)param_1) ^ uVar4 >> 1 ^
         *(uint *)(PTR_DAT_8c09ff64 + (uVar4 & 1) * 4);
    iVar2 = 0;
    *(undefined4 *)(iVar6 + (int)param_1) = 0;
  }
  *(int *)((int)DAT_8c09ff46 + (int)param_1) = iVar2 + 1;
  uVar4 = param_1[iVar2] ^ param_1[iVar2] >> 0xb;
  uVar4 = uVar4 ^ uVar4 << 7 & DAT_8c09ff68;
  uVar4 = uVar4 ^ uVar4 << 0xf & DAT_8c09ff6c;
  uVar4 = uVar4 ^ uVar4 >> 0x12;
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)(int)uVar4,in_fr1);
  }
  else {
    dVar8 = (double)(int)uVar4;
  }
  if ((int)uVar4 < 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)CONCAT44(DAT_8c09ff70,SUB84(in_dr2,0));
    }
    else {
      in_dr2 = (double)CONCAT44(_FUN_8c09ff74,DAT_8c09ff70);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                               (float)((ulonglong)in_dr2 >> 0x20),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 + in_dr2;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c09ff70,SUB84(in_dr2,0));
  }
  else {
    dVar9 = (double)CONCAT44(_FUN_8c09ff74,DAT_8c09ff70);
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / (float)((ulonglong)dVar9 >> 0x20),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 / dVar9;
  }
  return dVar8;
}

