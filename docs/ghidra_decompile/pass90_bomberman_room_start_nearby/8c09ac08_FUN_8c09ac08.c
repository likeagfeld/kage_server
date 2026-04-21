// entry: 8c09ac08
// name: FUN_8c09ac08
// signature: undefined FUN_8c09ac08(void)


void FUN_8c09ac08(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  uVar11 = 1;
  iVar3 = (int)DAT_8c09ad2c;
  iVar9 = *(int *)(*(int *)(DAT_8c09ad2a + param_1) + 0x70);
  iVar7 = 8;
  iVar8 = *(int *)(DAT_8c09ad2e + param_1);
  iVar4 = 0;
  iVar10 = iVar8 + 4;
  do {
    iVar2 = *(int *)(iVar4 * 0x14 + param_1 + iVar3 + 0xc);
    if (iVar2 == 3) {
      puVar5 = (undefined2 *)(iVar4 * 4 + iVar10);
      puVar6 = (undefined2 *)(iVar9 + iVar4 * 4);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      if ((*(byte *)(iVar4 * 4 + iVar10 + 3) & 0xf0) != 0) {
        *(int *)((int)DAT_8c09ad30 + *(int *)(DAT_8c09ad2a + param_1)) = iVar4;
      }
    }
    else if ((((iVar2 == 1) || (iVar2 == 3)) && (**(char **)(DAT_8c09ad32 + param_1) == '\x01')) &&
            (*(undefined1 *)(iVar4 * 4 + iVar9 + 3) = *(undefined1 *)(iVar4 * 4 + iVar10 + 3),
            (*(byte *)(iVar4 * 4 + iVar10 + 3) & 0xf0) != 0)) {
      *(int *)((int)DAT_8c09ad30 + *(int *)(DAT_8c09ad2a + param_1)) = iVar4;
    }
    uVar1 = DAT_8c09ad34;
    iVar7 = iVar7 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar7 != 0);
  iVar4 = 0;
  iVar8 = iVar8 + 0x24;
  iVar7 = *(int *)(DAT_8c09ad2a + param_1);
  iVar3 = 0xc;
  while ((*(char *)(iVar8 + iVar4) == '\0' && (*(char *)(iVar8 + iVar4 + 1) == '\0'))) {
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 2;
    if (iVar3 == 0) goto LAB_8c09ac9e;
  }
  iVar4 = 0;
  iVar3 = 0x18;
  do {
    if (*(byte *)(iVar8 + iVar4) != uVar1) {
      (*(code *)PTR_FUN_8c09ad38)(iVar7,iVar4,*(undefined1 *)(iVar8 + iVar4),uVar11);
      iVar7 = *(int *)(DAT_8c09ad2a + param_1);
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar3 != 0);
LAB_8c09ac9e:
  *(undefined4 *)(iVar7 + 0x44) = 3;
  return;
}

