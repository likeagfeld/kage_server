// entry: 8c0ddae8
// name: FUN_8c0ddae8
// signature: undefined FUN_8c0ddae8(void)


/* WARNING: Removing unreachable block (ram,0x8c0ddb40) */

int FUN_8c0ddae8(undefined2 *param_1,undefined2 *param_2)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  char *pcVar12;
  
  *param_1 = *param_2;
  iVar6 = 4;
  iVar9 = 0;
  iVar8 = 8;
  param_1[1] = param_2[1];
  pcVar7 = (char *)(param_1 + 2);
  do {
    pcVar12 = pcVar7;
    puVar1 = PTR_FUN_8c0ddbdc;
    puVar10 = param_2 + iVar9 * 2 + 2;
    iVar6 = iVar6 + 4;
    *(undefined2 *)pcVar12 = *puVar10;
    sVar2 = (*(code *)puVar1)();
    iVar9 = iVar9 + 1;
    sVar3 = (*(code *)PTR_FUN_8c0ddbdc)();
    uVar4 = (*(code *)PTR_FUN_8c0ddbe0)
                      (sVar2 << 10 | sVar3 << 5 | ((((short)*pcVar12 & 0x10U) == 0) - 1) * -0x10 |
                       (short)*pcVar12 & 0xfU);
    *(undefined2 *)pcVar12 = uVar4;
    iVar8 = iVar8 + -1;
    pcVar12[2] = *(char *)(puVar10 + 1);
    pcVar12[3] = *(char *)((int)puVar10 + 3);
    pcVar7 = pcVar12 + 4;
  } while (iVar8 != 0);
  iVar8 = 4;
  uVar5 = (*(code *)PTR_FUN_8c0ddbd4)(*(undefined4 *)(param_2 + 0x12),param_2 + 0x14);
  *(undefined4 *)pcVar7 = uVar5;
  iVar11 = 0x18;
  iVar9 = 0;
  pcVar12 = pcVar12 + 8;
  do {
    FUN_8c0dd348(pcVar12,(int)(param_2 + 0x14) + iVar9);
    iVar11 = iVar11 + -1;
    iVar8 = iVar8 + 6;
    iVar9 = iVar9 + 6;
    pcVar12 = pcVar12 + 6;
  } while (iVar11 != 0);
  (*(code *)PTR_FUN_8c0ddbd8)(pcVar7 + iVar8,(int)param_2 + (int)DAT_8c0ddbd0,0x10);
  return iVar6 + iVar8 + 0x10;
}

