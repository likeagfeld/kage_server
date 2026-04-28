// entry: 8c01a66a
// name: FUN_8c01a66a


void FUN_8c01a66a(undefined4 param_1,double param_2,int param_3)

{
  ushort uVar1;
  undefined *puVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double *pdVar11;
  int iVar12;
  undefined8 *puVar13;
  double dVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 in_dr14;
  double dVar17;
  undefined8 in_xd8;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_c);
    puVar13 = &uStack_c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr14;
  }
  else {
    puVar13 = (undefined8 *)auStack_14;
    uStack_c = in_dr14;
  }
  *(undefined4 *)((int)puVar13 + -4) = in_PR;
  if (*(int *)(DAT_8c01a796 + param_3) != 7) {
    piVar6 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c01a7aa);
    (*(code *)piVar6[2])(param_3 + *piVar6,7);
  }
  iVar8 = DAT_8c01a7ac;
  uVar5 = (undefined4)in_dr14;
  piVar6 = (int *)(*(int *)(param_3 + 0x28) + (int)DAT_8c01a798);
  if (in_FPSCR_SZ == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(DAT_8c01a7ac + 0x34),param_1);
  }
  else {
    dVar14 = *(double *)(DAT_8c01a7ac + 0x34);
  }
  (*(code *)piVar6[2])(dVar14,param_3 + *piVar6);
  iVar4 = (*(code *)PTR_FUN_8c01a7b0)(*(undefined4 *)(*(int *)(param_3 + 0x58) + 4),3);
  if (iVar4 == 0) {
    uVar5 = 0;
    iVar4 = *(int *)((int)DAT_8c01a946 + *(int *)(DAT_8c01a942 + param_3));
    uVar1 = *(ushort *)(param_3 + 0x54);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar13 + -0x60) = 0;
    }
    else {
      *(double *)((int)puVar13 + -0x60) = in_xd14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar13 + -0x5c) = 0;
    }
    else {
      *(double *)((int)puVar13 + -0x5c) = in_xd14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar13 + -0x58) = 0;
    }
    else {
      *(double *)((int)puVar13 + -0x58) = in_xd14;
    }
    iVar4 = iVar4 + (int)DAT_8c01a944 * (uint)uVar1;
    uVar9 = *(undefined4 *)
             ((int)DAT_8c01a94c + *(int *)((int)DAT_8c01a94a + *(int *)(DAT_8c01a948 + param_3)));
    iVar7 = (int)DAT_8c01a950;
    (*(code *)PTR___bfswu_8c01a964)(*(undefined4 *)(DAT_8c01a94e + iVar4));
    (*(code *)PTR___bfswu_8c01a964)(*(undefined4 *)(DAT_8c01a952 + iVar4));
    *(byte *)(DAT_8c01a950 + param_3) =
         (*(byte *)(DAT_8c01a950 + param_3) & (byte)DAT_8c01a956 | 0x10) & (byte)DAT_8c01a958 | 8;
    (*(code *)PTR_FUN_8c01a968)
              (uVar9,param_3 + iVar7,(undefined1 *)((int)puVar13 + -0x60),
               (undefined1 *)((int)puVar13 + -0x58));
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)((int)puVar13 + -0x60),*(undefined4 *)((int)puVar13 + -0x58))
      ;
    }
    else {
      uVar16 = *(undefined8 *)((int)puVar13 + -0x60);
    }
    (*(code *)PTR_FUN_8c01a96c)(uVar16,uVar9,param_3 + iVar7,0);
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)((int)puVar13 + -0x60),*(undefined4 *)((int)puVar13 + -0x58))
      ;
    }
    else {
      uVar16 = *(undefined8 *)((int)puVar13 + -0x60);
    }
    (*(code *)PTR_FUN_8c01a96c)(uVar16,uVar9,iVar4 + 2,0);
    puVar2 = PTR_DAT_8c01a974;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)((int)puVar13 + -0x60),*(undefined4 *)((int)puVar13 + -0x5c))
      ;
    }
    else {
      uVar16 = *(undefined8 *)((int)puVar13 + -0x60);
    }
    (*(code *)PTR_FUN_8c01a970)(uVar16,*(undefined4 *)(param_3 + 0x58));
    uVar9 = (undefined4)uVar16;
    *(undefined1 *)(DAT_8c01a95a + param_3) = 0;
    *(undefined1 *)(DAT_8c01a95c + param_3) = 0;
    if (puVar2[0xc] == '\0') {
      uVar10 = *DAT_8c01a988;
    }
    else {
      uVar10 = *DAT_8c01a978;
    }
    (*(code *)PTR_FUN_8c01a97c)(uVar10,puVar2[0xd]);
    (*(code *)PTR_FUN_8c01a980)(uVar10,puVar2[0xe],puVar2[0xf],0);
    dVar14 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(uVar5,uVar9);
    }
    (*(code *)PTR_FUN_8c01a984)(dVar14,param_3 + 0x10,9);
  }
  iVar4 = param_3 + DAT_8c01a79a;
  if (*(int *)(iVar4 + 0x10) != 0) {
    iVar7 = param_3 + DAT_8c01a79c;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = CONCAT44(*(undefined4 *)(iVar7 + 0x10),SUB84(dVar14,0));
    }
    else {
      uVar15 = *(ulonglong *)(iVar7 + 0x10);
    }
    pdVar11 = (double *)(iVar7 + 0x10);
    (*(code *)PTR_FUN_8c01a7b4)(uVar15,*(undefined4 *)(iVar4 + 0x10),0);
    dVar14 = (double)(uVar15 & 0xffffffff);
    (*(code *)PTR_FUN_8c01a7b8)(*(undefined4 *)(iVar4 + 0x10));
    if (in_FPSCR_SZ == '\0') {
      param_2 = (double)CONCAT44(*(undefined4 *)pdVar11,*(undefined4 *)(iVar8 + 0x34));
    }
    else {
      param_2 = *pdVar11;
      in_xd8 = *(undefined8 *)(iVar8 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) + SUB84(param_2,0),
                                 SUB84(param_2,0));
    }
    else {
      param_2 = param_2 + param_2;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)pdVar11 = (int)((ulonglong)param_2 >> 0x20);
    }
    else {
      *pdVar11 = param_2;
    }
  }
  uVar9 = SUB84(dVar14,0);
  iVar4 = param_3 + DAT_8c01a79c;
  if (*(char *)(*(int *)((int)DAT_8c01a7a2 + *(int *)(DAT_8c01a79e + param_3)) +
                (int)DAT_8c01a7a0 * (uint)*(ushort *)(param_3 + 0x54) + 0x18) == '\0') {
    (*(code *)PTR_FUN_8c01a7bc)(*(undefined4 *)(DAT_8c01a7a4 + param_3),0);
  }
  else {
    (*(code *)PTR_FUN_8c01a98c)(*(undefined4 *)(DAT_8c01a95e + param_3),1);
    iVar7 = *(int *)(param_3 + 0x58);
    if (in_FPSCR_SZ == '\0') {
      uVar10 = *(undefined4 *)(iVar7 + 0x50);
      param_2 = (double)CONCAT44(uVar10,*(undefined4 *)(iVar7 + 0x54));
      *(undefined4 *)((int)puVar13 + -0x54) = *(undefined4 *)(iVar7 + 0x4c);
      *(undefined4 *)((int)puVar13 + -0x50) = uVar10;
    }
    else {
      param_2 = *(double *)(iVar7 + 0x50);
      in_xd8 = *(undefined8 *)(iVar7 + 0x54);
      *(undefined8 *)((int)puVar13 + -0x54) = *(undefined8 *)(iVar7 + 0x4c);
      *(double *)((int)puVar13 + -0x50) = param_2;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar13 + -0x4c) = SUB84(param_2,0);
    }
    else {
      *(undefined8 *)((int)puVar13 + -0x4c) = in_xd8;
    }
    *(undefined4 *)((int)puVar13 + -0x6c) = *(undefined4 *)((int)puVar13 + -0x54);
    uVar10 = *(undefined4 *)(DAT_8c01a95e + param_3);
    *(undefined4 *)((int)puVar13 + -100) = *(undefined4 *)((int)puVar13 + -0x4c);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x34),uVar9);
    }
    else {
      dVar14 = *(double *)(iVar8 + 0x34);
    }
    *(undefined4 *)((int)puVar13 + -0x68) = *(undefined4 *)((int)puVar13 + -0x50);
    (*(code *)PTR_FUN_8c01a990)(dVar14,uVar10);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar17 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x34),uVar5);
  }
  else {
    dVar17 = *(double *)(iVar8 + 0x34);
  }
  if ((*(uint *)(param_3 + 0x2c) & DAT_8c01a7c0) != 0) {
    iVar8 = (int)DAT_8c01a960;
    dVar17 = (double)((ulonglong)dVar17 & 0xffffffff00000000);
    dVar3 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar3 = (double)((ulonglong)dVar14 & 0xffffffff);
    }
    dVar14 = dVar3;
    (*(code *)PTR_FUN_8c01a994)(dVar14,param_3 + iVar8 + 0x60,3);
    uVar5 = (*(code *)PTR_FUN_8c01a998)
                      (*(undefined4 *)((int)DAT_8c01a94a + *(int *)(DAT_8c01a948 + param_3)),2,1);
    *(undefined4 *)(param_3 + iVar8 + 0x84) = uVar5;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(iVar4 + 0x14) = SUB84(dVar17,0);
    }
    else {
      *(double *)(iVar4 + 0x14) = in_xd14;
    }
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) & DAT_8c01a99c;
  }
  iVar7 = 0;
  iVar8 = param_3 + DAT_8c01a7a6;
  iVar12 = 3;
  do {
    if (*(int *)(iVar7 * 0x30 + iVar8 + 0x1c) != 0) {
      dVar3 = dVar17;
      if (in_FPSCR_SZ == '\0') {
        dVar3 = (double)((ulonglong)dVar14 & 0xffffffff);
      }
      dVar14 = dVar3;
      (*(code *)PTR_FUN_8c01aadc)(dVar14,iVar7 * 0x30 + iVar8);
      if (*(int *)(iVar7 * 0x30 + iVar8 + 0x10) == 3) {
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x14),SUB84(param_2,0));
        }
        else {
          param_2 = *(double *)(iVar4 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)((ulonglong)param_2 >> 0x20) +
                                     (float)((ulonglong)dVar17 >> 0x20),SUB84(param_2,0));
        }
        else {
          param_2 = param_2 + dVar17;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(iVar4 + 0x14) = (int)((ulonglong)param_2 >> 0x20);
        }
        else {
          *(double *)(iVar4 + 0x14) = param_2;
        }
      }
    }
    iVar12 = iVar12 + -1;
    iVar7 = iVar7 + 1;
  } while (iVar12 != 0);
  if ((**(uint **)(DAT_8c01a7a8 + param_3) & 4) != 0) {
    (**(code **)(*(int *)(param_3 + 0x28) + 0x80))
              (param_3 + *(int *)(*(int *)(param_3 + 0x28) + 0x78));
    iVar8 = *(int *)(DAT_8c01aad2 + param_3);
    *(int *)((int)puVar13 + -8) = iVar8;
    if (*(char *)(iVar8 + 0x30) == '\x04') {
      *DAT_8c01aaec = 1;
      uVar1 = *(ushort *)(param_3 + 0x54);
      *(undefined **)((int)puVar13 + -0x6c) = PTR_DAT_8c01aaf0;
      *(undefined4 *)((int)puVar13 + -0x68) =
           *(undefined4 *)(iVar8 + DAT_8c01aad6 + (int)DAT_8c01aad8 + (uint)uVar1 * 4);
      uVar5 = 0;
      (*(code *)PTR_FID_conflict__sscanf_8c01aaf4)((undefined1 *)((int)puVar13 + -0x48));
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar13 + -0x38) = uVar5;
        *(undefined4 *)((int)puVar13 + -0x34) = uVar5;
        *(undefined4 *)((int)puVar13 + -0x30) = uVar5;
      }
      else {
        *(double *)((int)puVar13 + -0x38) = in_xd14;
        *(double *)((int)puVar13 + -0x34) = in_xd14;
        *(double *)((int)puVar13 + -0x30) = in_xd14;
      }
      iVar8 = (*(code *)PTR_FUN_8c01aae0)(*(undefined4 *)(param_3 + 0x58),5);
      (*(code *)PTR__njCalcPoint_8c01aae4)
                (iVar8 + 0x50,(undefined1 *)((int)puVar13 + -0x38),
                 (undefined1 *)((int)puVar13 + -0x2c));
      *(undefined4 *)((int)puVar13 + -0x34) = *(undefined4 *)((int)puVar13 + -0x28);
      *(undefined4 *)((int)puVar13 + -0x38) = *(undefined4 *)((int)puVar13 + -0x2c);
      *(undefined4 *)((int)puVar13 + -0x30) = *(undefined4 *)((int)puVar13 + -0x24);
      (*(code *)PTR_FUN_8c01aaf8)
                (*(undefined4 *)(DAT_8c01aad4 + param_3),(undefined1 *)((int)puVar13 + -0x48));
      (*(code *)PTR_FUN_8c01aae8)
                (*(undefined4 *)(DAT_8c01aad4 + param_3),(undefined1 *)((int)puVar13 + -0x38));
    }
    else if (*(int *)(iVar8 + 0x24) == 3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar13 + -0x20) = 0;
        *(undefined4 *)((int)puVar13 + -0x1c) = 0;
        *(undefined4 *)((int)puVar13 + -0x18) = 0;
      }
      else {
        *(double *)((int)puVar13 + -0x20) = in_xd14;
        *(double *)((int)puVar13 + -0x1c) = in_xd14;
        *(double *)((int)puVar13 + -0x18) = in_xd14;
      }
      iVar8 = (*(code *)PTR_FUN_8c01aae0)(*(undefined4 *)(param_3 + 0x58),5);
      (*(code *)PTR__njCalcPoint_8c01aae4)
                (iVar8 + 0x50,(undefined1 *)((int)puVar13 + -0x20),
                 (undefined1 *)((int)puVar13 + -0x14));
      *(undefined4 *)((int)puVar13 + -0x20) = *(undefined4 *)((int)puVar13 + -0x14);
      *(undefined4 *)((int)puVar13 + -0x18) = *(undefined4 *)((int)puVar13 + -0xc);
      uVar5 = *(undefined4 *)(DAT_8c01aad4 + param_3);
      *(undefined4 *)((int)puVar13 + -0x1c) = *(undefined4 *)((int)puVar13 + -0x10);
      (*(code *)PTR_FUN_8c01aae8)(uVar5,(undefined4 *)((int)puVar13 + -0x20));
    }
  }
  return;
}

