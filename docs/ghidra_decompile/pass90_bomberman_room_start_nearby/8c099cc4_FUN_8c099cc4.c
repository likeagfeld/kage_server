// entry: 8c099cc4
// name: FUN_8c099cc4
// signature: undefined FUN_8c099cc4(void)


void FUN_8c099cc4(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 local_c;
  
  iVar3 = (int)DAT_8c099dd0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x60);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x28) + 0x68);
  *(undefined **)((int)&local_c + iVar3) = PTR_s_IN>_ReciveNewKeyHolderInfo___8c099de8;
  (*pcVar4)(param_1 + iVar5);
  uVar2 = (*(code *)PTR_FUN_8c099dec)(*(undefined4 *)(param_2 + 4));
  puVar1 = PTR_FUN_8c099dec;
  *(undefined4 *)(DAT_8c099dd2 + param_1) = uVar2;
  uVar2 = (*(code *)puVar1)(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(DAT_8c099dd4 + param_1) = uVar2;
  if (*(int *)(DAT_8c099dd6 + param_1) != 0) {
    if ((*(int *)(DAT_8c099dd4 + param_1) < 0) ||
       (*(int *)(DAT_8c099dd2 + param_1) != *(int *)(DAT_8c099dd8 + param_1))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    (*(code *)PTR_FUN_8c099df0)(uVar2);
    iVar5 = *(int *)(DAT_8c099dd4 + param_1);
    *(undefined **)((int)&local_c + iVar3) = PTR_s__s_has_become_the_new_room_maste_8c099df4;
    *(int *)(&stack0xfffffff8 + iVar3) = param_1 + DAT_8c099dda + iVar5 * 0x10;
    (*(code *)PTR_FUN_8c099df8)(&stack0x00000000 + iVar3);
    (*(code *)PTR_FUN_8c099dfc)(*(undefined4 *)(DAT_8c099dd6 + param_1),&stack0x00000000 + iVar3,0);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x60);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x28) + 0x68);
  *(undefined **)((int)&local_c + iVar3) = PTR_s_New_KeyHolder__d__Self__d__8c099e00;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = *(undefined4 *)(DAT_8c099dd2 + param_1);
  *(undefined4 *)(&stack0xfffffffc + iVar3) = *(undefined4 *)(DAT_8c099dd8 + param_1);
  (*pcVar4)(param_1 + iVar5);
  iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x60);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x28) + 0x68);
  *(undefined **)((int)&local_c + iVar3) = PTR_s_Player_ID__d__Self__d__8c099e04;
  *(undefined4 *)(&stack0xfffffff8 + iVar3) = *(undefined4 *)(DAT_8c099dd4 + param_1);
  *(undefined4 *)(&stack0xfffffffc + iVar3) = *(undefined4 *)(DAT_8c099ddc + param_1);
  (*pcVar4)(param_1 + iVar5);
  return;
}

