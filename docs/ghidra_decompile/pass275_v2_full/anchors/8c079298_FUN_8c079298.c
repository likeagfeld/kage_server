// entry: 8c079298
// name: FUN_8c079298
// signature: undefined FUN_8c079298(void)


void FUN_8c079298(void)

{
  uint uVar1;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  ushort unaff_r12;
  int iStack0000000c;
  
  uVar1 = (uint)unaff_r12;
  iStack0000000c =
       (int)*(short *)(unaff_r11 + uVar1 * 0x1e + 2) + (int)*(short *)(unaff_r10 + uVar1 * 0x1e + 2)
       + (int)*(short *)(unaff_r9 + uVar1 * 0x1e + 2);
  if (iStack0000000c < 0xb) {
    FUN_8c079198();
    return;
  }
  iStack0000000c = 10;
  FUN_8c079198();
  return;
}

