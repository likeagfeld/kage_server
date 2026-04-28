// entry: 8c02d4ec
// name: FUN_8c02d4ec


/* WARNING: Removing unreachable block (ram,0x8c02d56a) */

void FUN_8c02d4ec(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar9 = 0;
  *(undefined4 *)(DAT_8c02d5fc + param_1) = 0;
  iVar7 = 0;
  iVar12 = 8;
  iVar11 = (int)DAT_8c02d600;
  *(undefined4 *)(DAT_8c02d5fe + param_1) = 0;
  *(undefined4 *)(DAT_8c02d602 + param_1) = 0;
  *(undefined4 *)(DAT_8c02d604 + param_1) = 0;
  *(undefined4 *)(DAT_8c02d606 + param_1) = 0;
  iVar4 = DAT_8c02d624;
  do {
    puVar5 = (ushort *)
             (*(int *)((int)DAT_8c02d60a + *(int *)(DAT_8c02d608 + param_1)) + iVar11 * iVar7);
    if ((((puVar5 != (ushort *)0x0) && ((*puVar5 & 1) != 0)) && ((puVar5[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02d60c + param_1) + 0xe + iVar7) == '\x02')) {
      iVar9 = iVar9 + 1;
    }
    iVar12 = iVar12 + -1;
    iVar7 = iVar7 + 1;
  } while (iVar12 != 0);
  *(undefined4 *)(DAT_8c02d60e + param_1) = *(undefined4 *)(PTR_DAT_8c02d620 + iVar9 * 4);
  uVar6 = *(uint *)(DAT_8c02d612 + param_1);
  bVar1 = *(byte *)((*(int *)(DAT_8c02d610 + param_1) + uVar6 * 0x40) * 0x10 + iVar4);
  if ((bVar1 < 0x50) || (0x59 < bVar1)) {
    iVar4 = (int)DAT_8c02d618;
    *(undefined4 *)(DAT_8c02d5fe + param_1) = 0;
    *(undefined4 *)(DAT_8c02d604 + param_1) = 1;
    puVar2 = PTR___bfswu_8c02d62c;
    *(undefined4 *)(DAT_8c02d602 + param_1) = 0;
    *(undefined2 *)(param_1 + iVar4) = 1;
    (*(code *)puVar2)(6);
    (*(code *)PTR___bfswu_8c02d62c)(uVar6 & 0xffff,(int)DAT_8c02d61c);
  }
  else {
    *(undefined4 *)(DAT_8c02d604 + param_1) = 0;
  }
  puVar2 = PTR_DAT_8c02d628;
  if (*(int *)(DAT_8c02d604 + param_1) != 0) {
    iVar4 = (int)DAT_8c02d616;
    uVar3 = *(undefined4 *)PTR_DAT_8c02d628;
    *(undefined4 *)(DAT_8c02d614 + param_1) = 1;
    puVar10 = (undefined4 *)(param_1 + iVar4);
    uVar8 = *(undefined4 *)(puVar2 + 4);
    *puVar10 = uVar3;
    uVar3 = *(undefined4 *)(puVar2 + 8);
    puVar10[1] = uVar8;
    puVar10[2] = uVar3;
  }
  return;
}

