// entry: 8c09b170
// name: FUN_8c09b170
// signature: undefined FUN_8c09b170(void)


void FUN_8c09b170(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  undefined2 local_14;
  
  iVar3 = (int)DAT_8c09b290;
  (*(code *)PTR_FUN_8c09b2b0)((int)&local_14 + iVar3,0,0x40);
  puVar2 = PTR_FUN_8c09b2b8;
  *(byte *)((int)&local_14 + iVar3 + 1) = *(byte *)((int)&local_14 + iVar3 + 1) & 1 | 6;
  *(ushort *)((int)&local_14 + iVar3) =
       *(ushort *)((int)&local_14 + iVar3) & (ushort)DAT_8c09b2b4 | 0x3c;
  if ((*(int *)(DAT_8c09b292 + param_1) < 0) ||
     (*(int *)(DAT_8c09b294 + param_1) != *(int *)(DAT_8c09b296 + param_1))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  (*(code *)PTR_FUN_8c09b2b8)(uVar5);
  (*(code *)puVar2)(*(undefined4 *)(DAT_8c09b298 + param_1));
  *(int *)((int)&local_14 + DAT_8c09b29c + iVar3) = (int)&local_14 + iVar3;
  iVar4 = *(int *)(DAT_8c09b29e + param_1);
  iVar8 = *(int *)(iVar4 + 0x70);
  iVar6 = *(int *)(iVar4 + 0x48);
  if ((iVar6 == 0x14) || (iVar6 == 0x15)) {
    cVar1 = **(char **)(DAT_8c09b2a6 + param_1);
    *(char **)((int)&local_14 + DAT_8c09b2a8 + iVar3) = *(char **)(DAT_8c09b2a6 + param_1);
    if ((cVar1 == '\x01') &&
       ((iVar4 = *(int *)(DAT_8c09b2aa + iVar4), -1 < iVar4 &&
        (*(char *)(iVar4 + *(int *)((int)&local_14 + DAT_8c09b2a8 + iVar3) + 0xe) == '\0')))) {
      iVar6 = iVar8 + 3;
      *(int *)((int)&local_14 + DAT_8c09b2ac + iVar3) = iVar4 * 4;
      bVar7 = *(byte *)(iVar4 * 4 + iVar6) & 0xf;
      *(byte *)(*(int *)((int)&local_14 + DAT_8c09b2ac + iVar3) + iVar6) = bVar7;
      *(byte *)(*(int *)((int)&local_14 + DAT_8c09b2ac + iVar3) + iVar6) = bVar7 | 0xf0;
    }
  }
  else if (iVar6 != 0x16) goto LAB_8c09b1f6;
  (*(code *)puVar2)();
LAB_8c09b1f6:
  (*(code *)PTR_FUN_8c09b2bc)(*(int *)((int)&local_14 + DAT_8c09b29c + iVar3) + 4,iVar8,0x20);
  uVar5 = (*(code *)PTR_FUN_8c09b2c0)
                    ((int)&local_14 + DAT_8c09b2a0 + iVar3,
                     *(undefined4 *)((int)&local_14 + DAT_8c09b29c + iVar3));
  (*(code *)PTR_FUN_8c09b2c4)
            (*(undefined4 *)(DAT_8c09b2a2 + param_1),(int)&local_14 + DAT_8c09b2a0 + iVar3,uVar5);
  return;
}

