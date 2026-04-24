// entry: 8c078204
// name: FUN_8c078204
// signature: undefined FUN_8c078204(void)


/* WARNING: Removing unreachable block (ram,0x8c0780e0) */
/* WARNING: Removing unreachable block (ram,0x8c07855a) */
/* WARNING: Removing unreachable block (ram,0x8c078302) */
/* WARNING: Removing unreachable block (ram,0x8c07837a) */
/* WARNING: Removing unreachable block (ram,0x8c07823c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c078204(double param_1,double param_2,undefined4 param_3,uint param_4,undefined *param_5)

{
  char cVar1;
  double dVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double in_dr14;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c07831c);
  (*(code *)PTR_LAB_8c078330)(iVar8);
  iVar8 = *(int *)(*(int *)(_DAT_8c07831e + iVar8) + 0x44);
  if (iVar8 == 0x15) {
    (*(code *)PTR_LAB_8c078334)(*(undefined4 *)((int)&param_3 + (int)_DAT_8c07831c));
    param_5 = PTR_s______Abort_Game_Play______8c07833c;
    if (*(int *)PTR_DAT_8c078338 != 0) {
      (*(code *)PTR_FUN_8c078340)(&stack0x0000000c,&stack0x0000000c);
      (*(code *)PTR_FUN_8c078344)(*(undefined4 *)PTR_DAT_8c078338,&stack0x0000000c);
    }
    iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c07831c);
    *(undefined4 *)(_FUN_8c078320 + iVar8) = 1;
    (*(code *)PTR_FUN_8c078348)(iVar8 + 0x10,0x1e);
  }
  else {
    if (iVar8 != 0x16) {
      if (iVar8 != 0x19) {
        iVar8 = (*(code *)PTR_DAT_8c07863c)(*(undefined4 *)((int)&param_3 + (int)_DAT_8c07862c));
        if ((iVar8 != 0) &&
           (iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c07862c), (*(code *)PTR_DAT_8c078640)(iVar8)
           , *(char *)(iVar8 + 0x30) == '\x01')) {
          param_5 = PTR_s______Hyper_Simulator_checked_Gam_8c078648;
          if (*(int *)PTR_DAT_8c078644 != 0) {
            (*(code *)PTR_FUN_8c07864c)(&stack0x0000000c,&stack0x0000000c);
            (*(code *)PTR_FUN_8c078650)(*(undefined4 *)PTR_DAT_8c078644,&stack0x0000000c);
          }
          goto LAB_8c078354;
        }
        goto LAB_8c0780f6;
      }
      *(undefined4 *)((int)_DAT_8c078060 + *(int *)((int)&param_3 + (int)_DAT_8c078058)) = 1;
    }
    iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c078058);
    uVar3 = (*(code *)PTR_DAT_8c078074)(iVar8);
    *(undefined4 *)((int)&param_3 + (int)_DAT_8c07805a) = uVar3;
    cVar1 = *(char *)(iVar8 + 0x30);
    if (cVar1 == '\x01') {
      if (*(int *)((int)&param_3 + (int)_DAT_8c078322) != 0) goto LAB_8c078354;
      iVar8 = *(int *)((int)_DAT_8c078324 +
                      *(int *)((int)_DAT_8c07831e + *(int *)((int)&param_3 + (int)_DAT_8c07831c)));
      *(int *)((int)&param_3 + (int)_DAT_8c078326) = iVar8;
      if ((iVar8 < 0) || (7 < iVar8)) {
        iVar8 = 0;
        *(undefined4 *)((int)&param_3 + (int)_DAT_8c078328) = 0;
        in_dr14 = (double)((ulonglong)in_dr14 & 0xffffffff);
        iVar6 = *(int *)((int)&param_3 + (int)_DAT_8c07831c);
        *(int *)((int)&param_3 + (int)_DAT_8c07832c) = iVar6 + _DAT_8c07832a;
        iVar9 = 8;
        do {
          if (*(char *)(iVar6 + 0x3e + iVar8) != '\x03') {
            dVar10 = in_dr14;
            if (in_FPSCR_SZ == '\0') {
              dVar10 = (double)((ulonglong)param_1 & 0xffffffff);
            }
            param_1 = dVar10;
            (*(code *)PTR_FUN_8c078348)
                      (param_1,*(int *)(*(int *)((int)&param_3 + (int)_DAT_8c07832c) + iVar8 * 4) +
                               0x10,0xd);
          }
          iVar9 = iVar9 + -1;
          iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c078328) + 1;
          *(int *)((int)&param_3 + (int)_DAT_8c078328) = iVar8;
        } while (iVar9 != 0);
      }
      else {
        iVar6 = 0;
        *(undefined4 *)((int)&param_3 + (int)_DAT_8c0784f2) = 0;
        *(int *)((int)&param_3 + (int)_DAT_8c0784f4) = iVar8;
        if (7 < iVar8) {
          *(undefined4 *)((int)&param_3 + (int)_DAT_8c0784f4) = 8;
        }
        if (0 < *(int *)((int)&param_3 + (int)_DAT_8c0784f4)) {
          in_dr14 = (double)((ulonglong)in_dr14 & 0xffffffff);
          *(int *)((int)&param_3 + (int)_DAT_8c0784f8) =
               *(int *)((int)&param_3 + (int)_DAT_8c0784f6) + 0x3e;
          *(int *)((int)&param_3 + (int)_DAT_8c0784fc) =
               *(int *)((int)&param_3 + (int)_DAT_8c0784f6) + (int)_DAT_8c0784fa;
          do {
            if (*(char *)(*(int *)((int)&param_3 + (int)_DAT_8c0784f8) + iVar6) != '\x03') {
              dVar10 = in_dr14;
              if (in_FPSCR_SZ == '\0') {
                dVar10 = (double)((ulonglong)param_1 & 0xffffffff);
              }
              param_1 = dVar10;
              (*_DAT_8c078508)(param_1,*(int *)(*(int *)((int)&param_3 + (int)_DAT_8c0784fc) +
                                               iVar6 * 4) + 0x10,4);
            }
            iVar6 = *(int *)((int)&param_3 + (int)_DAT_8c0784f2) + 1;
            *(int *)((int)&param_3 + (int)_DAT_8c0784f2) = iVar6;
          } while (iVar6 < *(int *)((int)&param_3 + (int)_DAT_8c0784f4));
        }
        uVar4 = SUB84(in_dr14,0);
        iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c0784fe);
        if (((-1 < iVar8) && (iVar8 < 8)) &&
           (*(char *)(iVar8 + *(int *)((int)&param_3 + (int)_DAT_8c0784f6) + 0x3e) != '\x03')) {
          iVar6 = *(int *)((int)&param_3 + (int)_DAT_8c07862c) + (int)_DAT_8c078630;
          *(int *)((int)&param_3 + (int)_DAT_8c078632) = iVar6;
          dVar10 = (double)((ulonglong)in_dr14 & 0xffffffff);
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)((ulonglong)param_1 & 0xffffffff);
          }
          uVar7 = SUB84(dVar10,0);
          param_1 = (double)((ulonglong)in_dr14 & 0xffffffff);
          (*(code *)PTR_FUN_8c078654)(dVar10,*(int *)(iVar8 * 4 + iVar6) + 0x10,0xc);
          uVar4 = SUB84(param_1,0);
          if (in_FPSCR_SZ == '\0') {
            param_1 = (double)(ulonglong)uVar7;
          }
          (*(code *)PTR_FUN_8c07865c)
                    (param_1,*(undefined4 *)
                              (*(int *)((int)&param_3 + (int)_DAT_8c078634) * 4 +
                              *(int *)((int)&param_3 + (int)_DAT_8c078632)));
        }
        iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c0784fe) + 1;
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        *(int *)((int)&param_3 + (int)_DAT_8c0784f2) = iVar8;
        if (iVar8 < 8) {
          dVar10 = (double)(ulonglong)uVar4;
          *(int *)((int)&param_3 + (int)_DAT_8c078500) =
               *(int *)((int)&param_3 + (int)_DAT_8c0784f6) + 0x3e;
          *(int *)((int)&param_3 + (int)_DAT_8c078502) =
               *(int *)((int)&param_3 + (int)_DAT_8c0784f6) + (int)_DAT_8c0784fa;
          do {
            if (*(char *)(*(int *)((int)&param_3 + (int)_DAT_8c078500) + iVar8) != '\x03') {
              dVar2 = dVar10;
              if (in_FPSCR_SZ == '\0') {
                dVar2 = (double)((ulonglong)param_1 & 0xffffffff);
              }
              param_1 = dVar2;
              (*(code *)PTR_FUN_8c078654)
                        (param_1,*(int *)(*(int *)((int)&param_3 + (int)_DAT_8c07862e) + iVar8 * 4)
                                 + 0x10,4);
            }
            iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c0784f2) + 1;
            *(int *)((int)&param_3 + (int)_DAT_8c0784f2) = iVar8;
          } while (iVar8 < 8);
        }
      }
      (*(code *)PTR_LAB_8c07834c)
                (*(undefined4 *)((int)_DAT_8c07832e + *(int *)((int)&param_3 + (int)_DAT_8c07831c)),
                 *(undefined4 *)((int)&param_3 + (int)_DAT_8c078326));
      param_5 = PTR_s______Hyper_Rule_Update_and_Game_E_8c078350;
      if (*(int *)PTR_DAT_8c078338 != 0) {
        (*(code *)PTR_FUN_8c078340)(&stack0x0000000c,&stack0x0000000c);
        (*(code *)PTR_FUN_8c078344)(*(undefined4 *)PTR_DAT_8c078338,&stack0x0000000c);
      }
    }
    else if (cVar1 == '\0') {
      iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c078058);
      uVar7 = *(uint *)((int)_DAT_8c078064 + *(int *)(_DAT_8c07805c + iVar8));
      uVar4 = 0;
      *(undefined4 *)((int)&param_3 + (int)_DAT_8c078066) = 0;
      *(int *)((int)&param_3 + (int)_DAT_8c078068) = iVar8 + _DAT_8c078062;
      iVar6 = 8;
      do {
        if (*(char *)(iVar8 + 0x3e + uVar4) != '\x03') {
          if ((int)uVar4 < 0) {
            uVar5 = 1 >> (~uVar4 & 0x1f) + 1;
          }
          else {
            uVar5 = 1 << (uVar4 & 0x1f);
          }
          if (((((uVar7 & uVar5) != 0) &&
               (iVar9 = *(int *)(uVar4 * 4 + *(int *)((int)&param_3 + (int)_DAT_8c078068)),
               iVar9 != 0)) && (*(int *)(iVar9 + 0x24) == 1)) &&
             ((*(byte *)(_DAT_8c0781c0 + iVar9) & 4) == 0)) {
            if (in_FPSCR_SZ == '\0') {
              param_1 = (double)CONCAT44(_DAT_8c078510,SUB84(param_1,0));
              param_2 = (double)CONCAT44(*(undefined4 *)_DAT_8c07850c,SUB84(param_2,0));
            }
            else {
              param_1 = (double)CONCAT44(uRam8c078514,_DAT_8c078510);
              param_2 = *_DAT_8c07850c;
            }
            if (in_FPSCR_PR == '\0') {
              param_1 = (double)CONCAT44((float)((ulonglong)param_1 >> 0x20) /
                                         (float)((ulonglong)param_2 >> 0x20),SUB84(param_1,0));
            }
            else {
              param_1 = param_1 / param_2;
            }
            (**(code **)((int)_DAT_8c078506 + *(int *)(iVar9 + 0x28)))
                      (param_1,iVar9 + *(int *)((int)_DAT_8c078504 + *(int *)(iVar9 + 0x28)),0xb);
          }
        }
        iVar6 = iVar6 + -1;
        uVar4 = *(int *)((int)&param_3 + (int)_DAT_8c0781c2) + 1;
        *(uint *)((int)&param_3 + (int)_DAT_8c0781c2) = uVar4;
      } while (iVar6 != 0);
      iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c0781c4);
      param_3 = _DAT_8c0781d4;
      param_4 = uVar7;
      (*_DAT_8c0781d8)(iVar8);
      (*_DAT_8c0781dc)(*(undefined4 *)(_DAT_8c0781c6 + iVar8),uVar7);
      (*(code *)PTR_FUN_8c0781e0)(*(undefined4 *)(_DAT_8c0781c6 + iVar8));
      param_5 = PTR_s______Normal_Rule_Update_History_a_8c0781e8;
      if (*(int *)PTR_DAT_8c0781e4 != 0) {
        (*(code *)PTR_FUN_8c0781ec)(&stack0x0000000c,&stack0x0000000c);
        (*(code *)PTR_FUN_8c0781f0)(*(undefined4 *)PTR_DAT_8c0781e4,&stack0x0000000c);
      }
    }
  }
LAB_8c0780f6:
  if (*(int *)((int)&param_3 + (int)_DAT_8c0781c8) == 0) {
    return;
  }
LAB_8c078354:
  iVar8 = *(int *)((int)&param_3 + (int)_DAT_8c0783d6) + 0x10;
  (*(code *)PTR_LAB_8c0783e0)(*(int *)((int)&param_3 + (int)_DAT_8c0783d6));
  param_5 = PTR_s______End_Game_Play______8c0783e8;
  if (*(int *)PTR_DAT_8c0783e4 != 0) {
    (*(code *)PTR_FUN_8c0783ec)(&stack0x0000000c,&stack0x0000000c);
    (*(code *)PTR_FUN_8c0783f0)(*(undefined4 *)PTR_DAT_8c0783e4,&stack0x0000000c);
  }
  *(undefined4 *)
   (*(int *)((int)_DAT_8c0783d8 + *(int *)((int)&param_3 + (int)_DAT_8c0783d6)) + 0x48) = 0x10;
  *(byte *)((int)_DAT_8c0783da + *(int *)((int)&param_3 + (int)_DAT_8c0783d6)) =
       *(byte *)((int)_DAT_8c0783da + *(int *)((int)&param_3 + (int)_DAT_8c0783d6)) &
       (byte)_DAT_8c0783dc | 0x40;
  if (*(char *)(*(int *)((int)&param_3 + (int)_DAT_8c0783d6) + 0x30) == '\x01') {
    (*(code *)PTR_FUN_8c078654)(iVar8,0x10);
  }
  else {
    (*(code *)PTR_FUN_8c0783f4)(iVar8,0x12);
  }
                    /* WARNING: Read-only address (ram,0x8c078514) is written */
  return;
}

