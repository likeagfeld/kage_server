// entry: 8c08cf66
// name: FUN_8c08cf66
// signature: undefined FUN_8c08cf66(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c08cf66(double param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined8 *puVar7;
  uint extraout_fr3;
  double dVar8;
  undefined8 in_dr14;
  double dVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_20;
  
  if (in_FPSCR_SZ == '\0') {
    puVar7 = (undefined8 *)((int)&local_20 + 4);
    local_20 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_20);
  }
  else {
    puVar7 = &local_20;
    local_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar7 + -4) = in_PR;
  iVar4 = *(int *)(param_2 + 0x28);
  dVar9 = param_1;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),(int)in_dr14);
  }
  puVar5 = *(ushort **)(DAT_8c08d04c + param_2);
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      if ((*puVar5 & 1) == 0) break;
      iVar6 = iVar6 + 1;
      puVar5 = (ushort *)((int)puVar5 + (int)DAT_8c08d04e);
    } while (iVar6 < iVar4);
  }
  if ((iVar6 != iVar4) && (iVar4 = (*(code *)PTR_FUN_8c08d054)(param_2,param_3,param_4), iVar4 != 0)
     ) {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)(param_2 + 0x18),SUB84(param_1,0));
    }
    else {
      dVar8 = *(double *)(param_2 + 0x18);
    }
    *(undefined4 *)((int)puVar7 + -0x10) = param_4;
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + (float)((ulonglong)dVar9 >> 0x20)
                               ,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 + dVar9;
    }
    *(undefined4 *)((int)puVar7 + -0xc) = param_5;
    *(undefined4 *)((int)puVar7 + -8) = 0;
    (*(code *)PTR_FUN_8c08d058)(dVar8,param_2,iVar6,9,param_3);
    (*(code *)PTR_FUN_8c08d05c)(param_2,puVar5);
    uVar2 = DAT_8c08d050;
    *(byte *)((int)puVar5 + 9) = *(byte *)((int)puVar5 + 9) & 0xf | 0x70;
    *(byte *)(puVar5 + 8) = (byte)puVar5[8] & (byte)uVar2 | 2;
    if (in_FPSCR_SZ == '\0') {
      puVar5[10] = 0;
      uVar3 = DAT_8c08d060;
      puVar5[0xb] = 0;
      *(undefined4 *)(puVar5 + 0x30) = DAT_8c08d060;
      *(undefined4 *)(puVar5 + 0x34) = uVar3;
    }
    else {
      *(ulonglong *)(puVar5 + 10) = (ulonglong)extraout_fr3;
      uVar1 = CONCAT44(_FUN_8c08d064,DAT_8c08d060);
      *(undefined8 *)(puVar5 + 0x30) = uVar1;
      *(undefined8 *)(puVar5 + 0x34) = uVar1;
    }
  }
  return;
}

