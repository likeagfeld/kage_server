// entry: 8c0dde1e
// name: FUN_8c0dde1e
// signature: undefined FUN_8c0dde1e(void)


/* WARNING: Removing unreachable block (ram,0x8c0dde72) */

int FUN_8c0dde1e(char *param_1,undefined2 *param_2)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  char *pcVar9;
  
  *(undefined2 *)param_1 = *param_2;
  iVar5 = 4;
  iVar7 = 0;
  iVar6 = 8;
  *(undefined2 *)(param_1 + 2) = param_2[1];
  do {
    puVar1 = PTR_FUN_8c0dded0;
    pcVar9 = param_1 + 4;
    puVar8 = param_2 + iVar7 * 2 + 2;
    iVar5 = iVar5 + 4;
    *(undefined2 *)pcVar9 = *puVar8;
    sVar2 = (*(code *)puVar1)();
    iVar7 = iVar7 + 1;
    sVar3 = (*(code *)PTR_FUN_8c0dded0)();
    uVar4 = (*(code *)PTR_FUN_8c0ddec8)
                      (sVar2 << 10 | sVar3 << 5 | ((((short)*pcVar9 & 0x10U) == 0) - 1) * -0x10 |
                       (short)*pcVar9 & 0xfU);
    *(undefined2 *)pcVar9 = uVar4;
    iVar6 = iVar6 + -1;
    param_1[6] = *(char *)(puVar8 + 1);
    param_1[7] = *(char *)((int)puVar8 + 3);
    param_1 = pcVar9;
  } while (iVar6 != 0);
  return iVar5;
}

