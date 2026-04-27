// entry: 8c04628c
// name: FUN_8c04628c
// signature: undefined FUN_8c04628c(void)


/* WARNING: Removing unreachable block (ram,0x8c04630e) */
/* WARNING: Removing unreachable block (ram,0x8c0463d0) */

void FUN_8c04628c(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_fr3;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_8;
  
  iVar2 = (int)DAT_8c0463f6;
  if (param_3[7] != 0) {
    if (param_3[4] == 0) {
      uVar4 = *(undefined4 *)(PTR_DAT_8c046448 + 4);
      *(undefined4 *)((int)&local_8 + iVar2) = *(undefined4 *)PTR_DAT_8c046448;
      uVar3 = *(undefined4 *)(PTR_DAT_8c046448 + 8);
      *(undefined4 *)(&stack0xfffffffc + iVar2) = uVar4;
      uVar4 = *(undefined4 *)(PTR_DAT_8c046448 + 0xc);
      *(undefined4 *)(&stack0x00000000 + iVar2) = uVar3;
      uVar3 = *(undefined4 *)(PTR_DAT_8c046448 + 0x14);
      *(undefined4 *)(&stack0x00000004 + iVar2) = uVar4;
      uVar4 = *(undefined4 *)(PTR_DAT_8c046448 + 0x10);
      *(undefined4 *)(&stack0x0000000c + iVar2) = uVar3;
      uVar3 = *(undefined4 *)(PTR_DAT_8c046448 + 0x1c);
      *(undefined4 *)(&stack0x00000008 + iVar2) = uVar4;
      uVar4 = *(undefined4 *)(PTR_DAT_8c046448 + 0x18);
      *(undefined4 *)(&stack0x00000014 + iVar2) = uVar3;
      uVar3 = *(undefined4 *)(PTR_DAT_8c046448 + 0x24);
      *(undefined4 *)(&stack0x00000010 + iVar2) = uVar4;
      uVar4 = *(undefined4 *)(PTR_DAT_8c046448 + 0x20);
      *(undefined4 *)(&stack0x0000001c + iVar2) = uVar3;
      uVar3 = *(undefined4 *)(PTR_DAT_8c046448 + 0x28);
      *(undefined4 *)(&stack0x00000018 + iVar2) = uVar4;
      *(undefined4 *)(&stack0x00000020 + iVar2) = uVar3;
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(param_3[1],in_fr3);
        uVar3 = param_3[2];
        *(undefined4 *)((int)&local_8 + iVar2) = param_3[1];
        dVar7 = (double)CONCAT44(uVar3,*param_3);
      }
      else {
        uVar5 = *(undefined8 *)(param_3 + 1);
        dVar7 = *(double *)(param_3 + 2);
        *(undefined8 *)((int)&local_8 + iVar2) = uVar5;
      }
      uVar3 = param_3[9];
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar7,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(&stack0xfffffffc + iVar2) = (int)((ulonglong)dVar7 >> 0x20);
        uVar5 = CONCAT44(param_3[3],(int)uVar5);
      }
      else {
        *(double *)(&stack0xfffffffc + iVar2) = dVar7;
        uVar5 = *(undefined8 *)(param_3 + 3);
      }
      *(undefined4 *)(&stack0x00000020 + iVar2) = uVar3;
      uVar1 = param_3[5];
      if (in_FPSCR_SZ == '\0') {
        *(int *)(&stack0x00000000 + iVar2) = (int)((ulonglong)uVar5 >> 0x20);
      }
      else {
        *(undefined8 *)(&stack0x00000000 + iVar2) = uVar5;
      }
      *(uint *)(&stack0x00000018 + iVar2) =
           (uVar1 & (int)DAT_8c046414) << 0xd | DAT_8c046428 | (int)DAT_8c046416;
      *(undefined **)((int)&local_8 + DAT_8c04641e + iVar2) = PTR_DAT_8c046430;
      (*(code *)PTR_FUN_8c046434)(&stack0x00000024 + iVar2,(int)&local_8 + iVar2,0,0);
      (*(code *)PTR_FUN_8c046440)(&stack0x00000024 + iVar2);
      *(undefined **)((int)&local_8 + DAT_8c04641e + iVar2) = PTR_DAT_8c046444;
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&local_8 + DAT_8c0463f8 + iVar2) = 0;
      }
      else {
        *(ulonglong *)((int)&local_8 + DAT_8c0463f8 + iVar2) = (ulonglong)param_2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&local_8 + DAT_8c0463fa + iVar2) = 0;
      }
      else {
        *(ulonglong *)((int)&local_8 + DAT_8c0463fa + iVar2) = (ulonglong)param_2;
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44(0x40000000,param_2);
      }
      else {
        dVar7 = (double)CONCAT44(0x3f800000,param_2) + (double)CONCAT44(0x3f800000,param_2);
      }
      uVar3 = (undefined4)((ulonglong)dVar7 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&local_8 + DAT_8c0463fe + iVar2) = uVar3;
      }
      else {
        *(double *)((int)&local_8 + DAT_8c0463fe + iVar2) = dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)&local_8 + DAT_8c046400 + iVar2) = uVar3;
      }
      else {
        *(double *)((int)&local_8 + DAT_8c046400 + iVar2) = dVar7;
      }
      *(undefined2 *)((int)&local_8 + DAT_8c046402 + iVar2) = 0;
      *(undefined2 *)((int)&local_8 + DAT_8c046404 + iVar2) = 0;
      *(undefined2 *)((int)&local_8 + DAT_8c046406 + iVar2) = DAT_8c0463fc;
      *(undefined2 *)((int)&local_8 + DAT_8c046408 + iVar2) = DAT_8c0463fc;
      *(undefined4 *)((int)&local_8 + DAT_8c04640a + iVar2) = DAT_8c046420;
      *(undefined4 *)((int)&local_8 + DAT_8c04640c + iVar2) = 0;
      *(undefined4 *)((int)&local_8 + DAT_8c04640e + iVar2) = DAT_8c046424;
      *(undefined4 *)((int)&local_8 + DAT_8c046410 + iVar2) = 0;
      if (in_FPSCR_SZ == '\0') {
        uVar5 = CONCAT44(param_3[1],in_fr3);
      }
      else {
        uVar5 = *(undefined8 *)(param_3 + 1);
      }
      uVar3 = param_3[9];
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)&local_8 + DAT_8c046412 + iVar2) = (int)((ulonglong)uVar5 >> 0x20);
        dVar7 = (double)CONCAT44(param_3[2],*param_3);
      }
      else {
        *(undefined8 *)((int)&local_8 + DAT_8c046412 + iVar2) = uVar5;
        dVar7 = *(double *)(param_3 + 2);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar7,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)&local_8 + DAT_8c0463f8 + iVar2) = (int)((ulonglong)dVar7 >> 0x20);
        uVar5 = CONCAT44(param_3[3],(int)uVar5);
      }
      else {
        *(double *)((int)&local_8 + DAT_8c0463f8 + iVar2) = dVar7;
        uVar5 = *(undefined8 *)(param_3 + 3);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)&local_8 + DAT_8c0463fa + iVar2) = (int)((ulonglong)uVar5 >> 0x20);
      }
      else {
        *(undefined8 *)((int)&local_8 + DAT_8c0463fa + iVar2) = uVar5;
      }
      *(undefined4 *)((int)&local_8 + DAT_8c046410 + iVar2) = uVar3;
      *(uint *)((int)&local_8 + DAT_8c04640c + iVar2) =
           (param_3[5] & (int)DAT_8c046414) << 0xd | DAT_8c046428 | (int)DAT_8c046416;
      if (param_3[10] != 0) {
        *(undefined **)((int)&local_8 + DAT_8c04647a + iVar2) = PTR_DAT_8c046480;
        (*(code *)PTR_FUN_8c046484)
                  ((int)&local_8 + DAT_8c04647c + iVar2,(int)&local_8 + DAT_8c04647e + iVar2,0,0);
        (*(code *)PTR_FUN_8c046488)((int)&local_8 + DAT_8c04647c + iVar2);
        *(undefined **)((int)&local_8 + DAT_8c04647a + iVar2) = PTR_DAT_8c04648c;
      }
      uVar3 = (undefined4)uVar5;
      *(undefined4 *)((int)&local_8 + DAT_8c04640c + iVar2) = DAT_8c04642c;
      *(undefined **)((int)&local_8 + DAT_8c04641a + iVar2) = PTR_DAT_8c046430;
      (*(code *)PTR_FUN_8c046434)
                ((int)&local_8 + DAT_8c046418 + iVar2,(int)&local_8 + DAT_8c046412 + iVar2,0,0);
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(param_3[8],param_1);
        dVar6 = (double)CONCAT44(DAT_8c046438,uVar3);
      }
      else {
        dVar7 = *(double *)(param_3 + 8);
        dVar6 = (double)CONCAT44(PTR_FUN_8c04643c,DAT_8c046438);
      }
      if (in_FPSCR_PR == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) /
                                 (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 / dVar6;
      }
      (*(code *)PTR_FUN_8c04643c)(dVar7,(int)&local_8 + DAT_8c046418 + iVar2);
      (*(code *)PTR_FUN_8c046440)((int)&local_8 + DAT_8c046418 + iVar2);
      *(undefined **)((int)&local_8 + DAT_8c04641a + iVar2) = PTR_DAT_8c046444;
    }
  }
  return;
}

