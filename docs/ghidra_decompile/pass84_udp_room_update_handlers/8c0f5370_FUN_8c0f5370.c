// entry: 8c0f5370
// name: FUN_8c0f5370
// signature: undefined FUN_8c0f5370(void)


void FUN_8c0f5370(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined1 auStack_1000e [65526];
  int local_18;
  
  puVar1 = PTR_FUN_8c0f5450;
  iVar5 = (int)DAT_8c0f542a;
  iVar9 = (int)DAT_8c0f542c;
  *(int *)((int)&local_18 + DAT_8c0f542e + iVar5) = param_2 + 0xb;
  (*(code *)PTR_FUN_8c0f544c)((int)&local_18 + iVar9 + iVar5,10);
  iVar2 = (int)&local_18 + iVar9 + iVar5;
  *(undefined1 *)(iVar2 + 10) = 0;
  *(int *)((int)&local_18 + DAT_8c0f541c + iVar5) = iVar2;
  iVar2 = (*(code *)puVar1)();
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    puVar7 = *(undefined1 **)((int)&local_18 + DAT_8c0f541c + iVar5);
    pcVar8 = puVar7 + iVar2;
    do {
      if (*pcVar8 != ' ') {
        puVar7[iVar2 + 1] = 0;
        break;
      }
      if (iVar2 == 0) {
        *puVar7 = 0;
        break;
      }
      iVar2 = iVar2 + -1;
      pcVar8 = pcVar8 + -1;
    } while (-1 < iVar2);
  }
  if (param_3 == -1) {
    param_3 = 0x10;
  }
  uVar3 = (*(code *)puVar1)(*(undefined4 *)((int)&local_18 + DAT_8c0f542e + iVar5));
  *(undefined4 *)((int)&local_18 + DAT_8c0f5426 + iVar5) = uVar3;
  iVar2 = (*(code *)puVar1)((int)&local_18 + iVar9 + iVar5);
  if ((*(int *)((int)&local_18 + DAT_8c0f5426 + iVar5) <= (int)DAT_8c0f5430) && (iVar2 < 0xb)) {
    (*(code *)PTR_FUN_8c0f559c)();
    *(undefined4 *)((int)&local_18 + DAT_8c0f5588 + iVar5) = 0;
    (&stack0xfffffff2)[DAT_8c0f5586 + iVar5] = 0;
    *(int *)((int)&local_18 + DAT_8c0f558a + iVar5) = param_3;
    iVar9 = *(int *)((int)&local_18 + DAT_8c0f558c + iVar5);
    (*(code *)PTR_FUN_8c0f55a0)();
    if (0 < iVar2) {
      (*(code *)PTR_FUN_8c0f55a4)((int)&local_18 + iVar5,PTR_DAT_8c0f55b8);
      iVar9 = iVar2 + iVar9 + 3;
    }
    (*(code *)PTR_FUN_8c0f55a4)
              ((int)&local_18 + iVar5,*(undefined4 *)((int)&local_18 + DAT_8c0f558e + iVar5));
    iVar4 = (*(code *)PTR_FUN_8c0f55a8)(*(undefined4 *)(param_1 + 0x3c),(int)&local_18 + iVar5);
    iVar4 = iVar4 - iVar2;
    *(int *)((int)&local_18 + DAT_8c0f5590 + iVar5) = iVar4;
    *(int *)((int)&local_18 + DAT_8c0f5592 + iVar5) = (int)&local_18 + iVar5;
    while( true ) {
      (*(code *)PTR_FUN_8c0f55ac)
                ((int)&local_18 + DAT_8c0f5594 + iVar5,(int)&local_18 + iVar2 + iVar5,iVar4);
      iVar6 = (int)DAT_8c0f5586;
      uVar3 = *(undefined4 *)(param_1 + 0x68);
      *(undefined1 *)
       ((int)&local_18 + *(int *)((int)&local_18 + DAT_8c0f5590 + iVar5) + DAT_8c0f5594 + iVar5) = 0
      ;
      iVar4 = (*(code *)PTR_FUN_8c0f55b0)(uVar3);
      if (iVar4 == 0) {
        if (9 < *(int *)(*(int *)(param_1 + 0x68) + 0x14)) {
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
        }
      }
      else {
        (*(code *)PTR_FUN_8c0f55c0)(*(undefined4 *)(param_1 + 0x68),0);
      }
      if ((((((int)*(char *)(param_1 + 0x12) & (int)DAT_8c0f5596) == 5) ||
           (((int)*(char *)(param_1 + 0x12) & (int)DAT_8c0f5596) == 10)) &&
          (0 < *(int *)(param_1 + 0x6c))) &&
         (iVar4 = *(int *)(param_1 + 0x6c) + -1, *(int *)(param_1 + 0x6c) = iVar4, iVar4 == 0)) {
        (*(code *)PTR_FUN_8c0f55bc)(*(undefined4 *)(param_1 + 0x3c),0);
      }
      (*(code *)PTR_FUN_8c0f55b4)(*(undefined4 *)(param_1 + 0x68),(int)&local_18 + iVar6 + iVar5);
      *(uint *)(DAT_8c0f5598 + param_1) = *(uint *)(DAT_8c0f5598 + param_1) | 0x40;
      iVar2 = *(int *)((int)&local_18 + DAT_8c0f5590 + iVar5) + iVar2;
      if (iVar9 <= iVar2) break;
      uVar3 = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)((int)&local_18 + DAT_8c0f5588 + iVar5) = 1;
      iVar4 = (*(code *)PTR_FUN_8c0f55a8)
                        (uVar3,iVar2 + *(int *)((int)&local_18 + DAT_8c0f5592 + iVar5));
      *(int *)((int)&local_18 + DAT_8c0f5590 + iVar5) = iVar4;
    }
  }
  return;
}

