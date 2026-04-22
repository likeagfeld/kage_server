// entry: 8c07b7a0
// name: FUN_8c07b7a0
// signature: undefined FUN_8c07b7a0(void)


undefined4 FUN_8c07b7a0(uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int unaff_r9;
  uint extraout_fr3;
  uint extraout_fr3_00;
  uint extraout_fr3_01;
  bool bVar11;
  bool bVar12;
  char in_FPSCR_SZ;
  uint local_20;
  undefined4 local_14;
  
  local_14 = 0;
  iVar8 = (int)DAT_8c07b8d8;
  *(int *)(&stack0x00000000 + iVar8) = param_4;
  *(int *)(&stack0xfffffffc + iVar8) = param_3;
  *(undefined4 *)(&stack0xfffffff8 + iVar8) = param_2;
  bVar11 = false;
  *(uint **)(&stack0xfffffff4 + iVar8) = param_1;
  if ((((-1 < param_3) && (param_3 < (int)param_1[8])) && (-1 < param_4)) &&
     (param_4 < (int)param_1[9])) {
    bVar11 = true;
  }
  if (!bVar11) {
    *(undefined4 *)(&stack0x00000004 + iVar8) = 0;
    goto LAB_8c07b8be;
  }
  bVar1 = 0;
  iVar3 = (*(code *)PTR_FUN_8c07b8e0)();
  if ((iVar3 == param_3) && (iVar3 = (*(code *)PTR_FUN_8c07b8e0)(), iVar3 == param_4)) {
    bVar1 = 1;
  }
  uVar5 = (uint)bVar1;
  bVar11 = (*(byte *)(*(int *)(&stack0xfffffff8 + iVar8) + 0x10) & 7) == 6;
  iVar3 = (*(code *)PTR_FUN_8c07b8e0)();
  if ((param_3 < iVar3) || (uVar5 != 0)) {
    *(undefined4 *)(&stack0x00000008 + iVar8) = 1;
    iVar3 = (*(code *)PTR_FUN_8c07b968)();
    unaff_r9 = iVar3 - param_3;
  }
  else {
    iVar3 = (*(code *)PTR_FUN_8c07b8e0)();
    if (iVar3 < param_3) {
      *(undefined4 *)(&stack0x00000008 + iVar8) = 2;
      iVar3 = (*(code *)PTR_FUN_8c07b8e0)();
      unaff_r9 = param_3 - iVar3;
    }
    else {
      iVar3 = (*(code *)PTR_FUN_8c07b968)();
      if (iVar3 < param_4) {
        iVar3 = (*(code *)PTR_FUN_8c07b968)();
        if (iVar3 < param_4) {
          *(undefined4 *)(&stack0x00000008 + iVar8) = 8;
          iVar3 = (*(code *)PTR_FUN_8c07b968)();
          unaff_r9 = param_4 - iVar3;
        }
      }
      else {
        *(undefined4 *)(&stack0x00000008 + iVar8) = 4;
        iVar3 = (*(code *)PTR_FUN_8c07b968)();
        unaff_r9 = iVar3 - param_4;
      }
    }
  }
  puVar2 = PTR_FUN_8c07bed4;
  iVar3 = *(int *)((param_1[8] * param_4 + param_3) * 4 + *(int *)((int)DAT_8c07b8dc + (int)param_1)
                  );
  iVar10 = param_1[8] * param_4 + param_3;
  if (iVar3 == 0) {
    bVar12 = false;
  }
  else {
    bVar12 = *(int *)(iVar3 + 8) == 2;
  }
  if (bVar12) {
    cVar7 = '\0';
  }
  else {
    iVar3 = iVar10 * 4;
    if (*(int *)(iVar3 + *(int *)((int)DAT_8c07bfd0 + (int)param_1)) == 0) {
      if (*(int *)(iVar3 + *(int *)((int)DAT_8c07bfce + (int)param_1)) == 0) {
        if (*(int *)(iVar3 + *(int *)((int)DAT_8c07bfd2 + (int)param_1)) == 0) {
          iVar3 = *(int *)((param_1[8] * param_4 + param_3) * 4 +
                          *(int *)((int)DAT_8c07bfd4 + (int)param_1));
          if (iVar3 == 0) {
            bVar12 = false;
          }
          else {
            bVar1 = *(byte *)(iVar3 + 9);
            if (((bVar1 & 0x7f) == 3) || ((bVar1 & 0x7f) == 4)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
          }
          if (bVar12) {
            cVar7 = 'h';
          }
          else {
            cVar7 = *(char *)(iVar10 + *(int *)((int)DAT_8c07bfd6 + (int)param_1));
          }
        }
        else {
          cVar7 = 'k';
        }
      }
      else {
        cVar7 = 'i';
      }
    }
    else {
      cVar7 = 'j';
    }
  }
  if (((cVar7 == '\0') || (cVar7 == '_')) || (cVar7 == '`')) {
LAB_8c07b8ba:
    *(undefined4 *)(&stack0x00000004 + iVar8) = 0;
  }
  else {
    if (cVar7 == 'g') {
      uVar6 = (*(code *)PTR_FUN_8c07bedc)(param_1,param_3,param_4);
      (*(code *)PTR_FUN_8c07bee0)
                (param_1,uVar6,*(byte *)(*(int *)(&stack0xfffffff8 + iVar8) + 9) & 0xf,1);
    }
    else {
      if (cVar7 == 'h') {
        (*(code *)PTR_FUN_8c07b96c)
                  (param_1,*(undefined4 *)
                            ((param_1[8] * param_4 + param_3) * 4 +
                            *(int *)((int)DAT_8c07b964 + (int)param_1)));
        *(undefined4 *)(&stack0x00000004 + iVar8) = 0;
        goto LAB_8c07b8be;
      }
      if (cVar7 == 'i') {
        if (uVar5 == 0) {
          if (((*param_1 & 2) == 0) ||
             (((-1 < param_3 && (param_3 < (int)param_1[8])) &&
              ((-1 < param_4 && (param_4 < (int)param_1[9])))))) {
            *(undefined4 *)(&stack0x00000024 + iVar8) =
                 *(undefined4 *)
                  ((param_1[8] * param_4 + param_3) * 4 + *(int *)((int)DAT_8c07bfce + (int)param_1)
                  );
          }
          else {
            *(undefined4 *)(&stack0x00000024 + iVar8) = 0;
          }
          *(int *)(&stack0x00000028 + iVar8) = *(int *)(&stack0x00000024 + iVar8) + 8;
          iVar3 = (*(code *)PTR_FUN_8c07baf8)();
          uVar4 = extraout_fr3;
          if (((iVar3 == 2) ||
              (iVar3 = (*(code *)PTR_FUN_8c07baf8)(), uVar4 = extraout_fr3_00, iVar3 == 4)) ||
             (iVar3 = (*(code *)PTR_FUN_8c07baf8)(), uVar4 = extraout_fr3_01, iVar3 == 7)) {
            puVar2 = PTR_FUN_8c07baf8;
            *(byte *)(*(int *)(&stack0x00000024 + iVar8) + 9) =
                 *(byte *)(*(int *)(&stack0x00000024 + iVar8) + 9) & 0xf | 0x30;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(*(int *)(&stack0x00000024 + iVar8) + 0x14) = 0;
            }
            else {
              *(ulonglong *)(*(int *)(&stack0x00000024 + iVar8) + 0x14) = (ulonglong)uVar4;
            }
            uVar6 = (*(code *)puVar2)();
            *(undefined4 *)((int)&local_20 + DAT_8c07baee + iVar8) = uVar6;
            iVar3 = (*(code *)puVar2)();
            *(int *)(&stack0x0000002c + iVar8) =
                 param_3 - *(int *)((int)&local_20 + DAT_8c07baee + iVar8);
            *(int *)(&stack0x00000030 + iVar8) = param_4 - iVar3;
            *(int *)(&stack0x00000034 + iVar8) = *(int *)(&stack0x00000024 + iVar8) + 2;
            iVar3 = (*(code *)puVar2)();
            *(uint *)(&stack0x00000038 + iVar8) = param_1[8] * iVar3;
            iVar3 = (*(code *)puVar2)();
            if (*(char *)(*(int *)(&stack0x00000038 + iVar8) + iVar3 +
                         *(int *)((int)DAT_8c07baf2 + (int)param_1)) == '[') {
              *(undefined4 *)(&stack0x0000003c + iVar8) = 0xb;
            }
            else {
              *(uint *)(&stack0x0000003c + iVar8) =
                   ((int)*(char *)(*(int *)(&stack0x00000024 + iVar8) + 8) & 0xfU) + 1;
            }
            (*(code *)PTR_FUN_8c07bafc)(*(uint *)(&stack0x0000003c + iVar8) & 0xffff);
            if ((int)param_1[0xe] < *(int *)(&stack0x0000003c + iVar8)) {
              param_1[0xe] = *(uint *)(&stack0x0000003c + iVar8);
            }
            puVar2 = PTR_FUN_8c07baf8;
            *(undefined4 *)(&stack0x00000040 + iVar8) = 0;
            *(undefined4 *)(&stack0x00000044 + iVar8) = 0;
            *(undefined4 *)(&stack0x00000048 + iVar8) = 0;
            *(undefined4 *)(&stack0x0000004c + iVar8) = 0;
            iVar3 = *(int *)(&stack0x0000002c + iVar8);
            if (iVar3 == 0) {
              if (*(int *)(&stack0x00000030 + iVar8) != 0) {
                if (*(int *)(&stack0x00000030 + iVar8) < 0) {
                  uVar6 = *(undefined4 *)(&stack0x00000030 + iVar8);
                }
                else {
                  uVar6 = 0;
                }
                *(undefined4 *)(&stack0x00000048 + iVar8) = uVar6;
                if (*(int *)(&stack0x00000030 + iVar8) < 1) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = *(undefined4 *)(&stack0x00000030 + iVar8);
                }
                *(undefined4 *)(&stack0x0000004c + iVar8) = uVar6;
              }
            }
            else {
              iVar10 = iVar3;
              if (iVar3 < 1) {
                iVar10 = 0;
              }
              *(int *)(&stack0x00000040 + iVar8) = iVar10;
              if (-1 < iVar3) {
                iVar3 = 0;
              }
              *(int *)(&stack0x00000044 + iVar8) = iVar3;
            }
            iVar3 = (*(code *)PTR_FUN_8c07baf8)();
            *(uint *)(&stack0x00000050 + iVar8) = param_1[8] * iVar3;
            iVar3 = (*(code *)puVar2)();
            puVar2 = PTR_FUN_8c07bc88;
            if (*(int *)((*(int *)(&stack0x00000050 + iVar8) + iVar3) * 4 +
                        *(int *)((int)DAT_8c07baf6 + (int)param_1)) ==
                *(int *)(&stack0x00000024 + iVar8)) {
              iVar3 = (*(code *)PTR_FUN_8c07bc88)();
              *(uint *)(&stack0x00000054 + iVar8) = param_1[8] * iVar3;
              iVar3 = (*(code *)puVar2)();
              *(undefined4 *)
               ((*(int *)(&stack0x00000054 + iVar8) + iVar3) * 4 +
               *(int *)((int)DAT_8c07bc78 + (int)param_1)) = 0;
            }
            *(undefined4 *)(&stack0x00000058 + iVar8) = 0;
            if (0 < *(int *)(&stack0x0000003c + iVar8)) {
              *(undefined4 *)(&stack0x0000005c + iVar8) = *(undefined4 *)(&stack0x00000034 + iVar8);
              *(undefined4 *)((int)&local_20 + DAT_8c07bc7a + iVar8) =
                   *(undefined4 *)(&stack0x00000034 + iVar8);
              do {
                puVar2 = PTR_FUN_8c07bc88;
                uVar6 = (*(code *)PTR_FUN_8c07bc88)();
                *(undefined4 *)((int)&local_20 + DAT_8c07bc7c + iVar8) = uVar6;
                uVar6 = (*(code *)puVar2)();
                iVar3 = *(int *)((int)&local_20 + DAT_8c07bc7c + iVar8);
                *(undefined4 *)((int)&local_20 + iVar8) = *(undefined4 *)(&stack0x00000040 + iVar8);
                iVar3 = FUN_8c07b7a0(param_1,*(undefined4 *)(&stack0x00000024 + iVar8),
                                     iVar3 - *(int *)(&stack0x00000058 + iVar8),uVar6);
                if (iVar3 == 0) break;
                *(int *)(&stack0x00000058 + iVar8) = *(int *)(&stack0x00000058 + iVar8) + 1;
              } while (*(int *)(&stack0x00000058 + iVar8) < *(int *)(&stack0x0000003c + iVar8));
            }
            *(undefined4 *)(&stack0x00000058 + iVar8) = 1;
            if (1 < *(int *)(&stack0x0000003c + iVar8)) {
              *(undefined4 *)((int)&local_20 + DAT_8c07bc7e + iVar8) =
                   *(undefined4 *)(&stack0x00000034 + iVar8);
              *(undefined4 *)((int)&local_20 + DAT_8c07bc80 + iVar8) =
                   *(undefined4 *)(&stack0x00000034 + iVar8);
              do {
                puVar2 = PTR_FUN_8c07bc88;
                uVar6 = (*(code *)PTR_FUN_8c07bc88)();
                *(undefined4 *)((int)&local_20 + DAT_8c07bc82 + iVar8) = uVar6;
                uVar6 = (*(code *)puVar2)();
                iVar3 = *(int *)((int)&local_20 + DAT_8c07bc82 + iVar8);
                *(undefined4 *)((int)&local_20 + iVar8) = *(undefined4 *)(&stack0x00000044 + iVar8);
                iVar3 = FUN_8c07b7a0(param_1,*(undefined4 *)(&stack0x00000024 + iVar8),
                                     iVar3 + *(int *)(&stack0x00000058 + iVar8),uVar6);
                if (iVar3 == 0) break;
                *(int *)(&stack0x00000058 + iVar8) = *(int *)(&stack0x00000058 + iVar8) + 1;
              } while (*(int *)(&stack0x00000058 + iVar8) < *(int *)(&stack0x0000003c + iVar8));
            }
            *(undefined4 *)(&stack0x00000058 + iVar8) = 1;
            if (1 < *(int *)(&stack0x0000003c + iVar8)) {
              *(undefined4 *)((int)&local_20 + DAT_8c07bc84 + iVar8) =
                   *(undefined4 *)(&stack0x00000034 + iVar8);
              *(undefined4 *)((int)&local_20 + DAT_8c07bc86 + iVar8) =
                   *(undefined4 *)(&stack0x00000034 + iVar8);
              do {
                puVar2 = PTR_FUN_8c07bc88;
                uVar6 = (*(code *)PTR_FUN_8c07bc88)();
                *(undefined4 *)((int)&local_20 + DAT_8c07bc7c + iVar8) = uVar6;
                iVar3 = (*(code *)puVar2)();
                *(undefined4 *)((int)&local_20 + iVar8) = *(undefined4 *)(&stack0x00000048 + iVar8);
                iVar3 = FUN_8c07b7a0(param_1,*(undefined4 *)(&stack0x00000024 + iVar8),
                                     *(undefined4 *)((int)&local_20 + DAT_8c07bc7c + iVar8),
                                     iVar3 - *(int *)(&stack0x00000058 + iVar8));
                if (iVar3 == 0) break;
                *(int *)(&stack0x00000058 + iVar8) = *(int *)(&stack0x00000058 + iVar8) + 1;
              } while (*(int *)(&stack0x00000058 + iVar8) < *(int *)(&stack0x0000003c + iVar8));
            }
            iVar3 = 1;
            if (1 < *(int *)(&stack0x0000003c + iVar8)) {
              *(undefined4 *)((int)&local_20 + DAT_8c07bd6c + iVar8) =
                   *(undefined4 *)(&stack0x00000034 + iVar8);
              *(undefined4 *)((int)&local_20 + DAT_8c07bd6e + iVar8) =
                   *(undefined4 *)(&stack0x00000034 + iVar8);
              do {
                uVar6 = (*(code *)PTR_FUN_8c07bd78)();
                *(undefined4 *)((int)&local_20 + DAT_8c07bd70 + iVar8) = uVar6;
                iVar10 = (*(code *)PTR_FUN_8c07bd78)();
                *(undefined4 *)((int)&local_20 + iVar8) = *(undefined4 *)(&stack0x0000004c + iVar8);
                iVar10 = FUN_8c07b7a0(param_1,*(undefined4 *)(&stack0x00000024 + iVar8),
                                      *(undefined4 *)((int)&local_20 + DAT_8c07bd70 + iVar8),
                                      iVar10 + iVar3);
                if (iVar10 == 0) break;
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(&stack0x0000003c + iVar8));
            }
            *(undefined4 *)(&stack0x00000004 + iVar8) = 0;
            goto LAB_8c07b8be;
          }
        }
      }
      else if (cVar7 == 'j') {
        uVar4 = *param_1;
        *(uint **)(&stack0x0000000c + iVar8) = param_1;
        *(int *)(&stack0x00000010 + iVar8) = param_3;
        *(int *)(&stack0x00000014 + iVar8) = param_4;
        if (((uVar4 & 2) == 0) ||
           (((-1 < param_3 && (param_3 < (int)param_1[8])) &&
            ((-1 < param_4 && (param_4 < (int)param_1[9])))))) {
          iVar3 = *(int *)((param_1[8] * param_4 + param_3) * 4 +
                          *(int *)((int)DAT_8c07bece + (int)param_1));
          *(int *)(&stack0x00000018 + iVar8) = iVar3;
        }
        else {
          iVar3 = 0;
          *(undefined4 *)(&stack0x00000018 + iVar8) = 0;
        }
        if (((int)*(char *)(iVar3 + 0x10) & 0x80U) != 0) {
          *(undefined4 *)(&stack0x00000004 + iVar8) = 0;
          goto LAB_8c07b8be;
        }
        *(int *)(&stack0x0000001c + iVar8) = iVar3 + 2;
        iVar3 = (*(code *)PTR_FUN_8c07bed4)();
        *(uint *)(&stack0x00000020 + iVar8) = param_1[8] * iVar3;
        iVar3 = (*(code *)puVar2)();
        puVar9 = *(ushort **)(&stack0x00000018 + iVar8);
        *(undefined4 *)
         ((*(int *)(&stack0x00000020 + iVar8) + iVar3) * 4 +
         *(int *)((int)DAT_8c07bece + (int)param_1)) = 0;
        *puVar9 = *puVar9 & 0xfffe;
      }
      else {
        if (cVar7 == 'k') {
          iVar3 = (*(code *)PTR_FUN_8c07bd7c)(param_1,param_3,param_4);
          if (*(char *)(iVar3 + 8) == '\x03') {
            (*(code *)PTR_FUN_8c07bd84)(param_1,iVar3,*(undefined4 *)(&stack0x00000008 + iVar8));
          }
          bVar1 = *(byte *)(*(int *)(&stack0xfffffff8 + iVar8) + 9);
          *(uint *)((int)&local_20 + iVar8) = uVar5;
          cVar7 = *(char *)(*(int *)(&stack0xfffffff8 + iVar8) + 8);
          *(int *)(&stack0xffffffe8 + iVar8) = unaff_r9;
          uVar6 = *(undefined4 *)((int)&local_20 + DAT_8c07bd74 + iVar8);
          *(uint *)(&stack0xffffffe4 + iVar8) = (int)cVar7 & 0xf;
          *(undefined4 *)((int)&stack0xffffffec + iVar8) = *(undefined4 *)(&stack0x00000008 + iVar8)
          ;
          *(undefined4 *)(&stack0xfffffff0 + iVar8) = uVar6;
          (*(code *)PTR_FUN_8c07bd80)(param_1,param_3,param_4,bVar1 & 0xf);
          if (bVar11) {
            uVar5 = *param_1;
            *(uint **)(&stack0x0000000c + iVar8) = param_1;
            *(int *)(&stack0x00000010 + iVar8) = param_3;
            *(int *)(&stack0x00000014 + iVar8) = param_4;
            if (((uVar5 & 2) == 0) ||
               ((((-1 < param_3 && (param_3 < (int)param_1[8])) && (-1 < param_4)) &&
                (param_4 < (int)param_1[9])))) {
              iVar3 = *(int *)((param_1[8] * param_4 + param_3) * 4 +
                              *(int *)((int)DAT_8c07bece + (int)param_1));
            }
            else {
              iVar3 = 0;
            }
            *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) & (byte)DAT_8c07bd76 | 0x40;
          }
          *(undefined4 *)(&stack0x00000004 + iVar8) = 0;
          goto LAB_8c07b8be;
        }
        if (cVar7 == 'm') goto LAB_8c07b8ba;
      }
    }
    *(uint *)((int)&local_20 + iVar8) = uVar5;
    bVar1 = *(byte *)(*(int *)(&stack0xfffffff8 + iVar8) + 9);
    *(int *)(&stack0xffffffe8 + iVar8) = unaff_r9;
    uVar6 = *(undefined4 *)((int)&local_20 + DAT_8c07bed0 + iVar8);
    *(uint *)(&stack0xffffffe4 + iVar8) =
         (int)*(char *)(*(int *)(&stack0xfffffff8 + iVar8) + 8) & 0xf;
    *(undefined4 *)((int)&stack0xffffffec + iVar8) = *(undefined4 *)(&stack0x00000008 + iVar8);
    *(undefined4 *)(&stack0xfffffff0 + iVar8) = uVar6;
    (*(code *)PTR_FUN_8c07bed8)(param_1,param_3,param_4,bVar1 & 0xf);
    if (bVar11) {
      uVar5 = *param_1;
      *(uint **)(&stack0x0000000c + iVar8) = param_1;
      *(int *)(&stack0x00000010 + iVar8) = param_3;
      *(int *)(&stack0x00000014 + iVar8) = param_4;
      if (((uVar5 & 2) == 0) ||
         (((-1 < param_3 && (param_3 < (int)param_1[8])) &&
          ((-1 < param_4 &&
           (*(int *)(&stack0x00000014 + iVar8) < *(int *)(*(int *)(&stack0x0000000c + iVar8) + 0x24)
           )))))) {
        iVar3 = *(int *)((*(int *)(*(int *)(&stack0x0000000c + iVar8) + 0x20) *
                          *(int *)(&stack0x00000014 + iVar8) + *(int *)(&stack0x00000010 + iVar8)) *
                         4 + *(int *)((int)DAT_8c07bece + *(int *)(&stack0x0000000c + iVar8)));
      }
      else {
        iVar3 = 0;
      }
      *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) & (byte)DAT_8c07bed2 | 0x40;
    }
    *(undefined4 *)(&stack0x00000004 + iVar8) = 1;
  }
LAB_8c07b8be:
  return *(undefined4 *)(&stack0x00000004 + iVar8);
}

