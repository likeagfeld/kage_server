// entry: 8c08b1e4
// name: FUN_8c08b1e4


void FUN_8c08b1e4(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int unaff_r8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  float fVar13;
  double dVar14;
  ulonglong in_dr14;
  ulonglong uVar15;
  undefined8 in_xd8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar12 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar12 + -4) = in_PR;
  *(int *)((int)puVar12 + -0x20) = param_1;
  iVar6 = *(int *)(DAT_8c08b334 + param_1);
  if (iVar6 != 0) {
    *(undefined4 *)((int)puVar12 + -0x18) = 0;
    iVar7 = *(int *)(DAT_8c08b336 + param_1);
    *(int *)((int)puVar12 + -0x1c) = iVar7;
    if (0 < iVar6) {
      uVar15 = in_dr14 & 0xffffffff;
      *(int *)((int)puVar12 + -0x14) = param_1 + DAT_8c08b338;
      do {
        uVar1 = *(undefined1 *)(iVar7 + 10);
        uVar9 = 0;
        *(undefined1 *)((int)puVar12 + -0x10) = uVar1;
        *(undefined1 *)(iVar7 + 9) = uVar1;
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar7 + 0xc));
        }
        else {
          in_xd8 = *(undefined8 *)(iVar7 + 0xc);
          dVar14 = *(double *)(param_1 + 0x1c);
        }
        uVar11 = 0;
        if (in_FPSCR_PR == '\0') {
          fVar13 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 + dVar14,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(iVar7 + 0xc) = fVar13;
        }
        else {
          *(undefined8 *)(iVar7 + 0xc) = in_xd8;
        }
        iVar10 = *(int *)(param_1 + 4);
        uVar4 = (*(code *)PTR_FUN_8c08b344)();
        iVar7 = 8;
        iVar6 = *(int *)((int)DAT_8c08b33a + *(int *)((int)puVar12 + -0x20));
        uVar3 = (*(code *)PTR_FUN_8c08b344)();
        *(undefined2 *)((int)puVar12 + -0xc) = uVar3;
        do {
          if (*(char *)(iVar10 + 0xe + uVar11) != '\x03') {
            unaff_r8 = iVar6 + (int)DAT_8c08b33e * uVar11;
            uVar5 = (*(code *)PTR_FUN_8c08b344)();
            if ((uVar5 == (uVar4 & 0xffff)) &&
               (uVar5 = (*(code *)PTR_FUN_8c08b344)(), uVar5 == *(ushort *)((int)puVar12 + -0xc))) {
              if ((int)uVar11 < 0) {
                uVar5 = 1 >> (~uVar11 & 0x1f) + 1;
              }
              else {
                uVar5 = 1 << (uVar11 & 0x1f);
              }
              uVar9 = uVar9 | uVar5;
            }
          }
          iVar7 = iVar7 + -1;
          uVar11 = uVar11 + 1;
        } while (iVar7 != 0);
        iVar7 = *(int *)((int)puVar12 + -0x1c);
        *(char *)(iVar7 + 10) = (char)uVar9;
        if ((uint)*(byte *)((int)puVar12 + -0x10) != (uVar9 & 0xff)) {
          if (in_FPSCR_SZ == '\0') {
            *(int *)(iVar7 + 0xc) = (int)(uVar15 >> 0x20);
          }
          else {
            *(ulonglong *)(iVar7 + 0xc) = uVar15;
          }
          if ((*(char *)((int)puVar12 + -0x10) == '\0') && ((uVar9 & 0xff) != 0)) {
            *(undefined1 *)(iVar7 + 0xb) = 1;
            cVar2 = *(char *)(iVar7 + 8);
            if (cVar2 == 'c') {
              puVar8 = *(uint **)((int)puVar12 + -0x20);
              uVar9 = *(int *)((int)DAT_8c08b476 + (int)puVar8) + 1;
              if ((int)uVar9 < 0) {
                uVar9 = ~(~uVar9 + 1 & 3) + 1;
              }
              else {
                uVar9 = uVar9 & 3;
              }
              *(uint *)((int)DAT_8c08b476 + (int)puVar8) = uVar9;
              *puVar8 = *puVar8 | 0x10;
            }
            else if (cVar2 == 'd') {
              puVar8 = *(uint **)((int)puVar12 + -0x20);
              uVar9 = *(int *)((int)DAT_8c08b476 + (int)puVar8) + 3;
              if ((int)uVar9 < 0) {
                uVar9 = ~(~uVar9 + 1 & 3) + 1;
              }
              else {
                uVar9 = uVar9 & 3;
              }
              *(uint *)((int)DAT_8c08b476 + (int)puVar8) = uVar9;
              *puVar8 = *puVar8 | 0x10;
            }
            else if (cVar2 == 'e') {
              puVar8 = *(uint **)((int)puVar12 + -0x20);
              *(uint *)((int)DAT_8c08b478 + (int)puVar8) =
                   (uint)(*(int *)((int)DAT_8c08b478 + (int)puVar8) == 0);
              *puVar8 = *puVar8 | 0x10;
            }
            else if (cVar2 == 'f') {
              *(int *)((int)DAT_8c08b340 + *(int *)((int)puVar12 + -0x20)) =
                   1 - *(int *)((int)DAT_8c08b340 + *(int *)((int)puVar12 + -0x20));
            }
            **(uint **)((int)puVar12 + -0x14) =
                 **(uint **)((int)puVar12 + -0x14) | (int)DAT_8c08b342;
          }
          else {
            *(undefined1 *)(iVar7 + 0xb) = 2;
          }
        }
        param_1 = *(int *)((int)puVar12 + -0x20);
        iVar7 = iVar7 + 0x10;
        iVar10 = *(int *)((int)puVar12 + -0x18);
        iVar6 = *(int *)(DAT_8c08b334 + param_1);
        *(int *)((int)puVar12 + -0x1c) = iVar7;
        *(int *)((int)puVar12 + -0x18) = iVar10 + 1;
      } while (iVar10 + 1 < iVar6);
      *(int *)((int)puVar12 + -8) = unaff_r8;
    }
  }
  return;
}

