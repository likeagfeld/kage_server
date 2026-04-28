// entry: 8c0766c0
// name: FUN_8c0766c0
// signature: undefined FUN_8c0766c0(void)


void FUN_8c0766c0(int param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_24;
  
  local_24 = 0;
  iVar13 = *(int *)(*(int *)(DAT_8c0767f2 + param_1) + 0x60);
  if (0 < *(int *)(DAT_8c0767f4 + param_1)) {
    iVar10 = (int)DAT_8c0767f6;
    do {
      puVar4 = PTR___bfswu_8c076a80;
      puVar3 = PTR_FUN_8c076a7c;
      puVar2 = PTR_FUN_8c076984;
      iVar12 = local_24 * 4 + iVar13;
      iVar11 = *(int *)((int)DAT_8c0767fa + *(int *)(DAT_8c0767f8 + param_1)) + local_24 * 0x74;
      cVar1 = *(char *)(iVar11 + 8);
      if (cVar1 == '\x04') {
        if (*(char *)(iVar11 + 10) == '\r') {
          *(undefined1 *)(iVar11 + 8) = 3;
        }
        else {
          iVar7 = (*(code *)PTR_FUN_8c076a7c)(4);
          if ((iVar7 != 4) && (iVar7 = (*(code *)puVar3)(4), iVar7 != 0)) {
            *(byte *)(iVar12 + 3) = *(byte *)(iVar12 + 3) & 0xf | 0x40;
            uVar8 = (*(code *)puVar3)(iVar11,4);
            if ((uVar8 & 1) == 0) {
              uVar8 = (*(code *)puVar3)(4);
              if ((uVar8 & 2) == 0) {
                uVar8 = (*(code *)puVar3)(4);
                if ((uVar8 & 4) == 0) {
                  uVar8 = (*(code *)puVar3)(4);
                  if ((uVar8 & 8) != 0) {
                    *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076a78 | 6;
                  }
                }
                else {
                  *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076a78 | 4;
                }
              }
              else {
                *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076a78 | 2;
              }
            }
            else {
              *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076a78;
            }
          }
        }
      }
      else if (cVar1 == '\x06') {
        iVar7 = (*(code *)PTR_FUN_8c076804)(4);
        if (iVar7 == 3) {
          uVar8 = (*(code *)PTR_FUN_8c076808)(iVar11,4);
          puVar2 = PTR_FUN_8c076808;
          iVar7 = *(int *)((uVar8 & 0xff) * 4 + param_1 + iVar10);
          if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != 1)) {
            *(byte *)(iVar12 + 3) = *(byte *)(iVar12 + 3) & 0xf | (byte)DAT_8c0767fc;
            uVar5 = (*(code *)puVar2)(4);
            (*(code *)PTR___bfswu_8c07680c)(uVar5,(int)DAT_8c0767fe);
            if (*(char *)(iVar11 + 10) == '\0') {
              *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076800 | 1;
            }
            else {
              *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076800;
            }
          }
        }
      }
      else if (cVar1 == '\a') {
        iVar7 = (*(code *)PTR_FUN_8c076984)(4);
        puVar3 = PTR___bfswu_8c076988;
        if (iVar7 == 5) {
          *(byte *)(iVar12 + 3) = *(byte *)(iVar12 + 3) & 0xf | (byte)DAT_8c076978;
          uVar5 = (*(code *)puVar2)(6);
          (*(code *)puVar3)(uVar5,6);
          uVar5 = (*(code *)puVar2)((int)DAT_8c07697a);
          (*(code *)puVar3)(uVar5,(int)DAT_8c07697a);
          iVar14 = *(int *)(DAT_8c07697c + param_1);
          iVar7 = (*(code *)puVar2)((int)DAT_8c07697a);
          iVar9 = *(int *)(iVar14 + 0x20);
          iVar6 = (*(code *)puVar2)(6);
          if (*(int *)((iVar9 * iVar7 + iVar6) * 4 + *(int *)(DAT_8c07697e + iVar14)) == iVar11) {
            (*(code *)PTR_FUN_8c07698c)(iVar14);
          }
          if (*(char *)(iVar11 + 10) == '\0') {
            *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076980 | 1;
          }
          else {
            *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076980;
          }
        }
      }
      else if (cVar1 == '\b') {
        iVar7 = (*(code *)PTR_FUN_8c076984)(4);
        puVar3 = PTR___bfswu_8c076988;
        if (iVar7 == 5) {
          *(byte *)(iVar12 + 3) = *(byte *)(iVar12 + 3) & 0xf | (byte)DAT_8c076982;
          uVar5 = (*(code *)puVar2)(6);
          (*(code *)puVar3)(uVar5,6);
          uVar5 = (*(code *)puVar2)((int)DAT_8c07697a);
          (*(code *)puVar3)(uVar5,(int)DAT_8c07697a);
          iVar14 = *(int *)(DAT_8c07697c + param_1);
          iVar7 = (*(code *)puVar2)((int)DAT_8c07697a);
          iVar9 = *(int *)(iVar14 + 0x20);
          iVar6 = (*(code *)puVar2)(6);
          if (*(int *)((iVar9 * iVar7 + iVar6) * 4 + *(int *)(DAT_8c07697e + iVar14)) == iVar11) {
            (*(code *)PTR_FUN_8c07698c)(iVar14);
          }
          if (*(char *)(iVar11 + 10) == '\0') {
            *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076980 | 1;
          }
          else {
            *(byte *)(iVar12 + 2) = *(byte *)(iVar12 + 2) & (byte)DAT_8c076980;
          }
        }
      }
      else if (((cVar1 != '\v') && (cVar1 != '\f')) && (cVar1 != '\r')) {
        (*(code *)PTR___bfswu_8c076a80)(4,iVar12 + 2);
        uVar5 = (*(code *)PTR_FUN_8c076a84)(iVar11,4);
        (*(code *)puVar4)(uVar5,(int)DAT_8c076a7a);
      }
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(DAT_8c0767f4 + param_1));
  }
  return;
}

