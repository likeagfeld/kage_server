// entry: 8c05c144
// name: FUN_8c05c144
// signature: undefined FUN_8c05c144(void)


void FUN_8c05c144(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8,
                 undefined4 param_9)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined8 uVar12;
  ulonglong in_dr14;
  ulonglong uVar13;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar10 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar10 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar10 + -4) = in_PR;
  iVar7 = (int)DAT_8c05c2d2;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar10 + iVar7) = (int)param_1;
    *(undefined4 *)((int)puVar10 + iVar7 + 4) = param_2;
    *(undefined4 *)((int)puVar10 + iVar7 + 0x10) = param_3;
    *(int *)((int)puVar10 + iVar7 + 0x14) = (int)((ulonglong)param_4 >> 0x20);
    *(int *)((int)puVar10 + iVar7 + 0x18) = (int)param_4;
    *(undefined4 *)((int)puVar10 + iVar7 + 0x1c) = param_5;
  }
  else {
    *(undefined8 *)((int)puVar10 + iVar7) = in_xd4;
    *(ulonglong *)((int)puVar10 + iVar7 + 4) = CONCAT44(param_2,param_3);
    *(undefined8 *)((int)puVar10 + iVar7 + 0x10) = in_xd6;
    *(undefined8 *)((int)puVar10 + iVar7 + 0x14) = param_4;
    *(undefined8 *)((int)puVar10 + iVar7 + 0x18) = in_xd8;
    *(ulonglong *)((int)puVar10 + iVar7 + 0x1c) = CONCAT44(param_5,param_6);
  }
  uVar1 = *(ushort *)(param_7 + 0x11);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar10 + iVar7 + -4) = (int)((ulonglong)param_1 >> 0x20);
  }
  else {
    *(undefined8 *)((int)puVar10 + iVar7 + -4) = param_1;
  }
  *(undefined4 *)((int)puVar10 + iVar7 + 8) = param_8;
  *(undefined4 *)((int)puVar10 + iVar7 + 0xc) = param_9;
  if (((uVar1 & 2) == 0) && ((*(ushort *)(param_7 + 0x11) & 2) == 0)) {
    iVar8 = param_7[0xe];
    if (iVar8 != 0) {
      (**(code **)(*(int *)(iVar8 + 0x18) + 0x14))(iVar8 + *(int *)(*(int *)(iVar8 + 0x18) + 0xc),3)
      ;
      param_7[0xe] = 0;
    }
    if (param_7[0xf] != 0) {
      (*(code *)PTR_FUN_8c05c2d8)();
      param_7[0xf] = 0;
    }
    if (param_7[0x10] != 0) {
      (*(code *)PTR_FUN_8c05c2d8)();
      param_7[0x10] = 0;
    }
    *(undefined2 *)(param_7 + 0x11) = 2;
  }
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44(*(undefined4 *)((int)puVar10 + iVar7 + -4),(int)param_4);
  }
  else {
    uVar12 = *(undefined8 *)((int)puVar10 + iVar7 + -4);
  }
  uVar5 = *DAT_8c05c2dc;
  if (in_FPSCR_SZ == '\0') {
    param_7[1] = (int)((ulonglong)uVar12 >> 0x20);
    uVar12 = CONCAT44(*(undefined4 *)((int)puVar10 + iVar7),(int)uVar12);
  }
  else {
    *(undefined8 *)(param_7 + 1) = uVar12;
    uVar12 = *(undefined8 *)((int)puVar10 + iVar7);
  }
  iVar8 = *(int *)((int)puVar10 + iVar7 + 8);
  if (in_FPSCR_SZ == '\0') {
    param_7[2] = (int)((ulonglong)uVar12 >> 0x20);
    uVar12 = CONCAT44(*(undefined4 *)((int)puVar10 + iVar7 + 4),(int)uVar12);
  }
  else {
    *(undefined8 *)(param_7 + 2) = uVar12;
    uVar12 = *(undefined8 *)((int)puVar10 + iVar7 + 4);
  }
  *param_7 = uVar5;
  if (in_FPSCR_SZ == '\0') {
    param_7[3] = (int)((ulonglong)uVar12 >> 0x20);
    uVar12 = CONCAT44(*(undefined4 *)((int)puVar10 + iVar7 + 0x10),(int)uVar12);
  }
  else {
    *(undefined8 *)(param_7 + 3) = uVar12;
    uVar12 = *(undefined8 *)((int)puVar10 + iVar7 + 0x10);
  }
  uVar5 = *(undefined4 *)((int)puVar10 + iVar7 + 0xc);
  if (in_FPSCR_SZ == '\0') {
    param_7[6] = (int)((ulonglong)uVar12 >> 0x20);
    uVar12 = CONCAT44(*(undefined4 *)((int)puVar10 + iVar7 + 0x14),(int)uVar12);
  }
  else {
    *(undefined8 *)(param_7 + 6) = uVar12;
    uVar12 = *(undefined8 *)((int)puVar10 + iVar7 + 0x14);
  }
  param_7[4] = iVar8;
  if (in_FPSCR_SZ == '\0') {
    param_7[7] = (int)((ulonglong)uVar12 >> 0x20);
    uVar12 = CONCAT44(*(undefined4 *)((int)puVar10 + iVar7 + 0x18),(int)uVar12);
  }
  else {
    *(undefined8 *)(param_7 + 7) = uVar12;
    uVar12 = *(undefined8 *)((int)puVar10 + iVar7 + 0x18);
  }
  param_7[5] = uVar5;
  if (in_FPSCR_SZ == '\0') {
    param_7[8] = (int)((ulonglong)uVar12 >> 0x20);
    uVar12 = CONCAT44(*(undefined4 *)((int)puVar10 + iVar7 + 0x1c),(int)uVar12);
    param_7[9] = *(undefined4 *)((int)puVar10 + iVar7 + 0x1c);
  }
  else {
    *(undefined8 *)(param_7 + 8) = uVar12;
    uVar12 = *(undefined8 *)((int)puVar10 + iVar7 + 0x1c);
    *(undefined8 *)(param_7 + 9) = uVar12;
  }
  if (iVar8 == 0) {
    param_7[4] = 1;
  }
  uVar13 = in_dr14 & 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)puVar10 + iVar7 + 0x20) = 0;
    *(undefined4 *)((int)puVar10 + iVar7 + 0x24) = 0;
    *(undefined4 *)((int)puVar10 + iVar7 + 0x28) = 0;
    *(undefined4 *)((int)puVar10 + iVar7 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)((int)puVar10 + iVar7 + 0x20) = uVar13;
    *(ulonglong *)((int)puVar10 + iVar7 + 0x24) = uVar13;
    *(ulonglong *)((int)puVar10 + iVar7 + 0x28) = uVar13;
    *(ulonglong *)((int)puVar10 + iVar7 + 0x2c) = uVar13;
  }
  *(undefined2 *)((int)puVar10 + iVar7 + 0x30) = 0;
  *(undefined2 *)((int)puVar10 + iVar7 + 0x32) = 0;
  param_7[0xc] = DAT_8c05c2e0;
  uVar5 = DAT_8c05c2e8;
  *(undefined2 *)((int)puVar10 + iVar7 + 0x34) = 0x20;
  *(undefined2 *)((int)puVar10 + iVar7 + 0x36) = 0x20;
  *(undefined4 *)((int)puVar10 + iVar7 + 0x3c) = DAT_8c05c2e4;
  *(undefined4 *)((int)puVar10 + iVar7 + 0x40) = 0;
  *(undefined4 *)((int)puVar10 + iVar7 + 0x38) = 0;
  *(undefined4 *)((int)puVar10 + iVar7 + 0x44) = 0;
  if (in_FPSCR_SZ == '\0') {
    uVar12 = CONCAT44(param_7[6],(int)uVar12);
  }
  else {
    uVar12 = *(undefined8 *)(param_7 + 6);
  }
  param_7[10] = 0;
  iVar8 = 0;
  param_7[0xb] = 0;
  param_7[0xd] = uVar5;
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar10 + iVar7 + 0x28) = (int)((ulonglong)uVar12 >> 0x20);
    *(undefined4 *)((int)puVar10 + iVar7 + 0x2c) = param_7[7];
  }
  else {
    *(undefined8 *)((int)puVar10 + iVar7 + 0x28) = uVar12;
    *(undefined8 *)((int)puVar10 + iVar7 + 0x2c) = *(undefined8 *)(param_7 + 7);
  }
  *(undefined4 *)((int)puVar10 + iVar7 + 0x38) = param_7[0xc] | param_7[0xd];
  *(undefined4 *)((int)puVar10 + iVar7 + 0x44) = *param_7;
  uVar5 = (*(code *)PTR_FUN_8c05c2ec)(0,param_7[5] * param_7[4]);
  param_7[0xe] = uVar5;
  uVar5 = (*(code *)PTR_FUN_8c05c2f0)(param_7[5] * param_7[4]);
  puVar2 = PTR_FUN_8c05c2f0;
  param_7[0xf] = uVar5;
  uVar5 = (*(code *)puVar2)(param_7[5] << 2);
  param_7[0x10] = uVar5;
  if (0 < (int)param_7[5]) {
    *(undefined4 *)((int)puVar10 + (int)DAT_8c05c2d4 + iVar7 + -4) = 0;
    do {
      puVar3 = PTR_FUN_8c05c384;
      puVar2 = PTR_FUN_8c05c380;
      if (in_FPSCR_SZ == '\0') {
        uVar12 = CONCAT44(param_7[7],param_7[9]);
      }
      else {
        in_xd8 = *(undefined8 *)(param_7 + 9);
        uVar12 = *(undefined8 *)(param_7 + 7);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = ((float)uVar12 + (float)((ulonglong)uVar12 >> 0x20)) * (float)iVar8;
      }
      else {
        fVar11 = SUB84((double)iVar8 * (double)iVar8,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)puVar10 + iVar7 + 0x24) = fVar11;
      }
      else {
        *(undefined8 *)((int)puVar10 + iVar7 + 0x24) = in_xd8;
      }
      if (0 < (int)param_7[4]) {
        iVar9 = 0;
        do {
          puVar4 = PTR_FUN_8c05c388;
          if (in_FPSCR_SZ == '\0') {
            uVar12 = CONCAT44(param_7[6],param_7[8]);
          }
          else {
            in_xd8 = *(undefined8 *)(param_7 + 8);
            uVar12 = *(undefined8 *)(param_7 + 6);
          }
          if (in_FPSCR_PR == '\0') {
            fVar11 = ((float)uVar12 + (float)((ulonglong)uVar12 >> 0x20)) * (float)iVar9;
          }
          else {
            fVar11 = SUB84((double)iVar9 * (double)iVar9,0);
          }
          iVar6 = iVar9 + 1;
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar10 + iVar7 + 0x20) = fVar11;
          }
          else {
            *(undefined8 *)((int)puVar10 + iVar7 + 0x20) = in_xd8;
          }
          *(undefined1 *)(iVar9 + iVar8 * param_7[4] + param_7[0xf]) = 0x20;
          if (in_FPSCR_SZ == '\0') {
            param_1 = CONCAT44(param_7[3],(int)param_1);
          }
          else {
            param_1 = *(undefined8 *)(param_7 + 3);
          }
          (*(code *)puVar4)(param_1,(undefined1 *)((int)puVar10 + iVar7 + 0x48),
                            (undefined1 *)((int)puVar10 + iVar7 + 0x20));
          (*(code *)puVar2)(param_7[0xe],(undefined1 *)((int)puVar10 + iVar7 + 0x48));
          (*(code *)puVar3)((undefined1 *)((int)puVar10 + iVar7 + 0x48),2);
          iVar9 = iVar6;
        } while (iVar6 < (int)param_7[4]);
      }
      iVar8 = iVar8 + 1;
      iVar9 = *(int *)((int)puVar10 + (int)DAT_8c05c37a + iVar7 + -4);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(iVar9 + param_7[0x10]) = (int)(uVar13 >> 0x20);
      }
      else {
        *(ulonglong *)(iVar9 + param_7[0x10]) = uVar13;
      }
      iVar6 = param_7[5];
      *(int *)((int)puVar10 + (int)DAT_8c05c37a + iVar7 + -4) = iVar9 + 4;
    } while (iVar8 < iVar6);
  }
  *(undefined2 *)(param_7 + 0x11) = 5;
  return;
}

