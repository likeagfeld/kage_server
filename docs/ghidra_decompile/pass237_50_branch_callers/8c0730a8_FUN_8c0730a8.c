// entry: 8c0730a8
// name: FUN_8c0730a8
// signature: undefined FUN_8c0730a8(void)


undefined4 FUN_8c0730a8(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  ulonglong in_dr14;
  bool bVar21;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar16 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar16 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar16 + -4) = in_PR;
  iVar14 = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)(DAT_8c07320c + 0x34),param_1);
  }
  else {
    uVar18 = *(ulonglong *)(DAT_8c07320c + 0x34);
  }
  uVar20 = uVar18;
  if (in_FPSCR_SZ == '\0') {
    uVar20 = in_dr14 & 0xffffffff;
  }
  uVar15 = *(undefined4 *)((int)DAT_8c0731fa + *(int *)(DAT_8c0731f8 + param_2));
  (*(code *)PTR_FUN_8c073210)(uVar18,uVar15);
  uVar12 = (uint)uVar18;
  (*(code *)PTR_FUN_8c073214)(uVar15,0);
  uVar18 = (ulonglong)uVar12;
  (*(code *)PTR_FUN_8c073218)(uVar15);
  uVar15 = *(undefined4 *)((int)DAT_8c0731fc + *(int *)(DAT_8c0731f8 + param_2));
  iVar6 = (*(code *)PTR_FUN_8c07321c)(uVar15);
  puVar2 = PTR_FUN_8c073220;
  uVar17 = (undefined4)uVar18;
  if (0 < iVar6) {
    iVar13 = 0;
    do {
      iVar7 = (*(code *)puVar2)(uVar15,iVar14,2);
      if (iVar7 < 4) {
        uVar5 = uVar20;
        if (in_FPSCR_SZ == '\0') {
          uVar5 = uVar18 & 0xffffffff;
        }
        uVar18 = uVar5;
        (*(code *)PTR_FUN_8c073380)
                  (uVar18,*(undefined4 *)
                           (iVar13 + *(int *)((int)DAT_8c073378 + *(int *)(DAT_8c073376 + param_2)))
                  );
      }
      uVar17 = (undefined4)uVar18;
      iVar6 = iVar6 + -1;
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + 4;
    } while (iVar6 != 0);
  }
  if (in_FPSCR_SZ == '\0') {
    uVar19 = CONCAT44(*(undefined4 *)(DAT_8c07320c + 0x34),uVar17);
  }
  else {
    uVar19 = *(undefined8 *)(DAT_8c07320c + 0x34);
  }
  (*(code *)PTR_FUN_8c073224)(uVar19,*(undefined4 *)(DAT_8c0731fe + param_2));
  uVar15 = (undefined4)uVar19;
  (*(code *)PTR_FUN_8c073228)(param_2);
  (*(code *)PTR_FUN_8c07322c)(param_2);
  if (((**(uint **)(DAT_8c0731fe + param_2) & 4) != 0) &&
     ((**(uint **)(DAT_8c0731fe + param_2) & 8) == 0)) {
    iVar13 = param_2 + DAT_8c07337a;
    iVar6 = *(int *)(iVar13 + 4);
    iVar14 = *(int *)(*(int *)(iVar13 + 4) + 0x28);
    *(int *)((int)puVar16 + -0x2c) = iVar13;
    iVar14 = (**(code **)(iVar14 + 0x80))(iVar6 + *(int *)(iVar14 + 0x78));
    if (iVar14 == 0) {
      (*(code *)PTR_FUN_8c073384)(*(undefined4 *)(*(int *)((int)puVar16 + -0x2c) + 4));
      **(uint **)(DAT_8c073370 + param_2) = **(uint **)(DAT_8c073370 + param_2) | 8;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    uVar18 = CONCAT44(*(undefined4 *)(*(int *)(DAT_8c0731fe + param_2) + 0x14),uVar15);
  }
  else {
    uVar18 = *(ulonglong *)(*(int *)(DAT_8c0731fe + param_2) + 0x14);
  }
  (*(code *)PTR_FUN_8c073230)(uVar18,*(undefined4 *)(DAT_8c073200 + param_2));
  if (in_FPSCR_SZ == '\0') {
    uVar20 = uVar18 & 0xffffffff;
  }
  (*(code *)PTR_FUN_8c073234)
            (uVar20,*(undefined4 *)(DAT_8c073200 + param_2),
             (**(uint **)(DAT_8c0731fe + param_2) & 4) != 0);
  (*(code *)PTR_FUN_8c073238)(param_2);
  iVar14 = 0;
  *(undefined4 *)((int)puVar16 + -0x28) = 0;
  iVar6 = *(int *)(*(int *)(DAT_8c073202 + param_2) + 0x60);
  if (0 < *(int *)(DAT_8c073204 + param_2)) {
    *(int *)((int)puVar16 + -0x24) = param_2 + DAT_8c073206;
    do {
      puVar4 = PTR_FUN_8c0736b8;
      puVar3 = PTR_FUN_8c0735f8;
      puVar2 = PTR_FUN_8c07348c;
      iVar13 = iVar14 * 4 + iVar6;
      iVar14 = *(int *)((int)DAT_8c073208 + *(int *)(DAT_8c0731fe + param_2)) + iVar14 * 0x74;
      cVar1 = *(char *)(iVar14 + 8);
      *(int *)((int)puVar16 + -0x20) = iVar14;
      if (cVar1 == '\x04') {
        if (*(char *)(iVar14 + 10) == '\r') {
          *(undefined1 *)(iVar14 + 8) = 3;
        }
        else {
          iVar14 = (*(code *)PTR_FUN_8c0736b8)(4);
          if ((iVar14 != 4) && (iVar14 = (*(code *)puVar4)(4), iVar14 != 0)) {
            uVar15 = *(undefined4 *)((int)puVar16 + -0x20);
            *(byte *)(iVar13 + 3) = *(byte *)(iVar13 + 3) & 0xf | 0x40;
            uVar12 = (*(code *)puVar4)(uVar15,4);
            if ((uVar12 & 1) == 0) {
              uVar12 = (*(code *)puVar4)(4);
              if ((uVar12 & 2) == 0) {
                uVar12 = (*(code *)puVar4)(4);
                if ((uVar12 & 4) == 0) {
                  uVar12 = (*(code *)puVar4)(4);
                  if ((uVar12 & 8) != 0) {
                    *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c0736b4 | 6;
                  }
                }
                else {
                  *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c0736b4 | 4;
                }
              }
              else {
                *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c0736b4 | 2;
              }
            }
            else {
              *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c0736b4;
            }
          }
        }
      }
      else if (cVar1 == '\x06') {
        iVar14 = (*(code *)PTR_FUN_8c0735f8)(4);
        if (iVar14 == 3) {
          uVar12 = (*(code *)PTR_FUN_8c073604)(*(undefined4 *)((int)puVar16 + -0x20),4);
          puVar2 = PTR_FUN_8c073604;
          iVar14 = *(int *)((uVar12 & 0xff) * 4 + *(int *)((int)puVar16 + -0x24));
          if ((iVar14 != 0) && (*(int *)(iVar14 + 0x24) != 1)) {
            *(byte *)(iVar13 + 3) = *(byte *)(iVar13 + 3) & 0xf | (byte)DAT_8c0735f4;
            uVar15 = (*(code *)puVar2)(4);
            (*(code *)PTR_FUN_8c0735fc)(uVar15,(int)DAT_8c0735f6);
            if (*(char *)(*(int *)((int)puVar16 + -0x20) + 10) == '\0') {
              *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c0735f2 | 1;
            }
            else {
              *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c0735f2;
            }
          }
        }
      }
      else if (cVar1 == '\a') {
        iVar14 = (*(code *)PTR_FUN_8c0735f8)(4);
        puVar2 = PTR_FUN_8c0735fc;
        if (iVar14 == 5) {
          *(byte *)(iVar13 + 3) = *(byte *)(iVar13 + 3) & 0xf | (byte)DAT_8c0735ea;
          uVar15 = (*(code *)puVar3)(6);
          (*(code *)puVar2)(uVar15,6);
          uVar15 = (*(code *)puVar3)((int)DAT_8c0735ec);
          (*(code *)puVar2)(uVar15,(int)DAT_8c0735ec);
          iVar7 = *(int *)(DAT_8c0735ee + param_2);
          iVar14 = (*(code *)puVar3)((int)DAT_8c0735ec);
          *(int *)((int)puVar16 + -0x10) = *(int *)(iVar7 + 0x20) * iVar14;
          iVar14 = (*(code *)puVar3)(6);
          if (*(int *)((*(int *)((int)puVar16 + -0x10) + iVar14) * 4 +
                      *(int *)(DAT_8c0735f0 + iVar7)) == *(int *)((int)puVar16 + -0x20)) {
            (*(code *)PTR_FUN_8c073600)(iVar7);
          }
          if (*(char *)(*(int *)((int)puVar16 + -0x20) + 10) == '\0') {
            *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c0735f2 | 1;
          }
          else {
            *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c0735f2;
          }
        }
      }
      else if (cVar1 == '\b') {
        iVar14 = (*(code *)PTR_FUN_8c07348c)(4);
        puVar3 = PTR_FUN_8c073484;
        if (iVar14 == 5) {
          *(byte *)(iVar13 + 3) = *(byte *)(iVar13 + 3) & 0xf | (byte)DAT_8c07347a;
          uVar15 = (*(code *)puVar2)(6);
          (*(code *)puVar3)(uVar15,6);
          uVar15 = (*(code *)puVar2)((int)DAT_8c07347c);
          (*(code *)puVar3)(uVar15,(int)DAT_8c07347c);
          iVar7 = *(int *)(DAT_8c07347e + param_2);
          iVar14 = (*(code *)puVar2)((int)DAT_8c07347c);
          *(int *)((int)puVar16 + -0x14) = *(int *)(iVar7 + 0x20) * iVar14;
          iVar14 = (*(code *)puVar2)(6);
          if (*(int *)((*(int *)((int)puVar16 + -0x14) + iVar14) * 4 +
                      *(int *)(DAT_8c073480 + iVar7)) == *(int *)((int)puVar16 + -0x20)) {
            (*(code *)PTR_FUN_8c073490)(iVar7);
          }
          if (*(char *)(*(int *)((int)puVar16 + -0x20) + 10) == '\0') {
            *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c073482 | 1;
          }
          else {
            *(byte *)(iVar13 + 2) = *(byte *)(iVar13 + 2) & (byte)DAT_8c073482;
          }
        }
      }
      else if (((cVar1 != '\v') && (cVar1 != '\f')) && (cVar1 != '\r')) {
        *(undefined **)((int)puVar16 + -0x18) = PTR_FUN_8c073484;
        *(undefined **)((int)puVar16 + -0xc) = PTR_FUN_8c073484;
        (*(code *)PTR_FUN_8c073484)(4);
        uVar15 = (*(code *)PTR_FUN_8c073488)(*(undefined4 *)((int)puVar16 + -0x20),4);
        *(int *)((int)puVar16 + -0x1c) = iVar13 + 2;
        *(code **)((int)puVar16 + -8) = *(code **)((int)puVar16 + -0x18);
        (**(code **)((int)puVar16 + -0x18))(uVar15,(int)DAT_8c073478);
      }
      iVar14 = *(int *)((int)puVar16 + -0x28) + 1;
      *(int *)((int)puVar16 + -0x28) = iVar14;
    } while (iVar14 < *(int *)(DAT_8c07336a + param_2));
  }
  iVar14 = *(int *)(*(int *)(DAT_8c07336c + param_2) + 0x68);
  uVar12 = 0;
  if (0 < *(int *)(DAT_8c07336e + param_2)) {
    do {
      iVar6 = *(int *)((int)DAT_8c073372 + *(int *)(DAT_8c073370 + param_2));
      if ((int)uVar12 < 0) {
        uVar9 = ~(~uVar12 + 1 & 7) + 1;
        uVar11 = uVar12 + 7;
      }
      else {
        uVar9 = uVar12 & 7;
        uVar11 = uVar12;
      }
      if (uVar9 == 0) {
        *(undefined1 *)(iVar14 + ((int)uVar11 >> 3)) = 0;
      }
      pbVar10 = (byte *)(iVar14 + ((int)uVar11 >> 3));
      bVar21 = (*(byte *)(iVar6 + uVar12 * 0x14 + 9) & 0x7f) == 0;
      iVar6 = (int)DAT_8c07336e;
      if ((int)uVar9 < 0) {
        bVar8 = (byte)((int)(uint)bVar21 >> (~uVar9 & 0x1f) + 1);
      }
      else {
        bVar8 = bVar21 << (uVar9 & 0x1f);
      }
      *pbVar10 = *pbVar10 | bVar8;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(iVar6 + param_2));
  }
  if ((*(byte *)(DAT_8c073374 + param_2) & 0x40) == 0) {
    iVar14 = *(int *)((int)DAT_8c07337c + *(int *)(DAT_8c073370 + param_2));
    uVar15 = (**(code **)(iVar14 + 0x74))
                       (*(int *)(DAT_8c073370 + param_2) + *(int *)(iVar14 + 0x6c));
  }
  else {
    uVar15 = 1;
  }
  return uVar15;
}

