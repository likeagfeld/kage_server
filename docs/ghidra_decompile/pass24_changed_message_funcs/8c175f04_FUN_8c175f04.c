// entry: 8c175f04
// name: FUN_8c175f04
// signature: undefined FUN_8c175f04(void)


void FUN_8c175f04(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = DAT_8c17615c;
  uVar5 = *DAT_8c176158;
  uVar4 = *(uint *)((uint)*(byte *)(DAT_8c17615c + 0x2b) * 4 + DAT_8c17615c + 8);
  uVar6 = *DAT_8c176160;
  if (*DAT_8c176164 == 0) {
    *DAT_8c176168 = 1;
    uVar3 = uVar5 & 0x1f;
    (*(code *)PTR_FUN_8c176170)(DAT_8c17616c,uVar4 - uVar3);
    (*(code *)PTR_FUN_8c176174)(uVar5 - uVar3,uVar6);
    (*(code *)PTR_FUN_8c176184)
              (*DAT_8c176180,DAT_8c17617c,uVar5 - uVar3,uVar3 + uVar6 + 0x1f & 0xffffffe0,0,0,1,
               PTR_LAB_8c176178,uVar6);
    *DAT_8c176160 = 0;
    (*(code *)PTR_FUN_8c176188)(*DAT_8c176180,0);
    return;
  }
  (*(code *)PTR_FUN_8c176190)(uVar5,DAT_8c17618c | uVar4,2,uVar6 >> 1,1,1,&DAT_8c383148);
  *DAT_8c176160 = 0;
  *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x3c) + 1;
  puVar2 = PTR_FUN_8c176194;
  *(uint *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + uVar6;
  (*(code *)puVar2)(uVar6);
  *DAT_8c176198 = 1;
  if ((code *)*DAT_8c17619c != (code *)0x0) {
    (*(code *)*DAT_8c17619c)(*DAT_8c1761a0,*DAT_8c176158);
    return;
  }
  (*(code *)PTR_FUN_8c1761ac)
            (0xffffffef,PTR_s_ETMain_ETD_TransferSendFrame____8c1761a8,
             PTR_s_callback_func_is_null_8c1761a4);
  return;
}

