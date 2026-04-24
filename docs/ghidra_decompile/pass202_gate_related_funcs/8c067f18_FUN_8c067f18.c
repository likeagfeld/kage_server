// entry: 8c067f18
// name: FUN_8c067f18
// signature: undefined FUN_8c067f18(void)


void FUN_8c067f18(double param_1,double param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  undefined8 in_dr2;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  bool bVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar3 = *(int *)(DAT_8c068058 + param_3);
  iVar7 = 0;
  iVar4 = param_3 + DAT_8c06805a;
  iVar6 = 8;
  iVar5 = (int)DAT_8c06805e;
  puVar8 = *(ushort **)(DAT_8c06805c + iVar3);
  do {
    uVar10 = SUB84(param_2,0);
    if (((((*puVar8 & 1) != 0) && ((puVar8[4] & 4) == 0)) && (*(int *)(iVar4 + iVar7 * 4) != 0)) &&
       (((*(int *)(*(int *)(iVar4 + iVar7 * 4) + 0x58) != 0 &&
         ((**(uint **)(*(int *)(iVar4 + iVar7 * 4) + 0x58) & 8) != 0)) &&
        ((*(uint *)(*(int *)(iVar4 + iVar7 * 4) + 0x2c) & DAT_8c068068) != 0)))) {
      iVar3 = *(int *)(*(int *)(iVar7 * 4 + iVar4) + 0x58);
      if (in_FPSCR_SZ == '\0') {
        local_44 = *(undefined4 *)(iVar3 + 0x4c);
        local_40 = *(undefined4 *)(iVar3 + 0x50);
        local_30 = *(undefined4 *)(iVar3 + 0x54);
        in_dr2 = CONCAT44(local_30,(int)in_dr2);
      }
      else {
        local_38 = (undefined4)*(undefined8 *)(iVar3 + 0x4c);
        local_40 = (undefined4)*(undefined8 *)(iVar3 + 0x50);
        in_dr2 = *(undefined8 *)(iVar3 + 0x54);
        local_2c = (int)((ulonglong)in_dr2 >> 0x20);
        local_30 = (undefined4)in_dr2;
        local_44 = local_38;
      }
      local_3c = local_30;
      local_38 = local_44;
      local_34 = local_40;
      (*(code *)PTR_FUN_8c06806c)(puVar8 + 1,&local_44,puVar8 + 0x16,puVar8 + 0x1c);
      if (in_FPSCR_SZ == '\0') {
        param_2 = (double)CONCAT44(*(undefined4 *)(puVar8 + 0x1c),uVar10);
        param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),*(undefined4 *)(puVar8 + 0x14))
        ;
      }
      else {
        param_2 = *(double *)(puVar8 + 0x1c);
      }
      fVar11 = (float)((ulonglong)param_2 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar12 = fVar11 < SUB84(param_1,0);
      }
      else {
        bVar12 = param_2 < param_1;
      }
      if ((bVar12) && (in_FPSCR_SZ == '\0')) {
        param_1 = (double)(ulonglong)(uint)fVar11;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar9 = CONCAT44(*(undefined4 *)(puVar8 + 0x16),*(undefined4 *)(puVar8 + 0x18));
        param_1 = (double)CONCAT44(*(undefined4 *)(puVar8 + 0x1a),SUB84(param_1,0));
      }
      else {
        uVar9 = *(undefined8 *)(puVar8 + 0x16);
        param_1 = *(double *)(puVar8 + 0x1a);
      }
      (*(code *)PTR_FUN_8c068070)(uVar9,*(undefined4 *)(DAT_8c068060 + param_3));
      iVar3 = *(int *)(DAT_8c068058 + param_3);
    }
    iVar6 = iVar6 + -1;
    iVar7 = iVar7 + 1;
    puVar8 = (ushort *)((int)puVar8 + iVar5);
  } while (iVar6 != 0);
  iVar4 = *(int *)(iVar3 + 0x28);
  local_2c = *(int *)((int)DAT_8c068062 + *(int *)(DAT_8c068060 + param_3));
  puVar8 = *(ushort **)(DAT_8c068064 + iVar3);
  iVar3 = 0;
  if (0 < iVar4) {
    iVar5 = (int)DAT_8c068066;
    do {
      uVar10 = SUB84(param_1,0);
      if ((*puVar8 & 1) != 0) {
        (*(code *)PTR_FUN_8c068150)
                  (*(undefined4 *)(DAT_8c068148 + param_3),puVar8 + 1,puVar8 + 0x32,puVar8 + 0x3a,
                   (int)puVar8 + (int)DAT_8c068146);
        puVar1 = PTR_FUN_8c068158;
        iVar6 = (*(code *)PTR_FUN_8c068154)();
        if ((((iVar6 == 6) && (iVar6 = (*(code *)PTR_FUN_8c068154)(), -1 < iVar6)) &&
            (iVar6 = (*(code *)PTR_FUN_8c068154)(), iVar6 < *(short *)(local_2c + 8))) &&
           ((iVar6 = (*(code *)PTR_FUN_8c068154)(), -1 < iVar6 &&
            (iVar6 = (*(code *)PTR_FUN_8c068154)(), iVar6 < *(short *)(local_2c + 10))))) {
          local_24 = (*(code *)PTR_FUN_8c068154)();
          uVar2 = (*(code *)PTR_FUN_8c068154)();
          iVar6 = (*(code *)PTR_FUN_8c06815c)(local_2c,local_24,uVar2);
          uVar2 = (undefined4)in_dr2;
          if (iVar6 != 0x62) {
            local_28 = (*(code *)PTR_FUN_8c068154)();
            uVar2 = (*(code *)PTR_FUN_8c068154)();
            iVar6 = (*(code *)PTR_FUN_8c06815c)(local_2c,local_28,uVar2);
            uVar2 = (undefined4)in_dr2;
            if (iVar6 != 0x5b) goto LAB_8c0680de;
          }
          in_dr2 = CONCAT44(0x3f800000,uVar2);
          if (in_FPSCR_SZ == '\0') {
            puVar8[0x3c] = 0;
            puVar8[0x3d] = 0x3f80;
          }
          else {
            *(undefined8 *)(puVar8 + 0x3c) = in_dr2;
          }
        }
LAB_8c0680de:
        if (in_FPSCR_SZ == '\0') {
          uVar9 = CONCAT44(*(undefined4 *)(puVar8 + 0x3a),*(undefined4 *)(puVar8 + 0x3c));
          param_1 = (double)CONCAT44(*(undefined4 *)(puVar8 + 0x3e),uVar10);
        }
        else {
          uVar9 = *(undefined8 *)(puVar8 + 0x3a);
          param_1 = *(double *)(puVar8 + 0x3e);
        }
        if (in_FPSCR_SZ == '\0') {
          param_1 = (double)CONCAT44((int)((ulonglong)param_1 >> 0x20),
                                     *(undefined4 *)((int)DAT_8c068146 + (int)puVar8));
        }
        (*(code *)puVar1)(uVar9,param_1,*(undefined4 *)(DAT_8c06814c + param_3));
      }
      iVar3 = iVar3 + 1;
      puVar8 = (ushort *)((int)puVar8 + iVar5);
    } while (iVar3 < iVar4);
  }
  return;
}

