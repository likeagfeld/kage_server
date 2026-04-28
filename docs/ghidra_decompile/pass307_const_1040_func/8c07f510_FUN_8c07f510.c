// entry: 8c07f510
// name: FUN_8c07f510
// signature: undefined FUN_8c07f510(void)


/* WARNING: Removing unreachable block (ram,0x8c07fbb4) */
/* WARNING: Removing unreachable block (ram,0x8c07f654) */
/* WARNING: Removing unreachable block (ram,0x8c07f7ea) */
/* WARNING: Removing unreachable block (ram,0x8c07fb48) */

undefined4 * FUN_8c07f510(double param_1,int param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 uVar13;
  code *pcVar14;
  ushort *puVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined1 *puVar19;
  double dVar20;
  float fVar22;
  undefined8 uVar21;
  undefined8 in_dr12;
  double dVar23;
  undefined8 in_dr14;
  undefined *puVar25;
  double dVar24;
  undefined8 in_xd8;
  undefined8 in_xd14;
  bool bVar26;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [8];
  undefined8 local_2c;
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_24);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar19 = (undefined1 *)((int)&local_2c + 4);
    local_2c = CONCAT44((int)in_dr14,(undefined4)local_2c);
  }
  else {
    puVar19 = auStack_34;
    uStack_24 = in_dr12;
    local_2c = in_dr14;
  }
  *(undefined4 *)(puVar19 + -4) = in_PR;
  iVar9 = (int)DAT_8c07f67c;
  puVar4 = (undefined4 *)(int)DAT_8c07f67e;
  uVar7 = *(undefined4 *)((int)puVar4 + param_2);
  *(undefined4 *)(puVar19 + iVar9 + 0x10) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(puVar19 + iVar9 + 0x14) = uVar7;
  *(int *)(puVar19 + iVar9 + 0xc) = param_2;
  *(undefined4 *)(puVar19 + iVar9 + 0x18) = 0;
  if (0 < *(int *)(puVar19 + iVar9 + 0x10)) {
    if (in_FPSCR_SZ == '\0') {
      dVar23 = (double)CONCAT44((undefined4)DAT_8c07f690,(int)in_dr12);
    }
    else {
      dVar23 = (double)CONCAT44(DAT_8c07f690._4_4_,(undefined4)DAT_8c07f690);
    }
    *(int *)(puVar19 + iVar9 + 0x1c) = *(int *)(puVar19 + iVar9 + 0xc) + (int)DAT_8c07f680;
    puVar25 = PTR_FUN_8c07f698;
    if (in_FPSCR_SZ == '\0') {
      puVar25 = DAT_8c07f690._4_4_;
    }
    *(int *)(puVar19 + iVar9 + 0x20) = *(int *)(puVar19 + iVar9 + 0xc) + (int)DAT_8c07f682;
    dVar24 = (double)(ZEXT48(puVar25) << 0x20);
    do {
      puVar4 = (undefined4 *)(uint)**(ushort **)(puVar19 + iVar9 + 0x14);
      if ((**(ushort **)(puVar19 + iVar9 + 0x14) & 1) != 0) {
        iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
        if (in_FPSCR_SZ == '\0') {
          dVar20 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar19 + iVar9 + 0xc) + 0x1c),
                                    *(undefined4 *)(iVar12 + 0x18));
        }
        else {
          in_xd8 = *(undefined8 *)(iVar12 + 0x18);
          dVar20 = *(double *)(*(int *)(puVar19 + iVar9 + 0xc) + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar22 = (float)((ulonglong)dVar20 >> 0x20);
          dVar20 = (double)CONCAT44(fVar22,SUB84(dVar20,0) + fVar22);
        }
        else {
          dVar20 = dVar20 + dVar20;
        }
        fVar22 = SUB84(dVar20,0);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(iVar12 + 0x18) = fVar22;
        }
        else {
          *(undefined8 *)(iVar12 + 0x18) = in_xd8;
        }
        puVar2 = PTR_FUN_8c0802b4;
        puVar25 = PTR_FUN_8c07f9f0;
        puVar4 = (undefined4 *)(uint)*(byte *)(iVar12 + 8);
        uVar7 = SUB84(dVar24,0);
        if (puVar4 == (undefined4 *)0x2) {
          if (in_FPSCR_PR == '\0') {
            bVar26 = fVar22 < (float)((ulonglong)dVar24 >> 0x20);
          }
          else {
            bVar26 = dVar20 < dVar24;
          }
          if (!bVar26) {
            iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
            *(undefined1 *)(iVar12 + 8) = 3;
            puVar4 = (undefined4 *)0x18;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(iVar12 + 0x18) = uVar7;
            }
            else {
              *(undefined8 *)(iVar12 + 0x18) = in_xd14;
            }
          }
        }
        else if (puVar4 == (undefined4 *)0x3) {
          iVar12 = 8;
          *(undefined **)(puVar19 + iVar9 + 0x28) = PTR_FUN_8c07fb70;
          puVar15 = *(ushort **)((int)DAT_8c07fb68 + *(int *)(puVar19 + iVar9 + 0xc));
          uVar3 = (*(code *)PTR_FUN_8c07fb70)();
          *(undefined2 *)(puVar19 + iVar9 + 0x60) = uVar3;
          uVar3 = (**(code **)(puVar19 + iVar9 + 0x28))();
          *(undefined2 *)(puVar19 + iVar9 + 100) = uVar3;
          do {
            if ((((*puVar15 & 1) != 0) && ((puVar15[4] & 4) == 0)) &&
               (uVar5 = (**(code **)(puVar19 + iVar9 + 0x28))(),
               uVar5 == *(ushort *)(puVar19 + iVar9 + 0x60))) {
              uVar5 = (**(code **)(puVar19 + iVar9 + 0x28))();
              puVar25 = PTR_FUN_8c07fb88;
              uVar7 = SUB84(dVar20,0);
              if (uVar5 == *(ushort *)(puVar19 + iVar9 + 100)) {
                *(byte *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x10) =
                     *(byte *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x10) & 0x7f | (byte)DAT_8c07fb6e;
                (*(code *)puVar25)();
                puVar2 = PTR_FUN_8c07fc04;
                puVar25 = PTR_FUN_8c07fb88;
                if ((**(uint **)(puVar19 + iVar9 + 0xc) & 2) == 0) {
                  iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
                  *(undefined1 *)(iVar12 + 8) = 0xc;
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(iVar12 + 0x18) = SUB84(dVar24,0);
                  }
                  else {
                    *(undefined8 *)(iVar12 + 0x18) = in_xd14;
                  }
                  (*(code *)puVar2)();
                  puVar25 = PTR_FUN_8c07fc08;
                  uVar1 = puVar15[2];
                  uVar10 = *(undefined4 *)(puVar19 + iVar9 + 0xc);
                  *(uint *)(puVar19 + iVar9 + 0x30) = (uint)uVar1;
                  *(uint *)(iVar12 + 0x70) = *(uint *)(iVar12 + 0x70) | 1 << (uVar1 & 0x1f);
                  (*(code *)puVar25)(uVar10,iVar12);
                }
                else {
                  iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
                  *(undefined1 *)(iVar12 + 8) = 6;
                  (*(code *)puVar25)();
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(iVar12 + 0x18) = SUB84(dVar24,0);
                  }
                  else {
                    *(undefined8 *)(iVar12 + 0x18) = in_xd14;
                  }
                  uVar1 = puVar15[2];
                  *(uint *)(puVar19 + iVar9 + 0x68) = (uint)uVar1;
                  *(uint *)(iVar12 + 0x70) = *(uint *)(iVar12 + 0x70) | 1 << (uVar1 & 0x1f);
                }
                (*(code *)PTR_FUN_8c07fb8c)
                          (*(undefined4 *)(puVar19 + iVar9 + 0xc),puVar15,
                           *(undefined4 *)(puVar19 + iVar9 + 0x14));
                **(uint **)(puVar19 + iVar9 + 0x1c) = **(uint **)(puVar19 + iVar9 + 0x1c) | 0x20;
                break;
              }
            }
            uVar7 = SUB84(dVar20,0);
            iVar12 = iVar12 + -1;
            puVar15 = (ushort *)((int)puVar15 + (int)DAT_8c07fb6a);
          } while (iVar12 != 0);
          puVar4 = (undefined4 *)**(undefined4 **)(puVar19 + iVar9 + 0xc);
          if ((((uint)puVar4 & 2) != 0) &&
             (puVar4 = (undefined4 *)0x70, 0 < *(int *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x70))) {
            if (in_FPSCR_SZ == '\0') {
              uVar21 = CONCAT44(*(undefined4 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x18),uVar7);
            }
            else {
              uVar21 = *(undefined8 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x18);
            }
            puVar4 = &DAT_8c07fb74;
            if (in_FPSCR_SZ == '\0') {
              uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),DAT_8c07fb74);
            }
            else {
              in_xd8 = CONCAT44(PTR_s_Panel__d_Chain_FLAG_APPEAR_Timeo_8c07fb78,DAT_8c07fb74);
            }
            if (in_FPSCR_PR != '\0' || (float)uVar21 <= (float)((ulonglong)uVar21 >> 0x20)) {
              iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
              uVar1 = *(ushort *)(iVar12 + 4);
              *(undefined **)(puVar19 + iVar9 + -4) =
                   PTR_s_Panel__d_Chain_FLAG_APPEAR_Timeo_8c07fb78;
              uVar7 = *(undefined4 *)PTR_DAT_8c07fb7c;
              *(uint *)(puVar19 + iVar9) = (uint)uVar1;
              *(uint *)(puVar19 + iVar9 + 0x68) = (uint)uVar1;
              (*(code *)PTR_FUN_8c07fb80)(uVar7);
              (*(code *)PTR_FUN_8c07fb84)(*(undefined4 *)(puVar19 + iVar9 + 0xc),iVar12);
              *(undefined1 *)(iVar12 + 8) = 3;
              puVar4 = (undefined4 *)0x18;
              if (in_FPSCR_SZ == '\0') {
                *(int *)(iVar12 + 0x18) = SUB84(dVar24,0);
              }
              else {
                *(undefined8 *)(iVar12 + 0x18) = in_xd14;
              }
            }
          }
        }
        else if (puVar4 == (undefined4 *)0x4) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)DAT_8c0802b0,SUB84(param_1,0));
            dVar20 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),fVar22);
          }
          else {
            param_1 = *DAT_8c0802b0;
            dVar20 = dVar23;
          }
          if (in_FPSCR_PR == '\0') {
            dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) /
                                      (float)((ulonglong)param_1 >> 0x20),SUB84(dVar20,0));
          }
          else {
            dVar20 = dVar20 / param_1;
          }
          if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar20 >> 0x20) <= SUB84(dVar20,0)) {
            iVar17 = *(int *)(puVar19 + iVar9 + 0x14);
            iVar16 = *(int *)(puVar19 + iVar9 + 0xc);
            iVar12 = (*(code *)PTR_FUN_8c0802b4)();
            iVar6 = (*(code *)puVar2)();
            puVar25 = PTR_FUN_8c0802b8;
            uVar5 = (uint)(*(int *)((*(int *)(iVar16 + 0x20) * iVar12 + iVar6) * 4 +
                                   *(int *)(DAT_8c0802aa + iVar16)) == iVar17);
            *(uint *)(puVar19 + iVar9 + 0x30) = uVar5;
            if (uVar5 != 0) {
              if ((**(uint **)(puVar19 + iVar9 + 0xc) & 2) == 0) {
LAB_8c0804c8:
                uVar7 = (*(code *)puVar2)();
                *(undefined4 *)(puVar19 + (int)DAT_8c08058a + iVar9 + -4) = uVar7;
                iVar12 = (*(code *)puVar2)();
                *(undefined4 *)
                 ((*(int *)(*(int *)(puVar19 + iVar9 + 0xc) + 0x20) *
                   *(int *)(puVar19 + (int)DAT_8c08058a + iVar9 + -4) + iVar12) * 4 +
                 *(int *)((int)DAT_8c080588 + *(int *)(puVar19 + iVar9 + 0xc))) = 0;
              }
              else if ((**(ushort **)(puVar19 + iVar9 + 0x14) & 1) == 0) {
                uVar7 = *(undefined4 *)PTR_DAT_8c08059c;
                *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel_ASSERT____8c0805a0;
                (*(code *)PTR_FUN_8c0802b8)(uVar7);
                uVar1 = *(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                uVar7 = *(undefined4 *)PTR_DAT_8c08059c;
                *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Panel__d_was_not_Used__8c0805a4;
                *(uint *)(puVar19 + iVar9) = (uint)uVar1;
                (*(code *)puVar25)(uVar7);
              }
              else {
                uVar7 = (*(code *)puVar2)();
                iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
                *(undefined4 *)(puVar19 + (int)DAT_8c0802ac + iVar9 + -4) = uVar7;
                iVar12 = (*(code *)puVar2)();
                iVar16 = *(int *)(iVar6 + 0x20);
                iVar6 = *(int *)(DAT_8c0802aa + iVar6);
                *(int *)(puVar19 + iVar9 + 0x3c) = iVar16;
                *(int *)(puVar19 + iVar9 + 0x38) = iVar6;
                if (*(int *)((iVar16 * *(int *)(puVar19 + (int)DAT_8c0802ac + iVar9 + -4) + iVar12)
                             * 4 + iVar6) == 0) {
                  uVar1 = *(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                  uVar7 = *(undefined4 *)PTR_DAT_8c08059c;
                  *(undefined **)(puVar19 + iVar9 + -4) =
                       PTR_s_Off_Panel_Warning__Allready_Off_P_8c0805a8;
                  *(uint *)(puVar19 + iVar9) = (uint)uVar1;
                  (*(code *)puVar25)(uVar7);
                }
                else {
                  uVar7 = (*(code *)puVar2)();
                  *(undefined4 *)(puVar19 + iVar9 + 0x40) = uVar7;
                  iVar12 = (*(code *)puVar2)();
                  if (*(int *)((*(int *)(puVar19 + iVar9 + 0x3c) * *(int *)(puVar19 + iVar9 + 0x40)
                               + iVar12) * 4 + *(int *)(puVar19 + iVar9 + 0x38)) ==
                      *(int *)(puVar19 + iVar9 + 0x14)) {
                    uVar1 = *(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                    uVar7 = *(undefined4 *)PTR_DAT_8c08059c;
                    *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel__d_Passed__8c0805ac;
                    *(uint *)(puVar19 + iVar9) = (uint)uVar1;
                    (*(code *)puVar25)(uVar7);
                    goto LAB_8c0804c8;
                  }
                  uVar7 = *(undefined4 *)PTR_DAT_8c0802bc;
                  *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel_ASSERT____8c0802c0;
                  (*(code *)puVar25)(uVar7);
                  uVar7 = (*(code *)puVar2)();
                  *(undefined4 *)(puVar19 + iVar9 + 0x40) = uVar7;
                  uVar7 = (*(code *)puVar2)();
                  *(undefined4 *)(puVar19 + (int)DAT_8c0802ae + iVar9 + -4) = uVar7;
                  uVar7 = (*(code *)puVar2)();
                  *(undefined4 *)(puVar19 + (int)DAT_8c0802ac + iVar9 + -4) = uVar7;
                  iVar12 = (*(code *)puVar2)();
                  uVar7 = *(undefined4 *)PTR_DAT_8c0802bc;
                  uVar1 = *(ushort *)
                           (*(int *)((*(int *)(*(int *)(puVar19 + iVar9 + 0xc) + 0x20) *
                                      *(int *)(puVar19 + (int)DAT_8c0802ac + iVar9 + -4) + iVar12) *
                                     4 + *(int *)((int)DAT_8c0802aa +
                                                 *(int *)(puVar19 + iVar9 + 0xc))) + 4);
                  *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Now_X__d_Y__d_is_Panel__d_8c0802c4;
                  *(undefined4 *)(puVar19 + iVar9) = *(undefined4 *)(puVar19 + iVar9 + 0x40);
                  uVar10 = *(undefined4 *)(puVar19 + (int)DAT_8c0802ae + iVar9 + -4);
                  *(uint *)(puVar19 + iVar9 + 8) = (uint)uVar1;
                  *(undefined4 *)(puVar19 + iVar9 + 4) = uVar10;
                  (*(code *)puVar25)(uVar7);
                  uVar1 = *(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                  uVar7 = *(undefined4 *)PTR_DAT_8c0802bc;
                  *(undefined **)(puVar19 + iVar9 + -4) =
                       PTR_s_Requester_Panel__d_can_not_offpa_8c0802c8;
                  *(uint *)(puVar19 + iVar9) = (uint)uVar1;
                  (*(code *)puVar25)(uVar7);
                }
              }
            }
            puVar15 = *(ushort **)(puVar19 + iVar9 + 0x14);
            uVar1 = puVar15[2];
            uVar7 = *(undefined4 *)PTR_DAT_8c0802bc;
            *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Panel__d_was_Breaked__8c0802cc;
            *(uint *)(puVar19 + iVar9) = (uint)uVar1;
            *(uint *)(puVar19 + iVar9 + 0x68) = (uint)uVar1;
            puVar4 = (undefined4 *)(*(code *)puVar25)(uVar7);
            *puVar15 = *puVar15 & 0xfffe;
          }
        }
        else if (puVar4 == (undefined4 *)0x6) {
          iVar12 = 0;
          iVar6 = 8;
          puVar15 = *(ushort **)((int)DAT_8c07f686 + *(int *)(puVar19 + iVar9 + 0xc));
          do {
            if (((*puVar15 & 1) != 0) && ((puVar15[4] & 4) == 0)) {
              *(undefined **)(puVar19 + iVar9 + 0x28) = PTR_FUN_8c07f698;
              *(ushort **)(puVar19 + iVar9 + 0x5c) = puVar15 + 1;
              iVar16 = (*(code *)PTR_FUN_8c07f698)();
              iVar17 = (**(code **)(puVar19 + iVar9 + 0x28))();
              if (iVar16 == iVar17) {
                iVar16 = (**(code **)(puVar19 + iVar9 + 0x28))();
                iVar17 = (**(code **)(puVar19 + iVar9 + 0x28))();
                if (iVar16 == iVar17) {
                  iVar16 = -((((int)*(char *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x10) & 0x80U) == 0
                             ) - 1);
                  *(int *)(puVar19 + iVar9 + 0x68) = iVar16;
                  *(undefined4 *)(puVar19 + iVar9 + 0x48) =
                       *(undefined4 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x70);
                  if ((iVar16 == 0) &&
                     (*(char *)(iVar12 + *(int *)(*(int *)(puVar19 + iVar9 + 0xc) + 4) + 0xe) !=
                      '\x01')) {
                    iVar16 = *(int *)(puVar19 + iVar9 + 0x14);
                    (*(code *)PTR_FUN_8c07f69c)();
                    *(byte *)(iVar16 + 0x10) = *(byte *)(iVar16 + 0x10) & 0x7f | (byte)DAT_8c07f68a;
                  }
                  uVar1 = puVar15[2];
                  *(uint *)(puVar19 + iVar9 + 0x30) = (uint)uVar1;
                  if ((*(uint *)(puVar19 + iVar9 + 0x48) & 1 << (uVar1 & 0x1f)) == 0) {
                    (*(code *)PTR_FUN_8c07fc0c)
                              (*(undefined4 *)(puVar19 + iVar9 + 0xc),puVar15,
                               *(undefined4 *)(puVar19 + iVar9 + 0x14));
                  }
                }
              }
            }
            iVar6 = iVar6 + -1;
            iVar12 = iVar12 + 1;
            puVar15 = (ushort *)((int)puVar15 + (int)DAT_8c07f68c);
          } while (iVar6 != 0);
          puVar4 = (undefined4 *)**(undefined4 **)(puVar19 + iVar9 + 0xc);
          if ((((uint)puVar4 & 2) != 0) &&
             (puVar4 = (undefined4 *)0x70, 0 < *(int *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x70))) {
            if (in_FPSCR_SZ == '\0') {
              uVar21 = CONCAT44(*(undefined4 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x18),
                                SUB84(dVar20,0));
            }
            else {
              uVar21 = *(undefined8 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x18);
            }
            puVar4 = &DAT_8c07f6e8;
            if (in_FPSCR_SZ == '\0') {
              uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),DAT_8c07f6e8);
            }
            else {
              in_xd8 = CONCAT44(uRam8c07f6ec,DAT_8c07f6e8);
            }
            if (in_FPSCR_PR != '\0' || (float)uVar21 <= (float)((ulonglong)uVar21 >> 0x20)) {
              iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
              uVar1 = *(ushort *)(iVar12 + 4);
              *(undefined **)(puVar19 + iVar9 + -4) =
                   PTR_s_Panel__d_Chain_FLAG_JUDGE_Timeou_8c07fc10;
              uVar7 = *(undefined4 *)PTR_DAT_8c07fc14;
              *(uint *)(puVar19 + iVar9) = (uint)uVar1;
              *(uint *)(puVar19 + iVar9 + 0x68) = (uint)uVar1;
              (*(code *)PTR_FUN_8c07fc18)(uVar7);
              *(undefined1 *)(iVar12 + 8) = 3;
              puVar4 = (undefined4 *)0x18;
              if (in_FPSCR_SZ == '\0') {
                *(int *)(iVar12 + 0x18) = SUB84(dVar24,0);
              }
              else {
                *(undefined8 *)(iVar12 + 0x18) = in_xd14;
              }
            }
          }
        }
        else if (puVar4 == (undefined4 *)0x7) {
          puVar4 = (undefined4 *)
                   (*(code *)PTR_FUN_8c080410)
                             (*(undefined4 *)(puVar19 + iVar9 + 0xc),
                              *(undefined4 *)(puVar19 + iVar9 + 0x14));
          if (puVar4 == (undefined4 *)0x0) {
            iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
            uVar10 = *(undefined4 *)(puVar19 + iVar9 + 0xc);
            (*(code *)PTR_FUN_8c080400)(uVar10,iVar12);
            puVar25 = PTR_FUN_8c080404;
            bVar8 = *(byte *)(iVar12 + 2);
            *(undefined **)(puVar19 + iVar9 + 0x28) = PTR_FUN_8c080404;
            *(byte *)(iVar12 + 2) = (bVar8 & (byte)DAT_8c0803f4 | 0x10) & (byte)DAT_8c0803f6 | 8;
            *(int *)(puVar19 + iVar9 + 0x24) = iVar12 + 2;
            uVar7 = (*(code *)puVar25)();
            *(undefined4 *)(puVar19 + iVar9 + 0x68) = uVar7;
            uVar7 = (**(code **)(puVar19 + iVar9 + 0x28))();
            puVar25 = PTR_FUN_8c080408;
            *(undefined4 *)(puVar19 + iVar9 + 0x30) = uVar7;
            *(undefined1 *)(iVar12 + 8) = 3;
            iVar12 = (*(code *)puVar25)(uVar10,*(undefined4 *)(puVar19 + iVar9 + 0x68),uVar7);
            if (iVar12 == 0) {
              puVar4 = (undefined4 *)
                       (uint)*(byte *)(*(int *)(*(int *)(puVar19 + iVar9 + 0xc) + 0x20) *
                                       *(int *)(puVar19 + iVar9 + 0x30) +
                                       *(int *)(puVar19 + iVar9 + 0x68) +
                                      *(int *)((int)DAT_8c0803f8 + *(int *)(puVar19 + iVar9 + 0xc)))
              ;
              *(undefined4 **)(puVar19 + iVar9 + 0x68) = puVar4;
            }
            else {
              puVar4 = (undefined4 *)
                       (*(code *)PTR_FUN_8c08040c)
                                 (*(undefined4 *)(puVar19 + iVar9 + 0xc),
                                  *(undefined4 *)(puVar19 + iVar9 + 0x14),0);
            }
          }
        }
        else if (puVar4 == (undefined4 *)0x9) {
          iVar6 = *(int *)(puVar19 + iVar9 + 0x14);
          *(int *)(puVar19 + iVar9 + 0x50) = iVar6 + 9;
          iVar12 = (*(code *)PTR___bfxbu_8c07fdb8)();
          uVar7 = SUB84(dVar20,0);
          *(int *)(puVar19 + iVar9 + 0x30) = iVar12;
          iVar12 = (*(code *)PTR_FUN_8c07fdbc)
                             (*(int *)((int)DAT_8c07fdaa + *(int *)(puVar19 + iVar9 + 0xc)) +
                              DAT_8c07fda8 * iVar12,iVar6);
          if (iVar12 != 0) {
            puVar18 = *(uint **)(puVar19 + iVar9 + 0xc);
            uVar10 = (*(code *)PTR___bfxbu_8c080048)();
            (*(code *)PTR_FUN_8c08004c)(puVar18,uVar10,*(undefined4 *)(puVar19 + iVar9 + 0x14));
            if ((*puVar18 & 2) != 0) {
              *(int *)(puVar19 + iVar9 + 0x6c) = *(int *)(puVar19 + iVar9 + 0x14) + 2;
              *(undefined **)(puVar19 + iVar9 + 0x78) = PTR_FUN_8c080050;
              iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
              uVar10 = (**(code **)(puVar19 + iVar9 + 0x78))();
              *(undefined4 *)(puVar19 + iVar9 + 0x54) = uVar10;
              iVar12 = (**(code **)(puVar19 + iVar9 + 0x78))();
              if (*(int *)((*(int *)(iVar6 + 0x20) * *(int *)(puVar19 + iVar9 + 0x54) + iVar12) * 4
                          + *(int *)(DAT_8c08003a + iVar6)) == *(int *)(puVar19 + iVar9 + 0x14)) {
                if ((**(uint **)(puVar19 + iVar9 + 0xc) & 2) == 0) {
LAB_8c080614:
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x78);
                  iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
                  *(code **)(puVar19 + (int)DAT_8c08073e + iVar9 + -4) = pcVar14;
                  uVar10 = (*pcVar14)();
                  *(undefined4 *)(puVar19 + (int)DAT_8c080740 + iVar9 + -4) = uVar10;
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x78);
                  *(code **)(puVar19 + (int)DAT_8c080742 + iVar9 + -4) = pcVar14;
                  iVar12 = (*pcVar14)();
                  *(undefined4 *)
                   ((*(int *)(iVar6 + 0x20) * *(int *)(puVar19 + (int)DAT_8c080740 + iVar9 + -4) +
                    iVar12) * 4 + *(int *)(DAT_8c080744 + iVar6)) = 0;
                }
                else {
                  uVar1 = **(ushort **)(puVar19 + iVar9 + 0x14);
                  *(undefined **)(puVar19 + (int)DAT_8c08003c + iVar9 + -4) = PTR_FUN_8c080054;
                  if ((uVar1 & 1) == 0) {
                    uVar10 = *(undefined4 *)PTR_DAT_8c080754;
                    pcVar14 = *(code **)(puVar19 + (int)DAT_8c080746 + iVar9 + -4);
                    *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel_ASSERT____8c080758;
                    (*pcVar14)(uVar10);
                    uVar1 = *(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                    uVar10 = *(undefined4 *)PTR_DAT_8c080754;
                    pcVar14 = *(code **)(puVar19 + (int)DAT_8c080746 + iVar9 + -4);
                    *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Panel__d_was_not_Used__8c08075c;
                    *(uint *)(puVar19 + iVar9) = (uint)uVar1;
                    (*pcVar14)(uVar10);
                  }
                  else {
                    iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
                    uVar10 = (**(code **)(puVar19 + iVar9 + 0x78))();
                    *(undefined4 *)(puVar19 + (int)DAT_8c08003e + iVar9 + -4) = uVar10;
                    iVar12 = (**(code **)(puVar19 + iVar9 + 0x78))();
                    iVar16 = *(int *)(iVar6 + 0x20);
                    iVar6 = *(int *)(DAT_8c08003a + iVar6);
                    *(int *)(puVar19 + iVar9 + 0x3c) = iVar16;
                    *(int *)(puVar19 + iVar9 + 0x38) = iVar6;
                    if (*(int *)((iVar16 * *(int *)(puVar19 + (int)DAT_8c08003e + iVar9 + -4) +
                                 iVar12) * 4 + iVar6) == 0) {
                      *(uint *)(puVar19 + iVar9) =
                           (uint)*(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                      pcVar14 = *(code **)(puVar19 + (int)DAT_8c080746 + iVar9 + -4);
                      uVar10 = *(undefined4 *)PTR_DAT_8c080754;
                      *(undefined **)(puVar19 + iVar9 + -4) =
                           PTR_s_Off_Panel_Warning__Allready_Off_P_8c080760;
                      *(code **)(puVar19 + (int)DAT_8c080748 + iVar9 + -4) = pcVar14;
                      (*pcVar14)(uVar10);
                    }
                    else {
                      pcVar14 = *(code **)(puVar19 + iVar9 + 0x78);
                      *(code **)(puVar19 + (int)DAT_8c080040 + iVar9 + -4) = pcVar14;
                      uVar10 = (*pcVar14)();
                      *(undefined4 *)(puVar19 + iVar9 + 0x40) = uVar10;
                      pcVar14 = *(code **)(puVar19 + iVar9 + 0x78);
                      *(code **)(puVar19 + (int)DAT_8c080042 + iVar9 + -4) = pcVar14;
                      iVar12 = (*pcVar14)();
                      if (*(int *)((*(int *)(puVar19 + iVar9 + 0x3c) *
                                    *(int *)(puVar19 + iVar9 + 0x40) + iVar12) * 4 +
                                  *(int *)(puVar19 + iVar9 + 0x38)) ==
                          *(int *)(puVar19 + iVar9 + 0x14)) {
                        *(uint *)(puVar19 + iVar9) =
                             (uint)*(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                        pcVar14 = *(code **)(puVar19 + (int)DAT_8c080746 + iVar9 + -4);
                        uVar10 = *(undefined4 *)PTR_DAT_8c080754;
                        *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel__d_Passed__8c080764;
                        *(code **)(puVar19 + (int)DAT_8c08074a + iVar9 + -4) = pcVar14;
                        (*pcVar14)(uVar10);
                        goto LAB_8c080614;
                      }
                      *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel_ASSERT____8c080058;
                      uVar10 = *(undefined4 *)PTR_DAT_8c08005c;
                      pcVar14 = *(code **)(puVar19 + (int)DAT_8c08003c + iVar9 + -4);
                      iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
                      *(code **)(puVar19 + (int)DAT_8c080044 + iVar9 + -4) = pcVar14;
                      (*pcVar14)(uVar10);
                      uVar10 = (**(code **)(puVar19 + iVar9 + 0x78))();
                      *(undefined4 *)(puVar19 + iVar9 + 0x40) = uVar10;
                      uVar10 = (**(code **)(puVar19 + iVar9 + 0x78))();
                      *(undefined4 *)(puVar19 + (int)DAT_8c080046 + iVar9 + -4) = uVar10;
                      uVar10 = (**(code **)(puVar19 + iVar9 + 0x78))();
                      *(undefined4 *)(puVar19 + (int)DAT_8c08003e + iVar9 + -4) = uVar10;
                      iVar12 = (**(code **)(puVar19 + iVar9 + 0x78))();
                      uVar1 = *(ushort *)
                               (*(int *)((*(int *)(iVar6 + 0x20) *
                                          *(int *)(puVar19 + (int)DAT_8c08003e + iVar9 + -4) +
                                         iVar12) * 4 + *(int *)(DAT_8c08003a + iVar6)) + 4);
                      uVar10 = *(undefined4 *)PTR_DAT_8c08005c;
                      *(undefined **)(puVar19 + iVar9 + -4) =
                           PTR_s_Now_X__d_Y__d_is_Panel__d_8c080060;
                      *(undefined4 *)(puVar19 + iVar9) = *(undefined4 *)(puVar19 + iVar9 + 0x40);
                      uVar13 = *(undefined4 *)(puVar19 + (int)DAT_8c080122 + iVar9 + -4);
                      *(uint *)(puVar19 + iVar9 + 8) = (uint)uVar1;
                      pcVar14 = *(code **)(puVar19 + (int)DAT_8c080124 + iVar9 + -4);
                      *(undefined4 *)(puVar19 + iVar9 + 4) = uVar13;
                      *(code **)(puVar19 + (int)DAT_8c080126 + iVar9 + -4) = pcVar14;
                      (*pcVar14)(uVar10);
                      *(uint *)(puVar19 + iVar9) =
                           (uint)*(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                      uVar10 = *(undefined4 *)PTR_DAT_8c080130;
                      pcVar14 = *(code **)(puVar19 + (int)DAT_8c080124 + iVar9 + -4);
                      *(undefined **)(puVar19 + iVar9 + -4) =
                           PTR_s_Requester_Panel__d_can_not_offpa_8c080134;
                      *(code **)(puVar19 + (int)DAT_8c080128 + iVar9 + -4) = pcVar14;
                      (*pcVar14)(uVar10);
                    }
                  }
                }
              }
            }
            iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
            uVar5 = (*(code *)PTR___bfxbu_8c080138)();
            *(uint *)(puVar19 + iVar9 + 0x68) = uVar5;
            pbVar11 = (byte *)(*(int *)(puVar19 + iVar9 + 0x20) + (uint)*(byte *)(iVar12 + 10));
            if ((int)uVar5 < 0) {
              bVar8 = (byte)(1 >> (~uVar5 & 0x1f) + 1);
            }
            else {
              bVar8 = (byte)(1 << (uVar5 & 0x1f));
            }
            *pbVar11 = *pbVar11 | bVar8;
            uVar5 = (uint)*(byte *)(iVar12 + 10);
            *(uint *)(puVar19 + iVar9 + 0x30) = uVar5;
            if (uVar5 == 0xb) {
              **(uint **)(puVar19 + iVar9 + 0x1c) =
                   **(uint **)(puVar19 + iVar9 + 0x1c) | (int)DAT_8c08012a;
            }
            else {
              *(uint *)(puVar19 + iVar9 + 0x68) = uVar5;
              if (uVar5 == 0xd) {
                **(uint **)(puVar19 + iVar9 + 0x1c) =
                     **(uint **)(puVar19 + iVar9 + 0x1c) | (int)DAT_8c08012c;
              }
              else {
                *(uint *)(puVar19 + iVar9 + 0x30) = uVar5;
                if ((uVar5 < 0xe) || (0x6e < uVar5)) {
                  **(uint **)(puVar19 + iVar9 + 0x1c) = **(uint **)(puVar19 + iVar9 + 0x1c) | 0x40;
                }
                else {
                  **(uint **)(puVar19 + iVar9 + 0x1c) =
                       **(uint **)(puVar19 + iVar9 + 0x1c) | DAT_8c08013c;
                }
              }
            }
          }
          puVar4 = (undefined4 *)**(undefined4 **)(puVar19 + iVar9 + 0xc);
          if ((((uint)puVar4 & 2) != 0) &&
             (puVar4 = (undefined4 *)0x70, 0 < *(int *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x70))) {
            if (in_FPSCR_SZ == '\0') {
              uVar21 = CONCAT44(*(undefined4 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x18),uVar7);
            }
            else {
              uVar21 = *(undefined8 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x18);
            }
            puVar4 = &DAT_8c07fdc0;
            if (in_FPSCR_SZ == '\0') {
              uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),DAT_8c07fdc0);
            }
            else {
              in_xd8 = CONCAT44(PTR_DAT_8c07fdc4,DAT_8c07fdc0);
            }
            if (in_FPSCR_PR != '\0' || (float)uVar21 <= (float)((ulonglong)uVar21 >> 0x20)) {
              iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
              *(uint *)(puVar19 + iVar9) = (uint)*(ushort *)(iVar12 + 4);
              uVar7 = *(undefined4 *)PTR_DAT_8c07fdc4;
              *(undefined **)(puVar19 + iVar9 + -4) =
                   PTR_s_Panel__d_FLAG_GO_PLAYER_Timeout__8c07fdc8;
              *(undefined **)(puVar19 + (int)DAT_8c07fdac + iVar9 + -4) = PTR_FUN_8c07fdcc;
              (*(code *)PTR_FUN_8c07fdcc)(uVar7);
              uVar7 = (*(code *)PTR___bfxbu_8c07fdb8)();
              *(undefined4 *)(puVar19 + iVar9 + 0x30) = uVar7;
              (*(code *)PTR_FUN_8c07fdd0)(*(undefined4 *)(puVar19 + iVar9 + 0xc),uVar7,iVar12);
              *(int *)(puVar19 + iVar9 + 0x70) = iVar12 + 2;
              *(undefined **)(puVar19 + (int)DAT_8c07fdae + iVar9 + -4) = PTR_FUN_8c07fdd4;
              iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
              uVar7 = (**(code **)(puVar19 + (int)DAT_8c07fdae + iVar9 + -4))();
              *(undefined4 *)(puVar19 + iVar9 + 0x58) = uVar7;
              iVar12 = (**(code **)(puVar19 + (int)DAT_8c07fdae + iVar9 + -4))();
              puVar4 = (undefined4 *)0x6c;
              uVar5 = (uint)(*(int *)((*(int *)(iVar6 + 0x20) * *(int *)(puVar19 + iVar9 + 0x58) +
                                      iVar12) * 4 + *(int *)(DAT_8c07fdb0 + iVar6)) ==
                            *(int *)(puVar19 + iVar9 + 0x14));
              *(uint *)(puVar19 + iVar9 + 0x68) = uVar5;
              if (uVar5 != 0) {
                if ((**(uint **)(puVar19 + iVar9 + 0xc) & 2) == 0) {
LAB_8c080544:
                  iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
                  pcVar14 = *(code **)(puVar19 + (int)DAT_8c08058c + iVar9 + -4);
                  *(code **)(puVar19 + (int)DAT_8c08058e + iVar9 + -4) = pcVar14;
                  uVar7 = (*pcVar14)();
                  *(undefined4 *)(puVar19 + (int)DAT_8c08058a + iVar9 + -4) = uVar7;
                  pcVar14 = *(code **)(puVar19 + (int)DAT_8c08058c + iVar9 + -4);
                  *(code **)(puVar19 + (int)DAT_8c080590 + iVar9 + -4) = pcVar14;
                  iVar12 = (*pcVar14)();
                  puVar4 = (undefined4 *)
                           ((*(int *)(iVar6 + 0x20) *
                             *(int *)(puVar19 + (int)DAT_8c08058a + iVar9 + -4) + iVar12) * 4);
                  *(undefined4 *)((int)puVar4 + *(int *)(DAT_8c080588 + iVar6)) = 0;
                }
                else if ((**(ushort **)(puVar19 + iVar9 + 0x14) & 1) == 0) {
                  uVar7 = *(undefined4 *)PTR_DAT_8c080754;
                  pcVar14 = *(code **)(puVar19 + (int)DAT_8c080738 + iVar9 + -4);
                  *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel_ASSERT____8c080758;
                  (*pcVar14)(uVar7);
                  uVar1 = *(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                  uVar7 = *(undefined4 *)PTR_DAT_8c080754;
                  pcVar14 = *(code **)(puVar19 + (int)DAT_8c080738 + iVar9 + -4);
                  *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Panel__d_was_not_Used__8c08075c;
                  *(uint *)(puVar19 + iVar9) = (uint)uVar1;
                  puVar4 = (undefined4 *)(*pcVar14)(uVar7);
                }
                else {
                  iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
                  uVar7 = (**(code **)(puVar19 + (int)DAT_8c07fdae + iVar9 + -4))();
                  *(undefined4 *)(puVar19 + (int)DAT_8c07fdb2 + iVar9 + -4) = uVar7;
                  iVar12 = (**(code **)(puVar19 + (int)DAT_8c07fdae + iVar9 + -4))();
                  iVar16 = *(int *)(iVar6 + 0x20);
                  iVar6 = *(int *)(DAT_8c07fdb0 + iVar6);
                  *(int *)(puVar19 + iVar9 + 0x3c) = iVar16;
                  *(int *)(puVar19 + iVar9 + 0x38) = iVar6;
                  if (*(int *)((iVar16 * *(int *)(puVar19 + (int)DAT_8c07fdb2 + iVar9 + -4) + iVar12
                               ) * 4 + iVar6) == 0) {
                    *(uint *)(puVar19 + iVar9) =
                         (uint)*(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                    pcVar14 = *(code **)(puVar19 + (int)DAT_8c080738 + iVar9 + -4);
                    uVar7 = *(undefined4 *)PTR_DAT_8c080754;
                    *(undefined **)(puVar19 + iVar9 + -4) =
                         PTR_s_Off_Panel_Warning__Allready_Off_P_8c080760;
                    *(code **)(puVar19 + (int)DAT_8c08073a + iVar9 + -4) = pcVar14;
                    puVar4 = (undefined4 *)(*pcVar14)(uVar7);
                  }
                  else {
                    pcVar14 = *(code **)(puVar19 + (int)DAT_8c07fdae + iVar9 + -4);
                    *(code **)(puVar19 + (int)DAT_8c07fdb4 + iVar9 + -4) = pcVar14;
                    uVar7 = (*pcVar14)();
                    *(undefined4 *)(puVar19 + iVar9 + 0x40) = uVar7;
                    pcVar14 = *(code **)(puVar19 + (int)DAT_8c07fdae + iVar9 + -4);
                    *(code **)(puVar19 + (int)DAT_8c07fdb6 + iVar9 + -4) = pcVar14;
                    iVar12 = (*pcVar14)();
                    if (*(int *)((*(int *)(puVar19 + iVar9 + 0x3c) *
                                  *(int *)(puVar19 + iVar9 + 0x40) + iVar12) * 4 +
                                *(int *)(puVar19 + iVar9 + 0x38)) ==
                        *(int *)(puVar19 + iVar9 + 0x14)) {
                      *(uint *)(puVar19 + iVar9) =
                           (uint)*(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                      pcVar14 = *(code **)(puVar19 + (int)DAT_8c080738 + iVar9 + -4);
                      uVar7 = *(undefined4 *)PTR_DAT_8c080754;
                      *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel__d_Passed__8c080764;
                      *(code **)(puVar19 + (int)DAT_8c08073c + iVar9 + -4) = pcVar14;
                      (*pcVar14)(uVar7);
                      goto LAB_8c080544;
                    }
                    *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel_ASSERT____8c07fdd8;
                    uVar7 = *(undefined4 *)PTR_DAT_8c07fe98;
                    pcVar14 = *(code **)(puVar19 + (int)DAT_8c07fe88 + iVar9 + -4);
                    iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
                    *(code **)(puVar19 + (int)DAT_8c07fe8a + iVar9 + -4) = pcVar14;
                    (*pcVar14)(uVar7);
                    uVar7 = (**(code **)(puVar19 + (int)DAT_8c07fe8c + iVar9 + -4))();
                    *(undefined4 *)(puVar19 + iVar9 + 0x40) = uVar7;
                    uVar7 = (**(code **)(puVar19 + (int)DAT_8c07fe8c + iVar9 + -4))();
                    *(undefined4 *)(puVar19 + (int)DAT_8c07fe8e + iVar9 + -4) = uVar7;
                    uVar7 = (**(code **)(puVar19 + (int)DAT_8c07fe8c + iVar9 + -4))();
                    *(undefined4 *)(puVar19 + (int)DAT_8c07fe90 + iVar9 + -4) = uVar7;
                    iVar12 = (**(code **)(puVar19 + (int)DAT_8c07fe8c + iVar9 + -4))();
                    uVar7 = *(undefined4 *)PTR_DAT_8c07fe98;
                    uVar1 = *(ushort *)
                             (*(int *)((*(int *)(iVar6 + 0x20) *
                                        *(int *)(puVar19 + (int)DAT_8c07fe90 + iVar9 + -4) + iVar12)
                                       * 4 + *(int *)(DAT_8c07fe92 + iVar6)) + 4);
                    *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Now_X__d_Y__d_is_Panel__d_8c07fe9c
                    ;
                    *(undefined4 *)(puVar19 + iVar9) = *(undefined4 *)(puVar19 + iVar9 + 0x40);
                    uVar10 = *(undefined4 *)(puVar19 + (int)DAT_8c07fe8e + iVar9 + -4);
                    *(uint *)(puVar19 + iVar9 + 8) = (uint)uVar1;
                    pcVar14 = *(code **)(puVar19 + (int)DAT_8c07fe88 + iVar9 + -4);
                    *(undefined4 *)(puVar19 + iVar9 + 4) = uVar10;
                    *(code **)(puVar19 + (int)DAT_8c07fe94 + iVar9 + -4) = pcVar14;
                    (*pcVar14)(uVar7);
                    *(uint *)(puVar19 + iVar9) =
                         (uint)*(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                    uVar7 = *(undefined4 *)PTR_DAT_8c07fe98;
                    pcVar14 = *(code **)(puVar19 + (int)DAT_8c07fe88 + iVar9 + -4);
                    *(undefined **)(puVar19 + iVar9 + -4) =
                         PTR_s_Requester_Panel__d_can_not_offpa_8c07fea0;
                    *(code **)(puVar19 + (int)DAT_8c07fe96 + iVar9 + -4) = pcVar14;
                    puVar4 = (undefined4 *)(*pcVar14)(uVar7);
                  }
                }
              }
            }
          }
        }
        else if (puVar4 == (undefined4 *)0xa) {
          if ((**(uint **)(puVar19 + iVar9 + 0xc) & 2) == 0) {
            puVar4 = (undefined4 *)0x14;
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)(ulonglong)*(uint *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x14);
            }
            else {
              in_xd8 = *(undefined8 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x14);
            }
            if (in_FPSCR_SZ == '\0') {
              uVar21 = CONCAT44(*(undefined4 *)(*(int *)(puVar19 + iVar9 + 0xc) + 0x14),
                                SUB84(dVar20,0));
            }
            else {
              uVar21 = *(undefined8 *)(*(int *)(puVar19 + iVar9 + 0xc) + 0x14);
            }
            if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar21 >> 0x20) <= (float)uVar21) {
              iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
              *(undefined1 *)(iVar12 + 8) = 2;
              puVar4 = (undefined4 *)0x18;
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(iVar12 + 0x18) = uVar7;
              }
              else {
                *(undefined8 *)(iVar12 + 0x18) = in_xd14;
              }
              **(uint **)(puVar19 + iVar9 + 0x1c) = **(uint **)(puVar19 + iVar9 + 0x1c) | 4;
            }
          }
          else {
            puVar15 = *(ushort **)(puVar19 + iVar9 + 0x14);
            puVar18 = *(uint **)(puVar19 + iVar9 + 0x1c);
            *(undefined1 *)(puVar15 + 4) = 2;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(puVar15 + 0xc) = uVar7;
            }
            else {
              *(undefined8 *)(puVar15 + 0xc) = in_xd14;
            }
            puVar25 = PTR_FUN_8c080594;
            *puVar18 = *puVar18 | 4;
            uVar1 = *puVar15;
            *(uint *)(puVar19 + iVar9 + 0x30) = (uint)uVar1;
            *(undefined **)(puVar19 + iVar9 + 0x28) = puVar25;
            if ((uVar1 & 1) == 0) {
              **(ushort **)(puVar19 + iVar9 + 0x14) = uVar1 | 1;
            }
            *(int *)(puVar19 + iVar9 + 0x24) = *(int *)(puVar19 + iVar9 + 0x14) + 2;
            uVar7 = (*(code *)puVar25)(*(int *)(puVar19 + iVar9 + 0x14) + 2);
            *(undefined4 *)(puVar19 + iVar9 + 0x4c) = uVar7;
            iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
            iVar12 = (**(code **)(puVar19 + iVar9 + 0x28))();
            puVar4 = (undefined4 *)0x6c;
            uVar5 = (uint)(*(int *)((*(int *)(iVar6 + 0x20) * *(int *)(puVar19 + iVar9 + 0x4c) +
                                    iVar12) * 4 + *(int *)(DAT_8c080588 + iVar6)) ==
                          *(int *)(puVar19 + iVar9 + 0x14));
            *(uint *)(puVar19 + iVar9 + 0x68) = uVar5;
            if (uVar5 == 0) {
              puVar4 = (undefined4 *)
                       (*(code *)PTR_FUN_8c080598)
                                 (*(undefined4 *)(puVar19 + iVar9 + 0xc),
                                  *(undefined4 *)(puVar19 + iVar9 + 0x14));
            }
          }
        }
        else if (puVar4 == (undefined4 *)0xc) {
          iVar6 = 0;
          iVar12 = 8;
          puVar15 = *(ushort **)((int)DAT_8c07f82c + *(int *)(puVar19 + iVar9 + 0xc));
          do {
            uVar1 = *puVar15;
            *(uint *)(puVar19 + iVar9 + 0x68) = (uint)uVar1;
            if (((uVar1 & 1) != 0) && ((puVar15[4] & 4) == 0)) {
              *(ushort **)(puVar19 + iVar9 + 0x44) = puVar15 + 1;
              *(undefined **)(puVar19 + iVar9 + 0x74) = PTR_FUN_8c07f840;
              *(undefined **)(puVar19 + (int)DAT_8c07f82e + iVar9 + -4) = PTR_FUN_8c07f840;
              uVar7 = (*(code *)PTR_FUN_8c07f840)();
              *(undefined4 *)(puVar19 + iVar9 + 0x30) = uVar7;
              pcVar14 = *(code **)(puVar19 + iVar9 + 0x74);
              *(int *)(puVar19 + iVar9 + 0x24) = *(int *)(puVar19 + iVar9 + 0x14) + 2;
              *(code **)(puVar19 + (int)DAT_8c07f830 + iVar9 + -4) = pcVar14;
              iVar16 = (*pcVar14)();
              *(int *)(puVar19 + iVar9 + 0x68) = iVar16;
              if (*(int *)(puVar19 + iVar9 + 0x30) == iVar16) {
                pcVar14 = *(code **)(puVar19 + iVar9 + 0x74);
                *(code **)(puVar19 + (int)DAT_8c07f832 + iVar9 + -4) = pcVar14;
                uVar7 = (*pcVar14)();
                *(undefined4 *)(puVar19 + iVar9 + 0x30) = uVar7;
                pcVar14 = *(code **)(puVar19 + iVar9 + 0x74);
                *(code **)(puVar19 + (int)DAT_8c07f834 + iVar9 + -4) = pcVar14;
                iVar16 = (*pcVar14)();
                *(int *)(puVar19 + iVar9 + 0x68) = iVar16;
                if (*(int *)(puVar19 + iVar9 + 0x30) == iVar16) {
                  iVar16 = -((((int)*(char *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x10) & 0x80U) == 0
                             ) - 1);
                  *(undefined4 *)(puVar19 + iVar9 + 0x48) =
                       *(undefined4 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x70);
                  *(int *)(puVar19 + iVar9 + 0x30) = iVar16;
                  if ((iVar16 == 0) &&
                     (*(char *)(iVar6 + *(int *)(*(int *)(puVar19 + iVar9 + 0xc) + 4) + 0xe) !=
                      '\x01')) {
                    iVar16 = *(int *)(puVar19 + iVar9 + 0x14);
                    (*(code *)PTR_FUN_8c07f844)();
                    *(byte *)(iVar16 + 0x10) = *(byte *)(iVar16 + 0x10) & 0x7f | (byte)DAT_8c07f838;
                  }
                  uVar1 = puVar15[2];
                  *(uint *)(puVar19 + iVar9 + 0x68) = (uint)uVar1;
                  if ((*(uint *)(puVar19 + iVar9 + 0x48) & 1 << (uVar1 & 0x1f)) == 0) {
                    (*(code *)PTR_FUN_8c07fc0c)
                              (*(undefined4 *)(puVar19 + iVar9 + 0xc),puVar15,
                               *(undefined4 *)(puVar19 + iVar9 + 0x14));
                  }
                }
              }
            }
            iVar12 = iVar12 + -1;
            iVar6 = iVar6 + 1;
            puVar15 = (ushort *)((int)puVar15 + (int)DAT_8c07f83a);
          } while (iVar12 != 0);
          if (in_FPSCR_SZ == '\0') {
            uVar21 = CONCAT44(*(undefined4 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x18),
                              SUB84(dVar20,0));
          }
          else {
            uVar21 = *(undefined8 *)(*(int *)(puVar19 + iVar9 + 0x14) + 0x18);
          }
          puVar4 = &DAT_8c07f848;
          if (in_FPSCR_SZ == '\0') {
            uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),DAT_8c07f848);
          }
          else {
            in_xd8 = CONCAT44(PTR_FUN_8c07f84c,DAT_8c07f848);
          }
          if (in_FPSCR_PR != '\0' || (float)uVar21 <= (float)((ulonglong)uVar21 >> 0x20)) {
            iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
            (*(code *)PTR_FUN_8c07f84c)(*(undefined4 *)(puVar19 + iVar9 + 0xc),iVar12);
            puVar4 = (undefined4 *)0x9;
            uVar5 = (uint)DAT_8c07f83c;
            *(undefined1 *)(iVar12 + 8) = 9;
            **(uint **)(puVar19 + iVar9 + 0x1c) = **(uint **)(puVar19 + iVar9 + 0x1c) | uVar5;
          }
        }
        else if (puVar4 == (undefined4 *)0xe) {
          puVar4 = (undefined4 *)
                   (*(code *)PTR_FUN_8c0803fc)
                             (*(undefined4 *)(puVar19 + iVar9 + 0xc),
                              *(undefined4 *)(puVar19 + iVar9 + 0x14));
          if (puVar4 == (undefined4 *)0x0) {
            iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
            uVar10 = *(undefined4 *)(puVar19 + iVar9 + 0xc);
            (*(code *)PTR_FUN_8c080400)(uVar10,iVar12);
            puVar25 = PTR_FUN_8c080404;
            bVar8 = *(byte *)(iVar12 + 2);
            *(int *)(puVar19 + iVar9 + 0x24) = iVar12 + 2;
            *(undefined **)(puVar19 + iVar9 + 0x28) = PTR_FUN_8c080404;
            *(byte *)(iVar12 + 2) = (bVar8 & (byte)DAT_8c0803f4 | 0x10) & (byte)DAT_8c0803f6 | 8;
            uVar7 = (*(code *)puVar25)();
            *(undefined4 *)(puVar19 + iVar9 + 0x30) = uVar7;
            uVar7 = (**(code **)(puVar19 + iVar9 + 0x28))();
            puVar25 = PTR_FUN_8c080408;
            *(undefined4 *)(puVar19 + iVar9 + 0x68) = uVar7;
            uVar7 = *(undefined4 *)(puVar19 + iVar9 + 0x30);
            *(undefined1 *)(iVar12 + 8) = 3;
            iVar12 = (*(code *)puVar25)(uVar10,uVar7);
            if (iVar12 == 0) {
              puVar4 = (undefined4 *)
                       (uint)*(byte *)(*(int *)(*(int *)(puVar19 + iVar9 + 0xc) + 0x20) *
                                       *(int *)(puVar19 + iVar9 + 0x68) +
                                       *(int *)(puVar19 + iVar9 + 0x30) +
                                      *(int *)((int)DAT_8c0803f8 + *(int *)(puVar19 + iVar9 + 0xc)))
              ;
              *(undefined4 **)(puVar19 + iVar9 + 0x30) = puVar4;
            }
            else {
              puVar4 = (undefined4 *)
                       (*(code *)PTR_FUN_8c08040c)
                                 (*(undefined4 *)(puVar19 + iVar9 + 0xc),
                                  *(undefined4 *)(puVar19 + iVar9 + 0x14),0);
            }
          }
        }
        else if (puVar4 == (undefined4 *)0xf) {
          iVar12 = *(int *)(puVar19 + iVar9 + 0x14);
          uVar7 = *(undefined4 *)(puVar19 + iVar9 + 0xc);
          *(undefined1 *)(iVar12 + 8) = 9;
          (*(code *)puVar25)(uVar7,iVar12);
          *(int *)(puVar19 + iVar9 + 0x24) = iVar12 + 2;
          *(undefined **)(puVar19 + iVar9 + 0x28) = PTR_FUN_8c07f9f4;
          iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
          uVar7 = (**(code **)(puVar19 + iVar9 + 0x28))();
          *(undefined4 *)(puVar19 + iVar9 + 0x2c) = uVar7;
          iVar12 = (**(code **)(puVar19 + iVar9 + 0x28))();
          puVar4 = (undefined4 *)
                   ((*(int *)(iVar6 + 0x20) * *(int *)(puVar19 + iVar9 + 0x2c) + iVar12) * 4);
          uVar5 = (uint)(*(int *)((int)puVar4 + *(int *)(DAT_8c07f9de + iVar6)) ==
                        *(int *)(puVar19 + iVar9 + 0x14));
          *(uint *)(puVar19 + iVar9 + 0x30) = uVar5;
          if (uVar5 != 0) {
            if ((**(uint **)(puVar19 + iVar9 + 0xc) & 2) == 0) {
LAB_8c0806bc:
              pcVar14 = *(code **)(puVar19 + iVar9 + 0x28);
              iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
              *(code **)(puVar19 + (int)DAT_8c08074c + iVar9 + -4) = pcVar14;
              uVar7 = (*pcVar14)();
              pcVar14 = *(code **)(puVar19 + iVar9 + 0x28);
              *(undefined4 *)(puVar19 + (int)DAT_8c080740 + iVar9 + -4) = uVar7;
              *(code **)(puVar19 + (int)DAT_8c08074e + iVar9 + -4) = pcVar14;
              iVar12 = (*pcVar14)();
              puVar4 = (undefined4 *)
                       ((*(int *)(iVar6 + 0x20) * *(int *)(puVar19 + (int)DAT_8c080740 + iVar9 + -4)
                        + iVar12) * 4);
              *(undefined4 *)((int)puVar4 + *(int *)(DAT_8c080744 + iVar6)) = 0;
            }
            else {
              uVar1 = **(ushort **)(puVar19 + iVar9 + 0x14);
              *(undefined **)(puVar19 + iVar9 + 0x34) = PTR_FUN_8c07f9f8;
              if ((uVar1 & 1) == 0) {
                uVar7 = *(undefined4 *)PTR_DAT_8c080754;
                *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel_ASSERT____8c080758;
                (**(code **)(puVar19 + iVar9 + 0x34))(uVar7);
                uVar1 = *(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                uVar7 = *(undefined4 *)PTR_DAT_8c080754;
                *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Panel__d_was_not_Used__8c08075c;
                *(uint *)(puVar19 + iVar9) = (uint)uVar1;
                puVar4 = (undefined4 *)(**(code **)(puVar19 + iVar9 + 0x34))(uVar7);
              }
              else {
                iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
                uVar7 = (**(code **)(puVar19 + iVar9 + 0x28))();
                pcVar14 = *(code **)(puVar19 + iVar9 + 0x28);
                *(undefined4 *)(puVar19 + (int)DAT_8c07f9e0 + iVar9 + -4) = uVar7;
                iVar12 = (*pcVar14)();
                iVar16 = *(int *)(iVar6 + 0x20);
                iVar6 = *(int *)(DAT_8c07f9de + iVar6);
                *(int *)(puVar19 + iVar9 + 0x3c) = iVar16;
                *(int *)(puVar19 + iVar9 + 0x38) = iVar6;
                if (*(int *)((iVar16 * *(int *)(puVar19 + (int)DAT_8c07f9e0 + iVar9 + -4) + iVar12)
                             * 4 + iVar6) == 0) {
                  *(uint *)(puVar19 + iVar9) =
                       (uint)*(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x34);
                  uVar7 = *(undefined4 *)PTR_DAT_8c080754;
                  *(undefined **)(puVar19 + iVar9 + -4) =
                       PTR_s_Off_Panel_Warning__Allready_Off_P_8c080760;
                  *(code **)(puVar19 + (int)DAT_8c080750 + iVar9 + -4) = pcVar14;
                  puVar4 = (undefined4 *)(*pcVar14)(uVar7);
                }
                else {
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x28);
                  *(code **)(puVar19 + (int)DAT_8c07f9e2 + iVar9 + -4) = pcVar14;
                  uVar7 = (*pcVar14)();
                  *(undefined4 *)(puVar19 + iVar9 + 0x40) = uVar7;
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x28);
                  *(code **)(puVar19 + (int)DAT_8c07f9e4 + iVar9 + -4) = pcVar14;
                  iVar12 = (*pcVar14)();
                  if (*(int *)((*(int *)(puVar19 + iVar9 + 0x3c) * *(int *)(puVar19 + iVar9 + 0x40)
                               + iVar12) * 4 + *(int *)(puVar19 + iVar9 + 0x38)) ==
                      *(int *)(puVar19 + iVar9 + 0x14)) {
                    *(uint *)(puVar19 + iVar9) =
                         (uint)*(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                    pcVar14 = *(code **)(puVar19 + iVar9 + 0x34);
                    uVar7 = *(undefined4 *)PTR_DAT_8c080788;
                    *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel__d_Passed__8c08078c;
                    *(code **)(puVar19 + (int)DAT_8c080784 + iVar9 + -4) = pcVar14;
                    (*pcVar14)(uVar7);
                    goto LAB_8c0806bc;
                  }
                  *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Off_Panel_ASSERT____8c07f9fc;
                  uVar7 = *(undefined4 *)PTR_DAT_8c07fa00;
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x34);
                  iVar6 = *(int *)(puVar19 + iVar9 + 0xc);
                  *(code **)(puVar19 + (int)DAT_8c07f9e6 + iVar9 + -4) = pcVar14;
                  (*pcVar14)(uVar7);
                  uVar7 = (**(code **)(puVar19 + iVar9 + 0x28))();
                  *(undefined4 *)(puVar19 + iVar9 + 0x40) = uVar7;
                  uVar7 = (**(code **)(puVar19 + iVar9 + 0x28))();
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x28);
                  *(undefined4 *)(puVar19 + (int)DAT_8c07f9e8 + iVar9 + -4) = uVar7;
                  uVar7 = (*pcVar14)();
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x28);
                  *(undefined4 *)(puVar19 + (int)DAT_8c07f9e0 + iVar9 + -4) = uVar7;
                  iVar12 = (*pcVar14)();
                  uVar7 = *(undefined4 *)PTR_DAT_8c07fa00;
                  uVar1 = *(ushort *)
                           (*(int *)((*(int *)(iVar6 + 0x20) *
                                      *(int *)(puVar19 + (int)DAT_8c07f9e0 + iVar9 + -4) + iVar12) *
                                     4 + *(int *)(DAT_8c07f9de + iVar6)) + 4);
                  *(undefined **)(puVar19 + iVar9 + -4) = PTR_s_Now_X__d_Y__d_is_Panel__d_8c07fa04;
                  *(undefined4 *)(puVar19 + iVar9) = *(undefined4 *)(puVar19 + iVar9 + 0x40);
                  uVar10 = *(undefined4 *)(puVar19 + (int)DAT_8c07f9e8 + iVar9 + -4);
                  *(uint *)(puVar19 + iVar9 + 8) = (uint)uVar1;
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x34);
                  *(undefined4 *)(puVar19 + iVar9 + 4) = uVar10;
                  *(code **)(puVar19 + (int)DAT_8c07f9ea + iVar9 + -4) = pcVar14;
                  (*pcVar14)(uVar7);
                  uVar7 = *(undefined4 *)PTR_DAT_8c07fa00;
                  *(uint *)(puVar19 + iVar9) =
                       (uint)*(ushort *)(*(int *)(puVar19 + iVar9 + 0x14) + 4);
                  pcVar14 = *(code **)(puVar19 + iVar9 + 0x34);
                  *(undefined **)(puVar19 + iVar9 + -4) =
                       PTR_s_Requester_Panel__d_can_not_offpa_8c07fa08;
                  *(code **)(puVar19 + (int)DAT_8c07f9ec + iVar9 + -4) = pcVar14;
                  puVar4 = (undefined4 *)(*pcVar14)(uVar7);
                }
              }
            }
          }
          **(uint **)(puVar19 + iVar9 + 0x1c) =
               **(uint **)(puVar19 + iVar9 + 0x1c) | (int)DAT_8c07fb66;
        }
      }
      iVar12 = *(int *)(puVar19 + iVar9 + 0x18);
      *(int *)(puVar19 + iVar9 + 0x18) = iVar12 + 1;
      *(int *)(puVar19 + iVar9 + 0x14) = *(int *)(puVar19 + iVar9 + 0x14) + 0x74;
    } while (iVar12 + 1 < *(int *)(puVar19 + iVar9 + 0x10));
  }
  return puVar4;
}

