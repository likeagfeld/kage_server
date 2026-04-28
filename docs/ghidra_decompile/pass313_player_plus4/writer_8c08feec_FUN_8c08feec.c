// entry: 8c08feec
// name: FUN_8c08feec


undefined4 FUN_8c08feec(int param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint extraout_fr3;
  uint extraout_fr3_00;
  uint uVar13;
  char in_FPSCR_SZ;
  int local_44;
  int local_3c;
  
  iVar10 = *(int *)(DAT_8c09007a + param_1) + (int)DAT_8c090078 * param_2;
  iVar11 = *(int *)(param_5 + 0x18);
  if (*(char *)(iVar11 + 8) == '\0') {
    (*(code *)PTR_FUN_8c090088)(param_2 & 0xff);
    puVar2 = PTR_FUN_8c0901d0;
    puVar1 = PTR_FUN_8c09008c;
    if ((param_3 == 1) || (param_3 == 2)) {
      iVar4 = (*(code *)PTR_FUN_8c0901d0)();
      iVar5 = (*(code *)puVar2)();
      if (iVar5 < iVar4) {
        (*(code *)PTR_FUN_8c0901d4)(param_3 != 1);
      }
      else {
        iVar4 = (*(code *)puVar2)();
        iVar5 = (*(code *)puVar2)();
        if (iVar5 <= iVar4) {
          return 0;
        }
        (*(code *)PTR_FUN_8c0901d4)(param_3 == 1);
      }
    }
    else if ((param_3 == 4) || (param_3 == 8)) {
      iVar4 = (*(code *)PTR_FUN_8c09008c)(iVar11 + 2);
      iVar5 = (*(code *)puVar1)();
      if (iVar5 < iVar4) {
        (*(code *)PTR_FUN_8c090088)(param_3 == 4);
      }
      else {
        iVar4 = (*(code *)puVar1)();
        iVar5 = (*(code *)puVar1)();
        if (iVar5 <= iVar4) {
          return 0;
        }
        (*(code *)PTR_FUN_8c0902ec)(param_3 != 4);
      }
    }
    iVar4 = (*(code *)PTR_FUN_8c090090)(param_1,iVar11,param_4);
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      local_44 = 0;
      iVar4 = iVar11 + 0x1c;
      local_3c = 4;
      uVar13 = extraout_fr3;
      do {
        puVar1 = PTR_FUN_8c09008c;
        if (*(int *)(iVar4 + local_44 * 4) != 0) {
          iVar7 = *(int *)(local_44 * 4 + iVar4);
          iVar5 = (*(code *)PTR_FUN_8c09008c)();
          iVar3 = (*(code *)puVar1)(iVar7);
          iVar9 = *(int *)(param_1 + 0x20);
          if (*(int *)((iVar9 * iVar5 + iVar3) * 4 + *(int *)(DAT_8c090082 + param_1)) == iVar7) {
            (*(code *)PTR_FUN_8c0902f0)(param_1,*(undefined4 *)(iVar4 + local_44 * 4));
            iVar9 = *(int *)(param_1 + 0x20);
          }
          iVar7 = 2;
          iVar5 = (*(code *)puVar1)(iVar11 + 2,*(undefined4 *)(local_44 * 4 + iVar4));
          iVar3 = (*(code *)puVar1)();
          iVar8 = 0;
          *(undefined1 *)(iVar9 * iVar3 + iVar5 + *(int *)(DAT_8c090084 + param_1)) = 0x6d;
          do {
            iVar5 = iVar8 * 2;
            iVar9 = *(int *)(PTR_DAT_8c090094 +
                            ((((*(byte *)(iVar11 + 9) & 8) == 0) - 1) * -0x10 + iVar5) * 4 +
                            local_44 * 0x10);
            iVar8 = iVar8 + 1;
            iVar12 = *(int *)(PTR_DAT_8c090098 +
                             ((((*(byte *)(iVar11 + 9) & 8) == 0) - 1) * -0x10 + iVar5) * 4 +
                             local_44 * 0x10);
            iVar5 = (*(code *)puVar1)();
            iVar3 = (*(code *)puVar1)();
            iVar7 = iVar7 + -1;
            *(undefined1 *)
             (*(int *)(param_1 + 0x20) * (iVar3 + iVar12) + iVar5 + iVar9 +
             *(int *)(DAT_8c0901cc + param_1)) = 0x6d;
            uVar13 = extraout_fr3_00;
          } while (iVar7 != 0);
        }
        local_3c = local_3c + -1;
        local_44 = local_44 + 1;
      } while (local_3c != 0);
      if ((*(byte *)(iVar11 + 9) & 8) == 0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 0xc);
        }
        else {
          *(undefined8 *)(iVar11 + 0x10) = *(undefined8 *)(iVar11 + 0xc);
        }
      }
      else if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar11 + 0xc);
      }
      else {
        *(undefined8 *)(iVar11 + 0x10) = *(undefined8 *)(iVar11 + 0xc);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(iVar11 + 0x14) = 0;
      }
      else {
        *(ulonglong *)(iVar11 + 0x14) = (ulonglong)uVar13;
      }
      *(byte *)(iVar10 + 8) = *(byte *)(iVar10 + 8) | 2;
      *(undefined1 *)(iVar11 + 8) = 1;
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

