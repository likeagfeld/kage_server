// entry: 8c077fce
// name: FUN_8c077fce
// signature: undefined FUN_8c077fce(void)


/* WARNING: Removing unreachable block (ram,0x8c0780e0) */

void FUN_8c077fce(int param_1,undefined *param_2,uint param_3,undefined *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == 0x15) {
    FUN_8c07821a();
    return;
  }
  if (param_1 != 0x16) {
    if (param_1 != 0x19) {
      FUN_8c078514();
      return;
    }
    *(undefined4 *)((int)DAT_8c078060 + *(int *)((int)&param_2 + (int)DAT_8c078058)) = 1;
  }
  iVar7 = *(int *)((int)&param_2 + (int)DAT_8c078058);
  uVar2 = (*(code *)PTR_FUN_8c078074)(iVar7);
  *(undefined4 *)((int)&param_2 + (int)DAT_8c07805a) = uVar2;
  cVar1 = *(char *)(iVar7 + 0x30);
  if (cVar1 != '\x01') {
    if (cVar1 == '\0') {
      iVar7 = *(int *)((int)&param_2 + (int)DAT_8c078058);
      uVar6 = *(uint *)((int)DAT_8c078064 + *(int *)(DAT_8c07805c + iVar7));
      uVar3 = 0;
      *(undefined4 *)((int)&param_2 + (int)DAT_8c078066) = 0;
      *(int *)((int)&param_2 + (int)DAT_8c078068) = iVar7 + DAT_8c078062;
      iVar8 = 8;
      do {
        if (*(char *)(iVar7 + 0x3e + uVar3) != '\x03') {
          if ((int)uVar3 < 0) {
            uVar5 = 1 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar5 = 1 << (uVar3 & 0x1f);
          }
          if (((((uVar6 & uVar5) != 0) &&
               (iVar4 = *(int *)(uVar3 * 4 + *(int *)((int)&param_2 + (int)DAT_8c078068)),
               iVar4 != 0)) && (*(int *)(iVar4 + 0x24) == 1)) &&
             ((*(byte *)(DAT_8c0781c0 + iVar4) & 4) == 0)) {
            FUN_8c0784d4();
            return;
          }
        }
        iVar8 = iVar8 + -1;
        uVar3 = *(int *)((int)&param_2 + (int)DAT_8c0781c2) + 1;
        *(uint *)((int)&param_2 + (int)DAT_8c0781c2) = uVar3;
      } while (iVar8 != 0);
      iVar7 = *(int *)((int)&param_2 + (int)DAT_8c0781c4);
      param_2 = PTR_s_DeadManBit____ld_8c0781d4;
      param_3 = uVar6;
      (*(code *)PTR_FUN_8c0781d8)(iVar7);
      (*DAT_8c0781dc)(*(undefined4 *)(DAT_8c0781c6 + iVar7),uVar6);
      (*(code *)PTR_FUN_8c0781e0)(*(undefined4 *)(DAT_8c0781c6 + iVar7));
      param_4 = PTR_s______Normal_Rule_Update_History_a_8c0781e8;
      if (*(int *)PTR_DAT_8c0781e4 != 0) {
        (*(code *)PTR_FUN_8c0781ec)(&stack0x0000000c,&stack0x0000000c);
        (*(code *)PTR_FUN_8c0781f0)(*(undefined4 *)PTR_DAT_8c0781e4,&stack0x0000000c);
      }
    }
    if (*(int *)((int)&param_2 + (int)DAT_8c0781c8) == 0) {
      return;
    }
    FUN_8c078354();
    return;
  }
  FUN_8c07826a();
  return;
}

