// entry: 8c072c28
// name: FUN_8c072c28
// signature: undefined FUN_8c072c28(void)


/* WARNING: Removing unreachable block (ram,0x8c072eae) */
/* WARNING: Removing unreachable block (ram,0x8c072ea2) */
/* WARNING: Removing unreachable block (ram,0x8c072ea8) */
/* WARNING: Removing unreachable block (ram,0x8c072f3e) */
/* WARNING: Removing unreachable block (ram,0x8c072f42) */

void FUN_8c072c28(int param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int local_20;
  
  iVar5 = (int)DAT_8c072d80;
  iVar4 = *(int *)PTR_DAT_8c072d98;
  *(undefined **)(&stack0xffffffe8 + iVar5) = PTR_s_IN_>_MapSendToServer___8c072d9c;
  if (iVar4 != 0) {
    puVar7 = &stack0xffffffec + iVar5;
    if (((uint)puVar7 & 3) != 0) {
      puVar7 = &stack0xfffffff0 + iVar5;
    }
    (*(code *)PTR_FUN_8c072da0)(&stack0xffffffec + iVar5,puVar7);
    (*(code *)PTR_FUN_8c072da4)(*(undefined4 *)PTR_DAT_8c072d98,&stack0xffffffec + iVar5);
  }
  iVar4 = *(int *)(DAT_8c072d82 + param_1);
  *(undefined4 *)(DAT_8c072d84 + param_1) = *(undefined4 *)(iVar4 + 0x20);
  *(undefined4 *)(DAT_8c072d86 + param_1) = *(undefined4 *)(iVar4 + 0x24);
  uVar3 = (*(code *)PTR_FUN_8c072da8)();
  puVar1 = PTR_s_mNumSoftBlock____d_8c072dac;
  *(undefined4 *)(DAT_8c072d88 + param_1) = uVar3;
  *(undefined **)((int)&local_20 + iVar5) = puVar1;
  *(undefined4 *)(&stack0xffffffe4 + iVar5) = uVar3;
  (*(code *)PTR_FUN_8c072db0)(param_1);
  *(undefined4 *)(DAT_8c072d8a + param_1) = 0;
  iVar13 = *(int *)(DAT_8c072d88 + param_1);
  iVar4 = 0;
  if (0 < iVar13) {
    iVar6 = 0;
    iVar8 = *(int *)(DAT_8c072d82 + param_1);
    do {
      if (((int)*(char *)(*(int *)(DAT_8c072d8c + iVar8) + iVar6 + 9) & 0x80U) != 0) {
        *(int *)(DAT_8c072d8a + param_1) = *(int *)(DAT_8c072d8a + param_1) + 1;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar4 < iVar13);
  }
  iVar6 = 0;
  *(undefined **)((int)&local_20 + iVar5) = PTR_s_mNumPanel____d_8c072db4;
  iVar8 = 0;
  *(undefined4 *)(&stack0xffffffe4 + iVar5) = *(undefined4 *)(DAT_8c072d8a + param_1);
  (*(code *)PTR_FUN_8c072db0)(param_1);
  iVar13 = *(int *)(DAT_8c072d84 + param_1);
  iVar4 = *(int *)(DAT_8c072d86 + param_1);
  if (0 < iVar13) {
    do {
      puVar1 = PTR_FUN_8c072db8;
      iVar14 = 0;
      if (0 < iVar4) {
        do {
          iVar4 = (*(code *)puVar1)(*(undefined4 *)(DAT_8c072d82 + param_1),iVar6,iVar14,1);
          if (iVar4 != 0) {
            if (iVar4 == 1) {
              iVar8 = iVar8 + 1;
            }
            else if ((1 < iVar4) && (iVar4 < 0x4c)) {
              iVar8 = iVar8 + 1;
            }
          }
          iVar14 = iVar14 + 1;
          iVar4 = *(int *)(DAT_8c072d86 + param_1);
        } while (iVar14 < iVar4);
        iVar13 = *(int *)(DAT_8c072d84 + param_1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar13);
  }
  iVar4 = *(int *)(DAT_8c072d8a + param_1) + (iVar4 * iVar13 - iVar8);
  *(undefined **)((int)&local_20 + iVar5) = PTR_s_tn____d_8c072dbc;
  *(int *)(&stack0xffffffe4 + iVar5) = iVar4;
  *(int *)((int)&local_20 + DAT_8c072d8e + iVar5) = iVar4;
  (*(code *)PTR_FUN_8c072db0)(param_1);
  puVar15 = *(undefined4 **)((int)DAT_8c072d94 + *(int *)(DAT_8c072d90 + param_1));
  (*(code *)PTR_FUN_8c072dc0)(puVar15,0,(int)DAT_8c072d92);
  iVar8 = 0;
  iVar6 = 8;
  iVar4 = (int)DAT_8c072d86;
  *puVar15 = *(undefined4 *)(DAT_8c072d84 + param_1);
  iVar13 = (int)DAT_8c072edc;
  puVar15[1] = *(undefined4 *)(iVar4 + param_1);
  puVar15[2] = *(undefined4 *)((int)&local_20 + iVar13 + iVar5);
  piVar9 = puVar15 + 3;
  do {
    if (*(char *)(param_1 + 0x3e + iVar8) == '\0') {
      *piVar9 = (int)*(short *)(param_1 + DAT_8c072ee8 + iVar8 * 0x1e);
      piVar9 = puVar15 + 4;
      break;
    }
    iVar6 = iVar6 + -1;
    iVar8 = iVar8 + 1;
  } while (iVar6 != 0);
  iVar4 = 0;
  iVar13 = *(int *)(DAT_8c072ede + param_1);
  iVar6 = 0;
  if (0 < iVar13) {
    iVar14 = *(int *)(DAT_8c072ee0 + param_1);
    iVar8 = iVar4;
    do {
      puVar1 = PTR_FUN_8c072eec;
      iVar11 = 0;
      iVar4 = iVar8;
      piVar10 = piVar9;
      if (0 < iVar14) {
        do {
          iVar13 = (*(code *)puVar1)(*(undefined4 *)(DAT_8c072ee2 + param_1),iVar6,iVar11,1);
          uVar12 = (undefined1)iVar6;
          uVar2 = (undefined1)iVar11;
          if (iVar13 == 0) {
            *(undefined1 *)((int)piVar9 + 2) = 2;
            *(undefined1 *)((int)piVar9 + 1) = uVar2;
            *(undefined1 *)piVar9 = uVar12;
            *(undefined1 *)((int)piVar9 + 3) = 0;
            piVar10 = piVar9 + 1;
            iVar4 = iVar8 + 1;
          }
          else {
            iVar4 = iVar8;
            piVar10 = piVar9;
            if (iVar13 != 1) {
              if ((iVar13 == 0x61) || (iVar13 == 0x68)) {
                iVar4 = iVar8 + 1;
                iVar13 = (*(code *)PTR_FUN_8c072fa8)
                                   (*(undefined4 *)(DAT_8c072fa0 + param_1),iVar6,iVar11);
                *(undefined1 *)((int)piVar9 + 2) = 3;
                *(undefined1 *)piVar9 = uVar12;
                *(undefined1 *)((int)piVar9 + 1) = uVar2;
                *(char *)((int)piVar9 + 3) = (char)*(undefined2 *)(iVar13 + 4);
                piVar10 = piVar9 + 1;
                if (((int)*(char *)(iVar13 + 9) & 0x80U) != 0) {
                  *(undefined1 *)piVar10 = uVar12;
                  *(undefined1 *)((int)piVar9 + 6) = 4;
                  *(undefined1 *)((int)piVar9 + 5) = uVar2;
                  iVar4 = iVar8 + 2;
                  *(byte *)((int)piVar9 + 7) = *(byte *)(iVar13 + 8) & (byte)DAT_8c072fa2;
                  piVar10 = piVar9 + 2;
                }
              }
              else if ((iVar13 < 2) || (0x4b < iVar13)) {
                *(undefined1 *)piVar9 = uVar12;
                *(undefined1 *)((int)piVar9 + 2) = 8;
                *(undefined1 *)((int)piVar9 + 1) = uVar2;
                *(undefined1 *)((int)piVar9 + 3) = 0;
                piVar10 = piVar9 + 1;
                iVar4 = iVar8 + 1;
              }
            }
          }
          iVar11 = iVar11 + 1;
          iVar14 = *(int *)(DAT_8c072ee0 + param_1);
          iVar8 = iVar4;
          piVar9 = piVar10;
        } while (iVar11 < iVar14);
        iVar13 = *(int *)(DAT_8c072ede + param_1);
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar4;
      piVar9 = piVar10;
    } while (iVar6 < iVar13);
  }
  *(int *)(&stack0xffffffe4 + iVar5) = iVar4;
  *(undefined4 *)(*(int *)(DAT_8c072ee4 + param_1) + 0x48) = 6;
  *(undefined **)((int)&local_20 + iVar5) = PTR_s_OUT>_MapSendToServer___cc____d_8c072ef0;
  (*(code *)PTR_FUN_8c072ef4)(param_1);
  return;
}

