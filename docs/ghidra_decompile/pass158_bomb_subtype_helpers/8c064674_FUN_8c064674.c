// entry: 8c064674
// name: FUN_8c064674
// signature: undefined FUN_8c064674(void)


undefined4 FUN_8c064674(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_FUN_8c06483c;
  puVar1 = PTR_FUN_8c0646dc;
  iVar4 = 0;
  if (param_3 < 0) {
    iVar3 = (*(code *)PTR_FUN_8c06483c)(*(undefined4 *)(DAT_8c064834 + param_1));
    puVar1 = PTR_FUN_8c064840;
    if (0 < iVar3) {
      do {
        iVar3 = (*(code *)puVar1)(*(undefined4 *)(DAT_8c064834 + param_1),iVar4,2);
        if (iVar3 == param_2) goto LAB_8c064710;
        iVar4 = iVar4 + 1;
        iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c064834 + param_1));
      } while (iVar4 < iVar3);
    }
  }
  else {
    iVar3 = (*(code *)PTR_FUN_8c0646dc)(*(undefined4 *)(DAT_8c0646d6 + param_1));
    puVar2 = PTR_FUN_8c0646e0;
    if (0 < iVar3) {
      do {
        iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c0646d6 + param_1),iVar4,2);
        if ((iVar3 == param_2) &&
           (iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c0646d6 + param_1),iVar4,3),
           iVar3 == param_3)) {
LAB_8c064710:
          return *(undefined4 *)(iVar4 * 4 + *(int *)(DAT_8c064836 + param_1));
        }
        iVar4 = iVar4 + 1;
        iVar3 = (*(code *)puVar1)(*(undefined4 *)(DAT_8c0646d6 + param_1));
      } while (iVar4 < iVar3);
    }
  }
  return 0;
}

