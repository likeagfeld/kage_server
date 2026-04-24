// entry: 8c243538
// name: FUN_8c243538
// signature: undefined FUN_8c243538(void)


void FUN_8c243538(int param_1,byte param_2)

{
  char cVar1;
  undefined2 uVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  ushort uVar6;
  short sVar7;
  byte bVar8;
  uint uVar9;
  byte local_20 [4];
  byte *local_1c;
  
  local_1c = local_20;
  uVar9 = (uint)param_2;
  local_20[0] = 0;
  if ((*(int *)(param_1 + 8) != 0) && (*(short *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 2) != 0))
  {
    cVar1 = (*(code *)PTR_FUN_8c24365c)(*(int *)(param_1 + 8) + 0x40);
    bVar8 = (byte)uVar9;
    if (cVar1 != '\0') {
      iVar5 = *(int *)(param_1 + 0xc);
      sVar7 = (ushort)**(byte **)(*(int *)(param_1 + 8) + 0x4c) * DAT_8c243658;
      for (uVar6 = 0; bVar8 = (byte)uVar9,
          uVar6 < *(ushort *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 2); uVar6 = uVar6 + 1) {
        FUN_8c243d24(param_1,(uint)uVar6 + iVar5 + sVar7 + 0x7c);
      }
    }
    sVar7 = DAT_8c243658;
    *(ushort *)
     ((int)(short)((ushort)**(byte **)(*(int *)(param_1 + 8) + 0x4c) * DAT_8c243658) +
     *(int *)(param_1 + 0xc) + 0x78) = (ushort)bVar8;
    iVar5 = *(int *)(param_1 + 0xc);
    pbVar3 = *(byte **)(*(int *)(param_1 + 8) + 0x4c);
    bVar8 = *pbVar3;
    uVar2 = FUN_8c243dca(param_1,(int)*(short *)(pbVar3 + 2),pbVar3);
    *(undefined2 *)((short)((ushort)bVar8 * sVar7) + iVar5 + 0x7a) = uVar2;
    pcVar4 = *(char **)(*(int *)(param_1 + 8) + 0x4c);
    *pcVar4 = *pcVar4 + '\x01';
    if (**(char **)(*(int *)(param_1 + 8) + 0x4c) == '\b') {
      **(undefined1 **)(*(int *)(param_1 + 8) + 0x4c) = 0;
    }
    *(undefined2 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 2) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x3f) =
         **(undefined1 **)(*(int *)(param_1 + 8) + 0x4c);
    local_20[0] = local_20[0] | 1;
    FUN_8c243cd0(param_1,local_20);
  }
  return;
}

