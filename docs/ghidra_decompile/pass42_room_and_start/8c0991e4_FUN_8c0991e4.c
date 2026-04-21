// entry: 8c0991e4
// name: FUN_8c0991e4
// signature: undefined FUN_8c0991e4(void)


/* WARNING: Removing unreachable block (ram,0x8c0992f4) */

void FUN_8c0991e4(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_34 [24];
  
  uVar2 = (*(code *)PTR_FUN_8c099388)(*(undefined4 *)(param_2 + 4));
  puVar1 = PTR_FUN_8c099388;
  *(undefined4 *)(DAT_8c099372 + param_1) = uVar2;
  uVar2 = (*(code *)puVar1)(*(undefined4 *)(param_2 + 8));
  puVar1 = PTR_FUN_8c099388;
  *(undefined4 *)(DAT_8c099374 + param_1) = uVar2;
  iVar3 = (*(code *)puVar1)(*(undefined4 *)(param_2 + 0xc));
  iVar7 = (int)DAT_8c099378;
  *(int *)(DAT_8c099376 + param_1) = iVar3;
  iVar7 = param_1 + iVar7;
  iVar4 = (int)DAT_8c099376;
  *(undefined4 *)(iVar7 + iVar3 * 0x14) = *(undefined4 *)(DAT_8c099372 + param_1);
  *(undefined4 *)(iVar7 + *(int *)(iVar4 + param_1) * 0x14 + 8) = 0;
  puVar1 = PTR_FUN_8c09938c;
  iVar3 = (int)DAT_8c09937a;
  *(undefined4 *)(iVar7 + *(int *)(iVar4 + param_1) * 0x14 + 0xc) = 1;
  (*(code *)puVar1)(*(undefined4 *)(iVar3 + param_1),*(undefined4 *)(DAT_8c09937c + param_1));
  (*(code *)PTR_FUN_8c099390)(*(undefined4 *)(DAT_8c09937a + param_1),5);
  (*(code *)PTR_FUN_8c099394)
            (*(undefined4 *)(DAT_8c09937a + param_1),*(undefined4 *)(DAT_8c099372 + param_1),
             *(undefined4 *)(DAT_8c099374 + param_1));
  iVar3 = (*(code *)PTR_FUN_8c099388)(*(undefined4 *)(param_2 + 0x10));
  puVar1 = PTR_FUN_8c099388;
  *(int *)(DAT_8c09937e + param_1) = iVar3;
  *(int *)(iVar7 + *(int *)(DAT_8c099376 + param_1) * 0x14 + 4) = iVar3 + 1;
  puVar8 = (undefined4 *)(param_2 + 0x18);
  uVar2 = (*(code *)puVar1)(*(undefined4 *)(param_2 + 0x14));
  puVar1 = PTR_FUN_8c099388;
  *(undefined4 *)(DAT_8c099380 + param_1) = uVar2;
  iVar3 = 0;
  uVar2 = (*(code *)puVar1)(*puVar8);
  *(undefined4 *)(DAT_8c099382 + param_1) = uVar2;
  if (0 < *(int *)(DAT_8c09937e + param_1)) {
    iVar4 = param_1 + DAT_8c099384;
    do {
      puVar8 = puVar8 + 1;
      iVar5 = (*(code *)PTR_FUN_8c099388)(*puVar8);
      if ((-1 < iVar3) && (iVar3 <= *(int *)(DAT_8c09937e + param_1))) {
        if (iVar5 < 0) {
          (*(code *)PTR_FUN_8c099508)(iVar4 + iVar3 * 0x11,0,0x10);
          *(undefined1 *)(iVar4 + iVar3 * 0x11 + 0x10) = 0xff;
        }
        else {
          *(char *)(iVar4 + iVar3 * 0x11 + 0x10) = (char)iVar5;
        }
      }
      iVar6 = (int)DAT_8c09937e;
      *(undefined4 *)(iVar7 + iVar5 * 0x14) = 0;
      *(int *)(iVar7 + iVar5 * 0x14 + 4) = *(int *)(iVar6 + param_1) + 1;
      iVar3 = iVar3 + 1;
      *(int *)(iVar7 + iVar5 * 0x14 + 8) = iVar3;
      *(undefined4 *)(iVar7 + iVar5 * 0x14 + 0xc) = 2;
    } while (iVar3 < *(int *)(iVar6 + param_1));
  }
  if (*(int *)(DAT_8c099386 + param_1) != 0) {
    iVar5 = 0;
    (*(code *)PTR_FUN_8c09939c)(auStack_34);
    iVar3 = (int)DAT_8c099500;
    iVar4 = 8;
    do {
      (*(code *)PTR_FUN_8c099508)(iVar5 * 0x10 + param_1 + iVar3,0,0x10);
      iVar6 = *(int *)(iVar5 * 0x14 + iVar7 + 0xc);
      if (iVar6 == 1) {
        iVar6 = (*(code *)PTR_FUN_8c09951c)
                          (*(undefined4 *)(*(int *)(DAT_8c099504 + param_1) + 0x68),
                           *(undefined4 *)(DAT_8c099506 + param_1));
        if (iVar6 != 0) {
          (*(code *)PTR_FUN_8c099514)(auStack_34);
          (*(code *)PTR_FUN_8c099520)
                    (auStack_34,*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x14));
        }
      }
      else if (iVar6 == 2) {
        iVar6 = (*(code *)PTR_FUN_8c09951c)
                          (*(undefined4 *)(*(int *)(DAT_8c099504 + param_1) + 0x68),
                           *(undefined4 *)(DAT_8c099506 + param_1));
        if (iVar6 != 0) {
          (*(code *)PTR_FUN_8c099514)(auStack_34);
          (*(code *)PTR_FUN_8c099520)
                    (auStack_34,*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x14));
        }
      }
      else if (iVar6 == 3) {
        iVar6 = (*(code *)PTR_FUN_8c09951c)
                          (*(undefined4 *)(*(int *)(DAT_8c099504 + param_1) + 0x68),
                           *(undefined4 *)(iVar5 * 0x14 + iVar7));
        if (iVar6 != 0) {
          (*(code *)PTR_FUN_8c099514)(auStack_34);
          (*(code *)PTR_FUN_8c099520)
                    (auStack_34,*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x14));
        }
      }
      else {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        (*(code *)PTR_FUN_8c09950c)(auStack_34,*(undefined4 *)(iVar5 * 0x14 + iVar7 + 8));
        (*(code *)PTR_FUN_8c099510)();
      }
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar4 != 0);
    (*(code *)PTR_FUN_8c099514)(auStack_34);
    (*(code *)PTR_FUN_8c099518)(auStack_34,2);
  }
  *(undefined4 *)(DAT_8c099502 + param_1) = 0;
  return;
}

