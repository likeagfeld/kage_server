// entry: 8c099e92
// name: FUN_8c099e92
// signature: undefined FUN_8c099e92(void)


void FUN_8c099e92(int param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_FUN_8c099f78;
  uVar2 = (*(code *)PTR_FUN_8c099f78)(*(undefined4 *)(param_2 + 4));
  uVar3 = (*(code *)puVar1)(*(undefined4 *)(param_2 + 8));
  uVar4 = (*(code *)puVar1)(*(undefined4 *)(param_2 + 0xc));
  puVar1 = PTR_FUN_8c099f7c;
  *(undefined4 *)(DAT_8c099f58 + param_1) = 1;
  (*(code *)puVar1)(*(undefined4 *)(DAT_8c099f5a + param_1),uVar2,uVar3);
  *(undefined4 *)((int)DAT_8c099f5e + *(int *)(DAT_8c099f5c + param_1)) = uVar4;
  *(undefined4 *)((int)DAT_8c099f60 + *(int *)(DAT_8c099f56 + param_1)) = 1;
  iVar6 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(iVar6 + 0x60);
  uVar4 = (*(code *)PTR_FUN_8c099f80)(*(undefined4 *)(DAT_8c099f62 + param_1));
  (**(code **)(iVar6 + 0x68))(param_1 + iVar5,PTR_s_Game_Time_Info__Now_CommonFrame__8c099f84,uVar4)
  ;
  (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
            (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
             PTR_s_Start_Frame__ld__End_Frame__ld__8c099f88,uVar2,uVar3);
  return;
}

