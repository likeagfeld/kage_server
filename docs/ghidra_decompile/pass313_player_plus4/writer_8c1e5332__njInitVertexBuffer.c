// entry: 8c1e5332
// name: _njInitVertexBuffer


/* WARNING: Removing unreachable block (ram,0x8c1e54d6) */
/* WARNING: Removing unreachable block (ram,0x8c1e54c4) */
/* WARNING: Removing unreachable block (ram,0x8c1e5444) */
/* WARNING: Removing unreachable block (ram,0x8c1e5406) */
/* WARNING: Removing unreachable block (ram,0x8c1e5468) */
/* WARNING: Removing unreachable block (ram,0x8c1e54cc) */
/* WARNING: Removing unreachable block (ram,0x8c1e54e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _njInitVertexBuffer
   
   Libraries: 1.55J 1.55J 1.55J, 10.1 10.1 10.1 */

void _njInitVertexBuffer(undefined4 param_1,double param_2,undefined4 param_3,int param_4,
                        undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar17;
  double in_dr14;
  undefined4 uVar18;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  undefined8 in_xd14;
  byte in_IMASK;
  byte in_S;
  byte extraout_S;
  byte extraout_T;
  byte bVar19;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  float fVar16;
  
  uVar7 = DAT_8c1e53b4;
  puVar2 = PTR_DAT_8c1e53b0;
  iVar1 = DAT_8c1e53ac;
  if (in_FPSCR_SZ == '\0') {
    puVar9 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44(SUB84(in_dr14,0),(undefined4)local_24);
  }
  else {
    puVar9 = &local_24;
    local_24 = in_xd14;
  }
  *(undefined4 *)((int)puVar9 + -4) = in_PR;
  *(undefined4 *)((int)puVar9 + -0xc) = param_5;
  iVar8 = *(int *)((int)puVar9 + 0x20);
  *(undefined4 *)PTR_DAT_8c1e53b0 = 0;
  if (param_4 < 0) {
    param_4 = 100;
    *(undefined4 *)(iVar1 + 4) = uVar7;
    *(undefined4 *)(iVar1 + 0x5c) = 0x20;
    uVar7 = 1;
LAB_8c1e538e:
    *(undefined4 *)puVar2 = uVar7;
  }
  else {
    if (param_6 < 0) {
      *(undefined4 *)(iVar1 + 4) = uVar7;
      *(undefined4 *)(iVar1 + 0x5c) = 0x22;
      param_6 = 100;
LAB_8c1e538c:
      uVar7 = 2;
      goto LAB_8c1e538e;
    }
    if (iVar8 < 0) {
      iVar8 = 100;
      *(undefined4 *)(iVar1 + 4) = uVar7;
      *(undefined4 *)(iVar1 + 0x5c) = 0x24;
      goto LAB_8c1e538c;
    }
    *(undefined4 *)(iVar1 + 4) = DAT_8c1e547c;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  puVar4 = PTR_DAT_8c1e5494;
  puVar2 = PTR_DAT_8c1e5484;
  *(int *)PTR_DAT_8c1e5480 = param_4;
  puVar3 = PTR_DAT_8c1e548c;
  *(undefined4 *)puVar2 = *(undefined4 *)((int)puVar9 + -0xc);
  puVar2 = PTR_DAT_8c1e5490;
  *(int *)PTR_DAT_8c1e5488 = param_6;
  *(int *)puVar3 = param_7;
  *(int *)puVar2 = iVar8;
  *(int *)puVar4 = *(int *)((int)puVar9 + -0xc) + param_4 + param_6 + param_7 + iVar8;
  if (*(int *)PTR_DAT_8c1e5498 == 0) {
    iVar5 = *(int *)(iVar1 + 0x24);
    *(int *)((int)puVar9 + -8) = iVar5;
    if (iVar5 != 0) {
      (*(code *)PTR__syFree_8c1e54a0)(*(uint *)((int)puVar9 + -8) & DAT_8c1e549c);
    }
    fVar10 = (float)*(int *)puVar4;
    dVar15 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(fVar10,param_1);
    }
    uVar7 = (undefined4)((ulonglong)dVar15 >> 0x20);
    uVar18 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar10) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(uVar18,uVar7);
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(uVar18,uVar7);
        fVar10 = DAT_8c1e54a4;
      }
      else {
        in_xd2 = (double)CONCAT44(PTR__syMalloc_8c1e54a8,DAT_8c1e54a4);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0) + fVar10);
      }
      else {
        in_dr14 = in_dr14 + (double)(ulonglong)(uint)fVar10;
      }
    }
    uVar7 = 0;
    uVar6 = (*(code *)PTR__syMalloc_8c1e54a8)(*(int *)puVar4 * 4 + (int)DAT_8c1e547a);
    *(uint *)(iVar1 + 0x24) = uVar6 | DAT_8c1e54ac;
    in_S = extraout_S;
    bVar19 = extraout_T;
  }
  else {
    uVar7 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    dVar15 = in_xd2;
    if (*(uint *)PTR_DAT_8c1e54b0 < (uint)(*(int *)puVar4 * 4 + (int)DAT_8c1e547a)) {
      fVar10 = (float)*(int *)puVar4;
      bVar19 = 0;
      if (in_FPSCR_SZ == '\0') {
        dVar15 = (double)CONCAT44(fVar10,param_1);
      }
      uVar18 = (undefined4)((ulonglong)dVar15 >> 0x20);
      if (in_FPSCR_PR != '\0' || 0.0 <= fVar10) {
        if (in_FPSCR_SZ == '\0') {
          in_dr14 = (double)CONCAT44(uVar7,uVar18);
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          in_dr14 = (double)CONCAT44(uVar7,uVar18);
          fVar10 = DAT_8c1e54a4;
        }
        else {
          in_xd2 = (double)CONCAT44(PTR__syMalloc_8c1e54a8,DAT_8c1e54a4);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0) + fVar10);
        }
        else {
          in_dr14 = in_dr14 + (double)(ulonglong)(uint)fVar10;
        }
      }
      uVar7 = 0;
      *(undefined4 *)(iVar1 + 0x24) = 0;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      goto LAB_8c1e54ba;
    }
    fVar10 = (float)*(int *)puVar4;
    bVar19 = 0;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = (double)CONCAT44(fVar10,param_1);
    }
    uVar18 = (undefined4)((ulonglong)dVar15 >> 0x20);
    if (in_FPSCR_PR != '\0' || 0.0 <= fVar10) {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(uVar7,uVar18);
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        in_dr14 = (double)CONCAT44(uVar7,uVar18);
        fVar10 = DAT_8c1e54a4;
      }
      else {
        in_xd2 = (double)CONCAT44(PTR__syMalloc_8c1e54a8,DAT_8c1e54a4);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0) + fVar10);
      }
      else {
        in_dr14 = in_dr14 + (double)(ulonglong)(uint)fVar10;
      }
    }
    uVar7 = 0;
    *(int *)(iVar1 + 0x24) = *(int *)PTR_DAT_8c1e5498;
  }
  *(int *)(iVar1 + 0x28) = *(int *)puVar4 + 0x58;
