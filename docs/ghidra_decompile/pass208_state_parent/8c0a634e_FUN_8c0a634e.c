// entry: 8c0a634e
// name: FUN_8c0a634e
// signature: undefined FUN_8c0a634e(void)


undefined4
FUN_8c0a634e(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,ushort param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  double dVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 local_14;
  
  iVar5 = (int)DAT_8c0a639c;
  uVar7 = *(uint *)(param_3 + 0x2c);
  *(undefined4 *)(&stack0x00000038 + iVar5) = 0;
  if (((uVar7 & 1) != 0) || ((uVar7 & 2) != 0)) goto LAB_8c0a6388;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 4) == 0) goto LAB_8c0a6388;
    *(int *)(&stack0x0000003c + iVar5) = *(int *)(DAT_8c0a663c + 0x2c) + param_4 * 0x28;
    uVar2 = (*(code *)PTR_FUN_8c0a6640)(0,0x18,2);
    *(undefined4 *)(param_3 + 0x30) = uVar2;
    if (*(int *)(param_3 + 0x40) == 0) {
      iVar4 = *(int *)(&stack0x0000003c + iVar5);
      uVar2 = *(undefined4 *)(iVar4 + 4);
      uVar6 = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(&stack0x00000040 + iVar5) = *(undefined4 *)(iVar4 + 0x10);
      uVar8 = *(undefined4 *)(*(int *)(&stack0x0000003c + iVar5) + 0x14);
      *(undefined4 *)((int)&local_14 + iVar5) =
           *(undefined4 *)(*(int *)(&stack0x0000003c + iVar5) + 0x18);
      iVar4 = (*(code *)PTR_FUN_8c0a67b4)
                        (uVar2,uVar6,*(undefined4 *)(&stack0x00000040 + iVar5),uVar8);
      uVar2 = (*(code *)PTR_FUN_8c0a67b8)(iVar4 << 1);
      *(undefined4 *)(param_3 + 0x40) = uVar2;
      *(undefined4 *)(param_3 + 0x3c) = 2;
    }
    iVar4 = FUN_8c0a7140(param_3,&stack0x00000008 + iVar5,*(undefined4 *)(&stack0x0000003c + iVar5),
                         param_4);
    if (iVar4 == 0) goto LAB_8c0a6388;
    *(undefined1 **)(&stack0x00000044 + iVar5) = &stack0x00000008 + iVar5;
    *(ushort *)(&stack0x00000048 + iVar5) = param_6;
    *(undefined4 *)(&stack0x0000004c + iVar5) = 0;
    *(undefined4 *)(&stack0x00000050 + iVar5) = *(undefined4 *)(&stack0x00000010 + iVar5);
    if ((param_5 & 8) == 0) {
      if ((param_5 & 0x10) != 0) {
        (*(code *)PTR_FUN_8c0a6644)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
      }
      if ((param_5 & 2) == 0) {
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((float)*(ushort *)(&stack0x00000048 + iVar5),param_1);
        }
        else {
          dVar9 = (double)*(ushort *)(&stack0x00000048 + iVar5);
        }
        *(undefined **)(&stack0x00000054 + iVar5) = PTR_FUN_8c0a6648;
        (*(code *)PTR_FUN_8c0a6648)(dVar9,*(undefined4 *)(&stack0x00000050 + iVar5));
        puVar1 = PTR_FUN_8c0a664c;
        uVar2 = SUB84(dVar9,0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(param_3 + 0x58) = (ulonglong)param_2;
        }
        *(undefined **)(&stack0x00000058 + iVar5) = puVar1;
        iVar4 = (*(code *)puVar1)(*(undefined4 *)(&stack0x00000050 + iVar5));
        if (iVar4 != 0) {
          (*(code *)PTR_FUN_8c0a6650)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
          goto LAB_8c0a6572;
        }
LAB_8c0a68a6:
        (*(code *)PTR_FUN_8c0a6900)
                  (*(undefined4 *)(&stack0x00000050 + iVar5),0,
                   *(undefined4 *)(*(int *)(&stack0x00000044 + iVar5) + 4),
                   *(undefined4 *)(&stack0x0000004c + iVar5));
      }
      else {
        *(undefined4 *)(&stack0x0000004c + iVar5) = 1;
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((float)*(ushort *)(&stack0x00000048 + iVar5),param_1);
        }
        else {
          dVar9 = (double)*(ushort *)(&stack0x00000048 + iVar5);
        }
        *(undefined **)(&stack0x00000054 + iVar5) = PTR_FUN_8c0a68f4;
        (*(code *)PTR_FUN_8c0a68f4)(dVar9,*(undefined4 *)(&stack0x00000050 + iVar5));
        puVar1 = PTR_FUN_8c0a68f8;
        uVar2 = SUB84(dVar9,0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(param_3 + 0x58) = (ulonglong)param_2;
        }
        *(undefined **)(&stack0x00000058 + iVar5) = puVar1;
        iVar4 = (*(code *)puVar1)(*(undefined4 *)(&stack0x00000050 + iVar5));
        if (iVar4 == 0) goto LAB_8c0a68a6;
