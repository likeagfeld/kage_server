// entry: 8c081680
// name: FUN_8c081680
// signature: undefined FUN_8c081680(void)


void FUN_8c081680(double param_1,uint *param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  ulonglong in_dr14;
  double dVar16;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 local_2c [8];
  undefined8 uStack_24;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)uStack_24);
    puVar12 = &uStack_24;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_24._0_4_ = (int)in_dr14;
  }
  else {
    puVar12 = (undefined8 *)local_2c;
    uStack_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar12 + -4) = in_PR;
  uVar8 = param_2[2];
  if (in_FPSCR_SZ == '\0') {
    in_dr14 = (ulonglong)DAT_8c08177c;
  }
  *(undefined4 *)((int)puVar12 + -0x20) = 0;
  *(undefined4 *)((int)puVar12 + -0x1c) = 0;
  iVar9 = uVar8 + 0x20;
  *(uint **)((int)puVar12 + -0x18) = param_2 + 0x11;
  *(undefined4 *)((int)puVar12 + -0x14) = 0xf;
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44(DAT_8c081780,(int)in_dr14);
  }
  else {
    dVar16 = (double)CONCAT44(PTR_FUN_8c081784,DAT_8c081780);
  }
  do {
    if (((*param_2 & 2) == 0) || (*(int *)((int)puVar12 + -0x1c) != 0xe)) {
LAB_8c0816be:
      if (((*param_2 & 2) != 0) && (*(int *)((int)puVar12 + -0x1c) == 0xe)) {
        *(undefined4 *)(*(int *)((int)puVar12 + -0x1c) * 4 + iVar9) = 4;
      }
      iVar7 = 0;
      *(int *)((int)puVar12 + -0x10) = *(int *)((int)puVar12 + -0x1c) << 2;
      if (*(int *)((int)puVar12 + -0x1c) == 0xe) {
        if (0 < *(int *)(*(int *)((int)puVar12 + -0x10) + iVar9)) {
          *(undefined **)((int)puVar12 + -0xc) = PTR_FUN_8c081784;
          do {
            fVar14 = SUB84(param_1,0);
            if ((*param_2 & 2) == 0) {
LAB_8c0817d0:
              dVar13 = (double)(**(code **)((int)puVar12 + -0xc))
                                         (*(undefined4 *)((int)puVar12 + -0x18));
              puVar2 = PTR_FUN_8c0818b4;
              if (in_FPSCR_PR == '\0') {
                dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) *
                                          (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar13,0));
              }
              else {
                dVar13 = dVar13 * dVar16;
              }
              if (in_FPSCR_PR == '\0') {
                iVar6 = (int)(float)((ulonglong)dVar13 >> 0x20);
              }
              else {
                iVar6 = (int)dVar13;
              }
              puVar11 = (ushort *)(*(int *)((int)DAT_8c0818a4 + (int)param_2) + iVar6 * 0x14);
              iVar6 = iVar7;
              if (((*puVar11 & 1) != 0) && (((int)*(char *)((int)puVar11 + 9) & 0x80U) == 0)) {
                uVar3 = (*(code *)PTR_FUN_8c0818b4)();
                uVar4 = (*(code *)puVar2)();
                iVar5 = (*(code *)PTR_FUN_8c0818b8)
                                  (param_2,uVar3,uVar4,*(uint *)((int)puVar12 + -0x1c) & 0xff);
                puVar2 = PTR_FUN_8c0818bc;
                uVar1 = DAT_8c0818ac;
                iVar6 = iVar7 + 1;
                *(undefined4 *)(*(int *)((int)DAT_8c0818a8 + (int)param_2) + iVar5 * 0x74 + 0xc) =
                     *(undefined4 *)(iVar7 * 4 + param_2[2] + (int)DAT_8c0818aa);
                *(byte *)((int)puVar11 + 9) = *(byte *)((int)puVar11 + 9) & 0x7f | (byte)uVar1;
                iVar7 = *(int *)((int)puVar12 + -0x20);
                (*(code *)puVar2)();
                *(int *)((int)puVar12 + -0x20) = iVar7 + 1;
              }
            }
            else {
              dVar13 = (double)(**(code **)((int)puVar12 + -0xc))
                                         (*(undefined4 *)((int)puVar12 + -0x18));
              uVar8 = param_2[2];
              iVar6 = iVar7 + 1;
              *(uint *)((int)puVar12 + -8) = uVar8;
              piVar10 = (int *)(uVar8 + (int)DAT_8c081778);
              if (in_FPSCR_SZ == '\0') {
                fVar14 = SUB84(dVar16,0);
              }
              iVar5 = *piVar10;
              if (in_FPSCR_PR == '\0') {
                fVar15 = (float)iVar5;
                fVar14 = fVar14 - fVar15;
                param_1 = (double)CONCAT44(fVar15,fVar14);
                iVar5 = (int)((float)((ulonglong)dVar13 >> 0x20) * fVar14);
              }
              else {
                param_1 = (double)iVar5;
                param_1 = param_1 - param_1;
                iVar5 = (int)(dVar13 * param_1);
              }
              if (iVar5 < piVar10[iVar6]) goto LAB_8c0817d0;
            }
            iVar7 = iVar6;
          } while (iVar6 < *(int *)(*(int *)((int)puVar12 + -0x10) + iVar9));
        }
      }
      else if (0 < *(int *)(*(int *)((int)puVar12 + -0x10) + iVar9)) {
        *(undefined **)((int)puVar12 + -0xc) = PTR_FUN_8c0818b0;
        do {
          dVar13 = (double)(**(code **)((int)puVar12 + -0xc))(*(undefined4 *)((int)puVar12 + -0x18))
          ;
          puVar2 = PTR_FUN_8c0818b4;
          if (in_FPSCR_PR == '\0') {
            dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) *
                                      (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar13,0));
          }
          else {
            dVar13 = dVar13 * dVar16;
          }
          if (in_FPSCR_PR == '\0') {
            iVar6 = (int)(float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            iVar6 = (int)dVar13;
          }
          puVar11 = (ushort *)(*(int *)((int)DAT_8c0818a4 + (int)param_2) + iVar6 * 0x14);
          if (((*puVar11 & 1) != 0) && (((int)*(char *)((int)puVar11 + 9) & 0x80U) == 0)) {
            uVar3 = (*(code *)PTR_FUN_8c0818b4)();
            iVar7 = iVar7 + 1;
            uVar4 = (*(code *)puVar2)();
            (*(code *)PTR_FUN_8c0818b8)(param_2,uVar3,uVar4,*(uint *)((int)puVar12 + -0x1c) & 0xff);
            puVar2 = PTR_FUN_8c0818bc;
            *(byte *)((int)puVar11 + 9) = *(byte *)((int)puVar11 + 9) & 0x7f | (byte)DAT_8c0818ac;
            (*(code *)puVar2)();
            *(int *)((int)puVar12 + -0x20) = *(int *)((int)puVar12 + -0x20) + 1;
          }
        } while (iVar7 < *(int *)(*(int *)((int)puVar12 + -0x10) + iVar9));
      }
    }
    else {
      dVar13 = (double)(*(code *)PTR_FUN_8c081784)(*(undefined4 *)((int)puVar12 + -0x18));
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar16,0),
                                  SUB84(dVar13,0));
      }
      else {
        dVar13 = dVar13 * dVar16;
      }
      if (in_FPSCR_PR == '\0') {
        iVar7 = (int)(float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        iVar7 = (int)dVar13;
      }
      if (*(int *)(param_2[2] + (int)DAT_8c081778) <= iVar7) goto LAB_8c0816be;
    }
    iVar7 = *(int *)((int)puVar12 + -0x14);
    *(int *)((int)puVar12 + -0x1c) = *(int *)((int)puVar12 + -0x1c) + 1;
    *(int *)((int)puVar12 + -0x14) = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      return;
    }
  } while( true );
}

