// entry: 8c09b9fc
// name: FUN_8c09b9fc
// signature: undefined FUN_8c09b9fc(void)


void FUN_8c09b9fc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_34 [24];
  
  if (*(int *)(DAT_8c09bb3c + param_1) != 0) {
    (*(code *)PTR_FUN_8c09bb48)(auStack_34);
    puVar1 = PTR_FUN_8c09bb4c;
    iVar3 = (int)DAT_8c09bb3e;
    iVar6 = 0;
    iVar5 = 8;
    iVar4 = param_1 + DAT_8c09bb40;
    do {
      (*(code *)puVar1)(param_1 + iVar3 + iVar6 * 0x10,0,0x10);
      iVar2 = *(int *)(iVar4 + iVar6 * 0x14 + 0xc);
      if (iVar2 == 1) {
        iVar2 = (*(code *)PTR_FUN_8c09bb60)
                          (*(undefined4 *)(*(int *)(DAT_8c09bb42 + param_1) + 0x68),
                           *(undefined4 *)(DAT_8c09bb44 + param_1));
        if (iVar2 != 0) {
          (*(code *)PTR_FUN_8c09bb58)(auStack_34);
          (*(code *)PTR_FUN_8c09bb64)
                    (auStack_34,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x14));
        }
      }
      else if (iVar2 == 2) {
        iVar2 = (*(code *)PTR_FUN_8c09bb60)
                          (*(undefined4 *)(*(int *)(DAT_8c09bb42 + param_1) + 0x68),
                           *(undefined4 *)(DAT_8c09bb44 + param_1));
        if (iVar2 != 0) {
          (*(code *)PTR_FUN_8c09bb58)(auStack_34);
          (*(code *)PTR_FUN_8c09bb64)
                    (auStack_34,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x14));
        }
      }
      else if (iVar2 == 3) {
        iVar2 = (*(code *)PTR_FUN_8c09bb60)
                          (*(undefined4 *)(*(int *)(DAT_8c09bb42 + param_1) + 0x68),
                           *(undefined4 *)(iVar4 + iVar6 * 0x14));
        if (iVar2 != 0) {
          (*(code *)PTR_FUN_8c09bb58)(auStack_34);
          (*(code *)PTR_FUN_8c09bb64)
                    (auStack_34,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x14));
        }
      }
      else {
        iVar2 = 0;
      }
      if (iVar2 != 0) {
        (*(code *)PTR_FUN_8c09bb50)(auStack_34,*(undefined4 *)(iVar4 + iVar6 * 0x14 + 8));
        (*(code *)PTR_FUN_8c09bb54)();
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar5 != 0);
    (*(code *)PTR_FUN_8c09bb58)(auStack_34);
    (*(code *)PTR_FUN_8c09bb5c)(auStack_34,2);
  }
  return;
}

