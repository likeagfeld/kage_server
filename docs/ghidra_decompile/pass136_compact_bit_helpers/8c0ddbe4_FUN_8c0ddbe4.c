// entry: 8c0ddbe4
// name: FUN_8c0ddbe4
// signature: undefined FUN_8c0ddbe4(void)


int FUN_8c0ddbe4(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  
  *param_2 = *param_1;
  iVar1 = 4;
  iVar5 = 0;
  iVar4 = 8;
  param_2[1] = param_1[1];
  puVar2 = param_1 + 2;
  do {
    puVar7 = param_2 + iVar5 * 2 + 2;
    FUN_8c0dd070(puVar2);
    *puVar7 = *puVar2;
    iVar4 = iVar4 + -1;
    puVar3 = puVar2 + 2;
    iVar1 = iVar1 + 4;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined1 *)((int)puVar7 + 3) = *(undefined1 *)((int)puVar2 + 3);
    iVar5 = iVar5 + 1;
    puVar2 = puVar3;
  } while (iVar4 != 0);
  iVar4 = 0;
  iVar6 = 0x1c;
  iVar5 = 0;
  do {
    FUN_8c0dd698(puVar2,(int)param_2 + iVar5 + 0x24);
    iVar6 = iVar6 + -1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 4;
    puVar2 = puVar2 + 2;
  } while (iVar6 != 0);
  (*(code *)PTR_FUN_8c0ddd58)((int)param_2 + (int)DAT_8c0ddd52,(int)puVar3 + iVar4,0x10);
  return iVar1 + iVar4 + 0x10;
}

