// entry: 8c13c3d4
// name: FUN_8c13c3d4


void FUN_8c13c3d4(undefined4 param_1,int param_2)

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
  
  puVar1 = PTR_FUN_8c13c4d4;
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar4 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar4 + -4) = in_PR;
  iVar2 = (int)DAT_8c13c4aa;
  iVar3 = (int)DAT_8c13c4ae;
  if (in_FPSCR_SZ == '\0') {
    uVar8 = CONCAT44(DAT_8c13c4d0,(int)in_dr14);
  }
  else {
    uVar8 = CONCAT44(PTR_FUN_8c13c4d4,DAT_8c13c4d0);
  }
  *(int *)((int)puVar4 + -0xc) = (int)DAT_8c13c4ac;
  *(undefined4 *)((int)puVar4 + -8) = 1;
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = CONCAT44((int)(uVar8 >> 0x20),param_1);
  }
  (*(code *)PTR_FUN_8c13c4d4)(uVar6,param_2 + iVar2,0,iVar3,0);
  *(int *)((int)puVar4 + -0xc) = (int)DAT_8c13c4b0;
  uVar7 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar7 = uVar6 & 0xffffffff;
  }
  uVar5 = (uint)uVar7;
  (*(code *)puVar1)(uVar7,param_2 + iVar2 + 0x5c,iVar3,iVar3,(int)DAT_8c13c4b2);
  param_2 = param_2 + DAT_8c13c4b4;
  *(undefined4 *)((int)puVar4 + -0xc) = 0x1e;
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2,iVar3,0,(int)DAT_8c13c4b6);
  *(undefined4 *)((int)puVar4 + -0xc) = 0x16;
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + 0x5c,iVar3,0,(int)DAT_8c13c4b8);
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + DAT_8c13c4ba,iVar3,0,(int)DAT_8c13c4bc);
  *(undefined4 *)((int)puVar4 + -0xc) = 0x1e;
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + DAT_8c13c4be,iVar3,0,(int)DAT_8c13c4c0);
  *(undefined4 *)((int)puVar4 + -0xc) = 0x16;
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + DAT_8c13c4c2,iVar3,0,(int)DAT_8c13c4c4);
  uVar6 = uVar8;
  if (in_FPSCR_SZ == '\0') {
    uVar6 = (ulonglong)uVar5;
  }
  uVar5 = (uint)uVar6;
  (*(code *)puVar1)(uVar6,param_2 + DAT_8c13c4c6,iVar3,0,(int)DAT_8c13c4c8);
  *(undefined4 *)((int)puVar4 + -0xc) = 0x1c;
  if (in_FPSCR_SZ == '\0') {
    uVar8 = (ulonglong)uVar5;
  }
  (*(code *)puVar1)(uVar8,param_2 + DAT_8c13c4ca,iVar3,0,(int)DAT_8c13c4cc);
  return;
}

