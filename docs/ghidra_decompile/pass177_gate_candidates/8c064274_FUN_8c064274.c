// entry: 8c064274
// name: FUN_8c064274
// signature: undefined FUN_8c064274(void)


void FUN_8c064274(ulonglong param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_20;
  
  puVar1 = PTR_FUN_8c0643ac;
  uVar8 = (uint)param_1;
  if (in_FPSCR_SZ == '\0') {
    puVar7 = (undefined8 *)((int)&local_20 + 4);
    local_20 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_20);
  }
  else {
    puVar7 = &local_20;
    local_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar7 + -4) = in_PR;
  uVar9 = param_1;
  if (in_FPSCR_SZ == '\0') {
    uVar9 = in_dr14 & 0xffffffff;
  }
  uVar4 = 0;
  if (param_3 == 0) {
    iVar6 = 0;
    iVar5 = 0;
    iVar3 = (*(code *)PTR_FUN_8c0643ac)(*(undefined4 *)(DAT_8c06439e + param_2));
    puVar2 = PTR_FUN_8c0643b0;
    uVar8 = (uint)param_1;
    if (0 < iVar3) {
      do {
        iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c06439e + param_2),iVar5,2);
        if (iVar3 == 4) {
          iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c0645ba + param_2),iVar5,3);
          uVar8 = (uint)param_1;
          if (iVar3 == 0) {
            if (iVar6 == 0) {
              iVar3 = *(int *)(iVar5 * 4 + *(int *)(DAT_8c0645bc + param_2));
              goto LAB_8c064330;
            }
            iVar6 = iVar6 + -1;
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = (*(code *)puVar1)(*(undefined4 *)(DAT_8c06439e + param_2));
        uVar8 = (uint)param_1;
      } while (iVar5 < iVar3);
    }
    iVar3 = 0;
LAB_8c064330:
    puVar1 = PTR_FUN_8c0643a0;
    uVar4 = *(undefined4 *)(iVar3 + 4);
    if (in_FPSCR_SZ == '\0') {
      uVar9 = (ulonglong)uVar8;
    }
    (*(code *)PTR_FUN_8c0643a0)(uVar9,uVar4,1,0);
    (*(code *)puVar1)(uVar4,4,param_4);
  }
  else if (param_3 == 1) {
    iVar6 = 0;
    iVar5 = 0;
    iVar3 = (*(code *)PTR_FUN_8c0643ac)(*(undefined4 *)(DAT_8c06439e + param_2));
    puVar2 = PTR_FUN_8c0643b0;
    uVar8 = (uint)param_1;
    if (0 < iVar3) {
      do {
        iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c06439e + param_2),iVar5,2);
        if (iVar3 == 4) {
          iVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c0645ba + param_2),iVar5,3);
          uVar8 = (uint)param_1;
          if (iVar3 == 1) {
            if (iVar6 == 0) {
              iVar3 = *(int *)(iVar5 * 4 + *(int *)(DAT_8c0645bc + param_2));
              goto LAB_8c06437e;
            }
            iVar6 = iVar6 + -1;
          }
        }
        iVar5 = iVar5 + 1;
        iVar3 = (*(code *)puVar1)(*(undefined4 *)(DAT_8c06439e + param_2));
        uVar8 = (uint)param_1;
      } while (iVar5 < iVar3);
    }
    iVar3 = 0;
