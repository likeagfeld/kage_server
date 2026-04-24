// entry: 8c09e7e4
// name: FUN_8c09e7e4
// signature: undefined FUN_8c09e7e4(void)


/* WARNING: Removing unreachable block (ram,0x8c09e7f4) */

undefined8 FUN_8c09e7e4(void)

{
  uint uVar1;
  uint in_r1;
  uint uVar2;
  short *in_r2;
  
  uVar2 = (in_r1 & 0xff) - 0x20;
  uVar1 = (int)*in_r2 << (((in_r1 & 0xff00) >> 8) + 0x10 & 0x1f);
  if ((int)uVar2 < 0) {
    uVar1 = uVar1 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar1 = uVar1 << (uVar2 & 0x1f);
  }
  return CONCAT44(in_r1,uVar1);
}

