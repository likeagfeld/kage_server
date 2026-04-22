// entry: 8c08cb1c
// name: FUN_8c08cb1c
// signature: undefined FUN_8c08cb1c(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c08cb1c(undefined4 param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                 undefined2 param_6,uint param_7,uint param_8,undefined2 param_9,uint param_10)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint in_fr3;
  undefined4 uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  uint uVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  puVar1 = PTR_FUN_8c08cc90;
  iVar11 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x20);
  puVar5 = *(ushort **)(DAT_8c08cc76 + param_2);
  iVar4 = iVar11 + -1;
  iVar3 = 0;
  puVar6 = puVar5;
  if (0 < iVar4) {
    do {
      puVar6 = puVar5;
      if (((*puVar5 & 1) == 0) || (puVar6 = puVar5 + 10, (*puVar6 & 1) == 0)) goto LAB_8c08cb74;
      iVar3 = iVar3 + 2;
      puVar5 = puVar5 + 0x14;
      puVar6 = puVar5;
    } while (iVar3 < iVar4);
  }
  if ((iVar3 < iVar11) && ((*puVar6 & 1) != 0)) {
    puVar6 = puVar6 + 10;
  }
LAB_8c08cb74:
  (*(code *)PTR_FUN_8c08cc8c)(param_2,puVar6,param_3,param_4,1,8);
  (*(code *)puVar1)(param_6);
  uVar8 = (ulonglong)in_fr3;
  if (in_FPSCR_SZ == '\0') {
    puVar6[6] = 0;
    puVar6[7] = 0;
  }
  else {
    *(ulonglong *)(puVar6 + 6) = uVar8;
  }
  (*(code *)puVar1)(param_5);
  uVar7 = (undefined4)uVar8;
  (*(code *)puVar1)(param_7 & 0xffff);
  (*(code *)puVar1)(param_8 & 0xffff);
  uVar12 = param_10;
  if (param_10 == 0) {
    uVar12 = param_7;
  }
  iVar3 = (*(code *)PTR_FUN_8c08cc94)(uVar12);
  (*(code *)puVar1)(PTR_DAT_8c08cc98[param_8 + (iVar3 + -1) * 0xb + (uint)(param_10 != 0) * 0x6e]);
  (*(code *)puVar1)(param_9);
  iVar3 = (*(code *)PTR_FUN_8c08cc9c)();
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((float)iVar3,param_1);
  }
  else {
    dVar10 = (double)iVar3;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c08cca0,uVar7);
  }
  else {
    dVar9 = (double)CONCAT44(DAT_8c08cca4,DAT_8c08cca0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) / (float)((ulonglong)dVar9 >> 0x20)
                              ,SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 / dVar9;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44(DAT_8c08cca4,SUB84(dVar9,0));
  }
  else {
    dVar9 = (double)CONCAT44(_FUN_8c08cca8,DAT_8c08cca4);
  }
  if (in_FPSCR_PR == '\0') {
    uVar12 = (uint)((float)((ulonglong)dVar10 >> 0x20) * (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    uVar12 = (uint)(dVar10 * dVar9);
  }
  (*(code *)puVar1)(uVar12 & 0xffff);
  iVar3 = (int)DAT_8c08cc84;
  *(byte *)(puVar6 + 8) = (byte)puVar6[8] & (byte)DAT_8c08cc82;
  *(ushort **)
   ((*(int *)(param_2 + 0x20) * param_4 + param_3) * 4 + *(int *)(DAT_8c08cc86 + param_2)) = puVar6;
  piVar2 = (int *)(*(int *)(DAT_8c08cc88 + param_2) + iVar3);
  (*(code *)piVar2[2])(param_2 + *piVar2,puVar6);
  return;
}

