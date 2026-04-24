// entry: 8c0772f8
// name: FUN_8c0772f8
// signature: undefined FUN_8c0772f8(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0772f8(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint in_r2;
  int iVar2;
  undefined1 unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  int unaff_r12;
  int unaff_r14;
  ulonglong in_dr14;
  char in_FPSCR_SZ;
  
  do {
    if (*(int *)(unaff_r12 + in_r2 * 4) != 0) {
      (*(code *)PTR_FUN_8c07743c)();
      (*(code *)PTR_FUN_8c077440)(*(undefined4 *)(unaff_r12 + param_3 * 4));
      iVar2 = *(int *)(*(int *)(param_3 * 4 + unaff_r12) + 0x28);
      (**(code **)(iVar2 + 0x2c))(*(int *)(unaff_r12 + param_3 * 4) + *(int *)(iVar2 + 0x24));
      param_2 = param_3;
      if (*(int *)(unaff_r12 + param_3 * 4) != 0) {
        if (*(int *)(unaff_r12 + param_3 * 4) != 0) {
          iVar2 = *(int *)(*(int *)(param_3 * 4 + unaff_r12) + 0x28);
          (**(code **)(iVar2 + 0x14))(*(int *)(unaff_r12 + param_3 * 4) + *(int *)(iVar2 + 0xc),3);
        }
        *(undefined4 *)(param_3 * 4 + unaff_r12) = 0;
      }
    }
    do {
      uVar1 = (uint)param_1;
      in_r2 = param_2 + 1;
      unaff_r14 = unaff_r14 + -1;
      if (unaff_r14 == 0) {
        *(undefined1 *)((int)_DAT_8c07742e + *(int *)(_DAT_8c07742c + unaff_r11)) = 0;
        (*(code *)PTR_LAB_8c077444)();
        if (in_FPSCR_SZ == '\0') {
          in_dr14 = (ulonglong)uVar1;
        }
        (*(code *)PTR_FUN_8c077448)(in_dr14,unaff_r11 + 0x10,0xb);
        return;
      }
      if ((int)in_r2 < 0) {
        uVar1 = 1 >> (~in_r2 & 0x1f) + 1;
      }
      else {
        uVar1 = 1 << (in_r2 & 0x1f);
      }
      param_2 = in_r2;
    } while ((unaff_r10 & uVar1) == 0);
    *(undefined1 *)(in_r2 + unaff_r9) = unaff_r8;
    param_3 = in_r2;
  } while( true );
}

