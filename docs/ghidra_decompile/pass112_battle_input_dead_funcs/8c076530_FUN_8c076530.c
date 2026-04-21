// entry: 8c076530
// name: FUN_8c076530
// signature: undefined FUN_8c076530(void)


/* WARNING: Removing unreachable block (ram,0x8c07641e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c076530(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4,byte param_5,
                 undefined *param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint in_r0;
  undefined4 uVar5;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  char *pcVar7;
  char *unaff_r12;
  byte *pbVar8;
  undefined *puStack00000000;
  int iStack0000000c;
  uint uStack00000010;
  
  puStack00000000 = param_2;
  do {
    iStack0000000c = param_1;
    uStack00000010 = in_r0;
    (*(code *)PTR_FUN_8c07656c)();
    do {
      iVar4 = (*_DAT_8c0763e8)((int)_DAT_8c0763d6);
      if ((iVar4 < 1) ||
         (iVar4 = (*_DAT_8c0763e8)((int)_DAT_8c0763d6), *(int *)(_DAT_8c0763de + unaff_r8) <= iVar4)
         ) {
        param_3 = (*(code *)PTR_FUN_8c076698)((int)_DAT_8c076688);
        param_4 = *(undefined4 *)((int)&stack0x00000000 + (int)_DAT_8c07668a);
        puStack00000000 = PTR_s_____Missed_Y_Pos__d_PlayerID__d_8c07669c;
        (*(code *)PTR_FUN_8c0766a0)();
        iVar4 = (*(code *)PTR_FUN_8c0766a4)
                          (*(undefined4 *)(_DAT_8c07668c + unaff_r8),
                           *(undefined4 *)((int)&stack0x00000000 + (int)_DAT_8c07668a),&param_5);
        if (iVar4 != 0) {
          param_5 = (param_5 & (byte)_DAT_8c07668e | 0x10) & (byte)_DAT_8c076690 | 8;
        }
        uVar5 = (*(code *)PTR_FUN_8c076698)(6);
        (*(code *)PTR_FUN_8c0766a8)(uVar5,6);
        uVar5 = (*(code *)PTR_FUN_8c076698)((int)_DAT_8c076688);
        (*(code *)PTR_FUN_8c0766a8)(uVar5,(int)_DAT_8c076688);
        (*(code *)PTR_FUN_8c0766a8)(-(((param_5 & 0x10) == 0) - 1),(int)_DAT_8c076692);
        (*(code *)PTR_FUN_8c0766a8)(param_5 & 0xf,(int)_DAT_8c076694);
        param_3 = *(undefined4 *)((int)&stack0x00000000 + (int)_DAT_8c07668a);
        puStack00000000 = PTR_s____SetCheckPads_PlayerID__d_8c0766ac;
        (*(code *)PTR_FUN_8c0766a0)();
        uVar5 = (*(code *)PTR_FUN_8c076698)(6);
        param_4 = (*(code *)PTR_FUN_8c076698)((int)_DAT_8c076688);
        uStack00000010 = (int)*unaff_r12 & 0xf;
        iStack0000000c = -((((int)*unaff_r12 & 0x10U) == 0) - 1);
        puStack00000000 = PTR_s____mPosition__d__d__d__d_8c0766b0;
        param_3 = uVar5;
        (*(code *)PTR_FUN_8c0766a0)();
      }
      unaff_r12[2] = *(char *)(unaff_r10 + 8);
      pcVar1 = _DAT_8c0763e8;
      iVar4 = *(int *)(_DAT_8c0763c4 + unaff_r8);
      do {
        do {
          pcVar7 = unaff_r12;
          unaff_r11 = unaff_r11 + -1;
          iVar6 = *(int *)((int)&stack0x00000000 + (int)_DAT_8c0763c8) + 1;
          *(int *)((int)&stack0x00000000 + (int)_DAT_8c0763c8) = iVar6;
          unaff_r12 = pcVar7 + 4;
          if (unaff_r11 == 0) {
            *(int *)((int)&stack0x00000000 + (int)_DAT_8c0763ce) = unaff_r9;
            if (*(char *)(unaff_r8 + 0x30) == '\x01') {
              if (*(int *)(_DAT_8c0763e0 + iVar4) == 0 && *(int *)(_DAT_8c0763e2 + iVar4) == 0) {
                return;
              }
              if (-1 < *(int *)(_DAT_8c0763e4 + iVar4)) {
                *(int *)((int)_DAT_8c0763e6 + *(int *)(_DAT_8c0763c6 + unaff_r8)) =
                     *(int *)(_DAT_8c0763e4 + iVar4);
              }
            }
            else {
              iVar4 = (**(code **)(*(int *)(_DAT_8c076696 + iVar4) + 0x74))
                                (iVar4 + *(int *)(*(int *)(_DAT_8c076696 + iVar4) + 0x6c));
              if (iVar4 == 0) {
                return;
              }
            }
            if (*(int *)(_DAT_8c076540 + unaff_r8) == 0) {
              param_6 = PTR_s_All_Battle_End__Send_Signal_CLI__8c076558;
              if (*(int *)PTR_DAT_8c076554 != 0) {
                (*(code *)PTR_FUN_8c07655c)(&stack0x0000001c,&stack0x0000001c);
                (*(code *)PTR_FUN_8c076560)(*(undefined4 *)PTR_DAT_8c076554,&stack0x0000001c);
              }
              *(undefined4 *)(_DAT_8c076540 + unaff_r8) = 1;
            }
            *(undefined4 *)(*(int *)(_DAT_8c076542 + unaff_r8) + 0x48) = 0x14;
            return;
          }
        } while (*(char *)(unaff_r8 + 0x3e + iVar6) != '\0');
        unaff_r10 = *(int *)(_DAT_8c0763d2 + iVar4) + _DAT_8c0763d0 * iVar6;
        unaff_r9 = *(int *)(iVar6 * 4 + *(int *)((int)&stack0x00000000 + (int)_DAT_8c0763cc));
      } while (unaff_r9 == 0);
      pbVar8 = (byte *)(unaff_r9 + _DAT_8c0763d4);
      uVar5 = (*_DAT_8c0763e8)(6);
      (*_DAT_8c0763ec)(uVar5);
      uVar5 = (*pcVar1)((int)_DAT_8c0763d6);
      (*_DAT_8c0763ec)(uVar5);
      (*_DAT_8c0763ec)(-(((*pbVar8 & 0x10) == 0) - 1),(int)_DAT_8c0763d8);
      (*_DAT_8c0763ec)(*pbVar8 & 0xf,(int)_DAT_8c0763da);
      pcVar7[7] = pbVar8[3] & 0xf;
      iVar4 = (*pcVar1)(6);
    } while ((0 < iVar4) &&
            (iVar4 = (*_DAT_8c0763e8)(6), iVar4 < *(int *)(_DAT_8c0763dc + unaff_r8)));
    param_3 = (*(code *)PTR_FUN_8c076564)(6);
    param_4 = *(undefined4 *)((int)&stack0x00000000 + (int)_DAT_8c076546);
    puStack00000000 = PTR_s_____Missed_X_Pos__d_PlayerID__d_8c076568;
    (*(code *)PTR_FUN_8c07656c)();
    iVar4 = (*(code *)PTR_FUN_8c076570)
                      (*(undefined4 *)(_DAT_8c076548 + unaff_r8),
                       *(undefined4 *)((int)&stack0x00000000 + (int)_DAT_8c076546),&param_5);
    puVar3 = PTR_FUN_8c076574;
    puVar2 = PTR_FUN_8c076564;
    if (iVar4 != 0) {
      param_5 = (param_5 & (byte)_DAT_8c07654a | 0x10) & (byte)_DAT_8c07654c | 8;
    }
    uVar5 = (*(code *)PTR_FUN_8c076564)(6);
    (*(code *)puVar3)(uVar5,6);
    uVar5 = (*(code *)puVar2)((int)_DAT_8c07654e);
    (*(code *)puVar3)(uVar5,(int)_DAT_8c07654e);
    (*(code *)puVar3)(-(((param_5 & 0x10) == 0) - 1),(int)_DAT_8c076550);
    (*(code *)puVar3)(param_5 & 0xf,(int)_DAT_8c076552);
    param_3 = *(undefined4 *)((int)&stack0x00000000 + (int)_DAT_8c076546);
    puStack00000000 = PTR_s____SetCheckPads_PlayerID__d_8c076578;
    (*(code *)PTR_FUN_8c07656c)();
    uVar5 = (*(code *)puVar2)(6);
    param_4 = (*(code *)puVar2)((int)_DAT_8c07654e);
    in_r0 = (int)*unaff_r12 & 0xf;
    param_1 = -((((int)*unaff_r12 & 0x10U) == 0) - 1);
    puStack00000000 = PTR_s____mPosition__d__d__d__d_8c07657c;
    param_3 = uVar5;
  } while( true );
}

