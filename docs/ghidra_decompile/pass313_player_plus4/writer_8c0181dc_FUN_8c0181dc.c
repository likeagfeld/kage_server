// entry: 8c0181dc
// name: FUN_8c0181dc


/* WARNING: Removing unreachable block (ram,0x8c01841c) */
/* WARNING: Removing unreachable block (ram,0x8c018406) */
/* WARNING: Removing unreachable block (ram,0x8c018352) */
/* WARNING: Removing unreachable block (ram,0x8c0183a4) */
/* WARNING: Removing unreachable block (ram,0x8c018358) */
/* WARNING: Removing unreachable block (ram,0x8c0183be) */
/* WARNING: Removing unreachable block (ram,0x8c0183d8) */

double FUN_8c0181dc(undefined4 param_1,int param_2,double *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  double in_dr0;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int local_18;
  
  uVar3 = (uint)*(ushort *)(param_2 + 0x54);
  if ((*(uint *)(param_2 + 0x2c) & (int)DAT_8c018326) == 0) {
    cVar1 = *(char *)(*(int *)((int)DAT_8c018324 + *(int *)(DAT_8c018320 + param_2)) +
                      (int)DAT_8c018322 * uVar3 + 0x18);
    if (cVar1 == '\x01') {
      local_18 = 5;
    }
    else if (cVar1 == '\x02') {
      local_18 = 0;
    }
    else {
      iVar2 = *(int *)(DAT_8c018328 + param_2) + (int)DAT_8c01832a;
      if (((*(short *)(iVar2 + uVar3 * 0x1e + 0x18) == 0) &&
          (*(short *)(iVar2 + DAT_8c01832c + uVar3 * 0x1e + 0x18) == 0)) &&
         (*(short *)(iVar2 + DAT_8c01832e + uVar3 * 0x1e + 0x18) == 0)) {
        local_18 = (int)*(short *)(iVar2 + uVar3 * 0x1e + 4) +
                   (int)*(short *)(iVar2 + DAT_8c01832c + uVar3 * 0x1e + 4) +
                   (int)*(short *)(iVar2 + DAT_8c01832e + uVar3 * 0x1e + 4);
      }
      else {
        local_18 = (int)*(short *)(iVar2 + DAT_8c01849c + uVar3 * 0x1e + 4) +
                   (int)*(short *)(iVar2 + DAT_8c018498 + uVar3 * 0x1e + 4);
      }
      if (4 < local_18) {
        local_18 = 4;
      }
    }
  }
  else {
    local_18 = *(int *)(DAT_8c01849a + param_2);
  }
  if (param_3 != (double *)0x0) {
    dVar4 = (double)(*(code *)PTR_FUN_8c018330)(*(undefined4 *)(param_2 + 0x58));
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c018334 + local_18 * 4),DAT_8c018338);
      dVar5 = (double)CONCAT44(*(undefined4 *)DAT_8c018340,param_1);
    }
    else {
      dVar7 = *(double *)(PTR_DAT_8c018334 + local_18 * 4);
      dVar5 = *DAT_8c018340;
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar5 >> 0x20);
      fVar8 = (float)((ulonglong)dVar7 >> 0x20) * fVar6;
      dVar7 = (double)CONCAT44(fVar8,fVar6);
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * fVar8,SUB84(dVar4,0));
    }
    else {
      dVar7 = (dVar7 / dVar5) * (dVar7 / dVar5);
      dVar4 = dVar4 * dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c01833c,SUB84(dVar7,0));
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c018340,DAT_8c01833c);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr0 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) /
                                (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar4,0));
    }
    else {
      in_dr0 = dVar4 / dVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)param_3 = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *param_3 = in_dr0;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(PTR_DAT_8c018334 + local_18 * 4),SUB84(in_dr0,0));
    dVar4 = (double)CONCAT44(DAT_8c018338,*(undefined4 *)DAT_8c018340);
  }
  else {
    dVar7 = *(double *)(PTR_DAT_8c018334 + local_18 * 4);
    dVar4 = (double)CONCAT44(DAT_8c01833c,DAT_8c018338);
  }
  if (in_FPSCR_PR == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                             ((float)((ulonglong)dVar4 >> 0x20) / SUB84(dVar4,0)),SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 * (dVar4 / dVar4);
  }
  return dVar7;
}

