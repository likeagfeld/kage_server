// entry: 8c06471e
// name: FUN_8c06471e
// signature: undefined FUN_8c06471e(void)


undefined4 FUN_8c06471e(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_FUN_8c064844;
  iVar4 = 0;
  if (param_3 < 0) {
    iVar3 = (*(code *)PTR_FUN_8c064844)(*(undefined4 *)(DAT_8c064834 + param_1),0x40001860);
    puVar2 = PTR_FUN_8c064848;
    if (0 < iVar3) {
      do {
        iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c064834 + param_1),iVar4,2);
        if (iVar3 == param_2) goto LAB_8c0647ac;
        iVar4 = iVar4 + 1;
        iVar3 = (*(code *)puVar1)(*(undefined4 *)(DAT_8c064834 + param_1));
      } while (iVar4 < iVar3);
    }
  }
  else {
    iVar3 = (*(code *)PTR_FUN_8c064844)(*(undefined4 *)(DAT_8c064834 + param_1));
    puVar2 = PTR_FUN_8c064848;
    if (0 < iVar3) {
      do {
        iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c064834 + param_1),iVar4,2);
        if ((iVar3 == param_2) &&
           (iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c064834 + param_1),iVar4,3),
           iVar3 == param_3)) {
LAB_8c0647ac:
          return *(undefined4 *)(iVar4 * 4 + *(int *)(DAT_8c064838 + param_1));
        }
        iVar4 = iVar4 + 1;
        iVar3 = (*(code *)puVar1)(*(undefined4 *)(DAT_8c064834 + param_1));
      } while (iVar4 < iVar3);
    }
  }
  return 0;
}

