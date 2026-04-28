// entry: 8c093842
// name: FUN_8c093842
// signature: undefined FUN_8c093842(void)


void FUN_8c093842(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_8;
  
  iVar3 = (int)DAT_8c093984;
  iVar7 = *(int *)PTR_DAT_8c093994;
  *(int *)((int)&local_8 + DAT_8c093986 + iVar3) = iVar7;
  if (iVar7 != 0) {
    (*(code *)PTR_FUN_8c093998)(param_1);
    iVar7 = (*(code *)PTR_FUN_8c09399c)();
    if (iVar7 == 6) {
      FUN_8c093eaa();
      return;
    }
    if (iVar7 == 7) {
      FUN_8c093e9c();
      return;
    }
    if (iVar7 == 8) {
      FUN_8c093e8e();
      return;
    }
    if (iVar7 == 9) {
      FUN_8c093e78();
      return;
    }
    if (iVar7 == 10) {
      FUN_8c093e22();
      return;
    }
    if (iVar7 == 0xb) {
      FUN_8c093dc6();
      return;
    }
    if (iVar7 == 0xc) {
      FUN_8c093db8();
      return;
    }
    if (iVar7 == 0xd) {
      FUN_8c093daa();
      return;
    }
    if (iVar7 == 0xe) {
      FUN_8c093d9c();
      return;
    }
    if (iVar7 == 0xf) {
      FUN_8c093d7e();
      return;
    }
    if (iVar7 == 0x10) {
      FUN_8c093d70();
      return;
    }
    if (iVar7 == 0x11) {
      FUN_8c093d5c();
      return;
    }
    if (iVar7 == 0x12) {
      FUN_8c093ce0();
      return;
    }
    if (iVar7 == 0x13) {
      FUN_8c093bbc();
      return;
    }
    if (iVar7 == 0x14) {
      FUN_8c093b70();
      return;
    }
    if (iVar7 == 0x15) {
      FUN_8c093b10();
      return;
    }
    if (iVar7 == 0x16) {
      FUN_8c093a74();
      return;
    }
    if (iVar7 == 0x17) {
      FUN_8c093a64();
      return;
    }
    if (iVar7 == 0x18) {
      FUN_8c093a38();
      return;
    }
    if (iVar7 == 0x19) {
      iVar7 = *(int *)((int)&local_8 + DAT_8c093986 + iVar3);
      cVar4 = **(char **)(DAT_8c093988 + iVar7);
      if (cVar4 == '\x01') {
        *(undefined4 *)((int)&local_8 + DAT_8c09398a + iVar3) = 0;
        *(undefined4 *)((int)&local_8 + DAT_8c09398e + iVar3) = 0xffffffff;
        *(undefined4 *)((int)&local_8 + DAT_8c093990 + iVar3) = 0;
        iVar1 = iVar7 + DAT_8c09398c;
        iVar6 = 8;
        uVar9 = *(undefined4 *)((int)&local_8 + DAT_8c09398e + iVar3);
        iVar8 = *(int *)((int)&local_8 + DAT_8c09398a + iVar3);
        do {
          iVar2 = *(int *)(iVar1 + 0xc);
          if (iVar2 == 1) {
            FUN_8c093ed6();
            return;
          }
          if (iVar2 == 2) {
            iVar8 = iVar8 + 1;
          }
          else if (iVar2 == 3) {
            FUN_8c0939a0();
            return;
          }
          iVar6 = iVar6 + -1;
          iVar1 = iVar1 + 0x14;
        } while (iVar6 != 0);
        *(int *)((int)&local_8 + DAT_8c093adc + iVar3) = iVar8;
        *(undefined4 *)((int)&local_8 + DAT_8c093ade + iVar3) = uVar9;
        if (*(int *)((int)&local_8 + DAT_8c093adc + iVar3) == 1) {
          *(undefined4 *)((int)DAT_8c093ae2 + *(int *)(DAT_8c093ae0 + iVar7)) =
               *(undefined4 *)((int)&local_8 + DAT_8c093ade + iVar3);
          cVar4 = **(char **)(DAT_8c093ae4 + iVar7);
        }
      }
      if (cVar4 == '\0') {
        uVar9 = (*(code *)PTR_FUN_8c093afc)(*(undefined4 *)(param_1 + 4));
        *(undefined4 *)((int)&local_8 + DAT_8c093aea + iVar3) = uVar9;
        iVar1 = *(int *)((int)&local_8 + DAT_8c093aec + iVar3);
        iVar7 = *(int *)(iVar1 + 0x28);
        iVar6 = *(int *)(iVar7 + 0x60);
        pcVar5 = *(code **)(iVar7 + 0x68);
        *(undefined **)((int)&local_8 + iVar3) = PTR_s_____Svr_Completed_ed_Recv_Dead_B_8c093b00;
        *(undefined4 *)(&stack0xfffffffc + iVar3) =
             *(undefined4 *)((int)&local_8 + DAT_8c093aea + iVar3);
        (*pcVar5)(iVar1 + iVar6);
        iVar7 = *(int *)((int)&local_8 + DAT_8c093aec + iVar3);
        *(undefined4 *)((int)DAT_8c093aee + *(int *)(DAT_8c093ae0 + iVar7)) =
             *(undefined4 *)((int)&local_8 + DAT_8c093aea + iVar3);
      }
      *(undefined4 *)((int)&local_8 + DAT_8c093ae6 + iVar3) = *(undefined4 *)(DAT_8c093ae0 + iVar7);
      uVar9 = (*(code *)PTR_FUN_8c093af8)();
      *(undefined4 *)(*(int *)((int)&local_8 + DAT_8c093ae6 + iVar3) + 0x44) = uVar9;
    }
  }
  return;
}

