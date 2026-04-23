// entry: 8c09e61c
// name: FUN_8c09e61c
// signature: undefined FUN_8c09e61c(void)


undefined8 FUN_8c09e61c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_r0;
  uint in_r1;
  uint *in_r2;
  uint *extraout_r2;
  uint *extraout_r2_00;
  uint uVar1;
  code *extraout_r3;
  uint uVar2;
  uint uVar3;
  
  uVar1 = in_r1 & 0xff;
  if (uVar1 == 1) {
    uVar2 = in_r0 & 1;
    uVar1 = *in_r2 & *(uint *)(&DAT_8c09e710 + (in_r1 >> 8) * 4);
    if (uVar2 != 0) {
      uVar1 = uVar1 | ~*(uint *)(&DAT_8c09e710 + (in_r1 >> 8) * 4);
    }
    *in_r2 = uVar1;
  }
  else {
    uVar2 = in_r0 & *(uint *)(&DAT_8c09e68c + uVar1 * 4);
    uVar1 = (*(code *)PTR_FUN_8c09e688)((0x20 - uVar1) - (in_r1 >> 8),uVar2,param_3,param_2,param_1)
    ;
    uVar3 = *extraout_r2 & ~uVar1;
    uVar1 = (*extraout_r3)();
    *extraout_r2_00 = uVar3 | uVar1;
  }
  return CONCAT44(in_r1,uVar2);
}

