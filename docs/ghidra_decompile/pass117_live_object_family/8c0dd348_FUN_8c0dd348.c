// entry: 8c0dd348
// name: FUN_8c0dd348
// signature: undefined FUN_8c0dd348(void)


/* WARNING: Removing unreachable block (ram,0x8c0dd3f8) */
/* WARNING: Removing unreachable block (ram,0x8c0dd37e) */
/* WARNING: Removing unreachable block (ram,0x8c0dd3ba) */
/* WARNING: Removing unreachable block (ram,0x8c0dd408) */

void FUN_8c0dd348(char *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  puVar2 = PTR_FUN_8c0dd44c;
  uVar10 = 6;
  *(undefined2 *)param_1 = *param_2;
  sVar4 = (*(code *)puVar2)(6);
  sVar5 = (*(code *)puVar2)();
  puVar3 = PTR_FUN_8c0dd450;
  uVar6 = (*(code *)PTR_FUN_8c0dd450)
                    (sVar4 << 10 | sVar5 << 5 | ((((short)*param_1 & 0x10U) == 0) - 1) * -0x10 |
                     (short)*param_1 & 0xfU);
  *(undefined2 *)param_1 = uVar6;
  uVar8 = (*(code *)puVar2)(uVar10);
  cVar1 = *(char *)((int)param_2 + 3);
  uVar9 = (*(code *)puVar2)(uVar10);
  uVar6 = (*(code *)puVar3)((uVar8 & 0xf) << 0xc | ((int)cVar1 & 0xfU) << 8 | (uVar9 & 0xfff) << 4 |
                            (int)*(char *)(param_2 + 1) & 0xfU);
  *(undefined2 *)(param_1 + 2) = uVar6;
  sVar4 = (*(code *)puVar2)();
  sVar5 = (*(code *)puVar2)();
  sVar7 = (*(code *)puVar2)();
  uVar6 = (*(code *)puVar3)(sVar4 << 0xd | sVar5 << 0xb | sVar7 << 9 | param_2[2] & DAT_8c0dd448);
  *(undefined2 *)(param_1 + 4) = uVar6;
  return;
}

