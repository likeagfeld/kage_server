// entry: 8c0793e0
// name: FUN_8c0793e0
// signature: undefined FUN_8c0793e0(void)


void FUN_8c0793e0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined2 unaff_r10;
  undefined4 uStack0000001c;
  
  uVar1 = (*(code *)PTR_FUN_8c0794f4)(6);
  uVar2 = (*(code *)PTR_FUN_8c0794f4)((int)DAT_8c0794e6);
  (*(code *)PTR_FUN_8c0794f8)(param_1,uVar1,uVar2,unaff_r10);
  pcVar3 = PTR_DAT_8c0794fc + DAT_8c0794e8;
  if (*pcVar3 == '\0') {
    uStack0000001c = *DAT_8c07950c;
  }
  else {
    uStack0000001c = *DAT_8c079500;
  }
  (*(code *)PTR_FUN_8c079504)(pcVar3[1]);
  (*(code *)PTR_FUN_8c079508)(uStack0000001c,pcVar3[2],pcVar3[3],0);
  FUN_8c079324();
  return;
}

