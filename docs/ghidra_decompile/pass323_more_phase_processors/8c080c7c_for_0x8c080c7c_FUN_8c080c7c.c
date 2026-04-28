// query addr: 0x8c080c7c
// containing entry: 8c080c7c
// name: FUN_8c080c7c
// signature: undefined FUN_8c080c7c(void)
// body addrs: 1422


/* WARNING: Removing unreachable block (ram,0x8c080fe6) */
/* WARNING: Removing unreachable block (ram,0x8c08100e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c080c7c(ulonglong param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined4 in_fr3;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double in_xd6;
  double in_xd8;
  bool bVar15;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int local_74;
  int local_70;
  int local_6c;
  char cStackY_2c;
  char cStackY_28;
  
  puVar2 = PTR_FUN_8c080e00;
  pbVar5 = (byte *)(param_3 + 2);
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  (*(code *)PTR_FUN_8c080e00)(2);
  (*(code *)puVar2)();
  (*(code *)puVar2)();
  (*(code *)puVar2)();
  (*(code *)puVar2)();
  (*(code *)puVar2)();
  (*(code *)puVar2)();
  (*(code *)puVar2)();
  puVar2 = PTR_FUN_8c080f6c;
  iVar9 = 4;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (((*pbVar5 & 0x10) == 0) || ((*pbVar5 & 0xf) != 8)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if (bVar15) {
    uVar4 = 0;
  }
  else {
    bVar1 = *pbVar5;
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 0xf) < 9) {
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
    }
    else if ((bVar1 & 0xf) < 9) {
      uVar4 = 4;
    }
    else {
      uVar4 = 8;
    }
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 2) == 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 8) != 0) {
          local_6c = 1;
          local_74 = 1;
        }
      }
      else {
        local_6c = -1;
        local_74 = -1;
      }
    }
    else {
      local_70 = 1;
      local_74 = 1;
    }
  }
  else {
    local_70 = -1;
    local_74 = -1;
  }
  if (local_74 != 0) {
    iVar9 = (*(code *)PTR_FUN_8c080f6c)();
    iVar6 = *(int *)(param_2 + 0x20);
    iVar3 = (*(code *)puVar2)();
    iVar7 = *(int *)(DAT_8c080f6a + param_2);
    cStackY_2c = *(char *)(iVar6 * iVar9 + iVar3 + iVar7);
    iVar9 = (*(code *)puVar2)();
    iVar3 = (*(code *)puVar2)();
    cVar8 = *(char *)(iVar6 * (iVar9 + local_6c) + iVar3 + local_70 + iVar7);
    iVar9 = (*(code *)puVar2)();
    iVar3 = (*(code *)puVar2)();
    cStackY_28 = *(char *)(iVar6 * (iVar9 - local_6c) + (iVar3 - local_70) + iVar7);
    bVar15 = true;
    if ((cStackY_2c != 'b') && (cStackY_2c != '[')) {
      bVar15 = false;
    }
    if (!bVar15) {
      cStackY_2c = '\0';
    }
    bVar15 = true;
    if ((cVar8 != 'b') && (cVar8 != '[')) {
      bVar15 = false;
    }
    if (!bVar15) {
      cVar8 = '\0';
    }
    bVar15 = true;
    if ((cStackY_28 != 'b') && (cStackY_28 != '[')) {
      bVar15 = false;
    }
    if (!bVar15) {
      cStackY_28 = '\0';
    }
    if (local_74 < 0) {
      if (in_FPSCR_SZ == '\0') {
        param_1 = (ulonglong)(uint)DAT_8c0810d8;
      }
      else {
        in_xd8 = (double)CONCAT44(DAT_8c0810d8._4_4_,(uint)DAT_8c0810d8);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = (float)((int)(char)*pbVar5 & 0xfU);
        dVar12 = (double)CONCAT44(0xbf800000,in_fr3);
        dVar13 = (double)CONCAT44(fVar11,((float)param_1 - fVar11) + -1.0);
      }
      else {
        dVar13 = (double)((int)(char)*pbVar5 & 0xfU);
        dVar12 = -(double)CONCAT44(0x3f800000,in_fr3);
        dVar13 = (dVar13 - dVar13) + dVar12;
      }
      in_fr3 = SUB84(dVar12,0);
    }
    else {
      dVar13 = (double)CONCAT44((int)(param_1 >> 0x20),(float)((int)(char)*pbVar5 & 0xf));
    }
    if (in_FPSCR_PR == '\0') {
      iVar9 = (int)SUB84(dVar13,0);
      iVar3 = (int)SUB84(dVar13,0);
    }
    else {
      iVar9 = (int)dVar13;
      iVar3 = (int)dVar13;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar13 = (double)(ulonglong)DAT_8c0810cc;
    }
    else {
      in_xd8 = (double)CONCAT44(_DAT_8c0810d0,DAT_8c0810cc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = (double)CONCAT44((float)iVar3,SUB84(dVar13,0));
    }
    else {
      dVar12 = (double)iVar3;
    }
    fVar11 = SUB84(dVar12,0);
    if (in_FPSCR_SZ == '\0') {
      in_xd6 = 0.0;
    }
    uVar10 = SUB84(in_xd6,0);
    if (((in_FPSCR_PR != '\0' || (float)((ulonglong)dVar12 >> 0x20) <= fVar11) ||
        (cStackY_2c != '\0')) || (cVar8 == '\0')) {
      if (((iVar9 < 9) && (cStackY_2c != '\0')) && (cStackY_28 == '\0')) {
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44((float)iVar9,fVar11);
        }
        else {
          dVar12 = (double)iVar9;
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd6 = (double)CONCAT44(DAT_8c0810d8._4_4_,uVar10);
        }
        else {
          in_xd6 = (double)CONCAT44(uRam8c0810e0,DAT_8c0810d8._4_4_);
        }
        if (in_FPSCR_PR == '\0') {
          in_xd6 = (double)CONCAT44((float)((ulonglong)in_xd6 >> 0x20) -
                                    (float)((ulonglong)dVar12 >> 0x20),SUB84(in_xd6,0));
        }
        else {
          in_xd6 = in_xd6 - dVar12;
        }
      }
      else if (((iVar9 < 9) || (cStackY_2c == '\0')) || (cVar8 != '\0')) {
        if (in_FPSCR_PR == '\0') {
          dVar12 = (double)CONCAT44((float)iVar9,fVar11);
        }
        else {
          dVar12 = (double)iVar9;
        }
        fVar11 = SUB84(dVar12,0);
        fVar14 = (float)((ulonglong)dVar12 >> 0x20);
        if (((in_FPSCR_PR != '\0' || fVar14 <= fVar11) && (cStackY_2c == '\0')) &&
           (cStackY_28 != '\0')) {
          if (in_FPSCR_PR == '\0') {
            dVar12 = (double)CONCAT44(fVar14 + fVar11,fVar11);
          }
          else {
            dVar12 = dVar12 + dVar12;
          }
          in_xd6 = dVar12;
          if (in_FPSCR_SZ == '\0') {
            in_xd6 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),uVar10);
          }
        }
      }
      else if (in_FPSCR_PR == '\0') {
        in_xd6 = (double)CONCAT44((float)(iVar9 + -8),uVar10);
      }
      else {
        in_xd6 = (double)(iVar9 + -8);
      }
    }
    else {
      if (in_FPSCR_PR == '\0') {
        dVar12 = (double)CONCAT44((float)iVar9,fVar11);
      }
      else {
        dVar12 = (double)iVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(_DAT_8c0810d0,uVar10);
      }
      else {
        dVar13 = (double)CONCAT44(DAT_8c0810d4,_DAT_8c0810d0);
      }
      if (in_FPSCR_PR == '\0') {
        in_xd6 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) -
                                  (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar13,0));
      }
      else {
        in_xd6 = dVar13 - dVar12;
      }
    }
    uVar10 = SUB84(dVar12,0);
    fVar11 = (float)((ulonglong)in_xd6 >> 0x20);
    if (fVar11 == SUB84(in_xd6,0)) {
      iVar9 = (*(code *)PTR_FUN_8c081200)();
      iVar3 = (*(code *)PTR_FUN_8c081200)();
      if (*(char *)(iVar6 * iVar9 + iVar3 + iVar7) == 'b') {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x28) = DAT_8c081204;
        }
        else {
          *(ulonglong *)(param_3 + 0x28) = CONCAT44(uRam8c081208,DAT_8c081204);
        }
      }
      else if (((cStackY_28 == '\0') && (cStackY_2c == '\0')) && (cVar8 == '\0')) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(param_3 + 0x28) = 0x3f800000;
        }
        else {
          *(ulonglong *)(param_3 + 0x28) = CONCAT44(0x3f800000,uVar10);
        }
      }
    }
    else {
      dVar12 = (double)CONCAT44(0x3f800000,uVar10);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(DAT_8c0810d4,in_fr3);
      }
      else {
        dVar13 = (double)CONCAT44((uint)DAT_8c0810d8,DAT_8c0810d4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = fVar11 / (float)((ulonglong)dVar13 >> 0x20);
        in_xd6 = (double)CONCAT44(fVar11,SUB84(in_xd6,0));
        bVar15 = 1.0 < fVar11;
      }
      else {
        in_xd6 = in_xd6 / dVar13;
        fVar11 = (float)((ulonglong)in_xd6 >> 0x20);
        bVar15 = dVar12 < in_xd6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = (double)CONCAT44(0x3f800000,fVar11);
        in_xd6 = in_xd8;
      }
      dVar13 = in_xd6;
      if ((bVar15) && (dVar13 = dVar12, in_FPSCR_SZ == '\0')) {
        dVar12 = (double)((ulonglong)dVar12 >> 0x20);
        dVar13 = in_xd6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(param_3 + 0x28) = SUB84(dVar12,0);
      }
      else {
        *(double *)(param_3 + 0x28) = dVar13;
      }
    }
  }
  return;
}

