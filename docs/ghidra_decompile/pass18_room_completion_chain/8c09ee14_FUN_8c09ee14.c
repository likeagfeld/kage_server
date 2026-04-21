// entry: 8c09ee14
// name: FUN_8c09ee14
// signature: undefined FUN_8c09ee14(void)


int FUN_8c09ee14(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined4 local_1c;
  
  puVar2 = PTR_PTR_8c09ee94;
  puVar1 = PTR_DAT_8c09ee90;
  iVar6 = (int)DAT_8c09ee8a;
  *(undefined4 *)((int)&local_1c + iVar6) = *(undefined4 *)PTR_DAT_8c09ee90;
  *(int *)PTR_DAT_8c09ee90 = (int)&local_1c + iVar6;
  puVar5 = PTR_PTR_8c09eea0;
  puVar4 = PTR_DAT_8c09ee9c;
  puVar3 = PTR_FUN_8c09ee98;
  (&stack0xffffffe8)[iVar6] = 2;
  *(undefined **)(&stack0xffffffec + iVar6) = puVar2;
  if (param_1 == 0) {
    param_1 = 1;
  }
  while (iVar7 = (*(code *)puVar3)(param_1), iVar7 == 0) {
    pcVar8 = (code *)PTR_FUN_8c09eea4;
    if (*(int *)puVar5 != 0) {
      pcVar8 = *(code **)puVar5;
    }
    if (*(int *)puVar4 != 0) {
      pcVar8 = *(code **)puVar4;
    }
    (*pcVar8)();
  }
  *(undefined4 *)puVar1 = *(undefined4 *)((int)&local_1c + iVar6);
  return iVar7;
}

