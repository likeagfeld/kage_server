// entry: 8c0a7ff4
// name: FUN_8c0a7ff4
// signature: undefined FUN_8c0a7ff4(void)


/* WARNING: Removing unreachable block (ram,0x8c0a80ba) */
/* WARNING: Removing unreachable block (ram,0x8c0a7ffe) */
/* WARNING: Removing unreachable block (ram,0x8c0a8020) */
/* WARNING: Removing unreachable block (ram,0x8c0a80d8) */

void FUN_8c0a7ff4(int *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *param_1;
  iVar4 = *(int *)PTR_DAT_8c0a8138 + 8;
  if ((**(uint **)(*(int *)(iVar4 + iVar2 * 0x20 + 0x18) + 0x30) & 1) != 0) {
    uVar3 = *(uint *)(*(int *)(iVar4 + iVar2 * 0x20 + 0x18) + 8);
    if ((uVar3 & 0x10) == 0) {
      param_1[1] = 0;
    }
    else {
      param_1[1] = param_1[1] + 1;
    }
    if ((uVar3 & 0x20) == 0) {
      param_1[2] = 0;
    }
    else {
      param_1[2] = param_1[2] + 1;
    }
    if ((uVar3 & 0x40) == 0) {
      param_1[3] = 0;
    }
    else {
      param_1[3] = param_1[3] + 1;
    }
    if ((uVar3 & 0x80) == 0) {
      param_1[4] = 0;
    }
    else {
      param_1[4] = param_1[4] + 1;
    }
    if ((uVar3 & 4) == 0) {
      param_1[5] = 0;
    }
    else {
      param_1[5] = param_1[5] + 1;
    }
    if ((uVar3 & 2) == 0) {
      param_1[6] = 0;
    }
    else {
      param_1[6] = param_1[6] + 1;
    }
    if ((uVar3 & (int)DAT_8c0a8134) == 0) {
      param_1[7] = 0;
    }
    else {
      param_1[7] = param_1[7] + 1;
    }
    if ((uVar3 & (int)DAT_8c0a8136) == 0) {
      param_1[8] = 0;
    }
    else {
      param_1[8] = param_1[8] + 1;
    }
    if ((uVar3 & 8) == 0) {
      param_1[9] = 0;
    }
    else {
      param_1[9] = param_1[9] + 1;
    }
    if ((uVar3 & DAT_8c0a813c) == 0) {
      param_1[10] = 0;
    }
    else {
      param_1[10] = param_1[10] + 1;
    }
    if ((uVar3 & DAT_8c0a8140) == 0) {
      param_1[0xb] = 0;
    }
    else {
      param_1[0xb] = param_1[0xb] + 1;
    }
    sVar1 = *(short *)(*(int *)(iVar4 + iVar2 * 0x20 + 0x18) + 0x1c);
    if (sVar1 < -0x40) {
      param_1[0xf] = 0;
      param_1[0xe] = param_1[0xe] + 1;
    }
    else if (sVar1 < 0x41) {
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    else {
      param_1[0xe] = 0;
      param_1[0xf] = param_1[0xf] + 1;
    }
    sVar1 = *(short *)(*(int *)(iVar4 + iVar2 * 0x20 + 0x18) + 0x1e);
    if (sVar1 < -0x40) {
      param_1[0xd] = 0;
      param_1[0xc] = param_1[0xc] + 1;
    }
    else if (sVar1 < 0x41) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
    else {
      param_1[0xc] = 0;
      param_1[0xd] = param_1[0xd] + 1;
    }
    return;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}

