// entry: 8c0f7c9c
// name: FUN_8c0f7c9c
// signature: undefined FUN_8c0f7c9c(void)


/* WARNING: Removing unreachable block (ram,0x8c0f7e0c) */

int FUN_8c0f7c9c(uint param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint local_20;
  
  puVar2 = DAT_8c0f7cf4;
  puVar1 = PTR_FUN_8c0f7cf0;
  iVar4 = (int)DAT_8c0f7ce0;
  iVar10 = (int)DAT_8c0f7ce2;
  *(undefined4 *)(&stack0xffffffe8 + iVar4) = param_2;
  puVar9 = &stack0xffffffec + iVar4;
  if (*DAT_8c0f7cf8 != 0) {
    *DAT_8c0f7cfc = 1;
    *DAT_8c0f7d00 = *(undefined4 *)(&stack0xffffffe8 + iVar4);
    *puVar2 = param_1;
    return 0;
  }
  if (param_1 == 0) {
    uVar5 = FUN_8c0f7c18();
    *puVar2 = uVar5;
  }
  else {
    *DAT_8c0f7cf4 = param_1;
  }
  uVar5 = *puVar2;
  puVar6 = PTR_DAT_8c0f7dc8;
  uVar7 = DAT_8c0f7dc4;
  puVar8 = PTR_s_DC_LAN_8c0f7dc0;
  if (((((uVar5 == 1) || (uVar5 == 0x21)) || (uVar5 == 0x11)) ||
      ((puVar6 = PTR_DAT_8c0f7dbc, uVar7 = DAT_8c0f7dd0, puVar8 = PTR_s_External_Modem_8c0f7dcc,
       uVar5 == 0x1e || (puVar8 = PTR_s_RAS_Serial_8c0f7dd4, uVar5 == 0x1a)))) ||
     ((puVar8 = PTR_s_PPP_Serial_8c0f7dd8, uVar5 == 0x12 ||
      (puVar6 = PTR_DAT_8c0f7de0, puVar8 = PTR_s_Internal_Modem_8c0f7ddc, uVar5 == 0x1c)))) {
    iVar11 = (*(code *)PTR_FUN_8c0f7db8)(puVar6,uVar7,puVar8);
  }
  else {
    iVar11 = -0x1a;
  }
  if (iVar11 != 0) {
    return iVar11;
  }
  if ((*puVar2 & 4) == 0) goto LAB_8c0f7e22;
  iVar11 = *DAT_8c0f7de8;
  if (iVar11 == 0) {
    iVar11 = (*(code *)PTR_FUN_8c0f7de4)(0,puVar9,iVar10);
    if (iVar11 != 0) {
      return -0x1a;
    }
    *DAT_8c0f7dec = *(undefined4 *)(&stack0xffffffe8 + iVar4);
LAB_8c0f7e04:
    (*(code *)puVar1)(0);
  }
  else {
    if (iVar11 == 1) {
      iVar11 = (*(code *)PTR_FUN_8c0f7de4)(0,1,puVar9,iVar10);
joined_r0x8c0f7dac:
      if (iVar11 != 0) {
        return -0x1a;
      }
      goto LAB_8c0f7e04;
    }
    if (iVar11 == 2) {
      iVar11 = (*(code *)PTR_FUN_8c0f7de4)(0,2,puVar9,iVar10);
      goto joined_r0x8c0f7dac;
    }
  }
  iVar10 = (*(code *)PTR_FUN_8c0f7ef0)(puVar9,iVar10);
  if (iVar10 != 0) {
    return -0x1a;
  }
LAB_8c0f7e22:
  puVar3 = DAT_8c0f7efc;
  iVar10 = DAT_8c0f7ef8;
  puVar6 = PTR_FUN_8c0f7ef4;
  if ((*puVar2 & 0x10) != 0) {
    if (((*puVar2 & 2) != 0) && ((*puVar2 & 4) == 0)) {
      *DAT_8c0f7f00 = 0xffffffff;
      (*(code *)puVar1)(0);
    }
    iVar11 = (*(code *)PTR_FUN_8c0f7f04)(*puVar3,0);
    if (iVar11 != 0) {
      return -0x1a;
    }
    iVar11 = (*(code *)PTR_FUN_8c0f7f08)(0,(int)&local_20 + iVar4);
    if (iVar11 == 0) {
      (*(code *)PTR_FUN_8c0f7f0c)(0,(int)&local_20 + DAT_8c0f7ee6 + iVar4);
      if ((*(int *)((int)&local_20 + DAT_8c0f7ee6 + iVar4) != 0) &&
         ((*(uint *)((int)&local_20 + iVar4) & 0x20) != 0)) {
        *(undefined4 *)(&stack0xffffffe4 + iVar4) = 0;
        (*(code *)puVar6)(*puVar3,(int)DAT_8c0f7ee8,&stack0xffffffe4 + iVar4);
        (*(code *)puVar6)(*puVar3,(int)DAT_8c0f7eea,(int)&local_20 + DAT_8c0f7ee6 + iVar4);
      }
      if ((*(uint *)((int)&local_20 + iVar4) & 0x40) != 0) {
        *(undefined4 *)(&stack0xffffffe4 + iVar4) = 0;
        (*(code *)puVar6)(*puVar3,(int)DAT_8c0f7eec,&stack0xffffffe4 + iVar4);
      }
    }
    (*(code *)PTR_FUN_8c0f7f10)(0,iVar10);
    (*(code *)PTR_FUN_8c0f7f14)(0,iVar10 + 4);
  }
  if ((*puVar2 & 1) != 0) {
    *DAT_8c0f7f00 = 0xffffffff;
    (*(code *)puVar1)(0);
    iVar11 = (*(code *)PTR_FUN_8c0f7f18)((int)&local_20 + iVar4);
    if (iVar11 != 0) {
      return -0x29;
    }
    if ((*(uint *)((int)&local_20 + iVar4) & (int)DAT_8c0f7ff0) != 0) {
      *(undefined4 *)(&stack0xffffffe4 + iVar4) = 0;
      (*(code *)puVar6)(DAT_8c0f7ffc,(int)DAT_8c0f7ff2,&stack0xffffffe4 + iVar4);
    }
    if (((*(uint *)((int)&local_20 + iVar4) & (int)DAT_8c0f7ff4) != 0) &&
       ((*(uint *)((int)&local_20 + iVar4) & (int)DAT_8c0f7ff6) == 0)) {
      iVar4 = (*(code *)PTR_FUN_8c0f8000)(*puVar3,*(undefined4 *)((int)&local_20 + iVar4));
      if (iVar4 == 0) {
        (*(code *)PTR_FUN_8c0f8004)(9);
        return 0;
      }
      (*(code *)puVar1)(4);
      (*(code *)PTR_FUN_8c0f8004)(7);
      return iVar4;
    }
    if (((*(uint *)((int)&local_20 + iVar4) & (int)DAT_8c0f7ff6) != 0) &&
       (iVar4 = (*(code *)PTR_FUN_8c0f8008)(DAT_8c0f7ffc,3), iVar4 != 0)) {
      return -0x1a;
    }
    (*(code *)PTR_FUN_8c0f8010)(DAT_8c0f800c);
    (*(code *)PTR_FUN_8c0f8014)(3,iVar10);
    (*(code *)PTR_FUN_8c0f8018)(3,iVar10 + 4);
    (*(code *)PTR_FUN_8c0f8020)(DAT_8c0f801c,0x21);
  }
  (*(code *)PTR_FUN_8c0f8024)();
  return 0;
}

