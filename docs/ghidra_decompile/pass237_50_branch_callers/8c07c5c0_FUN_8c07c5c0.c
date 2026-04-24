// entry: 8c07c5c0
// name: FUN_8c07c5c0
// signature: undefined FUN_8c07c5c0(void)


void FUN_8c07c5c0(uint *param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  if (param_2 != 0) {
    *param_1 = *param_1 | 1;
  }
  uVar5 = (uint)*(short *)(param_5 + 8);
  param_1[8] = uVar5;
  uVar6 = (uint)*(short *)(param_5 + 10);
  param_1[10] = param_3;
  uVar15 = (uVar6 - 2) * (uVar5 - 2);
  iVar7 = (int)DAT_8c07c73a;
  param_1[9] = uVar6;
  param_1[0xb] = param_4;
  param_1[2] = param_5;
  param_1[1] = param_6;
  param_1[3] = param_7;
  param_1[0xc] = uVar15;
  if (*(char *)(iVar7 + param_6) == '\0') {
    param_1[0xc] = uVar15 - (uVar6 - 6) * (uVar5 - 6);
  }
  *(undefined4 *)((int)DAT_8c07c73c + (int)param_1) = 0;
  iVar16 = uVar6 * uVar5;
  *(undefined4 *)((int)DAT_8c07c73e + (int)param_1) = 0;
  *(undefined4 *)((int)DAT_8c07c740 + (int)param_1) = 0;
  *(undefined4 *)((int)DAT_8c07c742 + (int)param_1) = 0;
  iVar7 = (int)DAT_8c07c744;
  *param_1 = *param_1 & 0xffff;
  pbVar13 = *(byte **)(iVar7 + param_5);
  iVar7 = 0;
  if (0 < iVar16) {
    iVar10 = (int)DAT_8c07c746;
    do {
      puVar2 = PTR_FUN_8c07ca88;
      uVar6 = DAT_8c07ca80;
      uVar5 = DAT_8c07ca74;
      bVar11 = *pbVar13;
      if ((((bVar11 == 0x14) || (bVar11 == 0x15)) || (bVar11 == 0x16)) ||
         (((bVar11 == 0x17 || (bVar11 == 0x18)) ||
          ((bVar11 == 0x19 || ((bVar11 == 0x1a || (bVar11 == 0x1b)))))))) {
        uVar4 = (*(code *)PTR_FUN_8c07ca84)();
        iVar14 = *(int *)((int)DAT_8c07ca62 + (int)param_1);
        (*(code *)puVar2)(uVar4);
        (*(code *)PTR_FUN_8c07ca8c)();
        (*(code *)puVar2)();
        uVar4 = DAT_8c07ca68;
        pbVar12 = (byte *)((int)param_1 + iVar14 * 2 + iVar10);
        bVar11 = *pbVar12;
        bVar1 = (byte)DAT_8c07ca66;
        *(int *)((int)DAT_8c07ca62 + (int)param_1) = iVar14 + 1;
        *pbVar12 = (bVar11 & bVar1 | 0x10) & (byte)uVar4 | 8;
        bVar11 = *pbVar13;
      }
      else if (bVar11 == 0x5a) {
        *param_1 = *param_1 | DAT_8c07ca78;
        bVar11 = *pbVar13;
      }
      else if (bVar11 == 0x5c) {
        *param_1 = *param_1 | DAT_8c07ca7c;
        bVar11 = *pbVar13;
      }
      else if ((bVar11 == 0x5f) || (bVar11 == 0x60)) {
        *(int *)((int)DAT_8c07ca5c + (int)param_1) = *(int *)((int)DAT_8c07ca5c + (int)param_1) + 1;
        *param_1 = *param_1 | uVar5;
        bVar11 = *pbVar13;
      }
      else if ((bVar11 == 99) || (((bVar11 == 100 || (bVar11 == 0x65)) || (bVar11 == 0x66)))) {
        *(int *)((int)DAT_8c07ca5e + (int)param_1) = *(int *)((int)DAT_8c07ca5e + (int)param_1) + 1;
        *param_1 = *param_1 | uVar6;
        bVar11 = *pbVar13;
      }
      else if (bVar11 == 0x67) {
        iVar14 = (int)DAT_8c07c740;
        *param_1 = *param_1 | DAT_8c07c748;
        *(int *)(iVar14 + (int)param_1) = *(int *)(iVar14 + (int)param_1) + 1;
        bVar11 = *pbVar13;
      }
      if ((0x1b < bVar11) && (bVar11 < 0x4c)) {
        *param_1 = *param_1 | DAT_8c07c74c;
      }
      iVar7 = iVar7 + 1;
      pbVar13 = pbVar13 + 1;
    } while (iVar7 < iVar16);
  }
  puVar3 = PTR_FUN_8c07c8f8;
  puVar2 = PTR_FUN_8c07c8f4;
  uVar8 = (*(code *)PTR_FUN_8c07c8f4)(iVar16);
  *(undefined4 *)((int)DAT_8c07c8ce + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar16);
  (*(code *)PTR_FUN_8c07c8fc)
            (*(undefined4 *)((int)DAT_8c07c8ce + (int)param_1),
             *(undefined4 *)((int)DAT_8c07c8d0 + param_1[2]),iVar16);
  uVar8 = (*(code *)puVar2)(iVar16 * 4);
  *(undefined4 *)((int)DAT_8c07c8d2 + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar16 * 4);
  uVar8 = (*(code *)puVar2)(iVar16 * 4);
  *(undefined4 *)((int)DAT_8c07c8d4 + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar16 * 4);
  uVar8 = (*(code *)puVar2)(iVar16 * 4);
  *(undefined4 *)((int)DAT_8c07c8d6 + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar16 * 4);
  uVar8 = (*(code *)puVar2)(iVar16 * 4);
  *(undefined4 *)((int)DAT_8c07c8d8 + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar16 * 4);
  uVar8 = (*(code *)puVar2)(iVar16 * 4);
  *(undefined4 *)((int)DAT_8c07c8da + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar16 * 4);
  uVar8 = (*(code *)puVar2)(iVar16 * 4);
  *(undefined4 *)((int)DAT_8c07c8dc + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar16 * 4);
  if (*(int *)((int)DAT_8c07c8de + (int)param_1) != 0) {
    uVar8 = (*(code *)puVar2)(iVar16 * 4);
    *(undefined4 *)((int)DAT_8c07ca6a + (int)param_1) = uVar8;
    (*(code *)puVar3)(0,iVar16 * 4);
  }
  if (*(int *)((int)DAT_8c07c8e0 + (int)param_1) != 0) {
    uVar8 = (*(code *)puVar2)(iVar16 * 4);
    *(undefined4 *)((int)DAT_8c07ca6c + (int)param_1) = uVar8;
    (*(code *)puVar3)(0,iVar16 * 4);
  }
  if ((*param_1 & DAT_8c07c900) != 0) {
    uVar8 = (*(code *)puVar2)(iVar16 * 4);
    *(undefined4 *)((int)DAT_8c07ca6e + (int)param_1) = uVar8;
    (*(code *)puVar3)(0,iVar16 * 4);
  }
  uVar9 = (*(code *)puVar2)(DAT_8c07c904);
  uVar8 = DAT_8c07c904;
  *(undefined4 *)((int)DAT_8c07c8e2 + (int)param_1) = uVar9;
  (*(code *)puVar3)(0,uVar8);
  uVar8 = (*(code *)puVar2)(param_1[10] * 0x88);
  uVar5 = param_1[10];
  *(undefined4 *)((int)DAT_8c07c8e4 + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,uVar5 * 0x88);
  uVar8 = (*(code *)puVar2)(iVar16 * 0x14);
  *(undefined4 *)((int)DAT_8c07c8e6 + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar16 * 0x14);
  uVar8 = (*(code *)puVar2)((int)DAT_8c07c8e8);
  iVar7 = (int)DAT_8c07c8e8;
  *(undefined4 *)((int)DAT_8c07c8ea + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar7);
  uVar8 = (*(code *)puVar2)((int)DAT_8c07c8ec);
  iVar7 = (int)DAT_8c07c8ec;
  *(undefined4 *)((int)DAT_8c07c8ee + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar7);
  uVar8 = (*(code *)puVar2)(param_1[0xc] * 0x14);
  uVar5 = param_1[0xc];
  *(undefined4 *)((int)DAT_8c07c8f0 + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,uVar5 * 0x14);
  uVar8 = (*(code *)puVar2)(param_1[10] << 4);
  uVar5 = param_1[10];
  *(undefined4 *)((int)DAT_8c07c8f2 + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,uVar5 << 4);
  uVar8 = (*(code *)puVar2)((int)DAT_8c07ca58 * param_1[10]);
  uVar5 = param_1[10];
  iVar7 = (int)DAT_8c07ca58;
  *(undefined4 *)((int)DAT_8c07ca5a + (int)param_1) = uVar8;
  (*(code *)puVar3)(0,iVar7 * uVar5);
  if (*(int *)((int)DAT_8c07ca5c + (int)param_1) != 0) {
    uVar8 = (*(code *)puVar2)(*(int *)((int)DAT_8c07ca5c + (int)param_1) * 0x2c);
    *(undefined4 *)((int)DAT_8c07caee + (int)param_1) = uVar8;
    (*(code *)puVar3)(0,*(int *)((int)DAT_8c07caf0 + (int)param_1) * 0x2c);
  }
  if (*(int *)((int)DAT_8c07ca5e + (int)param_1) != 0) {
    uVar8 = (*(code *)puVar2)(*(int *)((int)DAT_8c07ca5e + (int)param_1) << 4);
    *(undefined4 *)((int)DAT_8c07caf2 + (int)param_1) = uVar8;
    (*(code *)puVar3)(0,*(int *)((int)DAT_8c07caf4 + (int)param_1) << 4);
  }
  if ((*param_1 & DAT_8c07ca70) != 0) {
    uVar8 = (*(code *)puVar2)(*(int *)((int)DAT_8c07caf6 + (int)param_1) << 4);
    *(undefined4 *)((int)DAT_8c07caf8 + (int)param_1) = uVar8;
    (*(code *)puVar3)(0,*(int *)((int)DAT_8c07caf6 + (int)param_1) << 4);
  }
  (**(code **)(*(int *)((int)DAT_8c07ca60 + (int)param_1) + 0x38))
            ((int)param_1 + *(int *)(*(int *)((int)DAT_8c07ca60 + (int)param_1) + 0x30));
  FUN_8c07cafa(param_1);
  return;
}

