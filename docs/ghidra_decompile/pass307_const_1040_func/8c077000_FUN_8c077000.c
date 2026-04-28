// entry: 8c077000
// name: FUN_8c077000
// signature: undefined FUN_8c077000(void)


void FUN_8c077000(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = (*(code *)PTR_FUN_8c077138)
                    (*(undefined4 *)
                      (PTR_DAT_8c077134 +
                      ((uint)*(byte *)(param_1 + 0x31) + (uint)*(byte *)(param_1 + 0x30) * 7) * 4));
  if (iVar2 != 0) {
    *(undefined4 *)(DAT_8c07711e + param_1) = 0;
    uVar4 = 0;
    iVar2 = 4;
    uVar5 = 1;
    do {
      if (*(char *)(param_1 + 0x3e + uVar4) != '\x03') {
        if ((int)uVar4 < 0) {
          uVar3 = 1 >> (~uVar4 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar4 & 0x1f);
        }
        *(uint *)(DAT_8c07711e + param_1) = *(uint *)(DAT_8c07711e + param_1) | uVar3;
      }
      if (*(char *)(param_1 + 0x3e + uVar5) != '\x03') {
        if ((int)uVar5 < 0) {
          uVar3 = 1 >> (~uVar5 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar5 & 0x1f);
        }
        *(uint *)(DAT_8c07711e + param_1) = *(uint *)(DAT_8c07711e + param_1) | uVar3;
      }
      uVar3 = DAT_8c077140;
      puVar1 = PTR__memset_8c07713c;
      iVar2 = iVar2 + -1;
      uVar4 = uVar4 + 2;
      uVar5 = uVar5 + 2;
    } while (iVar2 != 0);
    iVar7 = 0;
    iVar6 = 8;
    *(byte *)(DAT_8c077120 + param_1) = *(byte *)(DAT_8c077120 + param_1) & 0x7f;
    *(uint *)(DAT_8c077122 + param_1) = *(uint *)(DAT_8c077122 + param_1) & uVar3;
    iVar2 = (int)DAT_8c077126;
    *(undefined4 *)(DAT_8c077124 + param_1) = 0;
    iVar2 = param_1 + iVar2;
    *(undefined4 *)(DAT_8c077128 + param_1) = 0;
    *(undefined4 *)(DAT_8c07712a + param_1) = 0;
    do {
      *(undefined4 *)(iVar7 * 0x2c + iVar2) = 0;
      *(undefined4 *)(iVar7 * 0x2c + iVar2 + 4) = 0;
      iVar8 = iVar7 * 0x2c;
      *(undefined4 *)(iVar7 * 0x2c + iVar2 + 8) = 0;
      iVar7 = iVar7 + 1;
      (*(code *)puVar1)(iVar8 + iVar2 + 0xc,0,0x20);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    (*(code *)PTR_FUN_8c07714c)
              (*DAT_8c077148,
               (int)*(short *)(PTR_DAT_8c077144 +
                              (uint)*(ushort *)
                                     (*(int *)((int)DAT_8c07712e + *(int *)(DAT_8c07712c + param_1))
                                     + 0x1a) * 2),1,0);
    **(uint **)(DAT_8c077130 + param_1) = **(uint **)(DAT_8c077130 + param_1) | 2;
    (*(code *)PTR_FUN_8c077150)(0,param_1 + 0x10,10);
  }
  return;
}

