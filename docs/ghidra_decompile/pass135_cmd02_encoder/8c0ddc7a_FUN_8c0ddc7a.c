// entry: 8c0ddc7a
// name: FUN_8c0ddc7a
// signature: undefined FUN_8c0ddc7a(void)


/* WARNING: Removing unreachable block (ram,0x8c0ddcd2) */

int FUN_8c0ddc7a(undefined2 *param_1,undefined2 *param_2)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  char *pcVar11;
  
  pcVar6 = (char *)(param_1 + 2);
  *param_1 = *param_2;
  iVar5 = 4;
  iVar8 = 0;
  iVar7 = 8;
  param_1[1] = param_2[1];
  do {
    puVar1 = PTR_FUN_8c0ddd5c;
    puVar9 = param_2 + iVar8 * 2 + 2;
    iVar5 = iVar5 + 4;
    *(undefined2 *)pcVar6 = *puVar9;
    sVar2 = (*(code *)puVar1)();
    iVar8 = iVar8 + 1;
    sVar3 = (*(code *)PTR_FUN_8c0ddd5c)();
    uVar4 = (*(code *)PTR_FUN_8c0ddd60)
                      (sVar2 << 10 | sVar3 << 5 | ((((short)*pcVar6 & 0x10U) == 0) - 1) * -0x10 |
                       (short)*pcVar6 & 0xfU);
    *(undefined2 *)pcVar6 = uVar4;
    iVar7 = iVar7 + -1;
    pcVar6[2] = *(char *)(puVar9 + 1);
    pcVar6[3] = *(char *)((int)puVar9 + 3);
    pcVar6 = pcVar6 + 4;
  } while (iVar7 != 0);
  iVar7 = 0;
  iVar10 = 0x1c;
  iVar8 = 0;
  pcVar11 = pcVar6;
  do {
    FUN_8c0dd74e(pcVar11,(int)param_2 + iVar8 + 0x24);
    iVar10 = iVar10 + -1;
    iVar7 = iVar7 + 4;
    iVar8 = iVar8 + 4;
    pcVar11 = pcVar11 + 4;
  } while (iVar10 != 0);
  (*(code *)PTR_FUN_8c0ddd58)(pcVar6 + iVar7,(int)param_2 + (int)DAT_8c0ddd52,0x10);
  return iVar5 + iVar7 + 0x10;
}

