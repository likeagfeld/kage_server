// entry: 8c076250
// name: FUN_8c076250
// signature: undefined FUN_8c076250(void)


void FUN_8c076250(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int local_20;
  
  iVar4 = (int)DAT_8c0763c2;
  iVar6 = 0;
  iVar5 = *(int *)(DAT_8c0763c4 + param_1);
  iVar10 = 8;
  iVar11 = *(int *)(*(int *)(DAT_8c0763c6 + param_1) + 0x70);
  *(undefined4 *)((int)&local_20 + DAT_8c0763c8 + iVar4) = 0;
  *(int *)((int)&local_20 + DAT_8c0763cc + iVar4) = param_1 + DAT_8c0763ca;
  iVar8 = *(int *)((int)&local_20 + DAT_8c0763ce + iVar4);
  do {
    puVar1 = PTR_FUN_8c0763e8;
    if (*(char *)(param_1 + 0x3e + iVar6) == '\0') {
      iVar3 = (int)DAT_8c0763d0;
      iVar9 = *(int *)(DAT_8c0763d2 + iVar5);
      iVar8 = *(int *)(iVar6 * 4 + *(int *)((int)&local_20 + DAT_8c0763cc + iVar4));
      if (iVar8 != 0) {
        pbVar12 = (byte *)(iVar8 + DAT_8c0763d4);
        uVar2 = (*(code *)PTR_FUN_8c0763e8)(6);
        (*(code *)PTR_FUN_8c0763ec)(uVar2);
        uVar2 = (*(code *)puVar1)((int)DAT_8c0763d6);
        (*(code *)PTR_FUN_8c0763ec)(uVar2);
        (*(code *)PTR_FUN_8c0763ec)(-(((*pbVar12 & 0x10) == 0) - 1),(int)DAT_8c0763d8);
        (*(code *)PTR_FUN_8c0763ec)(*pbVar12 & 0xf,(int)DAT_8c0763da);
        *(byte *)(iVar11 + 3) = pbVar12[3] & 0xf;
        iVar5 = (*(code *)puVar1)(6);
        if (iVar5 < 1) {
          FUN_8c07645a();
          return;
        }
        iVar5 = (*(code *)PTR_FUN_8c0763e8)(6);
        if (*(int *)(DAT_8c0763dc + param_1) <= iVar5) {
          FUN_8c07645a();
          return;
        }
        iVar5 = (*(code *)PTR_FUN_8c0763e8)((int)DAT_8c0763d6);
        if (iVar5 < 1) {
          FUN_8c076580();
          return;
        }
        iVar5 = (*(code *)PTR_FUN_8c0763e8)((int)DAT_8c0763d6);
        if (*(int *)(DAT_8c0763de + param_1) <= iVar5) {
          FUN_8c076580();
          return;
        }
        *(undefined1 *)(iVar11 + 2) = *(undefined1 *)(iVar9 + iVar3 * iVar6 + 8);
        iVar5 = *(int *)(DAT_8c0763c4 + param_1);
      }
    }
    iVar10 = iVar10 + -1;
    iVar6 = *(int *)((int)&local_20 + DAT_8c0763c8 + iVar4) + 1;
    *(int *)((int)&local_20 + DAT_8c0763c8 + iVar4) = iVar6;
    iVar11 = iVar11 + 4;
    if (iVar10 == 0) {
      *(int *)((int)&local_20 + DAT_8c0763ce + iVar4) = iVar8;
      if (*(char *)(param_1 + 0x30) == '\x01') {
        if (*(int *)(DAT_8c0763e0 + iVar5) != 0 || *(int *)(DAT_8c0763e2 + iVar5) != 0) {
          if (-1 < *(int *)(DAT_8c0763e4 + iVar5)) {
            *(int *)((int)DAT_8c0763e6 + *(int *)(DAT_8c0763c6 + param_1)) =
                 *(int *)(DAT_8c0763e4 + iVar5);
          }
          if (*(int *)(DAT_8c076540 + param_1) == 0) {
            iVar5 = *(int *)PTR_DAT_8c076554;
            *(undefined **)(&stack0xfffffff8 + iVar4) =
                 PTR_s_All_Battle_End__Send_Signal_CLI__8c076558;
            if (iVar5 != 0) {
              puVar7 = &stack0xfffffffc + iVar4;
              if (((uint)puVar7 & 3) != 0) {
                puVar7 = &stack0x00000000 + iVar4;
              }
              (*(code *)PTR_FUN_8c07655c)(&stack0xfffffffc + iVar4,puVar7);
              (*(code *)PTR_FUN_8c076560)(*(undefined4 *)PTR_DAT_8c076554,&stack0xfffffffc + iVar4);
            }
            *(undefined4 *)(DAT_8c076540 + param_1) = 1;
          }
          *(undefined4 *)(*(int *)(DAT_8c076542 + param_1) + 0x48) = 0x14;
        }
        return;
      }
      FUN_8c07666e();
      return;
    }
  } while( true );
}

