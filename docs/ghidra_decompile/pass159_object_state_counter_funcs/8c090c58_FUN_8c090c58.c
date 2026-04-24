// entry: 8c090c58
// name: FUN_8c090c58
// signature: undefined FUN_8c090c58(void)


void FUN_8c090c58(uint param_1,int param_2)

{
  uint in_r0;
  int in_r2;
  uint uVar1;
  int unaff_r9;
  int unaff_r12;
  uint unaff_r13;
  
  while( true ) {
    if (*(char *)(in_r0 + in_r2) != '\x03') {
      if ((int)param_1 < 0) {
        uVar1 = 1 >> (~param_1 & 0x1f) + 1;
      }
      else {
        uVar1 = 1 << (param_1 & 0x1f);
      }
      if ((unaff_r13 & uVar1) != 0) {
        *(uint *)((int)DAT_8c090cb4 + *(int *)(unaff_r9 + 0xc)) =
             *(uint *)((int)DAT_8c090cb4 + *(int *)(unaff_r9 + 0xc)) | uVar1;
        *(int *)(*(int *)(unaff_r9 + 0xc) + unaff_r12 * param_1 + 8) =
             *(int *)(*(int *)(unaff_r9 + 0xc) + unaff_r12 * param_1 + 8) + 1;
      }
    }
    param_2 = param_2 + -1;
    in_r0 = param_1 + 1;
    if (param_2 == 0) break;
    in_r2 = *(int *)(unaff_r9 + 4) + 0xe;
    param_1 = in_r0;
  }
  return;
}

