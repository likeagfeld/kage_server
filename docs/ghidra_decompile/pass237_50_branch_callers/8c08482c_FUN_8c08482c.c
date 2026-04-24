// entry: 8c08482c
// name: FUN_8c08482c
// signature: undefined FUN_8c08482c(void)


void FUN_8c08482c(int param_1,uint param_2,uint param_3,undefined2 param_4,undefined2 param_5)

{
  ushort uVar1;
  undefined *puVar2;
  ushort *puVar3;
  uint extraout_fr3;
  char in_FPSCR_SZ;
  undefined4 uVar4;
  
  puVar2 = PTR_FUN_8c0849b8;
  uVar4 = 0;
  puVar3 = *(ushort **)(DAT_8c0849a4 + param_1);
  uVar1 = *puVar3;
  while ((uVar1 & 1) != 0) {
    puVar3 = puVar3 + 8;
    uVar1 = *puVar3;
  }
  *puVar3 = *puVar3 | 1;
  (*(code *)puVar2)(param_2 & 0xffff,0);
  (*(code *)puVar2)(param_3 & 0xffff);
  *(byte *)(puVar3 + 1) = ((byte)puVar3[1] & (byte)DAT_8c0849a8 | 0x10) & (byte)DAT_8c0849aa | 8;
  (*(code *)puVar2)(param_4);
  if (in_FPSCR_SZ == '\0') {
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  else {
    *(ulonglong *)(puVar3 + 6) = (ulonglong)extraout_fr3;
  }
  (*(code *)puVar2)(param_5,uVar4);
  *(ushort **)
   ((*(int *)(param_1 + 0x20) * param_3 + param_2) * 4 + *(int *)(DAT_8c0849ae + param_1)) = puVar3;
  return;
}

