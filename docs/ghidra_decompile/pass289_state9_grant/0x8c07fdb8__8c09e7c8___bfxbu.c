// PTR slot:    0x8c07fdb8
// resolved to: 8c09e7c8
// containing:  __bfxbu @ 8c09e7c8 (size 26)
// signature: undefined __bfxbu(void)
// direct callers (refs to entry):
//   8c243570@__Close_RxBuffer__6SCC_PCFUc/8c243538
//   8c243d86@__AddParity__6SCC_PCFPUc/8c243d24
//   8c08f752@FUN_8c08f6d8/8c08f6d8
//   8c08c5aa@FUN_8c08c516/8c08c516
//   8c08524a@FUN_8c085170/8c085170
//   8c0852ca@FUN_8c085170/8c085170
//   8c0854a6@FUN_8c085170/8c085170
//   8c08552a@FUN_8c085170/8c085170
//   8c085592@FUN_8c085170/8c085170
//   8c0853aa@FUN_8c085170/8c085170
//   8c08545a@FUN_8c085170/8c085170
//   8c08c5a8@FUN_8c08c516/8c08c516
//   8c08f74c@FUN_8c08f6d8/8c08f6d8
//   8c08c346@FUN_8c08c300/8c08c300
//   8c040e68@FUN_8c040bca/8c040bca
//   8c07d028@FUN_8c07cafa/8c07cafa
//   8c07d032@FUN_8c07cafa/8c07cafa
//   8c07d040@FUN_8c07cafa/8c07cafa
//   8c07d04e@FUN_8c07cafa/8c07cafa
//   8c07d05c@FUN_8c07cafa/8c07cafa
//   8c07cedc@FUN_8c07cafa/8c07cafa
//   8c07cf26@FUN_8c07cafa/8c07cafa
//   8c07cf70@FUN_8c07cafa/8c07cafa
//   8c07cfda@FUN_8c07cafa/8c07cafa
//   8c07ced4@FUN_8c07cafa/8c07cafa
//   8c07cf1e@FUN_8c07cafa/8c07cafa
//   8c07cf68@FUN_8c07cafa/8c07cafa
//   8c07cfd2@FUN_8c07cafa/8c07cafa
//   8c07fc28@FUN_8c07f510/8c07f510
//   8c07feac@FUN_8c07f510/8c07f510
//   8c0800a2@FUN_8c07f510/8c07f510
//   8c07fc96@FUN_8c07f510/8c07f510
//   8c089bf4@FUN_8c089b84/8c089b84
//   8c08a5f6@FUN_8c08a28c/8c08a28c
//   8c08a57a@FUN_8c08a28c/8c08a28c
//   8c08a516@FUN_8c08a28c/8c08a28c
//   8c08a4a6@FUN_8c08a28c/8c08a28c
//   8c089b38@FUN_8c089b1e/8c089b1e
//   8c087dfe@FUN_8c087bf8/8c087bf8
//   8c0882c4@FUN_8c087bf8/8c087bf8
//   8c089b32@FUN_8c089b1e/8c089b1e
//   8c08a5f2@FUN_8c08a28c/8c08a28c
//   8c08a576@FUN_8c08a28c/8c08a28c
//   8c08a512@FUN_8c08a28c/8c08a28c
//   8c08a4a2@FUN_8c08a28c/8c08a28c
//   8c087e5e@FUN_8c087bf8/8c087bf8
//   8c075ef2@FUN_8c075a78/8c075a78
//   8c075ede@FUN_8c075a78/8c075a78
//   8c17a0ea@FUN_8c17a026/8c17a026
//   8c17a11e@FUN_8c17a026/8c17a026
//   8c17a15e@FUN_8c17a026/8c17a026
//   8c17a194@FUN_8c17a026/8c17a026
//   8c17a1a4@FUN_8c17a026/8c17a026
//   8c1656f2@FUN_8c1656a4/8c1656a4
//   8c167414@FUN_8c167274/8c167274
//   8c0733a4@FUN_8c0730a8/8c0730a8
//   8c073572@FUN_8c0730a8/8c0730a8
//   8c0735a4@FUN_8c0730a8/8c0730a8
//   8c0895e8@FUN_8c0895c4/8c0895c4
//   8c083636@FUN_8c0835e4/8c0835e4
//   8c17a510@FUN_8c17a482/8c17a482
//   8c076a64@FUN_8c0766c0/8c0766c0
//   8c076792@FUN_8c0766c0/8c0766c0
//   8c0767bc@FUN_8c0766c0/8c0766c0
// callers via ptr slot:
//   8c07fc20@FUN_8c07f510/8c07f510
//   8c07fc92@FUN_8c07f510/8c07f510


/* WARNING: Removing unreachable block (ram,0x8c09e7d8) */
/* Library Function - Single Match
    __bfxbu
   
   Library: 10.1 10.1 10.1 */

undefined8 __bfxbu(void)

{
  uint uVar1;
  uint in_r1;
  uint uVar2;
  char *in_r2;
  
  uVar2 = (in_r1 & 0xff) - 0x20;
  uVar1 = (int)*in_r2 << (((in_r1 & 0xff00) >> 8) + 0x18 & 0x1f);
  if ((int)uVar2 < 0) {
    uVar1 = uVar1 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar1 = uVar1 << (uVar2 & 0x1f);
  }
  return CONCAT44(in_r1,uVar1);
}

