// entry: 8c08440e
// name: FUN_8c08440e


void FUN_8c08440e(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ushort *puVar4;
  
  puVar2 = PTR___bfswu_8c0844cc;
  puVar4 = (ushort *)(*(int *)(DAT_8c0844c0 + param_1) + DAT_8c0844be * param_2);
  (*(code *)PTR_FUN_8c0844c8)();
  uVar3 = (*(code *)PTR_FUN_8c0844c8)();
  bVar1 = *param_3;
  *puVar4 = *puVar4 | 1;
  (*(code *)puVar2)();
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)();
  (*(code *)puVar2)(bVar1 & 0xf);
  puVar2 = PTR__memcpy_8c0844d0;
  *(byte *)(puVar4 + 4) = param_3[2];
  *(byte *)((int)puVar4 + 9) = param_3[3];
  (*(code *)puVar2)(puVar4 + 8,param_3,4);
  (*(code *)PTR__memcpy_8c0844d0)(puVar4 + 9,param_4,4);
  return;
}

