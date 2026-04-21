// entry: 8c0a7140
// name: FUN_8c0a7140
// signature: undefined FUN_8c0a7140(void)


int FUN_8c0a7140(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char in_FPSCR_SZ;
  
  uVar5 = *(uint *)(param_1 + 0x3c);
  iVar6 = 0;
  iVar8 = 0;
  if ((uVar5 & 1) == 0) {
    if ((uVar5 & 8) == 0) {
      iVar8 = 1;
    }
    else if ((uVar5 & 0x10) == 0) {
      iVar8 = 2;
    }
  }
  else if ((uVar5 & 8) == 0) {
    iVar8 = 1;
  }
  puVar2 = (undefined4 *)(*(code *)PTR_FUN_8c0a7298)(0x24);
  (*(code *)PTR_FUN_8c0a729c)(puVar2,0,0x24);
  *puVar2 = param_3[1];
  puVar2[7] = param_3[2];
  puVar2[1] = param_3[3];
  puVar2[2] = param_3[4];
  puVar2[3] = param_3[5];
  puVar2[4] = param_3[6];
  iVar7 = *(int *)(param_1 + 0x40);
  iVar3 = (*(code *)PTR_FUN_8c0a72a0)(param_3[1],param_3[3],param_3[4],param_3[5],param_3[6]);
  if (iVar8 + -1 == 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 8;
  }
  else {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x10;
  }
  puVar1 = PTR_FUN_8c0a72a0;
  puVar2[5] = iVar7 + iVar3 * (iVar8 + -1);
  uVar4 = (*(code *)puVar1)(*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4]);
  puVar1 = PTR_FUN_8c0a72a4;
  puVar2[6] = uVar4;
  param_2[5] = puVar2;
  iVar8 = (*(code *)puVar1)(0);
  if (iVar8 == 0) {
    param_2[2] = 0;
  }
  else {
    iVar6 = (*(code *)PTR_FUN_8c0a72a8)(iVar8,puVar2);
    param_2[2] = iVar8;
    if (iVar6 != 0) goto LAB_8c0a724a;
  }
  iVar8 = param_2[5];
  if (iVar8 != 0) {
    if (param_2[2] == 0) {
      if (*(int *)(iVar8 + 0x14) != 0) {
        if (*(int *)(param_1 + 0x40) == *(int *)(iVar8 + 0x14)) {
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffff7;
          iVar8 = param_2[5];
        }
        else if (*(int *)(param_1 + 0x40) + *(int *)(iVar8 + 0x18) == *(int *)(iVar8 + 0x14)) {
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffef;
          iVar8 = param_2[5];
        }
        *(undefined4 *)(iVar8 + 0x14) = 0;
        iVar8 = param_2[5];
      }
    }
    else {
      if (*(int *)(param_1 + 0x40) == *(int *)(iVar8 + 0x14)) {
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffff7;
        iVar8 = param_2[5];
      }
      else if (*(int *)(param_1 + 0x40) + *(int *)(iVar8 + 0x18) == *(int *)(iVar8 + 0x14)) {
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffef;
        iVar8 = param_2[5];
      }
      *(undefined4 *)(iVar8 + 0x14) = 0;
      iVar8 = param_2[2];
      if (iVar8 == 0) {
        iVar8 = param_2[5];
      }
      else {
        (**(code **)(*(int *)(iVar8 + 8) + 0x14))(iVar8 + *(int *)(*(int *)(iVar8 + 8) + 0xc),3);
        iVar8 = param_2[5];
      }
      param_2[2] = 0;
    }
    (*(code *)PTR_FUN_8c0a72ac)(iVar8);
    param_2[5] = 0;
  }
LAB_8c0a724a:
  *param_2 = param_4;
  param_2[1] = *param_3;
  if (in_FPSCR_SZ == '\0') {
    param_2[3] = param_3[8];
    param_2[4] = param_3[9];
  }
  else {
    *(undefined8 *)(param_2 + 3) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 9);
  }
  return iVar6;
}

