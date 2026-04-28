// entry: 8c0dd850
// name: FUN_8c0dd850
// signature: undefined FUN_8c0dd850(void)


/* WARNING: Removing unreachable block (ram,0x8c0dd8c0) */
/* WARNING: Removing unreachable block (ram,0x8c0dd896) */
/* WARNING: Removing unreachable block (ram,0x8c0dd8aa) */
/* WARNING: Removing unreachable block (ram,0x8c0dd8d6) */

int FUN_8c0dd850(undefined2 *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = PTR___bfswu_8c0dd928;
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0x1c;
  do {
    FUN_8c0dd070(param_1);
    uVar5 = DAT_8c0dd92c;
    *(undefined2 *)(param_2 + iVar3 * 4) = *param_1;
    uVar5 = (uint)*(byte *)(param_1 + 1) << 8 & uVar5 | (uint)*(byte *)((int)param_1 + 3);
    (*(code *)puVar1)((int)uVar5 >> 0xc);
    iVar4 = iVar4 + 4;
    (*(code *)puVar1)((int)uVar5 >> 8 & 0xf);
    iVar3 = iVar3 + 1;
    (*(code *)puVar1)((int)uVar5 >> 4 & 0xf);
    (*(code *)puVar1)((int)uVar5 >> 3 & 1);
    (*(code *)puVar1)();
    (*(code *)puVar1)();
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 2;
  } while (iVar2 != 0);
  return iVar4;
}

