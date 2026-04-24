// entry: 8c088ecc
// name: FUN_8c088ecc
// signature: undefined FUN_8c088ecc(void)


void FUN_8c088ecc(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  undefined2 *puVar14;
  code *pcVar15;
  int iVar16;
  uint local_20;
  
  puVar3 = PTR_FUN_8c089034;
  iVar11 = (int)DAT_8c089028;
  uVar4 = *(ushort *)(param_2 + 0x3e);
  *(int *)((int)&local_20 + iVar11) = param_2 + 0x3c;
  puVar14 = (undefined2 *)(param_2 + 0x40 + (uint)uVar4 * 4);
  *(ushort *)(&stack0xffffffe4 + iVar11) = uVar4;
  *(int *)(&stack0xffffffe8 + iVar11) = param_2 + 0x40;
  if (uVar4 == 0) {
    pbVar12 = (byte *)0x0;
  }
  else {
    pbVar12 = (byte *)(*(int *)(&stack0xffffffe8 + iVar11) +
                      (*(ushort *)(&stack0xffffffe4 + iVar11) - 1) * 4);
  }
  if (*(ushort *)(&stack0xffffffe4 + iVar11) < 2) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(&stack0xffffffe8 + iVar11) + (*(ushort *)(&stack0xffffffe4 + iVar11) - 2) * 4;
  }
  if ((uint)*(ushort *)(&stack0xffffffe4 + iVar11) != (int)DAT_8c08902a) {
    if (*(short *)(&stack0xffffffe4 + iVar11) != 0) {
      iVar5 = (*(code *)PTR_FUN_8c089034)();
      iVar6 = (*(code *)puVar3)();
      if (iVar5 == iVar6) {
        uVar7 = (*(code *)puVar3)();
        *(undefined4 *)(&stack0xffffffec + iVar11) = uVar7;
        iVar5 = (*(code *)puVar3)();
        if (*(int *)(&stack0xffffffec + iVar11) == iVar5) {
          *(undefined **)(&stack0x0000001c + iVar11) = PTR_FUN_8c089214;
          (*(code *)PTR_FUN_8c089214)();
          (**(code **)(&stack0x0000001c + iVar11))();
          return;
        }
      }
    }
    *(undefined **)(&stack0x00000048 + iVar11) = PTR_FUN_8c089034;
    if (iVar13 != 0) {
      pcVar15 = *(code **)(&stack0x00000048 + iVar11);
      uVar7 = (*pcVar15)();
      *(undefined4 *)(&stack0xfffffff0 + iVar11) = uVar7;
      iVar13 = (*pcVar15)();
      if (*(int *)(&stack0xfffffff0 + iVar11) == iVar13) {
        pcVar15 = *(code **)(&stack0x00000048 + iVar11);
        uVar7 = (*pcVar15)();
        *(undefined4 *)(&stack0xfffffff4 + iVar11) = uVar7;
        iVar13 = (*pcVar15)();
        if (*(int *)(&stack0xfffffff4 + iVar11) == iVar13) {
          pcVar15 = *(code **)(&stack0x00000048 + iVar11);
          uVar7 = (*pcVar15)();
          *(undefined4 *)(&stack0xfffffff8 + iVar11) = uVar7;
          iVar13 = (*pcVar15)();
          if ((*(int *)(&stack0xfffffff8 + iVar11) == iVar13) && ((pbVar12[2] & 1) == 0)) {
            bVar1 = *param_3;
            *(undefined **)(&stack0x0000001c + iVar11) = PTR_FUN_8c0893ac;
            (*(code *)PTR_FUN_8c0893ac)(-(((bVar1 & 0x10) == 0) - 1));
            (**(code **)(&stack0x0000001c + iVar11))(*param_3 & 0xf);
            iVar13 = *(int *)((int)&local_20 + iVar11);
            *(short *)(iVar13 + 2) = *(short *)(&stack0xffffffe4 + iVar11) + -1;
            uVar4 = *(ushort *)(iVar13 + 2);
            *(ushort *)(&stack0x00000034 + iVar11) = uVar4;
            if (uVar4 < 2) {
              *(undefined1 *)(*(int *)(&stack0xffffffe8 + iVar11) + 3) = 0;
              return;
            }
            iVar13 = 1;
            if (1 < (int)(*(ushort *)(&stack0x00000034 + iVar11) - 2)) {
              *(uint *)(&stack0x0000004c + iVar11) = *(ushort *)(&stack0x00000034 + iVar11) - 2;
              *(int *)(&stack0x00000038 + iVar11) = *(int *)(&stack0xffffffe8 + iVar11) + 3;
              do {
                iVar5 = 1;
                if (-1 < iVar13 + -1) {
                  *(uint *)(&stack0x00000054 + iVar11) = *(ushort *)(&stack0x00000034 + iVar11) - 1;
                  *(int *)(&stack0x0000003c + iVar11) = iVar13 << 2;
                  do {
                    *(int *)(&stack0x00000018 + iVar11) = iVar13 + iVar5;
                    if (*(int *)(&stack0x00000054 + iVar11) <= iVar13 + iVar5) goto LAB_8c089376;
                    uVar9 = iVar13 - iVar5;
                    if ((*(byte *)(iVar5 * -4 + *(int *)(&stack0x0000003c + iVar11) +
                                  *(int *)(&stack0xffffffe8 + iVar11) + 2) & 2) != 0) {
                      *(uint *)(&stack0x00000058 + iVar11) = uVar9 * 4;
                      uVar10 = uVar9;
LAB_8c089598:
                      iVar13 = *(int *)(&stack0x00000038 + iVar11);
                      *(uint *)((int)&local_20 + DAT_8c0895b8 + iVar11) = uVar10;
                      *(undefined1 *)(*(int *)(&stack0x00000058 + iVar11) + iVar13) = 0;
                      goto LAB_8c089376;
                    }
                    iVar6 = *(int *)(&stack0x0000003c + iVar11) + iVar5 * 4;
                    *(int *)(&stack0x00000040 + iVar11) = iVar6;
                    bVar1 = *(byte *)(iVar6 + *(int *)(&stack0xffffffe8 + iVar11) + 2);
                    uVar10 = (uint)bVar1;
                    if ((bVar1 & 2) != 0) {
                      *(uint *)(&stack0x00000058 + iVar11) = uVar9 * 4;
                      goto LAB_8c089598;
                    }
                    iVar6 = *(int *)(&stack0xffffffe8 + iVar11);
                    *(uint *)(&stack0x00000058 + iVar11) = uVar9 * 4;
                    pcVar15 = *(code **)(&stack0x00000048 + iVar11);
                    uVar7 = (*pcVar15)();
                    *(undefined4 *)(&stack0x0000005c + iVar11) = uVar7;
                    *(int *)(&stack0x00000044 + iVar11) =
                         iVar6 + *(int *)(&stack0x00000040 + iVar11);
                    uVar10 = (*pcVar15)(iVar6 + *(int *)(&stack0x00000040 + iVar11));
                    if (*(uint *)(&stack0x0000005c + iVar11) != uVar10) goto LAB_8c089598;
                    uVar7 = (**(code **)(&stack0x00000048 + iVar11))();
                    *(undefined4 *)((int)&local_20 + DAT_8c0893aa + iVar11) = uVar7;
                    uVar10 = (**(code **)(&stack0x00000048 + iVar11))
                                       (*(undefined4 *)(&stack0x00000044 + iVar11));
                    if (*(uint *)((int)&local_20 + DAT_8c0893aa + iVar11) != uVar10)
                    goto LAB_8c089598;
                    cVar2 = (char)iVar5;
                    iVar5 = iVar5 + 1;
                    *(char *)(*(int *)(&stack0x00000058 + iVar11) +
                             *(int *)(&stack0xffffffe8 + iVar11) + 3) = cVar2 * '\x02' + '\x01';
                  } while (iVar5 <= iVar13);
                }
                *(int *)(&stack0x00000018 + iVar11) = iVar13 + iVar5;
LAB_8c089376:
                iVar13 = *(int *)(&stack0x00000018 + iVar11);
              } while (iVar13 < *(int *)(&stack0x0000004c + iVar11));
            }
            iVar13 = *(int *)(&stack0xffffffe8 + iVar11);
            *(undefined1 *)((uint)*(ushort *)(&stack0x00000034 + iVar11) * 4 + iVar13 + -1) = 0;
            *(undefined1 *)((uint)*(ushort *)(&stack0x00000034 + iVar11) * 4 + iVar13 + -5) = 0;
            return;
          }
        }
      }
      pcVar15 = *(code **)(&stack0x00000048 + iVar11);
      uVar7 = (*pcVar15)();
      *(undefined4 *)(&stack0xfffffffc + iVar11) = uVar7;
      iVar13 = (*pcVar15)();
      if (*(int *)(&stack0xfffffffc + iVar11) == iVar13) {
        pcVar15 = *(code **)(&stack0x00000048 + iVar11);
        uVar7 = (*pcVar15)();
        *(undefined4 *)(&stack0x00000000 + iVar11) = uVar7;
        iVar13 = (*pcVar15)();
        if (*(int *)(&stack0x00000000 + iVar11) == iVar13) {
          pcVar15 = *(code **)(&stack0x00000048 + iVar11);
          uVar7 = (*pcVar15)();
          *(undefined4 *)(&stack0x00000004 + iVar11) = uVar7;
          iVar13 = (*pcVar15)();
          if ((*(int *)(&stack0x00000004 + iVar11) == iVar13) && ((pbVar12[2] & 1) == 0)) {
            bVar1 = *param_3;
            *(undefined **)(&stack0x0000001c + iVar11) = PTR_FUN_8c089540;
            iVar13 = *(int *)((int)&local_20 + iVar11);
            (*(code *)PTR_FUN_8c089540)(-(((bVar1 & 0x10) == 0) - 1));
            (**(code **)(&stack0x0000001c + iVar11))(*param_3 & 0xf);
            uVar4 = *(short *)(&stack0xffffffe4 + iVar11) - 1;
            *(ushort *)(iVar13 + 2) = uVar4;
            *(ushort *)(&stack0x00000020 + iVar11) = uVar4;
            if (uVar4 < 2) {
              *(undefined1 *)(*(int *)(&stack0xffffffe8 + iVar11) + 3) = 0;
              return;
            }
            iVar13 = 1;
            if (1 < (int)(*(ushort *)(&stack0x00000020 + iVar11) - 2)) {
              *(uint *)(&stack0x0000004c + iVar11) = *(ushort *)(&stack0x00000020 + iVar11) - 2;
              *(int *)(&stack0x00000024 + iVar11) = *(int *)(&stack0xffffffe8 + iVar11) + 3;
              do {
                iVar5 = 1;
                if (-1 < iVar13 + -1) {
                  *(uint *)(&stack0x00000050 + iVar11) = *(ushort *)(&stack0x00000020 + iVar11) - 1;
                  *(int *)(&stack0x00000028 + iVar11) = iVar13 << 2;
                  do {
                    *(int *)(&stack0x00000018 + iVar11) = iVar13 + iVar5;
                    if (*(int *)(&stack0x00000050 + iVar11) <= iVar13 + iVar5) goto LAB_8c089500;
                    uVar9 = iVar13 - iVar5;
                    if ((*(byte *)(iVar5 * -4 + *(int *)(&stack0x00000028 + iVar11) +
                                  *(int *)(&stack0xffffffe8 + iVar11) + 2) & 2) != 0) {
                      *(uint *)(&stack0x00000058 + iVar11) = uVar9 * 4;
                      uVar10 = uVar9;
LAB_8c08956a:
                      iVar13 = *(int *)(&stack0x00000024 + iVar11);
                      *(uint *)((int)&local_20 + DAT_8c0895b6 + iVar11) = uVar10;
                      *(undefined1 *)(*(int *)(&stack0x00000058 + iVar11) + iVar13) = 0;
                      goto LAB_8c089500;
                    }
                    iVar6 = *(int *)(&stack0x00000028 + iVar11) + iVar5 * 4;
                    *(int *)(&stack0x0000002c + iVar11) = iVar6;
                    bVar1 = *(byte *)(iVar6 + *(int *)(&stack0xffffffe8 + iVar11) + 2);
                    uVar10 = (uint)bVar1;
                    if ((bVar1 & 2) != 0) {
                      *(uint *)(&stack0x00000058 + iVar11) = uVar9 * 4;
                      goto LAB_8c08956a;
                    }
                    iVar6 = *(int *)(&stack0xffffffe8 + iVar11);
                    *(uint *)(&stack0x00000058 + iVar11) = uVar9 * 4;
                    pcVar15 = *(code **)(&stack0x00000048 + iVar11);
                    uVar7 = (*pcVar15)();
                    *(undefined4 *)(&stack0x0000005c + iVar11) = uVar7;
                    *(int *)(&stack0x00000030 + iVar11) =
                         iVar6 + *(int *)(&stack0x0000002c + iVar11);
                    uVar10 = (*pcVar15)(iVar6 + *(int *)(&stack0x0000002c + iVar11));
                    if (*(uint *)(&stack0x0000005c + iVar11) != uVar10) goto LAB_8c08956a;
                    pcVar15 = *(code **)(&stack0x00000048 + iVar11);
                    uVar7 = (*pcVar15)();
                    *(undefined4 *)((int)&local_20 + DAT_8c08953e + iVar11) = uVar7;
                    uVar10 = (*pcVar15)(*(undefined4 *)(&stack0x00000030 + iVar11));
                    if (*(uint *)((int)&local_20 + DAT_8c08953e + iVar11) != uVar10)
                    goto LAB_8c08956a;
                    cVar2 = (char)iVar5;
                    iVar5 = iVar5 + 1;
                    *(char *)(*(int *)(&stack0x00000058 + iVar11) +
                             *(int *)(&stack0xffffffe8 + iVar11) + 3) = cVar2 * '\x02' + '\x01';
                  } while (iVar5 <= iVar13);
                }
                *(int *)(&stack0x00000018 + iVar11) = iVar13 + iVar5;
LAB_8c089500:
                iVar13 = *(int *)(&stack0x00000018 + iVar11);
              } while (iVar13 < *(int *)(&stack0x0000004c + iVar11));
            }
            iVar13 = *(int *)(&stack0xffffffe8 + iVar11);
            *(undefined1 *)((uint)*(ushort *)(&stack0x00000020 + iVar11) * 4 + iVar13 + -1) = 0;
            *(undefined1 *)((uint)*(ushort *)(&stack0x00000020 + iVar11) * 4 + iVar13 + -5) = 0;
            return;
          }
        }
      }
    }
    if (pbVar12 != (byte *)0x0) {
      *pbVar12 = (*pbVar12 & (byte)DAT_8c08902e | 0x10) & (byte)DAT_8c089030 | 8;
    }
    pcVar15 = *(code **)(&stack0x00000048 + iVar11);
    *puVar14 = *(undefined2 *)param_3;
    iVar13 = (*pcVar15)();
    iVar6 = *(int *)(param_1 + 0x20);
    iVar5 = (*pcVar15)();
    iVar16 = *(int *)(DAT_8c0891c0 + param_1);
    if (0x4f < *(byte *)(iVar6 * iVar13 + iVar5 + iVar16)) {
      pcVar15 = *(code **)(&stack0x00000048 + iVar11);
      uVar7 = (*pcVar15)();
      *(undefined4 *)(&stack0x00000008 + iVar11) = uVar7;
      iVar13 = (*pcVar15)();
      if (*(byte *)(iVar6 * *(int *)(&stack0x00000008 + iVar11) + iVar13 + iVar16) < 0x5a) {
        *(byte *)(puVar14 + 1) = *(byte *)(puVar14 + 1) | 2;
      }
    }
    uVar4 = *(ushort *)(*(int *)((int)&local_20 + iVar11) + 2);
    *(ushort *)(&stack0x0000000c + iVar11) = uVar4;
    if (uVar4 < 2) {
      *(undefined1 *)(*(int *)(&stack0xffffffe8 + iVar11) + 3) = 0;
    }
    else {
      iVar13 = 1;
      if (1 < (int)(*(ushort *)(&stack0x0000000c + iVar11) - 2)) {
        *(uint *)(&stack0x0000004c + iVar11) = *(ushort *)(&stack0x0000000c + iVar11) - 2;
        *(int *)(&stack0x00000010 + iVar11) = *(int *)(&stack0xffffffe8 + iVar11) + 3;
        do {
          iVar5 = 1;
          if (-1 < iVar13 + -1) {
            *(uint *)(&stack0x00000014 + iVar11) = *(ushort *)(&stack0x0000000c + iVar11) - 1;
            do {
              *(int *)(&stack0x00000018 + iVar11) = iVar13 + iVar5;
              if (*(int *)(&stack0x00000014 + iVar11) <= iVar13 + iVar5) goto LAB_8c089184;
              iVar6 = iVar13 - iVar5;
              if (((*(byte *)(iVar5 * -4 + iVar13 * 4 + *(int *)(&stack0xffffffe8 + iVar11) + 2) & 2
                   ) != 0) ||
                 ((*(byte *)(iVar13 * 4 + iVar5 * 4 + *(int *)(&stack0xffffffe8 + iVar11) + 2) & 2)
                  != 0)) {
LAB_8c089548:
                *(undefined1 *)(iVar6 * 4 + *(int *)(&stack0x00000010 + iVar11)) = 0;
                goto LAB_8c089184;
              }
              iVar16 = (**(code **)(&stack0x00000048 + iVar11))();
              iVar8 = (**(code **)(&stack0x00000048 + iVar11))();
              if (iVar16 != iVar8) goto LAB_8c089548;
              pcVar15 = *(code **)(&stack0x00000048 + iVar11);
              iVar16 = (*pcVar15)();
              iVar8 = (*pcVar15)();
              if (iVar16 != iVar8) goto LAB_8c089548;
              cVar2 = (char)iVar5;
              iVar5 = iVar5 + 1;
              *(char *)(iVar6 * 4 + *(int *)(&stack0xffffffe8 + iVar11) + 3) =
                   cVar2 * '\x02' + '\x01';
            } while (iVar5 <= iVar13);
          }
          *(int *)(&stack0x00000018 + iVar11) = iVar13 + iVar5;
LAB_8c089184:
          iVar13 = *(int *)(&stack0x00000018 + iVar11);
        } while (iVar13 < *(int *)(&stack0x0000004c + iVar11));
      }
      iVar13 = *(int *)(&stack0xffffffe8 + iVar11);
      *(undefined1 *)((uint)*(ushort *)(&stack0x0000000c + iVar11) * 4 + iVar13 + -1) = 0;
      *(undefined1 *)((uint)*(ushort *)(&stack0x0000000c + iVar11) * 4 + iVar13 + -5) = 0;
    }
    *(short *)(*(int *)((int)&local_20 + iVar11) + 2) = *(short *)(&stack0xffffffe4 + iVar11) + 1;
  }
  return;
}

