// entry: 8c09e790
// name: __bfswu
// signature: undefined __bfswu(void)


/* WARNING: Removing unreachable block (ram,0x8c09e7aa) */
/* Library Function - Single Match
    __bfswu
   
   Library: libsh4nlfzz r9 1 */

undefined8 __bfswu(void)

{
  uint in_r0;
  uint uVar1;
  ushort uVar2;
  uint in_r1;
  uint uVar3;
  ushort *in_r2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0x20 - (in_r1 & 0xff);
  if ((int)uVar5 < 0) {
    uVar1 = in_r0 >> (~uVar5 & 0x1f) + 1;
  }
  else {
    uVar1 = in_r0 << (uVar5 & 0x1f);
  }
  uVar4 = ((in_r1 & 0xff00) >> 8) + 0x10;
  uVar3 = (int)(short)*in_r2 << (uVar4 & 0x1f) ^ uVar1;
  uVar6 = -uVar5;
  if ((int)uVar6 < 0) {
    uVar3 = uVar3 >> (~uVar6 & 0x1f) + 1;
    uVar1 = uVar1 >> (~uVar6 & 0x1f) + 1;
  }
  else {
    uVar3 = uVar3 << (uVar6 & 0x1f);
    uVar1 = uVar1 << (uVar6 & 0x1f);
  }
  uVar5 = uVar5 - uVar4;
  if ((int)uVar5 < 0) {
    uVar2 = (ushort)(uVar3 >> (~uVar5 & 0x1f) + 1);
  }
  else {
    uVar2 = (ushort)(uVar3 << (uVar5 & 0x1f));
  }
  *in_r2 = uVar2 ^ *in_r2;
  return CONCAT44(in_r1,uVar1);
}

