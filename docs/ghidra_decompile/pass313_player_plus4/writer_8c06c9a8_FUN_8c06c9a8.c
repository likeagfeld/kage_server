// entry: 8c06c9a8
// name: FUN_8c06c9a8


/* WARNING: Removing unreachable block (ram,0x8c06ccd8) */
/* WARNING: Removing unreachable block (ram,0x8c06ccde) */

void FUN_8c06c9a8(undefined4 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 in_dr14;
  ulonglong uVar21;
  double dVar22;
  double in_xd14;
  bool bVar23;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_14 [8];
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)uStack_c);
    puVar15 = &uStack_c;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr14;
  }
  else {
    puVar15 = (undefined8 *)local_14;
    uStack_c = in_dr14;
  }
  *(undefined4 *)((int)puVar15 + -4) = in_PR;
  *(int *)((int)puVar15 + -0x18) = param_3;
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)(DAT_8c06cb1c + 0x34),param_1);
  }
  else {
    uVar17 = *(ulonglong *)(DAT_8c06cb1c + 0x34);
  }
  uVar21 = uVar17;
  if (in_FPSCR_SZ == '\0') {
    uVar21 = uVar17 & 0xffffffff00000000;
  }
  dVar22 = (double)(uVar21 & 0xffffffff00000000);
  uVar12 = *(undefined4 *)((int)DAT_8c06cb08 + *(int *)(DAT_8c06cb06 + param_3));
  (*(code *)PTR_FUN_8c06cb20)(uVar17,uVar12);
  uVar16 = (undefined4)uVar17;
  (*(code *)PTR_FUN_8c06cb24)(uVar12,0);
  dVar20 = in_xd14;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(SUB84(dVar22,0),uVar16);
  }
  (*(code *)PTR_FUN_8c06cb28)(dVar20,uVar12);
  dVar18 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)((ulonglong)dVar20 & 0xffffffff);
  }
  uVar12 = SUB84(dVar18,0);
  (*(code *)PTR_FUN_8c06cb2c)(dVar18,param_3);
  if (in_FPSCR_SZ == '\0') {
    uVar19 = CONCAT44(*(undefined4 *)(DAT_8c06cb1c + 0x34),uVar12);
  }
  else {
    uVar19 = *(undefined8 *)(DAT_8c06cb1c + 0x34);
  }
  (*(code *)PTR_FUN_8c06cb30)(uVar19,*(undefined4 *)(DAT_8c06cb0a + param_3));
  uVar12 = (undefined4)uVar19;
  (*(code *)PTR_FUN_8c06cb34)(param_3);
  (*(code *)PTR_FUN_8c06cb38)(param_3);
  if (((**(uint **)(DAT_8c06cb0a + param_3) & 4) != 0) &&
     ((**(uint **)(DAT_8c06cb0a + param_3) & 8) == 0)) {
    iVar11 = param_3 + DAT_8c06cc6e;
    iVar8 = *(int *)(iVar11 + 4);
    iVar6 = *(int *)(*(int *)(iVar11 + 4) + 0x28);
    *(int *)((int)puVar15 + -0x14) = iVar11;
    iVar6 = (**(code **)(iVar6 + 0x80))(iVar8 + *(int *)(iVar6 + 0x78));
    if (iVar6 == 0) {
      (*(code *)PTR_FUN_8c06cc80)(*(undefined4 *)(*(int *)((int)puVar15 + -0x14) + 4));
      **(uint **)(DAT_8c06cc64 + param_3) = **(uint **)(DAT_8c06cc64 + param_3) | 8;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    uVar17 = CONCAT44(*(undefined4 *)(*(int *)(DAT_8c06cb0a + param_3) + 0x14),uVar12);
  }
  else {
    uVar17 = *(ulonglong *)(*(int *)(DAT_8c06cb0a + param_3) + 0x14);
  }
  (*(code *)PTR_FUN_8c06cb3c)(uVar17,*(undefined4 *)(DAT_8c06cb0c + param_3));
  dVar20 = dVar22;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)(uVar17 & 0xffffffff);
  }
  (*(code *)PTR_FUN_8c06cb40)
            (dVar20,*(undefined4 *)(DAT_8c06cb0c + param_3),
             (**(uint **)(DAT_8c06cb0a + param_3) & 4) != 0);
  if (((*(byte *)(DAT_8c06cb0e + param_3) & 0x40) == 0) &&
     (iVar6 = *(int *)((int)DAT_8c06cdcc + *(int *)(DAT_8c06cdca + param_3)),
     iVar6 = (**(code **)(iVar6 + 0x74))(*(int *)(DAT_8c06cdca + param_3) + *(int *)(iVar6 + 0x6c)),
     iVar6 == 0)) {
    iVar11 = *(int *)PTR_DAT_8c06cddc;
    *(int *)((int)puVar15 + -0x1c) = iVar11 + 8;
    uVar5 = 0;
    bVar23 = false;
    iVar8 = 0;
    iVar6 = 8;
    do {
      if ((*(char *)(param_3 + 0x3e + iVar8) == '\0') &&
         (uVar10 = (uint)*(ushort *)(*(int *)(param_3 + DAT_8c06cdce + iVar8 * 4) + 0x56),
         uVar5 = uVar5 | 1 << (uVar10 & 0x1f),
         (*(uint *)(*(int *)(uVar10 * 0x20 + iVar11 + 8 + 0x18) + 0x10) & 8) != 0)) {
        bVar23 = true;
      }
      iVar6 = iVar6 + -1;
      iVar8 = iVar8 + 1;
    } while (iVar6 != 0);
    if ((bVar23) &&
       (piVar7 = (int *)(*(int *)(*(int *)(DAT_8c06cf06 + param_3) + 0x28) + (int)DAT_8c06cf08),
       iVar6 = (*(code *)piVar7[2])(*(int *)(DAT_8c06cf06 + param_3) + *piVar7), iVar6 == 0)) {
      iVar6 = *(int *)(*(int *)(DAT_8c06cf06 + param_3) + 0x28);
      (**(code **)(iVar6 + 0x80))(*(int *)(DAT_8c06cf06 + param_3) + *(int *)(iVar6 + 0x78),0,uVar5)
      ;
    }
    iVar8 = *(int *)((int)puVar15 + -0x18);
    piVar7 = (int *)(*(int *)(*(int *)(DAT_8c06cdd0 + iVar8) + 0x28) + (int)DAT_8c06cdd2);
    iVar6 = (*(code *)piVar7[2])(*(int *)(DAT_8c06cdd0 + iVar8) + *piVar7);
    if (iVar6 != 0) {
      piVar7 = (int *)(*(int *)(*(int *)(DAT_8c06cdd0 + iVar8) + 0x28) + (int)DAT_8c06cdd4);
      iVar6 = (*(code *)piVar7[2])(*(int *)(DAT_8c06cdd0 + iVar8) + *piVar7);
      if ((iVar6 != 1) && (iVar6 == 2)) {
        (*(code *)PTR_FUN_8c06cf20)(iVar8 + 0x10,0x1c);
      }
      piVar7 = (int *)(*(int *)(*(int *)(DAT_8c06cdd0 + iVar8) + 0x28) + (int)DAT_8c06cdd6);
      (*(code *)piVar7[2])(*(int *)(DAT_8c06cdd0 + iVar8) + *piVar7);
    }
  }
  else {
    puVar2 = PTR_FUN_8c06cb44;
    cVar1 = *(char *)(param_3 + 0x30);
    if ((cVar1 == '\0') || ((cVar1 == '\x01' || (cVar1 == '\x02')))) {
      pcVar14 = PTR_DAT_8c06cde0 + DAT_8c06cdd8;
      if (*pcVar14 == '\0') {
        uVar12 = *DAT_8c06cde4;
      }
      else {
        uVar12 = *DAT_8c06cdf0;
      }
      (*(code *)PTR_FUN_8c06cde8)(uVar12,pcVar14[1]);
      (*(code *)PTR_FUN_8c06cdec)(uVar12,pcVar14[2],pcVar14[3],0);
    }
    else if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
      pcVar14 = PTR_DAT_8c06cb48 + DAT_8c06cb10;
      cVar1 = *pcVar14;
      *(char **)((int)puVar15 + -0x10) = pcVar14;
      if (cVar1 == '\0') {
        *(undefined4 *)((int)puVar15 + -0xc) = *DAT_8c06cb4c;
      }
      else {
        *(undefined4 *)((int)puVar15 + -0xc) = *DAT_8c06cdf0;
      }
      (*(code *)PTR_FUN_8c06cb50)(pcVar14[1]);
      (*(code *)PTR_FUN_8c06cb54)
                (*(undefined4 *)((int)puVar15 + -0xc),
                 *(undefined1 *)(*(int *)((int)puVar15 + -0x10) + 2),
                 *(undefined1 *)(*(int *)((int)puVar15 + -0x10) + 3),0);
    }
    puVar4 = PTR_FUN_8c06cb58;
    puVar3 = PTR_DAT_8c06cb48;
    pcVar14 = PTR_DAT_8c06cb48 + 0x10;
    iVar6 = (int)DAT_8c06cb18;
    *(byte *)(DAT_8c06cb0e + param_3) =
         (*(byte *)(DAT_8c06cb0e + param_3) & 0x7f | (byte)DAT_8c06cb14) & (byte)DAT_8c06cb16 | 0x40
    ;
    (*(code *)puVar4)(iVar6);
    **(uint **)(DAT_8c06cb0a + param_3) = **(uint **)(DAT_8c06cb0a + param_3) | 0x20;
    if (*pcVar14 == '\0') {
      uVar12 = *DAT_8c06cc70;
    }
    else {
      uVar12 = *DAT_8c06cdf0;
    }
    iVar11 = (int)DAT_8c06cc62;
    (*(code *)PTR_FUN_8c06cc74)(uVar12,puVar3[0x11]);
    iVar13 = 8;
    (*(code *)PTR_FUN_8c06cc78)(uVar12,puVar3[0x12],puVar3[0x13],0);
    uVar5 = 0;
    iVar6 = *(int *)(DAT_8c06cc64 + param_3);
    iVar8 = param_3 + DAT_8c06cc66;
    *(undefined4 *)((int)puVar15 + -8) = 0;
    do {
      if (*(char *)(param_3 + 0x3e + uVar5) != '\x03') {
        iVar9 = iVar11 * uVar5 + *(int *)(DAT_8c06cc68 + iVar6);
        uVar12 = SUB84(dVar20,0);
        uVar16 = SUB84(dVar22,0);
        if ((*(byte *)(iVar9 + 8) & 4) == 0) {
          if ((int)uVar5 < 0) {
            uVar10 = 1 >> (~uVar5 & 0x1f) + 1;
          }
          else {
            uVar10 = 1 << (uVar5 & 0x1f);
          }
          if ((*(uint *)(DAT_8c06cdda + param_3) & uVar10) == 0) {
            dVar20 = in_xd14;
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44(uVar16,uVar12);
            }
            (*(code *)puVar2)(*(int *)(iVar8 + uVar5 * 4) + 0x10,0xd);
            iVar6 = *(int *)(DAT_8c06cefe + param_3);
          }
          else {
            dVar20 = in_xd14;
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44(uVar16,uVar12);
            }
            (*(code *)puVar2)(*(int *)(iVar8 + uVar5 * 4) + 0x10,0xc);
            iVar6 = *(int *)(DAT_8c06cdca + param_3);
          }
        }
        else if ((*(byte *)(iVar9 + 0x19) != 0) && (*(byte *)(iVar9 + 0x19) < 4)) {
          if (((int)*(char *)(*(int *)(iVar8 + uVar5 * 4) + 0x12) & (int)DAT_8c06cc6a) == 4) {
            *(undefined1 *)(iVar9 + 0x19) = 0;
          }
          else {
            dVar20 = in_xd14;
            if (in_FPSCR_SZ == '\0') {
              dVar20 = (double)CONCAT44(uVar16,uVar12);
            }
            (*(code *)puVar2)(dVar20,*(int *)(iVar8 + uVar5 * 4) + 0x10,0x13);
            iVar6 = *(int *)(DAT_8c06cdca + param_3);
          }
        }
      }
      uVar12 = SUB84(dVar20,0);
      iVar13 = iVar13 + -1;
      uVar5 = *(int *)((int)puVar15 + -8) + 1;
      *(uint *)((int)puVar15 + -8) = uVar5;
    } while (iVar13 != 0);
    if (in_FPSCR_SZ == '\0') {
      dVar20 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x14),(int)param_2);
    }
    else {
      dVar20 = *(double *)(iVar6 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar23 = SUB84(dVar22,0) < (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      bVar23 = dVar22 < dVar20;
    }
    if (!bVar23) {
      iVar8 = param_3 + DAT_8c06cf00;
      iVar6 = *(int *)(*(int *)(iVar8 + 8) + 0x28);
      iVar6 = (**(code **)(iVar6 + 0x80))(*(int *)(iVar8 + 8) + *(int *)(iVar6 + 0x78));
      if (iVar6 == 0) {
        cVar1 = *(char *)(param_3 + 0x30);
        if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
          pcVar14 = puVar3 + DAT_8c06cf04;
          if (*pcVar14 == '\0') {
            *(undefined4 *)((int)puVar15 + -0xc) = *DAT_8c06cf0c;
          }
          else {
            *(undefined4 *)((int)puVar15 + -0xc) = *DAT_8c06cf1c;
          }
          (*(code *)PTR_FUN_8c06cf10)(pcVar14[1]);
          (*(code *)PTR_FUN_8c06cf14)(*(undefined4 *)((int)puVar15 + -0xc),pcVar14[2],pcVar14[3],0);
        }
        else if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
          pcVar14 = puVar3 + DAT_8c06cf02;
          if (*pcVar14 == '\0') {
            *(undefined4 *)((int)puVar15 + -0xc) = *DAT_8c06cf0c;
          }
          else {
            *(undefined4 *)((int)puVar15 + -0xc) = *DAT_8c06cf1c;
          }
          (*(code *)PTR_FUN_8c06cf10)(pcVar14[1]);
          (*(code *)PTR_FUN_8c06cf14)(*(undefined4 *)((int)puVar15 + -0xc),pcVar14[2],pcVar14[3],0);
        }
        (*(code *)PTR_FUN_8c06cf18)(*(undefined4 *)(iVar8 + 8));
      }
    }
    uVar16 = SUB84(dVar22,0);
    (*(code *)PTR_FUN_8c06cc7c)(*(undefined4 *)(DAT_8c06cc6c + param_3));
    if (in_FPSCR_SZ == '\0') {
      in_xd14 = (double)CONCAT44(uVar16,uVar12);
    }
    (*(code *)puVar2)(in_xd14,param_3 + 0x10,0xb);
  }
  return;
}

