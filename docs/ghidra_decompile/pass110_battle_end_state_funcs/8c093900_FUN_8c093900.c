// entry: 8c093900
// name: FUN_8c093900
// signature: undefined FUN_8c093900(void)


void FUN_8c093900(undefined *param_1,undefined4 param_2)

{
  int in_r2;
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r14;
  
  if (in_r2 == 0x15) {
    FUN_8c093b10();
    return;
  }
  if (in_r2 == 0x16) {
    FUN_8c093a74();
    return;
  }
  if (in_r2 == 0x17) {
    FUN_8c093a64();
    return;
  }
  if (in_r2 == 0x18) {
    FUN_8c093a38();
    return;
  }
  if (in_r2 == 0x19) {
    iVar5 = *(int *)((int)&param_1 + (int)DAT_8c093986);
    cVar3 = **(char **)(DAT_8c093988 + iVar5);
    if (cVar3 == '\x01') {
      *(undefined4 *)((int)&param_1 + (int)DAT_8c09398a) = 0;
      *(undefined4 *)((int)&param_1 + (int)DAT_8c09398e) = 0xffffffff;
      *(undefined4 *)((int)&param_1 + (int)DAT_8c093990) = 0;
      iVar1 = iVar5 + DAT_8c09398c;
      iVar4 = 8;
      uVar7 = *(undefined4 *)((int)&param_1 + (int)DAT_8c09398e);
      iVar6 = *(int *)((int)&param_1 + (int)DAT_8c09398a);
      do {
        iVar2 = *(int *)(iVar1 + 0xc);
        if (iVar2 == 1) {
          FUN_8c093ed6();
          return;
        }
        if (iVar2 == 2) {
          iVar6 = iVar6 + 1;
        }
        else if (iVar2 == 3) {
          FUN_8c0939a0();
          return;
        }
        iVar4 = iVar4 + -1;
        iVar1 = iVar1 + 0x14;
      } while (iVar4 != 0);
      *(int *)((int)&param_1 + (int)DAT_8c093adc) = iVar6;
      *(undefined4 *)((int)&param_1 + (int)DAT_8c093ade) = uVar7;
      if (*(int *)((int)&param_1 + (int)DAT_8c093adc) == 1) {
        *(undefined4 *)((int)DAT_8c093ae2 + *(int *)(DAT_8c093ae0 + iVar5)) =
             *(undefined4 *)((int)&param_1 + (int)DAT_8c093ade);
        cVar3 = **(char **)(DAT_8c093ae4 + iVar5);
      }
    }
    if (cVar3 == '\0') {
      uVar7 = (*(code *)PTR_FUN_8c093afc)(*(undefined4 *)(unaff_r14 + 4));
      *(undefined4 *)((int)&param_1 + (int)DAT_8c093aea) = uVar7;
      iVar5 = *(int *)(*(int *)((int)&param_1 + (int)DAT_8c093aec) + 0x28);
      param_1 = PTR_s_____Svr_Completed_ed_Recv_Dead_B_8c093b00;
      param_2 = *(undefined4 *)((int)&param_1 + (int)DAT_8c093aea);
      (**(code **)(iVar5 + 0x68))
                (*(int *)((int)&param_1 + (int)DAT_8c093aec) + *(int *)(iVar5 + 0x60));
      iVar5 = *(int *)((int)&param_1 + (int)DAT_8c093aec);
      *(undefined4 *)((int)DAT_8c093aee + *(int *)(DAT_8c093ae0 + iVar5)) =
           *(undefined4 *)((int)&param_1 + (int)DAT_8c093aea);
    }
    *(undefined4 *)((int)&param_1 + (int)DAT_8c093ae6) = *(undefined4 *)(DAT_8c093ae0 + iVar5);
    uVar7 = (*(code *)PTR_FUN_8c093af8)();
    *(undefined4 *)(*(int *)((int)&param_1 + (int)DAT_8c093ae6) + 0x44) = uVar7;
  }
  return;
}

