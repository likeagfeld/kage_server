// entry: 8c08897a
// name: FUN_8c08897a


undefined4 FUN_8c08897a(uint *param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int local_40 [10];
  uint local_18;
  undefined1 *local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  piVar5 = local_40;
  piVar16 = local_40;
  local_c = param_1[3];
  iVar14 = 0;
  local_8 = param_1[1];
  iVar8 = 8;
  uVar9 = *(uint *)((int)DAT_8c088a56 + local_c);
  uVar7 = 0;
  uVar12 = *param_1 & 2;
  iVar10 = *(int *)((int)DAT_8c088a60 + (int)param_1);
  local_10 = param_1;
  iVar11 = (int)DAT_8c088a62;
  uVar13 = uVar9;
  do {
    if (*(char *)(local_8 + 0xe + uVar7) != '\x03') {
      if ((uVar12 != 0) && ((*(byte *)(iVar11 * uVar7 + iVar10 + 0xb) & 6) != 0)) {
        return 0;
      }
      iVar6 = iVar10 + iVar11 * uVar7;
      if ((((*(byte *)(iVar6 + 8) & 4) == 0) || (cVar2 = *(char *)(iVar6 + 0x19), cVar2 == '\x04'))
         || (cVar2 == '\x05')) {
        if ((int)uVar7 < 0) {
          uVar3 = 1 >> (~uVar7 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar7 & 0x1f);
        }
        uVar13 = uVar13 & ~uVar3;
        iVar14 = iVar14 + 1;
      }
      else {
        if ((int)uVar7 < 0) {
          uVar3 = 1 >> (~uVar7 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar7 & 0x1f);
        }
        uVar13 = uVar13 | uVar3;
      }
    }
    iVar8 = iVar8 + -1;
    uVar7 = uVar7 + 1;
  } while (iVar8 != 0);
  if (iVar14 == 0) {
    if (uVar12 == 0) {
      uVar7 = 0;
      iVar8 = 8;
      do {
        if (*(char *)(uVar7 + param_1[1] + 0xe) != '\x03') {
          if ((int)uVar7 < 0) {
            uVar12 = 1 >> (~uVar7 & 0x1f) + 1;
          }
          else {
            uVar12 = 1 << (uVar7 & 0x1f);
          }
          if (((uVar9 & uVar12) == 0) && ((uVar13 & uVar12) != 0)) {
            *(uint *)((int)DAT_8c088a58 + param_1[3]) =
                 *(uint *)((int)DAT_8c088a58 + param_1[3]) | uVar12;
            *(int *)(param_1[3] + uVar7 * 0x2c + 8) = *(int *)(param_1[3] + uVar7 * 0x2c + 8) + 1;
          }
        }
        iVar8 = iVar8 + -1;
        uVar7 = uVar7 + 1;
      } while (iVar8 != 0);
      return 1;
    }
    return 1;
  }
  if (*(char *)(local_8 + 2) == '\0') {
    if (iVar14 == 1) {
      if (uVar12 != 0) {
        local_14 = (undefined1 *)local_40;
        local_18 = ~uVar13;
        uVar7 = 0;
        iVar8 = 8;
        do {
          puVar1 = local_10;
          local_40[uVar7] = *(int *)(local_10[3] + uVar7 * 0x2c);
          if (*(char *)(uVar7 + puVar1[1] + 0xe) != '\x03') {
            if ((int)uVar7 < 0) {
              uVar9 = 1 >> (~uVar7 & 0x1f) + 1;
            }
            else {
              uVar9 = 1 << (uVar7 & 0x1f);
            }
            if ((~uVar13 & uVar9) != 0) {
              local_40[uVar7] = local_40[uVar7] + 1;
            }
          }
          iVar8 = iVar8 + -1;
          uVar7 = uVar7 + 1;
        } while (iVar8 != 0);
        iVar8 = 8;
        *(undefined4 *)((int)DAT_8c088b8e + local_10[3]) = 0;
        do {
          if (*(int *)((int)DAT_8c088b8e + local_10[3]) < *piVar5) {
            *(int *)((int)DAT_8c088b8e + local_10[3]) = *piVar16;
          }
          iVar8 = iVar8 + -1;
          piVar16 = piVar16 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar8 != 0);
        return 1;
      }
      uVar7 = 0;
      iVar8 = 8;
      do {
        if (*(char *)(uVar7 + param_1[1] + 0xe) != '\x03') {
          if ((int)uVar7 < 0) {
            uVar9 = 1 >> (~uVar7 & 0x1f) + 1;
          }
          else {
            uVar9 = 1 << (uVar7 & 0x1f);
          }
          if ((uVar13 & uVar9) == 0) {
            *(uint *)((int)DAT_8c088c66 + local_c) = *(uint *)((int)DAT_8c088c66 + local_c) | uVar9;
            *(int *)(param_1[3] + uVar7 * 0x2c) = *(int *)(param_1[3] + uVar7 * 0x2c) + 1;
            local_c = param_1[3];
          }
          else {
            *(uint *)((int)DAT_8c088c62 + local_c) = *(uint *)((int)DAT_8c088c62 + local_c) | uVar9;
            *(int *)(param_1[3] + uVar7 * 0x2c + 4) = *(int *)(param_1[3] + uVar7 * 0x2c + 4) + 1;
            local_c = param_1[3];
          }
        }
        iVar8 = iVar8 + -1;
        uVar7 = uVar7 + 1;
      } while (iVar8 != 0);
      iVar10 = 0;
      iVar11 = 0;
      iVar8 = 8;
      *(undefined4 *)((int)DAT_8c088c64 + local_c) = 0;
      do {
        uVar13 = param_1[3];
        if (*(int *)((int)DAT_8c088c64 + uVar13) < *(int *)(uVar13 + iVar10)) {
          *(undefined4 *)((int)DAT_8c088c64 + uVar13) = *(undefined4 *)(uVar13 + iVar11);
        }
        iVar8 = iVar8 + -1;
        iVar11 = iVar11 + 0x2c;
        iVar10 = iVar10 + 0x2c;
      } while (iVar8 != 0);
      return 1;
    }
    if (uVar12 != 0) {
      return 0;
    }
    *(uint *)((int)DAT_8c088c62 + local_c) = uVar13;
  }
  else {
    iVar6 = 0;
    iVar15 = 0;
    iVar8 = 0;
    iVar14 = 8;
    do {
      if ((*(char *)(local_8 + 0xe + iVar8) != '\x03') &&
         (((iVar4 = iVar10 + iVar11 * iVar8, (*(byte *)(iVar4 + 8) & 4) == 0 ||
           (*(char *)(iVar4 + 0x19) == '\x04')) || (*(char *)(iVar4 + 0x19) == '\x05')))) {
        if ((uVar12 != 0) && ((*(byte *)(iVar4 + 0xb) & 6) != 0)) {
          return 0;
        }
        if (*(char *)(local_8 + 6 + iVar8) == '\x01') {
          iVar15 = iVar15 + 1;
        }
        else if (*(char *)(local_8 + 6 + iVar8) == '\x02') {
          iVar6 = iVar6 + 1;
        }
      }
      iVar14 = iVar14 + -1;
      iVar8 = iVar8 + 1;
    } while (iVar14 != 0);
    if ((iVar15 == 0) || (iVar6 == 0)) {
      uVar13 = 0;
      uVar7 = 0;
      if (iVar6 < iVar15) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\x02';
      }
      if (uVar12 == 0) {
        uVar9 = 0;
        iVar8 = 8;
        do {
          if (*(char *)(uVar9 + param_1[1] + 0xe) != '\x03') {
            if (*(char *)(uVar9 + param_1[1] + 6) == cVar2) {
              if ((int)uVar9 < 0) {
                uVar12 = 1 >> (~uVar9 & 0x1f) + 1;
              }
              else {
                uVar12 = 1 << (uVar9 & 0x1f);
              }
              uVar13 = uVar13 | uVar12;
              *(int *)(local_c + uVar9 * 0x2c) = *(int *)(local_c + uVar9 * 0x2c) + 1;
              local_c = param_1[3];
            }
            else {
              if ((int)uVar9 < 0) {
                uVar12 = 1 >> (~uVar9 & 0x1f) + 1;
              }
              else {
                uVar12 = 1 << (uVar9 & 0x1f);
              }
              uVar7 = uVar7 | uVar12;
              *(int *)(local_c + uVar9 * 0x2c + 4) = *(int *)(local_c + uVar9 * 0x2c + 4) + 1;
              local_c = param_1[3];
            }
          }
          iVar8 = iVar8 + -1;
          uVar9 = uVar9 + 1;
        } while (iVar8 != 0);
        *(uint *)((int)DAT_8c088d66 + local_c) = uVar13;
        *(uint *)((int)DAT_8c088d68 + param_1[3]) = uVar7;
        if (cVar2 == '\x01') {
          *(int *)((int)DAT_8c088d6a + param_1[3]) = *(int *)((int)DAT_8c088d6a + param_1[3]) + 1;
        }
        else {
          *(int *)((int)DAT_8c088d6c + param_1[3]) = *(int *)((int)DAT_8c088d6c + param_1[3]) + 1;
        }
        uVar13 = param_1[3];
        iVar8 = *(int *)((int)DAT_8c088d6c + uVar13);
        if (*(int *)((int)DAT_8c088d6c + uVar13) <= *(int *)((int)DAT_8c088d6a + uVar13)) {
          iVar8 = *(int *)((int)DAT_8c088d6a + uVar13);
        }
        *(int *)((int)DAT_8c088d6e + uVar13) = iVar8;
        return 1;
      }
      iVar8 = *(int *)((int)DAT_8c088d6a + local_c);
      iVar10 = *(int *)((int)DAT_8c088d6c + local_c);
      if (iVar15 != iVar6) {
        if (cVar2 == '\x01') {
          iVar8 = iVar8 + 1;
        }
        else {
          iVar10 = iVar10 + 1;
        }
        if (iVar8 < iVar10) {
          iVar8 = iVar10;
        }
        *(int *)((int)DAT_8c088d6e + local_c) = iVar8;
        return 1;
      }
      return 0;
    }
    *(uint *)((int)DAT_8c088b8c + local_c) = uVar13;
  }
  return 0;
}

