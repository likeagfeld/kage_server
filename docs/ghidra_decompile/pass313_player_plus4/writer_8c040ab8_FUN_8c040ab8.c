// entry: 8c040ab8
// name: FUN_8c040ab8


void FUN_8c040ab8(uint param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  char in_FPSCR_SZ;
  
  iVar6 = DAT_8c040af8;
  if (*(short *)(DAT_8c040ad0 + param_3) == 2) {
    iVar7 = *(int *)(DAT_8c040af8 + 8);
    uVar5 = (uint)DAT_8c040ba4;
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) & DAT_8c040bb8;
    iVar2 = (int)DAT_8c040ba6;
    *(byte *)(iVar7 + 0xb) = *(byte *)(iVar7 + 0xb) | 1;
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | uVar5;
    piVar3 = (int *)(*(int *)(param_3 + 0x28) + iVar2);
    (*(code *)piVar3[2])(0,param_3 + *piVar3,1);
    puVar1 = PTR_DAT_8c040bbc;
    iVar2 = *(int *)(iVar6 + 8);
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | (int)DAT_8c040ba8;
    iVar6 = (int)DAT_8c040baa;
    *(byte *)(iVar2 + 8) = *(byte *)(iVar2 + 8) & 0xdf;
    uVar4 = *(undefined4 *)(puVar1 + 4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
    else {
      *(ulonglong *)(iVar2 + 0xc) = (ulonglong)param_1;
    }
    puVar8 = (undefined4 *)(param_3 + iVar6);
    iVar6 = (int)DAT_8c040ba6;
    puVar8[1] = uVar4;
    uVar4 = *(undefined4 *)puVar1;
    puVar8[2] = *(undefined4 *)(puVar1 + 8);
    iVar6 = *(int *)(iVar6 + param_3);
    *puVar8 = uVar4;
    if (in_FPSCR_SZ == '\0') {
      uVar9 = CONCAT44(*(undefined4 *)(iVar6 + 0x18),param_2);
    }
    else {
      uVar9 = *(undefined8 *)(iVar6 + 0x18);
    }
    iVar6 = (int)DAT_8c040bae;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c040bac + param_3) = (int)((ulonglong)uVar9 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c040bac + param_3) = uVar9;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c040bb0 + param_3) = 0;
    }
    else {
      *(ulonglong *)(DAT_8c040bb0 + param_3) = (ulonglong)param_1;
    }
    *(undefined4 *)(DAT_8c040bb2 + param_3) = 1;
    iVar2 = *(int *)(DAT_8c040bb4 + param_3);
    *(undefined4 *)(DAT_8c040bb6 + param_3) = 0;
    *(undefined2 *)(param_3 + iVar6 + iVar2 * 2) = 0;
  }
  return;
}

