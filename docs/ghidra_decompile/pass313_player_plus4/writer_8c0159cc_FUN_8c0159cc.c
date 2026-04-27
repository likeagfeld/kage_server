// entry: 8c0159cc
// name: FUN_8c0159cc


void FUN_8c0159cc(double param_1,int param_2,undefined2 *param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  ushort *puVar19;
  int iVar20;
  int iVar21;
  undefined8 in_dr2;
  double dVar22;
  undefined8 uVar23;
  float fVar25;
  double dVar24;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int local_8;
  
  iVar14 = (int)DAT_8c015b20;
  *(undefined2 **)(&stack0x00000000 + iVar14) = param_3;
  iVar11 = *(int *)(DAT_8c015b22 + param_2);
  *(undefined4 *)(&stack0x00000004 + iVar14) = param_4;
  iVar11 = *(int *)(DAT_8c015b24 + iVar11);
  uVar2 = *(ushort *)(param_2 + 0x54);
  bVar3 = *(byte *)(param_3 + 1);
  *(int *)(&stack0xfffffffc + iVar14) = param_2;
  iVar11 = iVar11 + (int)DAT_8c015b26 * (uint)uVar2;
  *(int *)(&stack0x00000008 + iVar14) = iVar11;
  if (((((bVar3 & 8) == 0) && ((*(byte *)((int)param_3 + 3) & 0x10) != 0)) ||
      (*(char *)(iVar11 + 0x18) == '\x03')) &&
     ((*(char *)(iVar11 + 0x18) != '\x04' && ((*(byte *)(iVar11 + 8) & 2) == 0)))) {
    iVar15 = *(int *)(DAT_8c015e0e + param_2);
    *(uint *)(&stack0x0000004c + iVar14) = (uint)uVar2;
    iVar11 = *(int *)(iVar15 + 0x28);
    iVar18 = *(int *)(iVar11 + 0x6c);
    pcVar13 = *(code **)(iVar11 + 0x74);
    *(code **)(&stack0x00000054 + iVar14) = pcVar13;
    *(code **)(&stack0x0000000c + iVar14) = pcVar13;
    iVar11 = (*pcVar13)(iVar15 + iVar18,*(undefined4 *)(&stack0x0000004c + iVar14),param_3);
    if (iVar11 != 0) {
      iVar15 = *(int *)(DAT_8c015e0e + param_2);
      iVar11 = *(int *)(iVar15 + 0x28);
      iVar18 = *(int *)(iVar11 + 0x78);
      *(undefined4 *)(&stack0x00000010 + iVar14) = *(undefined4 *)(iVar11 + 0x80);
      *(code **)(&stack0x00000058 + iVar14) = *(code **)(&stack0x00000010 + iVar14);
      (**(code **)(&stack0x00000010 + iVar14))(iVar15 + iVar18,param_2,param_3);
      if ((*(int *)(*(int *)(DAT_8c015e0e + param_2) + 0x24) == 1) &&
         (*(int *)(param_2 + 0x24) == 0)) {
        uVar9 = (*(code *)PTR_FUN_8c015e1c)(param_2);
        (*(code *)PTR_FUN_8c015e20)(uVar9);
        uVar9 = (*(code *)PTR_FUN_8c015e1c)(param_2);
        (*(code *)PTR_FUN_8c015e24)(uVar9);
      }
    }
  }
  if ((*(byte *)(param_3 + 1) & 8) == 0) {
    if (((*(byte *)((int)param_3 + 3) & 0x80) == 0) && ((*(byte *)((int)param_3 + 3) & 0x10) != 0))
    {
      iVar11 = *(int *)(DAT_8c015b28 + param_2);
      uVar12 = (uint)*(ushort *)(param_2 + 0x54);
      *(uint *)(&stack0x00000018 + iVar14) = uVar12;
      iVar11 = iVar11 + DAT_8c015b2a;
      *(int *)(&stack0x00000014 + iVar14) = iVar11;
      *(undefined4 *)(&stack0x0000001c + iVar14) = 4;
      if (((*(short *)(iVar11 + uVar12 * 0x1e + 8) != 0) ||
          ((*(short *)(*(int *)(&stack0x00000014 + iVar14) + (int)DAT_8c015b2c + uVar12 * 0x1e + 8)
            != 0 || (*(short *)(*(int *)(&stack0x00000014 + iVar14) + (int)DAT_8c015b2e +
                                uVar12 * 0x1e + 8) != 0)))) &&
         (*(char *)(*(int *)(&stack0x00000008 + iVar14) + 0x18) != '\x03')) {
        *(undefined **)(&stack0x00000020 + iVar14) = PTR_FUN_8c016274;
        uVar9 = (*(code *)PTR_FUN_8c016274)();
        *(undefined4 *)(&stack0x0000004c + iVar14) = uVar9;
        uVar9 = (**(code **)(&stack0x00000020 + iVar14))();
        iVar11 = (*(code *)PTR_FUN_8c016278)
                           (*(undefined4 *)(DAT_8c016262 + param_2),
                            *(undefined4 *)(&stack0x0000004c + iVar14),uVar9);
        *(int *)(&stack0x00000024 + iVar14) = iVar11;
        if (iVar11 != 0) {
          *(int *)(&stack0x00000028 + iVar14) = iVar11 + 8;
          *(code **)(&stack0x0000005c + iVar14) = *(code **)(&stack0x00000020 + iVar14);
          iVar11 = (**(code **)(&stack0x00000020 + iVar14))();
          uVar9 = SUB84(param_1,0);
          if (iVar11 == 2) {
            (*(code *)PTR_FUN_8c01627c)
                      (*(undefined4 *)(DAT_8c016262 + param_2),
                       *(undefined2 *)(*(int *)(&stack0x00000024 + iVar14) + 4));
            puVar5 = PTR___bfswu_8c016280;
            *(byte *)(*(int *)(&stack0x00000024 + iVar14) + 9) =
                 *(byte *)(*(int *)(&stack0x00000024 + iVar14) + 9) & 0xf | 0x50;
            (*(code *)puVar5)((int)*(short *)(param_2 + 0x54));
            iVar11 = (*(code *)PTR__rand_8c016284)();
            if (in_FPSCR_PR == '\0') {
              param_1 = (double)CONCAT44((float)iVar11,uVar9);
            }
            else {
              param_1 = (double)iVar11;
            }
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),DAT_8c016288);
            }
            if (in_FPSCR_PR == '\0') {
              param_1 = (double)CONCAT44((float)((ulonglong)param_1 >> 0x20) / SUB84(param_1,0),
                                         SUB84(param_1,0));
            }
            else {
              param_1 = param_1 / param_1;
            }
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),DAT_8c01628c);
            }
            if (in_FPSCR_PR == '\0') {
              fVar25 = (float)((ulonglong)param_1 >> 0x20) * SUB84(param_1,0);
              param_1 = (double)CONCAT44(fVar25,SUB84(param_1,0));
              iVar11 = (int)fVar25;
            }
            else {
              param_1 = param_1 * param_1;
              iVar11 = (int)param_1;
            }
            (*(code *)PTR___bfswu_8c016280)(iVar11 + 1);
            pcVar17 = PTR_DAT_8c016290 + DAT_8c016268;
            cVar1 = *pcVar17;
            *(char **)(&stack0x0000002c + iVar14) = pcVar17;
            if (cVar1 == '\0') {
              *(undefined4 *)(&stack0x00000030 + iVar14) = *DAT_8c016294;
            }
            else {
              *(undefined4 *)(&stack0x00000030 + iVar14) = *DAT_8c0162a0;
            }
            (*(code *)PTR_FUN_8c016298)(pcVar17[1]);
            (*(code *)PTR_FUN_8c01629c)
                      (*(undefined4 *)(&stack0x00000030 + iVar14),
                       *(undefined1 *)(*(int *)(&stack0x0000002c + iVar14) + 2),
                       *(undefined1 *)(*(int *)(&stack0x0000002c + iVar14) + 3),0);
            *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 8;
          }
        }
      }
    }
  }
  else {
    iVar11 = (*(code *)PTR_FUN_8c015fc4)
                       (*(undefined4 *)(DAT_8c015fae + param_2),*(undefined2 *)(param_2 + 0x54),5);
    uVar9 = SUB84(param_1,0);
    if (iVar11 != 0) {
      *(undefined2 **)(&stack0x00000034 + iVar14) = (undefined2 *)(iVar11 + 2);
      *(undefined2 *)(iVar11 + 2) = *(undefined2 *)(*(int *)(&stack0x00000008 + iVar14) + 2);
      uVar10 = DAT_8c015fc8;
      if ((*(byte *)((int)param_3 + 3) & 0x10) == 0) {
        *(uint *)(&stack0x00000038 + iVar14) =
             *(int *)((int)DAT_8c015fb2 + *(int *)(DAT_8c015fae + param_2)) +
             (int)DAT_8c015fb0 * (uint)*(ushort *)(param_2 + 0x54);
        *(byte *)(iVar11 + 0x11) = *(byte *)(iVar11 + 0x11) & (byte)DAT_8c015fb4;
        *(ushort *)(iVar11 + 0x10) = *(ushort *)(iVar11 + 0x10) & (ushort)uVar10 | DAT_8c015fb6;
        *(byte *)(iVar11 + 0x11) = *(byte *)(iVar11 + 0x11) & 0xf;
        bVar3 = *(byte *)(DAT_8c015fb8 + param_2);
        if ((bVar3 & 1) == 0) {
          if ((bVar3 & 2) == 0) {
            if ((bVar3 & 4) == 0) {
              if ((bVar3 & 8) != 0) {
                *(byte *)(iVar11 + 0x11) = *(byte *)(iVar11 + 0x11) & 0xf | (byte)DAT_8c015fba;
              }
            }
            else {
              *(byte *)(iVar11 + 0x11) = *(byte *)(iVar11 + 0x11) & 0xf | 0x40;
            }
          }
          else {
            *(byte *)(iVar11 + 0x11) = *(byte *)(iVar11 + 0x11) & 0xf | 0x20;
          }
        }
        else {
          *(byte *)(iVar11 + 0x11) = *(byte *)(iVar11 + 0x11) & 0xf | 0x10;
        }
        *(int *)(&stack0x0000003c + iVar14) = iVar11 + 0x10;
        *(undefined **)(&stack0x00000020 + iVar14) = PTR_FUN_8c015fcc;
        *(undefined **)(&stack0x00000060 + iVar14) = PTR_FUN_8c015fcc;
        uVar10 = (*(code *)PTR_FUN_8c015fcc)();
        *(undefined4 *)(&stack0x00000050 + iVar14) = uVar10;
        *(code **)(&stack0x00000064 + iVar14) = *(code **)(&stack0x00000020 + iVar14);
        uVar6 = (**(code **)(&stack0x00000020 + iVar14))();
        uVar7 = (*(code *)PTR_FUN_8c015fd0)
                          (*(undefined4 *)(DAT_8c015fae + param_2),
                           *(undefined4 *)(&stack0x00000050 + iVar14),uVar6,
                           *(undefined4 *)(&stack0x00000034 + iVar14));
        (*(code *)PTR___bfswu_8c015fd4)(uVar7);
        *(code **)(&stack0x00000068 + iVar14) = *(code **)(&stack0x00000020 + iVar14);
        uVar10 = (**(code **)(&stack0x00000020 + iVar14))();
        *(undefined4 *)(&stack0x00000050 + iVar14) = uVar10;
        *(code **)(&stack0x0000006c + iVar14) = *(code **)(&stack0x00000020 + iVar14);
        uVar10 = (**(code **)(&stack0x00000020 + iVar14))();
        uVar8 = *(undefined4 *)(DAT_8c015fae + param_2);
        *(int *)((int)&local_8 + iVar14) = *(int *)(&stack0x00000038 + iVar14) + 2;
        (*(code *)PTR_FUN_8c015fd8)
                  (0,uVar8,iVar11,*(undefined4 *)(&stack0x00000050 + iVar14),uVar10);
        *(undefined **)(&stack0x00000040 + iVar14) = PTR_DAT_8c015fdc;
        cVar1 = PTR_DAT_8c015fdc[0x14];
        *(undefined **)(&stack0x00000044 + iVar14) = PTR_DAT_8c015fdc + 0x14;
        if (cVar1 == '\0') {
          *(undefined4 *)(&stack0x00000048 + iVar14) = *DAT_8c015fe0;
        }
        else {
          *(undefined4 *)(&stack0x00000048 + iVar14) = *DAT_8c0160e4;
        }
        (*(code *)PTR_FUN_8c015fe4)(PTR_DAT_8c015fdc[0x15]);
        (*(code *)PTR_FUN_8c015fe8)
                  (*(undefined4 *)(&stack0x00000048 + iVar14),
                   *(undefined1 *)(*(int *)(&stack0x00000044 + iVar14) + 2),
                   *(undefined1 *)(*(int *)(&stack0x00000044 + iVar14) + 3),0);
        iVar11 = (uint)*(ushort *)(param_2 + 0x54) * 0x54;
        if (-1 < *(int *)(*(int *)((int)DAT_8c015fc0 + *(int *)(DAT_8c015fbe + param_2)) + iVar11 +
                         0x48)) {
          pcVar17 = (char *)(*(int *)(&stack0x00000040 + iVar14) +
                            *(int *)(*(int *)((int)DAT_8c0160ba + *(int *)(DAT_8c015fbe + param_2))
                                     + iVar11 + 0x48) * 4);
          cVar1 = *pcVar17;
          *(char **)(&stack0x00000040 + iVar14) = pcVar17;
          if (cVar1 == '\0') {
            *(undefined4 *)(&stack0x00000048 + iVar14) = *DAT_8c0160c8;
          }
          else {
            *(undefined4 *)(&stack0x00000048 + iVar14) = *DAT_8c0160e4;
          }
          (*(code *)PTR_FUN_8c0160cc)(*(undefined1 *)(*(int *)(&stack0x00000040 + iVar14) + 1));
          (*(code *)PTR_FUN_8c0160d0)
                    (*(undefined4 *)(&stack0x00000048 + iVar14),
                     *(undefined1 *)(*(int *)(&stack0x00000040 + iVar14) + 2),
                     *(undefined1 *)(*(int *)(&stack0x00000040 + iVar14) + 3),0);
        }
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(*(undefined4 *)(DAT_8c0160bc + param_2),uVar9);
        }
        else {
          param_1 = *(double *)(DAT_8c0160bc + param_2);
        }
        iVar11 = (int)DAT_8c0160c0;
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | (int)DAT_8c0160be;
        puVar5 = PTR_FUN_8c0160d4;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(iVar11 + param_2) = (int)((ulonglong)param_1 >> 0x20);
        }
        else {
          *(double *)(iVar11 + param_2) = param_1;
        }
        (*(code *)puVar5)(0,param_2 + 0x10,7);
        *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) & 0xf7;
        if ((*(int *)(*(int *)(DAT_8c0160c2 + param_2) + 0x24) == 1) &&
           (*(int *)(param_2 + 0x24) == 0)) {
          uVar9 = (*(code *)PTR_FUN_8c0160d8)(param_2);
          (*(code *)PTR_FUN_8c0160dc)(uVar9);
        }
      }
      else {
        (*(code *)PTR_FUN_8c0160e0)
                  (param_2,*(int *)((int)DAT_8c0160c4 + *(int *)(DAT_8c0160c2 + param_2)) + 0x88,
                   iVar11 + 100);
        **(undefined2 **)(&stack0x00000034 + iVar14) = *param_3;
      }
    }
  }
  puVar5 = PTR_FUN_8c015b34;
  uVar10 = (undefined4)in_dr2;
  uVar9 = SUB84(param_1,0);
  if (((*(byte *)((int)param_3 + 3) & 0x20) != 0) &&
     ((*(byte *)(*(int *)(&stack0x00000004 + iVar14) + 3) & 0x20) != 0)) {
    iVar11 = *(int *)(DAT_8c015b28 + param_2) + (int)DAT_8c015b2a;
    uVar12 = (uint)*(ushort *)(param_2 + 0x54);
    *(uint *)(&stack0x00000018 + iVar14) = uVar12;
    *(undefined4 *)(&stack0x0000001c + iVar14) = 3;
    *(int *)(&stack0x00000014 + iVar14) = iVar11;
    if ((*(short *)(iVar11 + uVar12 * 0x1e + 6) != 0) ||
       ((*(short *)(iVar11 + DAT_8c015b2c + uVar12 * 0x1e + 6) != 0 ||
        (*(short *)(*(int *)(&stack0x0000001c + iVar14) * 2 +
                   *(int *)(&stack0x00000014 + iVar14) + (int)DAT_8c01667c +
                   *(int *)(&stack0x00000018 + iVar14) * 0x1e) != 0)))) {
      bVar4 = false;
      iVar11 = *(int *)((int)DAT_8c015b22 + *(int *)(&stack0xfffffffc + iVar14));
      iVar15 = 0;
      if (0 < *(int *)(iVar11 + 0x28)) {
        do {
          iVar20 = *(int *)(DAT_8c015c98 + iVar11) + iVar15 * 0x88;
          iVar18 = (*(code *)puVar5)();
          if ((iVar18 == 4) &&
             (uVar12 = (*(code *)puVar5)(), uVar7 = DAT_8c01626a,
             uVar12 == *(ushort *)(*(int *)(&stack0xfffffffc + iVar14) + 0x54))) {
            iVar11 = *(int *)(&stack0xfffffffc + iVar14);
            *(byte *)(iVar20 + 9) = *(byte *)(iVar20 + 9) & 0xf | 0x20;
            *(byte *)(iVar20 + 2) =
                 (*(byte *)(iVar20 + 2) & (byte)uVar7 | 0x10) & (byte)DAT_8c01626c | 8;
            bVar4 = true;
            (*(code *)PTR_FUN_8c0162a4)
                      (*(undefined4 *)(*(int *)(DAT_8c016262 + iVar11) + 8),iVar20 + 2,iVar20 + 100,
                       iVar20 + 0x6c);
            iVar11 = *(int *)(DAT_8c016262 + iVar11);
          }
          uVar10 = (undefined4)in_dr2;
          uVar9 = SUB84(param_1,0);
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(iVar11 + 0x28));
      }
      if (((bVar4) &&
          (*(int *)(*(int *)((int)DAT_8c015c9a + *(int *)(&stack0xfffffffc + iVar14)) + 0x24) == 1))
         && (*(int *)(*(int *)(&stack0xfffffffc + iVar14) + 0x24) == 0)) {
        uVar8 = (*(code *)PTR_FUN_8c0162a8)(*(undefined4 *)(&stack0xfffffffc + iVar14));
        (*(code *)PTR_FUN_8c0162ac)(uVar8);
      }
    }
  }
  puVar5 = PTR_FUN_8c015cb0;
  iVar11 = *(int *)(&stack0x00000000 + iVar14);
  if (((*(byte *)(iVar11 + 3) & 0x40) != 0) && ((*(byte *)(iVar11 + 2) & 8) == 0)) {
    iVar18 = *(int *)(&stack0xfffffffc + iVar14);
    *(undefined4 *)((int)&local_8 + DAT_8c015c9c + iVar14) = 0;
    iVar15 = *(int *)(DAT_8c015c9a + iVar18) + (int)DAT_8c015c9e;
    uVar12 = (uint)*(ushort *)(iVar18 + 0x54);
    if ((*(short *)(iVar15 + uVar12 * 0x1e + 10) != 0) ||
       ((*(short *)(iVar15 + DAT_8c015ca0 + uVar12 * 0x1e + 10) != 0 ||
        (*(short *)(iVar15 + DAT_8c015ca2 + uVar12 * 0x1e + 10) != 0)))) {
      uVar8 = (*(code *)PTR_FUN_8c015cb0)();
      *(undefined4 *)(&stack0x00000070 + iVar14) = uVar8;
      iVar15 = (*(code *)puVar5)();
      cVar1 = *(char *)(DAT_8c015ca6 + iVar18);
      uVar8 = *(undefined4 *)(DAT_8c015ca8 + iVar18);
      if (cVar1 == '\x01') {
        *(undefined4 *)((int)&local_8 + DAT_8c01626e + iVar14) = 0xffffffff;
        *(undefined4 *)((int)&local_8 + DAT_8c016270 + iVar14) = 0;
      }
      else if (cVar1 == '\x02') {
        *(undefined4 *)((int)&local_8 + DAT_8c01626e + iVar14) = 1;
        *(undefined4 *)((int)&local_8 + DAT_8c016270 + iVar14) = 0;
      }
      else if (cVar1 == '\x04') {
        *(undefined4 *)((int)&local_8 + DAT_8c01626e + iVar14) = 0;
        *(undefined4 *)((int)&local_8 + DAT_8c016270 + iVar14) = 0xffffffff;
      }
      else if (cVar1 == '\b') {
        *(undefined4 *)((int)&local_8 + DAT_8c015caa + iVar14) = 0;
        *(undefined4 *)((int)&local_8 + DAT_8c015cac + iVar14) = 1;
      }
      *(int *)(&stack0x00000070 + iVar14) =
           *(int *)(&stack0x00000070 + iVar14) + *(int *)((int)&local_8 + DAT_8c015caa + iVar14);
      *(int *)(&stack0x00000074 + iVar14) = iVar15 + *(int *)((int)&local_8 + DAT_8c015cac + iVar14)
      ;
      iVar15 = (*(code *)PTR_FUN_8c015cb4)(uVar8);
      if (iVar15 != 0) {
        iVar20 = (*(code *)puVar5)(4);
        uVar8 = DAT_8c015e14;
        uVar2 = DAT_8c015e02;
        if (iVar20 == 2) {
          *(byte *)(iVar15 + 0x11) = *(byte *)(iVar15 + 0x11) & (byte)DAT_8c015e00;
          *(ushort *)(iVar15 + 0x10) = *(ushort *)(iVar15 + 0x10) & (ushort)uVar8 | uVar2;
          iVar20 = (*(code *)puVar5)(6);
          iVar16 = *(int *)(&stack0x00000070 + iVar14);
          *(int *)((int)&local_8 + DAT_8c015e04 + iVar14) = iVar16 - iVar20;
          iVar21 = (*(code *)puVar5)();
          iVar21 = *(int *)(&stack0x00000074 + iVar14) - iVar21;
          *(int *)((int)&local_8 + DAT_8c015e06 + iVar14) = iVar21;
          *(byte *)(iVar15 + 0x11) = *(byte *)(iVar15 + 0x11) & 0xf;
          if (iVar16 - iVar20 < 0) {
            *(byte *)(iVar15 + 0x11) = *(byte *)(iVar15 + 0x11) & 0xf | 0x10;
          }
          else if (*(int *)((int)&local_8 + DAT_8c015e04 + iVar14) < 1) {
            if (iVar21 < 0) {
              *(byte *)(iVar15 + 0x11) = *(byte *)(iVar15 + 0x11) & 0xf | 0x40;
            }
            else if (0 < iVar21) {
              *(byte *)(iVar15 + 0x11) = *(byte *)(iVar15 + 0x11) & 0xf | (byte)DAT_8c01637c;
            }
          }
          else {
            *(byte *)(iVar15 + 0x11) = *(byte *)(iVar15 + 0x11) & 0xf | 0x20;
          }
          iVar20 = (*(code *)puVar5)();
          if (iVar20 != 0) {
            (*(code *)PTR_FUN_8c016388)(*(undefined4 *)(DAT_8c01637e + iVar18),iVar15);
            uVar8 = (*(code *)puVar5)();
            *(undefined4 *)((int)&local_8 + DAT_8c016382 + iVar14) = uVar8;
            uVar6 = (*(code *)puVar5)();
            (*(code *)PTR_FUN_8c01638c)
                      (*(undefined4 *)(DAT_8c01637e + iVar18),
                       *(undefined4 *)((int)&local_8 + DAT_8c016382 + iVar14),uVar6,iVar15 + 2);
            (*(code *)PTR___bfswu_8c016390)();
            iVar20 = (*(code *)PTR__rand_8c016394)();
            if (in_FPSCR_PR == '\0') {
              dVar24 = (double)CONCAT44((float)iVar20,uVar9);
            }
            else {
              dVar24 = (double)iVar20;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar22 = (double)CONCAT44(DAT_8c016398,uVar10);
            }
            else {
              dVar22 = (double)CONCAT44(DAT_8c01639c,DAT_8c016398);
            }
            if (in_FPSCR_PR == '\0') {
              dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) /
                                        (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 / dVar22;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar22 = (double)CONCAT44(DAT_8c01639c,SUB84(dVar22,0));
            }
            else {
              dVar22 = (double)CONCAT44(PTR_FUN_8c0163a0,DAT_8c01639c);
            }
            if (in_FPSCR_PR == '\0') {
              uVar9 = SUB84(dVar24,0);
            }
            else {
              uVar9 = SUB84(dVar24 * dVar22,0);
            }
            (*(code *)PTR___bfswu_8c016390)();
            uVar10 = (*(code *)puVar5)();
            *(undefined4 *)(&stack0x0000004c + iVar14) = uVar10;
            uVar10 = (*(code *)puVar5)();
            uVar8 = *(undefined4 *)(DAT_8c01637e + iVar18);
            *(undefined4 *)((int)&local_8 + iVar14) = 0;
            (*(code *)PTR_FUN_8c0163a0)
                      (0,uVar8,iVar15,*(undefined4 *)(&stack0x0000004c + iVar14),uVar10);
          }
          if (in_FPSCR_SZ == '\0') {
            uVar23 = CONCAT44(*(undefined4 *)(DAT_8c015e08 + iVar18),uVar9);
          }
          else {
            uVar23 = *(undefined8 *)(DAT_8c015e08 + iVar18);
          }
          iVar15 = (int)DAT_8c015e0c;
          *(uint *)(iVar18 + 0x2c) = *(uint *)(iVar18 + 0x2c) | (int)DAT_8c015e0a;
          puVar5 = PTR_FUN_8c015e18;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(iVar15 + iVar18) = (int)((ulonglong)uVar23 >> 0x20);
          }
          else {
            *(undefined8 *)(iVar15 + iVar18) = uVar23;
          }
          (*(code *)puVar5)(0,iVar18 + 0x10,6);
          *(byte *)(iVar11 + 2) = *(byte *)(iVar11 + 2) | 0x40;
        }
        *(undefined4 *)((int)&local_8 + DAT_8c015e0a + iVar14) = 1;
        if (*(int *)(*(int *)(DAT_8c015e0e + iVar18) + 0x24) != 1) {
          return;
        }
        if (*(int *)(iVar18 + 0x24) != 0) {
          return;
        }
        uVar9 = (*(code *)PTR_FUN_8c0163a4)(iVar18);
        (*(code *)PTR_FUN_8c0163a8)(uVar9);
        return;
      }
    }
    puVar5 = PTR_FUN_8c016518;
    iVar11 = *(int *)(DAT_8c016678 + iVar18) + (int)DAT_8c01667e;
    uVar12 = (uint)*(ushort *)(iVar18 + 0x54);
    if (((*(short *)(iVar11 + uVar12 * 0x1e + 0xc) != 0) ||
        (*(short *)(iVar11 + DAT_8c01667a + uVar12 * 0x1e + 0xc) != 0)) ||
       (*(short *)(iVar11 + DAT_8c01667c + uVar12 * 0x1e + 0xc) != 0)) {
      uVar9 = (*(code *)PTR_FUN_8c016518)();
      uVar10 = (*(code *)puVar5)();
      iVar11 = (*(code *)PTR_FUN_8c01651c)
                         (*(undefined4 *)(DAT_8c016504 + iVar18),uVar9,uVar10,uVar12);
      if (iVar11 != 0) {
        uVar9 = (*(code *)puVar5)();
        *(undefined4 *)(&stack0x00000070 + iVar14) = uVar9;
        uVar9 = (*(code *)puVar5)();
        *(undefined4 *)(&stack0x00000074 + iVar14) = uVar9;
        *(undefined4 *)((int)&local_8 + DAT_8c016506 + iVar14) = 0;
        *(undefined4 *)((int)&local_8 + DAT_8c016508 + iVar14) = 0;
        cVar1 = *(char *)(DAT_8c01650a + iVar18);
        if (cVar1 == '\x01') {
          *(undefined4 *)((int)&local_8 + DAT_8c016508 + iVar14) = 0xffffffff;
          *(undefined4 *)((int)&local_8 + DAT_8c016506 + iVar14) = 0;
        }
        else if (cVar1 == '\x02') {
          *(undefined4 *)((int)&local_8 + DAT_8c016508 + iVar14) = 1;
          *(undefined4 *)((int)&local_8 + DAT_8c016506 + iVar14) = 0;
        }
        else if (cVar1 == '\x04') {
          *(undefined4 *)((int)&local_8 + DAT_8c016508 + iVar14) = 0;
          *(undefined4 *)((int)&local_8 + DAT_8c016506 + iVar14) = 0xffffffff;
        }
        else if (cVar1 == '\b') {
          *(undefined4 *)((int)&local_8 + DAT_8c016508 + iVar14) = 0;
          *(undefined4 *)((int)&local_8 + DAT_8c016506 + iVar14) = 1;
        }
        uVar9 = (*(code *)puVar5)();
        *(undefined4 *)((int)&local_8 + DAT_8c01650c + iVar14) = uVar9;
        uVar9 = (*(code *)puVar5)();
        *(undefined4 *)((int)&local_8 + DAT_8c01650e + iVar14) = uVar9;
        *(undefined4 *)((int)&local_8 + DAT_8c016510 + iVar14) = 1;
LAB_8c01643e:
        do {
          puVar5 = PTR___bfswu_8c016520;
          iVar11 = *(int *)((int)&local_8 + DAT_8c016510 + iVar14);
          iVar21 = *(int *)(&stack0x00000070 + iVar14);
          iVar18 = *(int *)((int)&local_8 + DAT_8c016508 + iVar14);
          iVar20 = *(int *)(&stack0x00000074 + iVar14);
          uVar9 = *(undefined4 *)(&stack0x00000000 + iVar14);
          iVar15 = *(int *)((int)&local_8 + DAT_8c016506 + iVar14);
          do {
            if (iVar11 == 0) {
              *(int *)(&stack0x00000074 + iVar14) = iVar20;
              *(int *)(&stack0x00000070 + iVar14) = iVar21;
              *(undefined4 *)((int)&local_8 + DAT_8c016672 + iVar14) = 0;
              (*(code *)puVar5)(*(undefined4 *)((int)&local_8 + DAT_8c016674 + iVar14));
              (*(code *)puVar5)(*(undefined4 *)((int)&local_8 + DAT_8c016676 + iVar14));
              if (*(int *)(*(int *)((int)DAT_8c016678 + *(int *)(&stack0xfffffffc + iVar14)) + 0x24)
                  != 1) {
                return;
              }
              if (*(int *)(*(int *)(&stack0xfffffffc + iVar14) + 0x24) != 0) {
                return;
              }
              uVar9 = (*(code *)PTR_FUN_8c016680)(*(undefined4 *)(&stack0xfffffffc + iVar14));
              (*(code *)PTR_FUN_8c016684)(uVar9);
              return;
            }
            iVar21 = iVar21 + iVar18;
            iVar20 = iVar20 + iVar15;
            (*(code *)puVar5)();
            (*(code *)puVar5)();
            iVar16 = *(int *)((int)DAT_8c016512 + *(int *)(&stack0xfffffffc + iVar14));
            iVar11 = *(int *)(iVar16 + 0x28);
            iVar16 = (**(code **)(iVar11 + 0x74))
                               (iVar16 + *(int *)(iVar11 + 0x6c),
                                *(undefined2 *)(*(int *)(&stack0xfffffffc + iVar14) + 0x54),uVar9);
            iVar11 = 0;
          } while (iVar16 == 0);
          *(int *)(&stack0x00000074 + iVar14) = iVar20;
          *(int *)(&stack0x00000070 + iVar14) = iVar21;
          *(int *)((int)&local_8 + DAT_8c016510 + iVar14) = iVar16;
          iVar15 = 8;
          iVar11 = (int)DAT_8c016516;
          puVar19 = *(ushort **)
                     ((int)DAT_8c016514 +
                     *(int *)((int)DAT_8c016504 + *(int *)(&stack0xfffffffc + iVar14)));
          do {
            puVar5 = PTR_FUN_8c016688;
            if ((((*(byte *)((int)puVar19 + 0xb) & 1) == 0) && ((puVar19[4] & 0x14) == 0)) &&
               (((*puVar19 & 1) != 0 &&
                ((iVar18 = (*(code *)PTR_FUN_8c016688)(),
                 iVar18 == *(int *)(&stack0x00000070 + iVar14) &&
                 (iVar18 = (*(code *)puVar5)(), iVar18 == *(int *)(&stack0x00000074 + iVar14)))))))
            {
              *(undefined4 *)((int)&local_8 + DAT_8c016672 + iVar14) = 0;
              goto LAB_8c01643e;
            }
            iVar15 = iVar15 + -1;
            puVar19 = (ushort *)((int)puVar19 + iVar11);
          } while (iVar15 != 0);
          iVar11 = *(int *)(*(int *)((int)DAT_8c016512 + *(int *)(&stack0xfffffffc + iVar14)) + 0x28
                           );
          (**(code **)(iVar11 + 0x80))
                    (*(int *)((int)DAT_8c016512 + *(int *)(&stack0xfffffffc + iVar14)) +
                     *(int *)(iVar11 + 0x78),*(undefined4 *)(&stack0x00000000 + iVar14));
        } while( true );
      }
    }
  }
  return;
}

