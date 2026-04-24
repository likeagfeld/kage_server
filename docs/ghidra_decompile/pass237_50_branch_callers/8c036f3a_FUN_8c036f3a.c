// entry: 8c036f3a
// name: FUN_8c036f3a
// signature: undefined FUN_8c036f3a(void)


/* WARNING: Removing unreachable block (ram,0x8c036f54) */

int FUN_8c036f3a(double param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint in_fr3;
  double dVar8;
  float fVar9;
  undefined8 in_dr12;
  double dVar10;
  undefined4 in_fr15;
  double dVar11;
  float fVar13;
  double dVar12;
  undefined4 uVar14;
  float fVar15;
  undefined8 in_xd8;
  bool bVar16;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [8];
  undefined8 uStack_1c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_1c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_1c._0_4_ = (int)in_dr12;
    puVar7 = auStack_24;
  }
  else {
    puVar7 = auStack_34;
    uStack_1c = in_dr12;
  }
  *(undefined4 *)(puVar7 + -4) = in_PR;
  iVar6 = DAT_8c036f8c + (param_4 * 0x40 + param_3) * 0x10;
  if (-1 < *(short *)(iVar6 + 10)) {
    uRam8c037628 = 0x2ce9025;
    return (int)*(short *)(iVar6 + 10);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)(DAT_8c0370dc + param_2),(int)in_dr12);
    dVar11 = (double)CONCAT44(*(undefined4 *)(iVar6 + 4),in_fr15);
  }
  else {
    dVar10 = *(double *)(DAT_8c0370dc + param_2);
    dVar11 = *(double *)(iVar6 + 4);
  }
  fVar13 = (float)((ulonglong)dVar11 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    bVar16 = fVar13 == 0.0;
  }
  else {
    bVar16 = dVar11 == (double)(ulonglong)in_fr3;
  }
  iVar5 = *(int *)(DAT_8c0370da + param_2) + 1;
  uVar14 = (undefined4)((ulonglong)dVar10 >> 0x20);
  if (bVar16) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(uVar14,DAT_8c037624);
    }
  }
  else if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(uVar14,fVar13);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(DAT_8c0370ec,in_fr3);
  }
  else {
    dVar8 = (double)CONCAT44(PTR_FUN_8c0370f0,DAT_8c0370ec);
  }
  dVar12 = dVar10;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) * (float)((ulonglong)dVar8 >> 0x20)
                              ,SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 * dVar8;
  }
  (*(code *)PTR_FUN_8c0370f0)(param_3 & 0xffff,6);
  if (in_FPSCR_SZ == '\0') {
    uVar14 = (undefined4)((ulonglong)dVar12 >> 0x20);
    dVar12 = (double)CONCAT44(uVar14,uVar14);
  }
  puVar7[-0x68] = (puVar7[-0x68] & (byte)DAT_8c0370de | 0x10) & (byte)DAT_8c0370e0 | 8;
  if (((int)param_3 < 0) || (*(int *)(DAT_8c0370e2 + param_2) <= (int)param_3)) {
LAB_8c037234:
    if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(DAT_8c037398 + param_2))) {
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar7 + -8) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)(puVar7 + -8) = dVar12;
      }
      *(int *)(puVar7 + -0x50) = iVar6 + 0x10;
      (*(code *)PTR_FUN_8c0373a4)(param_4 & 0xffff,(int)DAT_8c03739a);
      *(undefined4 *)(puVar7 + -0x44) = 1;
      if (0 < iVar5) {
        *(undefined1 **)(puVar7 + -0x24) = puVar7 + -0x68;
        *(int *)(puVar7 + -0x5c) = iVar6;
        *(uint *)(puVar7 + -0x20) = param_4 - 1;
        iVar6 = (int)DAT_8c03739c;
        *(uint *)(puVar7 + -0x1c) = param_4 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x60) = (int)((ulonglong)dVar12 >> 0x20);
        }
        else {
          *(double *)(puVar7 + -0x60) = dVar12;
        }
        dVar12 = (double)((ulonglong)dVar12 & 0xffffffff);
        do {
          iVar4 = *(int *)(puVar7 + -0x44) + param_3;
          *(int *)(puVar7 + -0x18) = iVar4;
          if (iVar4 < 0) {
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x60),SUB84(dVar12,0));
            }
            else {
              dVar12 = *(double *)(puVar7 + -0x60);
            }
            iVar6 = *(int *)(puVar7 + -0x5c);
            goto LAB_8c0373b0;
          }
          if (*(int *)(DAT_8c03739e + param_2) <= iVar4) {
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x60),SUB84(dVar12,0));
            }
            else {
              dVar12 = *(double *)(puVar7 + -0x60);
            }
            iVar6 = *(int *)(puVar7 + -0x5c);
            goto LAB_8c0373b0;
          }
          cVar2 = (*(code *)PTR_FUN_8c0373a8)(*(undefined4 *)(DAT_8c0373a0 + param_2),param_4,1);
          bVar16 = true;
          if ((((cVar2 != '\0') && (cVar2 != 'Z')) && (cVar2 != 'h')) &&
             ((cVar2 != 'i' && (cVar2 != '_')))) {
            bVar16 = false;
          }
          if (bVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x60),SUB84(dVar12,0));
            }
            else {
              dVar12 = *(double *)(puVar7 + -0x60);
            }
            iVar6 = *(int *)(puVar7 + -0x5c);
            goto LAB_8c0373b0;
          }
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar7 + -0x50) + 4),
                                       SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(*(int *)(puVar7 + -0x50) + 4);
          }
          fVar13 = (float)((ulonglong)param_1 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar16 = fVar13 == (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            bVar16 = param_1 == dVar12;
          }
          bVar1 = false;
          if (!bVar16) {
            if (in_FPSCR_PR == '\0') {
              bVar16 = fVar13 < SUB84(dVar10,0);
            }
            else {
              bVar16 = param_1 < dVar10;
            }
            if (bVar16) {
              bVar1 = true;
            }
          }
          if ((bVar1) && (in_FPSCR_SZ == '\0')) {
            dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar13);
          }
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(fVar13,*(undefined4 *)(puVar7 + -8));
          }
          else {
            in_xd8 = *(undefined8 *)(puVar7 + -8);
          }
          if (in_FPSCR_PR == '\0') {
            bVar16 = SUB84(param_1,0) < SUB84(dVar10,0);
          }
          else {
            bVar16 = param_1 < dVar10;
          }
          if (!bVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x60),SUB84(dVar12,0));
            }
            else {
              dVar12 = *(double *)(puVar7 + -0x60);
            }
            iVar6 = *(int *)(puVar7 + -0x5c);
            goto LAB_8c0373b0;
          }
          if (in_FPSCR_PR == '\0') {
            param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                       SUB84(param_1,0) + (float)((ulonglong)dVar10 >> 0x20));
          }
          else {
            param_1 = param_1 + dVar10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar7 + -8) = SUB84(param_1,0);
          }
          else {
            *(undefined8 *)(puVar7 + -8) = in_xd8;
          }
          (*(code *)PTR_FUN_8c0373a4)(*(uint *)(puVar7 + -0x18) & 0xffff,6);
          uVar3 = (*(code *)PTR_FUN_8c0373ac)(param_2,*(undefined4 *)(puVar7 + -0x24));
          *(int *)(puVar7 + -0x50) = *(int *)(puVar7 + -0x50) - iVar6;
          fVar13 = (float)((ulonglong)dVar12 >> 0x20);
          if (((uVar3 & 4) != 0) && (-1 < *(int *)(puVar7 + -0x20))) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar7 + -0x50) + 4),
                                         SUB84(param_1,0));
            }
            else {
              param_1 = *(double *)(*(int *)(puVar7 + -0x50) + 4);
            }
            if (in_FPSCR_PR == '\0') {
              bVar16 = (float)((ulonglong)param_1 >> 0x20) == fVar13;
            }
            else {
              bVar16 = param_1 == dVar12;
            }
            if ((bVar16) && ((**(ushort **)(puVar7 + -0x50) & 0x20) == 0)) {
              iVar6 = *(int *)(puVar7 + -0x5c);
              goto LAB_8c037532;
            }
          }
          *(int *)(puVar7 + -0x50) = *(int *)(puVar7 + -0x50) + (int)DAT_8c0373a2;
          if (((uVar3 & 8) != 0) && (*(int *)(puVar7 + -0x1c) < *(int *)(DAT_8c037620 + param_2))) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar7 + -0x50) + 4),
                                         SUB84(param_1,0));
            }
            else {
              param_1 = *(double *)(*(int *)(puVar7 + -0x50) + 4);
            }
            if (in_FPSCR_PR == '\0') {
              bVar16 = (float)((ulonglong)param_1 >> 0x20) == fVar13;
            }
            else {
              bVar16 = param_1 == dVar12;
            }
            if ((bVar16) && ((**(ushort **)(puVar7 + -0x50) & 0x20) == 0)) {
              iVar6 = *(int *)(puVar7 + -0x5c);
              goto LAB_8c037532;
            }
          }
          iVar4 = *(int *)(puVar7 + -0x44);
          *(int *)(puVar7 + -0x44) = iVar4 + 1;
          *(int *)(puVar7 + -0x50) = (*(int *)(puVar7 + -0x50) - iVar6) + 0x10;
        } while (iVar4 + 1 <= iVar5);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x60),SUB84(dVar12,0));
        }
        else {
          dVar12 = *(double *)(puVar7 + -0x60);
        }
        iVar6 = *(int *)(puVar7 + -0x5c);
      }
