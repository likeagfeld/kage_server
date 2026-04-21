// entry: 8c0999b4
// name: FUN_8c0999b4
// signature: undefined FUN_8c0999b4(void)


void FUN_8c0999b4(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  puVar1 = PTR_FUN_8c099b04;
  puVar8 = (undefined4 *)(param_2 + 8);
  iVar7 = 0;
  iVar2 = (*(code *)PTR_FUN_8c099b04)(*(undefined4 *)(param_2 + 4));
  if (0 < iVar2) {
    iVar6 = (int)DAT_8c099af4;
    do {
      puVar9 = puVar8 + 1;
      iVar10 = 0;
      (*(code *)puVar1)(*puVar8);
      puVar8 = puVar8 + 2;
      iVar3 = (*(code *)puVar1)(*puVar9);
      if (0 < iVar3) {
        do {
          puVar9 = puVar8 + 1;
          iVar10 = iVar10 + 1;
          iVar4 = (*(code *)puVar1)(*puVar8);
          puVar8 = puVar8 + 2;
          uVar5 = (*(code *)puVar1)(*puVar9);
          *(undefined4 *)(iVar4 * 0x14 + param_1 + iVar6 + 0x10) = uVar5;
        } while (iVar10 < iVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  return;
}

