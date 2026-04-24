// entry: 8c05818a
// name: FUN_8c05818a
// signature: undefined FUN_8c05818a(void)


void FUN_8c05818a(ulonglong param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong in_dr14;
  ulonglong uVar6;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_1c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = (undefined8 *)((int)&local_1c + 4);
    local_1c = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_1c);
  }
  else {
    puVar5 = &local_1c;
    local_1c = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = in_PR;
  iVar3 = *(int *)(param_2 + 8);
  uVar6 = param_1;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = in_dr14 & 0xffffffff;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    iVar2 = param_2 + 0x24;
    do {
      if (*(int *)(iVar2 + 8) != 0) {
        uVar1 = uVar6;
        if (in_FPSCR_SZ == '\0') {
          uVar1 = param_1 & 0xffffffff;
        }
        param_1 = uVar1;
        (*(code *)PTR_FUN_8c0581e0)(param_1,param_3,param_4);
        iVar3 = *(int *)(param_2 + 8);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar4 < iVar3);
  }
  return;
}

