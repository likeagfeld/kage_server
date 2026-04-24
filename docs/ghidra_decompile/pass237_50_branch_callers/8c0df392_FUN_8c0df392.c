// entry: 8c0df392
// name: FUN_8c0df392
// signature: undefined FUN_8c0df392(void)


void FUN_8c0df392(int param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  
  uVar3 = (uint)DAT_8c0df44a;
  uVar4 = (uint)*(char *)(param_1 + 0x12);
  if (((((uVar4 & uVar3) == 1) || ((uVar4 & uVar3) == 5)) || ((uVar4 & uVar3) == 9)) ||
     ((uVar4 & uVar3) == 6)) {
    iVar7 = *(int *)(param_1 + 0x3c);
    pcVar6 = (code *)PTR_FUN_8c0df450;
    if ((iVar7 != 0) && (iVar7 < 0x1f)) {
      if (iVar7 < 0) {
        iVar7 = *(int *)(param_1 + 0x3c);
      }
      (**(code **)(*(int *)(param_1 + 0x28) + 0x2c))
                (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x24),FUN_8c09e790);
      iVar2 = (*(code *)PTR_FUN_8c0df458)(iVar7 << 4);
      *(int *)(param_1 + 0x38) = iVar2;
      puVar1 = PTR_FUN_8c0df45c;
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x3c) = iVar7;
        (*(code *)puVar1)(iVar2,0,4);
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x3c)) {
          iVar5 = 0;
          iVar2 = (int)DAT_8c0df44c;
          do {
            iVar7 = iVar7 + 1;
            *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x38) + 0xc) = 0;
            *(int *)(iVar5 + *(int *)(param_1 + 0x38) + 8) = iVar2;
            iVar5 = iVar5 + 0x10;
          } while (iVar7 < *(int *)(param_1 + 0x3c));
        }
      }
      pcVar6 = (code *)PTR_FUN_8c0df450;
      (*(code *)PTR_FUN_8c0df450)(0,param_1 + 0x10,1);
    }
    (*pcVar6)(0,param_1 + 0x10,3);
  }
  return;
}

