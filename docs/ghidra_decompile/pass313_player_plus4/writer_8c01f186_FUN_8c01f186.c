// entry: 8c01f186
// name: FUN_8c01f186


void FUN_8c01f186(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 in_fr3;
  double dVar9;
  double dVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  iVar6 = (int)DAT_8c01f2bc;
  local_c = *(int *)(DAT_8c01f2ba + param_2);
  iVar7 = *(int *)(DAT_8c01f2be + local_c);
  *(int *)(DAT_8c01f2c0 + param_2) = iVar7;
  iVar4 = (int)DAT_8c01f2c4;
  *(int *)(DAT_8c01f2c2 + param_2) = local_c + iVar6;
  iVar6 = (int)DAT_8c01f2c8;
  *(int *)(DAT_8c01f2c6 + param_2) = local_c + 0x30;
  puVar8 = (undefined2 *)(param_2 + iVar6);
  uVar1 = *puVar8;
  *(undefined4 *)(DAT_8c01f2ca + param_2) = *(undefined4 *)(iVar7 + 0x20);
  *(undefined4 *)(DAT_8c01f2cc + param_2) = *(undefined4 *)(iVar7 + 0x24);
  uVar2 = *(undefined1 *)(puVar8 + 1);
  uVar3 = *(undefined1 *)((int)puVar8 + 3);
  iVar7 = *(int *)(DAT_8c01f2ce + iVar7) + iVar4 * (uint)*(ushort *)(param_2 + 0x54);
  local_28 = *(undefined2 *)(iVar7 + 2);
  local_26 = *(undefined1 *)(iVar7 + 8);
  local_25 = *(undefined1 *)(iVar7 + 9);
  piVar5 = (int *)(*(int *)(param_2 + 0x28) + (int)DAT_8c01f2d0);
  (*(code *)piVar5[2])(param_2 + *piVar5);
  iVar4 = (int)DAT_8c01f2d2;
  *(undefined2 *)(iVar7 + 2) = local_28;
  iVar6 = (int)DAT_8c01f2c4;
  *(undefined1 *)(iVar7 + 9) = local_25;
  *puVar8 = local_28;
  *(undefined1 *)(DAT_8c01f2d4 + param_2) = local_26;
  *(undefined1 *)(DAT_8c01f2d6 + param_2) = local_25;
  *(undefined2 *)(param_2 + iVar4) = uVar1;
  *(undefined1 *)(DAT_8c01f2d8 + param_2) = uVar2;
  *(undefined1 *)(DAT_8c01f2da + param_2) = uVar3;
  iVar4 = *(int *)(param_2 + 0x58);
  if (in_FPSCR_SZ == '\0') {
    local_24 = *(undefined4 *)(iVar4 + 0x4c);
    local_20 = *(undefined4 *)(iVar4 + 0x50);
    local_1c = *(undefined4 *)(iVar4 + 0x54);
  }
  else {
    local_1c = (undefined4)*(undefined8 *)(iVar4 + 0x54);
    local_24 = (undefined4)*(undefined8 *)(iVar4 + 0x4c);
    local_20 = (undefined4)*(undefined8 *)(iVar4 + 0x50);
  }
  local_10 = local_1c;
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)(DAT_8c01f2dc + param_2),param_1);
    dVar9 = (double)CONCAT44(DAT_8c01f2e0,in_fr3);
  }
  else {
    dVar10 = *(double *)(DAT_8c01f2dc + param_2);
    dVar9 = (double)CONCAT44(PTR_FUN_8c01f2e4,DAT_8c01f2e0);
  }
  iVar4 = *(int *)((int)DAT_8c01f2ce + *(int *)(DAT_8c01f2c0 + param_2)) +
          iVar6 * (uint)*(ushort *)(param_2 + 0x54);
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) * (float)((ulonglong)dVar9 >> 0x20)
                              ,SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 * dVar9;
  }
  local_18 = local_24;
  local_14 = local_20;
  (*(code *)PTR_FUN_8c01f2e4)(dVar10,param_2,&local_28,&local_18);
  (*(code *)PTR_FUN_8c01f2e8)(param_2,&local_18);
  *(undefined2 *)(iVar4 + 2) = local_28;
  *(undefined1 *)(iVar4 + 8) = local_26;
  return;
}

