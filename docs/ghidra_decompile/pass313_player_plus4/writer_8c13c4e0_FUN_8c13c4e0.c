// entry: 8c13c4e0
// name: FUN_8c13c4e0


void FUN_8c13c4e0(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar8;
  undefined8 in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  ulonglong uVar7;
  
  puVar1 = PTR_FUN_8c13c5cc;
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar4 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar4 + -4) = in_PR;
  iVar2 = (int)DAT_8c13c5a4;
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c13c5c8,(int)in_dr14);
  }
  else {
    uVar8 = CONCAT44(PTR_FUN_8c13c5cc,DAT_8c13c5c8);
  }
  *(int *)((int)puVar4 + -0xc) = (int)DAT_8c13c5a6;
  *(undefined4 *)((int)puVar4 + -8) = 1;
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44((int)(uVar8 >> 0x20),param_1);
  }
  (*(code *)PTR_FUN_8c13c5cc)(uVar6,param_2 + iVar2,0,(int)DAT_8c13c5a8,0);
  iVar3 = (int)DAT_8c13c5a6;
  *(int *)((int)puVar4 + -0xc) = (int)DAT_8c13c5a6;
  uVar7 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar7 = uVar6 & 0xffffffff;
  }
  uVar5 = (uint)uVar7;
  (*(code *)puVar1)(uVar7,param_2 + iVar2 + 0x5c,(int)DAT_8c13c5aa,(int)DAT_8c13c5ac,iVar3);
  param_2 = param_2 + DAT_8c13c5ae;
  *(undefined4 *)((int)puVar4 + -0xc) = 0;
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2,(int)DAT_8c13c5b0,0x1e,iVar3);
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + 0x5c,(int)DAT_8c13c5b2,0x16,iVar3);
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + DAT_8c13c5b4,(int)DAT_8c13c5b6,0x16,iVar3);
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + DAT_8c13c5b8,(int)DAT_8c13c5ba,0x1e,iVar3);
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + DAT_8c13c5bc,(int)DAT_8c13c5be,0x16,iVar3);
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + DAT_8c13c5c0,(int)DAT_8c13c5c2,0x16,iVar3);
  if (in_FPSCR_SZ == '\0') {
    uVar8 = (ulonglong)uVar5;
  }
  (*(code *)puVar1)(uVar8,param_2 + DAT_8c13c5c4,(int)DAT_8c13c5c6,0x1c,iVar3);
  return;
}

