// entry: 8c02cc4c
// name: FUN_8c02cc4c


void FUN_8c02cc4c(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char in_FPSCR_SZ;
  
  iVar6 = 0;
  *(undefined4 *)(DAT_8c02cd46 + param_2) = 0;
  iVar5 = 0;
  iVar10 = 8;
  iVar8 = (int)DAT_8c02cd4a;
  *(undefined4 *)(DAT_8c02cd48 + param_2) = 0;
  *(undefined4 *)(DAT_8c02cd4c + param_2) = 0;
  *(undefined4 *)(DAT_8c02cd4e + param_2) = 0;
  *(undefined4 *)(DAT_8c02cd50 + param_2) = 0;
  do {
    puVar3 = (ushort *)
             (*(int *)((int)DAT_8c02cd54 + *(int *)(DAT_8c02cd52 + param_2)) + iVar8 * iVar5);
    if ((((puVar3 != (ushort *)0x0) && ((*puVar3 & 1) != 0)) && ((puVar3[4] & 4) == 0)) &&
       (*(char *)(*(int *)(DAT_8c02cd56 + param_2) + 0xe + iVar5) == '\x02')) {
      iVar6 = iVar6 + 1;
    }
    iVar10 = iVar10 + -1;
    iVar5 = iVar5 + 1;
  } while (iVar10 != 0);
  *(undefined4 *)(DAT_8c02cd58 + param_2) = *(undefined4 *)(PTR_DAT_8c02cd6c + iVar6 * 4);
  uVar7 = *(undefined4 *)(DAT_8c02cd5a + param_2);
  uVar9 = *(undefined4 *)(DAT_8c02cd5c + param_2);
  uVar11 = *(undefined4 *)(DAT_8c02cd5e + param_2);
  puVar3 = (ushort *)
           (*(int *)((int)DAT_8c02cd54 + *(int *)(DAT_8c02cd52 + param_2)) +
           iVar8 * *(int *)(DAT_8c02cd60 + param_2));
  if (((puVar3 != (ushort *)0x0) && ((*puVar3 & 1) != 0)) && ((puVar3[4] & 4) == 0)) {
    uVar2 = (*(code *)PTR_FUN_8c02ce28)(6);
    puVar1 = PTR_FUN_8c02ce28;
    iVar5 = (int)DAT_8c02ce18;
    *(undefined4 *)(DAT_8c02ce16 + param_2) = uVar2;
    uVar2 = (*(code *)puVar1)(puVar3 + 8,iVar5);
    *(undefined4 *)(DAT_8c02ce1a + param_2) = uVar2;
    *(undefined4 *)(DAT_8c02ce1c + param_2) = 1;
    (*(code *)PTR_FUN_8c02ce2c)(param_2,uVar7,uVar9,uVar11);
    if (*(int *)(DAT_8c02ce1e + param_2) == 0) {
      return;
    }
    iVar10 = *(int *)(DAT_8c02ce20 + param_2);
    iVar6 = param_2 + DAT_8c02ce22;
    iVar5 = (*(code *)PTR_FUN_8c02ce28)(6,iVar6);
    if ((iVar5 != *(int *)(DAT_8c02ce16 + param_2)) ||
       (iVar5 = (*(code *)PTR_FUN_8c02ce28)((int)DAT_8c02ce18,iVar6 + iVar10 * 2),
       iVar5 != *(int *)(DAT_8c02ce1a + param_2))) goto LAB_8c02ccf4;
    *(undefined2 *)(param_2 + DAT_8c02ce24 + iVar10 * 2) = 1;
  }
  if (*(int *)(DAT_8c02cd4e + param_2) == 0) {
    return;
  }
LAB_8c02ccf4:
  puVar1 = PTR_DAT_8c02cd70;
  iVar5 = (int)DAT_8c02cd64;
  uVar7 = *(undefined4 *)(PTR_DAT_8c02cd70 + 4);
  *(undefined4 *)(DAT_8c02cd62 + param_2) = 1;
  puVar4 = (undefined4 *)(param_2 + iVar5);
  iVar5 = (int)DAT_8c02cd52;
  uVar9 = *(undefined4 *)puVar1;
  puVar4[1] = uVar7;
  uVar7 = *(undefined4 *)(puVar1 + 8);
  iVar6 = *(int *)(iVar5 + param_2);
  iVar5 = (int)DAT_8c02cd54;
  *puVar4 = uVar9;
  puVar4[2] = uVar7;
  *(undefined2 *)(param_2 + DAT_8c02cd66) =
       *(undefined2 *)(*(int *)(iVar5 + iVar6) + iVar8 * (uint)*(ushort *)(param_2 + 0x54) + 2);
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44(*(undefined4 *)(iVar6 + 0x18),param_1);
  }
  else {
    uVar12 = *(undefined8 *)(iVar6 + 0x18);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c02cd68 + param_2) = (int)((ulonglong)uVar12 >> 0x20);
  }
  else {
    *(undefined8 *)(DAT_8c02cd68 + param_2) = uVar12;
  }
  return;
}

