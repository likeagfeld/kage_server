// entry: 8c016e94
// name: FUN_8c016e94


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c016e94(undefined4 param_1,undefined4 param_2,int param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  uint *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  double dVar20;
  float fVar22;
  undefined8 in_dr14;
  ulonglong uVar23;
  bool bVar24;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  undefined4 uVar21;
  
  if (in_FPSCR_SZ == '\0') {
    puVar14 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar14 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar14 + -4) = in_PR;
  iVar13 = *(int *)((int)DAT_8c016f54 + *(int *)(DAT_8c016f50 + param_3)) +
           (int)DAT_8c016f52 * (uint)*(ushort *)(param_3 + 0x54);
  puVar12 = (undefined2 *)(param_3 + DAT_8c016f56);
  uVar1 = *puVar12;
  *(undefined2 *)((int)puVar14 + -0x56) = puVar12[1];
  *(undefined2 *)((int)puVar14 + -0x58) = uVar1;
  iVar6 = *(int *)(param_3 + 0x58);
  if (in_FPSCR_SZ == '\0') {
    uVar18 = *(undefined4 *)(iVar6 + 0x4c);
    uVar21 = *(undefined4 *)(iVar6 + 0x50);
    uVar17 = CONCAT44(*(undefined4 *)(iVar6 + 0x54),param_2);
    *(undefined4 *)((int)puVar14 + -0x54) = uVar18;
    *(undefined4 *)((int)puVar14 + -0x50) = uVar21;
  }
  else {
    uVar19 = *(undefined8 *)(iVar6 + 0x50);
    uVar17 = *(undefined8 *)(iVar6 + 0x54);
    uVar18 = (undefined4)uVar19;
    *(undefined8 *)((int)puVar14 + -0x54) = *(undefined8 *)(iVar6 + 0x4c);
    *(undefined8 *)((int)puVar14 + -0x50) = uVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar14 + -0x4c) = (int)((ulonglong)uVar17 >> 0x20);
  }
  else {
    *(undefined8 *)((int)puVar14 + -0x4c) = uVar17;
  }
  *(undefined4 *)((int)puVar14 + -0x48) = *(undefined4 *)((int)puVar14 + -0x54);
  *(undefined4 *)((int)puVar14 + -0x40) = *(undefined4 *)((int)puVar14 + -0x4c);
  cVar2 = *(char *)(iVar13 + 0x19);
  *(undefined4 *)((int)puVar14 + -0x44) = *(undefined4 *)((int)puVar14 + -0x50);
  if (cVar2 == '\x04') {
    (*(code *)PTR_FUN_8c016f5c)(param_3 + 0x10,0x12);
    uVar18 = (undefined4)uVar17;
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(*(undefined4 *)(DAT_8c0170b8 + param_3),param_1);
      dVar20 = (double)CONCAT44(DAT_8c0170cc,uVar18);
    }
    else {
      dVar16 = *(double *)(DAT_8c0170b8 + param_3);
      dVar20 = (double)CONCAT44(PTR_FUN_8c0170d0,DAT_8c0170cc);
    }
    if (in_FPSCR_PR == '\0') {
      uVar15 = SUB84(dVar16,0);
    }
    else {
      uVar15 = SUB84(dVar16 * dVar20,0);
    }
    FUN_8c01668c(param_3,param_4,(undefined4 *)((int)puVar14 + -0x48));
    uVar18 = (undefined4)in_dr14;
    iVar6 = *(int *)(param_3 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar21 = *(undefined4 *)(iVar6 + 0x50);
      dVar16 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x54),(int)uVar17);
      *(undefined4 *)((int)puVar14 + -0x3c) = *(undefined4 *)(iVar6 + 0x4c);
      *(undefined4 *)((int)puVar14 + -0x38) = uVar21;
    }
    else {
      uVar17 = *(undefined8 *)(iVar6 + 0x50);
      dVar16 = *(double *)(iVar6 + 0x54);
      *(undefined8 *)((int)puVar14 + -0x3c) = *(undefined8 *)(iVar6 + 0x4c);
      *(undefined8 *)((int)puVar14 + -0x38) = uVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar14 + -0x34) = (int)((ulonglong)dVar16 >> 0x20);
    }
    else {
      *(double *)((int)puVar14 + -0x34) = dVar16;
    }
    *(undefined4 *)((int)puVar14 + -0x2c) = *(undefined4 *)((int)puVar14 + -0x38);
    *(undefined4 *)((int)puVar14 + -0x30) = *(undefined4 *)((int)puVar14 + -0x3c);
    *(undefined4 *)((int)puVar14 + -0x28) = *(undefined4 *)((int)puVar14 + -0x34);
    if (in_FPSCR_SZ != '\0') {
      uVar15 = (uint)*(undefined8 *)((int)puVar14 + -0x30);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(uint *)((int)puVar14 + -0x28);
    }
    (*(code *)PTR_FUN_8c0170d0)
              (*(undefined4 *)(*(int *)(DAT_8c0170ba + param_3) + 8),
               (undefined1 *)((int)puVar14 + -0x24),0);
    if (in_FPSCR_SZ == '\0') {
      uVar23 = CONCAT44(*(undefined4 *)(DAT_8c0170bc + param_3),uVar18);
    }
    else {
      uVar23 = *(ulonglong *)(DAT_8c0170bc + param_3);
    }
    uVar3 = (*(code *)PTR_FUN_8c0170d4)();
    if (((uVar3 == 0) && (uVar4 = (*(code *)PTR_FUN_8c0170d4)(), uVar4 != 0)) &&
       ((uint)uVar4 != *(int *)(*(int *)(DAT_8c0170ba + param_3) + 0x24) - 1U)) {
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44((undefined4)DAT_8c0170d8,(int)uVar23);
      }
      else {
        uVar23 = CONCAT44(DAT_8c0170d8._4_4_,(undefined4)DAT_8c0170d8);
      }
      *(undefined1 *)(DAT_8c0170c0 + param_3) = 2;
    }
    iVar6 = *(int *)(DAT_8c0170ba + param_3);
    uVar4 = (*(code *)PTR_FUN_8c0170d4)();
    if ((((uint)uVar3 == *(int *)(iVar6 + 0x20) - 1U) && (uVar4 != 0)) &&
       ((uint)uVar4 != *(int *)(iVar6 + 0x24) - 1U)) {
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44(DAT_8c0170d8._4_4_,(int)uVar23);
      }
      else {
        uVar23 = CONCAT44(_DAT_8c0170e0,DAT_8c0170d8._4_4_);
      }
      *(undefined1 *)(DAT_8c0170c0 + param_3) = 1;
    }
    if (((uVar4 == 0) && (uVar3 != 0)) && ((uint)uVar3 != *(int *)(iVar6 + 0x20) - 1U)) {
      uVar23 = uVar23 & 0xffffffff;
      *(undefined1 *)(DAT_8c0170c0 + param_3) = 8;
    }
    if ((((uint)uVar4 == *(int *)(iVar6 + 0x24) - 1U) && (uVar3 != 0)) &&
       ((uint)uVar3 != *(int *)(iVar6 + 0x20) - 1U)) {
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44(_DAT_8c0170e0,(int)uVar23);
      }
      else {
        uVar23 = CONCAT44(uRam8c0170e4,_DAT_8c0170e0);
      }
      *(undefined1 *)(DAT_8c0170c0 + param_3) = 4;
    }
    uVar7 = *(uint *)(param_3 + 0x2c);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(DAT_8c0170c2 + param_3) = (int)(uVar23 >> 0x20);
    }
    else {
      *(ulonglong *)(DAT_8c0170c2 + param_3) = uVar23;
    }
    iVar9 = (int)DAT_8c0170c6;
    puVar11 = *(uint **)(DAT_8c0170ba + param_3);
    iVar5 = (int)DAT_8c0170c8;
    *(uint *)(param_3 + 0x2c) = uVar7 | (int)DAT_8c0170c4;
    iVar6 = DAT_8c017158;
    iVar5 = *(int *)(iVar5 + (int)puVar11);
    uVar7 = (uint)*(ushort *)(param_3 + 0x54);
    if ((*puVar11 & 4) == 0) {
      iVar8 = 1;
      if (((*(byte *)((int)param_4 + 3) & 0x20) != 0) &&
         ((*(byte *)((int)puVar14 + -0x55) & 0x20) != 0)) {
        iVar8 = 4;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)PTR_DAT_8c017150,0x3f800000);
      }
      else {
        dVar20 = *(double *)PTR_DAT_8c017150;
      }
      if (in_FPSCR_PR == '\0') {
        fVar22 = (float)((ulonglong)dVar20 >> 0x20);
        dVar20 = (double)CONCAT44(fVar22,SUB84(dVar20,0) / fVar22);
      }
      else {
        dVar20 = dVar20 / dVar20;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c017154 + iVar8 * 4),0x3f800000);
      }
      else {
        dVar16 = *(double *)(PTR_DAT_8c017154 + iVar8 * 4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar20,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 * dVar20;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(DAT_8c017146 + param_3) = (int)((ulonglong)dVar16 >> 0x20);
      }
      else {
        *(double *)(DAT_8c017146 + param_3) = dVar16;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)(DAT_8c017148 + param_3),
                                  *(undefined4 *)(iVar6 + 0x34));
      }
      else {
        dVar20 = *(double *)(DAT_8c017148 + param_3);
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 + dVar20;
      }
      fVar22 = (float)((ulonglong)dVar20 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(float *)(DAT_8c017148 + param_3) = fVar22;
      }
      else {
        *(double *)(DAT_8c017148 + param_3) = dVar20;
      }
      if ((*(byte *)((int)param_4 + 3) & 0x10) != 0) {
        iVar6 = 0x40;
        iVar8 = (int)DAT_8c01714c;
        puVar10 = *(ushort **)((int)DAT_8c01714a + (int)puVar11);
        *(uint *)((int)puVar14 + -0x14) = iVar5 + iVar9 * uVar7;
        do {
          if (((*puVar10 & 1) != 0) && (((int)*(char *)((int)puVar10 + 9) & 0xfU) == uVar7))
          goto LAB_8c01713e;
          iVar6 = iVar6 + -1;
          puVar10 = (ushort *)((int)puVar10 + iVar8);
        } while (iVar6 != 0);
        if (in_FPSCR_PR == '\0') {
          bVar24 = fVar22 < SUB84(dVar16,0);
        }
        else {
          bVar24 = dVar20 < dVar16;
        }
        iVar6 = *(int *)((int)puVar14 + -0x14);
        if (!bVar24) {
          iVar5 = (*(code *)PTR_FUN_8c0172d0)(puVar11,uVar7);
          uVar18 = SUB84(dVar20,0);
          if (iVar5 != 0) {
            uVar1 = *(undefined2 *)(param_3 + 0x54);
            *(undefined4 *)((int)puVar14 + -0x5c) = 3;
            (*(code *)PTR_FUN_8c0172d4)
                      (*(undefined4 *)(DAT_8c0172c6 + param_3),uVar1,
                       *(undefined1 *)(DAT_8c0172c8 + param_3),param_4);
            iVar5 = 0x40;
            uVar3 = *(ushort *)(param_3 + 0x54);
            *(undefined4 *)((int)puVar14 + -8) =
                 *(undefined4 *)((int)DAT_8c0172ca + *(int *)(DAT_8c0172c6 + param_3));
            do {
              if (((**(ushort **)((int)puVar14 + -8) & 1) != 0) &&
                 (((short)*(char *)(*(int *)((int)puVar14 + -8) + 9) & 0xfU) == uVar3)) break;
              iVar5 = iVar5 + -1;
              *(int *)((int)puVar14 + -8) = *(int *)((int)puVar14 + -8) + iVar8;
            } while (iVar5 != 0);
            iVar5 = (*(code *)PTR_FUN_8c0172d8)(*(undefined4 *)(param_3 + 0x58));
            uVar21 = *(undefined4 *)(iVar5 + 0x84);
            *(undefined4 *)((int)puVar14 + -0x20) = *(undefined4 *)(iVar5 + 0x80);
            *(undefined4 *)((int)puVar14 + -0x1c) = uVar21;
            if (in_FPSCR_SZ == '\0') {
              uVar17 = CONCAT44(*(undefined4 *)((int)puVar14 + -0x20),uVar18);
            }
            else {
              uVar17 = *(undefined8 *)((int)puVar14 + -0x20);
            }
            *(undefined4 *)((int)puVar14 + -0x18) = *(undefined4 *)(iVar5 + 0x88);
            if (in_FPSCR_SZ == '\0') {
              *(int *)(*(int *)((int)puVar14 + -8) + 100) = (int)((ulonglong)uVar17 >> 0x20);
              dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar14 + -0x1c),DAT_8c0172dc);
            }
            else {
              *(undefined8 *)(*(int *)((int)puVar14 + -8) + 100) = uVar17;
              dVar20 = *(double *)((int)puVar14 + -0x1c);
            }
            if (in_FPSCR_PR == '\0') {
              dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + SUB84(dVar20,0),
                                        SUB84(dVar20,0));
            }
            else {
              dVar20 = dVar20 + dVar20;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(*(int *)((int)puVar14 + -8) + 0x68) = (int)((ulonglong)dVar20 >> 0x20);
              uVar17 = CONCAT44(*(undefined4 *)((int)puVar14 + -0x18),SUB84(dVar20,0));
            }
            else {
              *(double *)(*(int *)((int)puVar14 + -8) + 0x68) = dVar20;
              uVar17 = *(undefined8 *)((int)puVar14 + -0x18);
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(*(int *)((int)puVar14 + -8) + 0x6c) = (int)((ulonglong)uVar17 >> 0x20);
            }
            else {
              *(undefined8 *)(*(int *)((int)puVar14 + -8) + 0x6c) = uVar17;
            }
            (*(code *)PTR_FUN_8c0172e0)
                      (*(undefined4 *)(DAT_8c0172c6 + param_3),*(int *)((int)puVar14 + -8) + 100,
                       *(int *)((int)puVar14 + -8) + 0x6c);
            if (in_FPSCR_SZ != '\0') {
              uVar15 = (uint)*(undefined8 *)(*(int *)((int)puVar14 + -8) + 100);
            }
            if (in_FPSCR_SZ == '\0') {
              uVar15 = *(uint *)(*(int *)((int)puVar14 + -8) + 0x6c);
            }
            (*(code *)PTR_FUN_8c0172e4)
                      (*(undefined4 *)(DAT_8c0172c6 + param_3),*(int *)((int)puVar14 + -8) + 2);
            uVar18 = (*(code *)PTR_FUN_8c0172e8)();
            uVar21 = *(undefined4 *)(DAT_8c0172c6 + param_3);
            uVar7 = DAT_8c0172f0;
            if (in_FPSCR_SZ == '\0') {
              uVar7 = uVar15;
            }
            *(undefined2 **)((int)puVar14 + -0x5c) = param_4;
            (*(code *)PTR_FUN_8c0172ec)(uVar21,*(undefined4 *)((int)puVar14 + -8),uVar18,3);
            cVar2 = PTR_DAT_8c0172f4[0x14];
            *(undefined **)((int)puVar14 + -0x10) = PTR_DAT_8c0172f4 + 0x14;
            if (cVar2 == '\0') {
              *(undefined4 *)((int)puVar14 + -0xc) = *DAT_8c017304;
            }
            else {
              *(undefined4 *)((int)puVar14 + -0xc) = *DAT_8c0172f8;
            }
            (*(code *)PTR_FUN_8c0172fc)(PTR_DAT_8c0172f4[0x15]);
            (*(code *)PTR_FUN_8c017300)
                      (*(undefined4 *)((int)puVar14 + -0xc),
                       *(undefined1 *)(*(int *)((int)puVar14 + -0x10) + 2),
                       *(undefined1 *)(*(int *)((int)puVar14 + -0x10) + 3),0);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(iVar6 + 0xc) = 0;
            }
            else {
              *(ulonglong *)(iVar6 + 0xc) = (ulonglong)uVar7;
            }
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(DAT_8c0172cc + param_3) = 0;
            }
            else {
              *(ulonglong *)(DAT_8c0172cc + param_3) = (ulonglong)uVar7;
            }
          }
        }
      }
    }
LAB_8c01713e:
    uVar18 = SUB84(dVar16,0);
    *(undefined2 *)(iVar13 + 2) = *param_4;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)((int)puVar14 + -0x48),*(undefined4 *)((int)puVar14 + -0x44));
    uVar19 = CONCAT44(*(undefined4 *)((int)puVar14 + -0x40),uVar18);
  }
  else {
    uVar17 = *(undefined8 *)((int)puVar14 + -0x48);
    uVar19 = *(undefined8 *)((int)puVar14 + -0x40);
  }
  (*(code *)PTR_FUN_8c016f60)(uVar17,uVar19,*(undefined4 *)(param_3 + 0x58));
  *puVar12 = *param_4;
  *(undefined1 *)(DAT_8c016f58 + param_3) = *(undefined1 *)(param_4 + 1);
  *(undefined1 *)(DAT_8c016f5a + param_3) = *(undefined1 *)((int)param_4 + 3);
  return;
}

