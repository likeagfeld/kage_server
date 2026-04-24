// entry: 8c0793e0
// name: FUN_8c0793e0
// signature: undefined FUN_8c0793e0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0793e0(undefined2 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int unaff_r8;
  undefined2 unaff_r10;
  int unaff_r11;
  int unaff_r14;
  undefined4 uStack0000001c;
  
  uVar1 = (*(code *)PTR_FUN_8c0794f4)(6);
  uVar2 = (*(code *)PTR_FUN_8c0794f4)((int)_DAT_8c0794e6);
  (*(code *)PTR_FUN_8c0794f8)(param_3,uVar1,uVar2,unaff_r10);
  pcVar4 = PTR_DAT_8c0794fc + _DAT_8c0794e8;
  if (*pcVar4 == '\0') {
    uStack0000001c = *_DAT_8c07950c;
  }
  else {
    uStack0000001c = *_DAT_8c079500;
  }
  (*_DAT_8c079504)(pcVar4[1]);
  (*_DAT_8c079508)(uStack0000001c,pcVar4[2],pcVar4[3],0);
  iVar3 = unaff_r14 + unaff_r11 * 6;
  *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) & 0xf | 0x40;
  uVar1 = (*(code *)PTR_FUN_8c0793d4)(6);
  (*(code *)PTR_FUN_8c0793d8)(uVar1,unaff_r14 + unaff_r11 * 6,6);
  uVar1 = (*(code *)PTR_FUN_8c0793d4)((int)_DAT_8c0793ca);
  (*(code *)PTR_FUN_8c0793d8)(uVar1,(int)_DAT_8c0793ca);
  (*(code *)PTR_FUN_8c0793d8)(param_1,unaff_r14 + unaff_r11 * 6 + 2,(int)_DAT_8c0793ce);
  (*(code *)PTR_FUN_8c0793d8)((int)_DAT_8c0793d0);
  (*(code *)PTR_FUN_8c0793dc)(*(undefined4 *)(_DAT_8c0793d2 + unaff_r8),param_2);
  return;
}

