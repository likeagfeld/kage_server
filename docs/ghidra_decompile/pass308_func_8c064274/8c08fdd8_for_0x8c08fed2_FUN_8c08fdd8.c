// query addr: 0x8c08fed2
// containing entry: 8c08fdd8
// name: FUN_8c08fdd8
// signature: undefined FUN_8c08fdd8(void)
// body addrs: 246


void FUN_8c08fdd8(uint *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 local_18 [2];
  undefined2 *local_14;
  int local_10;
  undefined4 local_c;
  
  iVar3 = (int)DAT_8c08fed2;
  iVar4 = *(int *)((int)DAT_8c08fed0 + (int)param_1) + DAT_8c08fece * param_2;
  *(undefined1 *)(iVar4 + 0x19) = 0;
  *(undefined1 *)(iVar4 + 0x1a) = 0;
  *(undefined2 *)(iVar4 + 0x3e) = 0;
  iVar1 = (int)DAT_8c08fed4;
  *(undefined2 *)(iVar4 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + iVar4 + 0x3c) = 0;
  (*(code *)PTR__memset_8c08fee0)(iVar4 + iVar3,0,(int)DAT_8c08fed6);
  (*(code *)PTR__memset_8c08fee0)(iVar4 + 0x40,0,(int)DAT_8c08fed8);
  if (((*param_1 & 4) == 0) && (*(char *)((int)DAT_8c08feda + param_1[1]) != '\0')) {
    if (*(char *)((int)DAT_8c08feda + param_1[1]) == '\x02') {
      local_c = (*(code *)PTR_FUN_8c08fee4)();
      uVar2 = (*(code *)PTR_FUN_8c08fee4)();
      iVar1 = (*(code *)PTR_FUN_8c08fee8)(param_1,local_c,uVar2);
      if ((*(byte *)(iVar1 + 0x10) & 0x40) != 0) {
        local_10 = *(int *)((int)DAT_8c08fed0 + (int)param_1);
        iVar1 = (*(code *)PTR_FUN_8c08fee4)(iVar1 + 8);
        iVar1 = local_10 + DAT_8c08fece * iVar1;
        if (*(char *)(iVar1 + 0x19) == '\x03') {
          *(undefined1 *)(iVar1 + 0x19) = 4;
          local_14 = (undefined2 *)(iVar1 + 2);
          (**(code **)(*(int *)((int)DAT_8c08fede + (int)param_1) + 0x80))
                    ((int)param_1 + *(int *)(*(int *)((int)DAT_8c08fede + (int)param_1) + 0x78),
                     param_3,local_18);
          *local_14 = local_18[0];
        }
      }
    }
    *(undefined1 *)(iVar4 + 0x19) = 1;
  }
  return;
}

