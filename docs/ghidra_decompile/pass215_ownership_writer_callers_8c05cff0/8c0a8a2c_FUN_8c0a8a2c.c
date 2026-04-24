// entry: 8c0a8a2c
// name: FUN_8c0a8a2c
// signature: undefined FUN_8c0a8a2c(void)


void FUN_8c0a8a2c(undefined8 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 local_1c [8];
  undefined8 uStack_14;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_14 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_14);
    puVar2 = &uStack_14;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_14._0_4_ = (int)in_dr14;
  }
  else {
    puVar2 = (undefined8 *)local_1c;
    uStack_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar2 + -4) = in_PR;
  if ((param_3 & 1) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0a8b4c)(param_1,0,param_4);
    *(undefined4 *)((int)puVar2 + -0x20) = uVar1;
    (*(code *)PTR_FUN_8c0a8b50)(param_2,(undefined1 *)((int)puVar2 + -0x20));
    param_3 = param_3 & 0xfffffffe;
  }
  if ((param_3 & 2) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0a8b54)(param_1,0,param_4);
    *(undefined4 *)((int)puVar2 + -0x1c) = uVar1;
    (*(code *)PTR_FUN_8c0a8b50)(param_2,(undefined1 *)((int)puVar2 + -0x1c));
    param_3 = param_3 & 0xfffffffd;
  }
  if ((param_3 & 4) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0a8b58)(param_1,0,param_4);
    *(undefined4 *)((int)puVar2 + -0x18) = uVar1;
    (*(code *)PTR_FUN_8c0a8b50)(param_2,(undefined1 *)((int)puVar2 + -0x18));
    param_3 = param_3 & 0xfffffffb;
  }
  if ((param_3 & 8) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0a8b5c)(param_1,0,param_4);
    *(undefined4 *)((int)puVar2 + -0x14) = uVar1;
    (*(code *)PTR_FUN_8c0a8b50)(param_2,(undefined1 *)((int)puVar2 + -0x14));
    param_3 = param_3 & 0xfffffff7;
  }
  if ((param_3 & 0x10) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0a8b60)(param_1,0,param_4);
    *(undefined4 *)((int)puVar2 + -0x10) = uVar1;
    (*(code *)PTR_FUN_8c0a8b50)(param_2,(undefined1 *)((int)puVar2 + -0x10));
    param_3 = param_3 & 0xffffffef;
  }
  if ((param_3 & 0x20) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0a8b64)(param_1,0,param_4);
    *(undefined4 *)((int)puVar2 + -0xc) = uVar1;
    (*(code *)PTR_FUN_8c0a8b50)(param_2,(undefined1 *)((int)puVar2 + -0xc));
    param_3 = param_3 & 0xffffffdf;
  }
  if ((param_3 & 0x40) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c0a8b68)(param_1,0,param_4);
    *(undefined4 *)((int)puVar2 + -8) = uVar1;
    (*(code *)PTR_FUN_8c0a8b50)(param_2,(undefined1 *)((int)puVar2 + -8));
  }
  return;
}

