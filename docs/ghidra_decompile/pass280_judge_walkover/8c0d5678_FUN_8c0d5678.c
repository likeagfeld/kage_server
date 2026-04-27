// entry: 8c0d5678
// name: FUN_8c0d5678
// signature: undefined FUN_8c0d5678(void)


void FUN_8c0d5678(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  double dVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  puVar2 = PTR_s_333_CDrawable_8c0d57b8;
  puVar1 = PTR_DAT_8c0d57a0;
  if ((*(uint *)(DAT_8c0d578c + param_2) & 4) != 0) {
    iVar9 = *(int *)(DAT_8c0d578e + param_2);
    if (iVar9 == 0) {
      uVar3 = FUN_8c0d4c3c(param_2,*(undefined4 *)(DAT_8c0d5792 + param_2),
                           *(undefined4 *)(DAT_8c0d5794 + param_2));
      *(undefined4 *)(DAT_8c0d578e + param_2) = uVar3;
    }
    else {
      if (((int)*(char *)(iVar9 + 0x12) & (int)DAT_8c0d5790) == 3) {
        if (*(int *)(iVar9 + 0x30) == 0) {
          if (*(int *)(iVar9 + 0x2c) == 1) {
            *(undefined4 *)(DAT_8c0d5796 + param_2) = 6;
            if (in_FPSCR_SZ == '\0') {
              uVar11 = CONCAT44(*(undefined4 *)puVar1,param_1);
            }
            else {
              uVar11 = *(undefined8 *)puVar1;
            }
            (*(code *)PTR_FUN_8c0d57a8)(uVar11,DAT_8c0d57a4,DAT_8c0d57ac);
            puVar1 = PTR_FUN_8c0d579c;
            if (in_FPSCR_SZ == '\0') {
              uVar11 = CONCAT44(*(undefined4 *)PTR_DAT_8c0d57a0,(int)uVar11);
            }
            else {
              uVar11 = *(undefined8 *)PTR_DAT_8c0d57a0;
            }
            (*(code *)PTR_FUN_8c0d579c)(uVar11,param_2 + 0x10,4);
            uVar3 = (undefined4)uVar11;
            (*(code *)PTR_FUN_8c0d57b4)(*DAT_8c0d57b0,0xffffffff);
            if (in_FPSCR_SZ == '\0') {
              uVar11 = CONCAT44(*(undefined4 *)PTR_DAT_8c0d57a0,uVar3);
            }
            else {
              uVar11 = *(undefined8 *)PTR_DAT_8c0d57a0;
            }
            (*(code *)puVar1)(uVar11,*(int *)(DAT_8c0d578a + param_2) + 0x10,3);
            return;
          }
        }
        else if ((*(int *)(iVar9 + 0x30) == 5) && (*(int *)(iVar9 + 0x2c) == 0)) {
          *(undefined4 *)(DAT_8c0d5796 + param_2) = 5;
          if (in_FPSCR_SZ == '\0') {
            uVar11 = CONCAT44(*(undefined4 *)puVar2,param_1);
          }
          else {
            uVar11 = *(undefined8 *)puVar2;
          }
          (*(code *)PTR_FUN_8c0d57a8)(uVar11,DAT_8c0d57a4,DAT_8c0d57ac);
          puVar1 = PTR_FUN_8c0d579c;
          if (in_FPSCR_SZ == '\0') {
            uVar11 = CONCAT44(*(undefined4 *)PTR_s_333_CDrawable_8c0d57b8,(int)uVar11);
          }
          else {
            uVar11 = *(undefined8 *)PTR_s_333_CDrawable_8c0d57b8;
          }
          (*(code *)PTR_FUN_8c0d579c)(uVar11,param_2 + 0x10,4,PTR_FUN_8c0d579c);
          uVar10 = (undefined4)uVar11;
          uVar3 = (*(code *)PTR_FUN_8c0d57bc)(*DAT_8c0d57b0);
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)PTR_s_333_CDrawable_8c0d57b8,DAT_8c0d57c0);
          }
          else {
            dVar12 = *(double *)PTR_s_333_CDrawable_8c0d57b8;
          }
          if (in_FPSCR_PR == '\0') {
            iVar9 = (int)((float)((ulonglong)dVar12 >> 0x20) * SUB84(dVar12,0));
          }
          else {
            iVar9 = (int)(dVar12 * dVar12);
          }
          (*(code *)PTR_FUN_8c0d57c4)(*DAT_8c0d57b0,uVar3,0x20,iVar9);
          if (in_FPSCR_SZ == '\0') {
            uVar11 = CONCAT44(*(undefined4 *)PTR_s_333_CDrawable_8c0d57b8,uVar10);
          }
          else {
            uVar11 = *(undefined8 *)PTR_s_333_CDrawable_8c0d57b8;
          }
          (*(code *)puVar1)(uVar11,*(int *)(DAT_8c0d578a + param_2) + 0x10,3,puVar1);
          return;
        }
      }
      if (((int)*(char *)(iVar9 + 0x12) & (int)DAT_8c0d5790) == 4) {
        iVar4 = *(int *)(iVar9 + 0x2c);
        iVar5 = *(int *)(iVar9 + 0x30);
        (*(code *)PTR_FUN_8c0d5910)(iVar9);
        (**(code **)(*(int *)(iVar9 + 0x28) + 0x2c))
                  (iVar9 + *(int *)(*(int *)(iVar9 + 0x28) + 0x24));
        if (iVar9 != 0) {
          (**(code **)(*(int *)(iVar9 + 0x28) + 0x14))
                    (iVar9 + *(int *)(*(int *)(iVar9 + 0x28) + 0xc),3);
        }
        *(undefined4 *)(DAT_8c0d590a + param_2) = 0;
        if (*(char *)(param_2 + 0x2e) == '\x01') {
          *(uint *)(DAT_8c0d590c + param_2) = *(uint *)(DAT_8c0d590c + param_2) | 0x10;
        }
        else {
          *(uint *)(DAT_8c0d590c + param_2) = *(uint *)(DAT_8c0d590c + param_2) & 0xffffffef;
        }
        if (iVar4 == 0) {
          uVar6 = iVar5 + 1;
          if ((int)uVar6 < 6) {
            do {
              if ((int)uVar6 < 0) {
                uVar7 = 1 >> (~uVar6 & 0x1f) + 1;
              }
              else {
                uVar7 = 1 << (uVar6 & 0x1f);
              }
              if ((*(uint *)(DAT_8c0d590c + param_2) & uVar7) != 0) {
                if ((uVar6 != 5) &&
                   (*(uint *)(DAT_8c0d590e + param_2) = *(uint *)(DAT_8c0d590e + param_2) | 8,
                   uVar6 == 0xffffffff)) {
                  return;
                }
                uVar3 = FUN_8c0d4c3c(param_2,1);
                *(undefined4 *)(DAT_8c0d590a + param_2) = uVar3;
                return;
              }
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < 6);
          }
          *(uint *)(DAT_8c0d590e + param_2) = *(uint *)(DAT_8c0d590e + param_2) | 8;
        }
        else if (iVar4 == 1) {
          uVar6 = iVar5 - 1;
          if (-1 < (int)uVar6) {
            do {
              if ((int)uVar6 < 0) {
                uVar7 = 1 >> (~uVar6 & 0x1f) + 1;
              }
              else {
                uVar7 = 1 << (uVar6 & 0x1f);
              }
              if ((*(uint *)(DAT_8c0d590c + param_2) & uVar7) != 0) {
                if ((uVar6 != 5) &&
                   (*(uint *)(DAT_8c0d590e + param_2) = *(uint *)(DAT_8c0d590e + param_2) | 8,
                   uVar6 == 0xffffffff)) {
                  return;
                }
                if (uVar6 == 0) {
                  iVar9 = (*(code *)PTR_FUN_8c0d5c34)(0,param_2 + 0x2c);
                  (**(code **)(*(int *)(iVar9 + 0x28) + 0x20))
                            (iVar9 + *(int *)(*(int *)(iVar9 + 0x28) + 0x18));
                  (*(code *)PTR_FUN_8c0d5c38)(param_2,iVar9);
                  *(undefined4 *)(DAT_8c0d5c1e + iVar9) = *(undefined4 *)(DAT_8c0d5c1c + param_2);
                  (*(code *)PTR_FUN_8c0d5c3c)(iVar9,*(undefined4 *)(DAT_8c0d5c20 + param_2));
                  piVar8 = (int *)(*(int *)(iVar9 + 0x28) + (int)DAT_8c0d5c22);
                  (*(code *)piVar8[2])(iVar9 + *piVar8,0);
                }
                else if (uVar6 == 1) {
                  iVar9 = (*(code *)PTR_FUN_8c0d5ab0)(0,param_2 + 0x2c);
                  (**(code **)(*(int *)(iVar9 + 0x28) + 0x20))
                            (iVar9 + *(int *)(*(int *)(iVar9 + 0x28) + 0x18));
                  (*(code *)PTR_FUN_8c0d5a90)(param_2,iVar9);
                  (*(code *)PTR_FUN_8c0d5ab4)(iVar9,*(undefined4 *)(DAT_8c0d5a8a + param_2));
                  piVar8 = (int *)(*(int *)(iVar9 + 0x28) + (int)DAT_8c0d5a88);
                  (*(code *)piVar8[2])(iVar9 + *piVar8,0);
                }
                else if (uVar6 == 2) {
                  iVar9 = (*(code *)PTR_FUN_8c0d5aa8)(0,param_2 + 0x2c);
                  (**(code **)(*(int *)(iVar9 + 0x28) + 0x20))
                            (iVar9 + *(int *)(*(int *)(iVar9 + 0x28) + 0x18));
                  (*(code *)PTR_FUN_8c0d5a90)(param_2,iVar9);
                  (*(code *)PTR_FUN_8c0d5aac)(iVar9,*(undefined4 *)(DAT_8c0d5a8a + param_2));
                  piVar8 = (int *)(*(int *)(iVar9 + 0x28) + (int)DAT_8c0d5a88);
                  (*(code *)piVar8[2])(iVar9 + *piVar8,0);
                }
                else if (uVar6 == 3) {
                  iVar9 = (*(code *)PTR_FUN_8c0d5aa0)(0,param_2 + 0x2c);
                  (**(code **)(*(int *)(iVar9 + 0x28) + 0x20))
                            (iVar9 + *(int *)(*(int *)(iVar9 + 0x28) + 0x18));
                  (*(code *)PTR_FUN_8c0d5a90)(param_2,iVar9);
                  (*(code *)PTR_FUN_8c0d5aa4)(iVar9,*(undefined4 *)(DAT_8c0d5a8a + param_2));
                  piVar8 = (int *)(*(int *)(iVar9 + 0x28) + (int)DAT_8c0d5a88);
                  (*(code *)piVar8[2])(iVar9 + *piVar8,0);
                }
                else if (uVar6 == 4) {
                  iVar9 = (*(code *)PTR_FUN_8c0d5a98)(0,param_2 + 0x2c);
                  (**(code **)(*(int *)(iVar9 + 0x28) + 0x20))
                            (iVar9 + *(int *)(*(int *)(iVar9 + 0x28) + 0x18));
                  (*(code *)PTR_FUN_8c0d5a90)(param_2,iVar9);
                  (*(code *)PTR_FUN_8c0d5a9c)(iVar9,*(undefined4 *)(DAT_8c0d5a8a + param_2));
                  piVar8 = (int *)(*(int *)(iVar9 + 0x28) + (int)DAT_8c0d5a88);
                  (*(code *)piVar8[2])(iVar9 + *piVar8,0);
                }
                else if (uVar6 == 5) {
                  iVar9 = (*(code *)PTR_FUN_8c0d5a8c)(0,param_2 + 0x2c);
                  (**(code **)(*(int *)(iVar9 + 0x28) + 0x20))
                            (iVar9 + *(int *)(*(int *)(iVar9 + 0x28) + 0x18));
                  (*(code *)PTR_FUN_8c0d5a90)(param_2,iVar9);
                  *(undefined4 *)(DAT_8c0d5a84 + iVar9) = *(undefined4 *)(DAT_8c0d5a82 + param_2);
                  (*(code *)PTR_FUN_8c0d5a94)(*(undefined4 *)(DAT_8c0d5a86 + param_2));
                  piVar8 = (int *)(*(int *)(iVar9 + 0x28) + (int)DAT_8c0d5a88);
                  (*(code *)piVar8[2])(iVar9 + *piVar8,0);
                }
                else {
                  iVar9 = 0;
                }
                *(int *)(DAT_8c0d590a + param_2) = iVar9;
                return;
              }
              uVar6 = uVar6 - 1;
            } while (-1 < (int)uVar6);
          }
          *(uint *)(DAT_8c0d590e + param_2) = *(uint *)(DAT_8c0d590e + param_2) | 8;
        }
      }
    }
  }
  return;
}

