// PTR slot:    0x8c094134
// resolved to: 8c0dda44
// containing:  FUN_8c0dda44 @ 8c0dda44 (size 164)
// signature: undefined FUN_8c0dda44(void)
// direct callers (refs to entry):
//   8c0940f0@FUN_8c093fdc/8c093fdc
//   8c09a920@FUN_8c09a90e/8c09a90e
//   8c098a70@FUN_8c0989e2/8c0989e2
// callers via ptr slot:
//   8c0940ee@FUN_8c093fdc/8c093fdc


int FUN_8c0dda44(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  
  *param_2 = *param_1;
  iVar2 = 4;
  iVar5 = 0;
  iVar4 = 8;
  param_2[1] = param_1[1];
  puVar3 = (undefined4 *)(param_1 + 2);
  do {
    puVar7 = puVar3;
    puVar8 = param_2 + iVar5 * 2 + 2;
    FUN_8c0dd070(puVar7);
    *puVar8 = *(undefined2 *)puVar7;
    iVar4 = iVar4 + -1;
    puVar3 = puVar7 + 1;
    iVar2 = iVar2 + 4;
    *(undefined1 *)(puVar8 + 1) = *(undefined1 *)((int)puVar7 + 2);
    *(undefined1 *)((int)puVar8 + 3) = *(undefined1 *)((int)puVar7 + 3);
    iVar5 = iVar5 + 1;
  } while (iVar4 != 0);
  iVar4 = 4;
  uVar1 = (*(code *)PTR_FUN_8c0ddbd4)(*puVar3);
  *(undefined4 *)(param_2 + 0x12) = uVar1;
  iVar6 = 0x18;
  iVar5 = 0;
  puVar7 = puVar7 + 2;
  puVar8 = param_2 + 0x14;
  do {
    FUN_8c0dd24a(puVar7,(int)(param_2 + 0x14) + iVar5,puVar8);
    iVar6 = iVar6 + -1;
    iVar4 = iVar4 + 6;
    iVar5 = iVar5 + 6;
    puVar7 = (undefined4 *)((int)puVar7 + 6);
  } while (iVar6 != 0);
  (*(code *)PTR__memcpy_8c0ddbd8)((int)param_2 + (int)DAT_8c0ddbd0,(int)puVar3 + iVar4,0x10);
  return iVar2 + iVar4 + 0x10;
}

