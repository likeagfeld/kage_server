// entry: 8c076364
// name: FUN_8c076364
// signature: undefined FUN_8c076364(void)


/* WARNING: Removing unreachable block (ram,0x8c07641e) */

void FUN_8c076364(undefined *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int unaff_r12;
  int iVar5;
  byte *pbVar6;
  
  while( true ) {
    *(undefined1 *)(unaff_r12 + 2) = *(undefined1 *)(unaff_r10 + 8);
    puVar1 = PTR_FUN_8c0763e8;
    iVar3 = *(int *)(DAT_8c0763c4 + unaff_r8);
    do {
      do {
        iVar5 = unaff_r12;
        unaff_r11 = unaff_r11 + -1;
        iVar4 = *(int *)(&stack0x00000000 + DAT_8c0763c8) + 1;
        *(int *)(&stack0x00000000 + DAT_8c0763c8) = iVar4;
        unaff_r12 = iVar5 + 4;
        if (unaff_r11 == 0) {
          *(int *)(&stack0x00000000 + DAT_8c0763ce) = unaff_r9;
          if (*(char *)(unaff_r8 + 0x30) != '\x01') {
            FUN_8c07666e();
            return;
          }
          if (*(int *)(DAT_8c0763e0 + iVar3) != 0 || *(int *)(DAT_8c0763e2 + iVar3) != 0) {
            if (-1 < *(int *)(DAT_8c0763e4 + iVar3)) {
              *(int *)((int)DAT_8c0763e6 + *(int *)(DAT_8c0763c6 + unaff_r8)) =
                   *(int *)(DAT_8c0763e4 + iVar3);
            }
            if (*(int *)(DAT_8c076540 + unaff_r8) == 0) {
              param_1 = PTR_s_All_Battle_End__Send_Signal_CLI__8c076558;
              if (*(int *)PTR_DAT_8c076554 != 0) {
                (*(code *)PTR_FUN_8c07655c)(&stack0x0000001c,&stack0x0000001c);
                (*(code *)PTR_FUN_8c076560)(*(undefined4 *)PTR_DAT_8c076554,&stack0x0000001c);
              }
              *(undefined4 *)(DAT_8c076540 + unaff_r8) = 1;
            }
            *(undefined4 *)(*(int *)(DAT_8c076542 + unaff_r8) + 0x48) = 0x14;
          }
          return;
        }
      } while (*(char *)(unaff_r8 + 0x3e + iVar4) != '\0');
      unaff_r10 = *(int *)(DAT_8c0763d2 + iVar3) + DAT_8c0763d0 * iVar4;
      unaff_r9 = *(int *)(iVar4 * 4 + *(int *)(&stack0x00000000 + DAT_8c0763cc));
    } while (unaff_r9 == 0);
    pbVar6 = (byte *)(unaff_r9 + DAT_8c0763d4);
    uVar2 = (*(code *)PTR_FUN_8c0763e8)(6);
    (*(code *)PTR_FUN_8c0763ec)(uVar2);
    uVar2 = (*(code *)puVar1)((int)DAT_8c0763d6);
    (*(code *)PTR_FUN_8c0763ec)(uVar2);
    (*(code *)PTR_FUN_8c0763ec)(-(((*pbVar6 & 0x10) == 0) - 1),(int)DAT_8c0763d8);
    (*(code *)PTR_FUN_8c0763ec)(*pbVar6 & 0xf,(int)DAT_8c0763da);
    *(byte *)(iVar5 + 7) = pbVar6[3] & 0xf;
    iVar3 = (*(code *)puVar1)(6);
    if (iVar3 < 1) {
      FUN_8c07645a();
      return;
    }
    iVar3 = (*(code *)PTR_FUN_8c0763e8)(6);
    if (*(int *)(DAT_8c0763dc + unaff_r8) <= iVar3) {
      FUN_8c07645a();
      return;
    }
    iVar3 = (*(code *)PTR_FUN_8c0763e8)((int)DAT_8c0763d6);
    if (iVar3 < 1) break;
    iVar3 = (*(code *)PTR_FUN_8c0763e8)((int)DAT_8c0763d6);
    if (*(int *)(DAT_8c0763de + unaff_r8) <= iVar3) {
      FUN_8c076580();
      return;
    }
  }
  FUN_8c076580();
  return;
}

