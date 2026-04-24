// entry: 8c01f644
// name: FUN_8c01f644
// signature: undefined FUN_8c01f644(void)


void FUN_8c01f644(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  char in_FPSCR_SZ;
  uint auStack_1c [2];
  
  puVar2 = PTR_FUN_8c01f6f8;
  if (in_FPSCR_SZ == '\0') {
    uVar10 = CONCAT44(*(undefined4 *)(DAT_8c01f6e0 + param_2),param_1);
  }
  else {
    uVar10 = *(undefined8 *)(DAT_8c01f6e0 + param_2);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c01f6e2 + param_2) = (int)((ulonglong)uVar10 >> 0x20);
  }
  else {
    *(undefined8 *)(DAT_8c01f6e2 + param_2) = uVar10;
  }
  iVar5 = *(int *)(DAT_8c01f6e4 + param_2);
  iVar3 = *(int *)(DAT_8c01f6e6 + iVar5);
  *(int *)(DAT_8c01f6e8 + param_2) = iVar3;
  iVar8 = *(int *)(iVar3 + 0x20);
  *(int *)(DAT_8c01f6ea + param_2) = iVar8;
  iVar7 = *(int *)(iVar3 + 0x24);
  *(int *)(DAT_8c01f6ec + param_2) = iVar7;
  uVar6 = *(undefined4 *)(DAT_8c01f6e6 + iVar5);
  *(undefined4 *)(DAT_8c01f6e8 + param_2) = uVar6;
  iVar3 = (*(code *)puVar2)();
  if ((((iVar3 < iVar8) && (iVar3 = (*(code *)PTR_FUN_8c01f6f8)(), iVar3 < iVar7)) &&
      (iVar3 = (*(code *)PTR_FUN_8c01f6f8)(), 0 < iVar3)) &&
     (iVar3 = (*(code *)PTR_FUN_8c01f6f8)(), 0 < iVar3)) {
    (*(code *)PTR_FUN_8c01f848)(param_2 + DAT_8c01f81c,param_3,4);
  }
  else {
    iVar3 = (*(code *)PTR_FUN_8c01f6fc)(uVar6,*(undefined2 *)(param_2 + 0x54),auStack_1c);
    if (iVar3 != 0) {
      auStack_1c[0] =
           CONCAT31(auStack_1c[0]._1_3_,
                    ((byte)auStack_1c[0] & (byte)DAT_8c01f818 | 0x10) & (byte)DAT_8c01f81a) | 8;
      (*(code *)PTR_FUN_8c01f83c)();
      puVar9 = (undefined2 *)(param_2 + DAT_8c01f81c);
      (*(code *)PTR_FUN_8c01f840)();
      (*(code *)PTR_FUN_8c01f83c)();
      (*(code *)PTR_FUN_8c01f840)();
      (*(code *)PTR_FUN_8c01f840)();
      (*(code *)PTR_FUN_8c01f840)();
      iVar3 = (int)DAT_8c01f826;
      *(undefined1 *)(DAT_8c01f824 + param_2) = 0;
      puVar4 = (undefined2 *)(param_2 + iVar3);
      uVar1 = *(undefined1 *)(puVar9 + 1);
      *puVar4 = *puVar9;
      iVar3 = (int)DAT_8c01f82a;
      *(undefined1 *)(DAT_8c01f828 + param_2) = uVar1;
      *(undefined1 *)(DAT_8c01f82c + param_2) = *(undefined1 *)((int)puVar9 + 3);
      uVar1 = *(undefined1 *)(puVar4 + 1);
      *(undefined2 *)(param_2 + iVar3) = *puVar4;
      puVar2 = PTR_s_Player__d__Init_X__d_Y__d_8c01f844;
      *(undefined1 *)(DAT_8c01f82e + param_2) = uVar1;
      *(undefined1 *)(DAT_8c01f830 + param_2) = *(undefined1 *)((int)puVar4 + 3);
      if (in_FPSCR_SZ == '\0') {
        uVar6 = *(undefined4 *)(DAT_8c01f832 + param_2);
      }
      else {
        uVar6 = (undefined4)*(undefined8 *)(DAT_8c01f832 + param_2);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar11 = *(undefined4 *)(DAT_8c01f834 + param_2);
      }
      else {
        uVar10 = *(undefined8 *)(DAT_8c01f834 + param_2);
        uVar11 = (undefined4)uVar10;
        auStack_1c[0] = (uint)((ulonglong)uVar10 >> 0x20);
      }
      FUN_8c01f7d4(param_2,puVar2,*(undefined2 *)(param_2 + 0x54),uVar6,uVar11);
    }
  }
  return;
}

