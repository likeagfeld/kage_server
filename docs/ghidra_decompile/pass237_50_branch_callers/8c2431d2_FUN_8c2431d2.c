// entry: 8c2431d2
// name: FUN_8c2431d2
// signature: undefined FUN_8c2431d2(void)


void FUN_8c2431d2(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0xc) + 0x4a);
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = 0;
    do {
      if (iVar2 == 0) {
        **(undefined1 **)(*(int *)(param_1 + 8) + 0x14) = *puVar1;
        puVar1 = puVar1 + 2;
        (*(code *)PTR_FUN_8c243270)();
        *(bool *)(*(int *)(param_1 + 8) + 0x41) =
             ((int)*(char *)(*(int *)(param_1 + 8) + 0xd) & 0x80U) == 0;
      }
      else if (iVar2 == 1) {
        **(undefined1 **)(*(int *)(param_1 + 8) + 0x20) = *puVar1;
        puVar1 = puVar1 + 2;
        (*(code *)PTR_FUN_8c243270)();
      }
      else if (iVar2 == 2) {
        **(undefined1 **)(*(int *)(param_1 + 8) + 0x2c) = *puVar1;
        puVar1 = puVar1 + 2;
        (*(code *)PTR_FUN_8c243270)();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return;
}

