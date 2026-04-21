// entry: 8c09afe4
// name: FUN_8c09afe4
// signature: undefined FUN_8c09afe4(void)


void FUN_8c09afe4(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 local_1c;
  
  iVar3 = (int)DAT_8c09b132;
  (*(code *)PTR_FUN_8c09b158)((int)&local_1c + iVar3,0,(int)DAT_8c09b134);
  puVar2 = PTR_FUN_8c09b160;
  *(byte *)((int)&local_1c + iVar3 + 1) = *(byte *)((int)&local_1c + iVar3 + 1) & 1 | 4;
  *(ushort *)((int)&local_1c + iVar3) =
       *(ushort *)((int)&local_1c + iVar3) & (ushort)DAT_8c09b15c | DAT_8c09b136;
  if ((*(int *)(DAT_8c09b138 + param_1) < 0) ||
     (*(int *)(DAT_8c09b13a + param_1) != *(int *)(DAT_8c09b13c + param_1))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  (*(code *)PTR_FUN_8c09b160)(uVar7);
  (*(code *)puVar2)(*(undefined4 *)(DAT_8c09b13e + param_1));
  *(int *)((int)&local_1c + DAT_8c09b142 + iVar3) = (int)&local_1c + iVar3;
  iVar4 = *(int *)(DAT_8c09b144 + param_1);
  iVar9 = *(int *)(iVar4 + 0x70);
  uVar8 = *(undefined4 *)(iVar4 + 0x60);
  uVar7 = *(undefined4 *)(iVar4 + 0x68);
  iVar5 = *(int *)(iVar4 + 0x48);
  if ((iVar5 == 0x14) || (iVar5 == 0x15)) {
    cVar1 = **(char **)(DAT_8c09b14e + param_1);
    *(char **)((int)&local_1c + DAT_8c09b150 + iVar3) = *(char **)(DAT_8c09b14e + param_1);
    if ((cVar1 == '\x01') &&
       ((iVar4 = *(int *)(DAT_8c09b146 + iVar4), -1 < iVar4 &&
        (*(char *)(iVar4 + *(int *)((int)&local_1c + DAT_8c09b150 + iVar3) + 0xe) == '\0')))) {
      iVar5 = iVar9 + 3;
      *(int *)((int)&local_1c + DAT_8c09b152 + iVar3) = iVar4 * 4;
      bVar6 = *(byte *)(iVar4 * 4 + iVar5) & 0xf;
      *(byte *)(*(int *)((int)&local_1c + DAT_8c09b152 + iVar3) + iVar5) = bVar6;
      *(byte *)(*(int *)((int)&local_1c + DAT_8c09b152 + iVar3) + iVar5) = bVar6 | 0xf0;
    }
  }
  else if (iVar5 != 0x16) goto LAB_8c09b07a;
  (*(code *)puVar2)();
LAB_8c09b07a:
  puVar2 = PTR_FUN_8c09b164;
  (*(code *)PTR_FUN_8c09b164)(*(int *)((int)&local_1c + DAT_8c09b142 + iVar3) + 4,iVar9,0x20);
  (*(code *)puVar2)(*(int *)((int)&local_1c + DAT_8c09b142 + iVar3) + 0x24,uVar8,0x70);
  (*(code *)puVar2)(*(int *)((int)&local_1c + DAT_8c09b142 + iVar3) + (int)DAT_8c09b146,uVar7,0x10);
  uVar7 = (*(code *)PTR_FUN_8c09b168)
                    ((int)&local_1c + DAT_8c09b148 + iVar3,
                     *(undefined4 *)((int)&local_1c + DAT_8c09b142 + iVar3));
  (*(code *)PTR_FUN_8c09b16c)
            (*(undefined4 *)(DAT_8c09b14a + param_1),(int)&local_1c + DAT_8c09b148 + iVar3,uVar7);
  return;
}

