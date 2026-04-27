// entry: 8c043cce
// name: FUN_8c043cce
// signature: undefined FUN_8c043cce(void)


void FUN_8c043cce(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0) {
    cVar3 = '\x01';
  }
  else if (*(short *)(DAT_8c043da0 + param_1) == 0) {
    cVar3 = (char)param_2 + '\x1f';
  }
  else {
    cVar3 = (char)param_2 + '\x1b';
  }
  iVar4 = 7;
  iVar1 = 4;
  do {
    iVar6 = 7;
    iVar5 = 9;
    do {
      iVar2 = *(int *)(DAT_8c043d9c + param_1);
      if (*(char *)(iVar4 * *(int *)(iVar2 + 0x20) + iVar6 + *(int *)(DAT_8c043d9e + iVar2)) != ']')
      {
        *(char *)(iVar4 * *(int *)(iVar2 + 0x20) + iVar6 + *(int *)(DAT_8c043d9e + iVar2)) = cVar3;
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar5 != 0);
    iVar1 = iVar1 + -1;
    iVar4 = iVar4 + 2;
  } while (iVar1 != 0);
  return;
}

