// entry: 8c179cac
// name: FUN_8c179cac
// signature: undefined FUN_8c179cac(void)


void FUN_8c179cac(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  
  uVar4 = (*(code *)PTR_FUN_8c179db0)((int)DAT_8c179da4,&DAT_8c1c2558);
  piVar1 = DAT_8c179db4;
  puVar11 = (undefined4 *)*DAT_8c179db4;
  if (puVar11 != (undefined4 *)0x0) {
    iVar8 = puVar11[1];
    *DAT_8c179db4 = iVar8;
    if (iVar8 == 0) {
      piVar1[1] = 0;
    }
    else {
      *(undefined4 *)*piVar1 = 0;
    }
    *puVar11 = 0;
    puVar11[1] = 0;
    piVar1[2] = piVar1[2] + -1;
  }
  (*(code *)PTR_FUN_8c179db0)(uVar4);
  if (puVar11 != (undefined4 *)0x0) {
    puVar11[4] = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    if (puVar11 != (undefined4 *)0x0) {
      iVar8 = (int)DAT_8c179da6;
      puVar7 = (undefined1 *)(*DAT_8c179db8 + (int)puVar11);
      puVar11[5] = puVar7;
      *puVar7 = 1;
      puVar2 = PTR_FUN_8c179dbc;
      puVar7[1] = *(undefined1 *)(iVar8 + param_1);
      iVar8 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c179da8 + param_1));
      puVar2 = PTR_FUN_8c179dc0;
      iVar5 = (int)DAT_8c179da8;
      puVar7[4] = (char)iVar8;
      puVar10 = puVar7 + 5;
      (*(code *)puVar2)(puVar10,*(undefined4 *)(iVar5 + param_1),iVar8);
      iVar5 = (*(code *)PTR_FUN_8c179dbc)(*(undefined4 *)(DAT_8c179daa + param_1));
      puVar2 = PTR_FUN_8c179dc0;
      iVar6 = (int)DAT_8c179daa;
      iVar9 = iVar8 + iVar5 + 6;
      puVar10[iVar8] = (char)iVar5;
      (*(code *)puVar2)(puVar10 + iVar8 + 1,*(undefined4 *)(iVar6 + param_1),iVar5);
      uVar3 = (*(code *)PTR_FUN_8c179dc4)(iVar9);
      *(undefined2 *)(puVar7 + 2) = uVar3;
      puVar11[6] = iVar9;
      *(undefined1 *)(DAT_8c179dac + 0x10 + param_1) = *(undefined1 *)(DAT_8c179dac + param_1);
      FUN_8c179f26(param_1,puVar11);
      return;
    }
  }
  return;
}

