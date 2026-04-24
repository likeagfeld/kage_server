// entry: 8c0dd24a
// name: FUN_8c0dd24a
// signature: undefined FUN_8c0dd24a(void)


/* WARNING: Removing unreachable block (ram,0x8c0dd2e8) */
/* WARNING: Removing unreachable block (ram,0x8c0dd2a6) */
/* WARNING: Removing unreachable block (ram,0x8c0dd27c) */
/* WARNING: Removing unreachable block (ram,0x8c0dd294) */
/* WARNING: Removing unreachable block (ram,0x8c0dd2ce) */
/* WARNING: Removing unreachable block (ram,0x8c0dd2fe) */

void FUN_8c0dd24a(undefined2 *param_1,undefined2 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  FUN_8c0dd070(6);
  puVar1 = PTR_FUN_8c0dd340;
  *param_2 = *param_1;
  puVar2 = PTR_FUN_8c0dd344;
  uVar3 = (*(code *)puVar1)(param_1[1]);
  (*(code *)puVar2)((int)uVar3 >> 0xc & 0xf);
  (*(code *)puVar2)((int)(uVar3 & 0xffff) >> 8 & 0xf);
  (*(code *)puVar2)((int)(uVar3 & 0xffff) >> 4 & 0xf);
  (*(code *)puVar2)(uVar3 & 0xf);
  uVar3 = (*(code *)PTR_FUN_8c0dd340)(param_1[2]);
  (*(code *)puVar2)((int)uVar3 >> 0xd & 7);
  (*(code *)puVar2)((int)(uVar3 & 0xffff) >> 0xb & 3);
  (*(code *)puVar2)((int)(uVar3 & 0xffff) >> 9 & 3);
  (*(code *)puVar2)(uVar3 & 0xffff & (int)DAT_8c0dd338);
  return;
}

