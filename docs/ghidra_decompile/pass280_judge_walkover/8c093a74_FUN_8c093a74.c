// entry: 8c093a74
// name: FUN_8c093a74
// signature: undefined FUN_8c093a74(void)


void FUN_8c093a74(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r14;
  
  iVar2 = *(int *)((int)&param_1 + (int)DAT_8c093aec);
  if (**(char **)(DAT_8c093ae4 + iVar2) == '\0') {
    uVar1 = (*(code *)PTR_FUN_8c093afc)(*(undefined4 *)(unaff_r14 + 4));
    *(undefined4 *)((int)&param_1 + (int)DAT_8c093af6) = uVar1;
    iVar2 = *(int *)(*(int *)((int)&param_1 + (int)DAT_8c093aec) + 0x28);
    param_1 = PTR_s_____Svr_Settled_Recv_Dead_Bits___8c093b0c;
    param_2 = *(undefined4 *)((int)&param_1 + (int)DAT_8c093af6);
    (**(code **)(iVar2 + 0x68))
              (*(int *)((int)&param_1 + (int)DAT_8c093aec) + *(int *)(iVar2 + 0x60));
    iVar2 = *(int *)((int)&param_1 + (int)DAT_8c093aec);
    *(undefined4 *)((int)DAT_8c093aee + *(int *)(DAT_8c093ae0 + iVar2)) =
         *(undefined4 *)((int)&param_1 + (int)DAT_8c093af6);
  }
  *(undefined4 *)((int)&param_1 + (int)DAT_8c093af4) = *(undefined4 *)(DAT_8c093ae0 + iVar2);
  uVar1 = (*(code *)PTR_FUN_8c093af8)();
  *(undefined4 *)(*(int *)((int)&param_1 + (int)DAT_8c093af4) + 0x44) = uVar1;
  return;
}

