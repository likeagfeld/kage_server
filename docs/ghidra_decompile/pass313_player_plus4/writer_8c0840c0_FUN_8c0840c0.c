// entry: 8c0840c0
// name: FUN_8c0840c0


undefined4 FUN_8c0840c0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort *puVar3;
  int iVar4;
  bool bVar5;
  int local_18;
  
  iVar4 = *(int *)((*(int *)(param_1 + 0x20) * param_3 + param_2) * 4 +
                  *(int *)(DAT_8c0841fa + param_1));
  if (((((iVar4 == 0) || (*(int *)(iVar4 + 8) != 2)) &&
       ((iVar4 = *(int *)((*(int *)(param_1 + 0x20) * param_3 + param_2) * 4 +
                         *(int *)(DAT_8c0841f8 + param_1)), iVar4 == 0 ||
        ((bVar1 = *(byte *)(iVar4 + 9), (bVar1 & 0x7f) == 3 || ((bVar1 & 0x7f) == 4)))))) &&
      ((iVar4 = (param_2 + *(int *)(param_1 + 0x20) * param_3) * 4,
       *(int *)(iVar4 + *(int *)(DAT_8c0841fc + param_1)) == 0 &&
       (*(int *)(iVar4 + *(int *)(DAT_8c0841fe + param_1)) == 0)))) &&
     ((iVar4 = (*(code *)PTR_FUN_8c084338)(param_1,param_2,param_3,FUN_8c0840c0), iVar4 == 0 ||
      (((cVar2 = *(char *)(iVar4 + 8), cVar2 != '\x03' && (cVar2 != '\x02')) && (cVar2 != '\n'))))))
  {
    if (*(int *)(DAT_8c08432c + param_1) == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)((*(int *)(param_1 + 0x20) * param_3 + param_2) * 4 +
                      *(int *)(DAT_8c08432c + param_1)) != 0;
    }
    if ((((!bVar5) &&
         (cVar2 = *(char *)(*(int *)(param_1 + 0x20) * param_3 + param_2 +
                           *(int *)(DAT_8c08432e + param_1)), cVar2 != '\0')) &&
        (((cVar2 != '\x02' && ((cVar2 != 'P' && (cVar2 != 'Q')))) && (cVar2 != 'R')))) &&
       ((((((cVar2 != 'S' && (cVar2 != 'T')) && (cVar2 != 'U')) &&
          ((cVar2 != 'V' && (cVar2 != 'W')))) &&
         ((cVar2 != 'X' && ((cVar2 != 'Y' && (cVar2 != ']')))))) && (cVar2 != 'm')))) {
      iVar4 = param_2 + *(int *)(param_1 + 0x20) * param_3;
      if (*(int *)(iVar4 * 4 + *(int *)(DAT_8c084330 + param_1)) != 0) {
        return 0;
      }
      cVar2 = *(char *)(iVar4 + *(int *)(DAT_8c084200 + param_1));
      if ((((cVar2 == '[') || (cVar2 == ']')) || (cVar2 == 'b')) || (cVar2 == 'j')) {
        if (cVar2 != '^') {
          return 0;
        }
      }
      else if (cVar2 != '^') {
        local_18 = 8;
        puVar3 = *(ushort **)(DAT_8c084204 + param_1);
        while ((((*(byte *)((int)puVar3 + 0xb) & 1) != 0 || ((puVar3[4] & 0x14) != 0)) ||
               (((*puVar3 & 1) == 0 ||
                ((iVar4 = (*(code *)PTR_FUN_8c084334)(puVar3 + 1), iVar4 != param_2 ||
                 (iVar4 = (*(code *)PTR_FUN_8c084334)(), iVar4 != param_3))))))) {
          local_18 = local_18 + -1;
          puVar3 = (ushort *)((int)puVar3 + (int)DAT_8c084206);
          if (local_18 == 0) {
            return 1;
          }
        }
        return 0;
      }
      return 0;
    }
  }
  if (*(int *)((param_2 + *(int *)(param_1 + 0x20) * param_3) * 4 + *(int *)(DAT_8c084202 + param_1)
              ) != 0) {
    return 0;
  }
  return 0;
}

