// entry: 8c09392e
// name: FUN_8c09392e
// signature: undefined FUN_8c09392e(void)


void FUN_8c09392e(undefined *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_r14;
  
  iVar6 = *(int *)((int)&param_1 + (int)DAT_8c093986);
  cVar4 = **(char **)(DAT_8c093988 + iVar6);
  if (cVar4 == '\x01') {
    *(undefined4 *)((int)&param_1 + (int)DAT_8c09398a) = 0;
    *(undefined4 *)((int)&param_1 + (int)DAT_8c09398e) = 0xffffffff;
    *(undefined4 *)((int)&param_1 + (int)DAT_8c093990) = 0;
    iVar10 = *(int *)((int)&param_1 + (int)DAT_8c093990);
    iVar2 = iVar6 + DAT_8c09398c;
    iVar5 = 8;
    iVar8 = *(int *)((int)&param_1 + (int)DAT_8c09398e);
    iVar7 = *(int *)((int)&param_1 + (int)DAT_8c09398a);
    do {
      iVar3 = *(int *)(iVar2 + 0xc);
      iVar9 = iVar10;
      if ((iVar3 == 1) || (iVar9 = iVar8, iVar3 == 2)) {
        iVar7 = iVar7 + 1;
        iVar8 = iVar9;
      }
      else if (iVar3 == 3) {
        FUN_8c0939a0();
        return;
      }
      iVar5 = iVar5 + -1;
      iVar10 = iVar10 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar5 != 0);
    *(int *)((int)&param_1 + (int)DAT_8c093adc) = iVar7;
    *(int *)((int)&param_1 + (int)DAT_8c093ade) = iVar8;
    if (*(int *)((int)&param_1 + (int)DAT_8c093adc) == 1) {
      *(undefined4 *)((int)DAT_8c093ae2 + *(int *)(DAT_8c093ae0 + iVar6)) =
           *(undefined4 *)((int)&param_1 + (int)DAT_8c093ade);
      cVar4 = **(char **)(DAT_8c093ae4 + iVar6);
    }
  }
  if (cVar4 == '\0') {
    uVar1 = (*(code *)PTR_FUN_8c093afc)(*(undefined4 *)(unaff_r14 + 4));
    *(undefined4 *)((int)&param_1 + (int)DAT_8c093aea) = uVar1;
    iVar6 = *(int *)(*(int *)((int)&param_1 + (int)DAT_8c093aec) + 0x28);
    param_1 = PTR_s_____Svr_Completed_ed_Recv_Dead_B_8c093b00;
    param_2 = *(undefined4 *)((int)&param_1 + (int)DAT_8c093aea);
    (**(code **)(iVar6 + 0x68))
              (*(int *)((int)&param_1 + (int)DAT_8c093aec) + *(int *)(iVar6 + 0x60));
    iVar6 = *(int *)((int)&param_1 + (int)DAT_8c093aec);
    *(undefined4 *)((int)DAT_8c093aee + *(int *)(DAT_8c093ae0 + iVar6)) =
         *(undefined4 *)((int)&param_1 + (int)DAT_8c093aea);
  }
  *(undefined4 *)((int)&param_1 + (int)DAT_8c093ae6) = *(undefined4 *)(DAT_8c093ae0 + iVar6);
  uVar1 = (*(code *)PTR_FUN_8c093af8)();
  *(undefined4 *)(*(int *)((int)&param_1 + (int)DAT_8c093ae6) + 0x44) = uVar1;
  return;
}

