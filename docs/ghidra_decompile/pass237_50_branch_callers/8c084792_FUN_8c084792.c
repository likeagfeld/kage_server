// entry: 8c084792
// name: FUN_8c084792
// signature: undefined FUN_8c084792(void)


void FUN_8c084792(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined8 in_dr14;
  undefined8 uVar5;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined8 local_1c;
  
  puVar2 = PTR_FUN_8c084828;
  uVar1 = DAT_8c084814;
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&local_1c + 4);
    local_1c = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_1c);
  }
  else {
    puVar4 = &local_1c;
    local_1c = in_dr14;
  }
  *(undefined4 *)((int)puVar4 + -4) = in_PR;
  puVar3 = (undefined2 *)(*(int *)(DAT_8c08481c + param_3) + param_4 * 0x14);
  *puVar3 = 1;
  if (in_FPSCR_SZ == '\0') {
    param_2 = (undefined4)in_dr14;
  }
  uVar5 = CONCAT44(param_1,param_2);
  *(byte *)(puVar3 + 1) = (*(byte *)(puVar3 + 1) & (byte)uVar1 | 0x10) & (byte)DAT_8c08480e | 8;
  (*(code *)puVar2)();
  (*(code *)PTR_FUN_8c084828)();
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar3 + 6) = (int)((ulonglong)uVar5 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar3 + 6) = uVar5;
  }
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined2 **)
   ((*(int *)(param_3 + 0x20) * param_6 + param_5) * 4 + *(int *)(DAT_8c08481e + param_3)) = puVar3;
  return;
}

