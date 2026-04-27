// entry: 8c077468
// name: FUN_8c077468
// signature: undefined FUN_8c077468(void)


void FUN_8c077468(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_c;
  
  uVar2 = (uint)*(byte *)((int)DAT_8c07755a + *(int *)(DAT_8c077558 + param_1));
  if (uVar2 != 0) {
    iVar4 = param_1 + DAT_8c07755c;
    local_c = 0;
    iVar5 = 8;
    do {
      if ((int)local_c < 0) {
        uVar1 = 1 >> (~local_c & 0x1f) + 1;
      }
      else {
        uVar1 = 1 << (local_c & 0x1f);
      }
      if ((uVar2 & uVar1) != 0) {
        *(undefined1 *)(local_c + param_1 + 0x3e) = 3;
        if (*(int *)(iVar4 + local_c * 4) != 0) {
          (*(code *)PTR_FUN_8c077564)(param_1,PTR_s____Now_Lost_PlayerID__d_8c077560,local_c);
          (*(code *)PTR_FUN_8c077568)(*(undefined4 *)(iVar4 + local_c * 4));
          iVar3 = *(int *)(*(int *)(local_c * 4 + iVar4) + 0x28);
          (**(code **)(iVar3 + 0x2c))(*(int *)(iVar4 + local_c * 4) + *(int *)(iVar3 + 0x24));
          if (*(int *)(iVar4 + local_c * 4) != 0) {
            if (*(int *)(iVar4 + local_c * 4) != 0) {
              iVar3 = *(int *)(*(int *)(local_c * 4 + iVar4) + 0x28);
              (**(code **)(iVar3 + 0x14))(*(int *)(iVar4 + local_c * 4) + *(int *)(iVar3 + 0xc),3);
            }
            *(undefined4 *)(local_c * 4 + iVar4) = 0;
          }
        }
      }
      local_c = local_c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(undefined1 *)((int)DAT_8c07755a + *(int *)(DAT_8c077558 + param_1)) = 0;
  }
  (*(code *)PTR_FUN_8c07756c)(param_1);
  (*(code *)PTR_FUN_8c077570)(0,param_1 + 0x10,0xc);
  return;
}

