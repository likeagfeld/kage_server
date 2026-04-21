// entry: 8c0984c0
// name: FUN_8c0984c0
// signature: undefined FUN_8c0984c0(void)


/* WARNING: Removing unreachable block (ram,0x8c0984f0) */

void FUN_8c0984c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 local_14;
  
  iVar1 = (int)DAT_8c098580;
  iVar2 = (int)DAT_8c098574;
  (*(code *)PTR_FUN_8c098594)((int)&local_14 + iVar1,0,(int)DAT_8c098582);
  iVar4 = *(int *)(DAT_8c098576 + param_1);
  iVar5 = iVar4 + 1;
  *(int *)(DAT_8c098576 + param_1) = iVar5;
  if (iVar5 == *(int *)(DAT_8c09857a + param_1)) {
    *(byte *)((int)&local_14 + iVar1 + 1) = *(byte *)((int)&local_14 + iVar1 + 1) & 1 | 0x36;
    *(undefined4 *)(DAT_8c0986e6 + param_1) = 0;
  }
  else {
    *(byte *)((int)&local_14 + iVar1 + 1) = *(byte *)((int)&local_14 + iVar1 + 1) & 1 | 0x34;
  }
  *(ushort *)((int)&local_14 + iVar1) =
       *(ushort *)((int)&local_14 + iVar1) & (ushort)DAT_8c0985a0 | DAT_8c098578;
  if ((*(int *)(DAT_8c098584 + param_1) < 0) ||
     (*(int *)(DAT_8c098586 + param_1) != *(int *)(DAT_8c098588 + param_1))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  (*(code *)PTR_FUN_8c0985a4)(uVar3);
  (*(code *)PTR_FUN_8c0985a4)(*(undefined4 *)(DAT_8c09858a + param_1));
  (*(code *)PTR_FUN_8c09859c)
            (&stack0xfffffff0 + iVar1,param_1 + iVar2 + iVar4 * 0x80,(int)(short)DAT_8c098578);
  (*(code *)PTR_FUN_8c0985a8)
            (*(undefined4 *)(DAT_8c09858e + param_1),(int)&local_14 + iVar1,(int)DAT_8c098570);
  return;
}

