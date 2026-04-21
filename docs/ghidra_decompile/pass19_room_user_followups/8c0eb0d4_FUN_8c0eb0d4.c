// entry: 8c0eb0d4
// name: FUN_8c0eb0d4
// signature: undefined FUN_8c0eb0d4(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0eb0d4(int param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (uint)_DAT_8c0eb24c;
  uVar6 = (uint)*(char *)(param_1 + 0x12);
  piVar2 = (int *)(PTR_DAT_8c0eb250 + (uVar6 & uVar5) * 0xc);
  param_1 = param_1 + *piVar2;
  puVar3 = (undefined4 *)(PTR_DAT_8c0eb250 + (uVar6 & uVar5) * 0xc);
  if ((int)puVar3[1] < 0) {
    pcVar1 = *(code **)(PTR_DAT_8c0eb250 + (uVar6 & uVar5) * 0xc + 8);
  }
  else {
    piVar4 = (int *)(*(int *)(*(int *)(PTR_DAT_8c0eb250 + (uVar6 & uVar5) * 0xc + 8) + param_1) +
                    *(int *)(PTR_DAT_8c0eb250 + (uVar6 & uVar5) * 0xc + 4) * 0xc);
    param_1 = param_1 + *piVar4;
    pcVar1 = (code *)piVar4[2];
  }
  (*pcVar1)(param_1,piVar2[1],piVar2[2],*puVar3,puVar3[2]);
  return;
}

