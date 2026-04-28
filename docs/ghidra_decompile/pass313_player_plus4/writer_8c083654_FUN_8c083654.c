// entry: 8c083654
// name: FUN_8c083654


int FUN_8c083654(int param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int local_3c;
  int local_38;
  
  local_3c = 0;
  local_38 = 0;
  iVar2 = (*(code *)PTR_FUN_8c083784)(FUN_8c09e7e4);
  iVar3 = (*(code *)PTR_FUN_8c083784)();
  if (param_3 == '\x01') {
    local_3c = -1;
    local_38 = 0;
  }
  else if (param_3 == '\x02') {
    local_3c = 1;
    local_38 = 0;
  }
  else if (param_3 == '\x04') {
    local_3c = 0;
    local_38 = -1;
  }
  else if (param_3 == '\b') {
    local_3c = 0;
    local_38 = 1;
  }
  iVar8 = 2;
  iVar2 = iVar2 + local_3c * 2;
  iVar3 = iVar3 + local_38 * 2;
  if (2 < param_2) {
    iVar6 = *(int *)(param_1 + 0x20);
    iVar5 = *(int *)(param_1 + 0x24);
    puVar7 = *(ushort **)(DAT_8c083780 + param_1);
    iVar9 = (int)DAT_8c083782;
    do {
      if (iVar2 < 0) {
        return param_2;
      }
      if (iVar6 <= iVar2) {
        return param_2;
      }
      if (iVar3 < 0) {
        return param_2;
      }
      if (iVar5 <= iVar3) {
        return param_2;
      }
      iVar10 = 8;
      puVar11 = puVar7;
      do {
        if (((((*(byte *)((int)puVar11 + 0xb) & 1) == 0) && ((puVar11[4] & 0x14) == 0)) &&
            ((*puVar11 & 1) != 0)) &&
           ((iVar4 = (*(code *)PTR_FUN_8c083784)(puVar11 + 1), iVar4 == iVar2 &&
            (iVar4 = (*(code *)PTR_FUN_8c083784)(), iVar4 == iVar3)))) {
          bVar1 = true;
          goto LAB_8c083702;
        }
        iVar10 = iVar10 + -1;
        puVar11 = (ushort *)((int)puVar11 + iVar9);
      } while (iVar10 != 0);
      bVar1 = false;
LAB_8c083702:
      if (bVar1) {
        return iVar8;
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + local_3c;
      iVar3 = iVar3 + local_38;
    } while (iVar8 < param_2);
  }
  return param_2;
}

