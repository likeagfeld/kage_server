// entry: 8c0dd74e
// name: FUN_8c0dd74e
// signature: undefined FUN_8c0dd74e(void)


/* WARNING: Removing unreachable block (ram,0x8c0dd7bc) */
/* WARNING: Removing unreachable block (ram,0x8c0dd784) */
/* WARNING: Removing unreachable block (ram,0x8c0dd812) */

void FUN_8c0dd74e(char *param_1,undefined2 *param_2)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar3 = PTR_FUN_8c0dd840;
  uVar8 = 4;
  *(undefined2 *)param_1 = *param_2;
  sVar4 = (*(code *)puVar3)(4);
  sVar5 = (*(code *)puVar3)();
  uVar6 = (*(code *)PTR_FUN_8c0dd844)
                    (sVar4 << 10 | sVar5 << 5 | ((((short)*param_1 & 0x10U) == 0) - 1) * -0x10 |
                     (short)*param_1 & 0xfU);
  *(undefined2 *)param_1 = uVar6;
  sVar4 = (*(code *)puVar3)(uVar8);
  cVar1 = *(char *)((int)param_2 + 3);
  sVar5 = (*(code *)puVar3)(uVar8);
  bVar2 = *(byte *)(param_2 + 1);
  uVar7 = (*(code *)puVar3)();
  uVar7 = (uint)(ushort)(sVar4 << 0xc | ((short)cVar1 & 0xfU) << 8 | sVar5 << 4 |
                        (((bVar2 & 8) == 0) - 1) * -8) | (uVar7 & 0x7fff) << 1;
  param_1[2] = (char)(uVar7 >> 8);
  param_1[3] = (byte)uVar7 | bVar2 & 1;
  return;
}

