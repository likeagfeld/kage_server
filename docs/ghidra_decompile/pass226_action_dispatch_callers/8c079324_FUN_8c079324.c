// entry: 8c079324
// name: FUN_8c079324
// signature: undefined FUN_8c079324(void)


void FUN_8c079324(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r8;
  int unaff_r11;
  int unaff_r14;
  
  iVar2 = unaff_r14 + unaff_r11 * 6;
  *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) & 0xf | 0x40;
  uVar1 = (*(code *)PTR_FUN_8c0793d4)(6);
  (*(code *)PTR_FUN_8c0793d8)(uVar1,unaff_r14 + unaff_r11 * 6,6);
  uVar1 = (*(code *)PTR_FUN_8c0793d4)((int)DAT_8c0793ca);
  (*(code *)PTR_FUN_8c0793d8)(uVar1,(int)DAT_8c0793ca);
  (*(code *)PTR_FUN_8c0793d8)(param_1,unaff_r14 + unaff_r11 * 6 + 2,(int)DAT_8c0793ce);
  (*(code *)PTR_FUN_8c0793d8)((int)DAT_8c0793d0);
  (*(code *)PTR_FUN_8c0793dc)(*(undefined4 *)(DAT_8c0793d2 + unaff_r8),param_2);
  FUN_8c07924a();
  return;
}

