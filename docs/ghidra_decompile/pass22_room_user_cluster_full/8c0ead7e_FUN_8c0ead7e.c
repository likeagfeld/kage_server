// entry: 8c0ead7e
// name: FUN_8c0ead7e
// signature: undefined FUN_8c0ead7e(void)


void FUN_8c0ead7e(int param_1,char *param_2,int param_3)

{
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  int local_10;
  
  if (*param_2 == '\0') {
    local_10 = param_3;
    if (*(int *)(*(int *)PTR_DAT_8c0eae70 + 0x68) != 0) {
      (*(code *)PTR_FUN_8c0eae74)();
      local_20 = *(undefined4 *)(local_10 + 0x10);
      local_1c = *(undefined4 *)(local_10 + 0x14);
      (*(code *)PTR_FUN_8c0eae78)
                (*(undefined4 *)(*(int *)PTR_DAT_8c0eae70 + 0x68),auStack_30,param_3 + 0x18);
    }
    (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
              (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),PTR_s_UserID__d_NAME__s_8c0eae7c,
               *(undefined4 *)(local_10 + 0x10),local_10);
  }
  return;
}

