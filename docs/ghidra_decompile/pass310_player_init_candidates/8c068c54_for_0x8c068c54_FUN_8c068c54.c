// query addr: 0x8c068c54
// containing entry: 8c068c54
// name: FUN_8c068c54
// signature: undefined FUN_8c068c54(void)
// body addrs: 260


/* WARNING: Removing unreachable block (ram,0x8c068d0c) */

void FUN_8c068c54(undefined4 param_1,double param_2,double param_3,int param_4)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined8 in_dr12;
  double dVar14;
  float fVar15;
  double dVar16;
  undefined8 in_xd12;
  undefined8 in_xd14;
  int iVar17;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [8];
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr12;
    puVar10 = auStack_14;
  }
  else {
    puVar10 = auStack_24;
    uStack_c = in_dr12;
  }
  *(undefined4 *)(puVar10 + -4) = in_PR;
  iVar8 = 0;
  uVar13 = 0;
  iVar7 = *(int *)((int)DAT_8c068d5a + *(int *)(DAT_8c068d58 + param_4));
  iVar17 = (int)*(short *)(iVar7 + 10) * (int)*(short *)(iVar7 + 8);
  iVar3 = (*(code *)PTR_FUN_8c068d64)(4,0,0);
  uVar9 = *(undefined4 *)(iVar3 + 4);
  if (in_FPSCR_SZ == '\0') {
    uVar11 = CONCAT44(*(undefined4 *)(DAT_8c068d68 + 0x34),param_1);
  }
  else {
    uVar11 = *(undefined8 *)(DAT_8c068d68 + 0x34);
  }
  *(undefined4 *)(puVar10 + -8) = uVar9;
  (*(code *)PTR_FUN_8c068d6c)(uVar11,uVar9,4,0);
  if (in_FPSCR_SZ == '\0') {
    in_xd12 = CONCAT44(uVar13,(int)uVar11);
  }
  (*(code *)PTR_FUN_8c068d70)(in_xd12,uVar9);
  if (0 < iVar17) {
    iVar3 = (int)DAT_8c068d5c;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)CONCAT44(DAT_8c068d74,uVar13);
    }
    else {
      dVar14 = (double)CONCAT44(PTR__njPushMatrixEx_8c068d78,DAT_8c068d74);
    }
    do {
      piVar5 = (int *)(*(int *)((int)DAT_8c068d60 + *(int *)(DAT_8c068d5e + param_4)) + iVar3);
      puVar4 = (ushort *)(*(code *)piVar5[2])(*(int *)(DAT_8c068d5e + param_4) + *piVar5,iVar8);
      puVar1 = PTR_FUN_8c068d7c;
      uVar9 = SUB84(param_2,0);
      uVar13 = SUB84(param_3,0);
      if ((puVar4 != (ushort *)0x0) && ((*puVar4 & 1) != 0)) {
        (*(code *)PTR__njPushMatrixEx_8c068d78)();
        iVar6 = -((int)((int)*(short *)(iVar7 + 8) + (uint)(*(short *)(iVar7 + 8) < 0)) >> 1);
        fVar15 = (float)iVar6;
        uVar2 = (*(code *)puVar1)(iVar6);
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44((float)uVar2,uVar13);
        }
        else {
          dVar12 = (double)uVar2;
        }
        iVar6 = -((int)((int)*(short *)(iVar7 + 10) + (uint)(*(short *)(iVar7 + 10) < 0)) >> 1);
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44((float)iVar6,fVar15 + (float)((ulonglong)dVar12 >> 0x20));
        }
        else {
          dVar16 = (double)iVar6;
        }
        uVar2 = (*(code *)puVar1)(dVar12,iVar6);
        fVar15 = (float)((ulonglong)dVar14 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) + fVar15);
          param_3 = (double)CONCAT44((float)uVar2,SUB84(dVar12,0));
        }
        else {
          dVar16 = dVar16 + dVar14;
          param_3 = (double)uVar2;
        }
        uVar11 = in_xd14;
        if (in_FPSCR_SZ == '\0') {
          uVar11 = CONCAT44(SUB84(dVar16,0),SUB84(dVar14,0));
        }
        if (in_FPSCR_PR == '\0') {
          param_2 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) +
                                     (float)((ulonglong)param_3 >> 0x20) + fVar15,SUB84(dVar16,0));
        }
        else {
          param_2 = dVar16 + param_3 + dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar9);
        }
        (*(code *)PTR__njTranslate_8c068d80)(uVar11,param_2,0);
        (*(code *)PTR_FUN_8c068d84)(*(undefined4 *)(puVar10 + -8));
        (*(code *)PTR__njPopMatrixEx_8c068d88)();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar17);
  }
  return;
}

