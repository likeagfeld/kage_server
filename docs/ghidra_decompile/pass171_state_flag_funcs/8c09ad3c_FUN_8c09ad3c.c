// entry: 8c09ad3c
// name: FUN_8c09ad3c
// signature: undefined FUN_8c09ad3c(void)


void FUN_8c09ad3c(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined2 local_20;
  
  iVar6 = (int)DAT_8c09aea0;
  (*(code *)PTR_FUN_8c09aec0)((int)&local_20 + iVar6,0,(int)DAT_8c09aea2);
  puVar2 = PTR_FUN_8c09aec8;
  *(byte *)((int)&local_20 + iVar6 + 1) = *(byte *)((int)&local_20 + iVar6 + 1) & 1 | 2;
  *(ushort *)((int)&local_20 + iVar6) =
       *(ushort *)((int)&local_20 + iVar6) & (ushort)DAT_8c09aec4 | DAT_8c09aea4;
  if ((*(int *)(DAT_8c09aea6 + param_1) < 0) ||
     (*(int *)(DAT_8c09aea8 + param_1) != *(int *)(DAT_8c09aeaa + param_1))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  (*(code *)PTR_FUN_8c09aec8)(uVar5);
  (*(code *)puVar2)(*(undefined4 *)(DAT_8c09aeac + param_1));
  *(int *)((int)&local_20 + DAT_8c09aeb0 + iVar6) = (int)&local_20 + iVar6;
  pcVar7 = *(char **)(DAT_8c09aeb2 + param_1);
  *(undefined4 *)((int)&local_20 + DAT_8c09aeb4 + iVar6) = *(undefined4 *)(pcVar7 + 0x70);
  *(undefined4 *)((int)&local_20 + DAT_8c09aeb6 + iVar6) = *(undefined4 *)(pcVar7 + 0x58);
  *(undefined4 *)((int)&local_20 + DAT_8c09aeb8 + iVar6) = *(undefined4 *)(pcVar7 + 0x68);
  iVar8 = *(int *)(pcVar7 + 0x48);
  if ((iVar8 == 0x14) || (iVar8 == 0x15)) {
    pcVar9 = *(char **)(DAT_8c09afc6 + param_1);
    cVar1 = *pcVar9;
    *(char **)((int)&local_20 + DAT_8c09afc8 + iVar6) = pcVar9;
    if (((cVar1 == '\x01') && (iVar8 = *(int *)(pcVar7 + DAT_8c09afb8), -1 < iVar8)) &&
       (pcVar7 = pcVar9 + 0xe, pcVar7[iVar8] == '\0')) {
      pcVar7 = (char *)(*(int *)((int)&local_20 + DAT_8c09afca + iVar6) + 3);
      pcVar7[iVar8 * 4] = pcVar7[iVar8 * 4] & 0xfU | 0xf0;
    }
  }
  else if (iVar8 != 0x16) goto LAB_8c09adea;
  (*(code *)PTR_FUN_8c09afdc)(pcVar7);
LAB_8c09adea:
  iVar8 = 0;
  puVar10 = *(uint **)(*(int *)(DAT_8c09aeb2 + param_1) + 0x58);
  iVar13 = 0x18;
  puVar11 = puVar10 + 1;
  uVar12 = 0;
  puVar14 = puVar11;
  do {
    iVar3 = (*(code *)PTR_FUN_8c09aecc)(*(undefined4 *)(DAT_8c09aeb2 + param_1),iVar8,0xffffffff);
    uVar4 = uVar12;
    if (((iVar3 != 0) && (iVar3 = (*(code *)PTR_FUN_8c09aed0)(), iVar3 != 0)) &&
       ((uVar4 = (*(code *)PTR_FUN_8c09aed4)(*(undefined4 *)(DAT_8c09aeb2 + param_1),iVar8),
        uVar12 != 0 && (uVar12 <= uVar4)))) {
      uVar4 = uVar12;
    }
    iVar13 = iVar13 + -1;
    iVar8 = iVar8 + 1;
    puVar14 = (uint *)((int)puVar14 + 6);
    uVar12 = uVar4;
  } while (iVar13 != 0);
  iVar8 = (int)DAT_8c09aeba;
  *puVar10 = uVar4;
  iVar13 = 0x18;
  *(uint **)((int)&local_20 + iVar8 + iVar6) = puVar14;
  iVar8 = 0;
  do {
    iVar3 = (*(code *)PTR_FUN_8c09aecc)(*(undefined4 *)(DAT_8c09aeb2 + param_1),iVar8,0xffffffff);
    if (iVar3 != 0) {
      iVar3 = (*(code *)PTR_FUN_8c09aed0)();
      if (iVar3 == 0) {
        *(ushort *)((int)puVar11 + iVar8 * 6 + 4) =
             *(ushort *)((int)puVar11 + iVar8 * 6 + 4) & (ushort)DAT_8c09aec4;
      }
      else {
        (*(code *)PTR_FUN_8c09afe0)(*(undefined4 *)(DAT_8c09afce + param_1),iVar8);
        (*(code *)PTR_FUN_8c09afdc)();
      }
    }
    puVar2 = PTR_FUN_8c09aed8;
    iVar13 = iVar13 + -1;
    iVar8 = iVar8 + 1;
  } while (iVar13 != 0);
  (*(code *)PTR_FUN_8c09aed8)
            (*(int *)((int)&local_20 + DAT_8c09aeb0 + iVar6) + 4,
             *(undefined4 *)((int)&local_20 + DAT_8c09aeb4 + iVar6),0x20);
  (*(code *)puVar2)(*(int *)((int)&local_20 + DAT_8c09afb6 + iVar6) + 0x24,
                    *(undefined4 *)((int)&local_20 + DAT_8c09afba + iVar6),(int)DAT_8c09afb8);
  (*(code *)puVar2)(*(int *)((int)&local_20 + DAT_8c09afb6 + iVar6) + (int)DAT_8c09afbc,
                    *(undefined4 *)((int)&local_20 + DAT_8c09afbe + iVar6),0x10);
  uVar5 = (*(code *)PTR_FUN_8c09afd4)
                    ((int)&local_20 + DAT_8c09afc0 + iVar6,
                     *(undefined4 *)((int)&local_20 + DAT_8c09afb6 + iVar6));
  (*(code *)PTR_FUN_8c09afd8)
            (*(undefined4 *)(DAT_8c09afc2 + param_1),(int)&local_20 + DAT_8c09afc0 + iVar6,uVar5);
  return;
}

