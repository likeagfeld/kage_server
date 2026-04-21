// entry: 8c09fc84
// name: FUN_8c09fc84
// signature: undefined FUN_8c09fc84(void)


/* WARNING: Removing unreachable block (ram,0x8c09fd90) */
/* WARNING: Removing unreachable block (ram,0x8c09fd86) */
/* WARNING: Removing unreachable block (ram,0x8c09fd9c) */

uint FUN_8c09fc84(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)((int)DAT_8c09fdc6 + (int)param_1);
  if (DAT_8c09fdc8 <= iVar2) {
    if (iVar2 == DAT_8c09fdca) {
      FUN_8c09fc38(param_1,(int)DAT_8c09fdd8,0x90);
    }
    uVar1 = DAT_8c09fde0;
    uVar4 = DAT_8c09fddc;
    iVar7 = (int)DAT_8c09fdcc;
    iVar6 = (int)DAT_8c09fdce;
    iVar2 = 0;
    do {
      iVar5 = iVar2 + 1;
      uVar3 = param_1[iVar2] & uVar4 | param_1[iVar5] & uVar1;
      iVar7 = iVar7 + -1;
      param_1[iVar2] =
           param_1[iVar2 + iVar6] ^ uVar3 >> 1 ^ *(uint *)(PTR_DAT_8c09fde4 + (uVar3 & 1) * 4);
      iVar2 = iVar5;
    } while (iVar7 != 0);
    iVar2 = (int)DAT_8c09fdd0;
    if (iVar5 < iVar2) {
      iVar6 = (int)DAT_8c09fdd2;
      do {
        iVar7 = iVar5 + 1;
        uVar3 = param_1[iVar5] & uVar4 | param_1[iVar7] & uVar1;
        param_1[iVar5] =
             param_1[iVar5 + iVar6] ^ uVar3 >> 1 ^ *(uint *)(PTR_DAT_8c09fde4 + (uVar3 & 1) * 4);
        iVar5 = iVar7;
      } while (iVar7 < iVar2);
    }
    uVar4 = *(uint *)((int)DAT_8c09fdd4 + (int)param_1) & uVar4 | *param_1 & uVar1;
    iVar6 = (int)DAT_8c09fdc6;
    *(uint *)((int)param_1 + (int)DAT_8c09fdd4) =
         *(uint *)((int)DAT_8c09fdd6 + (int)param_1) ^ uVar4 >> 1 ^
         *(uint *)(PTR_DAT_8c09fde4 + (uVar4 & 1) * 4);
    iVar2 = 0;
    *(undefined4 *)(iVar6 + (int)param_1) = 0;
  }
  *(int *)((int)DAT_8c09fdc6 + (int)param_1) = iVar2 + 1;
  uVar4 = param_1[iVar2] ^ param_1[iVar2] >> 0xb;
  uVar4 = uVar4 ^ uVar4 << 7 & DAT_8c09fde8;
  uVar4 = uVar4 ^ uVar4 << 0xf & DAT_8c09fdec;
  return uVar4 ^ uVar4 >> 0x12;
}

