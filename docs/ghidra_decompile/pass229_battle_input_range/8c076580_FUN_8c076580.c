// entry: 8c076580
// name: FUN_8c076580
// signature: undefined FUN_8c076580(void)


void FUN_8c076580(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 byte param_6)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r8;
  char *unaff_r12;
  
  param_2 = (*(code *)PTR_FUN_8c076698)((int)DAT_8c076688);
  param_3 = *(undefined4 *)((int)&param_1 + (int)DAT_8c07668a);
  param_1 = PTR_s_____Missed_Y_Pos__d_PlayerID__d_8c07669c;
  (*(code *)PTR_FUN_8c0766a0)();
  iVar1 = (*(code *)PTR_FUN_8c0766a4)
                    (*(undefined4 *)(DAT_8c07668c + unaff_r8),
                     *(undefined4 *)((int)&param_1 + (int)DAT_8c07668a),&param_6);
  if (iVar1 != 0) {
    param_6 = (param_6 & (byte)DAT_8c07668e | 0x10) & (byte)DAT_8c076690 | 8;
  }
  uVar2 = (*(code *)PTR_FUN_8c076698)(6);
  (*(code *)PTR_FUN_8c0766a8)(uVar2,6);
  uVar2 = (*(code *)PTR_FUN_8c076698)((int)DAT_8c076688);
  (*(code *)PTR_FUN_8c0766a8)(uVar2,(int)DAT_8c076688);
  (*(code *)PTR_FUN_8c0766a8)(-(((param_6 & 0x10) == 0) - 1),(int)DAT_8c076692);
  (*(code *)PTR_FUN_8c0766a8)(param_6 & 0xf,(int)DAT_8c076694);
  param_2 = *(undefined4 *)((int)&param_1 + (int)DAT_8c07668a);
  param_1 = PTR_s____SetCheckPads_PlayerID__d_8c0766ac;
  (*(code *)PTR_FUN_8c0766a0)();
  uVar2 = (*(code *)PTR_FUN_8c076698)(6);
  param_3 = (*(code *)PTR_FUN_8c076698)((int)DAT_8c076688);
  param_5 = (int)*unaff_r12 & 0xf;
  param_4 = -((((int)*unaff_r12 & 0x10U) == 0) - 1);
  param_1 = PTR_s____mPosition__d__d__d__d_8c0766b0;
  param_2 = uVar2;
  (*(code *)PTR_FUN_8c0766a0)();
  FUN_8c076364();
  return;
}

