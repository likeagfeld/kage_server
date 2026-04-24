// entry: 8c08c516
// name: FUN_8c08c516
// signature: undefined FUN_8c08c516(void)


undefined4 FUN_8c08c516(int param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  bool bVar17;
  int local_54;
  uint local_48;
  int local_44;
  int local_40;
  int iStack_38;
  int iStack_34;
  
  puVar3 = PTR_FUN_8c08c910;
  puVar2 = PTR_FUN_8c08c810;
  iVar14 = *(int *)(param_4 + 0x18);
  if (*(char *)(iVar14 + 8) != '\0') {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    iVar7 = (*(code *)PTR_FUN_8c08c810)();
    iVar8 = (*(code *)puVar2)();
    if (iVar8 < iVar7) {
      (*(code *)PTR_FUN_8c08c80c)(param_2 != 1);
    }
    else {
      iVar7 = (*(code *)puVar2)();
      iVar8 = (*(code *)puVar2)();
      if (iVar8 <= iVar7) {
LAB_8c08c8a4:
        (*(code *)PTR_FUN_8c08c914)();
        return 0;
      }
      (*(code *)PTR_FUN_8c08c80c)(param_2 == 1);
    }
  }
  else if ((param_2 == 4) || (param_2 == 8)) {
    iVar7 = (*(code *)PTR_FUN_8c08c910)
                      (param_3,-(((*(byte *)(iVar14 + 9) & 8) == 0) - 1),iVar14 + 2,2);
    iVar8 = (*(code *)puVar3)();
    if (iVar8 < iVar7) {
      (*(code *)PTR_FUN_8c08c914)(param_2 == 4);
    }
    else {
      iVar7 = (*(code *)puVar3)();
      iVar8 = (*(code *)puVar3)();
      if (iVar8 <= iVar7) goto LAB_8c08c8a4;
      (*(code *)PTR_FUN_8c08c914)(param_2 != 4);
    }
  }
  puVar2 = PTR_FUN_8c08c6a8;
  bVar1 = true;
  local_54 = 1;
  iVar7 = (*(code *)PTR_FUN_8c08c6a8)();
  iVar8 = (*(code *)puVar2)(iVar14 + 9);
  local_44 = 4;
  local_48 = 0;
  local_40 = 0;
  do {
    uVar4 = (*(code *)PTR_FUN_8c08c6ac)();
    if ((int)local_48 < 0) {
      uVar9 = 1 >> (~local_48 & 0x1f) + 1;
    }
    else {
      uVar9 = 1 << (local_48 & 0x1f);
    }
    if ((uVar4 & uVar9) != 0) {
      iStack_38 = 0;
      iStack_34 = 2;
      do {
        iVar12 = iVar7 + *(int *)(PTR_DAT_8c08c6b0 +
                                 ((((*(byte *)(iVar14 + 9) & 8) == 0) - 1) * -0x10 + iStack_38 * 2)
                                 * 4 + local_40);
        iVar10 = iVar8 + *(int *)(PTR_DAT_8c08c6b4 +
                                 ((((*(byte *)(iVar14 + 9) & 8) == 0) - 1) * -0x10 + iStack_38 * 2)
                                 * 4 + local_40);
        bVar17 = *(char *)(*(int *)(param_1 + 0x20) * iVar10 + iVar12 +
                          *(int *)(DAT_8c08c6a2 + param_1)) == '`';
        if (bVar17) {
          *(undefined1 *)
           (*(int *)(param_1 + 0x20) * iVar10 + iVar12 + *(int *)(DAT_8c08c6a2 + param_1)) = 1;
        }
        iVar5 = (*(code *)PTR_FUN_8c08c6b8)(param_1,iVar12,iVar10,1);
        uVar4 = 0;
        piVar11 = (int *)PTR_DAT_8c08c6bc;
        do {
          if (*piVar11 == iVar5) break;
          uVar4 = uVar4 + 1;
          piVar11 = piVar11 + 1;
        } while (uVar4 < 0x12);
        if (uVar4 == 0x12) {
          bVar1 = false;
        }
        else {
          iVar13 = 0;
          iVar15 = 8;
          puVar16 = *(ushort **)(DAT_8c08c6a4 + param_1);
          iVar5 = (int)DAT_8c08c6a6;
          do {
            if (((((*(byte *)((int)puVar16 + 0xb) & 1) == 0) && ((puVar16[4] & 0x14) == 0)) &&
                ((*puVar16 & 1) != 0)) &&
               ((iVar6 = (*(code *)puVar2)(), iVar6 == iVar12 &&
                (iVar6 = (*(code *)puVar2)(), iVar6 == iVar10)))) {
              iVar13 = iVar13 + 1;
            }
            iVar15 = iVar15 + -1;
            puVar16 = (ushort *)((int)puVar16 + iVar5);
          } while (iVar15 != 0);
          iVar5 = (*(code *)puVar2)();
          if (((iVar5 == iVar12) && (iVar5 = (*(code *)puVar2)(), iVar5 == iVar10)) && (0 < iVar13))
          {
            iVar13 = iVar13 + -1;
          }
          local_54 = local_54 + iVar13;
          if (1 < local_54) {
            bVar1 = false;
          }
        }
        if (bVar17) {
          *(undefined1 *)
           (*(int *)(param_1 + 0x20) * iVar10 + iVar12 + *(int *)(DAT_8c08c806 + param_1)) = 0x60;
        }
        if (!bVar1) goto LAB_8c08c8a4;
        iStack_38 = iStack_38 + 1;
        iStack_34 = iStack_34 + -1;
      } while (iStack_34 != 0);
    }
    local_48 = local_48 + 1;
    local_40 = local_40 + 0x10;
    local_44 = local_44 + -1;
    if (local_44 == 0) {
      (*(code *)PTR_FUN_8c08c80c)();
      return 1;
    }
  } while( true );
}

