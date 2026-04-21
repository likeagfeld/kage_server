// entry: 8c07645a
// name: FUN_8c07645a
// signature: undefined FUN_8c07645a(void)


void FUN_8c07645a(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r8;
  char *unaff_r12;
  
  param_2 = (*(code *)PTR_FUN_8c076564)(6);
  param_3 = *(undefined4 *)((int)&param_1 + (int)DAT_8c076546);
  param_1 = PTR_s_____Missed_X_Pos__d_PlayerID__d_8c076568;
  (*(code *)PTR_FUN_8c07656c)();
  iVar3 = (*(code *)PTR_FUN_8c076570)
                    (*(undefined4 *)(DAT_8c076548 + unaff_r8),
                     *(undefined4 *)((int)&param_1 + (int)DAT_8c076546),&param_6);
  puVar2 = PTR_FUN_8c076574;
  puVar1 = PTR_FUN_8c076564;
  if (iVar3 != 0) {
    param_6 = (param_6 & (byte)DAT_8c07654a | 0x10) & (byte)DAT_8c07654c | 8;
  }
  uVar4 = (*(code *)PTR_FUN_8c076564)(6);
  (*(code *)puVar2)(uVar4,6);
  uVar4 = (*(code *)puVar1)((int)DAT_8c07654e);
  (*(code *)puVar2)(uVar4,(int)DAT_8c07654e);
  (*(code *)puVar2)(-(((param_6 & 0x10) == 0) - 1),(int)DAT_8c076550);
  (*(code *)puVar2)(param_6 & 0xf,(int)DAT_8c076552);
  param_2 = *(undefined4 *)((int)&param_1 + (int)DAT_8c076546);
  param_1 = PTR_s____SetCheckPads_PlayerID__d_8c076578;
  (*(code *)PTR_FUN_8c07656c)();
  uVar4 = (*(code *)puVar1)(6);
  param_3 = (*(code *)puVar1)((int)DAT_8c07654e);
  param_5 = (int)*unaff_r12 & 0xf;
  param_4 = -((((int)*unaff_r12 & 0x10U) == 0) - 1);
  param_1 = PTR_s____mPosition__d__d__d__d_8c07657c;
  param_2 = uVar4;
  (*(code *)PTR_FUN_8c07656c)();
  FUN_8c076338();
  return;
}

