// entry: 8c017d5a
// name: FUN_8c017d5a


/* WARNING: Removing unreachable block (ram,0x8c017f50) */
/* WARNING: Removing unreachable block (ram,0x8c017f3a) */
/* WARNING: Removing unreachable block (ram,0x8c017e96) */
/* WARNING: Removing unreachable block (ram,0x8c017ee0) */
/* WARNING: Removing unreachable block (ram,0x8c017e9c) */
/* WARNING: Removing unreachable block (ram,0x8c017ef4) */
/* WARNING: Removing unreachable block (ram,0x8c017f0c) */

double FUN_8c017d5a(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_fr1;
  double dVar4;
  double dVar5;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_20._0_4_ = *(undefined4 *)PTR_DAT_8c017e7c;
  local_20._4_4_ = *(undefined4 *)(PTR_DAT_8c017e7c + 4);
  local_18 = *(undefined4 *)(PTR_DAT_8c017e7c + 8);
  local_14 = *(undefined4 *)(PTR_DAT_8c017e7c + 0xc);
  local_10 = *(undefined4 *)(PTR_DAT_8c017e7c + 0x10);
  local_c = *(undefined4 *)(PTR_DAT_8c017e7c + 0x14);
  uVar2 = (uint)*(ushort *)(param_1 + 0x54);
  if ((*(uint *)(param_1 + 0x2c) & (int)DAT_8c017e74) != 0) {
    iVar3 = *(int *)(DAT_8c017f56 + param_1);
    goto LAB_8c017e52;
  }
  cVar1 = *(char *)(*(int *)((int)DAT_8c017e70 + *(int *)(DAT_8c017e6e + param_1)) +
                    (int)DAT_8c017e72 * uVar2 + 0x18);
  if (cVar1 == '\x01') {
    iVar3 = 5;
    goto LAB_8c017e52;
  }
  if (cVar1 == '\x02') {
    iVar3 = 0;
    goto LAB_8c017e52;
  }
  iVar3 = *(int *)(DAT_8c017e76 + param_1) + (int)DAT_8c017e78;
  if (*(short *)(iVar3 + uVar2 * 0x1e + 0x18) == 0) {
    local_8 = iVar3 + DAT_8c017e6c;
    if (*(short *)(local_8 + uVar2 * 0x1e + 0x18) != 0) goto LAB_8c017f20;
    local_4 = iVar3 + DAT_8c017e7a;
    if (*(short *)(local_4 + uVar2 * 0x1e + 0x18) != 0) goto LAB_8c017f20;
    local_8 = local_8 + uVar2 * 0x1e;
    local_4 = local_4 + uVar2 * 0x1e;
    iVar3 = (int)*(short *)(iVar3 + uVar2 * 0x1e + 4) + (int)*(short *)(local_8 + 4) +
            (int)*(short *)(local_4 + 4);
  }
  else {
LAB_8c017f20:
    iVar3 = (int)*(short *)(iVar3 + DAT_8c017f58 + uVar2 * 0x1e + 4) +
            (int)*(short *)(iVar3 + DAT_8c017f54 + uVar2 * 0x1e + 4);
  }
  if (4 < iVar3) {
    iVar3 = 4;
  }
LAB_8c017e52:
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)&local_20 + iVar3 * 4),in_fr1);
    dVar5 = (double)CONCAT44(DAT_8c017e84,*DAT_8c017e80);
  }
  else {
    dVar4 = *(double *)((int)&local_20 + iVar3 * 4);
    dVar5 = (double)CONCAT44(0x2668e601,DAT_8c017e84);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) *
                             ((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar5,0)),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * (dVar5 / dVar5);
  }
  uRam8c017e88 = 0x2668e601;
  return dVar4;
}

