// entry: 8c09bc16
// name: FUN_8c09bc16
// signature: undefined FUN_8c09bc16(void)


void FUN_8c09bc16(int param_1)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int local_20;
  
  iVar4 = (int)DAT_8c09bd7e;
  iVar5 = 0;
  iVar14 = param_1 + DAT_8c09bd80;
  iVar13 = (int)DAT_8c09bd82;
  iVar8 = 8;
  do {
    if (*(int *)(iVar5 * 8 + iVar14 + 4) <= iVar13) {
      iVar10 = iVar14 + iVar5 * 8;
      *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + 1;
    }
    iVar8 = iVar8 + -1;
    iVar5 = iVar5 + 1;
  } while (iVar8 != 0);
  iVar5 = *(int *)(DAT_8c09bd84 + param_1) + -1;
  *(int *)(DAT_8c09bd84 + param_1) = iVar5;
  if (iVar5 < 1) {
    *(undefined4 *)(DAT_8c09bd84 + param_1) = 0x5a;
    if (*(int *)(DAT_8c09bd86 + param_1) == 0) {
      return;
    }
    (*(code *)PTR_FUN_8c09bd98)();
  }
  sVar2 = DAT_8c09bfba;
  iVar5 = *(int *)(DAT_8c09bd86 + param_1);
  if (iVar5 != 0) {
    if (((int)*(char *)(iVar5 + 0x12) & (int)DAT_8c09bd88) == 5) {
      uVar11 = *(undefined4 *)(iVar5 + 0x34);
      iVar8 = 8;
      *(undefined4 *)((int)&local_20 + DAT_8c09bd8a + iVar4) = uVar11;
      uVar15 = 0;
      iVar5 = param_1 + DAT_8c09bd8c;
      *(int *)((int)&local_20 + DAT_8c09bd8e + iVar4) = iVar5;
      uVar6 = 0;
      do {
        if ((*(int *)(iVar5 + 0xc) == 1) || (*(int *)(iVar5 + 0xc) == 2)) {
          if ((int)uVar6 < 0) {
            uVar3 = 1 >> (~uVar6 & 0x1f) + 1;
          }
          else {
            uVar3 = 1 << (uVar6 & 0x1f);
          }
          uVar15 = uVar15 | uVar3 & 0xff;
        }
        iVar8 = iVar8 + -1;
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x14;
      } while (iVar8 != 0);
      uVar6 = 0;
      iVar5 = 8;
      do {
        if ((int)uVar6 < 0) {
          uVar3 = 1 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar6 & 0x1f);
        }
        if ((uVar15 & uVar3) != 0) {
          *(char *)(uVar6 * 8 + iVar14) = (char)uVar11;
          *(undefined4 *)(uVar6 * 8 + iVar14 + 4) = 0;
        }
        iVar5 = iVar5 + -1;
        uVar6 = uVar6 + 1;
      } while (iVar5 != 0);
      puVar7 = (ushort *)(&stack0xffffffe4 + iVar4);
      (*(code *)PTR_FUN_8c09bd9c)(puVar7,0,9);
      (&stack0xffffffe5)[iVar4] = (&stack0xffffffe5)[iVar4] & 1 | 0x38;
      (&stack0xffffffe7)[iVar4] = (&stack0xffffffe7)[iVar4] & 0x7f;
      uVar11 = *(undefined4 *)(DAT_8c09bd90 + param_1);
      *puVar7 = *puVar7 & (ushort)DAT_8c09bda4 | 4;
      (*(code *)PTR_FUN_8c09bda0)(uVar11);
      *(undefined4 *)(&stack0xffffffe8 + iVar4) =
           *(undefined4 *)((int)&local_20 + DAT_8c09bd8a + iVar4);
      (&stack0xffffffec)[iVar4] = (char)uVar15;
      iVar5 = (*(code *)PTR_FUN_8c09bda8)
                        (*(undefined4 *)(DAT_8c09bd94 + param_1),&stack0xffffffe4 + iVar4,9);
      if (iVar5 == 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x60);
        pcVar9 = *(code **)(*(int *)(param_1 + 0x28) + 0x68);
        *(undefined **)((int)&local_20 + iVar4) = PTR_s_Can_t_Send_Ping_Value_____8c09c054;
        (*pcVar9)(param_1 + iVar5);
      }
      (*(code *)PTR_FUN_8c09bdac)(0,*(int *)(DAT_8c09bd86 + param_1) + 0x10,6);
      puVar1 = PTR_FUN_8c09be5c;
      uVar6 = (int)*(char *)(*(int *)(DAT_8c09bd96 + param_1) + 0x12) & (int)DAT_8c09bd88;
      if ((((((uVar6 == 9) || (uVar6 == 10)) || (uVar6 == 0xb)) ||
           ((uVar6 == 0xc || (uVar6 == 0xd)))) || (uVar6 == 0xe)) ||
         (((uVar6 == 0xf || (uVar6 == 0x10)) || (uVar6 == 0x11)))) {
        iVar8 = 0;
        iVar5 = 8;
        uVar6 = (uint)DAT_8c09be54;
        do {
          iVar10 = *(int *)(iVar8 * 0x14 + *(int *)((int)&local_20 + DAT_8c09be58 + iVar4) + 0xc);
          if (((iVar10 == 1) || (iVar10 == 2)) || (iVar10 == 3)) {
            uVar15 = uVar6;
            if (*(int *)(iVar8 * 8 + iVar14 + 4) < iVar13) {
              uVar15 = (uint)*(byte *)(iVar8 * 8 + iVar14);
            }
            (*(code *)puVar1)(*(undefined4 *)(DAT_8c09be56 + param_1),iVar8,1,uVar15);
          }
          else {
            (*(code *)puVar1)(iVar8,0,uVar6);
          }
          iVar5 = iVar5 + -1;
          iVar8 = iVar8 + 1;
        } while (iVar5 != 0);
      }
    }
    else if (((int)*(char *)(iVar5 + 0x12) & (int)DAT_8c09bfb2) == 9) {
      iVar5 = param_1 + DAT_8c09bfb4;
      *(int *)((int)&local_20 + DAT_8c09bfb6 + iVar4) = iVar5;
      uVar15 = 0;
      uVar6 = 0;
      iVar8 = 8;
      *(undefined4 *)((int)&local_20 + DAT_8c09bfb8 + iVar4) = 0;
      do {
        if ((*(int *)(iVar5 + 0xc) == 1) || (*(int *)(iVar5 + 0xc) == 2)) {
          if ((int)uVar6 < 0) {
            uVar3 = 1 >> (~uVar6 & 0x1f) + 1;
          }
          else {
            uVar3 = 1 << (uVar6 & 0x1f);
          }
          uVar15 = uVar15 | uVar3 & 0xff;
        }
        iVar8 = iVar8 + -1;
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x14;
      } while (iVar8 != 0);
      uVar6 = 0;
      iVar5 = 8;
      do {
        if ((int)uVar6 < 0) {
          uVar3 = 1 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar6 & 0x1f);
        }
        if ((uVar15 & uVar3) != 0) {
          *(char *)(uVar6 * 8 + iVar14) = (char)sVar2;
          *(undefined4 *)(uVar6 * 8 + iVar14 + 4) = 0;
        }
        iVar5 = iVar5 + -1;
        uVar6 = uVar6 + 1;
      } while (iVar5 != 0);
      *(undefined1 **)((int)&local_20 + DAT_8c09bfbc + iVar4) = &stack0xffffffe4 + iVar4;
      *(undefined1 **)((int)&local_20 + DAT_8c09bfbe + iVar4) = &stack0xffffffe8 + iVar4;
      (*(code *)PTR_FUN_8c09bfc8)(0,9);
      uVar11 = DAT_8c09bfcc;
      puVar7 = *(ushort **)((int)&local_20 + DAT_8c09bfbc + iVar4);
      *(byte *)((int)puVar7 + 1) = *(byte *)((int)puVar7 + 1) & 1 | 0x38;
      *(byte *)((int)puVar7 + 3) = *(byte *)((int)puVar7 + 3) & 0x7f;
      iVar5 = (int)DAT_8c09bfc0;
      *puVar7 = *puVar7 & (ushort)uVar11 | 4;
      (*(code *)PTR_FUN_8c09bfd0)(*(undefined4 *)(iVar5 + param_1));
      piVar12 = *(int **)((int)&local_20 + DAT_8c09bfbe + iVar4);
      iVar5 = (int)DAT_8c09bfc2;
      *piVar12 = (int)DAT_8c09bfba;
      *(char *)(piVar12 + 1) = (char)uVar15;
      iVar5 = (*(code *)PTR_FUN_8c09bfd4)
                        (*(undefined4 *)(iVar5 + param_1),&stack0xffffffe4 + iVar4,9);
      if (iVar5 == 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x60);
        pcVar9 = *(code **)(*(int *)(param_1 + 0x28) + 0x68);
        *(undefined **)((int)&local_20 + iVar4) = PTR_s_Can_t_Send_Ping_Value_____8c09c054;
        (*pcVar9)(param_1 + iVar5);
      }
      (*(code *)PTR_FUN_8c09bfd8)(0,*(int *)(DAT_8c09bfc4 + param_1) + 0x10,6);
      puVar1 = PTR_FUN_8c09bfdc;
      uVar6 = (int)*(char *)(*(int *)(DAT_8c09bfc6 + param_1) + 0x12) & (int)DAT_8c09bfb2;
      if ((((uVar6 == 9) || (uVar6 == 10)) ||
          ((uVar6 == 0xb || (((uVar6 == 0xc || (uVar6 == 0xd)) || (uVar6 == 0xe)))))) ||
         (((uVar6 == 0xf || (uVar6 == 0x10)) || (uVar6 == 0x11)))) {
        iVar8 = 0;
        iVar13 = 8;
        iVar5 = (int)DAT_8c09bfba;
        iVar4 = *(int *)((int)&local_20 + DAT_8c09bfb8 + iVar4) +
                *(int *)((int)&local_20 + DAT_8c09bfb6 + iVar4);
        do {
          iVar14 = *(int *)(iVar4 + 0xc);
          if (((iVar14 == 1) || (iVar14 == 2)) || (iVar14 == 3)) {
            (*(code *)puVar1)(*(undefined4 *)(DAT_8c09bfc6 + param_1),iVar8,1,iVar5);
          }
          else {
            (*(code *)puVar1)(iVar8,0,iVar5);
          }
          iVar13 = iVar13 + -1;
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 0x14;
        } while (iVar13 != 0);
      }
    }
  }
  return;
}

