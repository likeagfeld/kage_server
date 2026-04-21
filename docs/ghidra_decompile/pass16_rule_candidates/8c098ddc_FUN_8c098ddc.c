// entry: 8c098ddc
// name: FUN_8c098ddc
// signature: undefined FUN_8c098ddc(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c098ddc(ushort param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r13;
  
  pcVar2 = _DAT_8c0991d4;
  iVar3 = *(int *)(_DAT_8c098e68 + unaff_r13);
  *(int *)(&stack0x00000000 + _DAT_8c098e6a) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(_DAT_8c0991c0 + unaff_r13) = 0;
    (*pcVar2)(&param_1,0,4);
    iVar3 = *(int *)(&stack0x00000000 + _DAT_8c0991c2);
    *(int *)(_DAT_8c0991c4 + unaff_r13) = iVar3;
    *(undefined4 *)(_DAT_8c0991c0 + unaff_r13) = 0;
    if (iVar3 == 0) {
      uVar4 = 0xc;
    }
    else {
      uVar4 = 0xb;
    }
    (*_DAT_8c0991d8)(&param_1,uVar4);
    param_1 = param_1 & (ushort)_DAT_8c0991dc;
    if ((*(int *)(_DAT_8c0991c6 + unaff_r13) < 0) ||
       (*(int *)(_DAT_8c0991c8 + unaff_r13) != *(int *)(_DAT_8c0991ca + unaff_r13))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 **)(&stack0x00000000 + _DAT_8c0991cc) = &stack0x0000000a;
    (*_DAT_8c0991d8)(uVar1);
    (*_DAT_8c0991d8)(*(undefined4 *)(&stack0x00000000 + _DAT_8c0991cc),
                     *(uint *)(_DAT_8c0991ce + unaff_r13) & 0xffff);
    (*_DAT_8c0991e0)(*(undefined4 *)(_DAT_8c0991d2 + unaff_r13),&param_1,4);
  }
  else {
    *(undefined4 *)(_DAT_8c098e6c + unaff_r13) = 1;
  }
  return;
}

