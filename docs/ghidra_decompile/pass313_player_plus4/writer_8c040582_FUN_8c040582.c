// entry: 8c040582
// name: FUN_8c040582


void FUN_8c040582(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar3 = DAT_8c04060c;
  piVar2 = DAT_8c040608;
  piVar1 = DAT_8c040604;
  iVar6 = 0;
  iVar7 = (int)DAT_8c0405ee;
  iVar8 = *(int *)(DAT_8c0405ec + param_1);
  iVar9 = iVar8 + 0x16;
  iVar10 = *(int *)((int)DAT_8c0405f0 + *(int *)(DAT_8c0405e6 + param_1));
  iVar4 = 8;
  iVar5 = *(int *)(DAT_8c0405f2 + param_1) + (int)DAT_8c0405f4;
  do {
    if (*(char *)(iVar8 + 0xe + iVar6) == '\0') {
      *piVar1 = iVar6;
      piVar1[1] = *(int *)(iVar5 + iVar6 * 4);
      piVar1[2] = iVar7 * iVar6 + iVar10;
    }
    else if (*(char *)(iVar9 + iVar6) == '\x06') {
      *piVar2 = iVar6;
      piVar2[1] = *(int *)(iVar5 + iVar6 * 4);
      piVar2[2] = iVar7 * iVar6 + iVar10;
    }
    else if (*(char *)(iVar9 + iVar6) == '\b') {
      *piVar3 = iVar6;
      piVar3[1] = *(int *)(iVar5 + iVar6 * 4);
      piVar3[2] = iVar7 * iVar6 + iVar10;
    }
    iVar4 = iVar4 + -1;
    iVar6 = iVar6 + 1;
  } while (iVar4 != 0);
  return;
}