LAB_8c06437e:
    uVar4 = *(undefined4 *)(iVar3 + 4);
    if (in_FPSCR_SZ == '\0') {
      uVar9 = (ulonglong)uVar8;
    }
    *(undefined **)((int)puVar7 + -0x14) = PTR_FUN_8c0643a0;
    (*(code *)PTR_FUN_8c0643a0)(uVar9,uVar4,1,0);
    (**(code **)((int)puVar7 + -0x14))(uVar4,4,param_4);
  }
  else if (param_3 == 2) {
    if (param_5 == 1) {
      iVar6 = 0;
      uVar4 = *(undefined4 *)(DAT_8c0644da + param_2);
      *(undefined4 *)((int)puVar7 + -0x24) = 0;
      *(undefined **)((int)puVar7 + -8) = PTR_FUN_8c0644e0;
      iVar3 = (*(code *)PTR_FUN_8c0644e0)(uVar4);
      uVar8 = (uint)param_1;
      if (0 < iVar3) {
        *(undefined **)((int)puVar7 + -0x18) = PTR_FUN_8c0644e4;
        do {
          iVar3 = (**(code **)((int)puVar7 + -0x18))
                            (*(undefined4 *)(DAT_8c0644da + param_2),iVar6,2);
          if (iVar3 == 4) {
            iVar3 = (**(code **)((int)puVar7 + -0x18))
                              (*(undefined4 *)(DAT_8c0645ba + param_2),iVar6,3);
            uVar8 = (uint)param_1;
            if (iVar3 == 4) {
              if (*(int *)((int)puVar7 + -0x24) == 0) {
                iVar3 = *(int *)(iVar6 * 4 + *(int *)(DAT_8c0645bc + param_2));
                goto LAB_8c064470;
              }
              *(int *)((int)puVar7 + -0x24) = *(int *)((int)puVar7 + -0x24) + -1;
            }
          }
          iVar6 = iVar6 + 1;
          iVar3 = (**(code **)((int)puVar7 + -8))(*(undefined4 *)(DAT_8c0644da + param_2));
          uVar8 = (uint)param_1;
        } while (iVar6 < iVar3);
      }
      iVar3 = 0;
LAB_8c064470:
      uVar4 = *(undefined4 *)(iVar3 + 4);
    }
    else if (param_5 == 2) {
      iVar6 = 0;
      uVar4 = *(undefined4 *)(DAT_8c0644da + param_2);
      *(undefined4 *)((int)puVar7 + -0x24) = 0;
      *(undefined **)((int)puVar7 + -0xc) = PTR_FUN_8c0644e0;
      iVar3 = (*(code *)PTR_FUN_8c0644e0)(uVar4);
      uVar8 = (uint)param_1;
      if (0 < iVar3) {
        *(undefined **)((int)puVar7 + -0x18) = PTR_FUN_8c0644e4;
        do {
          iVar3 = (**(code **)((int)puVar7 + -0x18))
                            (*(undefined4 *)(DAT_8c0644da + param_2),iVar6,2);
          if (iVar3 == 4) {
            iVar3 = (**(code **)((int)puVar7 + -0x18))
                              (*(undefined4 *)(DAT_8c0644da + param_2),iVar6,3);
            uVar8 = (uint)param_1;
            if (iVar3 == 5) {
              if (*(int *)((int)puVar7 + -0x24) == 0) {
                iVar3 = *(int *)(iVar6 * 4 + *(int *)(DAT_8c0644dc + param_2));
                goto LAB_8c0644ac;
              }
              *(int *)((int)puVar7 + -0x24) = *(int *)((int)puVar7 + -0x24) + -1;
            }
          }
          iVar6 = iVar6 + 1;
          iVar3 = (**(code **)((int)puVar7 + -0xc))(*(undefined4 *)(DAT_8c0644da + param_2));
          uVar8 = (uint)param_1;
        } while (iVar6 < iVar3);
      }
      iVar3 = 0;
LAB_8c0644ac:
      uVar4 = *(undefined4 *)(iVar3 + 4);
    }
    else if (param_5 == 4) {
      iVar6 = 0;
      uVar4 = *(undefined4 *)(DAT_8c0644da + param_2);
      *(undefined4 *)((int)puVar7 + -0x24) = 0;
      *(undefined **)((int)puVar7 + -0x10) = PTR_FUN_8c0644e0;
      iVar3 = (*(code *)PTR_FUN_8c0644e0)(uVar4);
      uVar8 = (uint)param_1;
      if (0 < iVar3) {
        *(undefined **)((int)puVar7 + -0x18) = PTR_FUN_8c0644e4;
        do {
          iVar3 = (**(code **)((int)puVar7 + -0x18))
                            (*(undefined4 *)(DAT_8c0644da + param_2),iVar6,2);
          if (iVar3 == 4) {
            iVar3 = (**(code **)((int)puVar7 + -0x18))
                              (*(undefined4 *)(DAT_8c0645ba + param_2),iVar6,3);
            uVar8 = (uint)param_1;
            if (iVar3 == 3) {
              if (*(int *)((int)puVar7 + -0x24) == 0) {
                iVar3 = *(int *)(iVar6 * 4 + *(int *)(DAT_8c0645bc + param_2));
                goto LAB_8c064434;
              }
              *(int *)((int)puVar7 + -0x24) = *(int *)((int)puVar7 + -0x24) + -1;
            }
          }
          iVar6 = iVar6 + 1;
          iVar3 = (**(code **)((int)puVar7 + -0x10))(*(undefined4 *)(DAT_8c0644da + param_2));
          uVar8 = (uint)param_1;
        } while (iVar6 < iVar3);
      }
      iVar3 = 0;
LAB_8c064434:
      uVar4 = *(undefined4 *)(iVar3 + 4);
    }
    else if (param_5 == 8) {
      uVar4 = *(undefined4 *)(DAT_8c0644da + param_2);
      *(undefined4 *)((int)puVar7 + -0x24) = 0;
      *(undefined4 *)((int)puVar7 + -0x20) = 0;
      *(undefined **)((int)puVar7 + -0x1c) = PTR_FUN_8c0644e0;
      iVar3 = (*(code *)PTR_FUN_8c0644e0)(uVar4);
      uVar8 = (uint)param_1;
      if (0 < iVar3) {
        *(undefined **)((int)puVar7 + -0x18) = PTR_FUN_8c0644e4;
        do {
          iVar3 = (**(code **)((int)puVar7 + -0x18))
                            (*(undefined4 *)(DAT_8c0644da + param_2),
                             *(undefined4 *)((int)puVar7 + -0x20),2);
          if (iVar3 == 4) {
            iVar3 = (**(code **)((int)puVar7 + -0x18))
                              (*(undefined4 *)(DAT_8c0645ba + param_2),
                               *(undefined4 *)((int)puVar7 + -0x20),3);
            uVar8 = (uint)param_1;
            if (iVar3 == 2) {
              if (*(int *)((int)puVar7 + -0x24) == 0) {
                iVar3 = *(int *)(*(int *)((int)puVar7 + -0x20) * 4 +
                                *(int *)(DAT_8c0645bc + param_2));
                goto LAB_8c0643f8;
              }
              *(int *)((int)puVar7 + -0x24) = *(int *)((int)puVar7 + -0x24) + -1;
            }
          }
          uVar4 = *(undefined4 *)(DAT_8c0644da + param_2);
          *(int *)((int)puVar7 + -0x20) = *(int *)((int)puVar7 + -0x20) + 1;
          iVar3 = (**(code **)((int)puVar7 + -0x1c))(uVar4);
          uVar8 = (uint)param_1;
        } while (*(int *)((int)puVar7 + -0x20) < iVar3);
      }
      iVar3 = 0;
LAB_8c0643f8:
      uVar4 = *(undefined4 *)(iVar3 + 4);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar9 = (ulonglong)uVar8;
    }
    *(undefined **)((int)puVar7 + -0x14) = PTR_FUN_8c0643a0;
    (*(code *)PTR_FUN_8c0643a0)(uVar9,uVar4,1,0);
    (**(code **)((int)puVar7 + -0x14))(uVar4,4,param_4);
  }
  (*(code *)PTR_FUN_8c0643a4)(uVar4);
  (*(code *)PTR_FUN_8c0643a8)(uVar4);
  return;
}

