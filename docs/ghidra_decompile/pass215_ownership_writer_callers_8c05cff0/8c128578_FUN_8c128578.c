// entry: 8c128578
// name: FUN_8c128578
// signature: undefined FUN_8c128578(void)


void FUN_8c128578(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_14;
  
  iVar3 = (int)DAT_8c1286be;
  iVar6 = (int)DAT_8c1286c0;
  (*(code *)PTR_FUN_8c1286cc)();
  puVar1 = PTR_FUN_8c1286d8;
  puVar4 = (undefined4 *)((int)&local_14 + iVar6 + iVar3);
  uVar5 = *(undefined4 *)(PTR_DAT_8c1286d0 + 4);
  *puVar4 = *(undefined4 *)PTR_DAT_8c1286d0;
  puVar4[1] = uVar5;
  uVar5 = *(undefined4 *)(PTR_DAT_8c1286d0 + 0xc);
  puVar4[2] = *(undefined4 *)(PTR_DAT_8c1286d0 + 8);
  puVar4[3] = uVar5;
  uVar5 = *(undefined4 *)(PTR_DAT_8c1286d0 + 0x14);
  puVar4[4] = *(undefined4 *)(PTR_DAT_8c1286d0 + 0x10);
  puVar4[5] = uVar5;
  uVar5 = *(undefined4 *)(PTR_DAT_8c1286d0 + 0x1c);
  puVar4[6] = *(undefined4 *)(PTR_DAT_8c1286d0 + 0x18);
  puVar4[7] = uVar5;
  uVar5 = *(undefined4 *)(PTR_DAT_8c1286d0 + 0x24);
  puVar4[8] = *(undefined4 *)(PTR_DAT_8c1286d0 + 0x20);
  puVar4[9] = uVar5;
  puVar4[10] = *(undefined4 *)(PTR_DAT_8c1286d0 + 0x28);
  (*(code *)PTR_FUN_8c1286cc)((int)&local_14 + DAT_8c1286c2 + iVar3);
  *(undefined4 *)(&stack0x00000010 + iVar6 + iVar3) = param_2;
  uVar5 = (*(code *)puVar1)(0,9,(int)&local_14 + iVar3,param_2);
  puVar2 = PTR_FUN_8c1286dc;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar5 = (*(code *)puVar2)(0,(int)&local_14 + iVar6 + iVar3);
  iVar6 = (int)DAT_8c1286c2;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  uVar5 = (*(code *)puVar1)(0,2,(int)&local_14 + iVar6 + iVar3,param_2);
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  return;
}

