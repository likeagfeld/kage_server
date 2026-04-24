// entry: 8c079498
// name: FUN_8c079498
// signature: undefined FUN_8c079498(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c079498(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uStack_c;
  
  iVar2 = (int)DAT_8c0794ec;
  if (*(int *)PTR_DAT_8c079514 != 0) {
    iVar1 = (int)_DAT_8c0794f2 + iVar2 + -0xc;
    puVar3 = &stack0xfffffff8 + iVar1 + 0xc;
    if (((uint)puVar3 & 3) != 0) {
      puVar3 = &stack0xfffffffc + iVar1 + 0xc;
    }
    (*(code *)PTR_FUN_8c079518)
              ((int)&uStack_c + iVar2,*(undefined4 *)((int)&uStack_c + _DAT_8c0794f2 + iVar2),puVar3
              );
    (*_DAT_8c079520)(*(undefined4 *)PTR_DAT_8c079514,param_1,param_2,(int)&uStack_c + iVar2);
  }
  return;
}

