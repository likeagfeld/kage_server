// entry: 8c243d24
// name: FUN_8c243d24
// signature: undefined FUN_8c243d24(void)


int FUN_8c243d24(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar3 = (uint)((*param_2 & 1) != 0);
  if ((*param_2 & 2) != 0) {
    uVar3 = uVar3 + 1;
  }
  if ((*param_2 & 4) != 0) {
    uVar3 = uVar3 + 1;
  }
  if ((*param_2 & 8) != 0) {
    uVar3 = uVar3 + 1;
  }
  if ((*param_2 & 0x10) != 0) {
    uVar3 = uVar3 + 1;
  }
  if ((*param_2 & 0x20) != 0) {
    uVar3 = uVar3 + 1;
  }
  if ((*param_2 & 0x40) != 0) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = uVar3 & 1;
  iVar2 = (*(code *)PTR_FUN_8c243e04)(*(int *)(param_1 + 8) + 0x40);
  if (iVar2 == 1) {
    if ((uVar3 & 0xff) != 0) goto LAB_8c243dc2;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 == 5) {
        bVar1 = *param_2 | 0x80;
      }
      else {
        if (iVar2 != 7) goto LAB_8c243dc2;
        bVar1 = *param_2 & 0x7f;
      }
      *param_2 = bVar1;
      goto LAB_8c243dc2;
    }
    if ((uVar3 & 0xff) == 0) goto LAB_8c243dc2;
  }
  *param_2 = *param_2 | 0x80;
LAB_8c243dc2:
  return (int)(char)*param_2;
}

