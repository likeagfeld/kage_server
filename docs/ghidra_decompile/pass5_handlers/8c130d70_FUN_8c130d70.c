// entry: 8c130d70
// name: FUN_8c130d70
// signature: undefined FUN_8c130d70(void)


void FUN_8c130d70(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = PTR_FUN_8c130e88;
  if (param_2 == 8) {
    if (param_3 == 0) {
      iVar5 = 8;
      iVar3 = 0;
      do {
        iVar2 = (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x6c),iVar3);
        iVar5 = iVar5 + -1;
        *(uint *)(DAT_8c130e80 + iVar2) = *(uint *)(DAT_8c130e80 + iVar2) & 0xfffffffe | 1;
        iVar3 = iVar3 + 1;
      } while (iVar5 != 0);
    }
    else {
      iVar5 = 8;
      iVar3 = 0;
      do {
        iVar2 = (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x6c),iVar3);
        iVar5 = iVar5 + -1;
        *(uint *)(DAT_8c130e80 + iVar2) = *(uint *)(DAT_8c130e80 + iVar2) & 0xfffffffe;
        iVar3 = iVar3 + 1;
      } while (iVar5 != 0);
    }
  }
  else {
    iVar3 = (*(code *)PTR_FUN_8c130e88)(*(undefined4 *)(param_1 + 0x6c),7);
    uVar4 = *(uint *)(DAT_8c130e80 + iVar3) & 0xfffffffe;
    *(uint *)(DAT_8c130e80 + iVar3) = uVar4;
    if (param_3 == 0) {
      *(uint *)(DAT_8c130e80 + iVar3) = uVar4 | 1;
    }
  }
  return;
}

