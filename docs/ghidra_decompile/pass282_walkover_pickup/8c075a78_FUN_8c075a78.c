// entry: 8c075a78
// name: FUN_8c075a78
// signature: undefined FUN_8c075a78(void)


void FUN_8c075a78(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  byte bVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  ulonglong in_dr14;
  ulonglong uVar21;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  puVar3 = PTR_FUN_8c075bd8;
  if (in_FPSCR_SZ == '\0') {
    puVar20 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar20 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar20 + -4) = in_PR;
  *(int *)((int)puVar20 + -0x3c) = param_1;
  iVar10 = *(int *)(DAT_8c075bcc + param_1);
  uVar9 = *(undefined4 *)(iVar10 + 100);
  *(undefined4 *)((int)puVar20 + -0x38) = *(undefined4 *)(iVar10 + 0x58);
  uVar11 = *(undefined4 *)(iVar10 + 0x60);
  *(undefined4 *)((int)puVar20 + -0x34) = uVar9;
  iVar10 = *(int *)(DAT_8c075bce + param_1);
  *(undefined4 *)((int)puVar20 + -0x30) = uVar11;
  *(undefined4 *)((int)puVar20 + -0x2c) = *(undefined4 *)(DAT_8c075bd0 + iVar10);
  iVar10 = *(int *)((int)puVar20 + -0x3c);
  iVar17 = 0;
  if (0 < *(int *)(DAT_8c075bd2 + iVar10)) {
    puVar16 = *(ushort **)((int)puVar20 + -0x2c);
    *(int *)((int)puVar20 + -0x28) = *(int *)((int)puVar20 + -0x38) + 4;
    uVar21 = in_dr14 & 0xffffffff;
    do {
      iVar7 = (*(code *)puVar3)(4,*(int *)((int)puVar20 + -0x34) + iVar17 * 4 + 2);
      uVar4 = DAT_8c075e14;
      uVar9 = (undefined4)(uVar21 >> 0x20);
      if ((iVar7 == 2) || (iVar7 == 3)) {
        if (((char)puVar16[4] == '\x01') || ((char)puVar16[4] == '\x05')) {
          *(byte *)(*(int *)((int)puVar20 + -0x30) + iVar17 * 4 + 3) =
               *(byte *)(*(int *)((int)puVar20 + -0x30) + iVar17 * 4 + 3) & 0xf | 0x20;
          *(undefined1 *)(puVar16 + 4) = 2;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(puVar16 + 0xc) = uVar9;
          }
          else {
            *(ulonglong *)(puVar16 + 0xc) = uVar21;
          }
          if ((*puVar16 & 1) == 0) {
            *puVar16 = *puVar16 | 1;
          }
          iVar15 = *(int *)(DAT_8c075bce + iVar10);
          iVar7 = (*(code *)puVar3)((int)DAT_8c075bd4);
          iVar14 = *(int *)(iVar15 + 0x20);
          iVar18 = (*(code *)puVar3)(6);
          if (*(ushort **)((iVar14 * iVar7 + iVar18) * 4 + *(int *)(DAT_8c075bd6 + iVar15)) !=
              puVar16) {
            (*(code *)PTR_FUN_8c075bdc)(iVar15,puVar16);
          }
        }
      }
      else if (iVar7 == 4) {
        if ((char)puVar16[5] == '\r') {
          return;
        }
        if ((char)puVar16[4] != '\x04') {
          iVar14 = *(int *)((int)puVar20 + -0x30);
          iVar18 = iVar14 + iVar17 * 4;
          iVar7 = (int)DAT_8c075c5e;
          *(byte *)(iVar18 + 3) = *(byte *)(iVar18 + 3) & 0xf | 0x40;
          iVar7 = (*(code *)puVar3)(iVar7,iVar14 + iVar17 * 4 + 2);
          if (iVar7 == 0) {
            *(undefined4 *)((int)puVar20 + -0x10) = 1;
          }
          else if (iVar7 == 1) {
            *(undefined4 *)((int)puVar20 + -0x10) = 2;
          }
          else if (iVar7 == 2) {
            *(undefined4 *)((int)puVar20 + -0x10) = 4;
          }
          else if (iVar7 == 3) {
            *(undefined4 *)((int)puVar20 + -0x10) = 8;
          }
          (*(code *)PTR_FUN_8c075c64)
                    (*(undefined4 *)(DAT_8c075c60 + iVar10),iVar17,
                     *(undefined4 *)((int)puVar20 + -0x10));
          *(undefined1 *)(puVar16 + 4) = 4;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar16 + 0xc) = (int)(uVar21 >> 0x20);
          }
          else {
            *(ulonglong *)(puVar16 + 0xc) = uVar21;
          }
        }
      }
      else if (iVar7 == 5) {
LAB_8c075ec2:
        cVar1 = (char)puVar16[4];
        if (((cVar1 == '\x05') || (cVar1 == '\t')) || (cVar1 == '\x0f')) {
          *(uint *)((int)puVar20 + -0x18) =
               (int)*(char *)(*(int *)((int)puVar20 + -0x34) + iVar17 * 4 + 3) & 0xf;
          iVar7 = (*(code *)PTR_FUN_8c075f58)(4);
          if (*(int *)((int)puVar20 + -0x18) == iVar7) goto LAB_8c075b28;
        }
        puVar6 = PTR_FUN_8c07610c;
        uVar5 = DAT_8c0760fa;
        uVar4 = DAT_8c0760f8;
        if (((*(byte *)(*(int *)((int)puVar20 + -0x34) + iVar17 * 4 + 3) & 0xf) < 8) &&
           (*(char *)(*(int *)((int)DAT_8c075f4c + *(int *)(DAT_8c075f4a + iVar10)) +
                      (int)DAT_8c075f4e *
                      ((int)*(char *)(*(int *)((int)puVar20 + -0x34) + iVar17 * 4 + 3) & 0xfU) + 8)
            == '\x04')) {
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar16 + 0xc) = (int)(uVar21 >> 0x20);
          }
          else {
            *(ulonglong *)(puVar16 + 0xc) = uVar21;
          }
        }
        else {
          iVar18 = *(int *)((int)puVar20 + -0x30);
          iVar7 = iVar18 + iVar17 * 4;
          *(byte *)(iVar7 + 3) = *(byte *)(iVar7 + 3) & 0xf | 0x50;
          iVar7 = iVar18 + iVar17 * 4;
          *(byte *)(iVar7 + 2) = *(byte *)(iVar7 + 2) & 0xf;
          iVar7 = iVar18 + iVar17 * 4;
          iVar18 = iVar18 + iVar17 * 4;
          *(byte *)(iVar7 + 2) = *(byte *)(iVar7 + 2) & (byte)uVar4;
          *(byte *)(iVar18 + 2) = *(byte *)(iVar18 + 2) & (byte)uVar5;
          bVar12 = (byte)puVar16[8];
          if (((int)(char)bVar12 & 0x80U) == 0) {
            bVar12 = bVar12 & 0x7f | (byte)DAT_8c0760fc;
            *(byte *)(puVar16 + 8) = bVar12;
          }
          if ((bVar12 & 0x7f) != (*(byte *)(*(int *)((int)puVar20 + -0x34) + iVar17 * 4 + 3) & 0xf))
          {
            (*(code *)puVar6)(*(byte *)(*(int *)((int)puVar20 + -0x34) + iVar17 * 4 + 3) & 0xf,
                              (int)DAT_8c0760fe);
          }
          iVar7 = *(int *)((int)puVar20 + -0x34);
          *(undefined1 *)(puVar16 + 4) = 0xf;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar16 + 0xc) = (int)(uVar21 >> 0x20);
          }
          else {
            *(ulonglong *)(puVar16 + 0xc) = uVar21;
          }
          (*(code *)PTR_FUN_8c07610c)(*(byte *)(iVar7 + iVar17 * 4 + 3) & 0xf,4);
          iVar18 = *(int *)(DAT_8c076100 + iVar10);
          *(ushort **)((int)puVar20 + -0x24) = puVar16 + 1;
          iVar7 = (*(code *)puVar3)((int)DAT_8c076102);
          *(int *)((int)puVar20 + -0x14) = *(int *)(iVar18 + 0x20) * iVar7;
          iVar7 = (*(code *)puVar3)(6);
          if (*(ushort **)
               ((*(int *)((int)puVar20 + -0x14) + iVar7) * 4 + *(int *)(DAT_8c076104 + iVar18)) ==
              puVar16) {
            (*(code *)PTR_FUN_8c076240)(iVar18,puVar16);
          }
          if ((char)puVar16[5] == '\0') {
            iVar19 = *(int *)((int)puVar20 + -0x34);
            uVar9 = (*(code *)puVar3)((int)DAT_8c076106,iVar19 + iVar17 * 4 + 2);
            *(undefined4 *)((int)puVar20 + -8) = uVar9;
            uVar8 = (*(code *)puVar3)((int)DAT_8c076108,iVar19 + iVar17 * 4 + 2);
            uVar8 = (*(uint *)((int)puVar20 + -8) & 7) << 2 | uVar8 & 3;
            *(uint *)((int)puVar20 + -8) = uVar8;
            (*(code *)PTR_FUN_8c076110)
                      (*(undefined4 *)(DAT_8c07610a + iVar10),uVar8,
                       *(byte *)(iVar19 + iVar17 * 4 + 3) & 0xf);
            puVar6 = PTR___bfswu_8c076114;
            iVar15 = *(int *)((int)puVar20 + -8);
            iVar7 = *(int *)((int)puVar20 + -0x28);
            iVar18 = (int)DAT_8c076106;
            iVar14 = iVar7 + iVar15 * 6;
            *(byte *)(iVar14 + 3) = *(byte *)(iVar14 + 3) & 0xf;
            (*(code *)puVar6)(iVar7 + iVar15 * 6 + 2,iVar18,*(byte *)(iVar19 + iVar17 * 4 + 3) & 0xf
                             );
          }
        }
      }
      else if (iVar7 == 6) {
        if ((char)puVar16[4] == '\x03') {
          *(undefined1 *)(puVar16 + 4) = 6;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(puVar16 + 0xc) = uVar9;
          }
          else {
            *(ulonglong *)(puVar16 + 0xc) = uVar21;
          }
        }
      }
      else {
        if (iVar7 == 0xe) goto LAB_8c075ec2;
        if ((((iVar7 == 0xf) && (cVar1 = (char)puVar16[4], cVar1 != '\x02')) && (cVar1 != '\x03'))
           && (cVar1 != '\n')) {
          iVar14 = *(int *)((int)puVar20 + -0x34);
          iVar18 = *(int *)((int)puVar20 + -0x30);
          puVar13 = (undefined1 *)(iVar14 + iVar17 * 4);
          uVar2 = puVar13[1];
          *(undefined1 *)((int)puVar20 + -0x44) = *puVar13;
          *(undefined1 *)((int)puVar20 + -0x43) = uVar2;
          *(undefined2 *)(iVar18 + iVar17 * 4) = *(undefined2 *)((int)puVar20 + -0x44);
          iVar7 = iVar18 + iVar17 * 4;
          *(byte *)(iVar7 + 3) = *(byte *)(iVar7 + 3) & 0xf | 0x30;
          iVar18 = iVar18 + iVar17 * 4;
          iVar7 = (int)DAT_8c075e16;
          *(byte *)(iVar18 + 3) = *(byte *)(iVar18 + 3) & (byte)uVar4;
          uVar9 = (*(code *)puVar3)(iVar14 + iVar17 * 4,6);
          (*(code *)PTR___bfswu_8c075e24)(uVar9,6);
          uVar9 = (*(code *)puVar3)(iVar14 + iVar17 * 4,iVar7);
          (*(code *)PTR___bfswu_8c075e24)(uVar9,iVar7);
          (*(code *)PTR___bfswu_8c075e24)
                    (-(((*(byte *)(iVar14 + iVar17 * 4) & 0x10) == 0) - 1),(int)DAT_8c075e18);
          (*(code *)PTR___bfswu_8c075e24)(*(byte *)(iVar14 + iVar17 * 4) & 0xf,(int)DAT_8c075e1a);
          *(byte *)((int)puVar20 + -0x40) =
               (*(byte *)((int)puVar20 + -0x40) & (byte)DAT_8c075e1c | 0x10) & (byte)DAT_8c075e14 |
               8;
          (*(code *)PTR_FUN_8c075e28)
                    (*(undefined4 *)(*(int *)(DAT_8c075e1e + iVar10) + 8),
                     (undefined1 *)((int)puVar20 + -0x40),puVar16 + 0xe,puVar16 + 0x12);
          *(undefined1 *)(puVar16 + 4) = 10;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar16 + 0xc) = (int)(uVar21 >> 0x20);
          }
          else {
            *(ulonglong *)(puVar16 + 0xc) = uVar21;
          }
          uVar9 = (*(code *)puVar3)(iVar14 + iVar17 * 4,6);
          *(ushort **)((int)puVar20 + -0x24) = puVar16 + 1;
          (*(code *)PTR___bfswu_8c075e24)(uVar9,6);
          uVar9 = (*(code *)puVar3)(iVar7,iVar14 + iVar17 * 4);
          (*(code *)PTR___bfswu_8c075e24)(*(undefined4 *)((int)puVar20 + -0x24),uVar9,iVar7);
          *(byte *)(puVar16 + 1) =
               ((byte)puVar16[1] & (byte)DAT_8c075e1c | 0x10) & (byte)DAT_8c075e14 | 8;
          puVar16[0x38] = 0;
          puVar16[0x39] = 0;
          if ((*puVar16 & 1) == 0) {
            *puVar16 = *puVar16 | 1;
          }
          *(undefined4 *)((int)puVar20 + -0x20) = *(undefined4 *)(DAT_8c075e1e + iVar10);
          iVar7 = (*(code *)puVar3)((int)DAT_8c075e16);
          *(int *)((int)puVar20 + -0x1c) = *(int *)(*(int *)((int)puVar20 + -0x20) + 0x20) * iVar7;
          iVar7 = (*(code *)puVar3)(*(undefined4 *)((int)puVar20 + -0x24),6);
          if (*(ushort **)
               ((*(int *)((int)puVar20 + -0x1c) + iVar7) * 4 +
               *(int *)((int)DAT_8c075e20 + *(int *)((int)puVar20 + -0x20))) != puVar16) {
            (*(code *)PTR_FUN_8c075f54)(*(int *)((int)puVar20 + -0x20),puVar16);
          }
          if ((char)puVar16[5] == '\0') {
            iVar7 = *(int *)((int)puVar20 + -0x34);
            iVar14 = *(int *)((int)puVar20 + -0x28);
            uVar9 = (*(code *)puVar3)((int)DAT_8c075f44,iVar7 + iVar17 * 4 + 2);
            *(undefined4 *)((int)puVar20 + -0xc) = uVar9;
            uVar8 = (*(code *)puVar3)((int)DAT_8c075f46,iVar7 + iVar17 * 4 + 2,uVar9);
            uVar9 = *(undefined4 *)(DAT_8c075f48 + iVar10);
            uVar8 = (*(uint *)((int)puVar20 + -0xc) & 7) << 2 | uVar8 & 2;
            *(uint *)((int)puVar20 + -0xc) = uVar8;
            (*(code *)PTR_FUN_8c075f50)(uVar9,uVar8);
            iVar18 = *(int *)((int)puVar20 + -0xc);
            iVar7 = iVar14 + iVar18 * 6;
            *(byte *)(iVar7 + 3) = *(byte *)(iVar7 + 3) & 0xf;
            iVar14 = iVar14 + iVar18 * 6;
            *(byte *)(iVar14 + 2) = *(byte *)(iVar14 + 2) & 0xf;
          }
        }
      }
LAB_8c075b28:
      iVar17 = iVar17 + 1;
      puVar16 = puVar16 + 0x3a;
    } while (iVar17 < *(int *)(DAT_8c075bd2 + iVar10));
  }
  return;
}

