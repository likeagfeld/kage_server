// entry: 8c243bb4
// name: FUN_8c243bb4
// signature: undefined FUN_8c243bb4(void)


void FUN_8c243bb4(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  byte local_c [4];
  undefined1 *local_8;
  
  uVar2 = 0;
  local_8 = local_c;
  local_c[0] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)PTR_FUN_8c243cec)();
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x4c);
    *(char *)(iVar1 + 1) = *(char *)(iVar1 + 1) + '\x01';
    if (*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 1) == '\b') {
      *(char *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 1) = (char)uVar2;
    }
    *(undefined2 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 4) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x40) =
         *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 1);
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x30) & 8) == 0) {
      *local_8 = (char)uVar2;
      local_c[0] = local_c[0] | 2;
      FUN_8c243cd0(local_c);
    }
  }
  return;
}