LAB_8c0a6572:
        (*(code *)PTR_FUN_8c0a6654)(*(undefined4 *)(&stack0x00000050 + iVar5),1);
      }
      uVar6 = *(undefined4 *)(param_3 + 0x30);
      *(undefined **)(&stack0x0000005c + iVar5) = PTR_FUN_8c0a6658;
      (*(code *)PTR_FUN_8c0a6658)(uVar6,&stack0x00000008 + iVar5);
      iVar4 = FUN_8c0a7140(param_3,&stack0x00000020 + iVar5,
                           *(undefined4 *)(&stack0x0000003c + iVar5),param_4);
      if (iVar4 == 0) goto LAB_8c0a6388;
      *(undefined1 **)(&stack0x00000044 + iVar5) = &stack0x00000020 + iVar5;
      *(undefined4 *)(&stack0x00000050 + iVar5) = *(undefined4 *)(&stack0x00000028 + iVar5);
      *(undefined **)(&stack0x00000060 + iVar5) = PTR_FUN_8c0a6654;
    }
    else {
      *(undefined **)(&stack0x00000060 + iVar5) = PTR_FUN_8c0a67d4;
      (*(code *)PTR_FUN_8c0a67d4)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
      if ((param_5 & 0x10) != 0) {
        (*(code *)PTR_FUN_8c0a67d0)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
      }
      if ((param_5 & 2) == 0) {
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((float)*(ushort *)(&stack0x00000048 + iVar5),param_1);
        }
        else {
          dVar9 = (double)*(ushort *)(&stack0x00000048 + iVar5);
        }
        *(undefined **)(&stack0x00000054 + iVar5) = PTR_FUN_8c0a67bc;
        (*(code *)PTR_FUN_8c0a67bc)(dVar9,*(undefined4 *)(&stack0x00000050 + iVar5));
        puVar1 = PTR_FUN_8c0a67c0;
        uVar2 = SUB84(dVar9,0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(param_3 + 0x58) = (ulonglong)param_2;
        }
        *(undefined **)(&stack0x00000058 + iVar5) = puVar1;
        iVar4 = (*(code *)puVar1)(*(undefined4 *)(&stack0x00000050 + iVar5));
        if (iVar4 == 0) {
LAB_8c0a6772:
          (*(code *)PTR_FUN_8c0a67cc)
                    (*(undefined4 *)(&stack0x00000050 + iVar5),0,
                     *(undefined4 *)(*(int *)(&stack0x00000044 + iVar5) + 4),
                     *(undefined4 *)(&stack0x0000004c + iVar5));
        }
        else {
          (*(code *)PTR_FUN_8c0a67c4)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
        }
      }
      else {
        *(undefined4 *)(&stack0x0000004c + iVar5) = 1;
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((float)*(ushort *)(&stack0x00000048 + iVar5),param_1);
        }
        else {
          dVar9 = (double)*(ushort *)(&stack0x00000048 + iVar5);
        }
        *(undefined **)(&stack0x00000054 + iVar5) = PTR_FUN_8c0a67bc;
        (*(code *)PTR_FUN_8c0a67bc)(dVar9,*(undefined4 *)(&stack0x00000050 + iVar5));
        puVar1 = PTR_FUN_8c0a67c0;
        uVar2 = SUB84(dVar9,0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(param_3 + 0x58) = (ulonglong)param_2;
        }
        *(undefined **)(&stack0x00000058 + iVar5) = puVar1;
        iVar4 = (*(code *)puVar1)(*(undefined4 *)(&stack0x00000050 + iVar5));
        if (iVar4 == 0) goto LAB_8c0a6772;
      }
      uVar6 = *(undefined4 *)(param_3 + 0x30);
      *(undefined **)(&stack0x0000005c + iVar5) = PTR_FUN_8c0a67c8;
      (*(code *)PTR_FUN_8c0a67c8)(uVar6,&stack0x00000008 + iVar5);
      iVar4 = FUN_8c0a7140(param_3,&stack0x00000020 + iVar5,
                           *(undefined4 *)(&stack0x0000003c + iVar5),param_4);
      if (iVar4 == 0) goto LAB_8c0a6388;
      *(undefined1 **)(&stack0x00000044 + iVar5) = &stack0x00000020 + iVar5;
      *(undefined4 *)(&stack0x00000050 + iVar5) = *(undefined4 *)(&stack0x00000028 + iVar5);
    }
    pcVar3 = *(code **)(&stack0x00000054 + iVar5);
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((float)param_6,uVar2);
    }
    else {
      dVar9 = (double)param_6;
    }
    *(code **)((int)&local_14 + DAT_8c0a6632 + iVar5) = pcVar3;
    (*pcVar3)(dVar9,*(undefined4 *)(&stack0x00000050 + iVar5));
    pcVar3 = *(code **)(&stack0x00000060 + iVar5);
    *(code **)((int)&local_14 + DAT_8c0a6634 + iVar5) = pcVar3;
    (*pcVar3)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(param_3 + 0x58) = 0;
    }
    else {
      *(ulonglong *)(param_3 + 0x58) = (ulonglong)param_2;
    }
    pcVar3 = *(code **)(&stack0x00000058 + iVar5);
    *(code **)((int)&local_14 + DAT_8c0a6636 + iVar5) = pcVar3;
    iVar4 = (*pcVar3)(*(undefined4 *)(&stack0x00000050 + iVar5));
    if (iVar4 == 0) {
      (*(code *)PTR_FUN_8c0a665c)
                (*(undefined4 *)(&stack0x00000050 + iVar5),0,
                 *(undefined4 *)(*(int *)(&stack0x00000044 + iVar5) + 4),1);
    }
    uVar2 = *(undefined4 *)(param_3 + 0x30);
    pcVar3 = *(code **)(&stack0x0000005c + iVar5);
    *(code **)((int)&local_14 + DAT_8c0a6638 + iVar5) = pcVar3;
    (*pcVar3)(uVar2,&stack0x00000020 + iVar5);
    (*(code *)PTR_FUN_8c0a6660)(param_3 + 0x10,1);
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | 1;
    *(undefined4 *)(&stack0x00000038 + iVar5) = 1;
  }
  else {
    *(int *)(&stack0x00000064 + iVar5) = *(int *)(DAT_8c0a648c + 0x2c) + param_4 * 0x28;
    uVar2 = (*(code *)PTR_FUN_8c0a6490)(0,0x18,1);
    *(undefined4 *)(param_3 + 0x30) = uVar2;
    if (*(int *)(param_3 + 0x40) == 0) {
      iVar4 = *(int *)(&stack0x00000064 + iVar5);
      uVar2 = *(undefined4 *)(iVar4 + 4);
      uVar6 = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(&stack0x00000068 + iVar5) = *(undefined4 *)(iVar4 + 0x10);
      uVar8 = *(undefined4 *)(*(int *)(&stack0x00000064 + iVar5) + 0x14);
      *(undefined4 *)((int)&local_14 + iVar5) =
           *(undefined4 *)(*(int *)(&stack0x00000064 + iVar5) + 0x18);
      uVar2 = (*(code *)PTR_FUN_8c0a67b4)
                        (uVar2,uVar6,*(undefined4 *)(&stack0x00000068 + iVar5),uVar8);
      uVar2 = (*(code *)PTR_FUN_8c0a67b8)(uVar2);
      *(undefined4 *)(param_3 + 0x40) = uVar2;
      *(undefined4 *)(param_3 + 0x3c) = 1;
    }
    iVar4 = FUN_8c0a7140(param_3,&stack0xfffffff0 + iVar5,*(undefined4 *)(&stack0x00000064 + iVar5),
                         param_4);
    if (iVar4 == 0) goto LAB_8c0a6388;
    *(undefined1 **)(&stack0x00000044 + iVar5) = &stack0xfffffff0 + iVar5;
    *(ushort *)(&stack0x00000048 + iVar5) = param_6;
    *(undefined4 *)(&stack0x0000004c + iVar5) = 0;
    *(undefined4 *)(&stack0x00000050 + iVar5) = *(undefined4 *)(&stack0xfffffff8 + iVar5);
    if ((param_5 & 8) == 0) {
      if ((param_5 & 0x10) != 0) {
        (*(code *)PTR_FUN_8c0a6494)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
      }
      if ((param_5 & 2) == 0) {
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((float)*(ushort *)(&stack0x00000048 + iVar5),param_1);
        }
        else {
          dVar9 = (double)*(ushort *)(&stack0x00000048 + iVar5);
        }
        (*(code *)PTR_FUN_8c0a6498)(dVar9,*(undefined4 *)(&stack0x00000050 + iVar5));
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(param_3 + 0x58) = (ulonglong)param_2;
        }
        iVar4 = (*(code *)PTR_FUN_8c0a649c)(*(undefined4 *)(&stack0x00000050 + iVar5));
        if (iVar4 != 0) {
          (*(code *)PTR_FUN_8c0a64a0)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
          goto LAB_8c0a644c;
        }
      }
      else {
        *(undefined4 *)(&stack0x0000004c + iVar5) = 1;
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((float)*(ushort *)(&stack0x00000048 + iVar5),param_1);
        }
        else {
          dVar9 = (double)*(ushort *)(&stack0x00000048 + iVar5);
        }
        (*(code *)PTR_FUN_8c0a68f4)(dVar9,*(undefined4 *)(&stack0x00000050 + iVar5));
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(param_3 + 0x58) = (ulonglong)param_2;
        }
        iVar4 = (*(code *)PTR_FUN_8c0a68f8)(*(undefined4 *)(&stack0x00000050 + iVar5));
        if (iVar4 != 0) {
LAB_8c0a644c:
          (*(code *)PTR_FUN_8c0a64a4)(*(undefined4 *)(&stack0x00000050 + iVar5),1);
          goto LAB_8c0a6456;
        }
      }
