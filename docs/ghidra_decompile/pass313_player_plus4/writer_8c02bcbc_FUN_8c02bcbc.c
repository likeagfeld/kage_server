// entry: 8c02bcbc
// name: FUN_8c02bcbc


void FUN_8c02bcbc(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c02bd98 + param_2) = 1;
  iVar7 = 0;
  iVar5 = 0;
  iVar9 = 8;
  iVar8 = (int)DAT_8c02bd9c;
  *(undefined4 *)(DAT_8c02bd9a + param_2) = 0;
  *(undefined4 *)(DAT_8c02bd9e + param_2) = 0;
  *(undefined4 *)(DAT_8c02bda0 + param_2) = 0;
  *(undefined4 *)(DAT_8c02bda2 + param_2) = 0;
  do {
    puVar3 = (ushort *)
             (*(int *)((int)DAT_8c02bda6 + *(int *)(DAT_8c02bda4 + param_2)) + iVar8 * iVar5);
    if ((((puVar3 != (ushort *)0x0) && ((*puVar3 & 1) != 0)) && ((puVar3[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02bda8 + param_2) + 0xe + iVar5) == '\x02')) {
      iVar7 = iVar7 + 1;
    }
    iVar9 = iVar9 + -1;
    iVar5 = iVar5 + 1;
  } while (iVar9 != 0);
  *(undefined4 *)(DAT_8c02bdaa + param_2) = *(undefined4 *)(PTR_DAT_8c02bdbc + iVar7 * 4);
  (*(code *)PTR_FUN_8c02bdc0)
            (param_2,*(undefined4 *)(DAT_8c02bdac + param_2),*(undefined4 *)(DAT_8c02bdae + param_2)
             ,*(undefined4 *)(DAT_8c02bdb0 + param_2));
  puVar1 = PTR_DAT_8c02bdc4;
  if (*(int *)(DAT_8c02bda0 + param_2) != 0) {
    iVar5 = (int)DAT_8c02bdb4;
    uVar2 = *(undefined4 *)PTR_DAT_8c02bdc4;
    *(undefined4 *)(DAT_8c02bdb2 + param_2) = 1;
    puVar4 = (undefined4 *)(param_2 + iVar5);
    iVar5 = (int)DAT_8c02bda4;
    uVar6 = *(undefined4 *)(puVar1 + 4);
    *puVar4 = uVar2;
    uVar2 = *(undefined4 *)(puVar1 + 8);
    iVar7 = *(int *)(iVar5 + param_2);
    iVar5 = (int)DAT_8c02bda6;
    puVar4[1] = uVar6;
    puVar4[2] = uVar2;
    *(undefined2 *)(param_2 + DAT_8c02bdb6) =
         *(undefined2 *)(*(int *)(iVar5 + iVar7) + iVar8 * (uint)*(ushort *)(param_2 + 0x54) + 2);
    if (in_FPSCR_SZ == '\0') {
      uVar10 = CONCAT44(*(undefined4 *)(iVar7 + 0x18),param_1);
    }
    else {
      uVar10 = *(undefined8 *)(iVar7 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c02bdb8 + param_2) = (int)((ulonglong)uVar10 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c02bdb8 + param_2) = uVar10;
    }
  }
  return;
}

