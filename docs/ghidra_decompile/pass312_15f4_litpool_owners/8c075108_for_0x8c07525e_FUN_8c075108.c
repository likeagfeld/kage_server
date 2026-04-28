// query addr: 0x8c07525e
// containing entry: 8c075108
// name: FUN_8c075108
// signature: undefined FUN_8c075108(void)
// body addrs: 1330


void FUN_8c075108(double param_1,double param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  float fVar15;
  double dVar16;
  undefined8 in_dr14;
  double dVar17;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar13 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar13 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar13 + -4) = in_PR;
  iVar9 = 0;
  *(undefined4 *)((int)puVar13 + -0xc) = 0;
  iVar11 = 8;
  pbVar12 = *(byte **)(*(int *)(DAT_8c075254 + param_3) + 0x70);
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(DAT_8c075260,(int)in_dr14);
  }
  else {
    dVar17 = (double)CONCAT44(PTR_FUN_8c075264,DAT_8c075260);
  }
  *(int *)((int)puVar13 + -8) = param_3 + DAT_8c075256;
  do {
    uVar7 = SUB84(param_1,0);
    if ((*(char *)(param_3 + 0x3e + iVar9) == '\x01') &&
       (iVar10 = *(int *)(*(int *)((int)puVar13 + -8) + iVar9 * 4), iVar10 != 0)) {
      if ((pbVar12[2] & 8) == 0) {
        if (((pbVar12[2] & 4) != 0) && ((*(byte *)(iVar10 + DAT_8c07538c + 2) & 4) == 0)) {
          iVar9 = *(int *)((int)DAT_8c075390 + *(int *)(DAT_8c07538e + param_3)) +
                  DAT_8c075392 * iVar9;
          if ((*(byte *)(iVar9 + 0xb) & 6) != 0) {
            param_2 = (double)((ulonglong)param_2 & 0xffffffff);
            *(byte *)(iVar9 + 0xb) = *(byte *)(iVar9 + 0xb) & 0xf9;
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(iVar9 + 0x24) = 0;
            }
            else {
              *(double *)(iVar9 + 0x24) = param_2;
            }
          }
        }
        puVar2 = PTR___bfswu_8c0753a8;
        puVar1 = PTR_FUN_8c0753a4;
        uVar14 = SUB84(param_2,0);
        iVar9 = (int)DAT_8c075394;
        uVar4 = (*(code *)PTR_FUN_8c0753a4)(6);
        (*(code *)puVar2)(uVar4,6);
        uVar4 = (*(code *)puVar1)(iVar9);
        (*(code *)puVar2)(uVar4,iVar9);
        (*(code *)puVar2)(-(((*pbVar12 & 0x10) == 0) - 1),(int)DAT_8c075396);
        (*(code *)puVar2)(*pbVar12 & 0xf,(int)DAT_8c075398);
        *(byte *)((int)puVar13 + -0xe) = pbVar12[2];
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(*(undefined4 *)DAT_8c0753ac,uVar7);
        }
        else {
          param_1 = *DAT_8c0753ac;
        }
        *(byte *)((int)puVar13 + -0xd) = pbVar12[3] & 0xf;
        if (in_FPSCR_SZ == '\0') {
          uVar14 = *(undefined4 *)(DAT_8c07539a + param_3);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)(DAT_8c07539c + param_3),uVar14);
        }
        else {
          dVar16 = *(double *)(DAT_8c07539c + param_3);
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          fVar15 = SUB84(dVar16 - dVar16,0);
        }
        param_2 = dVar17;
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),fVar15);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) /
                                     (float)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
        }
        else {
          param_2 = param_2 / param_1;
        }
        if (in_FPSCR_PR == '\0' && SUB84(param_2,0) < (float)((ulonglong)param_2 >> 0x20)) {
          uVar7 = (*(code *)PTR_FUN_8c0754b4)(6);
          *(undefined **)((int)puVar13 + -0x28) = PTR_s_____Invalid_X_Pos__d_PlayerID__d_8c0754b8;
          *(undefined4 *)((int)puVar13 + -0x24) = uVar7;
          *(undefined4 *)((int)puVar13 + -0x20) = *(undefined4 *)((int)puVar13 + -0xc);
          (*(code *)PTR_FUN_8c0754bc)(param_3);
          iVar9 = (*(code *)PTR_FUN_8c0754c0)
                            (*(undefined4 *)(DAT_8c0754a8 + param_3),
                             *(undefined4 *)((int)puVar13 + -0xc),
                             (undefined1 *)((int)puVar13 + -0x14));
          puVar1 = PTR_FUN_8c0754b4;
          if (iVar9 != 0) {
            *(byte *)((int)puVar13 + -0x14) =
                 (*(byte *)((int)puVar13 + -0x14) & (byte)DAT_8c0754aa | 0x10) & (byte)DAT_8c0754ac
                 | 8;
          }
          uVar5 = (*(code *)PTR_FUN_8c0754b4)(6);
          uVar6 = (*(code *)puVar1)(6);
          if (((((int)(uVar5 & 0xffff) < (int)((uVar6 & 0xffff) - 1)) ||
               ((uVar5 & 0xffff) < (uVar6 & 0xffff) + 1)) ||
              (uVar5 = (*(code *)PTR_FUN_8c0754b4)((int)DAT_8c0754ae),
              (int)(uVar5 & 0xffff) < (int)((uVar6 & 0xffff) - 1))) ||
             ((uVar5 & 0xffff) < (uVar6 & 0xffff) + 1)) {
            puVar1 = PTR___bfswu_8c0754c4;
            iVar9 = (int)DAT_8c0754ae;
            (*(code *)PTR___bfswu_8c0754c4)(6);
            uVar7 = (*(code *)PTR_FUN_8c0754b4)(iVar9);
            (*(code *)puVar1)(uVar7,iVar9);
            (*(code *)puVar1)(-(((*(byte *)((int)puVar13 + -0x14) & 0x10) == 0) - 1),
                              (int)DAT_8c0754b0);
            (*(code *)puVar1)(*(byte *)((int)puVar13 + -0x14) & 0xf,(int)DAT_8c0754b2);
          }
        }
        uVar3 = (*(code *)PTR_FUN_8c0753a4)(6);
        if ((uVar3 == 0) || (*(int *)(DAT_8c07539e + param_3) <= (int)(uint)uVar3)) {
          *(undefined **)((int)puVar13 + -0x28) = PTR_s_____Invalid_X_Pos__d_PlayerID__d_8c0755bc;
          *(uint *)((int)puVar13 + -0x24) = (uint)uVar3;
          *(undefined4 *)((int)puVar13 + -0x20) = *(undefined4 *)((int)puVar13 + -0xc);
          (*(code *)PTR_FUN_8c0755c0)(param_3);
          iVar9 = (*(code *)PTR_FUN_8c0755c4)
                            (*(undefined4 *)(DAT_8c0755b0 + param_3),
                             *(undefined4 *)((int)puVar13 + -0xc),
                             (undefined1 *)((int)puVar13 + -0x14));
          puVar2 = PTR___bfswu_8c0755cc;
          puVar1 = PTR_FUN_8c0755c8;
          if (iVar9 != 0) {
            *(byte *)((int)puVar13 + -0x14) =
                 (*(byte *)((int)puVar13 + -0x14) & (byte)DAT_8c0755b2 | 0x10) & (byte)DAT_8c0755b4
                 | 8;
          }
          iVar9 = (int)DAT_8c0755b6;
          uVar7 = (*(code *)PTR_FUN_8c0755c8)(6);
          (*(code *)puVar2)(uVar7,6);
          uVar7 = (*(code *)puVar1)(iVar9);
          (*(code *)puVar2)(uVar7,iVar9);
          (*(code *)puVar2)(-(((*(byte *)((int)puVar13 + -0x14) & 0x10) == 0) - 1),(int)DAT_8c0755b8
                           );
          (*(code *)puVar2)(*(byte *)((int)puVar13 + -0x14) & 0xf,(int)DAT_8c0755ba);
          *(undefined **)((int)puVar13 + -0x28) = PTR_s____Update_PlayerID__d_8c0755d0;
          *(undefined4 *)((int)puVar13 + -0x24) = *(undefined4 *)((int)puVar13 + -0xc);
          (*(code *)PTR_FUN_8c0755c0)(param_3);
          uVar7 = (*(code *)puVar1)(6);
          uVar4 = (*(code *)puVar1)(iVar9);
          *(undefined4 *)((int)puVar13 + -0x24) = uVar7;
          *(undefined4 *)((int)puVar13 + -0x20) = uVar4;
          *(undefined **)((int)puVar13 + -0x28) = PTR_s____mPosition__d__d__d__d_8c0755d4;
          *(uint *)((int)puVar13 + -0x1c) =
               -((((int)*(char *)((int)puVar13 + -0x10) & 0x10U) == 0) - 1);
          *(uint *)((int)puVar13 + -0x18) = (int)*(char *)((int)puVar13 + -0x10) & 0xf;
          (*(code *)PTR_FUN_8c0755c0)(param_3);
        }
        uVar3 = (*(code *)PTR_FUN_8c0753a4)((int)DAT_8c075394);
        if ((uVar3 == 0) || (*(int *)(DAT_8c0753a0 + param_3) <= (int)(uint)uVar3)) {
          *(undefined **)((int)puVar13 + -0x28) = PTR_s_____Invalid_Y_Pos__d_PlayerID__d_8c0756d4;
          *(uint *)((int)puVar13 + -0x24) = (uint)uVar3;
          *(undefined4 *)((int)puVar13 + -0x20) = *(undefined4 *)((int)puVar13 + -0xc);
          (*(code *)PTR_FUN_8c0756d8)(param_3);
          iVar9 = (*(code *)PTR_FUN_8c0756dc)
                            (*(undefined4 *)(DAT_8c0756c6 + param_3),
                             *(undefined4 *)((int)puVar13 + -0xc),
                             (undefined1 *)((int)puVar13 + -0x14));
          if (iVar9 != 0) {
            *(byte *)((int)puVar13 + -0x14) =
                 (*(byte *)((int)puVar13 + -0x14) & (byte)DAT_8c0756c8 | 0x10) & (byte)DAT_8c0756ca
                 | 8;
          }
          iVar9 = (int)DAT_8c0756cc;
          uVar7 = (*(code *)PTR_FUN_8c0756e0)(6);
          (*(code *)PTR___bfswu_8c0756e4)(uVar7,6);
          uVar7 = (*(code *)PTR_FUN_8c0756e0)(iVar9);
          (*(code *)PTR___bfswu_8c0756e4)(uVar7,iVar9);
          (*(code *)PTR___bfswu_8c0756e4)
                    (-(((*(byte *)((int)puVar13 + -0x14) & 0x10) == 0) - 1),(int)DAT_8c0756ce);
          (*(code *)PTR___bfswu_8c0756e4)(*(byte *)((int)puVar13 + -0x14) & 0xf,(int)DAT_8c0756d0);
          *(undefined **)((int)puVar13 + -0x28) = PTR_s____Update_PlayerID__d_8c0756e8;
          *(undefined4 *)((int)puVar13 + -0x24) = *(undefined4 *)((int)puVar13 + -0xc);
          (*(code *)PTR_FUN_8c0756d8)(param_3);
          uVar7 = (*(code *)PTR_FUN_8c0756e0)(6);
          uVar4 = (*(code *)PTR_FUN_8c0756e0)(iVar9);
          *(undefined **)((int)puVar13 + -0x28) = PTR_s____mPosition__d__d__d__d_8c0756ec;
          *(undefined4 *)((int)puVar13 + -0x24) = uVar7;
          *(undefined4 *)((int)puVar13 + -0x20) = uVar4;
          *(uint *)((int)puVar13 + -0x1c) =
               -((((int)*(char *)((int)puVar13 + -0x10) & 0x10U) == 0) - 1);
          *(uint *)((int)puVar13 + -0x18) = (int)*(char *)((int)puVar13 + -0x10) & 0xf;
          (*(code *)PTR_FUN_8c0756d8)(param_3);
        }
        (*(code *)PTR_FUN_8c0753b0)(iVar10,(undefined1 *)((int)puVar13 + -0x10));
      }
      else if (*(char *)(param_3 + 0x3e + iVar9) != '\x03') {
        iVar10 = *(int *)((int)puVar13 + -8);
        *(undefined1 *)(iVar9 + param_3 + 0x3e) = 3;
        (*(code *)PTR_FUN_8c075264)(*(undefined4 *)(iVar10 + iVar9 * 4));
        iVar9 = *(int *)(*(int *)(*(int *)((int)puVar13 + -0xc) * 4 + iVar10) + 0x28);
        (**(code **)(iVar9 + 0x2c))
                  (*(int *)(iVar10 + *(int *)((int)puVar13 + -0xc) * 4) + *(int *)(iVar9 + 0x24));
        uVar5 = *(uint *)((int)puVar13 + -0xc);
        if (*(int *)(iVar10 + uVar5 * 4) != 0) {
          if (*(int *)(*(int *)((int)puVar13 + -8) + uVar5 * 4) != 0) {
            iVar9 = *(int *)(*(int *)(uVar5 * 4 + *(int *)((int)puVar13 + -8)) + 0x28);
            (**(code **)(iVar9 + 0x14))
                      (*(int *)(*(int *)((int)puVar13 + -8) + uVar5 * 4) + *(int *)(iVar9 + 0xc),3);
          }
          uVar5 = *(uint *)((int)puVar13 + -0xc);
          *(undefined4 *)(uVar5 * 4 + *(int *)((int)puVar13 + -8)) = 0;
        }
        if ((int)uVar5 < 0) {
          uVar6 = 1 >> (~uVar5 & 0x1f) + 1;
        }
        else {
          uVar6 = 1 << (uVar5 & 0x1f);
        }
        *(uint *)((int)puVar13 + -0x24) = uVar5;
        *(uint *)((int)DAT_8c075258 + *(int *)(DAT_8c075254 + param_3)) =
             *(uint *)((int)DAT_8c075258 + *(int *)(DAT_8c075254 + param_3)) | uVar6;
        *(undefined4 *)(*(int *)(DAT_8c075254 + param_3) + 0x48) = 0x18;
        *(undefined **)((int)puVar13 + -0x28) = PTR_s____Now_Lost_PlayerID__d_8c075268;
        (*(code *)PTR_FUN_8c07526c)(param_3);
        puVar8 = (ushort *)
                 ((int)DAT_8c07525e * *(int *)((int)puVar13 + -0xc) +
                 *(int *)((int)DAT_8c07525c + *(int *)(DAT_8c07525a + param_3)));
        if ((puVar8 != (ushort *)0x0) && ((*puVar8 & 1) != 0)) {
          *puVar8 = *puVar8 & 0xfffe;
        }
      }
    }
    iVar11 = iVar11 + -1;
    pbVar12 = pbVar12 + 4;
    iVar9 = *(int *)((int)puVar13 + -0xc) + 1;
    *(int *)((int)puVar13 + -0xc) = iVar9;
  } while (iVar11 != 0);
  return;
}

