// entry: 8c0eafc4
// name: FUN_8c0eafc4
// signature: undefined FUN_8c0eafc4(void)


void FUN_8c0eafc4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x28) = PTR_DAT_8c0eb0a8;
    *(undefined **)(param_1 + 0x20) = PTR_DAT_8c0eb0ac;
    (*(code *)PTR_FUN_8c0eb0b4)(param_1,0);
    if ((param_2 & 1) != 0) {
      (*(code *)PTR_FUN_8c0eb0b8)(param_1);
    }
  }
  return;
}