LAB_8c0a683e:
      (*(code *)PTR_FUN_8c0a6900)
                (*(undefined4 *)(&stack0x00000050 + iVar5),0,
                 *(undefined4 *)(*(int *)(&stack0x00000044 + iVar5) + 4),
                 *(undefined4 *)(&stack0x0000004c + iVar5));
    }
    else {
      (*(code *)PTR_FUN_8c0a6908)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
      if ((param_5 & 0x10) != 0) {
        (*(code *)PTR_FUN_8c0a6904)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
      }
      if ((param_5 & 2) == 0) {
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((float)*(ushort *)(&stack0x00000048 + iVar5),param_1);
        }
        else {
          dVar9 = (double)*(ushort *)(&stack0x00000048 + iVar5);
        }
        (*(code *)PTR_FUN_8c0a68f4)(dVar9,*(undefined4 *)(&stack0x00000050 + iVar5));
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(param_3 + 0x58) = (ulonglong)param_2;
        }
        iVar4 = (*(code *)PTR_FUN_8c0a68f8)(*(undefined4 *)(&stack0x00000050 + iVar5));
        if (iVar4 == 0) goto LAB_8c0a683e;
        (*(code *)PTR_FUN_8c0a68fc)(*(undefined4 *)(&stack0x00000050 + iVar5),0);
      }
      else {
        *(undefined4 *)(&stack0x0000004c + iVar5) = 1;
        if (in_FPSCR_PR == '\0') {
          dVar9 = (double)CONCAT44((float)*(ushort *)(&stack0x00000048 + iVar5),param_1);
        }
        else {
          dVar9 = (double)*(ushort *)(&stack0x00000048 + iVar5);
        }
        (*(code *)PTR_FUN_8c0a68f4)(dVar9,*(undefined4 *)(&stack0x00000050 + iVar5));
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(param_3 + 0x58) = (ulonglong)param_2;
        }
        iVar4 = (*(code *)PTR_FUN_8c0a68f8)(*(undefined4 *)(&stack0x00000050 + iVar5));
        if (iVar4 == 0) goto LAB_8c0a683e;
      }
    }
LAB_8c0a6456:
    (*(code *)PTR_FUN_8c0a64a8)(*(undefined4 *)(param_3 + 0x30),&stack0xfffffff0 + iVar5);
    (*(code *)PTR_FUN_8c0a64ac)(param_3 + 0x10,1);
    *(uint *)(param_3 + 0x2c) = *(uint *)(param_3 + 0x2c) | 1;
    *(undefined4 *)(&stack0x00000038 + iVar5) = 1;
  }
  *(ushort *)(param_3 + 0x38) = param_6;
  *(undefined4 *)(param_3 + 0x44) = 0;
  *(undefined2 *)(param_3 + 0x48) = 1;
  *(uint *)(param_3 + 0x34) = param_5;
LAB_8c0a6388:
  return *(undefined4 *)(&stack0x00000038 + iVar5);
}

