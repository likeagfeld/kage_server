// entry: 8c090bea
// name: FUN_8c090bea


/* WARNING: Removing unreachable block (ram,0x8c090f12) */

void FUN_8c090bea(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = *(int *)(param_1 + 4);
  iVar10 = 0;
  uVar9 = 0;
  uVar6 = 0;
  iVar7 = 8;
  do {
    if (*(char *)(iVar8 + 0xe + uVar6) != '\x03') {
      iVar4 = *(int *)(DAT_8c090cb6 + param_1) + (int)DAT_8c090cb0 * uVar6;
      if ((((*(byte *)(iVar4 + 8) & 4) == 0) || (cVar1 = *(char *)(iVar4 + 0x19), cVar1 == '\x04'))
         || (cVar1 == '\x05')) {
        if ((int)uVar6 < 0) {
          uVar2 = 1 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar2 = 1 << (uVar6 & 0x1f);
        }
        uVar9 = uVar9 & ~uVar2;
        iVar10 = iVar10 + 1;
      }
      else {
        if ((int)uVar6 < 0) {
          uVar2 = 1 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar2 = 1 << (uVar6 & 0x1f);
        }
        uVar9 = uVar9 | uVar2;
      }
    }
    iVar7 = iVar7 + -1;
    uVar6 = uVar6 + 1;
  } while (iVar7 != 0);
  if (iVar10 == 0) {
    uVar6 = 0;
    iVar7 = 8;
    do {
      if (*(char *)(uVar6 + *(int *)(param_1 + 4) + 0xe) != '\x03') {
        if ((int)uVar6 < 0) {
          uVar2 = 1 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar2 = 1 << (uVar6 & 0x1f);
        }
        if ((uVar9 & uVar2) != 0) {
          *(uint *)((int)DAT_8c090cb4 + *(int *)(param_1 + 0xc)) =
               *(uint *)((int)DAT_8c090cb4 + *(int *)(param_1 + 0xc)) | uVar2;
          *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 8) =
               *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 8) + 1;
        }
      }
      iVar7 = iVar7 + -1;
      uVar6 = uVar6 + 1;
    } while (iVar7 != 0);
  }
  else if (*(char *)(iVar8 + 2) == '\0') {
    if (iVar10 == 1) {
      uVar6 = 0;
      iVar7 = 8;
      do {
        if (*(char *)(uVar6 + *(int *)(param_1 + 4) + 0xe) != '\x03') {
          if ((int)uVar6 < 0) {
            uVar2 = 1 >> (~uVar6 & 0x1f) + 1;
          }
          else {
            uVar2 = 1 << (uVar6 & 0x1f);
          }
          if ((uVar9 & uVar2) == 0) {
            *(uint *)((int)DAT_8c090f20 + *(int *)(param_1 + 0xc)) =
                 *(uint *)((int)DAT_8c090f20 + *(int *)(param_1 + 0xc)) | uVar2;
            *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c) =
                 *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c) + 1;
          }
          else {
            *(uint *)((int)DAT_8c090de8 + *(int *)(param_1 + 0xc)) =
                 *(uint *)((int)DAT_8c090de8 + *(int *)(param_1 + 0xc)) | uVar2;
            *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 4) =
                 *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 4) + 1;
          }
        }
        iVar7 = iVar7 + -1;
        uVar6 = uVar6 + 1;
      } while (iVar7 != 0);
      iVar8 = 0;
      iVar10 = 0;
      iVar7 = 8;
      *(undefined4 *)((int)DAT_8c090dec + *(int *)(param_1 + 0xc)) = 0;
      do {
        iVar4 = *(int *)(param_1 + 0xc);
        if (*(int *)(DAT_8c090dec + iVar4) < *(int *)(iVar4 + iVar8)) {
          *(undefined4 *)(DAT_8c090dec + iVar4) = *(undefined4 *)(iVar4 + iVar10);
        }
        iVar7 = iVar7 + -1;
        iVar10 = iVar10 + 0x2c;
        iVar8 = iVar8 + 0x2c;
      } while (iVar7 != 0);
    }
    else {
      uVar6 = 0;
      iVar7 = 8;
      do {
        if (*(char *)(uVar6 + *(int *)(param_1 + 4) + 0xe) != '\x03') {
          iVar8 = *(int *)(param_1 + 0xc);
          if ((int)uVar6 < 0) {
            uVar9 = 1 >> (~uVar6 & 0x1f) + 1;
          }
          else {
            uVar9 = 1 << (uVar6 & 0x1f);
          }
          if ((*(uint *)(DAT_8c090f22 + iVar8) & uVar9) == 0) {
            *(uint *)(DAT_8c090f24 + iVar8) = *(uint *)(DAT_8c090f24 + iVar8) | uVar9;
            *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 8) =
                 *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 8) + 1;
          }
        }
        iVar7 = iVar7 + -1;
        uVar6 = uVar6 + 1;
      } while (iVar7 != 0);
    }
  }
  else {
    iVar4 = 0;
    iVar11 = 0;
    iVar7 = 0;
    iVar10 = 8;
    do {
      if ((*(char *)(iVar8 + 0xe + iVar7) != '\x03') &&
         (((iVar5 = *(int *)(DAT_8c090cb6 + param_1) + DAT_8c090cb0 * iVar7,
           (*(byte *)(iVar5 + 8) & 4) == 0 || (cVar1 = *(char *)(iVar5 + 0x19), cVar1 == '\x04')) ||
          (cVar1 == '\x05')))) {
        if (*(char *)(iVar8 + 6 + iVar7) == '\x01') {
          iVar11 = iVar11 + 1;
        }
        else if (*(char *)(iVar8 + 6 + iVar7) == '\x02') {
          iVar4 = iVar4 + 1;
        }
      }
      iVar10 = iVar10 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar10 != 0);
    if ((iVar11 == 0) || (iVar4 == 0)) {
      if (iVar11 <= iVar4) {
        FUN_8c090e72();
        return;
      }
      uVar6 = 0;
      iVar7 = 8;
      uVar2 = 0;
      uVar9 = 0;
      do {
        if (*(char *)(uVar6 + *(int *)(param_1 + 4) + 0xe) != '\x03') {
          if (*(char *)(uVar6 + *(int *)(param_1 + 4) + 6) == '\x01') {
            if ((int)uVar6 < 0) {
              uVar3 = 1 >> (~uVar6 & 0x1f) + 1;
            }
            else {
              uVar3 = 1 << (uVar6 & 0x1f);
            }
            uVar2 = uVar2 | uVar3;
            *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c) =
                 *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c) + 1;
          }
          else {
            if ((int)uVar6 < 0) {
              uVar3 = 1 >> (~uVar6 & 0x1f) + 1;
            }
            else {
              uVar3 = 1 << (uVar6 & 0x1f);
            }
            uVar9 = uVar9 | uVar3;
            *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 4) =
                 *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 4) + 1;
          }
        }
        iVar7 = iVar7 + -1;
        uVar6 = uVar6 + 1;
      } while (iVar7 != 0);
      *(uint *)((int)DAT_8c090f20 + *(int *)(param_1 + 0xc)) = uVar2;
      *(uint *)((int)DAT_8c090f22 + *(int *)(param_1 + 0xc)) = uVar9;
      *(int *)((int)DAT_8c090f26 + *(int *)(param_1 + 0xc)) =
           *(int *)((int)DAT_8c090f26 + *(int *)(param_1 + 0xc)) + 1;
      iVar8 = *(int *)(param_1 + 0xc);
      iVar7 = *(int *)(DAT_8c090f28 + iVar8);
      if (*(int *)(DAT_8c090f28 + iVar8) <= *(int *)(DAT_8c090f26 + iVar8)) {
        iVar7 = *(int *)(DAT_8c090f26 + iVar8);
      }
      *(int *)(DAT_8c090f2a + iVar8) = iVar7;
    }
    else {
      if (iVar11 != iVar4) {
        FUN_8c090f2c();
        return;
      }
      uVar6 = 0;
      iVar7 = 8;
      do {
        if (*(char *)(uVar6 + *(int *)(param_1 + 4) + 0xe) != '\x03') {
          iVar8 = *(int *)(param_1 + 0xc);
          if ((int)uVar6 < 0) {
            uVar9 = 1 >> (~uVar6 & 0x1f) + 1;
          }
          else {
            uVar9 = 1 << (uVar6 & 0x1f);
          }
          if ((*(uint *)(DAT_8c090de8 + iVar8) & uVar9) == 0) {
            *(uint *)(DAT_8c090dea + iVar8) = *(uint *)(DAT_8c090dea + iVar8) | uVar9;
            *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 8) =
                 *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 0x2c + 8) + 1;
          }
        }
        iVar7 = iVar7 + -1;
        uVar6 = uVar6 + 1;
      } while (iVar7 != 0);
    }
  }
  return;
}

