// PTR slot:    0x8c09412c
// resolved to: 8c0ddd64
// containing:  FUN_8c0ddd64 @ 8c0ddd64 (size 186)
// signature: undefined FUN_8c0ddd64(void)
// direct callers (refs to entry):
//   8c0940b8@FUN_8c093fdc/8c093fdc
//   8c09a964@FUN_8c09a952/8c09a952
//   8c098aa0@FUN_8c0989e2/8c0989e2
// callers via ptr slot:
//   8c0940b6@FUN_8c093fdc/8c093fdc


/* WARNING: Removing unreachable block (ram,0x8c0dddb8) */
/* WARNING: Removing unreachable block (ram,0x8c0ddd9e) */
/* WARNING: Removing unreachable block (ram,0x8c0dddd0) */

int FUN_8c0ddd64(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 local_24;
  
  *param_2 = *param_1;
  iVar2 = 4;
  iVar4 = 0;
  iVar3 = 8;
  param_2[1] = param_1[1];
  do {
    puVar5 = param_1 + 2;
    puVar6 = param_2 + iVar4 * 2 + 2;
    uVar1 = (*(code *)PTR_FUN_8c0ddec8)(*puVar5);
    iVar2 = iVar2 + 4;
    (*(code *)PTR___bfswu_8c0ddecc)(6);
    iVar4 = iVar4 + 1;
    (*(code *)PTR___bfswu_8c0ddecc)((int)uVar1 >> 5 & 0x1f);
    (*(code *)PTR___bfswu_8c0ddecc)((int)uVar1 >> 4 & 1);
    (*(code *)PTR___bfswu_8c0ddecc)(uVar1 & 0xf);
    *puVar5 = local_24;
    iVar3 = iVar3 + -1;
    *puVar6 = local_24;
    *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_1 + 3);
    *(undefined1 *)((int)puVar6 + 3) = *(undefined1 *)((int)param_1 + 7);
    param_1 = puVar5;
  } while (iVar3 != 0);
  return iVar2;
}

