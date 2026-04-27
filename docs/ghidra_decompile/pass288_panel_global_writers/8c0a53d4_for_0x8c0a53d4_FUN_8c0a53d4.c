// query addr: 0x8c0a53d4
// containing entry: 8c0a53d4
// name: FUN_8c0a53d4
// signature: undefined FUN_8c0a53d4(void)
// body addrs: 4


void FUN_8c0a53d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  (*(code *)PTR__memset_8c0a54b4)(&uStack_30,0,0x20);
  if (param_4 == 0) {
    uStack_24 = 3;
  }
  else {
    uStack_24 = 2;
  }
  *(undefined4 *)PTR_DAT_8c0a54b8 = uStack_24;
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  (*(code *)PTR_FUN_8c0a54bc)(&uStack_30);
  return;
}

