// query addr: 0x8c08d640
// containing entry: 8c08d534
// name: FUN_8c08d534
// signature: undefined FUN_8c08d534(void)
// body addrs: 718


void FUN_8c08d534(undefined4 param_1,uint *param_2,ushort *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 in_xd8;
  char in_FPSCR_SZ;
  
  puVar3 = PTR_FUN_8c08d7ac;
  puVar2 = PTR_FUN_8c08d640;
  if ((*param_2 & 2) != 0) {
    if ((*param_3 & 1) == 0) {
      (*(code *)PTR_FUN_8c08d7ac)(*(undefined4 *)PTR_DAT_8c08d7a4,PTR_s_On_Panel_ASSERT____8c08d7a8)
      ;
      (*(code *)puVar3)(*(undefined4 *)PTR_DAT_8c08d7a4,PTR_s_Panel__d_was_not_Used__8c08d7b0,
                        param_3[2],param_3[2]);
      return;
    }
    iVar6 = (*(code *)PTR_FUN_8c08d640)(0xf);
    uVar8 = param_2[8];
    iVar7 = (*(code *)puVar2)();
    iVar9 = *(int *)((int)DAT_8c08d63e + (int)param_2);
    if (*(int *)((uVar8 * iVar6 + iVar7) * 4 + iVar9) != 0) {
      iVar6 = (*(code *)puVar2)();
      iVar7 = (*(code *)puVar2)();
      puVar3 = PTR_FUN_8c08d64c;
      if (*(ushort **)((uVar8 * iVar6 + iVar7) * 4 + iVar9) == param_3) {
        (*(code *)PTR_FUN_8c08d7ac)
                  (*(undefined4 *)PTR_DAT_8c08d7a4,PTR_s_On_Panel_Warning__Allready_On_Pa_8c08d7b8,
                   param_3[2],param_3[2]);
        return;
      }
      (*(code *)PTR_FUN_8c08d64c)(*(undefined4 *)PTR_DAT_8c08d644,PTR_s_On_Panel_ASSERT____8c08d648)
      ;
      uVar4 = (*(code *)puVar2)();
      uVar5 = (*(code *)puVar2)(uVar4);
      iVar6 = (*(code *)puVar2)(uVar5);
      uVar8 = param_2[8];
      iVar7 = (*(code *)puVar2)(iVar6);
      (*(code *)puVar3)(*(undefined4 *)PTR_DAT_8c08d644,
                        PTR_s_Now_X__d_Y__d_allready_put_on_Pa_8c08d650,uVar4,uVar5,
                        *(undefined2 *)
                         (*(int *)((uVar8 * iVar6 + iVar7) * 4 +
                                  *(int *)((int)DAT_8c08d63e + (int)param_2)) + 4));
      (*(code *)puVar3)(*(undefined4 *)PTR_DAT_8c08d644,
                        PTR_s_Requester_Panel__d_can_not_offpa_8c08d654,param_3[2]);
      return;
    }
    (*(code *)PTR_FUN_8c08d7ac)
              (*(undefined4 *)PTR_DAT_8c08d7a4,PTR_s_On_Panel__d_Passed__8c08d7b4,param_3[2]);
  }
  puVar2 = PTR_FUN_8c08d794;
  iVar6 = (*(code *)PTR_FUN_8c08d794)();
  iVar7 = (*(code *)puVar2)();
  (*(code *)PTR_FUN_8c08d798)(param_2,iVar6,iVar7,1);
  iVar9 = *(int *)((param_2[8] * iVar7 + iVar6) * 4 + *(int *)((int)DAT_8c08d78a + (int)param_2));
  if ((iVar9 == 0) || (*(int *)(iVar9 + 8) != 2)) {
    if (*(int *)((param_2[8] * iVar7 + iVar6) * 4 + *(int *)((int)DAT_8c08d78e + (int)param_2)) == 0
       ) {
      iVar9 = (*(code *)PTR_FUN_8c08d7bc)(param_2,iVar6,iVar7);
      if ((iVar9 == 0) || ((*(byte *)(iVar9 + 9) & 0x7f) != 0)) {
        bVar1 = *(byte *)(iVar6 + param_2[8] * iVar7 + *(int *)((int)DAT_8c08d790 + (int)param_2));
        uVar4 = DAT_8c08d8f8._4_4_;
        if (bVar1 < 0x1c) {
          if (0xf < bVar1) {
            uVar4 = DAT_8c08d7c0;
            if (in_FPSCR_SZ != '\0') {
              in_xd8 = CONCAT44(uRam8c08d7c4,DAT_8c08d7c0);
              uVar4 = param_1;
            }
            goto LAB_8c08d698;
          }
        }
        else if (bVar1 < 0x4c) {
          if ((*(char *)param_2[1] == '\x04') && (((char *)param_2[1])[1] == '\x03')) {
            uVar4 = 0;
          }
          else if (*(short *)(param_2[2] + 0x18) == 0) {
            if (in_FPSCR_SZ != '\0') {
              in_xd8 = CONCAT44(PTR_FUN_8c08d900,DAT_8c08d8f8._4_4_);
              uVar4 = param_1;
            }
          }
          else {
            uVar4 = DAT_8c08d8f4;
            if (in_FPSCR_SZ != '\0') {
              in_xd8 = CONCAT44((undefined4)DAT_8c08d8f8,DAT_8c08d8f4);
              uVar4 = param_1;
            }
          }
          goto LAB_8c08d698;
        }
        if (bVar1 == 0) {
          uVar4 = (undefined4)DAT_8c08d8f8;
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44(DAT_8c08d8f8._4_4_,(undefined4)DAT_8c08d8f8);
            uVar4 = param_1;
          }
        }
        else if ((bVar1 == 0x5f) || (bVar1 == 0x60)) {
          uVar4 = (undefined4)DAT_8c08d8f8;
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44(DAT_8c08d8f8._4_4_,(undefined4)DAT_8c08d8f8);
            uVar4 = param_1;
          }
        }
        else if ((((bVar1 == 99) || (bVar1 == 100)) || (bVar1 == 0x65)) || (bVar1 == 0x66)) {
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44(PTR_FUN_8c08d900,DAT_8c08d8f8._4_4_);
            uVar4 = param_1;
          }
        }
        else if (bVar1 == 0x67) {
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44(PTR_FUN_8c08d900,DAT_8c08d8f8._4_4_);
            uVar4 = param_1;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = (undefined4)DAT_8c08d8f8;
        if (in_FPSCR_SZ != '\0') {
          in_xd8 = CONCAT44(DAT_8c08d8f8._4_4_,(undefined4)DAT_8c08d8f8);
          uVar4 = param_1;
        }
      }
    }
    else {
      uVar4 = 0x3f800000;
    }
  }
  else {
    uVar4 = DAT_8c08d79c;
    if (in_FPSCR_SZ != '\0') {
      in_xd8 = CONCAT44(PTR_FUN_8c08d7a0,DAT_8c08d79c);
      uVar4 = param_1;
    }
  }
LAB_8c08d698:
  puVar3 = PTR_FUN_8c08d7a0;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(param_3 + 0x10) = uVar4;
  }
  else {
    *(undefined8 *)(param_3 + 0x10) = in_xd8;
  }
  (*(code *)puVar3)(param_2[2],param_3 + 1,param_3 + 0xe,param_3 + 0x12);
  iVar6 = (*(code *)puVar2)();
  uVar8 = param_2[8];
  iVar7 = (*(code *)puVar2)();
  *(ushort **)((uVar8 * iVar6 + iVar7) * 4 + *(int *)((int)DAT_8c08d78c + (int)param_2)) = param_3;
                    /* WARNING: Read-only address (ram,0x8c08d7c4) is written */
  return;
}

