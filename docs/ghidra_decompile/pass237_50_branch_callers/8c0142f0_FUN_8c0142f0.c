// entry: 8c0142f0
// name: FUN_8c0142f0
// signature: undefined FUN_8c0142f0(void)


void FUN_8c0142f0(int param_1,int param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  
  puVar3 = PTR_FUN_8c0144b8;
  puVar2 = PTR_FUN_8c014408;
  uVar4 = *(uint *)(param_1 + 0x2c);
  if (((uVar4 & 8) != 0) ||
     ((*(ushort *)(param_1 + 0x40) & DAT_8c0143fe) != (*(ushort *)(param_2 + 0x10) & DAT_8c0143fe)))
  {
    (*(code *)PTR_FUN_8c014404)(param_1 + 0x30,param_2,0x20);
    uVar1 = DAT_8c014400;
    *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) & 0x7f | (byte)DAT_8c014400;
    (*(code *)puVar2)(-(((uVar1 & 0x80) == 0) - 1));
    (*(code *)puVar2)(-((((int)*(char *)(param_1 + 0x49) & 0x80U) == 0) - 1));
    (*(code *)puVar2)(-((((int)*(char *)(param_1 + 0x47) & 0x80U) == 0) - 1));
    (*(code *)puVar2)(-((((int)*(char *)(param_1 + 0x45) & 0x80U) == 0) - 1));
    (*(code *)puVar2)(-((((int)*(char *)(param_1 + 0x43) & 0x80U) == 0) - 1));
    uVar4 = *(uint *)(param_1 + 0x2c);
    goto LAB_8c0143f2;
  }
  if ((*(ushort *)(param_1 + 0x42) & DAT_8c0143fe) == (*(ushort *)(param_2 + 0x12) & DAT_8c0143fe))
  {
    if ((*(ushort *)(param_1 + 0x44) & DAT_8c0143fe) != (*(ushort *)(param_2 + 0x14) & DAT_8c0143fe)
       ) {
LAB_8c014438:
      puVar2 = PTR_FUN_8c0144b8;
      *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0x7f | (byte)DAT_8c0144b0;
      (*(code *)puVar2)();
      goto LAB_8c014454;
    }
    if ((*(ushort *)(param_1 + 0x46) & DAT_8c0143fe) != (*(ushort *)(param_2 + 0x16) & DAT_8c0143fe)
       ) goto LAB_8c014464;
    if ((*(ushort *)(param_1 + 0x48) & DAT_8c0143fe) == (*(ushort *)(param_2 + 0x18) & DAT_8c0143fe)
       ) {
      *(uint *)(param_1 + 0x2c) = uVar4 & 0xfffffffb;
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) & 0x7f | (byte)DAT_8c0144b0;
    (*(code *)puVar3)();
    if ((*(ushort *)(param_1 + 0x44) & DAT_8c0144b4) != (*(ushort *)(param_2 + 0x14) & DAT_8c0144b4)
       ) goto LAB_8c014438;
LAB_8c014454:
    if ((*(ushort *)(param_1 + 0x46) & DAT_8c0144b4) != (*(ushort *)(param_2 + 0x16) & DAT_8c0144b4)
       ) {
LAB_8c014464:
      puVar2 = PTR_FUN_8c0144b8;
      *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0x7f | (byte)DAT_8c0144b0;
      (*(code *)puVar2)();
    }
    if ((*(ushort *)(param_1 + 0x48) & DAT_8c0144b4) == (*(ushort *)(param_2 + 0x18) & DAT_8c0144b4)
       ) goto LAB_8c0143f2;
  }
  puVar2 = PTR_FUN_8c0144b8;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0x7f | (byte)DAT_8c0144b0;
  (*(code *)puVar2)();
LAB_8c0143f2:
  *(uint *)(param_1 + 0x2c) = uVar4 & 0xffffffb7 | 4;
  return;
}

