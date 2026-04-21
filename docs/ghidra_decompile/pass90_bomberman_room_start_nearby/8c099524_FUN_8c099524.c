// entry: 8c099524
// name: FUN_8c099524
// signature: undefined FUN_8c099524(void)


void FUN_8c099524(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_44 [20];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  *(undefined4 *)(DAT_8c09967e + param_1) = 0;
  puVar1 = PTR_FUN_8c09968c;
  iVar7 = 8;
  local_28 = param_1;
  local_24 = (*(code *)PTR_FUN_8c09968c)(*(undefined4 *)(param_2 + 4));
  param_1 = param_1 + DAT_8c099680;
  iVar8 = param_1;
  do {
    (*(code *)PTR_FUN_8c099690)(iVar8,0,0x14);
    iVar7 = iVar7 + -1;
    iVar8 = iVar8 + 0x14;
  } while (iVar7 != 0);
  iVar8 = 0;
  puVar5 = (undefined4 *)(param_2 + 4);
  if (0 < local_24) {
    do {
      puVar6 = puVar5 + 2;
      iVar7 = (*(code *)puVar1)(puVar5[1]);
      iVar2 = (*(code *)puVar1)(*puVar6);
      if (iVar2 + -1 < 0) {
        iVar3 = 0;
        if (0 < iVar2) {
          do {
            local_30 = iVar8;
            puVar6 = puVar6 + 1;
            iVar8 = (*(code *)puVar1)(*puVar6);
            if (iVar8 < 8) {
              if (iVar7 == *(int *)(DAT_8c099682 + local_28)) {
                if (iVar3 == 0) {
                  *(int *)(iVar8 * 0x14 + param_1) = iVar7;
                  *(undefined4 *)(iVar8 * 0x14 + param_1 + 0xc) = 1;
                  *(int *)(iVar8 * 0x14 + param_1 + 4) = iVar2;
                  *(undefined4 *)(iVar8 * 0x14 + param_1 + 8) = 0;
                }
                else {
                  *(undefined4 *)(iVar8 * 0x14 + param_1) = 0;
                  *(int *)(iVar8 * 0x14 + param_1 + 4) = iVar2;
                  *(int *)(iVar8 * 0x14 + param_1 + 8) = iVar3;
                  *(undefined4 *)(iVar8 * 0x14 + param_1 + 0xc) = 2;
                }
              }
              else {
                *(int *)(iVar8 * 0x14 + param_1) = iVar7;
                *(int *)(iVar8 * 0x14 + param_1 + 8) = iVar3;
                *(undefined4 *)(iVar8 * 0x14 + param_1 + 0xc) = 3;
                *(int *)(iVar8 * 0x14 + param_1 + 4) = iVar2;
              }
            }
            iVar3 = iVar3 + 1;
            iVar8 = local_30;
          } while (iVar3 < iVar2);
        }
      }
      else {
        iVar3 = (*(code *)puVar1)(puVar5[3]);
        if (iVar3 < 8) {
          if (iVar7 == *(int *)(DAT_8c099808 + local_28)) {
            *(int *)(iVar3 * 0x14 + param_1) = iVar7;
            *(undefined4 *)(iVar3 * 0x14 + param_1 + 0xc) = 1;
            *(undefined4 *)(iVar3 * 0x14 + param_1 + 8) = 0;
            *(int *)(iVar3 * 0x14 + param_1 + 4) = iVar2;
          }
          else {
            *(int *)(iVar3 * 0x14 + param_1) = iVar7;
            *(int *)(iVar3 * 0x14 + param_1 + 4) = iVar2;
            *(undefined4 *)(iVar3 * 0x14 + param_1 + 8) = 0;
            *(undefined4 *)(iVar3 * 0x14 + param_1 + 0xc) = 3;
          }
        }
        puVar6 = puVar5 + 3;
        iVar3 = 1;
        if (1 < iVar2) {
          do {
            local_2c = iVar8;
            puVar6 = puVar6 + 1;
            iVar8 = (*(code *)puVar1)(*puVar6);
            if (iVar8 < 8) {
              if (iVar7 == *(int *)(DAT_8c099808 + local_28)) {
                *(undefined4 *)(iVar8 * 0x14 + param_1) = 0;
                *(int *)(iVar8 * 0x14 + param_1 + 4) = iVar2;
                *(int *)(iVar8 * 0x14 + param_1 + 8) = iVar3;
                *(undefined4 *)(iVar8 * 0x14 + param_1 + 0xc) = 2;
              }
              else {
                *(int *)(iVar8 * 0x14 + param_1) = iVar7;
                *(int *)(iVar8 * 0x14 + param_1 + 4) = iVar2;
                *(undefined4 *)(iVar8 * 0x14 + param_1 + 0xc) = 3;
                *(int *)(iVar8 * 0x14 + param_1 + 8) = iVar3;
              }
            }
            iVar3 = iVar3 + 1;
            iVar8 = local_2c;
          } while (iVar3 < iVar2);
        }
      }
      iVar8 = iVar8 + 1;
      puVar5 = puVar6;
    } while (iVar8 < local_24);
  }
  iVar8 = local_28;
  iVar2 = 0;
  iVar7 = 8;
  iVar3 = *(int *)(DAT_8c099684 + local_28) + 0xe;
  do {
    if ((*(int *)(iVar2 * 0x14 + param_1 + 0xc) == 0) && (*(char *)(iVar3 + iVar2) != '\x03')) {
      *(undefined1 *)(iVar2 + iVar3) = 3;
    }
    iVar7 = iVar7 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar7 != 0);
  if (*(int *)(DAT_8c099686 + local_28) != 0) {
    iVar3 = 0;
    (*(code *)PTR_FUN_8c099694)(auStack_44);
    puVar1 = PTR_FUN_8c099698;
    iVar7 = (int)DAT_8c099688;
    iVar2 = 8;
    do {
      (*(code *)PTR_FUN_8c099690)(iVar3 * 0x10 + iVar8 + iVar7,0,0x10);
      iVar4 = *(int *)(iVar3 * 0x14 + param_1 + 0xc);
      if (iVar4 == 1) {
        iVar4 = (*(code *)PTR_FUN_8c0999a0)
                          (*(undefined4 *)(*(int *)(DAT_8c09998a + local_28) + 0x68),
                           *(undefined4 *)(DAT_8c09998c + local_28));
        if (iVar4 != 0) {
          (*(code *)puVar1)(auStack_44);
          (*(code *)PTR_FUN_8c0999a4)
                    (auStack_44,*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x14));
        }
      }
      else if (iVar4 == 2) {
        iVar4 = (*(code *)PTR_FUN_8c0999a0)
                          (*(undefined4 *)(*(int *)(DAT_8c09998a + local_28) + 0x68),
                           *(undefined4 *)(DAT_8c09998c + local_28));
        if (iVar4 != 0) {
          (*(code *)puVar1)(auStack_44);
          (*(code *)PTR_FUN_8c0999a4)
                    (auStack_44,*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x14));
        }
      }
      else if (iVar4 == 3) {
        iVar4 = (*(code *)PTR_FUN_8c099818)
                          (*(undefined4 *)(*(int *)(DAT_8c09980a + local_28) + 0x68),
                           *(undefined4 *)(iVar3 * 0x14 + param_1));
        if (iVar4 != 0) {
          (*(code *)puVar1)(auStack_44);
          (*(code *)PTR_FUN_8c09981c)
                    (auStack_44,*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x14));
        }
      }
      else {
        iVar4 = 0;
      }
      if (iVar4 != 0) {
        (*(code *)PTR_FUN_8c09980c)(auStack_44,*(undefined4 *)(iVar3 * 0x14 + param_1 + 8));
        (*(code *)PTR_FUN_8c099810)();
      }
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar2 != 0);
    (*(code *)puVar1)(auStack_44);
    (*(code *)PTR_FUN_8c099814)(auStack_44,2);
  }
  return;
}

