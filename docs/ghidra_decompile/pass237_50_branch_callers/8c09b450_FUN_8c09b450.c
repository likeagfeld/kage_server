// entry: 8c09b450
// name: FUN_8c09b450
// signature: undefined FUN_8c09b450(void)


void FUN_8c09b450(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_20;
  
  iVar7 = (int)DAT_8c09b54a;
  uVar10 = 0;
  if ((*(int *)(DAT_8c09b54c + param_1) != 0) &&
     ((*(int *)(DAT_8c09b54e + param_1) < 1 ||
      (iVar5 = *(int *)(DAT_8c09b54e + param_1) + -1, *(int *)(DAT_8c09b54e + param_1) = iVar5,
      iVar5 < 1)))) {
    *(undefined4 *)(DAT_8c09b54e + param_1) = 3;
    *(int *)((int)&local_20 + DAT_8c09b552 + iVar7) = (int)&local_20 + iVar7;
    *(int *)((int)&local_20 + DAT_8c09b556 + iVar7) = param_1 + DAT_8c09b554;
    do {
      if ((int)uVar10 < 0) {
        uVar9 = 1 >> (~uVar10 & 0x1f) + 1;
      }
      else {
        uVar9 = 1 << (uVar10 & 0x1f);
      }
      uVar12 = *(uint *)(DAT_8c09b54c + param_1);
      uVar6 = uVar12 & uVar9;
      *(uint *)((int)&local_20 + DAT_8c09b558 + iVar7) = uVar9;
      bVar1 = false;
      if (uVar6 == 1) {
        (*(code *)PTR_FUN_8c09b684)((int)&local_20 + iVar7,0,4);
        *(undefined4 *)(DAT_8c09b66e + param_1) = 1;
        puVar3 = PTR_FUN_8c09b688;
        *(undefined4 *)(DAT_8c09b670 + param_1) = 0;
        puVar4 = PTR_FUN_8c09b690;
        *(byte *)((int)&local_20 + iVar7 + 1) = *(byte *)((int)&local_20 + iVar7 + 1) & 1 | 0x16;
        *(ushort *)((int)&local_20 + iVar7) =
             *(ushort *)((int)&local_20 + iVar7) & (ushort)DAT_8c09b68c;
        if ((*(int *)(DAT_8c09b672 + param_1) < 0) ||
           (*(int *)(DAT_8c09b674 + param_1) != *(int *)(DAT_8c09b676 + param_1))) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        (*(code *)puVar3)(uVar2);
        (*(code *)puVar3)(*(undefined4 *)(DAT_8c09b678 + param_1));
        (*(code *)puVar4)(*(undefined4 *)(DAT_8c09b67c + param_1),
                          *(undefined4 *)((int)&local_20 + DAT_8c09b67e + iVar7),4);
        uVar12 = *(uint *)(DAT_8c09b680 + param_1);
      }
      else if (uVar6 == 2) {
        (*(code *)PTR_FUN_8c09b684)((int)&local_20 + iVar7,0,4);
        *(undefined4 *)(DAT_8c09b66e + param_1) = 0;
        puVar3 = PTR_FUN_8c09b688;
        *(undefined4 *)(DAT_8c09b670 + param_1) = 0;
        puVar4 = PTR_FUN_8c09b690;
        *(byte *)((int)&local_20 + iVar7 + 1) = *(byte *)((int)&local_20 + iVar7 + 1) & 1 | 0x18;
        *(ushort *)((int)&local_20 + iVar7) =
             *(ushort *)((int)&local_20 + iVar7) & (ushort)DAT_8c09b68c;
        if ((*(int *)(DAT_8c09b672 + param_1) < 0) ||
           (*(int *)(DAT_8c09b674 + param_1) != *(int *)(DAT_8c09b676 + param_1))) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        (*(code *)puVar3)(uVar2);
        (*(code *)puVar3)(*(undefined4 *)(DAT_8c09b678 + param_1));
        (*(code *)puVar4)(*(undefined4 *)(DAT_8c09b67c + param_1),
                          *(undefined4 *)((int)&local_20 + DAT_8c09b67e + iVar7),4);
        uVar12 = *(uint *)(DAT_8c09b680 + param_1);
      }
      else if (uVar6 == 4) {
        iVar5 = 0;
        iVar8 = 8;
        *(undefined4 *)((int)&local_20 + DAT_8c09b55c + iVar7) =
             *(undefined4 *)(DAT_8c09b55a + param_1);
        iVar11 = (int)DAT_8c09b560;
        *(uint *)((int)&local_20 + DAT_8c09b55e + iVar7) = uVar12;
        iVar13 = *(int *)((int)&local_20 + DAT_8c09b556 + iVar7);
        do {
          *(undefined1 *)(iVar13 + iVar5 * 8) = 0;
          iVar8 = iVar8 + -1;
          *(int *)(iVar13 + iVar5 * 8 + 4) = iVar11;
          iVar5 = iVar5 + 1;
        } while (iVar8 != 0);
        uVar12 = *(uint *)((int)&local_20 + DAT_8c09b55e + iVar7);
        iVar5 = *(int *)((int)&local_20 + DAT_8c09b55c + iVar7);
        if ((iVar5 != 0) && (((int)*(char *)(iVar5 + 0x12) & (int)DAT_8c09b562) != 3)) {
          (*(code *)PTR_FUN_8c09b694)(iVar5);
          uVar12 = *(uint *)(DAT_8c09b680 + param_1);
        }
      }
      else {
        bVar1 = true;
      }
      uVar10 = uVar10 + 1;
      *(uint *)(DAT_8c09b54c + param_1) = uVar12 & ~*(uint *)((int)&local_20 + DAT_8c09b558 + iVar7)
      ;
    } while (((int)uVar10 < 3) && (bVar1));
  }
  return;
}

