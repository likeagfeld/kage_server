// entry: 8c011f18
// name: FUN_8c011f18
// signature: undefined FUN_8c011f18(void)


void FUN_8c011f18(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  puVar3 = PTR_FUN_8c012084;
  iVar7 = (int)DAT_8c012072;
  iVar8 = *(int *)((int)DAT_8c012074 + *(int *)(DAT_8c012070 + param_1));
  uVar2 = *(ushort *)(param_1 + 0x54);
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & (byte)DAT_8c012076;
  (*(code *)puVar3)();
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xf;
  bVar1 = *(byte *)(DAT_8c01207a + param_1);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 2) == 0) {
      if ((bVar1 & 4) == 0) {
        if ((bVar1 & 8) != 0) {
          *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xf | (byte)DAT_8c01207c;
        }
      }
      else {
        *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xf | 0x40;
      }
    }
    else {
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xf | 0x20;
    }
  }
  else {
    *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xf | 0x10;
  }
  puVar3 = PTR_FUN_8c012088;
  if (param_3 != 0) {
    uVar5 = (*(code *)PTR_FUN_8c012088)();
    uVar4 = (*(code *)puVar3)();
    (*(code *)PTR_FUN_8c012090)(*(undefined4 *)(DAT_8c012070 + param_1),uVar5,uVar4,param_2 + 2);
    (*(code *)PTR_FUN_8c012084)();
  }
  puVar3 = PTR_FUN_8c012088;
  uVar5 = (*(code *)PTR_FUN_8c012088)();
  uVar6 = (*(code *)puVar3)();
  (*(code *)PTR_FUN_8c01208c)
            (0,*(undefined4 *)(DAT_8c012070 + param_1),param_2,uVar5,uVar6,
             iVar8 + iVar7 * (uint)uVar2 + 2);
  return;
}

