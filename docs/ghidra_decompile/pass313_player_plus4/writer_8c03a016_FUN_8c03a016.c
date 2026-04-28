// entry: 8c03a016
// name: FUN_8c03a016


void FUN_8c03a016(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 in_fr3;
  double dVar6;
  double dVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined2 local_24;
  byte local_22;
  byte local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar4 = (undefined2 *)(param_2 + DAT_8c03a182);
  local_28 = *puVar4;
  local_26 = *(undefined1 *)(puVar4 + 1);
  local_25 = *(undefined1 *)((int)puVar4 + 3);
  iVar5 = *(int *)((int)DAT_8c03a180 + *(int *)(DAT_8c03a17c + param_2)) +
          (int)DAT_8c03a17e * (uint)*(ushort *)(param_2 + 0x54);
  local_24 = *(undefined2 *)(iVar5 + 2);
  local_22 = *(byte *)(iVar5 + 8);
  local_21 = *(byte *)(iVar5 + 9);
  piVar3 = (int *)(*(int *)(param_2 + 0x28) + (int)DAT_8c03a184);
  (*(code *)piVar3[2])(param_2 + *piVar3);
  iVar2 = (int)DAT_8c03a186;
  *(undefined2 *)(iVar5 + 2) = local_24;
  *(byte *)(iVar5 + 9) = local_21;
  *puVar4 = local_24;
  *(byte *)(DAT_8c03a188 + param_2) = local_22;
  *(byte *)(DAT_8c03a18a + param_2) = local_21;
  *(undefined2 *)(param_2 + iVar2) = local_28;
  *(undefined1 *)(DAT_8c03a18c + param_2) = local_26;
  *(undefined1 *)(DAT_8c03a18e + param_2) = local_25;
  *(undefined4 *)(DAT_8c03a192 + param_2) = *(undefined4 *)(DAT_8c03a190 + param_2);
  puVar1 = PTR_FUN_8c03a19c;
  *(uint *)(DAT_8c03a190 + param_2) = (uint)local_21;
  (*(code *)puVar1)(param_2,&local_24,&local_28);
  if (((int)*(char *)(param_2 + 0x12) & (int)DAT_8c03a194) == 0x11) {
    piVar3 = (int *)(*(int *)(param_2 + 0x28) + (int)DAT_8c03a198);
    (*(code *)piVar3[2])(param_2 + *piVar3,&local_24);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      local_20 = *(undefined4 *)(iVar2 + 0x4c);
      local_1c = *(undefined4 *)(iVar2 + 0x50);
      local_18 = *(undefined4 *)(iVar2 + 0x54);
    }
    else {
      local_18 = (undefined4)*(undefined8 *)(iVar2 + 0x54);
      local_20 = (undefined4)*(undefined8 *)(iVar2 + 0x4c);
      local_1c = (undefined4)*(undefined8 *)(iVar2 + 0x50);
    }
    local_c = local_18;
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(DAT_8c03a196 + param_2),param_1);
      dVar6 = (double)CONCAT44(DAT_8c03a1a0,in_fr3);
    }
    else {
      dVar7 = *(double *)(DAT_8c03a196 + param_2);
      dVar6 = (double)CONCAT44(PTR_FUN_8c03a1a4,DAT_8c03a1a0);
    }
    iVar2 = *(int *)((int)DAT_8c03a180 + *(int *)(DAT_8c03a17c + param_2)) +
            (int)DAT_8c03a17e * (uint)*(ushort *)(param_2 + 0x54);
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * (float)((ulonglong)dVar6 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 * dVar6;
    }
    local_14 = local_20;
    local_10 = local_1c;
    (*(code *)PTR_FUN_8c03a1a4)(dVar7,param_2,&local_24,&local_14);
    if ((local_22 & 0x10) == 0) {
      (*(code *)PTR_FUN_8c03a1ac)(param_2,&local_24,&local_28);
    }
    (*(code *)PTR_FUN_8c03a1a8)(param_2,&local_14);
    *(undefined2 *)(iVar2 + 2) = local_24;
    *(byte *)(iVar2 + 8) = local_22;
  }
  return;
}