LAB_8c0373b0:
      if (iVar5 < *(int *)(puVar7 + -0x44)) {
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),*(undefined4 *)(puVar7 + -8))
          ;
        }
        else {
          in_xd8 = *(undefined8 *)(puVar7 + -8);
        }
        if (in_FPSCR_PR == '\0') {
          bVar16 = SUB84(param_1,0) < SUB84(dVar10,0);
        }
        else {
          bVar16 = param_1 < dVar10;
        }
        if (bVar16) goto LAB_8c037532;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar7 + -8) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)(puVar7 + -8) = dVar12;
      }
      *(int *)(puVar7 + -0x50) = iVar6 + -0x10;
      *(undefined4 *)(puVar7 + -0x44) = 1;
      if (0 < iVar5) {
        *(undefined1 **)(puVar7 + -0x14) = puVar7 + -0x68;
        *(int *)(puVar7 + -100) = iVar6;
        *(uint *)(puVar7 + -0x10) = param_4 - 1;
        iVar6 = (int)DAT_8c0374f2;
        *(uint *)(puVar7 + -0xc) = param_4 + 1;
        do {
          uVar3 = SUB84(dVar8,0);
          iVar4 = param_3 - *(int *)(puVar7 + -0x44);
          *(int *)(puVar7 + -0x18) = iVar4;
          if (iVar4 < 0) {
            iVar6 = *(int *)(puVar7 + -100);
            goto LAB_8c0374de;
          }
          if (*(int *)(DAT_8c0374f4 + param_2) <= iVar4) {
            iVar6 = *(int *)(puVar7 + -100);
            goto LAB_8c0374de;
          }
          cVar2 = (*(code *)PTR_FUN_8c0374fc)(*(undefined4 *)(DAT_8c0374f6 + param_2),param_4,1);
          bVar16 = true;
          if ((((cVar2 != '\0') && (cVar2 != 'Z')) && (cVar2 != 'h')) &&
             ((cVar2 != 'i' && (cVar2 != '_')))) {
            bVar16 = false;
          }
          if (bVar16) {
            iVar6 = *(int *)(puVar7 + -100);
            goto LAB_8c0374de;
          }
          dVar8 = (double)(ulonglong)uVar3;
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar7 + -0x50) + 4),
                                       SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(*(int *)(puVar7 + -0x50) + 4);
          }
          fVar13 = (float)((ulonglong)param_1 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar16 = fVar13 == 0.0;
          }
          else {
            bVar16 = param_1 == dVar8;
          }
          bVar1 = false;
          if (!bVar16) {
            if (in_FPSCR_PR == '\0') {
              bVar16 = fVar13 < SUB84(dVar10,0);
            }
            else {
              bVar16 = param_1 < dVar10;
            }
            if (bVar16) {
              bVar1 = true;
            }
          }
          if ((bVar1) && (in_FPSCR_SZ == '\0')) {
            dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar13);
          }
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(fVar13,*(undefined4 *)(puVar7 + -8));
          }
          else {
            in_xd8 = *(undefined8 *)(puVar7 + -8);
          }
          if (in_FPSCR_PR == '\0') {
            bVar16 = SUB84(param_1,0) < SUB84(dVar10,0);
          }
          else {
            bVar16 = param_1 < dVar10;
          }
          if (!bVar16) {
            iVar6 = *(int *)(puVar7 + -100);
            goto LAB_8c0374de;
          }
          if (in_FPSCR_PR == '\0') {
            param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                       SUB84(param_1,0) + (float)((ulonglong)dVar10 >> 0x20));
          }
          else {
            param_1 = param_1 + dVar10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar7 + -8) = SUB84(param_1,0);
          }
          else {
            *(undefined8 *)(puVar7 + -8) = in_xd8;
          }
          (*(code *)PTR_FUN_8c037500)(*(uint *)(puVar7 + -0x18) & 0xffff,6);
          uVar3 = (*(code *)PTR_FUN_8c037504)(param_2,*(undefined4 *)(puVar7 + -0x14));
          *(int *)(puVar7 + -0x50) = *(int *)(puVar7 + -0x50) - iVar6;
          if (((uVar3 & 4) != 0) && (-1 < *(int *)(puVar7 + -0x10))) {
            dVar8 = (double)((ulonglong)dVar8 & 0xffffffff);
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar7 + -0x50) + 4),
                                         SUB84(param_1,0));
            }
            else {
              param_1 = *(double *)(*(int *)(puVar7 + -0x50) + 4);
            }
            if (in_FPSCR_PR == '\0') {
              bVar16 = (float)((ulonglong)param_1 >> 0x20) == 0.0;
            }
            else {
              bVar16 = param_1 == dVar8;
            }
            if ((bVar16) && ((**(ushort **)(puVar7 + -0x50) & 0x20) == 0)) {
              iVar6 = *(int *)(puVar7 + -100);
              goto LAB_8c037532;
            }
          }
          *(int *)(puVar7 + -0x50) = *(int *)(puVar7 + -0x50) + (int)DAT_8c0374f8;
          if (((uVar3 & 8) != 0) && (*(int *)(puVar7 + -0xc) < *(int *)(DAT_8c037676 + param_2))) {
            dVar8 = (double)((ulonglong)dVar8 & 0xffffffff);
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(*(undefined4 *)(*(int *)(puVar7 + -0x50) + 4),
                                         SUB84(param_1,0));
            }
            else {
              param_1 = *(double *)(*(int *)(puVar7 + -0x50) + 4);
            }
            if (in_FPSCR_PR == '\0') {
              bVar16 = (float)((ulonglong)param_1 >> 0x20) == 0.0;
            }
            else {
              bVar16 = param_1 == dVar8;
            }
            if ((bVar16) && ((**(ushort **)(puVar7 + -0x50) & 0x20) == 0)) {
              iVar6 = *(int *)(puVar7 + -100);
              goto LAB_8c037532;
            }
          }
          iVar4 = *(int *)(puVar7 + -0x44);
          *(int *)(puVar7 + -0x44) = iVar4 + 1;
          *(int *)(puVar7 + -0x50) = (*(int *)(puVar7 + -0x50) - iVar6) + -0x10;
        } while (iVar4 + 1 <= iVar5);
        iVar6 = *(int *)(puVar7 + -100);
      }
