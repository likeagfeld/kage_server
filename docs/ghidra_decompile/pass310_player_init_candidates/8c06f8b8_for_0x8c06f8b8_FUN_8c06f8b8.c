// query addr: 0x8c06f8b8
// containing entry: 8c06f8b8
// name: FUN_8c06f8b8
// signature: undefined FUN_8c06f8b8(void)
// body addrs: 246


void FUN_8c06f8b8(ulonglong param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  char in_FPSCR_SZ;
  undefined4 local_14;
  uint local_10;
  
  uVar2 = (undefined4)param_1;
  if ((*(char *)(param_2 + 0x30) == '\x01') && (*(int *)(DAT_8c06f90a + param_2) != 0)) {
    uVar2 = (*(code *)PTR_FUN_8c06fa7c)(*(undefined4 *)(DAT_8c06fa72 + param_2),4,1,0);
    param_1 = param_1 & 0xffffffff;
    (*(code *)PTR_FUN_8c06fa80)(uVar2,0);
    puVar1 = PTR_DAT_8c06fa84;
    if (PTR_DAT_8c06fa84[0x5c] == '\0') {
      local_14 = *DAT_8c06fa94;
    }
    else {
      local_14 = *DAT_8c06fa88;
    }
    iVar5 = 8;
    (*(code *)PTR_FUN_8c06fa8c)(PTR_DAT_8c06fa84[0x5d]);
    (*(code *)PTR_FUN_8c06fa90)(local_14,puVar1[0x5e],puVar1[0x5f],0);
    iVar3 = (int)DAT_8c06fa74;
    local_10 = 0;
    do {
      if (*(char *)(param_2 + 0x3e + local_10) != '\x03') {
        if ((int)local_10 < 0) {
          uVar4 = 1 >> (~local_10 & 0x1f) + 1;
        }
        else {
          uVar4 = 1 << (local_10 & 0x1f);
        }
        if (((*(uint *)(DAT_8c06fa76 + param_2) & uVar4) == 0) &&
           (((int)*(char *)(*(int *)(param_2 + iVar3 + local_10 * 4) + 0x12) & (int)DAT_8c06fa78) !=
            4)) {
          param_1 = param_1 & 0xffffffff;
          (*(code *)PTR_FUN_8c06fa98)(*(int *)(param_2 + iVar3 + local_10 * 4) + 0x10,4);
        }
      }
      uVar2 = (undefined4)param_1;
      iVar5 = iVar5 + -1;
      local_10 = local_10 + 1;
    } while (iVar5 != 0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(DAT_8c06f92c + 0x34),uVar2);
  }
  else {
    uVar6 = *(undefined8 *)(DAT_8c06f92c + 0x34);
  }
  (*(code *)PTR_FUN_8c06f930)(uVar6,param_2);
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(DAT_8c06f92c + 0x34),(int)uVar6);
  }
  else {
    uVar6 = *(undefined8 *)(DAT_8c06f92c + 0x34);
  }
  (*(code *)PTR_FUN_8c06f934)(uVar6,*(undefined4 *)(DAT_8c06f90c + param_2));
  (*(code *)PTR_FUN_8c06f928)(param_2 + 0x10,0xf);
  return;
}

