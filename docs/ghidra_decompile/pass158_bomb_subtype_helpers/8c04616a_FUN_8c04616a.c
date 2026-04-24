// entry: 8c04616a
// name: FUN_8c04616a
// signature: undefined FUN_8c04616a(void)


void FUN_8c04616a(undefined4 param_1,undefined4 param_2,uint param_3,ulonglong *param_4,int param_5)

{
  undefined4 in_fr3;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(param_4 + 3) = param_1;
  }
  else {
    param_4[3] = CONCAT44(param_1,param_2);
  }
  *(int *)(param_4 + 2) = param_5;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(param_4 + 4) = 0;
    *(undefined4 *)param_4 = 0;
  }
  else {
    param_4[4] = (ulonglong)param_3;
    *param_4 = (ulonglong)param_3;
  }
  if (param_5 == 0) {
    *(undefined4 *)((int)param_4 + 0x14) = 1;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)param_4 = 0x3f800000;
    }
    else {
      *param_4 = CONCAT44(0x3f800000,in_fr3);
    }
  }
  else if (param_5 == 1) {
    *(undefined4 *)((int)param_4 + 0x14) = 0xb;
  }
  else if (param_5 == 2) {
    *(undefined4 *)((int)param_4 + 0x14) = 0xc;
  }
  else if (param_5 == 3) {
    *(undefined4 *)((int)param_4 + 0x14) = 0xd;
  }
  else if (param_5 == 4) {
    *(undefined4 *)((int)param_4 + 0x14) = 0xe;
  }
  else if (param_5 == 5) {
    *(undefined4 *)((int)param_4 + 0x14) = 0xf;
  }
  *(undefined4 *)((int)param_4 + 0x1c) = 1;
  return;
}

