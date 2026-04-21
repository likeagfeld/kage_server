// entry: 8c096928
// name: FUN_8c096928
// signature: undefined FUN_8c096928(void)


void FUN_8c096928(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined4 in_fr3;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  code *local_3c;
  code *local_38;
  code *local_34;
  int local_30;
  int local_2c;
  
  if (*(int *)(*(int *)(DAT_8c096a6c + param_2) + 0x38) < 1) {
    (*(code *)PTR_FUN_8c096ed0)();
    (*(code *)PTR_FUN_8c096ed4)(param_2);
    *(undefined4 *)(DAT_8c096eb4 + param_2) = 1;
    if ((*(int *)(*(int *)(DAT_8c096eb6 + param_2) + 0x58) != 0) &&
       (iVar6 = (*(code *)PTR_FUN_8c096ed8)(), iVar6 == 0)) {
      uVar7 = (*(code *)PTR_FUN_8c096edc)(*(undefined4 *)(DAT_8c096eb6 + param_2));
      (*(code *)PTR_FUN_8c096ee0)(*(undefined4 *)(DAT_8c096eb6 + param_2),uVar7);
    }
  }
  else {
    (*(code *)PTR_FUN_8c096a78)(param_2);
    (*(code *)PTR_FUN_8c096a7c)(param_2);
    if (((*(int *)(*(int *)(DAT_8c096a6c + param_2) + 0x40) == 0) &&
        (*(int *)(DAT_8c096a6e + param_2) != 0)) && (*(int *)(DAT_8c096a6c + param_2) != 0)) {
      uVar12 = (uint)DAT_8c096a72;
      uVar14 = (uint)*(char *)(*(int *)(DAT_8c096a70 + param_2) + 0x12);
      if ((((uVar14 & uVar12) != 0) && ((uVar14 & uVar12) != 0x12)) &&
         ((*(int *)(DAT_8c096a74 + param_2) != 0 || (*(int *)(DAT_8c096a76 + param_2) != -1)))) {
        uVar14 = uVar14 & uVar12;
        if (((uVar14 == 9) || (uVar14 == 10)) ||
           ((uVar14 == 0xb ||
            (((((uVar14 == 0xc || (uVar14 == 0xd)) || (uVar14 == 0xe)) ||
              ((uVar14 == 0xf || (uVar14 == 0x10)))) || (uVar14 == 0x11)))))) {
          iVar6 = (*(code *)PTR_FUN_8c096a80)();
          if (iVar6 == 0x10) {
            iVar6 = (*(code *)PTR_FUN_8c096eec)();
            puVar2 = PTR_FUN_8c096f08;
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44((float)iVar6,param_1);
            }
            else {
              dVar18 = (double)iVar6;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar17 = (double)CONCAT44(DAT_8c096ef0,in_fr3);
            }
            else {
              dVar17 = (double)CONCAT44(DAT_8c096ef4,DAT_8c096ef0);
            }
            if (in_FPSCR_PR == '\0') {
              fVar19 = (float)((ulonglong)dVar18 >> 0x20) / (float)((ulonglong)dVar17 >> 0x20);
            }
            else {
              fVar19 = (float)((ulonglong)(dVar18 / dVar17) >> 0x20);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar18 = (double)CONCAT44(DAT_8c096ef4,SUB84(dVar17,0));
            }
            else {
              dVar18 = (double)CONCAT44(DAT_8c096ef8,DAT_8c096ef4);
            }
            local_3c = (code *)PTR_FUN_8c096efc;
            local_38 = (code *)PTR_FUN_8c096f00;
            if (in_FPSCR_PR == '\0') {
              dVar18 = (double)CONCAT44(fVar19 * (float)((ulonglong)dVar18 >> 0x20),DAT_8c096ef8);
            }
            else {
              dVar18 = (double)CONCAT44(fVar19,DAT_8c096ef8) * dVar18;
            }
            fVar19 = SUB84(dVar18,0);
            fVar20 = (float)((ulonglong)dVar18 >> 0x20);
            local_34 = (code *)PTR_FUN_8c096f04;
            if (in_FPSCR_PR != '\0' || fVar19 <= fVar20) {
              if (in_FPSCR_PR == '\0') {
                dVar18 = (double)CONCAT44(fVar20 - (fVar19 + fVar19),fVar19 + fVar19);
              }
              else {
                dVar18 = (dVar18 + dVar18) - (dVar18 + dVar18);
              }
            }
            if (in_FPSCR_PR == '\0') {
              iVar6 = (int)(float)((ulonglong)dVar18 >> 0x20);
            }
            else {
              iVar6 = (int)dVar18;
            }
            *(int *)((int)DAT_8c096ec2 + *(int *)(DAT_8c096ec0 + param_2)) = iVar6;
            iVar6 = (*(code *)puVar2)(param_2);
            if (iVar6 != 0) {
              *(undefined4 *)(DAT_8c096eb4 + param_2) = 10;
              *(undefined1 *)((int)DAT_8c096ec6 + *(int *)(DAT_8c096ec4 + param_2)) = 0;
            }
          }
          else if (iVar6 == 0x11) {
            local_3c = (code *)PTR_FUN_8c096efc;
            local_34 = (code *)PTR_FUN_8c096f04;
            local_38 = (code *)PTR_FUN_8c096f00;
            if ((*(uint *)(*(int *)(*(int *)(DAT_8c096ec8 + param_2) + 0x30) + 0x1c) & DAT_8c096f0c)
                == 0) {
              (*(code *)PTR_FUN_8c096f10)();
            }
            else {
              (*(code *)PTR_FUN_8c096f14)();
            }
          }
          else {
            if (iVar6 == 0x12) {
              iVar6 = (*(code *)PTR_FUN_8c097040)(*(undefined4 *)(DAT_8c097028 + param_2));
              if (iVar6 == 0) {
                (**(code **)(*(int *)(param_2 + 0x28) + 0x68))
                          (param_2 + *(int *)(*(int *)(param_2 + 0x28) + 0x60),
                           PTR_s_ERROR__Fail_Leave_From_Room_Requ_8c097044);
              }
              else {
                (*(code *)PTR_FUN_8c09704c)(param_2);
                *(undefined4 *)(DAT_8c09702c + param_2) = 9;
              }
              (*(code *)PTR_FUN_8c097048)(*(undefined4 *)(DAT_8c09702a + param_2));
              return;
            }
            if (iVar6 == 0x13) {
              local_3c = (code *)PTR_FUN_8c097050;
              local_38 = (code *)PTR_FUN_8c097054;
              local_34 = (code *)PTR_FUN_8c097058;
              if (*(int *)(DAT_8c09702e + param_2) != 0) {
                (*(code *)PTR_FUN_8c09705c)(param_2,1);
              }
            }
            else {
              if (iVar6 == 0x14) {
                (*(code *)PTR_FUN_8c097048)(*(undefined4 *)(DAT_8c09702a + param_2));
                (*(code *)PTR_FUN_8c097060)(*(undefined4 *)(DAT_8c09702a + param_2));
                (*(code *)PTR_FUN_8c097064)(param_2);
                (*(code *)PTR_FUN_8c097068)(param_2);
                return;
              }
              local_3c = (code *)PTR_FUN_8c096a84;
              local_38 = (code *)PTR_FUN_8c096a88;
              local_34 = (code *)PTR_FUN_8c096a8c;
              if (iVar6 == 0x15) {
                (*(code *)PTR_FUN_8c09706c)(param_2);
                (*(code *)PTR_FUN_8c097070)
                          (*(undefined4 *)(DAT_8c09702a + param_2),
                           *(undefined4 *)(DAT_8c097030 + param_2));
              }
              else if (iVar6 == 0x16) {
                (*(code *)PTR_FUN_8c097074)
                          (*(undefined4 *)(DAT_8c09702a + param_2),
                           *(undefined4 *)(DAT_8c097030 + param_2));
                puVar13 = *(undefined1 **)(DAT_8c097032 + param_2);
                puVar15 = *(undefined1 **)(DAT_8c097030 + param_2);
                *puVar13 = *puVar15;
                puVar13[1] = puVar15[1];
                puVar13[3] = puVar15[DAT_8c097034];
                puVar13[6] = puVar15[2];
                puVar13[4] = puVar15[DAT_8c097036];
                puVar13[5] = puVar15[DAT_8c097038];
                puVar2 = PTR_FUN_8c097078;
                puVar13[2] = puVar15[DAT_8c09703a];
                (*(code *)puVar2)(param_2);
                *(undefined4 *)(DAT_8c09703c + param_2) = 3;
                *(uint *)(DAT_8c09703e + param_2) = *(uint *)(DAT_8c09703e + param_2) | 1;
              }
              else if (iVar6 == 0x17) {
                (*(code *)PTR_FUN_8c09706c)(param_2);
                (*(code *)PTR_FUN_8c097070)
                          (*(undefined4 *)(DAT_8c09702a + param_2),
                           *(undefined4 *)(DAT_8c097030 + param_2));
              }
              else if (iVar6 == 0x18) {
                uVar7 = (*(code *)PTR_FUN_8c09707c)(*(undefined4 *)(DAT_8c09702a + param_2));
                (*(code *)PTR_FUN_8c097080)(param_2,uVar7);
              }
              else if (((iVar6 == 0x19) &&
                       (pcVar8 = (char *)(*(code *)PTR_FUN_8c0971c4)
                                                   (*(undefined4 *)(DAT_8c0971b6 + param_2),
                                                    *(int *)(DAT_8c0971ba + param_2) +
                                                    (int)DAT_8c0971b8,
                                                    *(undefined4 *)(DAT_8c0971bc + param_2)),
                       *pcVar8 != '\0')) &&
                      (iVar6 = (*(code *)PTR_FUN_8c0971c8)
                                         (*(undefined4 *)(DAT_8c0971ba + param_2),pcVar8,4),
                      iVar6 == 0)) {
                *(undefined4 *)(param_2 + 100) = 10;
                (*(code *)PTR_FUN_8c0971cc)(param_2);
                (*(code *)PTR_FUN_8c0971d0)(param_2);
                (*(code *)PTR_FUN_8c0971d4)(0,param_2 + 0x10,10);
              }
            }
          }
          if (((*(int *)(DAT_8c096a6e + param_2) != 0) &&
              (0 < *(int *)(*(int *)(DAT_8c096a6e + param_2) + 0x44))) &&
             (piVar3 = (int *)(*(code *)PTR_FUN_8c096bec)(), piVar3 != (int *)0x0)) {
            iVar6 = (int)DAT_8c096bda;
            do {
              cVar1 = (char)piVar3[1];
              if (((cVar1 == '\0') || (cVar1 == '\x01')) || ((cVar1 == '\x02' || (cVar1 == '\x03')))
                 ) {
                (*(code *)PTR_FUN_8c0971d8)(*(undefined4 *)(DAT_8c0971b6 + param_2),piVar3[2],1);
              }
              else if (cVar1 == '\x04') {
                iVar11 = -1;
                iVar16 = 0;
                do {
                  iVar9 = *(int *)(param_2 + iVar6 + iVar16 * 0x14 + 0xc);
                  iVar10 = iVar16;
                  if (((iVar9 == 1) || (iVar9 == 3)) &&
                     (*(int *)(param_2 + iVar6 + iVar16 * 0x14) == *piVar3)) {
                    iVar10 = 8;
                    iVar11 = iVar16;
                  }
                  iVar16 = iVar10 + 1;
                } while (iVar16 < 8);
                (*(code *)PTR_FUN_8c096bf0)
                          (*(undefined4 *)(DAT_8c096bdc + param_2),piVar3[2],iVar11,iVar11,*piVar3);
              }
              piVar3 = (int *)(*(code *)PTR_FUN_8c096bec)(*(undefined4 *)(DAT_8c096bde + param_2));
            } while (piVar3 != (int *)0x0);
          }
          uVar12 = *(uint *)(*(int *)(*(int *)(DAT_8c096be0 + param_2) + 0x30) + 0x1c) &
                   DAT_8c096bf4;
          (*(code *)PTR_FUN_8c096bf8)(*(undefined4 *)(DAT_8c096bdc + param_2));
          if (*(int *)(DAT_8c096be2 + param_2) == 0) {
            if (uVar12 != 0) {
              (*(code *)PTR_FUN_8c0971d8)
                        (*(undefined4 *)(DAT_8c0971b6 + param_2),
                         PTR_s_This_game_room_has_been_locked__8c0971e0,0);
            }
          }
          else if (uVar12 == 0) {
            (*(code *)PTR_FUN_8c0971d8)
                      (*(undefined4 *)(DAT_8c0971b6 + param_2),
                       PTR_s_This_game_room_has_been_unlocked_8c0971dc,0);
          }
          puVar2 = PTR_FUN_8c096bfc;
          *(uint *)(DAT_8c096be2 + param_2) = uVar12;
          uVar7 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c096be0 + param_2));
          (*(code *)PTR_FUN_8c096c00)(*(undefined4 *)(DAT_8c096bdc + param_2),uVar7);
          if (*(int *)(DAT_8c096be4 + param_2) == 0) {
            (*(code *)PTR_FUN_8c0971e4)
                      (*(undefined4 *)(DAT_8c0971b6 + param_2),0xffffffff,0xffffffff);
          }
          else {
            (*(code *)PTR_FUN_8c096c04)
                      (*(undefined4 *)(DAT_8c096bdc + param_2),
                       **(undefined1 **)(DAT_8c096be6 + param_2),
                       (*(undefined1 **)(DAT_8c096be6 + param_2))[1]);
          }
          (*(code *)PTR_FUN_8c096c08)
                    (*(undefined4 *)(DAT_8c096bdc + param_2),*(undefined4 *)(DAT_8c096be4 + param_2)
                    );
          (*(code *)PTR_FUN_8c096c0c)
                    (*(undefined4 *)(DAT_8c096bdc + param_2),*(undefined4 *)(DAT_8c096be8 + param_2)
                    );
          iVar6 = *(int *)(*(int *)(DAT_8c096be0 + param_2) + 0x68);
          if ((iVar6 != 0) && (*(int *)(iVar6 + 0xc) != 0)) {
            (*(code *)PTR_FUN_8c0971e8)(param_2);
            puVar2 = PTR_s_The_number_of_players_in_this_ro_8c0971ec;
            iVar6 = (int)DAT_8c0971b6;
            *(undefined4 *)(*(int *)(*(int *)(DAT_8c0971be + param_2) + 0x68) + 0xc) = 0;
            (*(code *)PTR_FUN_8c0971d8)(*(undefined4 *)(iVar6 + param_2),puVar2,0);
          }
          puVar2 = PTR_DAT_8c096d80;
          local_30 = 0;
          local_2c = 0;
          iVar16 = 8;
          iVar6 = param_2 + DAT_8c096d6e;
          iVar11 = (int)DAT_8c096d70;
          uVar12 = 0;
          do {
            if ((int)uVar12 < 0) {
              uVar14 = 1 >> (~uVar12 & 0x1f) + 1;
            }
            else {
              uVar14 = 1 << (uVar12 & 0x1f);
            }
            uVar14 = *(uint *)(DAT_8c096d72 + param_2) & uVar14;
            if (uVar14 != 0) {
              local_2c = local_2c + 1;
            }
            iVar10 = *(int *)(uVar12 * 0x14 + iVar6 + 0xc);
            if (iVar10 == 1) {
              (*(code *)PTR_FUN_8c0971f0)(*(undefined4 *)(DAT_8c0971b6 + param_2),uVar14);
LAB_8c096c6c:
              if (*(char *)(uVar12 * 0x10 + param_2 + iVar11) == '\0') {
                (*local_3c)(*(undefined4 *)(DAT_8c0971b6 + param_2),uVar12,puVar2);
              }
              else {
                (*local_3c)(*(undefined4 *)(DAT_8c096d74 + param_2),uVar12,
                            uVar12 * 0x10 + param_2 + iVar11);
                local_30 = local_30 + 1;
              }
              (*local_38)(*(undefined4 *)(DAT_8c096d74 + param_2),uVar12,1);
              (*local_34)(*(undefined4 *)(DAT_8c096d74 + param_2),uVar12,uVar14);
            }
            else {
              if ((iVar10 == 2) || (iVar10 == 3)) goto LAB_8c096c6c;
              (*local_3c)(*(undefined4 *)(DAT_8c0971b6 + param_2),uVar12,puVar2);
              (*local_38)(*(undefined4 *)(DAT_8c0971b6 + param_2),uVar12,0);
              (*local_34)(*(undefined4 *)(DAT_8c0971b6 + param_2),uVar12,0);
              (*(code *)PTR_FUN_8c0971f4)
                        (*(undefined4 *)(DAT_8c0971b6 + param_2),uVar12,0,(int)DAT_8c0971c0);
            }
            uVar7 = 0;
            if ((*(int *)(uVar12 * 0x14 + iVar6 + 0xc) == 3) &&
               (*(int *)(uVar12 * 0x14 + iVar6 + 8) == 0)) {
              uVar7 = 1;
            }
            (*(code *)PTR_FUN_8c096d84)(*(undefined4 *)(DAT_8c096d74 + param_2),uVar12,uVar7);
            iVar16 = iVar16 + -1;
            uVar12 = uVar12 + 1;
          } while (iVar16 != 0);
          uVar7 = 0;
          if ((((*(int *)(DAT_8c096d76 + param_2) != 0) &&
               ((*(uint *)(*(int *)(*(int *)(DAT_8c096d78 + param_2) + 0x30) + 0x1c) & DAT_8c096d88)
                != 0)) && (1 < local_30)) && (local_30 == local_2c)) {
            uVar7 = 1;
          }
          (*(code *)PTR_FUN_8c096d8c)(*(undefined4 *)(DAT_8c096d74 + param_2),uVar7);
          if (*(int *)(DAT_8c096d7a + param_2) != 0) {
            (*(code *)PTR_FUN_8c0971d8)
                      (*(undefined4 *)(DAT_8c0971b6 + param_2),
                       PTR_s_Returned_to_the_game_room_due_to_8c0971f8,0);
            *(undefined4 *)(DAT_8c0971c2 + param_2) = 0;
          }
          uVar7 = (*(code *)PTR_FUN_8c096d90)(*(undefined4 *)(DAT_8c096d7c + param_2),0);
          uVar4 = (*(code *)PTR_FUN_8c096d94)(uVar7);
          (*(code *)PTR_FUN_8c096d98)(uVar7);
          uVar5 = (*(code *)PTR_FUN_8c096d94)();
          uVar7 = (*(code *)PTR_FUN_8c096d98)(uVar7);
          (*(code *)PTR_FUN_8c096ecc)(*(undefined4 *)(DAT_8c096d74 + param_2),uVar4,uVar5,uVar7);
        }
        else {
          (*(code *)PTR_FUN_8c096ee4)();
          if ((*(int *)(DAT_8c096eb8 + param_2) < 0) ||
             (*(int *)(DAT_8c096eba + param_2) != *(int *)(DAT_8c096ebc + param_2))) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          (*(code *)PTR_FUN_8c096ee8)(*(undefined4 *)(DAT_8c096ebe + param_2),uVar7);
        }
      }
    }
  }
  return;
}

