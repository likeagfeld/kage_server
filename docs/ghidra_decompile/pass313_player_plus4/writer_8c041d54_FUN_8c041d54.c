// entry: 8c041d54
// name: FUN_8c041d54


void FUN_8c041d54(uint param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  puVar2 = PTR_DAT_8c041eb0;
  if (in_FPSCR_SZ == '\0') {
    puVar13 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar13 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar13 + -4) = in_PR;
  if (*(int *)(DAT_8c041e8c + param_2) == 0) {
    iVar5 = (int)DAT_8c041e8e;
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & DAT_8c041eac;
    puVar7 = (undefined4 *)(param_2 + DAT_8c041e90);
    uVar6 = *(undefined4 *)puVar2;
    puVar7[1] = *(undefined4 *)(puVar2 + 4);
    *(undefined2 *)(iVar5 + param_2) = 0;
    uVar16 = in_dr14 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(DAT_8c041e92 + param_2) = 0;
    }
    else {
      *(ulonglong *)(DAT_8c041e92 + param_2) = uVar16;
    }
    iVar5 = (int)DAT_8c041e94;
    *puVar7 = uVar6;
    uVar6 = *(undefined4 *)(puVar2 + 8);
    *(undefined2 *)(iVar5 + param_2) = 0;
    iVar5 = (int)DAT_8c041e96;
    puVar7[2] = uVar6;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(iVar5 + param_2) = 0;
    }
    else {
      *(ulonglong *)(iVar5 + param_2) = uVar16;
    }
    piVar1 = DAT_8c041eb4;
    uVar15 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = (ulonglong)param_1;
    }
    uVar14 = (uint)uVar15;
    *(undefined4 *)((int)DAT_8c041e84 + (int)DAT_8c041eb4) = 0;
    piVar4 = DAT_8c041eb8;
    *(undefined4 *)((int)DAT_8c041e86 + (int)piVar1) = 0;
    piVar3 = DAT_8c041eb4;
    *(undefined4 *)((int)DAT_8c041e88 + (int)piVar1) = 0;
    *(undefined4 *)((int)DAT_8c041e8a + (int)piVar1) = 0;
    puVar2 = PTR_FUN_8c041ebc;
    *(undefined4 *)(DAT_8c041e98 + param_2) = 0;
    (*(code *)puVar2)(param_2);
    uVar15 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = (ulonglong)uVar14;
    }
    uVar14 = (uint)uVar15;
    (*(code *)PTR_FUN_8c041ec0)(uVar15,param_2);
    if (in_FPSCR_SZ == '\0') {
      uVar16 = (ulonglong)uVar14;
    }
    (*(code *)PTR_FUN_8c041ec4)(uVar16,*(undefined4 *)(param_2 + 0x58));
    iVar9 = 0;
    iVar10 = (int)DAT_8c041e9c;
    *(undefined1 *)(DAT_8c041e9a + param_2) = 8;
    iVar5 = 8;
    iVar11 = *(int *)(DAT_8c041e9e + param_2);
    *(int *)((int)puVar13 + -8) = iVar11;
    iVar8 = *(int *)(DAT_8c041ea2 + param_2) + (int)DAT_8c041ea0;
    iVar12 = *(int *)((int)DAT_8c041ea6 + *(int *)(DAT_8c041ea4 + param_2));
    do {
      piVar1 = DAT_8c041ea8;
      if (*(char *)(iVar11 + 0xe + iVar9) == '\0') {
        *piVar4 = iVar9;
        piVar4[1] = *(int *)(iVar8 + iVar9 * 4);
        piVar4[2] = iVar10 * iVar9 + iVar12;
      }
      else if (*(char *)(iVar11 + 0x16 + iVar9) == '\x06') {
        *piVar3 = iVar9;
        piVar3[1] = *(int *)(iVar8 + iVar9 * 4);
        piVar3[2] = iVar10 * iVar9 + iVar12;
      }
      else if (*(char *)(iVar11 + 0x16 + iVar9) == '\b') {
        *DAT_8c041ea8 = iVar9;
        piVar1[1] = *(int *)(iVar8 + iVar9 * 4);
        piVar1[2] = iVar10 * iVar9 + iVar12;
      }
      iVar5 = iVar5 + -1;
      iVar9 = iVar9 + 1;
    } while (iVar5 != 0);
    *(undefined4 *)(DAT_8c041e8c + param_2) = 1;
  }
  return;
}

