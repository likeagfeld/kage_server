// entry: 8c093dc6
// name: FUN_8c093dc6
// signature: undefined FUN_8c093dc6(void)


void FUN_8c093dc6(void)

{
  int iVar1;
  int unaff_r14;
  
  if (*(int *)((int)DAT_8c093e3a + *(int *)(&stack0x00000000 + DAT_8c093e30)) != 0) {
    (*(code *)PTR_FUN_8c093e5c)(PTR_s_The_room_master_has_set_new_rule_8c093e6c,0);
  }
  (*(code *)PTR__memmove_8c093e70)
            (*(undefined4 *)((int)DAT_8c093e44 + *(int *)(&stack0x00000000 + DAT_8c093e30)),
             unaff_r14 + 4,9);
  iVar1 = *(int *)(&stack0x00000000 + DAT_8c093e30);
  *(undefined4 *)(DAT_8c093e46 + iVar1) = 1;
  if ((*(int *)(DAT_8c093e32 + iVar1) < 0) ||
     (*(int *)(DAT_8c093e34 + iVar1) != *(int *)(DAT_8c093e36 + iVar1))) {
    *(undefined4 *)(DAT_8c093e48 + iVar1) = 3;
    *(uint *)(DAT_8c093e4a + iVar1) = *(uint *)(DAT_8c093e4a + iVar1) | 2;
  }
  return;
}

