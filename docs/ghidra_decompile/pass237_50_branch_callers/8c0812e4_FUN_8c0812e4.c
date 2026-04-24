// entry: 8c0812e4
// name: FUN_8c0812e4
// signature: undefined FUN_8c0812e4(void)


void FUN_8c0812e4(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  double dVar11;
  ulonglong in_dr14;
  ulonglong uVar12;
  bool bVar13;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 local_24;
  
  uVar1 = DAT_8c081440;
  if (in_FPSCR_SZ == '\0') {
    puVar10 = (undefined8 *)((int)&local_24 + 4);
    local_24 = CONCAT44((int)(in_dr14 >> 0x20),(undefined4)local_24);
  }
  else {
    puVar10 = &local_24;
    local_24 = in_dr14;
  }
  *(undefined4 *)((int)puVar10 + -4) = in_PR;
  iVar6 = 0;
  iVar4 = *(int *)(param_1 + 0x24);
  *(undefined4 *)((int)puVar10 + -0xc) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x14);
  if (0 < iVar4) {
    iVar5 = *(int *)(param_1 + 0x20);
    in_dr14 = in_dr14 & 0xffffffff;
    do {
      iVar7 = 0;
      if (0 < iVar5) {
        do {
          puVar3 = PTR_FUN_8c081450;
          if (*(char *)(iVar6 * iVar5 + iVar7 + *(int *)(DAT_8c081442 + param_1)) == 'a') {
            iVar4 = 0x40;
            puVar8 = *(ushort **)(DAT_8c081444 + param_1);
            do {
              puVar9 = puVar8;
              if (((*puVar8 & 1) == 0) || (puVar9 = puVar8 + 10, (puVar8[10] & 1) == 0)) break;
              iVar4 = iVar4 + -1;
              puVar8 = puVar8 + 0x14;
              puVar9 = puVar8;
            } while (iVar4 != 0);
            *puVar9 = *puVar9 | 1;
            (*(code *)puVar3)();
            (*(code *)puVar3)();
            uVar2 = DAT_8c08144a;
            *(byte *)(puVar9 + 1) = ((byte)puVar9[1] & (byte)DAT_8c081448 | 0x10) & (byte)uVar1 | 8;
            *(byte *)((int)puVar9 + 9) = *(byte *)((int)puVar9 + 9) & (byte)uVar2 & 0x7f;
            *(undefined1 *)(puVar9 + 4) = 0;
            if (in_FPSCR_SZ == '\0') {
              *(int *)(puVar9 + 8) = (int)(in_dr14 >> 0x20);
            }
            else {
              *(ulonglong *)(puVar9 + 8) = in_dr14;
            }
            *(ushort **)
             ((iVar6 * *(int *)(param_1 + 0x20) + iVar7) * 4 + *(int *)(DAT_8c08144c + param_1)) =
                 puVar9;
            iVar5 = *(int *)(param_1 + 0x20);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar5);
        iVar4 = *(int *)(param_1 + 0x24);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  uVar1 = DAT_8c081440;
  if (*(int *)((int)puVar10 + -0xc) != 0) {
    *(int *)((int)puVar10 + -8) = param_1 + 0x44;
    uVar12 = in_dr14 & 0xffffffff;
    do {
      dVar11 = (double)(*(code *)PTR_FUN_8c081454)(*(undefined4 *)((int)puVar10 + -8));
      if (in_FPSCR_PR == '\0') {
        iVar4 = (int)((float)((ulonglong)dVar11 >> 0x20) * (float)*(int *)(param_1 + 0x20));
      }
      else {
        iVar4 = (int)(dVar11 * (double)*(int *)(param_1 + 0x20));
      }
      dVar11 = (double)(*(code *)PTR_FUN_8c081454)(*(undefined4 *)((int)puVar10 + -8));
      puVar3 = PTR_FUN_8c081450;
      if (in_FPSCR_PR == '\0') {
        iVar6 = (int)((float)((ulonglong)dVar11 >> 0x20) * (float)*(int *)(param_1 + 0x24));
      }
      else {
        iVar6 = (int)(dVar11 * (double)*(int *)(param_1 + 0x24));
      }
      iVar5 = iVar4 + *(int *)(param_1 + 0x20) * iVar6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(iVar5 + *(int *)(DAT_8c081442 + param_1))) {
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x62:
      case 0x67:
        bVar13 = false;
        break;
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x5c:
      case 0x61:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
        bVar13 = *(int *)(iVar5 * 4 + *(int *)(DAT_8c081776 + param_1)) == 0;
        break;
      default:
        bVar13 = false;
      }
      if (bVar13) {
        iVar5 = 0x40;
        puVar8 = *(ushort **)(DAT_8c081444 + param_1);
        do {
          puVar9 = puVar8;
          if (((*puVar8 & 1) == 0) || (puVar9 = puVar8 + 10, (puVar8[10] & 1) == 0)) break;
          iVar5 = iVar5 + -1;
          puVar8 = puVar8 + 0x14;
          puVar9 = puVar8;
        } while (iVar5 != 0);
        *puVar9 = *puVar9 | 1;
        (*(code *)puVar3)();
        (*(code *)puVar3)();
        uVar2 = DAT_8c0814c6;
        *(byte *)(puVar9 + 1) = ((byte)puVar9[1] & (byte)DAT_8c0814c4 | 0x10) & (byte)uVar1 | 8;
        *(byte *)((int)puVar9 + 9) = *(byte *)((int)puVar9 + 9) & (byte)uVar2 & 0x7f;
        *(undefined1 *)(puVar9 + 4) = 0;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar9 + 8) = (int)(uVar12 >> 0x20);
        }
        else {
          *(ulonglong *)(puVar9 + 8) = uVar12;
        }
        *(ushort **)
         ((*(int *)(param_1 + 0x20) * iVar6 + iVar4) * 4 + *(int *)(DAT_8c0814c8 + param_1)) =
             puVar9;
        *(int *)((int)puVar10 + -0xc) = *(int *)((int)puVar10 + -0xc) + -1;
      }
    } while (*(int *)((int)puVar10 + -0xc) != 0);
  }
  return;
}