LAB_8c1e54ba:
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(DAT_8c1e5624,SUB84(dVar15,0));
  }
  else {
    dVar15 = (double)CONCAT44(_DAT_8c1e5628,DAT_8c1e5624);
  }
  fVar10 = (float)((ulonglong)dVar15 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44(uVar7,(float)param_4 * fVar10);
  }
  else {
    dVar12 = (double)CONCAT44(uVar7,(float)param_4) * dVar15;
  }
  dVar14 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    dVar15 = (double)CONCAT44(fVar10,SUB84(dVar12,0));
    dVar14 = in_xd4;
  }
  fVar10 = SUB84(in_dr14,0);
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)((ulonglong)dVar15 >> 0x20);
    dVar15 = (double)CONCAT44(fVar16,SUB84(dVar15,0) / fVar10);
    fVar11 = (float)*(int *)((int)puVar9 + -0xc) * fVar16;
  }
  else {
    dVar15 = dVar15 / in_dr14;
    fVar16 = (float)((ulonglong)dVar15 >> 0x20);
    fVar11 = SUB84((double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                    (float)*(int *)((int)puVar9 + -0xc)) * dVar15,0);
  }
  dVar12 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = (double)CONCAT44(fVar11,param_3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) / fVar10,SUB84(dVar12,0));
    dVar13 = (double)CONCAT44((float)param_7,(float)param_6 * fVar16);
  }
  else {
    dVar12 = dVar12 / in_dr14;
    dVar13 = (double)param_7 * dVar15;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(iVar1 + 0x2c) = SUB84(dVar15,0);
    param_2 = (double)CONCAT44((int)((ulonglong)param_2 >> 0x20),SUB84(dVar13,0));
  }
  else {
    *(double *)(iVar1 + 0x2c) = dVar14;
    in_xd6 = in_xd2;
  }
  fVar11 = (float)((ulonglong)dVar13 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar17 = SUB84(param_2,0) / fVar10;
    dVar14 = (double)CONCAT44(fVar11 * fVar16,(float)iVar8 * fVar16);
  }
  else {
    fVar17 = SUB84(param_2 / in_dr14,0);
    dVar14 = (double)CONCAT44(fVar11,(float)iVar8) * dVar15 * dVar15;
  }
  dVar13 = dVar14;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar17);
  }
  if (in_FPSCR_PR == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / fVar10,SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 / in_dr14;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(iVar1 + 0x30) = (int)((ulonglong)dVar12 >> 0x20);
    in_xd2 = (double)CONCAT44(SUB84(dVar14,0),SUB84(dVar15,0));
  }
  else {
    *(double *)(iVar1 + 0x30) = dVar12;
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) / fVar10,SUB84(in_xd2,0));
  }
  else {
    dVar15 = in_xd2 / in_dr14;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(iVar1 + 0x34) = SUB84(dVar13,0);
    *(int *)(iVar1 + 0x38) = (int)((ulonglong)dVar13 >> 0x20);
    *(int *)(iVar1 + 0x3c) = (int)((ulonglong)dVar15 >> 0x20);
  }
  else {
    *(double *)(iVar1 + 0x34) = in_xd6;
    *(double *)(iVar1 + 0x38) = dVar13;
    *(double *)(iVar1 + 0x3c) = dVar15;
  }
  *(uint *)((int)puVar9 + -0xc) =
       (((uint)bVar19 | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  _waitVsync();
  (*(code *)PTR__kmSetSystemConfiguration_8c1e562c)(_DAT_8c1e5628);
  uVar7 = (*(code *)PTR__njCalcTexture_8c1e5630)(0);
  *DAT_8c1e5634 = uVar7;
  return;
}