LAB_8c0374de:
      if (iVar5 < *(int *)(puVar7 + -0x44)) {
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),*(undefined4 *)(puVar7 + -8))
          ;
        }
        if (in_FPSCR_PR == '\0') {
          bVar16 = SUB84(param_1,0) < SUB84(dVar10,0);
        }
        else {
          bVar16 = param_1 < dVar10;
        }
        if (bVar16) goto LAB_8c037532;
      }
    }
    *(undefined2 *)(iVar6 + 10) = 0;
    iVar6 = 0;
  }
  else {
    *(int *)(puVar7 + -0x50) = iVar6 + DAT_8c0370e4;
    *(undefined4 *)(puVar7 + -0x44) = 1;
    if (0 < iVar5) {
      *(uint *)(puVar7 + -0x3c) = param_3 - 1;
      *(int *)(puVar7 + -0x48) = iVar6;
      *(uint *)(puVar7 + -0x38) = param_3 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar7 + -0x4c) = (int)((ulonglong)dVar12 >> 0x20);
      }
      else {
        *(double *)(puVar7 + -0x4c) = dVar12;
      }
      iVar6 = *(int *)(puVar7 + -0x50);
      dVar12 = (double)((ulonglong)dVar12 & 0xffffffff);
      *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x68;
      do {
        iVar4 = *(int *)(puVar7 + -0x44) + param_4;
        *(int *)(puVar7 + -0x34) = iVar4;
        if (iVar4 < 0) {
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x4c),SUB84(dVar12,0));
          }
          else {
            dVar12 = *(double *)(puVar7 + -0x4c);
          }
          iVar6 = *(int *)(puVar7 + -0x48);
          goto LAB_8c03710c;
        }
        if (*(int *)(DAT_8c0370e6 + param_2) <= iVar4) {
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x4c),SUB84(dVar12,0));
          }
          else {
            dVar12 = *(double *)(puVar7 + -0x4c);
          }
          iVar6 = *(int *)(puVar7 + -0x48);
          goto LAB_8c03710c;
        }
        cVar2 = (*(code *)PTR_FUN_8c0370f4)(*(undefined4 *)(DAT_8c0370e8 + param_2),param_3,1);
        bVar16 = true;
        if ((((cVar2 != '\0') && (cVar2 != 'Z')) && (cVar2 != 'h')) &&
           ((cVar2 != 'i' && (cVar2 != '_')))) {
          bVar16 = false;
        }
        fVar13 = SUB84(dVar12,0);
        if (bVar16) {
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x4c),fVar13);
          }
          else {
            dVar12 = *(double *)(puVar7 + -0x4c);
          }
          iVar6 = *(int *)(puVar7 + -0x48);
          goto LAB_8c03710c;
        }
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44(*(undefined4 *)(iVar6 + 4),SUB84(param_1,0));
        }
        else {
          param_1 = *(double *)(iVar6 + 4);
        }
        fVar9 = (float)((ulonglong)param_1 >> 0x20);
        fVar15 = (float)((ulonglong)dVar12 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar16 = fVar9 == fVar15;
        }
        else {
          bVar16 = param_1 == dVar12;
        }
        bVar1 = false;
        if (!bVar16) {
          if (in_FPSCR_PR == '\0') {
            bVar16 = fVar9 < SUB84(dVar10,0);
          }
          else {
            bVar16 = param_1 < dVar10;
          }
          if (bVar16) {
            bVar1 = true;
          }
        }
        if ((bVar1) && (in_FPSCR_SZ == '\0')) {
          dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar9);
        }
        if (in_FPSCR_PR == '\0') {
          bVar16 = fVar13 < SUB84(dVar10,0);
        }
        else {
          bVar16 = dVar12 < dVar10;
        }
        if (!bVar16) {
          if (in_FPSCR_SZ == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x4c),fVar13);
          }
          else {
            dVar12 = *(double *)(puVar7 + -0x4c);
          }
          iVar6 = *(int *)(puVar7 + -0x48);
          goto LAB_8c03710c;
        }
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44(fVar15,fVar13 + (float)((ulonglong)dVar10 >> 0x20));
        }
        else {
          dVar12 = dVar12 + dVar10;
        }
        (*(code *)PTR_FUN_8c0370f0)(*(uint *)(puVar7 + -0x34) & 0xffff,(int)DAT_8c0370ea);
        uVar3 = (*(code *)PTR_FUN_8c0370f8)(param_2,*(undefined4 *)(puVar7 + -0x40));
        fVar13 = (float)((ulonglong)dVar12 >> 0x20);
        if (((uVar3 & 1) != 0) && (-1 < *(int *)(puVar7 + -0x3c))) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)(iVar6 + -0xc),SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(iVar6 + -0xc);
          }
          if (in_FPSCR_PR == '\0') {
            bVar16 = (float)((ulonglong)param_1 >> 0x20) == fVar13;
          }
          else {
            bVar16 = param_1 == dVar12;
          }
          if ((bVar16) && ((*(ushort *)(iVar6 + -0x10) & 0x20) == 0)) {
            iVar6 = *(int *)(puVar7 + -0x48);
            goto LAB_8c037532;
          }
        }
        if (((uVar3 & 2) != 0) && (*(int *)(puVar7 + -0x38) < *(int *)(DAT_8c03761e + param_2))) {
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x14),SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(iVar6 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            bVar16 = (float)((ulonglong)param_1 >> 0x20) == fVar13;
          }
          else {
            bVar16 = param_1 == dVar12;
          }
          if ((bVar16) && ((*(ushort *)(iVar6 + 0x10) & 0x20) == 0)) {
            iVar6 = *(int *)(puVar7 + -0x48);
            goto LAB_8c037532;
          }
        }
        iVar4 = *(int *)(puVar7 + -0x44);
        *(int *)(puVar7 + -0x44) = iVar4 + 1;
        iVar6 = iVar6 + DAT_8c0370e4;
      } while (iVar4 + 1 <= iVar5);
      iVar6 = *(int *)(puVar7 + -0x48);
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x4c),SUB84(dVar12,0));
      }
      else {
        dVar12 = *(double *)(puVar7 + -0x4c);
      }
    }
