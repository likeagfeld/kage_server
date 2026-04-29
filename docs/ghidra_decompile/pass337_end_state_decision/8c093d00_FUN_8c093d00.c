// entry: 8c093d00
// name: FUN_8c093d00
// signature: undefined FUN_8c093d00(void)


void FUN_8c093d00(int param_1)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c093e4c)(*(undefined4 *)(DAT_8c093e3a + param_1));
  (*(code *)PTR_FUN_8c093e50)
            (*(undefined4 *)((int)DAT_8c093e3a + *(int *)(&stack0x00000000 + DAT_8c093e30)));
  iVar1 = *(int *)(&stack0x00000000 + DAT_8c093e30);
  if ((-1 < *(int *)(DAT_8c093e32 + iVar1)) &&
     (*(int *)(DAT_8c093e34 + iVar1) == *(int *)(DAT_8c093e36 + iVar1))) {
    FUN_8c093eda();
    return;
  }
  (*(code *)PTR_FUN_8c093e54)(*(undefined4 *)(DAT_8c093e3a + iVar1),0);
  (*(code *)PTR_FUN_8c093e5c)
            (*(undefined4 *)((int)DAT_8c093e3a + *(int *)(&stack0x00000000 + DAT_8c093e30)),
             PTR_s_A_game_was_not_able_to_be_starte_8c093e58,0);
  *(undefined4 *)((int)DAT_8c093e38 + *(int *)(&stack0x00000000 + DAT_8c093e30)) = 8;
  return;
}

