// entry: 8c0de2f0
// name: FUN_8c0de2f0
// signature: undefined FUN_8c0de2f0(void)


void FUN_8c0de2f0(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  int local_20;
  
  iVar4 = (int)DAT_8c0de448;
  iVar3 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)((int)&local_20 + DAT_8c0de44a + iVar4) = param_2;
  iVar7 = *(int *)(param_1 + 0x30);
  *(int *)((int)&local_20 + DAT_8c0de44c + iVar4) = param_1;
  *(int *)((int)&local_20 + DAT_8c0de44e + iVar4) = iVar3;
  if (iVar7 < iVar3) {
    iVar14 = *(int *)((int)&local_20 + DAT_8c0de5e8 + iVar4);
    uVar12 = 4;
    *(undefined4 *)(iVar7 * 0xc + *(int *)(iVar14 + 0x3c) + 4) = *(undefined4 *)(iVar14 + 0x50);
    puVar1 = PTR_FUN_8c0de600;
    iVar3 = *(int *)(iVar14 + 0x30);
    iVar7 = *(int *)(iVar14 + 0x3c);
    *(int *)((int)&local_20 + DAT_8c0de5ec + iVar4) = iVar7;
    iVar3 = iVar3 * 0xc;
    *(int *)(iVar3 + iVar7 + 8) = *(int *)(iVar14 + 0x50) - *(int *)(iVar3 + iVar7);
    iVar3 = *(int *)(iVar14 + 0x30) + 1;
    *(int *)(iVar14 + 0x30) = iVar3;
    *(undefined4 *)(iVar3 * 0xc + *(int *)(iVar14 + 0x3c)) = *(undefined4 *)(iVar14 + 0x50);
    (*(code *)puVar1)(&stack0xffffffe4 + iVar4,0,4);
    (&stack0xffffffe5)[iVar4] = (&stack0xffffffe5)[iVar4] & 1 | 8;
    (*(code *)PTR_FUN_8c0de604)(*(undefined4 *)(iVar14 + 0x48));
    iVar7 = *(int *)(iVar14 + 0x30);
    *(undefined4 *)(iVar14 + 0x34) = 0xf;
    iVar3 = iVar7;
    if ((1 < iVar7) && (iVar3 = iVar7 + -1, 2 < iVar3)) {
      uVar6 = iVar7 - 2U >> 1;
      if ((iVar7 - 2U & 1) != 0) {
        iVar3 = iVar7 + -2;
      }
      iVar3 = iVar3 + -1;
      do {
        iVar3 = iVar3 + -2;
        uVar6 = uVar6 - 1;
      } while (0 < (int)uVar6);
    }
    iVar7 = *(int *)((int)&local_20 + DAT_8c0de5e8 + iVar4);
    uVar2 = (*(code *)PTR_FUN_8c0de5f0)(iVar3);
    *(undefined4 *)((int)&local_20 + DAT_8c0de5ee + iVar4) = uVar2;
    iVar3 = (*(code *)PTR_FUN_8c0de5f4)(*(undefined4 *)((int)&local_20 + DAT_8c0de5e6 + iVar4));
    *(int *)(iVar7 + 0x54) =
         (*(int *)((int)&local_20 + DAT_8c0de5ee + iVar4) + iVar3) - *(int *)(iVar7 + 0x50);
  }
  else {
    iVar3 = 0;
    iVar7 = 1;
    if (1 < *(int *)((int)&local_20 + DAT_8c0de44e + iVar4)) {
      iVar9 = 0xc;
      iVar13 = 0xc;
      iVar14 = 0;
      iVar11 = 0;
      iVar10 = *(int *)(*(int *)((int)&local_20 + DAT_8c0de44c + iVar4) + 0x3c);
      *(int *)((int)&local_20 + DAT_8c0de450 + iVar4) = iVar10;
      iVar10 = iVar10 + 8;
      iVar5 = *(int *)((int)&local_20 + DAT_8c0de44e + iVar4) + -1;
      do {
        if (*(int *)(iVar14 + iVar10) < *(int *)(iVar9 + iVar10)) {
          iVar3 = iVar7;
          iVar14 = iVar13;
        }
        if (*(int *)(iVar9 + iVar10) < *(int *)(iVar11 + iVar10)) {
          iVar11 = iVar7 * 0xc;
        }
        iVar5 = iVar5 + -1;
        iVar7 = iVar7 + 1;
        iVar13 = iVar13 + 0xc;
        iVar9 = iVar9 + 0xc;
      } while (iVar5 != 0);
    }
    iVar7 = iVar3;
    if (*(int *)((int)&local_20 + DAT_8c0de44e + iVar4) <= iVar3) {
      iVar7 = *(int *)((int)&local_20 + DAT_8c0de44e + iVar4);
    }
    if (0 < iVar7) {
      do {
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar3 = iVar3 + 1;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    if (iVar3 < *(int *)((int)&local_20 + DAT_8c0de44e + iVar4)) {
      iVar3 = *(int *)((int)&local_20 + DAT_8c0de44e + iVar4) - iVar3;
      *(int *)((int)&local_20 + DAT_8c0de44e + iVar4) = iVar3;
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar15 = (ushort *)(&stack0xffffffe4 + iVar4);
    (*(code *)PTR_FUN_8c0de454)(puVar15,0,8);
    (&stack0xffffffe5)[iVar4] = (&stack0xffffffe5)[iVar4] & 1 | 10;
    uVar12 = 8;
    iVar7 = *(int *)((int)&local_20 + DAT_8c0de44c + iVar4);
    uVar2 = *(undefined4 *)(iVar7 + 0x48);
    *puVar15 = *puVar15 & (ushort)DAT_8c0de45c | 4;
    (*(code *)PTR_FUN_8c0de458)(uVar2);
    uVar2 = (*(code *)PTR_FUN_8c0de5f0)();
    *(undefined4 *)((int)&local_20 + DAT_8c0de5e4 + iVar4) = uVar2;
    iVar3 = (*(code *)PTR_FUN_8c0de5f4)(*(undefined4 *)((int)&local_20 + DAT_8c0de5e6 + iVar4));
    *(int *)((int)&local_20 + DAT_8c0de5e4 + iVar4) =
         *(int *)((int)&local_20 + DAT_8c0de5e4 + iVar4) + iVar3;
    uVar2 = (*(code *)PTR_FUN_8c0de5f4)();
    puVar1 = PTR_FUN_8c0de5f8;
    *(undefined4 *)(&stack0xffffffe8 + iVar4) = uVar2;
    *(int *)(iVar7 + 0x54) =
         *(int *)((int)&local_20 + DAT_8c0de5e4 + iVar4) - *(int *)(iVar7 + 0x50);
    (*(code *)puVar1)(0,iVar7 + 0x10,3);
    *(undefined4 *)(iVar7 + 0x34) = 0xf;
  }
  iVar3 = (*(code *)PTR_FUN_8c0de5fc)
                    (*(undefined4 *)(*(int *)((int)&local_20 + DAT_8c0de5e8 + iVar4) + 0x5c),
                     &stack0xffffffe4 + iVar4,uVar12);
  if (iVar3 == 0) {
    iVar7 = *(int *)((int)&local_20 + DAT_8c0de782 + iVar4);
    iVar3 = *(int *)(iVar7 + 0x28);
    iVar14 = *(int *)(iVar3 + 0x60);
    pcVar8 = *(code **)(iVar3 + 0x68);
    *(undefined **)((int)&local_20 + iVar4) = PTR_s_OUT>_CalcTimer_First___SendFastT_8c0de78c;
    (*pcVar8)(iVar7 + iVar14);
  }
  return;
}

