// entry: 8c074b18
// name: FUN_8c074b18


void FUN_8c074b18(double param_1,double param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
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
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar13 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar13 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar13 + -4) = in_PR;
  if (((int)*(char *)(param_3 + 0x12) & (int)DAT_8c074c6c) == 0xf) {
    iVar9 = 0;
    *(undefined4 *)((int)puVar13 + -0xc) = 0;
    iVar11 = 8;
    pbVar12 = *(byte **)(*(int *)(DAT_8c074c6e + param_3) + 0x70);
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)CONCAT44(DAT_8c074c7c,(int)in_dr14);
    }
    else {
      dVar17 = (double)CONCAT44(PTR_FUN_8c074c80,DAT_8c074c7c);
    }
    *(int *)((int)puVar13 + -8) = param_3 + DAT_8c074c70;
    do {
      uVar5 = SUB84(param_1,0);
      if ((*(char *)(param_3 + 0x3e + iVar9) == '\x01') &&
         (iVar10 = *(int *)(*(int *)((int)puVar13 + -8) + iVar9 * 4), iVar10 != 0)) {
        if ((pbVar12[2] & 8) == 0) {
          if (((pbVar12[2] & 4) != 0) && ((*(byte *)(iVar10 + DAT_8c074da4 + 2) & 4) == 0)) {
            iVar9 = *(int *)((int)DAT_8c074da8 + *(int *)(DAT_8c074da6 + param_3)) +
                    DAT_8c074daa * iVar9;
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
          puVar2 = PTR___bfswu_8c074dc0;
          puVar1 = PTR_FUN_8c074dbc;
          uVar14 = SUB84(param_2,0);
          iVar9 = (int)DAT_8c074dac;
          uVar4 = (*(code *)PTR_FUN_8c074dbc)(6);
          (*(code *)puVar2)(uVar4,6);
          uVar4 = (*(code *)puVar1)(iVar9);
          (*(code *)puVar2)(uVar4,iVar9);
          (*(code *)puVar2)(-(((*pbVar12 & 0x10) == 0) - 1),(int)DAT_8c074dae);
          (*(code *)puVar2)(*pbVar12 & 0xf,(int)DAT_8c074db0);
          *(byte *)((int)puVar13 + -0xe) = pbVar12[2];
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)DAT_8c074dc4,uVar5);
          }
          else {
            param_1 = *DAT_8c074dc4;
          }
          *(byte *)((int)puVar13 + -0xd) = pbVar12[3] & 0xf;
          if (in_FPSCR_SZ == '\0') {
            uVar14 = *(undefined4 *)(DAT_8c074db2 + param_3);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)CONCAT44(*(undefined4 *)(DAT_8c074db4 + param_3),uVar14);
          }
          else {
            dVar16 = *(double *)(DAT_8c074db4 + param_3);
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
            uVar5 = (*(code *)PTR_FUN_8c0750f4)(6);
            *(undefined **)((int)puVar13 + -0x28) = PTR_s_____Invalid_X_Pos__d_PlayerID__d_8c0750f8;
            *(undefined4 *)((int)puVar13 + -0x24) = uVar5;
            *(undefined4 *)((int)puVar13 + -0x20) = *(undefined4 *)((int)puVar13 + -0xc);
            (*(code *)PTR_FUN_8c0750fc)(param_3);
            iVar9 = (*(code *)PTR_FUN_8c075100)
                              (*(undefined4 *)(DAT_8c0750e8 + param_3),
                               *(undefined4 *)((int)puVar13 + -0xc),
                               (undefined1 *)((int)puVar13 + -0x14));
            puVar1 = PTR_FUN_8c0750f4;
            if (iVar9 != 0) {
              *(byte *)((int)puVar13 + -0x14) =
                   (*(byte *)((int)puVar13 + -0x14) & (byte)DAT_8c0750ea | 0x10) &
                   (byte)DAT_8c0750ec | 8;
            }
            uVar6 = (*(code *)PTR_FUN_8c0750f4)(6);
            uVar7 = (*(code *)puVar1)(6);
            if (((((int)(uVar6 & 0xffff) < (int)((uVar7 & 0xffff) - 1)) ||
                 ((uVar6 & 0xffff) < (uVar7 & 0xffff) + 1)) ||
                (uVar6 = (*(code *)PTR_FUN_8c0750f4)((int)DAT_8c0750ee),
                (int)(uVar6 & 0xffff) < (int)((uVar7 & 0xffff) - 1))) ||
               ((uVar6 & 0xffff) < (uVar7 & 0xffff) + 1)) {
              puVar1 = PTR___bfswu_8c075104;
              iVar9 = (int)DAT_8c0750ee;
              (*(code *)PTR___bfswu_8c075104)(6);
              uVar5 = (*(code *)PTR_FUN_8c0750f4)(iVar9);
              (*(code *)puVar1)(uVar5,iVar9);
              (*(code *)puVar1)(-(((*(byte *)((int)puVar13 + -0x14) & 0x10) == 0) - 1),
                                (int)DAT_8c0750f0);
              (*(code *)puVar1)(*(byte *)((int)puVar13 + -0x14) & 0xf,(int)DAT_8c0750f2);
            }
          }
          uVar3 = (*(code *)PTR_FUN_8c074dbc)(6);
          if ((uVar3 == 0) || (*(int *)(DAT_8c074db6 + param_3) <= (int)(uint)uVar3)) {
            *(undefined **)((int)puVar13 + -0x28) = PTR_s_____Invalid_X_Pos__d_PlayerID__d_8c074ec0;
            *(uint *)((int)puVar13 + -0x24) = (uint)uVar3;
            *(undefined4 *)((int)puVar13 + -0x20) = *(undefined4 *)((int)puVar13 + -0xc);
            (*(code *)PTR_FUN_8c074ec4)(param_3);
            iVar9 = (*(code *)PTR_FUN_8c074ec8)
                              (*(undefined4 *)(DAT_8c074eb4 + param_3),
                               *(undefined4 *)((int)puVar13 + -0xc),
                               (undefined1 *)((int)puVar13 + -0x14));
            puVar2 = PTR___bfswu_8c074ed0;
            puVar1 = PTR_FUN_8c074ecc;
            if (iVar9 != 0) {
              *(byte *)((int)puVar13 + -0x14) =
                   (*(byte *)((int)puVar13 + -0x14) & (byte)DAT_8c074eb6 | 0x10) &
                   (byte)DAT_8c074eb8 | 8;
            }
            iVar9 = (int)DAT_8c074eba;
            uVar5 = (*(code *)PTR_FUN_8c074ecc)(6);
            (*(code *)puVar2)(uVar5,6);
            uVar5 = (*(code *)puVar1)(iVar9);
            (*(code *)puVar2)(uVar5,iVar9);
            (*(code *)puVar2)(-(((*(byte *)((int)puVar13 + -0x14) & 0x10) == 0) - 1),
                              (int)DAT_8c074ebc);
            (*(code *)puVar2)(*(byte *)((int)puVar13 + -0x14) & 0xf,(int)DAT_8c074ebe);
            *(undefined **)((int)puVar13 + -0x28) = PTR_s____Update_PlayerID__d_8c074ed4;
            *(undefined4 *)((int)puVar13 + -0x24) = *(undefined4 *)((int)puVar13 + -0xc);
            (*(code *)PTR_FUN_8c074ec4)(param_3);
            uVar5 = (*(code *)puVar1)(6);
            uVar4 = (*(code *)puVar1)(iVar9);
            *(undefined4 *)((int)puVar13 + -0x24) = uVar5;
            *(undefined4 *)((int)puVar13 + -0x20) = uVar4;
            *(undefined **)((int)puVar13 + -0x28) = PTR_s____mPosition__d__d__d__d_8c074ed8;
            *(uint *)((int)puVar13 + -0x1c) =
                 -((((int)*(char *)((int)puVar13 + -0x10) & 0x10U) == 0) - 1);
            *(uint *)((int)puVar13 + -0x18) = (int)*(char *)((int)puVar13 + -0x10) & 0xf;
            (*(code *)PTR_FUN_8c074ec4)(param_3);
          }
          uVar3 = (*(code *)PTR_FUN_8c074dbc)((int)DAT_8c074dac);
          if ((uVar3 == 0) || (*(int *)(DAT_8c074db8 + param_3) <= (int)(uint)uVar3)) {
            *(undefined **)((int)puVar13 + -0x28) = PTR_s_____Invalid_Y_Pos__d_PlayerID__d_8c074fd8;
            *(uint *)((int)puVar13 + -0x24) = (uint)uVar3;
            *(undefined4 *)((int)puVar13 + -0x20) = *(undefined4 *)((int)puVar13 + -0xc);
            (*(code *)PTR_FUN_8c074fdc)(param_3);
            iVar9 = (*(code *)PTR_FUN_8c074fe0)
                              (*(undefined4 *)(DAT_8c074fca + param_3),
                               *(undefined4 *)((int)puVar13 + -0xc),
                               (undefined1 *)((int)puVar13 + -0x14));
            if (iVar9 != 0) {
              *(byte *)((int)puVar13 + -0x14) =
                   (*(byte *)((int)puVar13 + -0x14) & (byte)DAT_8c074fcc | 0x10) &
                   (byte)DAT_8c074fce | 8;
            }
            iVar9 = (int)DAT_8c074fd0;
            uVar5 = (*(code *)PTR_FUN_8c074fe4)(6);
            (*(code *)PTR___bfswu_8c074fe8)(uVar5,6);
            uVar5 = (*(code *)PTR_FUN_8c074fe4)(iVar9);
            (*(code *)PTR___bfswu_8c074fe8)(uVar5,iVar9);
            (*(code *)PTR___bfswu_8c074fe8)
                      (-(((*(byte *)((int)puVar13 + -0x14) & 0x10) == 0) - 1),(int)DAT_8c074fd2);
            (*(code *)PTR___bfswu_8c074fe8)(*(byte *)((int)puVar13 + -0x14) & 0xf,(int)DAT_8c074fd4)
            ;
            *(undefined **)((int)puVar13 + -0x28) = PTR_s____Update_PlayerID__d_8c074fec;
            *(undefined4 *)((int)puVar13 + -0x24) = *(undefined4 *)((int)puVar13 + -0xc);
            (*(code *)PTR_FUN_8c074fdc)(param_3);
            uVar5 = (*(code *)PTR_FUN_8c074fe4)(6);
            uVar4 = (*(code *)PTR_FUN_8c074fe4)(iVar9);
            *(undefined **)((int)puVar13 + -0x28) = PTR_s____mPosition__d__d__d__d_8c074ff0;
            *(undefined4 *)((int)puVar13 + -0x24) = uVar5;
            *(undefined4 *)((int)puVar13 + -0x20) = uVar4;
            *(uint *)((int)puVar13 + -0x1c) =
                 -((((int)*(char *)((int)puVar13 + -0x10) & 0x10U) == 0) - 1);
            *(uint *)((int)puVar13 + -0x18) = (int)*(char *)((int)puVar13 + -0x10) & 0xf;
            (*(code *)PTR_FUN_8c074fdc)(param_3);
          }
          (*(code *)PTR_FUN_8c074dc8)(iVar10,(undefined1 *)((int)puVar13 + -0x10));
        }
        else if (*(char *)(param_3 + 0x3e + iVar9) != '\x03') {
          iVar10 = *(int *)((int)puVar13 + -8);
          *(undefined1 *)(iVar9 + param_3 + 0x3e) = 3;
          (*(code *)PTR_FUN_8c074c80)(*(undefined4 *)(iVar10 + iVar9 * 4));
          iVar9 = *(int *)(*(int *)(*(int *)((int)puVar13 + -0xc) * 4 + iVar10) + 0x28);
          (**(code **)(iVar9 + 0x2c))
                    (*(int *)(iVar10 + *(int *)((int)puVar13 + -0xc) * 4) + *(int *)(iVar9 + 0x24));
          uVar6 = *(uint *)((int)puVar13 + -0xc);
          if (*(int *)(iVar10 + uVar6 * 4) != 0) {
            if (*(int *)(*(int *)((int)puVar13 + -8) + uVar6 * 4) != 0) {
              iVar9 = *(int *)(*(int *)(uVar6 * 4 + *(int *)((int)puVar13 + -8)) + 0x28);
              (**(code **)(iVar9 + 0x14))
                        (*(int *)(*(int *)((int)puVar13 + -8) + uVar6 * 4) + *(int *)(iVar9 + 0xc),3
                        );
            }
            uVar6 = *(uint *)((int)puVar13 + -0xc);
            *(undefined4 *)(uVar6 * 4 + *(int *)((int)puVar13 + -8)) = 0;
          }
          if ((int)uVar6 < 0) {
            uVar7 = 1 >> (~uVar6 & 0x1f) + 1;
          }
          else {
            uVar7 = 1 << (uVar6 & 0x1f);
          }
          *(uint *)((int)puVar13 + -0x24) = uVar6;
          *(uint *)((int)DAT_8c074c72 + *(int *)(DAT_8c074c6e + param_3)) =
               *(uint *)((int)DAT_8c074c72 + *(int *)(DAT_8c074c6e + param_3)) | uVar7;
          *(undefined4 *)(*(int *)(DAT_8c074c6e + param_3) + 0x48) = 0x18;
          *(undefined **)((int)puVar13 + -0x28) = PTR_s____Now_Lost_PlayerID__d_8c074c84;
          (*(code *)PTR_FUN_8c074c88)(param_3);
          puVar8 = (ushort *)
                   (*(int *)((int)DAT_8c074c76 + *(int *)(DAT_8c074c74 + param_3)) +
                   (int)DAT_8c074c78 * *(int *)((int)puVar13 + -0xc));
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
  }
  *(undefined4 *)(*(int *)(DAT_8c074c6e + param_3) + 0x44) = 0;
  return;
}

