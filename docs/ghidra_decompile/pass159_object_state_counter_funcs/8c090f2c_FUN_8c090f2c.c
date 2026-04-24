// entry: 8c090f2c
// name: FUN_8c090f2c
// signature: undefined FUN_8c090f2c(void)


void FUN_8c090f2c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r9;
  int unaff_r13;
  int unaff_r14;
  int iVar5;
  
  iVar2 = *(int *)(unaff_r9 + 0xc);
  if (unaff_r13 < unaff_r14) {
    iVar5 = 8;
    uVar3 = 0;
    do {
      if (*(char *)(uVar3 + *(int *)(unaff_r9 + 4) + 0xe) != '\x03') {
        iVar1 = *(int *)(unaff_r9 + 4) + 6;
        if (*(char *)(uVar3 + iVar1) == '\x01') {
          if ((int)uVar3 < 0) {
            uVar4 = 1 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar4 = 1 << (uVar3 & 0x1f);
          }
          if ((*(uint *)(DAT_8c09108e + iVar2) & uVar4) == 0) {
            *(uint *)(DAT_8c091090 + iVar2) = *(uint *)(DAT_8c091090 + iVar2) | uVar4;
            *(int *)(*(int *)(unaff_r9 + 0xc) + uVar3 * 0x2c) =
                 *(int *)(*(int *)(unaff_r9 + 0xc) + uVar3 * 0x2c) + 1;
            iVar2 = *(int *)(unaff_r9 + 0xc);
          }
        }
        else if (*(char *)(uVar3 + iVar1) == '\x02') {
          if ((int)uVar3 < 0) {
            uVar4 = 1 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar4 = 1 << (uVar3 & 0x1f);
          }
          *(uint *)(DAT_8c09108e + iVar2) = *(uint *)(DAT_8c09108e + iVar2) | uVar4;
          *(int *)(*(int *)(unaff_r9 + 0xc) + uVar3 * 0x2c + 4) =
               *(int *)(*(int *)(unaff_r9 + 0xc) + uVar3 * 0x2c + 4) + 1;
          iVar2 = *(int *)(unaff_r9 + 0xc);
        }
      }
      iVar5 = iVar5 + -1;
      uVar3 = uVar3 + 1;
    } while (iVar5 != 0);
    *(int *)(DAT_8c091092 + iVar2) = *(int *)(DAT_8c091092 + iVar2) + 1;
  }
  else {
    iVar5 = 8;
    uVar3 = 0;
    do {
      if (*(char *)(uVar3 + *(int *)(unaff_r9 + 4) + 0xe) != '\x03') {
        iVar1 = *(int *)(unaff_r9 + 4) + 6;
        if (*(char *)(uVar3 + iVar1) == '\x02') {
          if ((int)uVar3 < 0) {
            uVar4 = 1 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar4 = 1 << (uVar3 & 0x1f);
          }
          if ((*(uint *)(DAT_8c09108e + iVar2) & uVar4) == 0) {
            *(uint *)(DAT_8c091090 + iVar2) = *(uint *)(DAT_8c091090 + iVar2) | uVar4;
            *(int *)(*(int *)(unaff_r9 + 0xc) + uVar3 * 0x2c) =
                 *(int *)(*(int *)(unaff_r9 + 0xc) + uVar3 * 0x2c) + 1;
            iVar2 = *(int *)(unaff_r9 + 0xc);
          }
        }
        else if (*(char *)(uVar3 + iVar1) == '\x01') {
          if ((int)uVar3 < 0) {
            uVar4 = 1 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar4 = 1 << (uVar3 & 0x1f);
          }
          *(uint *)(DAT_8c09108e + iVar2) = *(uint *)(DAT_8c09108e + iVar2) | uVar4;
          *(int *)(*(int *)(unaff_r9 + 0xc) + uVar3 * 0x2c + 4) =
               *(int *)(*(int *)(unaff_r9 + 0xc) + uVar3 * 0x2c + 4) + 1;
          iVar2 = *(int *)(unaff_r9 + 0xc);
        }
      }
      iVar5 = iVar5 + -1;
      uVar3 = uVar3 + 1;
    } while (iVar5 != 0);
    *(int *)(DAT_8c091094 + iVar2) = *(int *)(DAT_8c091094 + iVar2) + 1;
  }
  return;
}

