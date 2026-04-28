// entry: 8c077f78
// name: FUN_8c077f78
// signature: undefined FUN_8c077f78(void)


/* WARNING: Removing unreachable block (ram,0x8c0780e0) */

void FUN_8c077f78(undefined *param_1,uint param_2,undefined *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r11;
  uint uVar7;
  int unaff_r13;
  int unaff_r14;
  int iVar8;
  
  while( true ) {
    unaff_r11 = unaff_r11 + -1;
    unaff_r14 = unaff_r14 + 1;
    if (unaff_r11 == 0) break;
    iVar5 = (*(code *)PTR_FUN_8c07806c)
                      (*(undefined4 *)
                        ((int)DAT_8c07805c + *(int *)((int)&param_1 + (int)DAT_8c078058)),unaff_r14,
                       0xffffffff);
    if (((iVar5 != 0) &&
        (iVar5 = (*(code *)PTR_FUN_8c078070)(unaff_r14 * 6 + unaff_r13 + 2,4), iVar5 != 4)) &&
       (iVar5 = (*(code *)PTR_FUN_8c078070)(4,unaff_r14 * 6 + unaff_r13 + 2), iVar5 != 0)) {
      FUN_8c07811a();
      return;
    }
  }
  iVar5 = *(int *)(*(int *)((int)DAT_8c07805c + *(int *)((int)&param_1 + (int)DAT_8c078058)) + 0x44)
  ;
  if (iVar5 == 1) {
    FUN_8c0781aa();
    return;
  }
  if (iVar5 == 2) {
    FUN_8c078204();
    return;
  }
  if (iVar5 == 3) {
    if (((int)*(char *)(*(int *)((int)&param_1 + (int)DAT_8c078058) + 0x12) & (int)DAT_8c07805e) ==
        0xf) {
      FUN_8c078582();
      return;
    }
    iVar5 = *(int *)((int)&param_1 + (int)DAT_8c078058);
    *(undefined4 *)(*(int *)(DAT_8c07805c + iVar5) + 0x44) = 0;
    iVar5 = *(int *)(*(int *)(DAT_8c07805c + iVar5) + 0x44);
  }
  if (iVar5 == 0x15) {
    FUN_8c07821a();
    return;
  }
  if (iVar5 != 0x16) {
    if (iVar5 != 0x19) {
      FUN_8c078514();
      return;
    }
    *(undefined4 *)((int)DAT_8c078060 + *(int *)((int)&param_1 + (int)DAT_8c078058)) = 1;
  }
  iVar5 = *(int *)((int)&param_1 + (int)DAT_8c078058);
  uVar2 = (*(code *)PTR_FUN_8c078074)(iVar5);
  *(undefined4 *)((int)&param_1 + (int)DAT_8c07805a) = uVar2;
  cVar1 = *(char *)(iVar5 + 0x30);
  if (cVar1 != '\x01') {
    if (cVar1 == '\0') {
      iVar5 = *(int *)((int)&param_1 + (int)DAT_8c078058);
      uVar7 = *(uint *)((int)DAT_8c078064 + *(int *)(DAT_8c07805c + iVar5));
      uVar3 = 0;
      *(undefined4 *)((int)&param_1 + (int)DAT_8c078066) = 0;
      *(int *)((int)&param_1 + (int)DAT_8c078068) = iVar5 + DAT_8c078062;
      iVar8 = 8;
      do {
        if (*(char *)(iVar5 + 0x3e + uVar3) != '\x03') {
          if ((int)uVar3 < 0) {
            uVar6 = 1 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar6 = 1 << (uVar3 & 0x1f);
          }
          if (((((uVar7 & uVar6) != 0) &&
               (iVar4 = *(int *)(uVar3 * 4 + *(int *)((int)&param_1 + (int)DAT_8c078068)),
               iVar4 != 0)) && (*(int *)(iVar4 + 0x24) == 1)) &&
             ((*(byte *)(DAT_8c0781c0 + iVar4) & 4) == 0)) {
            FUN_8c0784d4();
            return;
          }
        }
        iVar8 = iVar8 + -1;
        uVar3 = *(int *)((int)&param_1 + (int)DAT_8c0781c2) + 1;
        *(uint *)((int)&param_1 + (int)DAT_8c0781c2) = uVar3;
      } while (iVar8 != 0);
      iVar5 = *(int *)((int)&param_1 + (int)DAT_8c0781c4);
      param_1 = PTR_s_DeadManBit____ld_8c0781d4;
      param_2 = uVar7;
      (*(code *)PTR_FUN_8c0781d8)(iVar5);
      (*DAT_8c0781dc)(*(undefined4 *)(DAT_8c0781c6 + iVar5),uVar7);
      (*(code *)PTR_FUN_8c0781e0)(*(undefined4 *)(DAT_8c0781c6 + iVar5));
      param_3 = PTR_s______Normal_Rule_Update_History_a_8c0781e8;
      if (*(int *)PTR_DAT_8c0781e4 != 0) {
        (*(code *)PTR__vsprintf_8c0781ec)(&stack0x0000000c,&stack0x0000000c);
        (*(code *)PTR_FUN_8c0781f0)(*(undefined4 *)PTR_DAT_8c0781e4,&stack0x0000000c);
      }
    }
    if (*(int *)((int)&param_1 + (int)DAT_8c0781c8) == 0) {
      return;
    }
    FUN_8c078354();
    return;
  }
  FUN_8c07826a();
  return;
}

