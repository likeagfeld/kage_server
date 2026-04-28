// entry: 8c077f00
// name: FUN_8c077f00
// signature: undefined FUN_8c077f00(void)


void FUN_8c077f00(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 in_dr14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_c;
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = (undefined8 *)((int)&local_c + 4);
    local_c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_c);
  }
  else {
    puVar12 = &local_c;
    local_c = in_dr14;
  }
  *(undefined4 *)((int)puVar12 + -4) = in_PR;
  iVar6 = (int)DAT_8c078056;
  iVar11 = 0;
  *(undefined4 *)((int)puVar12 + (int)DAT_8c078058 + iVar6 + -4) = param_1;
  iVar8 = 0x18;
  *(undefined4 *)((int)puVar12 + (int)DAT_8c07805a + iVar6 + -4) = 0;
  iVar10 = *(int *)(*(int *)((int)DAT_8c07805c +
                            *(int *)((int)puVar12 + (int)DAT_8c078058 + iVar6 + -4)) + 0x58) + 4;
  do {
    iVar2 = (*(code *)PTR_FUN_8c07806c)
                      (*(undefined4 *)
                        ((int)DAT_8c07805c + *(int *)((int)puVar12 + (int)DAT_8c078058 + iVar6 + -4)
                        ),iVar11,0xffffffff);
    if (((iVar2 != 0) &&
        (iVar2 = (*(code *)PTR_FUN_8c078070)(iVar11 * 6 + iVar10 + 2,4), iVar2 != 4)) &&
       (iVar2 = (*(code *)PTR_FUN_8c078070)(4,iVar11 * 6 + iVar10 + 2), iVar2 != 0)) {
      FUN_8c07811a();
      return;
    }
    iVar8 = iVar8 + -1;
    iVar11 = iVar11 + 1;
  } while (iVar8 != 0);
  iVar8 = *(int *)(*(int *)((int)DAT_8c07805c +
                           *(int *)((int)puVar12 + (int)DAT_8c078058 + iVar6 + -4)) + 0x44);
  if (iVar8 == 1) {
    FUN_8c0781aa();
    return;
  }
  if (iVar8 == 2) {
    FUN_8c078204();
    return;
  }
  if (iVar8 == 3) {
    if (((int)*(char *)(*(int *)((int)puVar12 + (int)DAT_8c078058 + iVar6 + -4) + 0x12) &
        (int)DAT_8c07805e) == 0xf) {
      FUN_8c078582();
      return;
    }
    iVar8 = *(int *)((int)puVar12 + (int)DAT_8c078058 + iVar6 + -4);
    *(undefined4 *)(*(int *)(DAT_8c07805c + iVar8) + 0x44) = 0;
    iVar8 = *(int *)(*(int *)(DAT_8c07805c + iVar8) + 0x44);
  }
  if (iVar8 == 0x15) {
    FUN_8c07821a();
    return;
  }
  if (iVar8 != 0x16) {
    if (iVar8 != 0x19) {
      FUN_8c078514();
      return;
    }
    *(undefined4 *)((int)DAT_8c078060 + *(int *)((int)puVar12 + (int)DAT_8c078058 + iVar6 + -4)) = 1
    ;
  }
  iVar8 = *(int *)((int)puVar12 + (int)DAT_8c078058 + iVar6 + -4);
  uVar3 = (*(code *)PTR_FUN_8c078074)(iVar8);
  *(undefined4 *)((int)puVar12 + (int)DAT_8c07805a + iVar6 + -4) = uVar3;
  cVar1 = *(char *)(iVar8 + 0x30);
  if (cVar1 == '\x01') {
    FUN_8c07826a();
    return;
  }
  if (cVar1 == '\0') {
    iVar8 = *(int *)((int)puVar12 + (int)DAT_8c078058 + iVar6 + -4);
    uVar9 = *(uint *)((int)DAT_8c078064 + *(int *)(DAT_8c07805c + iVar8));
    uVar4 = 0;
    *(undefined4 *)((int)puVar12 + (int)DAT_8c078066 + iVar6 + -4) = 0;
    *(int *)((int)puVar12 + (int)DAT_8c078068 + iVar6 + -4) = iVar8 + DAT_8c078062;
    iVar10 = 8;
    do {
      if (*(char *)(iVar8 + 0x3e + uVar4) != '\x03') {
        if ((int)uVar4 < 0) {
          uVar7 = 1 >> (~uVar4 & 0x1f) + 1;
        }
        else {
          uVar7 = 1 << (uVar4 & 0x1f);
        }
        if ((((uVar9 & uVar7) != 0) &&
            (iVar11 = *(int *)(uVar4 * 4 + *(int *)((int)puVar12 + (int)DAT_8c078068 + iVar6 + -4)),
            iVar11 != 0)) &&
           ((*(int *)(iVar11 + 0x24) == 1 && ((*(byte *)(DAT_8c0781c0 + iVar11) & 4) == 0)))) {
          FUN_8c0784d4();
          return;
        }
      }
      iVar10 = iVar10 + -1;
      uVar4 = *(int *)((int)puVar12 + (int)DAT_8c0781c2 + iVar6 + -4) + 1;
      *(uint *)((int)puVar12 + (int)DAT_8c0781c2 + iVar6 + -4) = uVar4;
    } while (iVar10 != 0);
    iVar8 = *(int *)((int)puVar12 + (int)DAT_8c0781c4 + iVar6 + -4);
    *(undefined **)((int)puVar12 + iVar6 + -4) = PTR_s_DeadManBit____ld_8c0781d4;
    *(uint *)((int)puVar12 + iVar6) = uVar9;
    (*(code *)PTR_FUN_8c0781d8)(iVar8);
    (*DAT_8c0781dc)(*(undefined4 *)(DAT_8c0781c6 + iVar8),uVar9);
    (*(code *)PTR_FUN_8c0781e0)(*(undefined4 *)(DAT_8c0781c6 + iVar8));
    iVar8 = *(int *)PTR_DAT_8c0781e4;
    *(undefined **)((int)puVar12 + iVar6 + 4) = PTR_s______Normal_Rule_Update_History_a_8c0781e8;
    if (iVar8 != 0) {
      puVar5 = (undefined1 *)((int)puVar12 + iVar6 + 8);
      if (((uint)puVar5 & 3) != 0) {
        puVar5 = (undefined1 *)((int)puVar12 + iVar6 + 0xc);
      }
      (*(code *)PTR__vsprintf_8c0781ec)((undefined1 *)((int)puVar12 + iVar6 + 8),puVar5);
      (*(code *)PTR_FUN_8c0781f0)
                (*(undefined4 *)PTR_DAT_8c0781e4,(undefined1 *)((int)puVar12 + iVar6 + 8));
    }
  }
  if (*(int *)((int)puVar12 + (int)DAT_8c0781c8 + iVar6 + -4) != 0) {
    FUN_8c078354();
    return;
  }
  return;
}