LAB_8c03710c:
    if (*(int *)(puVar7 + -0x44) <= iVar5) {
LAB_8c037116:
      uVar14 = (undefined4)((ulonglong)dVar12 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar7 + -8) = uVar14;
      }
      else {
        *(double *)(puVar7 + -8) = dVar12;
      }
      *(int *)(puVar7 + -0x50) = iVar6 - DAT_8c037238;
      *(undefined4 *)(puVar7 + -0x44) = 1;
      if (0 < iVar5) {
        *(uint *)(puVar7 + -0x2c) = param_3 - 1;
        *(int *)(puVar7 + -0x54) = iVar6;
        iVar6 = *(int *)(puVar7 + -0x50);
        *(uint *)(puVar7 + -0x28) = param_3 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar7 + -0x58) = uVar14;
        }
        else {
          *(double *)(puVar7 + -0x58) = dVar12;
        }
        dVar12 = (double)((ulonglong)dVar12 & 0xffffffff);
        *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x68;
        do {
          iVar4 = param_4 - *(int *)(puVar7 + -0x44);
          *(int *)(puVar7 + -0x34) = iVar4;
          if (iVar4 < 0) {
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x58),SUB84(dVar12,0));
            }
            else {
              dVar12 = *(double *)(puVar7 + -0x58);
            }
            iVar6 = *(int *)(puVar7 + -0x54);
            goto LAB_8c037222;
          }
          if (*(int *)(DAT_8c03723a + param_2) <= iVar4) {
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x58),SUB84(dVar12,0));
            }
            else {
              dVar12 = *(double *)(puVar7 + -0x58);
            }
            iVar6 = *(int *)(puVar7 + -0x54);
            goto LAB_8c037222;
          }
          cVar2 = (*(code *)PTR_FUN_8c037240)(*(undefined4 *)(DAT_8c03723c + param_2),param_3,1);
          bVar16 = true;
          if ((((cVar2 != '\0') && (cVar2 != 'Z')) && (cVar2 != 'h')) &&
             ((cVar2 != 'i' && (cVar2 != '_')))) {
            bVar16 = false;
          }
          if (bVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x58),SUB84(dVar12,0));
            }
            else {
              dVar12 = *(double *)(puVar7 + -0x58);
            }
            iVar6 = *(int *)(puVar7 + -0x54);
            goto LAB_8c037222;
          }
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(*(undefined4 *)(iVar6 + 4),SUB84(param_1,0));
          }
          else {
            param_1 = *(double *)(iVar6 + 4);
          }
          fVar13 = (float)((ulonglong)param_1 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            bVar16 = fVar13 == (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            bVar16 = param_1 == dVar12;
          }
          bVar1 = false;
          if (!bVar16) {
            if (in_FPSCR_PR == '\0') {
              bVar16 = fVar13 < SUB84(dVar10,0);
            }
            else {
              bVar16 = param_1 < dVar10;
            }
            if (bVar16) {
              bVar1 = true;
            }
          }
          if ((bVar1) && (in_FPSCR_SZ == '\0')) {
            dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar13);
          }
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)CONCAT44(fVar13,*(undefined4 *)(puVar7 + -8));
          }
          else {
            in_xd8 = *(undefined8 *)(puVar7 + -8);
          }
          if (in_FPSCR_PR == '\0') {
            bVar16 = SUB84(param_1,0) < SUB84(dVar10,0);
          }
          else {
            bVar16 = param_1 < dVar10;
          }
          if (!bVar16) {
            if (in_FPSCR_SZ == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x58),SUB84(dVar12,0));
            }
            else {
              dVar12 = *(double *)(puVar7 + -0x58);
            }
            iVar6 = *(int *)(puVar7 + -0x54);
            goto LAB_8c037222;
          }
          if (in_FPSCR_PR == '\0') {
            param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                       SUB84(param_1,0) + (float)((ulonglong)dVar10 >> 0x20));
          }
          else {
            param_1 = param_1 + dVar10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar7 + -8) = SUB84(param_1,0);
          }
          else {
            *(undefined8 *)(puVar7 + -8) = in_xd8;
          }
          (*(code *)PTR_FUN_8c037244)(*(uint *)(puVar7 + -0x34) & 0xffff,(int)DAT_8c03723e);
          uVar3 = (*(code *)PTR_FUN_8c037248)(param_2,*(undefined4 *)(puVar7 + -0x30));
          fVar13 = (float)((ulonglong)dVar12 >> 0x20);
          if (((uVar3 & 1) != 0) && (-1 < *(int *)(puVar7 + -0x2c))) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(*(undefined4 *)(iVar6 + -0xc),SUB84(param_1,0));
            }
            else {
              param_1 = *(double *)(iVar6 + -0xc);
            }
            if (in_FPSCR_PR == '\0') {
              bVar16 = (float)((ulonglong)param_1 >> 0x20) == fVar13;
            }
            else {
              bVar16 = param_1 == dVar12;
            }
            if ((bVar16) && ((*(ushort *)(iVar6 + -0x10) & 0x20) == 0)) {
              iVar6 = *(int *)(puVar7 + -0x54);
              goto LAB_8c037532;
            }
          }
          if (((uVar3 & 2) != 0) && (*(int *)(puVar7 + -0x28) < *(int *)(DAT_8c03761e + param_2))) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x14),SUB84(param_1,0));
            }
            else {
              param_1 = *(double *)(iVar6 + 0x14);
            }
            if (in_FPSCR_PR == '\0') {
              bVar16 = (float)((ulonglong)param_1 >> 0x20) == fVar13;
            }
            else {
              bVar16 = param_1 == dVar12;
            }
            if ((bVar16) && ((*(ushort *)(iVar6 + 0x10) & 0x20) == 0)) {
              iVar6 = *(int *)(puVar7 + -0x54);
              goto LAB_8c037532;
            }
          }
          iVar4 = *(int *)(puVar7 + -0x44);
          *(int *)(puVar7 + -0x44) = iVar4 + 1;
          iVar6 = iVar6 - DAT_8c037238;
        } while (iVar4 + 1 <= iVar5);
        iVar6 = *(int *)(puVar7 + -0x54);
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x58),SUB84(dVar12,0));
        }
        else {
          dVar12 = *(double *)(puVar7 + -0x58);
        }
      }
LAB_8c037222:
      if (iVar5 < *(int *)(puVar7 + -0x44)) {
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),*(undefined4 *)(puVar7 + -8))
          ;
        }
        else {
          in_xd8 = *(undefined8 *)(puVar7 + -8);
        }
        if (in_FPSCR_PR == '\0') {
          bVar16 = SUB84(param_1,0) < SUB84(dVar10,0);
        }
        else {
          bVar16 = param_1 < dVar10;
        }
        if (bVar16) goto LAB_8c037532;
      }
      goto LAB_8c037234;
    }
    if (in_FPSCR_PR == '\0') {
      bVar16 = SUB84(dVar12,0) < SUB84(dVar10,0);
    }
    else {
      bVar16 = dVar12 < dVar10;
    }
    if (!bVar16) goto LAB_8c037116;
LAB_8c037532:
    *(undefined2 *)(iVar6 + 10) = 1;
    iVar6 = 1;
  }
                    /* WARNING: Read-only address (ram,0x8c037628) is written */
  return iVar6;
}

