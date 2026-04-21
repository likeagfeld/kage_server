// entry: 8c09840c
// name: FUN_8c09840c
// signature: undefined FUN_8c09840c(void)


void FUN_8c09840c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar3 = *(undefined4 **)((int)DAT_8c098570 + *(int *)(DAT_8c09856e + param_1));
  if (puVar3 != (undefined4 *)0x0) {
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = *puVar3;
    puVar8 = puVar3 + 4;
    iVar2 = (int)DAT_8c098574;
    *(undefined4 *)(DAT_8c098572 + param_1) = puVar3[3];
    puVar1 = PTR_FUN_8c098590;
    *(undefined4 *)(DAT_8c098576 + param_1) = 0;
    puVar3 = (undefined4 *)(param_1 + iVar2);
    iVar2 = (*(code *)puVar1)();
    iVar4 = (int)DAT_8c09857c;
    *(int *)(DAT_8c09857a + param_1) = iVar2 + 1;
    puVar1 = PTR_FUN_8c098594;
    *(undefined4 *)(DAT_8c09857e + param_1) = 0;
    (*(code *)puVar1)(puVar3,0,iVar4);
    uVar7 = (*(code *)PTR_FUN_8c098598)(uVar7);
    puVar1 = PTR_FUN_8c098598;
    *puVar3 = uVar7;
    uVar7 = (*(code *)puVar1)(uVar5);
    puVar1 = PTR_FUN_8c098598;
    puVar3[1] = uVar7;
    uVar7 = (*(code *)puVar1)(uVar6);
    puVar3[2] = uVar7;
    uVar9 = 0;
    uVar7 = (*(code *)PTR_FUN_8c098598)(*(undefined4 *)(DAT_8c098572 + param_1));
    puVar3[3] = uVar7;
    puVar1 = PTR_FUN_8c09859c;
    puVar3 = puVar3 + 4;
    if (uVar6 != 0) {
      do {
        uVar9 = uVar9 + 1;
        (*(code *)puVar1)(puVar3,puVar8,4);
        puVar8 = puVar8 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar9 < uVar6);
    }
  }
  return;
}

