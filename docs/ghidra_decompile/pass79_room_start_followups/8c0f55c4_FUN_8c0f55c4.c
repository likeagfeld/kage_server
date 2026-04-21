// entry: 8c0f55c4
// name: FUN_8c0f55c4
// signature: undefined FUN_8c0f55c4(void)


void FUN_8c0f55c4(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_10018 [65536];
  undefined4 local_18;
  undefined4 local_c;
  
  local_c = 7;
  iVar5 = (int)DAT_8c0f566e;
  uVar1 = PTR_DAT_8c0f567c[1];
  puVar7 = (undefined1 *)((int)&local_18 + DAT_8c0f5670 + iVar5);
  *puVar7 = *PTR_DAT_8c0f567c;
  puVar7[1] = uVar1;
  puVar7[2] = PTR_DAT_8c0f567c[2];
  puVar7[3] = PTR_DAT_8c0f567c[3];
  uVar1 = PTR_DAT_8c0f567c[4];
  *(undefined **)((int)&local_18 + iVar5) = PTR_DAT_8c0f5680;
  puVar7[4] = uVar1;
  puVar7[5] = PTR_DAT_8c0f567c[5];
  uVar1 = PTR_DAT_8c0f567c[6];
  *(undefined4 *)(&stack0xffffffec + iVar5) = 2;
  puVar7[6] = uVar1;
  uVar1 = PTR_DAT_8c0f567c[7];
  *(undefined4 *)(&stack0xfffffff0 + iVar5) = param_2;
  puVar7[7] = uVar1;
  puVar7[8] = PTR_DAT_8c0f567c[8];
  puVar7[9] = PTR_DAT_8c0f567c[9];
  puVar7[10] = PTR_DAT_8c0f567c[10];
  (*(code *)PTR_FUN_8c0f5684)((int)&local_18 + DAT_8c0f5672 + iVar5);
  if (param_3 == 0) {
    uVar8 = 0x13;
  }
  else {
    uVar8 = 0x12;
  }
  iVar4 = (int)DAT_8c0f5670;
  iVar3 = (int)&local_18 + DAT_8c0f5672 + iVar5;
  uVar2 = (*(code *)PTR_FUN_8c0f5688)(iVar3);
  *(undefined4 *)((int)&local_18 + DAT_8c0f5674 + iVar5) = uVar2;
  iVar4 = (*(code *)PTR_FUN_8c0f5688)((int)&local_18 + iVar4 + iVar5);
  if ((*(int *)((int)&local_18 + DAT_8c0f5674 + iVar5) <= (int)DAT_8c0f5676) && (iVar4 < 0xb)) {
    (*(code *)PTR_FUN_8c0f57d4)();
    *(undefined4 *)((int)&local_18 + DAT_8c0f57c4 + iVar5) = 0;
    *(undefined4 *)((int)&local_18 + DAT_8c0f57c6 + iVar5) = uVar8;
    (&stack0xfffffff2)[DAT_8c0f57c2 + iVar5] = 0;
    iVar9 = *(int *)((int)&local_18 + DAT_8c0f57c8 + iVar5);
    (*(code *)PTR_FUN_8c0f57d8)();
    if (0 < iVar4) {
      (*(code *)PTR_FUN_8c0f57dc)((int)&local_c + iVar5,PTR_DAT_8c0f57f0);
      iVar9 = iVar4 + iVar9 + 3;
    }
    (*(code *)PTR_FUN_8c0f57dc)((int)&local_c + iVar5,iVar3);
    iVar3 = (*(code *)PTR_FUN_8c0f57e0)(*(undefined4 *)(param_1 + 0x3c),(int)&local_c + iVar5);
    iVar3 = iVar3 - iVar4;
    *(int *)((int)&local_18 + DAT_8c0f57ca + iVar5) = iVar3;
    iVar6 = (int)&local_c + iVar5;
    *(int *)((int)&local_18 + DAT_8c0f57cc + iVar5) = iVar6;
    while( true ) {
      (*(code *)PTR_FUN_8c0f57e4)((int)&local_18 + DAT_8c0f57ce + iVar5,iVar6 + iVar4,iVar3);
      iVar6 = (int)DAT_8c0f57c2;
      uVar8 = *(undefined4 *)(param_1 + 0x68);
      *(undefined1 *)
       ((int)&local_18 + *(int *)((int)&local_18 + DAT_8c0f57ca + iVar5) + DAT_8c0f57ce + iVar5) = 0
      ;
      iVar3 = (*(code *)PTR_FUN_8c0f57e8)(uVar8);
      if (iVar3 == 0) {
        if (9 < *(int *)(*(int *)(param_1 + 0x68) + 0x14)) {
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
        }
      }
      else {
        (*(code *)PTR_FUN_8c0f57f4)(*(undefined4 *)(param_1 + 0x68),0);
      }
      if ((((((int)*(char *)(param_1 + 0x12) & (int)DAT_8c0f57d0) == 5) ||
           (((int)*(char *)(param_1 + 0x12) & (int)DAT_8c0f57d0) == 10)) &&
          (0 < *(int *)(param_1 + 0x6c))) &&
         (iVar3 = *(int *)(param_1 + 0x6c) + -1, *(int *)(param_1 + 0x6c) = iVar3, iVar3 == 0)) {
        (*(code *)PTR_FUN_8c0f57f8)(*(undefined4 *)(param_1 + 0x3c),0);
      }
      (*(code *)PTR_FUN_8c0f57ec)(*(undefined4 *)(param_1 + 0x68),(int)&local_18 + iVar6 + iVar5);
      *(uint *)(DAT_8c0f57d2 + param_1) = *(uint *)(DAT_8c0f57d2 + param_1) | 0x40;
      iVar4 = *(int *)((int)&local_18 + DAT_8c0f57ca + iVar5) + iVar4;
      if (iVar9 <= iVar4) break;
      uVar8 = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)((int)&local_18 + DAT_8c0f57c4 + iVar5) = 1;
      iVar3 = (*(code *)PTR_FUN_8c0f57e0)
                        (uVar8,iVar4 + *(int *)((int)&local_18 + DAT_8c0f57cc + iVar5));
      *(int *)((int)&local_18 + DAT_8c0f57ca + iVar5) = iVar3;
      iVar6 = (int)&local_c + iVar5;
    }
  }
  return;
}

