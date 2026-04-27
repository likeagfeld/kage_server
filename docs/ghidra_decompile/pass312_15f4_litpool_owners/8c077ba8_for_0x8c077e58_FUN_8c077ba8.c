// query addr: 0x8c077e58
// containing entry: 8c077ba8
// name: FUN_8c077ba8
// signature: undefined FUN_8c077ba8(void)
// body addrs: 738


void FUN_8c077ba8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 in_dr14;
  ulonglong uVar19;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  uVar4 = (uint)param_1;
  uVar17 = (undefined4)param_2;
  if (in_FPSCR_SZ == '\0') {
    puVar15 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar15 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  iVar9 = (int)DAT_8c077cda;
  uVar10 = (uint)*(byte *)((int)DAT_8c077cde + *(int *)(DAT_8c077cdc + param_3));
  if (uVar10 != 0) {
    uVar11 = 0;
    *(undefined4 *)((int)puVar15 + (int)DAT_8c077ce0 + iVar9 + -4) = 0;
    iVar12 = param_3 + DAT_8c077ce2;
    iVar13 = 8;
    do {
      if ((int)uVar11 < 0) {
        uVar4 = 1 >> (~uVar11 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar11 & 0x1f);
      }
      if (((uVar10 & uVar4) != 0) &&
         (*(undefined1 *)(uVar11 + param_3 + 0x3e) = 3, *(int *)(iVar12 + uVar11 * 4) != 0)) {
        *(uint *)((int)puVar15 + iVar9) = uVar11;
        *(undefined **)((int)puVar15 + iVar9 + -4) = PTR_s____Now_Lost_PlayerID__d_8c077ce8;
        (*(code *)PTR_FUN_8c077cec)(param_3);
        (*(code *)PTR_FUN_8c077cf0)
                  (*(undefined4 *)
                    (iVar12 + *(int *)((int)puVar15 + (int)DAT_8c077ce0 + iVar9 + -4) * 4));
        iVar5 = *(int *)(*(int *)(*(int *)((int)puVar15 + (int)DAT_8c077ce0 + iVar9 + -4) * 4 +
                                 iVar12) + 0x28);
        (**(code **)(iVar5 + 0x2c))
                  (*(int *)(iVar12 + *(int *)((int)puVar15 + (int)DAT_8c077ce0 + iVar9 + -4) * 4) +
                   *(int *)(iVar5 + 0x24));
        uVar11 = *(uint *)((int)puVar15 + (int)DAT_8c077ce0 + iVar9 + -4);
        if (*(int *)(iVar12 + uVar11 * 4) != 0) {
          if (*(int *)(iVar12 + uVar11 * 4) != 0) {
            iVar5 = *(int *)(*(int *)(uVar11 * 4 + iVar12) + 0x28);
            (**(code **)(iVar5 + 0x14))(*(int *)(iVar12 + uVar11 * 4) + *(int *)(iVar5 + 0xc),3);
          }
          uVar11 = *(uint *)((int)puVar15 + (int)DAT_8c077ce0 + iVar9 + -4);
          *(undefined4 *)(uVar11 * 4 + iVar12) = 0;
        }
      }
      uVar4 = (uint)param_1;
      uVar17 = (undefined4)param_2;
      uVar11 = uVar11 + 1;
      iVar13 = iVar13 + -1;
      *(uint *)((int)puVar15 + (int)DAT_8c077ce0 + iVar9 + -4) = uVar11;
    } while (iVar13 != 0);
    *(undefined1 *)((int)DAT_8c077cde + *(int *)(DAT_8c077cdc + param_3)) = 0;
  }
  uVar10 = (uint)in_dr14;
  iVar13 = *(int *)(DAT_8c077cdc + param_3);
  iVar12 = *(int *)(iVar13 + 0x44);
  if (iVar12 != 0x14) {
    if (iVar12 == 0x15) {
      *(undefined4 *)(iVar13 + 0x44) = 0;
      (*(code *)PTR_FUN_8c077eec)(param_3 + 0x10,1);
      return;
    }
    if (iVar12 != 0x18) {
      if (iVar12 != 0x19) {
        *(undefined **)((int)puVar15 + iVar9 + -4) = PTR_s_Server_Command_No____d__8c077ef0;
        *(undefined4 *)((int)puVar15 + iVar9) = *(undefined4 *)(iVar13 + 0x44);
        (*(code *)PTR_FUN_8c077ee8)(param_3);
        (*(code *)PTR_FUN_8c077eec)(param_3 + 0x10,1);
        return;
      }
      *(undefined4 *)(iVar13 + 0x44) = 0;
      *(undefined4 *)(DAT_8c077ce4 + param_3) = 1;
      (*(code *)PTR_FUN_8c077cf4)(param_3 + 0x10,0x1c);
      return;
    }
  }
  if ((*(int *)(DAT_8c077e44 + param_3) != 0) &&
     (uVar11 = (*(code *)PTR_FUN_8c077e5c)(), *(uint *)(DAT_8c077e46 + param_3) <= uVar11)) {
    uVar19 = (ulonglong)uVar10;
    uVar3 = (*(code *)PTR_FUN_8c077e5c)(*(undefined4 *)(DAT_8c077e44 + param_3));
    *(undefined **)((int)puVar15 + iVar9 + -4) = PTR_s_Start_Frame__ld__Now_Frame__ld__8c077e60;
    uVar6 = *(undefined4 *)(DAT_8c077e46 + param_3);
    *(undefined4 *)((int)puVar15 + iVar9 + 4) = uVar3;
    *(undefined4 *)((int)puVar15 + iVar9) = uVar6;
    (*(code *)PTR_FUN_8c077e64)(param_3);
    *(undefined4 *)(*(int *)(DAT_8c077e48 + param_3) + 0x44) = 0;
    uVar16 = uVar19;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = (ulonglong)uVar4;
    }
    (*(code *)PTR_FUN_8c077e68)(uVar16,param_3 + 0x10,0xf);
    puVar1 = PTR_s______Start_Game_a_Sync_Time______8c077e70;
    iVar12 = *(int *)PTR_DAT_8c077e6c;
    if (in_FPSCR_SZ == '\0') {
      uVar18 = CONCAT44(*(undefined4 *)(DAT_8c077e4a + param_3),uVar17);
    }
    else {
      uVar18 = *(undefined8 *)(DAT_8c077e4a + param_3);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c077e4c + param_3) = (int)((ulonglong)uVar18 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c077e4c + param_3) = uVar18;
    }
    *(undefined **)((int)puVar15 + iVar9 + 8) = puVar1;
    if (iVar12 != 0) {
      puVar7 = (undefined1 *)((int)puVar15 + iVar9 + 0xc);
      if (((uint)puVar7 & 3) != 0) {
        puVar7 = (undefined1 *)((int)puVar15 + iVar9 + 0x10);
      }
      (*(code *)PTR__vsprintf_8c077e74)((undefined1 *)((int)puVar15 + iVar9 + 0xc),puVar7);
      (*(code *)PTR_FUN_8c077e78)
                (*(undefined4 *)PTR_DAT_8c077e6c,(undefined1 *)((int)puVar15 + iVar9 + 0xc));
    }
    iVar12 = 0;
    *(undefined4 *)(DAT_8c077e4e + param_3) = 0;
    iVar5 = 8;
    *(undefined4 *)((int)puVar15 + (int)DAT_8c077e50 + iVar9 + -4) = 0;
    iVar13 = param_3 + DAT_8c077e52;
    do {
      if (*(char *)(param_3 + 0x3e + iVar12) == '\x03') {
        if (*(int *)(iVar13 + iVar12 * 4) != 0) {
          (*(code *)PTR_FUN_8c077e7c)(*(undefined4 *)(iVar13 + iVar12 * 4));
          iVar12 = *(int *)(*(int *)(*(int *)((int)puVar15 + (int)DAT_8c077e50 + iVar9 + -4) * 4 +
                                    iVar13) + 0x28);
          (**(code **)(iVar12 + 0x2c))
                    (*(int *)(iVar13 + *(int *)((int)puVar15 + (int)DAT_8c077e50 + iVar9 + -4) * 4)
                     + *(int *)(iVar12 + 0x24));
          iVar12 = *(int *)((int)puVar15 + (int)DAT_8c077e50 + iVar9 + -4);
          if (*(int *)(iVar13 + iVar12 * 4) != 0) {
            if (*(int *)(iVar13 + iVar12 * 4) != 0) {
              iVar8 = *(int *)(*(int *)(iVar12 * 4 + iVar13) + 0x28);
              (**(code **)(iVar8 + 0x14))(*(int *)(iVar13 + iVar12 * 4) + *(int *)(iVar8 + 0xc),3);
            }
            iVar12 = *(int *)((int)puVar15 + (int)DAT_8c077e50 + iVar9 + -4);
            *(undefined4 *)(iVar12 * 4 + iVar13) = 0;
          }
        }
        puVar14 = (ushort *)
                  (*(int *)((int)DAT_8c077e56 + *(int *)(DAT_8c077e54 + param_3)) +
                  DAT_8c077e58 * iVar12);
        if ((puVar14 != (ushort *)0x0) && ((*puVar14 & 1) != 0)) {
          *(int *)((int)puVar15 + iVar9) = iVar12;
          *(undefined **)((int)puVar15 + iVar9 + -4) = PTR_s____Now_Pre_Lost_PlayerID__d_8c077ee4;
          (*(code *)PTR_FUN_8c077ee8)(param_3);
          *puVar14 = *puVar14 & 0xfffe;
        }
      }
      else {
        uVar2 = uVar19;
        if (in_FPSCR_SZ == '\0') {
          uVar2 = uVar16 & 0xffffffff;
        }
        uVar16 = uVar2;
        (*(code *)PTR_FUN_8c077eec)(uVar16,*(int *)(iVar13 + iVar12 * 4) + 0x10,3);
      }
      iVar5 = iVar5 + -1;
      iVar12 = *(int *)((int)puVar15 + (int)DAT_8c077e50 + iVar9 + -4) + 1;
      *(int *)((int)puVar15 + (int)DAT_8c077e50 + iVar9 + -4) = iVar12;
    } while (iVar5 != 0);
  }
  return;
}

