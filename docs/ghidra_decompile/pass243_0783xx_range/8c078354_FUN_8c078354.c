// entry: 8c078354
// name: FUN_8c078354
// signature: undefined FUN_8c078354(void)


/* WARNING: Removing unreachable block (ram,0x8c07837a) */

void FUN_8c078354(undefined *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(&stack0x00000000 + DAT_8c0783d6);
  (*(code *)PTR_FUN_8c0783e0)(iVar1);
  param_1 = PTR_s______End_Game_Play______8c0783e8;
  if (*(int *)PTR_DAT_8c0783e4 != 0) {
    (*(code *)PTR_FUN_8c0783ec)(&stack0x0000000c,&stack0x0000000c);
    (*(code *)PTR_FUN_8c0783f0)(*(undefined4 *)PTR_DAT_8c0783e4,&stack0x0000000c);
  }
  *(undefined4 *)(*(int *)((int)DAT_8c0783d8 + *(int *)(&stack0x00000000 + DAT_8c0783d6)) + 0x48) =
       0x10;
  *(byte *)((int)DAT_8c0783da + *(int *)(&stack0x00000000 + DAT_8c0783d6)) =
       *(byte *)((int)DAT_8c0783da + *(int *)(&stack0x00000000 + DAT_8c0783d6)) & (byte)DAT_8c0783dc
       | 0x40;
  if (*(char *)(*(int *)(&stack0x00000000 + DAT_8c0783d6) + 0x30) != '\x01') {
    (*(code *)PTR_FUN_8c0783f4)(0,iVar1 + 0x10,0x12);
    FUN_8c078102();
    return;
  }
  FUN_8c078574();
  return;
}

