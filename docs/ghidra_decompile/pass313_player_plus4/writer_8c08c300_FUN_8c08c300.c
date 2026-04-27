// entry: 8c08c300
// name: FUN_8c08c300


undefined4 FUN_8c08c300(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  bool bVar15;
  int local_44;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar2 = PTR_FUN_8c08c478;
  bVar1 = true;
  local_44 = 1;
  iVar3 = (*(code *)PTR_FUN_8c08c478)(param_2 + 2,param_3,FUN_8c09e7e4);
  iVar4 = (*(code *)puVar2)();
  local_38 = 0;
  local_34 = 4;
  local_30 = 0;
  do {
    uVar5 = (*(code *)PTR___bfxbu_8c08c47c)();
    if ((int)local_38 < 0) {
      uVar8 = 1 >> (~local_38 & 0x1f) + 1;
    }
    else {
      uVar8 = 1 << (local_38 & 0x1f);
    }
    if ((uVar5 & uVar8) != 0) {
      local_2c = 0;
      local_28 = 2;
      do {
        iVar11 = iVar3 + *(int *)(PTR_DAT_8c08c480 +
                                 ((((*(byte *)(param_2 + 9) & 8) == 0) - 1) * -0x10 + local_2c * 2)
                                 * 4 + local_30);
        iVar9 = iVar4 + *(int *)(PTR_DAT_8c08c484 +
                                ((((*(byte *)(param_2 + 9) & 8) == 0) - 1) * -0x10 + local_2c * 2) *
                                4 + local_30);
        bVar15 = *(char *)(*(int *)(param_1 + 0x20) * iVar9 + iVar11 +
                          *(int *)(DAT_8c08c472 + param_1)) == '`';
        if (bVar15) {
          *(undefined1 *)
           (*(int *)(param_1 + 0x20) * iVar9 + iVar11 + *(int *)(DAT_8c08c472 + param_1)) = 1;
        }
        iVar6 = (*(code *)PTR_FUN_8c08c488)(param_1,iVar11,iVar9,1);
        uVar5 = 0;
        piVar10 = (int *)PTR_DAT_8c08c48c;
        do {
          if (*piVar10 == iVar6) break;
          uVar5 = uVar5 + 1;
          piVar10 = piVar10 + 1;
        } while (uVar5 < 0x12);
        if (uVar5 == 0x12) {
          bVar1 = false;
        }
        else {
          iVar12 = 0;
          iVar13 = 8;
          puVar14 = *(ushort **)(DAT_8c08c474 + param_1);
          iVar6 = (int)DAT_8c08c476;
          do {
            if (((((*(byte *)((int)puVar14 + 0xb) & 1) == 0) && ((puVar14[4] & 0x14) == 0)) &&
                ((*puVar14 & 1) != 0)) &&
               ((iVar7 = (*(code *)PTR_FUN_8c08c478)(), iVar7 == iVar11 &&
                (iVar7 = (*(code *)PTR_FUN_8c08c478)(), iVar7 == iVar9)))) {
              iVar12 = iVar12 + 1;
            }
            iVar13 = iVar13 + -1;
            puVar14 = (ushort *)((int)puVar14 + iVar6);
          } while (iVar13 != 0);
          iVar6 = (*(code *)PTR_FUN_8c08c478)();
          if (((iVar6 == iVar11) && (iVar6 = (*(code *)PTR_FUN_8c08c478)(), iVar6 == iVar9)) &&
             (0 < iVar12)) {
            iVar12 = iVar12 + -1;
          }
          local_44 = local_44 + iVar12;
          if (1 < local_44) {
            bVar1 = false;
          }
        }
        if (bVar15) {
          *(undefined1 *)
           (*(int *)(param_1 + 0x20) * iVar9 + iVar11 + *(int *)(DAT_8c08c514 + param_1)) = 0x60;
        }
        if (!bVar1) {
          return 0;
        }
        local_28 = local_28 + -1;
        local_2c = local_2c + 1;
      } while (local_28 != 0);
    }
    local_38 = local_38 + 1;
    local_30 = local_30 + 0x10;
    local_34 = local_34 + -1;
    if (local_34 == 0) {
      return 1;
    }
  } while( true );
}

