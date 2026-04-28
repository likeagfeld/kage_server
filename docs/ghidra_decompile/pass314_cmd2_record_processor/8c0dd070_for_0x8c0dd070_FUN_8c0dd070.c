// query addr: 0x8c0dd070
// containing entry: 8c0dd070
// name: FUN_8c0dd070
// signature: undefined FUN_8c0dd070(void)
// body addrs: 116


/* WARNING: Removing unreachable block (ram,0x8c0dd0a2) */
/* WARNING: Removing unreachable block (ram,0x8c0dd088) */
/* WARNING: Removing unreachable block (ram,0x8c0dd0b8) */

void FUN_8c0dd070(undefined2 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 local_14;
  
  puVar1 = PTR___bfswu_8c0dd1d0;
  uVar2 = (*(code *)PTR_FUN_8c0dd1cc)(*param_1);
  (*(code *)puVar1)((int)uVar2 >> 10 & 0x3f);
  (*(code *)puVar1)((int)(uVar2 & 0xffff) >> 5 & 0x1f);
  (*(code *)puVar1)((int)(uVar2 & 0xffff) >> 4 & 1);
  (*(code *)puVar1)(uVar2 & 0xf);
  *param_1 = local_14;
  return;
}

