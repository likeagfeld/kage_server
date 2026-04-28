// entry: 8c0906f4
// name: FUN_8c0906f4
// signature: undefined FUN_8c0906f4(void)


/* WARNING: Removing unreachable block (ram,0x8c090736) */
/* WARNING: Removing unreachable block (ram,0x8c09071e) */
/* WARNING: Removing unreachable block (ram,0x8c0907fa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c0906f4(uint *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  double dVar15;
  float fVar16;
  undefined8 in_dr14;
  undefined *puVar17;
  undefined8 in_xd8;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  puVar6 = PTR_FUN_8c090884;
  puVar5 = PTR__rand_8c090880;
  if (in_FPSCR_SZ == '\0') {
    puVar13 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar13 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar13 + -4) = in_PR;
  puVar17 = PTR__rand_8c090880;
  if (in_FPSCR_SZ == '\0') {
    puVar17 = DAT_8c09087c;
  }
  do {
    do {
      iVar7 = (*(code *)puVar5)();
      if (in_FPSCR_PR == '\0') {
        iVar7 = (int)(((float)iVar7 / (float)puVar17) * (float)(int)(param_1[8] - 2));
      }
      else {
        dVar15 = (double)(int)(param_1[8] - 2);
        iVar7 = (int)(dVar15 * dVar15);
      }
      iVar8 = (*(code *)puVar5)();
      iVar7 = iVar7 + 1;
      cVar1 = *(char *)param_1[1];
      if (in_FPSCR_PR == '\0') {
        dVar15 = (double)CONCAT44((float)(int)(param_1[9] - 2),(float)iVar8 / (float)puVar17);
      }
      else {
        dVar15 = (double)(int)(param_1[9] - 2);
      }
      if (in_FPSCR_PR == '\0') {
        iVar8 = (int)(SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20));
      }
      else {
        iVar8 = (int)(dVar15 * dVar15);
      }
      *(int *)((int)puVar13 + -0x20) = iVar8 + 1;
      if (cVar1 == '\x02') {
        iVar7 = (int)(iVar7 + (uint)(iVar7 < 0)) >> 1;
      }
      iVar8 = (*(code *)puVar6)(param_1,iVar7,iVar8 + 1);
    } while (iVar8 == 0);
    bVar2 = *(byte *)(param_1[8] * *(int *)((int)puVar13 + -0x20) + iVar7 +
                     *(int *)((int)DAT_8c090870 + (int)param_1));
    bVar4 = false;
    if ((3 < bVar2) && (bVar2 < 0x10)) {
      bVar4 = true;
    }
  } while (bVar4);
  puVar12 = *(ushort **)((int)DAT_8c090872 + (int)param_1);
  iVar8 = 0;
  if (0 < (int)param_1[0xb]) {
    do {
      if ((*puVar12 & 1) == 0) break;
      iVar8 = iVar8 + 1;
      puVar12 = puVar12 + 0x3a;
    } while (iVar8 < (int)param_1[0xb]);
  }
  *(undefined4 *)((int)puVar13 + -0x30) = 1;
  *(undefined4 *)((int)puVar13 + -0x2c) = 8;
  (*(code *)PTR_FUN_8c090888)(param_1,puVar12,iVar7);
  puVar5 = PTR___bfswu_8c09088c;
  *(undefined1 *)(puVar12 + 4) = 1;
  *(undefined1 *)(puVar12 + 5) = 0xe;
  if (in_FPSCR_SZ == '\0') {
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
  }
  else {
    *(undefined8 *)(puVar12 + 0xc) = in_xd8;
  }
  puVar12 = (ushort *)(*(int *)((int)DAT_8c090872 + (int)param_1) + iVar8 * 0x74);
  *(undefined1 *)(puVar12 + 4) = 10;
  if (in_FPSCR_SZ == '\0') {
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    fVar16 = (float)param_1[5];
  }
  else {
    *(undefined8 *)(puVar12 + 0xc) = in_xd8;
    fVar16 = (float)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar15 = (double)CONCAT44(fVar16 + -1.0,0xbf800000);
  }
  else {
    dVar15 = (double)CONCAT44(fVar16,0xbf800000) + (double)CONCAT44(fVar16,0xbf800000);
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar12 + 10) = (int)((ulonglong)dVar15 >> 0x20);
  }
  else {
    *(double *)(puVar12 + 10) = dVar15;
  }
  (*(code *)puVar5)();
  uVar9 = SUB84(dVar15,0);
  (*(code *)PTR___bfswu_8c09088c)(*(undefined4 *)((int)puVar13 + -0x20));
  *(byte *)(puVar12 + 1) = ((byte)puVar12[1] & (byte)DAT_8c090876 | 0x10) & (byte)DAT_8c090878 | 8;
  puVar12[0x38] = 0;
  puVar12[0x39] = 0;
  *(undefined4 *)(puVar12 + 6) = param_2;
  puVar5 = PTR_FUN_8c090890;
  if ((*param_1 & 2) != 0) {
    if ((*puVar12 & 1) == 0) {
      uVar9 = *(undefined4 *)PTR_DAT_8c090a10;
      *(undefined **)((int)puVar13 + -0x30) = PTR_s_On_Panel_ASSERT____8c090a14;
      *(undefined **)((int)puVar13 + -0x18) = PTR_FUN_8c090a18;
      (*(code *)PTR_FUN_8c090a18)(uVar9);
      uVar3 = puVar12[2];
      uVar9 = *(undefined4 *)PTR_DAT_8c090a10;
      *(undefined **)((int)puVar13 + -0x30) = PTR_s_Panel__d_was_not_Used__8c090a34;
      *(uint *)((int)puVar13 + -0x2c) = (uint)uVar3;
      *(uint *)((int)puVar13 + -0x10) = (uint)uVar3;
      (**(code **)((int)puVar13 + -0x18))(uVar9);
      return;
    }
    iVar7 = (*(code *)PTR_FUN_8c090890)();
    uVar11 = param_1[8];
    iVar8 = (*(code *)puVar5)();
    iVar10 = *(int *)((int)DAT_8c09087a + (int)param_1);
    if (*(int *)((uVar11 * iVar7 + iVar8) * 4 + iVar10) != 0) {
      uVar9 = (*(code *)puVar5)();
      *(undefined4 *)((int)puVar13 + -0x10) = uVar9;
      iVar7 = (*(code *)puVar5)();
      if (*(ushort **)((uVar11 * *(int *)((int)puVar13 + -0x10) + iVar7) * 4 + iVar10) == puVar12) {
        uVar3 = puVar12[2];
        *(uint *)((int)puVar13 + -0x10) = (uint)uVar3;
        *(uint *)((int)puVar13 + -0x2c) = (uint)uVar3;
        *(undefined **)((int)puVar13 + -0x30) = PTR_s_On_Panel_Warning__Allready_On_Pa_8c090b4c;
        (*(code *)PTR_FUN_8c090b48)(*(undefined4 *)PTR_DAT_8c090b44);
        return;
      }
      uVar9 = *(undefined4 *)PTR_DAT_8c090a10;
      *(undefined **)((int)puVar13 + -0x30) = PTR_s_On_Panel_ASSERT____8c090a14;
      *(undefined **)((int)puVar13 + -0x18) = PTR_FUN_8c090a18;
      (*(code *)PTR_FUN_8c090a18)(uVar9);
      uVar9 = (*(code *)puVar5)();
      *(undefined4 *)((int)puVar13 + -8) = uVar9;
      uVar9 = (*(code *)puVar5)();
      *(undefined4 *)((int)puVar13 + -0xc) = uVar9;
      iVar7 = (*(code *)puVar5)();
      uVar11 = param_1[8];
      *(int *)((int)puVar13 + -0x10) = iVar7;
      *(uint *)((int)puVar13 + -0x14) = uVar11 * iVar7;
      iVar7 = (*(code *)puVar5)();
      uVar9 = *(undefined4 *)PTR_DAT_8c090a10;
      uVar3 = *(ushort *)
               (*(int *)((*(int *)((int)puVar13 + -0x14) + iVar7) * 4 +
                        *(int *)((int)DAT_8c090a08 + (int)param_1)) + 4);
      *(undefined **)((int)puVar13 + -0x30) = PTR_s_Now_X__d_Y__d_allready_put_on_Pa_8c090a1c;
      *(uint *)((int)puVar13 + -0x24) = (uint)uVar3;
      *(undefined4 *)((int)puVar13 + -0x2c) = *(undefined4 *)((int)puVar13 + -8);
      *(undefined4 *)((int)puVar13 + -0x28) = *(undefined4 *)((int)puVar13 + -0xc);
      (**(code **)((int)puVar13 + -0x18))(uVar9);
      uVar3 = puVar12[2];
      uVar9 = *(undefined4 *)PTR_DAT_8c090a10;
      *(undefined **)((int)puVar13 + -0x30) = PTR_s_Requester_Panel__d_can_not_offpa_8c090a20;
      *(uint *)((int)puVar13 + -0x2c) = (uint)uVar3;
      (**(code **)((int)puVar13 + -0x18))(uVar9);
      return;
    }
    uVar3 = puVar12[2];
    *(undefined **)((int)puVar13 + -0x30) = PTR_s_On_Panel__d_Passed__8c090b40;
    *(uint *)((int)puVar13 + -0x2c) = (uint)uVar3;
    (*(code *)PTR_FUN_8c090b48)(*(undefined4 *)PTR_DAT_8c090b44);
  }
  puVar5 = PTR_FUN_8c090a24;
  iVar7 = (*(code *)PTR_FUN_8c090a24)();
  iVar8 = (*(code *)puVar5)();
  (*(code *)PTR_FUN_8c090a28)(param_1,iVar7,iVar8,1);
  iVar10 = *(int *)((param_1[8] * iVar8 + iVar7) * 4 + *(int *)((int)DAT_8c090a0a + (int)param_1));
  if ((iVar10 == 0) || (*(int *)(iVar10 + 8) != 2)) {
    if (*(int *)((param_1[8] * iVar8 + iVar7) * 4 + *(int *)((int)DAT_8c090a0c + (int)param_1)) == 0
       ) {
      iVar10 = (*(code *)PTR_FUN_8c090b50)(param_1,iVar7,iVar8);
      if ((iVar10 == 0) || ((*(byte *)(iVar10 + 9) & 0x7f) != 0)) {
        bVar2 = *(byte *)(iVar8 * param_1[8] + iVar7 + *(int *)((int)DAT_8c090b3c + (int)param_1));
        uVar14 = DAT_8c090b54;
        if (bVar2 < 0x1c) {
          if (0xf < bVar2) {
            if (in_FPSCR_SZ != '\0') {
              in_xd8 = CONCAT44(_DAT_8c090b58,DAT_8c090b54);
              uVar14 = uVar9;
            }
            goto LAB_8c090986;
          }
        }
        else if (bVar2 < 0x4c) {
          if ((*(char *)param_1[1] == '\x04') && (((char *)param_1[1])[1] == '\x03')) {
            uVar14 = 0;
          }
          else if (*(short *)(param_1[2] + 0x18) == 0) {
            if (in_FPSCR_SZ != '\0') {
              in_xd8 = CONCAT44(_DAT_8c090b58,DAT_8c090b54);
              uVar14 = uVar9;
            }
          }
          else {
            uVar14 = _DAT_8c090b58;
            if (in_FPSCR_SZ != '\0') {
              in_xd8 = CONCAT44((undefined4)DAT_8c090b5c,_DAT_8c090b58);
              uVar14 = uVar9;
            }
          }
          goto LAB_8c090986;
        }
        if (bVar2 == 0) {
          uVar14 = (undefined4)DAT_8c090b5c;
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44(DAT_8c090b5c._4_4_,(undefined4)DAT_8c090b5c);
            uVar14 = uVar9;
          }
        }
        else if ((bVar2 == 0x5f) || (bVar2 == 0x60)) {
          uVar14 = (undefined4)DAT_8c090b5c;
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44(DAT_8c090b5c._4_4_,(undefined4)DAT_8c090b5c);
            uVar14 = uVar9;
          }
        }
        else if ((((bVar2 == 99) || (bVar2 == 100)) || (bVar2 == 0x65)) || (bVar2 == 0x66)) {
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44(_DAT_8c090b58,DAT_8c090b54);
            uVar14 = uVar9;
          }
        }
        else if (bVar2 == 0x67) {
          if (in_FPSCR_SZ != '\0') {
            in_xd8 = CONCAT44(_DAT_8c090b58,DAT_8c090b54);
            uVar14 = uVar9;
          }
        }
        else {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = (undefined4)DAT_8c090b5c;
        if (in_FPSCR_SZ != '\0') {
          in_xd8 = CONCAT44(DAT_8c090b5c._4_4_,(undefined4)DAT_8c090b5c);
          uVar14 = uVar9;
        }
      }
    }
    else {
      uVar14 = 0x3f800000;
    }
  }
  else {
    uVar14 = DAT_8c090a2c;
    if (in_FPSCR_SZ != '\0') {
      in_xd8 = CONCAT44(PTR_FUN_8c090a30,DAT_8c090a2c);
      uVar14 = uVar9;
    }
  }
LAB_8c090986:
  puVar6 = PTR_FUN_8c090a30;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar12 + 0x10) = uVar14;
  }
  else {
    *(undefined8 *)(puVar12 + 0x10) = in_xd8;
  }
  (*(code *)puVar6)(param_1[2],puVar12 + 1,puVar12 + 0xe,puVar12 + 0x12);
  iVar7 = (*(code *)puVar5)();
  *(uint *)((int)puVar13 + -0x1c) = param_1[8] * iVar7;
  iVar7 = (*(code *)puVar5)();
  *(ushort **)
   ((*(int *)((int)puVar13 + -0x1c) + iVar7) * 4 + *(int *)((int)DAT_8c090a08 + (int)param_1)) =
       puVar12;
  return;
}

