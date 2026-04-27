// entry: 8c0837e0
// name: FUN_8c0837e0


int FUN_8c0837e0(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  bool bVar13;
  int local_2c;
  
  iVar10 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x20);
  local_2c = 0;
  iVar7 = 0;
  if (0 < iVar10) {
    if (iVar5 < 1) {
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar10);
    }
    else {
      do {
        iVar8 = 0;
        do {
          iVar6 = *(int *)((iVar7 * *(int *)(param_1 + 0x20) + iVar8) * 4 +
                          *(int *)(DAT_8c083902 + param_1));
          bVar3 = false;
          if (iVar6 == 0) {
            bVar13 = false;
          }
          else {
            bVar13 = *(int *)(iVar6 + 8) == 2;
          }
          if (bVar13) {
            bVar13 = false;
            iVar6 = *(int *)(param_1 + 0x20);
            iVar9 = *(int *)(DAT_8c083904 + param_1);
            iVar12 = *(int *)(DAT_8c083906 + param_1);
          }
          else {
            iVar6 = *(int *)((iVar7 * *(int *)(param_1 + 0x20) + iVar8) * 4 +
                            *(int *)(DAT_8c083a3a + param_1));
            if (iVar6 == 0) {
              bVar13 = false;
            }
            else {
              bVar2 = *(byte *)(iVar6 + 9);
              if (((bVar2 & 0x7f) == 3) || ((bVar2 & 0x7f) == 4)) {
                bVar13 = false;
              }
              else {
                bVar13 = true;
              }
            }
            if (bVar13) {
              bVar13 = false;
              iVar9 = *(int *)(DAT_8c083a3c + param_1);
              iVar12 = *(int *)(DAT_8c083a3e + param_1);
              iVar6 = *(int *)(param_1 + 0x20);
            }
            else {
              iVar6 = (iVar8 + *(int *)(param_1 + 0x20) * iVar7) * 4;
              if (*(int *)(iVar6 + *(int *)(DAT_8c083a40 + param_1)) == 0) {
                if (*(int *)(iVar6 + *(int *)(DAT_8c083a42 + param_1)) == 0) {
                  iVar4 = (*(code *)PTR_FUN_8c083a4c)(param_1,iVar8,iVar7);
                  iVar9 = *(int *)(DAT_8c083a3c + param_1);
                  iVar12 = *(int *)(DAT_8c083a3e + param_1);
                  iVar6 = *(int *)(param_1 + 0x20);
                  if ((iVar4 == 0) ||
                     (((cVar1 = *(char *)(iVar4 + 8), cVar1 != '\x03' && (cVar1 != '\x02')) &&
                      (cVar1 != '\n')))) {
                    if (*(int *)(DAT_8c083a44 + param_1) == 0) {
                      bVar13 = false;
                    }
                    else {
                      bVar13 = *(int *)((*(int *)(param_1 + 0x20) * iVar7 + iVar8) * 4 +
                                       *(int *)(DAT_8c083a44 + param_1)) != 0;
                    }
                    if (bVar13) {
                      bVar13 = false;
                    }
                    else {
                      cVar1 = *(char *)(iVar7 * *(int *)(param_1 + 0x20) + iVar8 +
                                       *(int *)(DAT_8c083aca + param_1));
                      if (((((cVar1 == '\0') || (cVar1 == '\x02')) ||
                           ((cVar1 == 'P' || ((cVar1 == 'Q' || (cVar1 == 'R')))))) || (cVar1 == 'S')
                          ) || (((((cVar1 == 'T' || (cVar1 == 'U')) || (cVar1 == 'V')) ||
                                 ((cVar1 == 'W' || (cVar1 == 'X')))) ||
                                ((cVar1 == 'Y' || ((cVar1 == ']' || (cVar1 == 'm')))))))) {
                        bVar13 = false;
                      }
                      else {
                        bVar13 = true;
                      }
                    }
                  }
                  else {
                    bVar13 = false;
                  }
                }
                else {
                  bVar13 = false;
                  iVar9 = *(int *)(DAT_8c083a3c + param_1);
                  iVar12 = *(int *)(DAT_8c083a3e + param_1);
                  iVar6 = *(int *)(param_1 + 0x20);
                }
              }
              else {
                bVar13 = false;
                iVar9 = *(int *)(DAT_8c083a3c + param_1);
                iVar12 = *(int *)(DAT_8c083a3e + param_1);
                iVar6 = *(int *)(param_1 + 0x20);
              }
            }
          }
          if ((((bVar13) && (iVar4 = iVar8 + iVar6 * iVar7, *(int *)(iVar4 * 4 + iVar9) == 0)) &&
              (cVar1 = *(char *)(iVar4 + iVar12), cVar1 != '[')) &&
             (((cVar1 != ']' && (cVar1 != 'b')) && (cVar1 != 'j')))) {
            bVar3 = true;
          }
          iVar6 = iVar8 + iVar6 * iVar7;
          if (*(char *)(iVar6 + iVar12) == '^') {
            bVar3 = false;
          }
          if (*(int *)(iVar6 * 4 + iVar9) != 0) {
            bVar3 = false;
          }
          if (bVar3) {
            iVar9 = 8;
            puVar11 = *(ushort **)(DAT_8c083908 + param_1);
            iVar6 = (int)DAT_8c08390a;
            do {
              if ((((*(byte *)((int)puVar11 + 0xb) & 1) == 0) && ((puVar11[4] & 0x14) == 0)) &&
                 (((*puVar11 & 1) != 0 &&
                  ((iVar12 = (*(code *)PTR_FUN_8c083a48)(), iVar12 == iVar8 &&
                   (iVar12 = (*(code *)PTR_FUN_8c083a48)(), iVar12 == iVar7)))))) {
                bVar13 = true;
                goto LAB_8c0838cc;
              }
              iVar9 = iVar9 + -1;
              puVar11 = (ushort *)((int)puVar11 + iVar6);
            } while (iVar9 != 0);
            bVar13 = false;
LAB_8c0838cc:
            if (bVar13) {
              bVar3 = false;
            }
          }
          if (bVar3) {
            local_2c = local_2c + 1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar5);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar10);
    }
  }
  return local_2c;
}

