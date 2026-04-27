// entry: 8c0c2160
// name: FUN_8c0c2160
// signature: undefined FUN_8c0c2160(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0c2160(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 in_fr3;
  double dVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined8 in_dr14;
  double dVar16;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_14;
  ulonglong uVar11;
  undefined4 uVar15;
  
  puVar1 = PTR_FUN_8c0c22c4;
  if (in_FPSCR_SZ == '\0') {
    puVar7 = (undefined8 *)((int)&uStack_14 + 4);
    uStack_14 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_14);
  }
  else {
    puVar7 = &uStack_14;
    uStack_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar7 + -4) = in_PR;
  iVar4 = (int)DAT_8c0c22b6;
  (*(code *)PTR___quick_mvn_8c0c22c0)();
  uVar6 = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)((int)puVar7 + iVar4 + 0x20) = uVar6;
  *(undefined4 *)((int)puVar7 + iVar4 + 0x48) = uVar6;
  uVar12 = CONCAT44(0x3f800000,(int)in_dr14);
  uVar11 = uVar12;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(0x3f800000,param_1);
  }
  (*(code *)puVar1)(uVar11,**(undefined4 **)(param_3 + 0x30),
                    (undefined1 *)((int)puVar7 + iVar4 + -4),0);
  puVar2 = PTR_FUN_8c0c22c8;
  uVar9 = (uint)uVar11;
  (*(code *)PTR_FUN_8c0c22c8)(**(undefined4 **)(param_3 + 0x30));
  uVar11 = uVar12;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = (ulonglong)uVar9;
  }
  uVar9 = (uint)uVar11;
  (*(code *)puVar1)(uVar11,*(undefined4 *)(*(int *)(param_3 + 0x30) + 4),
                    (undefined1 *)((int)puVar7 + iVar4 + 0x24),0);
  (*(code *)puVar2)(*(undefined4 *)(*(int *)(param_3 + 0x30) + 4));
  (*(code *)PTR___quick_mvn_8c0c22c0)();
  *(undefined4 *)((int)puVar7 + iVar4 + 0x70) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)((int)puVar7 + iVar4 + 0x98) = *(undefined4 *)(param_3 + 0x2c);
  if (*(int *)(param_3 + 0x44) == 0) {
    *(short *)((int)puVar7 + iVar4 + 0x86) = *(short *)((int)puVar7 + iVar4 + 0x86) + 0x60;
  }
  else {
    *(short *)((int)puVar7 + iVar4 + 0x5e) = *(short *)((int)puVar7 + iVar4 + 0x5e) + 0x60;
  }
  uVar11 = uVar12;
  if (in_FPSCR_SZ == '\0') {
    uVar11 = (ulonglong)uVar9;
  }
  uVar9 = (uint)uVar11;
  (*(code *)puVar1)(uVar11,*(undefined4 *)(*(int *)(param_3 + 0x30) + 8),0);
  uVar6 = (undefined4)uVar12;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = (ulonglong)uVar9;
  }
  uVar10 = (undefined4)uVar12;
  (*(code *)puVar1)(uVar12,*(undefined4 *)(*(int *)(param_3 + 0x30) + 0xc),
                    (undefined1 *)((int)puVar7 + iVar4 + 0x74),0);
  if (*(int *)(param_3 + 0x4c) != 0) {
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44(0x40000000,in_fr3);
    }
    else {
      dVar8 = (double)CONCAT44(0x3f800000,in_fr3) + (double)CONCAT44(0x3f800000,in_fr3);
    }
    iVar4 = *(int *)**(undefined4 **)(param_3 + 0x38);
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)(iVar4 + 8);
      dVar16 = (double)CONCAT44(DAT_8c0c22d0,uVar6);
      dVar13 = (double)CONCAT44(uVar15,param_2);
      dVar14 = (double)CONCAT44(uVar15,uVar10);
    }
    else {
      dVar13 = *(double *)(iVar4 + 8);
      dVar16 = (double)CONCAT44(DAT_8c0c22d4,DAT_8c0c22d0);
      uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar14 = dVar13;
    }
    if (in_FPSCR_PR == '\0') {
      dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) /
                                (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 / dVar8;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c0c22d4,SUB84(dVar8,0));
    }
    else {
      dVar8 = (double)CONCAT44(_DAT_8c0c22d8,DAT_8c0c22d4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)((ulonglong)dVar16 & 0xffffffff);
    }
    else {
      dVar8 = (dVar16 - dVar13) + dVar8;
    }
    if (*(int *)(param_3 + 0x44) == 0) {
      iVar5 = *(int *)(*(int *)(param_3 + 0x30) + 8);
      iVar3 = *(int *)(iVar5 + 0x78);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(uVar15,*(undefined4 *)(iVar4 + 0xc));
      }
      (**(code **)(iVar3 + 0x38))(dVar14,iVar5 + *(int *)(iVar3 + 0x30));
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)((ulonglong)dVar14 & 0xffffffff);
      }
      iVar3 = *(int *)(*(int *)(param_3 + 0x30) + 8);
      iVar4 = *(int *)(iVar3 + 0x78);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)(ulonglong)_DAT_8c0c22d8;
      }
      (**(code **)(iVar4 + 0x20))(dVar8,iVar3 + *(int *)(iVar4 + 0x18));
    }
    else {
      iVar5 = *(int *)(*(int *)(param_3 + 0x30) + 0xc);
      iVar3 = *(int *)(iVar5 + 0x78);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = (double)CONCAT44(uVar15,*(undefined4 *)(iVar4 + 0xc));
      }
      (**(code **)(iVar3 + 0x38))(dVar14,dVar13,iVar5 + *(int *)(iVar3 + 0x30));
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)((ulonglong)dVar14 & 0xffffffff);
      }
      iVar3 = *(int *)(*(int *)(param_3 + 0x30) + 0xc);
      iVar4 = *(int *)(iVar3 + 0x78);
      if (in_FPSCR_SZ == '\0') {
        dVar8 = (double)(ulonglong)DAT_8c0c22dc;
      }
      (**(code **)(iVar4 + 0x20))(dVar8,iVar3 + *(int *)(iVar4 + 0x18));
    }
  }
  (*(code *)puVar2)(*(undefined4 *)(*(int *)(param_3 + 0x30) + 8));
  (*(code *)puVar2)(*(undefined4 *)(*(int *)(param_3 + 0x30) + 0xc));
  return;
}

