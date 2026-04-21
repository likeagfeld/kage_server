// entry: 8c0962a4
// name: FUN_8c0962a4
// signature: undefined FUN_8c0962a4(void)


void FUN_8c0962a4(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_stack_ffffffc4;
  undefined2 uVar12;
  
  uVar12 = (undefined2)((uint)in_stack_ffffffc4 >> 0x10);
  if (((*(int *)(*(int *)(DAT_8c0963e8 + param_1) + 0x40) == 0) &&
      (*(int *)(DAT_8c0963ea + param_1) != 0)) && (*(int *)(DAT_8c0963ec + param_1) != 0)) {
    uVar10 = (uint)*(char *)(*(int *)(DAT_8c0963ee + param_1) + 0x12);
    if ((uVar10 & (int)DAT_8c0963f0) != 0) {
      uVar10 = uVar10 & (int)DAT_8c0963f0;
      if ((((uVar10 == 3) || (uVar10 == 4)) || ((uVar10 == 5 || ((uVar10 == 6 || (uVar10 == 7))))))
         || (uVar10 == 8)) {
        iVar5 = (*(code *)PTR_FUN_8c0963f4)();
        puVar2 = PTR_FUN_8c09655c;
        if (iVar5 == 5) {
          (*(code *)PTR_FUN_8c09654c)(*(undefined4 *)(DAT_8c096528 + param_1));
          (*(code *)PTR_FUN_8c096550)(*(undefined4 *)(DAT_8c096528 + param_1));
          (*(code *)PTR_FUN_8c096554)(param_1);
          (*(code *)PTR_FUN_8c096558)(param_1);
        }
        else if (iVar5 == 6) {
          (*(code *)PTR_FUN_8c09654c)(*(undefined4 *)(DAT_8c096528 + param_1));
          (*(code *)PTR_FUN_8c09655c)(*(undefined4 *)(DAT_8c09652c + param_1));
          iVar5 = (*(code *)PTR_FUN_8c096560)(*(undefined4 *)(DAT_8c09652a + param_1));
          if (iVar5 == 0) {
            (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                      (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                       PTR_s_ERROR__Fail_Leave_From_Lobby_Req_8c096564);
          }
          *(undefined4 *)(DAT_8c09652e + param_1) = 6;
        }
        else {
          if (iVar5 == 7) {
            *(undefined4 *)(DAT_8c09652e + param_1) = 2;
            (*(code *)puVar2)(*(undefined4 *)(DAT_8c09652c + param_1));
            uVar8 = (*(code *)PTR_FUN_8c096568)(*(undefined4 *)(DAT_8c09652a + param_1));
            (*(code *)PTR_FUN_8c09656c)(*(undefined4 *)(DAT_8c09652c + param_1),uVar8);
            (*(code *)PTR_FUN_8c096570)(*(undefined4 *)(DAT_8c096528 + param_1));
          }
          else if (iVar5 == 8) {
            iVar5 = *(int *)(DAT_8c09652c + param_1);
            uVar8 = (*(code *)PTR_FUN_8c096574)();
            (*(code *)PTR_FUN_8c096578)
                      (*(undefined4 *)(DAT_8c096528 + param_1),*(undefined4 *)(iVar5 + 0x38),uVar8);
          }
          else if (iVar5 == 9) {
            uVar8 = (*(code *)PTR_FUN_8c096674)(*(undefined4 *)(DAT_8c096668 + param_1));
            (*(code *)PTR_FUN_8c096678)(*(undefined4 *)(DAT_8c09666a + param_1),uVar8);
            (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                      (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                       PTR_s_Request_QueryUserInRoomRequest___8c09667c);
            (*(code *)PTR_FUN_8c096680)(*(undefined4 *)(DAT_8c096668 + param_1));
          }
          else if (iVar5 == 10) {
            iVar5 = (*(code *)PTR_FUN_8c096684)(*(undefined4 *)(DAT_8c09666a + param_1));
            uVar8 = (*(code *)PTR_FUN_8c096688)(iVar5);
            (*(code *)PTR_FUN_8c09668c)
                      (*(undefined4 *)(DAT_8c096668 + param_1),uVar8,*(undefined4 *)(iVar5 + 4));
          }
          else {
            if (iVar5 == 0xb) {
              if (*(int *)(DAT_8c09666c + param_1) == 0) {
                iVar5 = (*(code *)PTR_FUN_8c09691c)(0);
                *(int *)(DAT_8c0968fc + param_1) = iVar5;
                (**(code **)(*(int *)(iVar5 + 0x28) + 0x20))
                          (iVar5 + *(int *)(*(int *)(iVar5 + 0x28) + 0x18));
                (*(code *)PTR_FUN_8c096920)(param_1,*(undefined4 *)(DAT_8c0968fc + param_1));
                iVar5 = (int)DAT_8c096900;
                *(undefined4 *)(*(int *)(DAT_8c0968fe + param_1) + 0x7c) =
                     *(undefined4 *)(DAT_8c0968fc + param_1);
                iVar11 = (int)DAT_8c096904;
                *(undefined4 *)(DAT_8c096902 + param_1) = 0;
                *(undefined4 *)(DAT_8c096906 + param_1) = 0xffffffff;
                *(undefined4 *)(DAT_8c096908 + param_1) = 0xffffffff;
                *(undefined4 *)(DAT_8c09690a + param_1) = 0;
                *(undefined4 *)(DAT_8c09690c + param_1) = 0xffffffff;
                *(undefined4 *)(DAT_8c09690e + param_1) = 0xffffffff;
                puVar2 = PTR_FUN_8c096924;
                (*(code *)PTR_FUN_8c096924)(param_1 + iVar5,0,iVar11);
                (*(code *)puVar2)(param_1 + DAT_8c096910,0,(int)DAT_8c096912);
                (*(code *)puVar2)(param_1 + DAT_8c096914,0,0x33);
                *(undefined4 *)(DAT_8c096916 + param_1) = 0;
                *(undefined4 *)(DAT_8c096918 + param_1) = 0;
              }
              if ((*(int *)(DAT_8c09666e + param_1) != 0) &&
                 (*(int *)(*(int *)(DAT_8c09666e + param_1) + 0x68) != 0)) {
                (*(code *)PTR_FUN_8c096690)();
              }
              uVar8 = (*(code *)PTR_FUN_8c096674)(*(undefined4 *)(DAT_8c096668 + param_1));
              iVar5 = (*(code *)PTR_FUN_8c096694)(*(undefined4 *)(DAT_8c096670 + param_1));
              iVar5 = (*(code *)PTR_FUN_8c096698)
                                (*(undefined4 *)(DAT_8c09666a + param_1),uVar8,0,iVar5 + 1);
              if (iVar5 == 0) {
                iVar11 = *(int *)(param_1 + 0x28);
                iVar5 = *(int *)(iVar11 + 0x60);
                uVar8 = (*(code *)PTR_FUN_8c096674)(*(undefined4 *)(DAT_8c096668 + param_1));
                (**(code **)(iVar11 + 0x68))
                          (param_1 + iVar5,PTR_s_Requeset_Fail_to_Join__d_room_8c0966a0,uVar8);
              }
              puVar2 = PTR_FUN_8c09669c;
              *(undefined4 *)(DAT_8c096672 + param_1) = 7;
              (*(code *)puVar2)(*(undefined4 *)(DAT_8c096668 + param_1));
              return;
            }
            if (iVar5 == 0xc) {
              iVar5 = (*(code *)PTR_FUN_8c096694)(*(undefined4 *)(DAT_8c096670 + param_1));
              (*(code *)PTR_FUN_8c0966a4)(*(undefined4 *)(DAT_8c096668 + param_1),iVar5 + 1);
            }
            else if (iVar5 == 0xd) {
              uVar8 = (*(code *)PTR_FUN_8c0967b8)(*(undefined4 *)(DAT_8c0967a8 + param_1));
              uVar3 = (*(code *)PTR_FUN_8c0967bc)(*(undefined4 *)(DAT_8c0967a8 + param_1));
              sVar4 = (*(code *)PTR_FUN_8c0967c0)(*(undefined4 *)(DAT_8c0967aa + param_1));
              iVar5 = (*(code *)PTR_FUN_8c0967c4)
                                (*(undefined4 *)(DAT_8c0967ac + param_1),uVar8,0,uVar3,
                                 CONCAT22(uVar12,sVar4 + 1),0);
              if (iVar5 != 0) {
                if (*(int *)(DAT_8c0967ae + param_1) == 0) {
                  iVar5 = (*(code *)PTR_FUN_8c09691c)(0);
                  *(int *)(DAT_8c0968fc + param_1) = iVar5;
                  (**(code **)(*(int *)(iVar5 + 0x28) + 0x20))
                            (iVar5 + *(int *)(*(int *)(iVar5 + 0x28) + 0x18));
                  (*(code *)PTR_FUN_8c096920)(param_1,*(undefined4 *)(DAT_8c0968fc + param_1));
                  iVar5 = (int)DAT_8c096900;
                  *(undefined4 *)(*(int *)(DAT_8c0968fe + param_1) + 0x7c) =
                       *(undefined4 *)(DAT_8c0968fc + param_1);
                  iVar11 = (int)DAT_8c096904;
                  *(undefined4 *)(DAT_8c096902 + param_1) = 0;
                  *(undefined4 *)(DAT_8c096906 + param_1) = 0xffffffff;
                  *(undefined4 *)(DAT_8c096908 + param_1) = 0xffffffff;
                  *(undefined4 *)(DAT_8c09690a + param_1) = 0;
                  *(undefined4 *)(DAT_8c09690c + param_1) = 0xffffffff;
                  *(undefined4 *)(DAT_8c09690e + param_1) = 0xffffffff;
                  puVar2 = PTR_FUN_8c096924;
                  (*(code *)PTR_FUN_8c096924)(param_1 + iVar5,0,iVar11);
                  (*(code *)puVar2)(param_1 + DAT_8c096910,0,(int)DAT_8c096912);
                  (*(code *)puVar2)(param_1 + DAT_8c096914,0,0x33);
                  *(undefined4 *)(DAT_8c096916 + param_1) = 0;
                  *(undefined4 *)(DAT_8c096918 + param_1) = 0;
                }
                if ((*(int *)(DAT_8c0967b0 + param_1) != 0) &&
                   (*(int *)(*(int *)(DAT_8c0967b0 + param_1) + 0x68) != 0)) {
                  (*(code *)PTR_FUN_8c0967c8)();
                }
                puVar2 = PTR_FUN_8c0967cc;
                *(undefined4 *)(DAT_8c0967b2 + param_1) = 4;
                (*(code *)puVar2)(*(undefined4 *)(DAT_8c0967a8 + param_1));
                return;
              }
            }
            else if (((iVar5 == 0xe) &&
                     (pcVar9 = (char *)(*(code *)PTR_FUN_8c0967d0)
                                                 (*(undefined4 *)(DAT_8c0967a8 + param_1),
                                                  *(int *)(DAT_8c0967b6 + param_1) +
                                                  (int)DAT_8c0967b4,0xffffffff), *pcVar9 != '\0'))
                    && (iVar5 = (*(code *)PTR_FUN_8c0967d4)
                                          (*(undefined4 *)(DAT_8c0967b6 + param_1),pcVar9,4),
                       iVar5 == 0)) {
              *(undefined4 *)(param_1 + 100) = 10;
              (*(code *)PTR_FUN_8c0967d8)(param_1);
              (*(code *)PTR_FUN_8c0967dc)(param_1);
              (*(code *)PTR_FUN_8c0967e0)(0,param_1 + 0x10,10);
            }
          }
          if ((*(int *)(DAT_8c0963ea + param_1) != 0) &&
             (0 < *(int *)(*(int *)(DAT_8c0963ea + param_1) + 0x44))) {
            iVar5 = (*(code *)PTR_FUN_8c0963f8)();
            while (iVar5 != 0) {
              cVar1 = *(char *)(iVar5 + 4);
              if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) || (cVar1 == '\x03')
                 ) {
                (*(code *)PTR_FUN_8c0967e8)
                          (*(undefined4 *)(DAT_8c0967a8 + param_1),*(undefined4 *)(iVar5 + 8),1);
              }
              else if (cVar1 == '\x04') {
                (*(code *)PTR_FUN_8c0967e4)
                          (*(undefined4 *)(DAT_8c0967a8 + param_1),*(undefined4 *)(iVar5 + 8),
                           0xffffffff);
              }
              iVar5 = (*(code *)PTR_FUN_8c0963f8)(*(undefined4 *)(DAT_8c0963ea + param_1));
            }
          }
          uVar8 = (*(code *)PTR_FUN_8c0963fc)(*(undefined4 *)(DAT_8c0963f2 + param_1),0);
          uVar6 = (*(code *)PTR_FUN_8c096530)(uVar8);
          (*(code *)PTR_FUN_8c096534)(uVar8);
          uVar7 = (*(code *)PTR_FUN_8c096530)();
          uVar8 = (*(code *)PTR_FUN_8c096534)(uVar8);
          (*(code *)PTR_FUN_8c096538)(*(undefined4 *)(DAT_8c096528 + param_1),uVar6,uVar7,uVar8);
          iVar5 = (*(code *)PTR_FUN_8c09653c)(*(undefined4 *)(DAT_8c09652a + param_1));
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0xc) != 0)) {
            uVar8 = (*(code *)PTR_FUN_8c0967ec)(iVar5);
            (*(code *)PTR_FUN_8c0967f0)
                      (*(undefined4 *)(DAT_8c0967a8 + param_1),uVar8,*(undefined4 *)(iVar5 + 4));
            *(undefined4 *)(iVar5 + 0xc) = 0;
          }
          iVar5 = (*(code *)PTR_FUN_8c096540)(*(undefined4 *)(DAT_8c09652a + param_1));
          (*(code *)PTR_FUN_8c096544)(*(undefined4 *)(DAT_8c096528 + param_1),iVar5 + 0xc);
        }
      }
      else {
        (*(code *)PTR_FUN_8c096548)();
      }
    }
  }
  return;
}

