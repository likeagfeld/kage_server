// entry: 8c095d00
// name: FUN_8c095d00
// signature: undefined FUN_8c095d00(void)


void FUN_8c095d00(void)

{
  int iVar1;
  int in_r2;
  int unaff_r14;
  
  if (in_r2 == 0xd) {
    if (*(int *)(DAT_8c095d9c + unaff_r14) < 1) {
      *(undefined4 *)(DAT_8c09626c + unaff_r14) = 4;
      if (*(int *)(DAT_8c09626e + unaff_r14) < 1) {
        iVar1 = (*(code *)PTR_FUN_8c096288)(*(undefined4 *)(DAT_8c096272 + unaff_r14));
        if (iVar1 == 0) {
          (*(code *)PTR_FUN_8c09628c)(*(undefined4 *)(DAT_8c096276 + unaff_r14));
          (*(code *)PTR_FUN_8c096290)(*(undefined4 *)(DAT_8c096276 + unaff_r14));
          (*(code *)PTR_FUN_8c096294)();
          (*(code *)PTR_FUN_8c096298)();
        }
        else {
          *(undefined4 *)(DAT_8c096274 + unaff_r14) = 9;
        }
      }
      else {
        *(int *)(DAT_8c09626e + unaff_r14) = *(int *)(DAT_8c09626e + unaff_r14) + -1;
        iVar1 = (*(code *)PTR_FUN_8c096284)
                          (*(undefined4 *)(DAT_8c096272 + unaff_r14),
                           *(undefined4 *)(DAT_8c096270 + unaff_r14));
        if (iVar1 == 0) {
          *(undefined4 *)(DAT_8c096274 + unaff_r14) = 0xd;
        }
        else {
          *(undefined4 *)(DAT_8c096274 + unaff_r14) = 0xc;
        }
      }
    }
    else {
      *(int *)(DAT_8c095d9c + unaff_r14) = *(int *)(DAT_8c095d9c + unaff_r14) + -1;
    }
  }
  return;
}

