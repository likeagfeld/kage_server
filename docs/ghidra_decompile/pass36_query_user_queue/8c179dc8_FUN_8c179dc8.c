// entry: 8c179dc8
// name: FUN_8c179dc8
// signature: undefined FUN_8c179dc8(void)


void FUN_8c179dc8(int param_1,int param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  byte *local_28;
  uint local_24;
  
  iVar5 = *(int *)(param_2 + 0x14);
  (*(code *)PTR_FUN_8c179edc)(&local_34,0,0x14);
  puVar1 = PTR_FUN_8c179ee0;
  local_34 = 0;
  local_30 = iVar5 + 5;
  local_2c = (uint)*(byte *)(iVar5 + 4);
  local_28 = (byte *)(local_30 + local_2c) + 1;
  local_24 = (uint)*(byte *)(local_30 + local_2c);
  local_28[local_24] = 0;
  (*(code *)puVar1)(auStack_48,&local_34,0x14);
  *(undefined1 *)(local_30 + local_2c) = 0;
  local_28[local_24] = 0;
  if (*(int *)(DAT_8c179ed6 + param_1) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(DAT_8c179ed6 + param_1))(param_1,&local_34);
  }
  if ((((iVar3 == 0) && (local_30 != 0)) &&
      (iVar3 = (*(code *)PTR_FUN_8c179ee4)(local_30,local_44,local_40), iVar3 == 0)) &&
     ((local_28 != (byte *)0x0 &&
      (iVar3 = (*(code *)PTR_FUN_8c179ee4)(local_28,local_3c,local_38), iVar3 == 0)))) {
    uVar6 = *(undefined4 *)PTR_PTR_8c179ee8;
    FUN_8c179bd0(param_1,4);
    uVar4 = 2;
  }
  else {
    uVar4 = 3;
    uVar6 = *(undefined4 *)PTR_PTR_8c179eec;
    *(uint *)(DAT_8c179ed8 + param_1) = *(uint *)(DAT_8c179ed8 + param_1) | 8;
  }
  puVar1 = PTR_FUN_8c179ef0;
  puVar7 = *(undefined1 **)(param_2 + 0x14);
  puVar7[1] = *(undefined1 *)(iVar5 + 1);
  *puVar7 = uVar4;
  iVar5 = (*(code *)puVar1)(uVar6);
  puVar1 = PTR_FUN_8c179ee0;
  puVar7[4] = (char)iVar5;
  (*(code *)puVar1)(puVar7 + 5,uVar6,iVar5);
  uVar2 = (*(code *)PTR_FUN_8c179ef4)(iVar5 + 5);
  *(undefined2 *)(puVar7 + 2) = uVar2;
  *(int *)(param_2 + 0x18) = iVar5 + 5;
  FUN_8c179f26(param_1,param_2);
  return;
}

