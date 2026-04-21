// entry: 8c0f584a
// name: FUN_8c0f584a
// signature: undefined FUN_8c0f584a(void)


void FUN_8c0f584a(int param_1,int param_2,int param_3)

{
  if (param_2 == -1) {
    if (param_3 == -1) {
      (*(code *)PTR_FUN_8c0f5950)(*(undefined4 *)(param_1 + 0x3c),1);
      (*(code *)PTR_FUN_8c0f5958)(*(undefined4 *)(param_1 + 0x3c),PTR_DAT_8c0f5954);
    }
  }
  else if (param_2 == 0) {
    (*(code *)PTR_FUN_8c0f5950)(*(undefined4 *)(param_1 + 0x3c),1);
    (*(code *)PTR_FUN_8c0f5958)(*(undefined4 *)(param_1 + 0x3c),DAT_8c0f595c + param_3 * 0xf);
  }
  else if (param_2 == 1) {
    (*(code *)PTR_FUN_8c0f5950)(*(undefined4 *)(param_1 + 0x3c),2);
    (*(code *)PTR_FUN_8c0f5958)
              (*(undefined4 *)(param_1 + 0x3c),PTR_s_Standard_8c0f5960 + param_3 * 0xf);
  }
  return;
}

