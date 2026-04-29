// entry: 8c09b698
// name: FUN_8c09b698
// signature: undefined FUN_8c09b698(void)


/* WARNING: Removing unreachable block (ram,0x8c09b710) */

void FUN_8c09b698(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(DAT_8c09b74c + param_1) == 0) {
    iVar2 = *(int *)(DAT_8c09b74e + param_1);
    if ((*(int *)(iVar2 + 0x68) != 0) && (*(int *)(*(int *)(iVar2 + 0x68) + 0xc) != 0)) {
      iVar4 = 0;
      iVar3 = param_1 + DAT_8c09b750;
      do {
        if (*(int *)(iVar3 + iVar4 * 0x14 + 0xc) == 3) {
          iVar1 = (*(code *)PTR_FUN_8c09b758)
                            (*(undefined4 *)(iVar2 + 0x68),*(undefined4 *)(iVar3 + iVar4 * 0x14));
          iVar2 = *(int *)(DAT_8c09b74e + param_1);
          if (iVar1 == 0) {
            *(undefined4 *)(iVar3 + iVar4 * 0x14 + 0xc) = 0;
          }
        }
        iVar4 = iVar4 + 1;
      } while( true );
    }
  }
  return;
}

