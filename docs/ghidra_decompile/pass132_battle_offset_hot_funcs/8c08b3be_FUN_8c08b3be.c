// entry: 8c08b3be
// name: FUN_8c08b3be
// signature: undefined FUN_8c08b3be(void)


void FUN_8c08b3be(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  ulonglong in_dr14;
  double dVar8;
  float fVar9;
  undefined8 in_xd8;
  bool bVar10;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  byte abStack_800c [32760];
  undefined8 local_14;
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = (undefined8 *)((int)&local_14 + 4);
    local_14 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_14);
  }
  else {
    puVar5 = &local_14;
    local_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = in_PR;
  iVar2 = (int)DAT_8c08b47a;
  if (*(int *)(DAT_8c08b47c + param_1) != 0) {
    iVar4 = *(int *)(DAT_8c08b47e + param_1);
    iVar3 = 0;
    if (0 < *(int *)(DAT_8c08b47c + param_1)) {
      dVar8 = (double)(in_dr14 & 0xffffffff);
      do {
        if (*(char *)(iVar4 + 8) == '\x01') {
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar4 + 0xc));
          }
          else {
            in_xd8 = *(undefined8 *)(iVar4 + 0xc);
            dVar7 = *(double *)(param_1 + 0x1c);
          }
          fVar9 = (float)((ulonglong)dVar8 >> 0x20);
          if (in_FPSCR_PR == '\0') {
            fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
            bVar10 = fVar9 < fVar6;
          }
          else {
            fVar6 = SUB84(dVar7 - dVar7,0);
            bVar10 = dVar8 < dVar7 - dVar7;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(iVar4 + 0xc) = fVar6;
          }
          else {
            *(undefined8 *)(iVar4 + 0xc) = in_xd8;
          }
          if (!bVar10) {
            *(undefined1 *)(iVar4 + 8) = 0;
            if (in_FPSCR_SZ == '\0') {
              *(float *)(iVar4 + 0xc) = fVar9;
            }
            else {
              *(double *)(iVar4 + 0xc) = dVar8;
            }
            if (*(short *)(iVar4 + 10) == 0) {
              (*(code *)PTR_FUN_8c08b488)((undefined1 *)((int)puVar5 + iVar2 + 0x20));
              *(undefined2 *)((int)puVar5 + iVar2 + 2) = *(undefined2 *)(iVar4 + 2);
              (*(code *)PTR_FUN_8c08b48c)();
              *(byte *)((int)puVar5 + iVar2 + 8) =
                   *(byte *)((int)puVar5 + iVar2 + 8) & (byte)DAT_8c08b484 | 10;
              *(undefined4 *)((int)puVar5 + iVar2 + -4) = 0;
              (*(code *)PTR_FUN_8c08b490)(param_1,(undefined1 *)((int)puVar5 + iVar2),0,0);
              puVar1 = PTR_FUN_8c08b494;
              *(undefined2 *)(iVar4 + 10) = 3;
              (*(code *)puVar1)((undefined1 *)((int)puVar5 + iVar2 + 0x20),2);
            }
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar3 < *(int *)(DAT_8c08b47c + param_1));
    }
  }
  return;
}

