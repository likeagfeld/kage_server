// entry: 8c093d00
// name: FUN_8c093d00
// signature: undefined FUN_8c093d00(void)


void FUN_8c093d00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_8c093e4c)(*(undefined4 *)(DAT_8c093e3a + param_1));
  (*(code *)PTR_FUN_8c093e50)
            (*(undefined4 *)((int)DAT_8c093e3a + *(int *)(&stack0x00000000 + DAT_8c093e30)));
  iVar2 = *(int *)(&stack0x00000000 + DAT_8c093e30);
  if ((*(int *)(DAT_8c093e32 + iVar2) < 0) ||
     (*(int *)(DAT_8c093e34 + iVar2) != *(int *)(DAT_8c093e36 + iVar2))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  (*(code *)PTR_FUN_8c093e54)(*(undefined4 *)(DAT_8c093e3a + iVar2),uVar1);
  (*(code *)PTR_FUN_8c093e5c)
            (*(undefined4 *)((int)DAT_8c093e3a + *(int *)(&stack0x00000000 + DAT_8c093e30)),
             PTR_s_A_game_was_not_able_to_be_starte_8c093e58,0);
  *(undefined4 *)((int)DAT_8c093e38 + *(int *)(&stack0x00000000 + DAT_8c093e30)) = 8;
  return;
}

