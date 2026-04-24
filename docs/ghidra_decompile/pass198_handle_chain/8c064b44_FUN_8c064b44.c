// entry: 8c064b44
// name: FUN_8c064b44
// signature: undefined FUN_8c064b44(void)


void FUN_8c064b44(int param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulonglong in_dr14;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_1c [8];
  undefined8 uStack_14;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)uStack_14);
    puVar4 = &uStack_14;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_14._0_4_ = (int)in_dr14;
  }
  else {
    puVar4 = (undefined8 *)auStack_1c;
    uStack_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar4 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c064c18 + param_1) = 0;
  }
  else {
    *(ulonglong *)(DAT_8c064c18 + param_1) = in_dr14 & 0xffffffff;
  }
  if (in_FPSCR_PR == '\0') {
    uVar5 = 0x40000000;
  }
  else {
    uVar5 = 0x7f000000;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c064c1a + param_1) = 0;
  }
  else {
    *(undefined8 *)(DAT_8c064c1a + param_1) = uVar5;
  }
  uVar1 = DAT_8c064c1e;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c064c1c + param_1) = 0;
  }
  else {
    *(undefined8 *)(DAT_8c064c1c + param_1) = uVar5;
  }
  uVar3 = DAT_8c064c50;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c064c20 + param_1) = (int)uVar5;
  }
  else {
    *(undefined8 *)(DAT_8c064c20 + param_1) = in_xd14;
  }
  puVar2 = PTR_FUN_8c064c54;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c064c22 + param_1) = (int)uVar5;
  }
  else {
    *(undefined8 *)(DAT_8c064c22 + param_1) = in_xd14;
  }
  *(undefined2 *)(DAT_8c064c24 + param_1) = 0;
  *(undefined2 *)(DAT_8c064c26 + param_1) = 0;
  *(undefined2 *)(DAT_8c064c28 + param_1) = uVar1;
  *(undefined2 *)(DAT_8c064c2a + param_1) = uVar1;
  *(undefined4 *)(DAT_8c064c2c + param_1) = 0xffffffff;
  uVar6 = DAT_8c064c58;
  *(undefined4 *)(DAT_8c064c2e + param_1) = uVar3;
  *(undefined4 *)(DAT_8c064c30 + param_1) = uVar6;
  uVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c064c32 + param_1),2,1);
  uVar1 = DAT_8c064c1e;
  *(undefined4 *)(DAT_8c064c34 + param_1) = uVar3;
  uVar3 = DAT_8c064c5c;
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c064c36 + param_1) = uVar6;
  }
  else {
    *(undefined8 *)(DAT_8c064c36 + param_1) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c064c38 + param_1) = uVar6;
  }
  else {
    *(undefined8 *)(DAT_8c064c38 + param_1) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(DAT_8c064c3a + param_1) = uVar6;
  }
  else {
    *(undefined8 *)(DAT_8c064c3a + param_1) = uVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c064c3c + param_1) = (int)uVar5;
  }
  else {
    *(undefined8 *)(DAT_8c064c3c + param_1) = in_xd14;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(DAT_8c064c3e + param_1) = (int)uVar5;
  }
  else {
    *(undefined8 *)(DAT_8c064c3e + param_1) = in_xd14;
  }
  *(undefined2 *)(DAT_8c064c40 + param_1) = 0;
  *(undefined2 *)(DAT_8c064c42 + param_1) = 0;
  *(undefined2 *)(DAT_8c064c44 + param_1) = uVar1;
  *(undefined2 *)(DAT_8c064c46 + param_1) = uVar1;
  *(undefined4 *)(DAT_8c064c48 + param_1) = 0xffffffff;
  uVar6 = DAT_8c064c58;
  *(undefined4 *)(DAT_8c064c4a + param_1) = uVar3;
  *(undefined4 *)(DAT_8c064c4c + param_1) = uVar6;
  uVar3 = (*(code *)puVar2)(*(undefined4 *)(DAT_8c064c32 + param_1),2,1);
  *(undefined4 *)(DAT_8c064c4e + param_1) = uVar3;
  return;
}

