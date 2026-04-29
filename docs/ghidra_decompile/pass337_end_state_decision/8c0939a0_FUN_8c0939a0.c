// entry: 8c0939a0
// name: FUN_8c0939a0
// signature: undefined FUN_8c0939a0(void)


void FUN_8c0939a0(int param_1,char param_2,int param_3,int param_4,undefined *param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r11;
  int unaff_r14;
  
  do {
    unaff_r11 = unaff_r11 + 1;
    iVar3 = param_1;
    while( true ) {
      param_3 = param_3 + -1;
      param_1 = iVar3 + 0x14;
      if (param_3 == 0) {
        *(int *)((int)&param_5 + (int)DAT_8c093adc) = unaff_r11;
        *(undefined4 *)((int)&param_5 + (int)DAT_8c093ade) = 0xffffffff;
        if (*(int *)((int)&param_5 + (int)DAT_8c093adc) == 1) {
          *(undefined4 *)((int)DAT_8c093ae2 + *(int *)(DAT_8c093ae0 + param_4)) =
               *(undefined4 *)((int)&param_5 + (int)DAT_8c093ade);
          param_2 = **(char **)(DAT_8c093ae4 + param_4);
        }
        if (param_2 == '\0') {
          uVar1 = (*(code *)PTR_FUN_8c093afc)(*(undefined4 *)(unaff_r14 + 4));
          *(undefined4 *)((int)&param_5 + (int)DAT_8c093aea) = uVar1;
          iVar3 = *(int *)(*(int *)((int)&param_5 + (int)DAT_8c093aec) + 0x28);
          param_5 = PTR_s_____Svr_Completed_ed_Recv_Dead_B_8c093b00;
          param_6 = *(undefined4 *)((int)&param_5 + (int)DAT_8c093aea);
          (**(code **)(iVar3 + 0x68))
                    (*(int *)((int)&param_5 + (int)DAT_8c093aec) + *(int *)(iVar3 + 0x60));
          param_4 = *(int *)((int)&param_5 + (int)DAT_8c093aec);
          *(undefined4 *)((int)DAT_8c093aee + *(int *)(DAT_8c093ae0 + param_4)) =
               *(undefined4 *)((int)&param_5 + (int)DAT_8c093aea);
        }
        *(undefined4 *)((int)&param_5 + (int)DAT_8c093ae6) = *(undefined4 *)(DAT_8c093ae0 + param_4)
        ;
        uVar1 = (*(code *)PTR_FUN_8c093af8)();
        *(undefined4 *)(*(int *)((int)&param_5 + (int)DAT_8c093ae6) + 0x44) = uVar1;
        return;
      }
      iVar2 = *(int *)(iVar3 + 0x20);
      if (iVar2 == 1) {
        FUN_8c093ed6();
        return;
      }
      if (iVar2 == 2) break;
      iVar3 = param_1;
      if (iVar2 == 3) {
        FUN_8c0939a0();
        return;
      }
    }
  } while( true );
}

