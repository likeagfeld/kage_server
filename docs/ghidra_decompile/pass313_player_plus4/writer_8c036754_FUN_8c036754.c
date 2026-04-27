// entry: 8c036754
// name: FUN_8c036754


/* WARNING: Removing unreachable block (ram,0x8c036ca0) */
/* WARNING: Removing unreachable block (ram,0x8c0369f2) */
/* WARNING: Removing unreachable block (ram,0x8c036962) */
/* WARNING: Removing unreachable block (ram,0x8c036b26) */
/* WARNING: Removing unreachable block (ram,0x8c036dc2) */

int FUN_8c036754(int param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_2c;
  
  local_2c = 0;
  if ((param_2 < 0) || (*(int *)(DAT_8c0368e6 + param_1) <= param_2)) {
    bVar1 = false;
  }
  else if ((param_3 < 0) || (*(int *)(DAT_8c0368e8 + param_1) <= param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (iVar3 = (*(code *)PTR_FUN_8c036e5c)(param_1,param_2,param_3,param_2), iVar3 != 0))
  {
    local_2c = 1;
  }
  iVar3 = param_2 + -1;
  iVar9 = param_3 + -1;
  if ((iVar3 < 0) || (*(int *)(DAT_8c0368e6 + param_1) <= iVar3)) {
    bVar1 = false;
  }
  else if ((iVar9 < 0) || (*(int *)(DAT_8c0368e8 + param_1) <= iVar9)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (iVar4 = (*(code *)PTR_FUN_8c036f88)(param_1,iVar3,iVar9), iVar4 != 0)) {
    local_2c = local_2c + 1;
  }
  iVar4 = param_3 + 1;
  if ((iVar3 < 0) || (*(int *)(DAT_8c0368e6 + param_1) <= iVar3)) {
    bVar1 = false;
  }
  else if ((iVar4 < 0) || (*(int *)(DAT_8c0368e8 + param_1) <= iVar4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (iVar5 = (*(code *)PTR_FUN_8c036f88)(param_1,iVar3,iVar4), iVar5 != 0)) {
    local_2c = local_2c + 1;
  }
  iVar5 = param_2 + 1;
  if ((iVar5 < 0) || (*(int *)(DAT_8c0368e6 + param_1) <= iVar5)) {
    bVar1 = false;
  }
  else if ((iVar9 < 0) || (*(int *)(DAT_8c0368e8 + param_1) <= iVar9)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (iVar9 = (*(code *)PTR_FUN_8c036f88)(param_1,iVar9), iVar9 != 0)) {
    local_2c = local_2c + 1;
  }
  if ((iVar5 < 0) || (*(int *)(DAT_8c0368e6 + param_1) <= iVar5)) {
    bVar1 = false;
  }
  else if ((iVar4 < 0) || (*(int *)(DAT_8c036a46 + param_1) <= iVar4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar9 = iVar5;
    if ((**(char **)(DAT_8c036a48 + param_1) == '\x02') &&
       (*(char *)(*(int *)((int)DAT_8c036a4e + *(int *)(DAT_8c036a4a + param_1)) +
                  (int)DAT_8c036a4c * (uint)*(ushort *)(param_1 + 0x54) + 0x19) != '\x03')) {
      iVar7 = *(int *)(DAT_8c036a50 + param_1) + -3;
      iVar7 = (int)(iVar7 + (uint)(iVar7 < 0)) >> 1;
      iVar8 = iVar7 + 1;
      if ((iVar8 < *(int *)(DAT_8c036a52 + param_1)) && (iVar8 < iVar5)) {
        iVar9 = (iVar5 - iVar7) + -1;
      }
      if ((*(int *)(DAT_8c036a52 + param_1) < iVar8) && (iVar9 < iVar8)) {
        iVar9 = iVar9 + iVar8;
      }
    }
    if (*(short *)((iVar4 * 0x40 + iVar9) * 0x10 + DAT_8c036a54) != 0) {
      local_2c = local_2c + 1;
    }
  }
  if (iVar5 < *(int *)(DAT_8c036a50 + param_1)) {
    iVar9 = (int)DAT_8c036a4c;
    uVar10 = (uint)(-1 < param_3);
    while( true ) {
      if ((iVar5 < 0) || (*(int *)(DAT_8c036a50 + param_1) <= iVar5)) {
        bVar1 = false;
      }
      else if ((-1 < param_3 == 0) || (*(int *)(DAT_8c036a46 + param_1) <= param_3)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_8c036ab8;
      iVar7 = iVar5;
      if ((**(char **)(DAT_8c036a48 + param_1) == '\x02') &&
         (*(char *)(*(int *)((int)DAT_8c036a4e + *(int *)(DAT_8c036a4a + param_1)) +
                    iVar9 * (uint)*(ushort *)(param_1 + 0x54) + 0x19) != '\x03')) {
        iVar8 = *(int *)(DAT_8c036a50 + param_1) + -3;
        iVar8 = (int)(iVar8 + (uint)(iVar8 < 0)) >> 1;
        iVar6 = iVar8 + 1;
        if ((iVar6 < *(int *)(DAT_8c036a52 + param_1)) && (iVar6 < iVar5)) {
          iVar7 = (iVar5 - iVar8) + -1;
        }
        if ((*(int *)(DAT_8c036a52 + param_1) < iVar6) && (iVar7 < iVar6)) {
          iVar7 = iVar7 + iVar6;
        }
      }
      if (*(short *)((param_3 * 0x40 + iVar7) * 0x10 + DAT_8c036a54) != 0) break;
      cVar2 = (*(code *)PTR_FUN_8c036bb8)
                        (*(undefined4 *)(DAT_8c036baa + param_1),iVar5,param_3,1,uVar10);
      bVar1 = true;
      if ((((cVar2 != '\0') && (cVar2 != 'Z')) && (cVar2 != 'h')) &&
         ((cVar2 != 'i' && (cVar2 != '_')))) {
        bVar1 = false;
      }
      if ((bVar1) || (iVar5 = iVar5 + 1, *(int *)(DAT_8c036bac + param_1) <= iVar5))
      goto LAB_8c036ab8;
    }
    local_2c = local_2c + 1;
  }
LAB_8c036ab8:
  if (-1 < iVar3) {
    iVar9 = (int)DAT_8c036bae;
    while( true ) {
      if ((iVar3 < 0) || (*(int *)(DAT_8c036bac + param_1) <= iVar3)) {
        bVar1 = false;
      }
      else if ((param_3 < 0) || (*(int *)(DAT_8c036bb0 + param_1) <= param_3)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_8c036bec;
      iVar5 = iVar3;
      if ((**(char **)(DAT_8c036bb2 + param_1) == '\x02') &&
         (*(char *)(*(int *)((int)DAT_8c036bb4 + *(int *)(DAT_8c036baa + param_1)) +
                    iVar9 * (uint)*(ushort *)(param_1 + 0x54) + 0x19) != '\x03')) {
        iVar7 = *(int *)(DAT_8c036bac + param_1) + -3;
        iVar7 = (int)(iVar7 + (uint)(iVar7 < 0)) >> 1;
        iVar8 = iVar7 + 1;
        if ((iVar8 < *(int *)(DAT_8c036bb6 + param_1)) && (iVar8 < iVar3)) {
          iVar5 = (iVar3 - iVar7) + -1;
        }
        if ((*(int *)(DAT_8c036bb6 + param_1) < iVar8) && (iVar5 < iVar8)) {
          iVar5 = iVar5 + iVar8;
        }
      }
      if (*(short *)((param_3 * 0x40 + iVar5) * 0x10 + DAT_8c036bbc) != 0) break;
      cVar2 = (*(code *)PTR_FUN_8c036bb8)(*(undefined4 *)(DAT_8c036baa + param_1),iVar3,param_3,1);
      bVar1 = true;
      if ((((cVar2 != '\0') && (cVar2 != 'Z')) && (cVar2 != 'h')) &&
         ((cVar2 != 'i' && (cVar2 != '_')))) {
        bVar1 = false;
      }
      if ((bVar1) || (iVar3 = iVar3 + -1, iVar3 < 0)) goto LAB_8c036bec;
    }
    local_2c = local_2c + 1;
  }
LAB_8c036bec:
  if (iVar4 < *(int *)(DAT_8c036cfe + param_1)) {
    while( true ) {
      if ((param_2 < 0) || (*(int *)(DAT_8c036d00 + param_1) <= param_2)) {
        bVar1 = false;
      }
      else if ((iVar4 < 0) || (*(int *)(DAT_8c036cfe + param_1) <= iVar4)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_8c036cf6;
      iVar3 = param_2;
      if ((**(char **)(DAT_8c036d02 + param_1) == '\x02') &&
         (*(char *)(*(int *)((int)DAT_8c036d08 + *(int *)(DAT_8c036d04 + param_1)) +
                    (int)DAT_8c036d06 * (uint)*(ushort *)(param_1 + 0x54) + 0x19) != '\x03')) {
        iVar9 = *(int *)(DAT_8c036d00 + param_1) + -3;
        iVar9 = (int)(iVar9 + (uint)(iVar9 < 0)) >> 1;
        iVar5 = iVar9 + 1;
        if ((iVar5 < *(int *)(DAT_8c036d0a + param_1)) && (iVar5 < param_2)) {
          iVar3 = (param_2 - iVar9) + -1;
        }
        if ((*(int *)(DAT_8c036d0a + param_1) < iVar5) && (iVar3 < iVar5)) {
          iVar3 = iVar3 + iVar5;
        }
      }
      if (*(short *)((iVar4 * 0x40 + iVar3) * 0x10 + DAT_8c036d0c) != 0) break;
      cVar2 = (*(code *)PTR_FUN_8c036d10)(*(undefined4 *)(DAT_8c036d04 + param_1),param_2,iVar4,1);
      bVar1 = true;
      if ((((cVar2 != '\0') && (cVar2 != 'Z')) && (cVar2 != 'h')) &&
         ((cVar2 != 'i' && (cVar2 != '_')))) {
        bVar1 = false;
      }
      if ((bVar1) || (iVar4 = iVar4 + 1, *(int *)(DAT_8c036cfe + param_1) <= iVar4))
      goto LAB_8c036cf6;
    }
    local_2c = local_2c + 1;
  }
LAB_8c036cf6:
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    iVar3 = (int)DAT_8c036e44;
    while( true ) {
      if ((param_2 < 0) || (*(int *)(DAT_8c036e46 + param_1) <= param_2)) {
        bVar1 = false;
      }
      else if ((param_3 < 0) || (*(int *)(DAT_8c036e48 + param_1) <= param_3)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return local_2c;
      }
      iVar9 = param_2;
      if ((**(char **)(DAT_8c036e4a + param_1) == '\x02') &&
         (*(char *)(*(int *)((int)DAT_8c036e4e + *(int *)(DAT_8c036e4c + param_1)) +
                    iVar3 * (uint)*(ushort *)(param_1 + 0x54) + 0x19) != '\x03')) {
        iVar4 = *(int *)(DAT_8c036e46 + param_1) + -3;
        iVar4 = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
        iVar5 = iVar4 + 1;
        if ((iVar5 < *(int *)(DAT_8c036e50 + param_1)) && (iVar5 < param_2)) {
          iVar9 = (param_2 - iVar4) + -1;
        }
        if ((*(int *)(DAT_8c036e50 + param_1) < iVar5) && (iVar9 < iVar5)) {
          iVar9 = iVar9 + iVar5;
        }
      }
      if (*(short *)((param_3 * 0x40 + iVar9) * 0x10 + DAT_8c036e54) != 0) break;
      cVar2 = (*(code *)PTR_FUN_8c036e58)(*(undefined4 *)(DAT_8c036e4c + param_1),param_2,param_3,1)
      ;
      bVar1 = true;
      if ((((cVar2 != '\0') && (cVar2 != 'Z')) && (cVar2 != 'h')) &&
         ((cVar2 != 'i' && (cVar2 != '_')))) {
        bVar1 = false;
      }
      if (bVar1) {
        return local_2c;
      }
      param_3 = param_3 + -1;
      if (param_3 < 0) {
        return local_2c;
      }
    }
    local_2c = local_2c + 1;
  }
  return local_2c;
}

