// entry: 8c0e21fc
// name: FUN_8c0e21fc
// signature: undefined FUN_8c0e21fc(void)


void FUN_8c0e21fc(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_c;
  
  iVar3 = (int)DAT_8c0e2364;
  uVar4 = *(uint *)(DAT_8c0e2366 + param_1);
  *(undefined **)((int)&uStack_c + iVar3) = PTR_s__d__d__d__d_8c0e236c;
  *(uint *)(&stack0xfffffff8 + iVar3) = uVar4 & 0xff;
  *(uint *)(&stack0xfffffffc + iVar3) = (uVar4 & DAT_8c0e2370) >> 8;
  *(uint *)(&stack0x00000000 + iVar3) = (uVar4 & DAT_8c0e2374) >> 0x10;
  *(uint *)(&stack0x00000004 + iVar3) = (uVar4 & DAT_8c0e2378) >> 0x18;
  (*(code *)PTR_FUN_8c0e237c)(&stack0x00000008 + iVar3);
  uVar2 = (*(code *)PTR_FUN_8c0e2384)(*(undefined4 *)PTR_DAT_8c0e2380);
  iVar3 = (*(code *)PTR_FUN_8c0e2388)(&stack0x00000008 + iVar3,uVar2);
  *(int *)(DAT_8c0e2368 + param_1) = iVar3;
  if (iVar3 < 1) {
    (*(code *)PTR_FUN_8c0e23b0)(0,param_1 + 0x10,0x11);
  }
  else {
    if (*(int *)(param_1 + 0x34) != 0) {
      (*(code *)PTR_FUN_8c0e238c)();
    }
    puVar1 = PTR_FUN_8c0e2394;
    (*(code *)PTR_FUN_8c0e2394)(*(undefined4 *)(DAT_8c0e2368 + param_1),0xd,PTR_LAB_8c0e2390);
    if (*(int *)(param_1 + 0x38) != 0) {
      (*(code *)PTR_FUN_8c0e2398)();
    }
    (*(code *)puVar1)(*(undefined4 *)(DAT_8c0e2368 + param_1),0xb,PTR_LAB_8c0e239c);
    (*(code *)puVar1)(*(undefined4 *)(DAT_8c0e2368 + param_1),0x12,PTR_LAB_8c0e23a0);
    (*(code *)puVar1)(*(undefined4 *)(DAT_8c0e2368 + param_1),0x14,PTR_LAB_8c0e23a4);
    (*(code *)puVar1)(*(undefined4 *)(DAT_8c0e2368 + param_1),0x13,PTR_LAB_8c0e23a8);
    (*(code *)puVar1)(*(undefined4 *)(DAT_8c0e2368 + param_1),0x15,PTR_LAB_8c0e23ac);
    (*(code *)PTR_FUN_8c0e23b0)(0,param_1 + 0x10,2);
  }
  return;
}

