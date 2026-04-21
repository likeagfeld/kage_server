// entry: 8c09c2e8
// name: FUN_8c09c2e8
// signature: undefined FUN_8c09c2e8(void)


undefined4 FUN_8c09c2e8(int param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte local_6c [64];
  undefined *puStack_2c;
  byte *pbStack_28;
  int iStack_24;
  
  puVar3 = PTR_FUN_8c09c498;
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
    uVar7 = 1;
  }
  else {
    uVar7 = 2;
    param_2 = (uint *)((int)param_2 + (int)DAT_8c09c330);
  }
  if (*param_2 != DAT_8c09c334) {
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  (*(code *)puVar3)(local_6c,0,0x40);
  (*(code *)PTR_FUN_8c09c49c)(local_6c,param_2 + 1,0x1c);
  pbStack_28 = local_6c;
  iVar4 = (*(code *)PTR_FUN_8c09c4a0)(local_6c);
  if (0 < iVar4) {
    iVar8 = 0;
    pbVar5 = pbStack_28;
    if (0 < iVar4 + -1) {
      do {
        if (((PTR_DAT_8c09c4a4[*pbVar5] & 0x1f) == 0) || ((PTR_DAT_8c09c4a4[pbVar5[1]] & 0x1f) == 0)
           ) goto LAB_8c09c4d8;
        iVar8 = iVar8 + 2;
        pbVar5 = pbVar5 + 2;
      } while (iVar8 < iVar4 + -1);
    }
    if ((iVar8 < iVar4) && ((PTR_DAT_8c09c4a4[pbStack_28[iVar8]] & 0x1f) == 0)) {
LAB_8c09c4d8:
      *(undefined4 *)(param_1 + 4) = 4;
      return 0;
    }
  }
  (*(code *)PTR_FUN_8c09c498)(local_6c,0,0x40);
  (*(code *)PTR_FUN_8c09c49c)(local_6c,param_2 + 8,0x10);
  pbStack_28 = local_6c;
  iVar4 = (*(code *)PTR_FUN_8c09c4a0)(local_6c);
  if (0 < iVar4) {
    iVar8 = 0;
    if (0 < iVar4 + -1) {
      puStack_2c = PTR_DAT_8c09c4a4;
      pbVar5 = pbStack_28;
      do {
        if (((PTR_DAT_8c09c4a4[*pbVar5] & 0x1f) == 0) || ((PTR_DAT_8c09c4a4[pbVar5[1]] & 0x1f) == 0)
           ) goto LAB_8c09c428;
        iVar8 = iVar8 + 2;
        pbVar5 = pbVar5 + 2;
      } while (iVar8 < iVar4 + -1);
    }
    if ((iVar8 < iVar4) && ((PTR_DAT_8c09c4a4[pbStack_28[iVar8]] & 0x1f) == 0)) goto LAB_8c09c428;
  }
  *(undefined4 *)(DAT_8c09c5a6 + param_1) = 0;
  *(undefined4 *)(param_1 + 4) = 5;
LAB_8c09c428:
  iStack_24 = 0;
  iVar4 = 2;
  do {
    (*(code *)PTR_FUN_8c09c498)(local_6c,0,0x40);
    (*(code *)PTR_FUN_8c09c49c)(local_6c,param_2 + iStack_24 * 10 + 0xc,0x28);
    iVar6 = iStack_24 * 0x28;
    iVar8 = (*(code *)PTR_FUN_8c09c4a0)();
    if ((0 < iVar8) && (iVar9 = 0, 0 < iVar8)) {
      do {
        bVar1 = *(byte *)((int)param_2 + iVar9 + iVar6 + 0x30);
        if ((((PTR_DAT_8c09c4a4[bVar1] & 4) == 0) &&
            ((((bVar1 != 0x20 && (bVar1 != 0x28)) && (bVar1 != 0x29)) &&
             ((bVar1 != 0x2a && (bVar1 != 0x2b)))))) &&
           ((bVar1 != 0x2c && (((bVar1 != 0x2d && (bVar1 != 0x2e)) && (bVar1 != 0x3a)))))) {
          bVar2 = false;
          goto LAB_8c09c4aa;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
    bVar2 = true;
LAB_8c09c4aa:
    if (!bVar2) {
      *(undefined4 *)(param_1 + 4) = 6;
      return 0;
    }
    iVar4 = iVar4 + -1;
    iStack_24 = iStack_24 + 1;
    if (iVar4 == 0) {
      *(undefined4 *)(DAT_8c09c5a4 + param_1) = uVar7;
      return 1;
    }
  } while( true );
}

