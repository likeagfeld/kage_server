// entry: 8c0438c4
// name: FUN_8c0438c4
// signature: undefined FUN_8c0438c4(void)


/* WARNING: Removing unreachable block (ram,0x8c0439a0) */

void FUN_8c0438c4(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 in_xd8;
  int iVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint local_8;
  
  iVar4 = (int)DAT_8c0439ce;
  if (*(short *)(DAT_8c0439d0 + param_2) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)(DAT_8c0439d4 + param_2) + 0x18),param_1);
    }
    else {
      dVar7 = *(double *)(*(int *)(DAT_8c0439d4 + param_2) + 0x18);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               *(undefined4 *)(DAT_8c0439da + param_2));
    }
    else {
      in_xd8 = *(undefined8 *)(DAT_8c0439da + param_2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)DAT_8c0439e8);
    }
    else {
      in_xd8 = *DAT_8c0439e8;
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)((float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar7,0));
    }
    else {
      iVar9 = (int)(dVar7 * dVar7);
    }
    *(int *)((int)&local_8 + DAT_8c0439d6 + iVar4) = iVar9;
  }
  else {
    if (*(short *)(DAT_8c0439d0 + param_2) != 8) {
      return;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(DAT_8c0439d2 + param_2),param_1);
    }
    else {
      dVar7 = *(double *)(DAT_8c0439d2 + param_2);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               *(undefined4 *)(*(int *)(DAT_8c0439d4 + param_2) + 0x18));
    }
    else {
      in_xd8 = *(undefined8 *)(*(int *)(DAT_8c0439d4 + param_2) + 0x18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar7,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)DAT_8c0439e8);
    }
    else {
      in_xd8 = *DAT_8c0439e8;
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)((float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar7,0));
    }
    else {
      iVar9 = (int)(dVar7 * dVar7);
    }
    *(int *)((int)&local_8 + DAT_8c0439d6 + iVar4) = iVar9;
  }
  if ((-1 < iVar9) && (iVar9 < 0x10)) {
    uVar2 = (*(code *)PTR_FUN_8c0439ec)
                      (*(undefined4 *)((int)DAT_8c0439de + *(int *)(DAT_8c0439dc + param_2)),4,2);
    puVar1 = PTR_DAT_8c0439f0;
    *(undefined4 *)((int)&local_8 + DAT_8c0439e0 + iVar4) = uVar2;
    iVar9 = *(int *)(param_2 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar2 = *(undefined4 *)(iVar9 + 0x50);
      uVar8 = CONCAT44(uVar2,*(undefined4 *)(iVar9 + 0x54));
      *(undefined4 *)((int)&local_8 + iVar4) = *(undefined4 *)(iVar9 + 0x4c);
      *(undefined4 *)(&stack0xfffffffc + iVar4) = uVar2;
    }
    else {
      uVar8 = *(undefined8 *)(iVar9 + 0x50);
      in_xd8 = *(undefined8 *)(iVar9 + 0x54);
      *(undefined8 *)((int)&local_8 + iVar4) = *(undefined8 *)(iVar9 + 0x4c);
      *(undefined8 *)(&stack0xfffffffc + iVar4) = uVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(&stack0x00000000 + iVar4) = (int)uVar8;
    }
    else {
      *(undefined8 *)(&stack0x00000000 + iVar4) = in_xd8;
    }
    *(undefined4 *)(&stack0x00000004 + iVar4) = *(undefined4 *)((int)&local_8 + iVar4);
    *(undefined4 *)(&stack0x00000008 + iVar4) = *(undefined4 *)(&stack0xfffffffc + iVar4);
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(&stack0x00000008 + iVar4);
      *(undefined4 *)PTR_DAT_8c0439f0 = *(undefined4 *)(&stack0x00000004 + iVar4);
    }
    else {
      uVar8 = *(undefined8 *)(&stack0x00000008 + iVar4);
      *(undefined8 *)PTR_DAT_8c0439f0 = *(undefined8 *)(&stack0x00000004 + iVar4);
      fVar6 = (float)((ulonglong)uVar8 >> 0x20);
    }
    if (in_FPSCR_PR == '\0') {
      dVar7 = (double)CONCAT44(fVar6 + 1.0,0x3f800000);
    }
    else {
      dVar7 = (double)CONCAT44(fVar6,0x3f800000) + (double)CONCAT44(fVar6,0x3f800000);
    }
    *(undefined4 *)(&stack0x0000000c + iVar4) = *(undefined4 *)(&stack0x00000000 + iVar4);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar1 + 4) = (int)((ulonglong)dVar7 >> 0x20);
      uVar8 = CONCAT44(*(undefined4 *)(&stack0x0000000c + iVar4),SUB84(dVar7,0));
    }
    else {
      *(double *)(puVar1 + 4) = dVar7;
      uVar8 = *(undefined8 *)(&stack0x0000000c + iVar4);
    }
    uVar5 = (uint)DAT_8c0439e2;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar1 + 8) = (int)((ulonglong)uVar8 >> 0x20);
    }
    else {
      *(undefined8 *)(puVar1 + 8) = uVar8;
    }
    iVar9 = (int)DAT_8c0439e0;
    *(uint *)(puVar1 + 0x20) =
         (*(uint *)((int)&local_8 + DAT_8c0439d6 + iVar4) & uVar5) << 0xd | DAT_8c0439f4 |
         (int)DAT_8c0439e4;
    iVar3 = (int)DAT_8c0439e6;
    *(undefined4 *)(puVar1 + 0x28) = *(undefined4 *)((int)&local_8 + iVar9 + iVar4);
    *(undefined **)((int)&local_8 + iVar3 + iVar4) = PTR_DAT_8c0439f8;
    (*(code *)PTR_FUN_8c0439fc)(&stack0x00000010 + iVar4,0,0);
    (*(code *)PTR_FUN_8c043a00)(&stack0x00000010 + iVar4);
    *(undefined **)((int)&local_8 + DAT_8c0439e6 + iVar4) = PTR_DAT_8c043a04;
  }
  return;
}

