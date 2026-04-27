// entry: 8c02c49e
// name: FUN_8c02c49e


void FUN_8c02c49e(undefined4 param_1,int param_2)

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
  
  iVar7 = 0;
  *(undefined4 *)(DAT_8c02c572 + param_2) = 0;
  iVar5 = 0;
  iVar9 = 8;
  iVar8 = (int)DAT_8c02c576;
  *(undefined4 *)(DAT_8c02c574 + param_2) = 0;
  *(undefined4 *)(DAT_8c02c578 + param_2) = 0;
  *(undefined4 *)(DAT_8c02c57a + param_2) = 0;
  *(undefined4 *)(DAT_8c02c57c + param_2) = 0;
  do {
    puVar3 = (ushort *)
             (*(int *)((int)DAT_8c02c580 + *(int *)(DAT_8c02c57e + param_2)) + iVar8 * iVar5);
    if ((((puVar3 != (ushort *)0x0) && ((*puVar3 & 1) != 0)) && ((puVar3[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02c582 + param_2) + 0xe + iVar5) == '\x02')) {
      iVar7 = iVar7 + 1;
    }
    iVar9 = iVar9 + -1;
    iVar5 = iVar5 + 1;
  } while (iVar9 != 0);
  *(undefined4 *)(DAT_8c02c584 + param_2) = *(undefined4 *)(PTR_DAT_8c02c594 + iVar7 * 4);
  (*(code *)PTR_FUN_8c02c598)
            (param_2,*(undefined4 *)(DAT_8c02c586 + param_2),*(undefined4 *)(DAT_8c02c588 + param_2)
             ,*(undefined4 *)(DAT_8c02c58a + param_2));
  puVar1 = PTR_DAT_8c02c59c;
  if (*(int *)(DAT_8c02c57a + param_2) != 0) {
    iVar5 = (int)DAT_8c02c58e;
    uVar2 = *(undefined4 *)(PTR_DAT_8c02c59c + 4);
    *(undefined4 *)(DAT_8c02c58c + param_2) = 1;
    puVar4 = (undefined4 *)(param_2 + iVar5);
    iVar5 = (int)DAT_8c02c57e;
    uVar6 = *(undefined4 *)puVar1;
    puVar4[1] = uVar2;
    uVar2 = *(undefined4 *)(puVar1 + 8);
    iVar7 = *(int *)(iVar5 + param_2);
    iVar5 = (int)DAT_8c02c580;
    *puVar4 = uVar6;
    puVar4[2] = uVar2;
    *(undefined2 *)(param_2 + DAT_8c02c590) =
         *(undefined2 *)(*(int *)(iVar5 + iVar7) + iVar8 * (uint)*(ushort *)(param_2 + 0x54) + 2);
    if (in_FPSCR_SZ == '\0') {
      uVar10 = CONCAT44(*(undefined4 *)(iVar7 + 0x18),param_1);
    }
    else {
      uVar10 = *(undefined8 *)(iVar7 + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c02c592 + param_2) = (int)((ulonglong)uVar10 >> 0x20);
    }
    else {
      *(undefined8 *)(DAT_8c02c592 + param_2) = uVar10;
    }
  }
  return;
}

