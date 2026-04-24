// entry: 8c05dec0
// name: FUN_8c05dec0
// signature: undefined FUN_8c05dec0(void)


void FUN_8c05dec0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 in_dr14;
  undefined8 in_xd4;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_2c [8];
  undefined8 uStack_24;
  
  puVar2 = PTR_FUN_8c05df30;
  puVar1 = PTR_FUN_8c05df1c;
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_24);
    puVar5 = &uStack_24;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr14;
  }
  else {
    puVar5 = (undefined8 *)auStack_2c;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = in_PR;
  iVar4 = *(int *)(param_2 + 0x14);
  if (in_FPSCR_SZ == '\0') {
    in_xd4 = CONCAT44((int)param_1,(int)((ulonglong)param_1 >> 0x20));
    param_1 = in_xd14;
  }
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    uVar3 = (*(code *)puVar1)(param_2,iVar4);
    uVar6 = param_1;
    if (in_FPSCR_SZ == '\0') {
      uVar6 = CONCAT44((int)in_xd4,(int)((ulonglong)in_xd4 >> 0x20));
    }
    (*(code *)puVar2)(uVar6,uVar3,param_3,param_4,param_5);
  }
  return;
}

