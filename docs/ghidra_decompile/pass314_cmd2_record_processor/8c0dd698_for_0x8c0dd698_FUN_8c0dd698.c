// query addr: 0x8c0dd698
// containing entry: 8c0dd698
// name: FUN_8c0dd698
// signature: undefined FUN_8c0dd698(void)
// body addrs: 182


/* WARNING: Removing unreachable block (ram,0x8c0dd6fa) */
/* WARNING: Removing unreachable block (ram,0x8c0dd6cc) */
/* WARNING: Removing unreachable block (ram,0x8c0dd6e4) */
/* WARNING: Removing unreachable block (ram,0x8c0dd710) */

void FUN_8c0dd698(undefined2 *param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  
  FUN_8c0dd070(4);
  uVar3 = DAT_8c0dd838;
  *param_2 = *param_1;
  puVar2 = PTR___bfswu_8c0dd83c;
  bVar1 = *(byte *)((int)param_1 + 3);
  uVar3 = (uint)*(byte *)(param_1 + 1) << 8 & uVar3 | (uint)bVar1;
  (*(code *)PTR___bfswu_8c0dd83c)((int)uVar3 >> 0xc);
  (*(code *)puVar2)((int)uVar3 >> 8 & 0xf);
  (*(code *)puVar2)((int)uVar3 >> 4 & 0xf);
  (*(code *)puVar2)((int)uVar3 >> 3 & 1);
  (*(code *)puVar2)((int)uVar3 >> 1 & 3);
  (*(code *)puVar2)(bVar1 & 1);
  return;
}

