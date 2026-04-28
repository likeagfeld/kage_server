// entry: 8c22e618
// name: _syIntChkDump


/* Library Function - Single Match
    _syIntChkDump
   
   Libraries: 5 - too many to list */

void _syIntChkDump(ushort param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int iVar12;
  
  puVar2 = PTR__syIntAdrChk_init_8c22e758;
  piVar1 = DAT_8c22e754;
  uVar6 = (uint)param_1;
  if ((((uVar6 != (int)DAT_8c22e73a) && (uVar6 != (int)DAT_8c22e73c)) &&
      (uVar6 != (int)DAT_8c22e73e)) && (uVar6 != (int)DAT_8c22e740)) {
    return;
  }
  *DAT_8c22e754 = param_2;
  iVar7 = (*(code *)puVar2)();
  puVar2 = PTR__syIntAdrChk_prints_8c22e75c;
  (*(code *)PTR__syIntAdrChk_prints_8c22e75c)(PTR_s_____ADDRESS_CHECKER_TRAP_____8c22e760);
  _syIntAdrChk_dumpline(PTR_s_FR0_7__8c22e764,10,8);
  _syIntAdrChk_dumpline(PTR_s_FR8_15__8c22e768,0x12,8);
  _syIntAdrChk_dumpline(PTR_s_FR0_7_B___8c22e76c,0x1a,8);
  _syIntAdrChk_dumpline(PTR_s_FR8_15_B___8c22e770,0x22,8);
  (*(code *)puVar2)(PTR_s_FPUL__8c22e774);
  puVar10 = PTR__syIntAdrChk_printh_8c22e778;
  (*(code *)PTR__syIntAdrChk_printh_8c22e778)(*(undefined4 *)((int)DAT_8c22e742 + *piVar1));
  (*(code *)puVar2)(PTR_s_FPSCR__8c22e77c);
  (*(code *)puVar10)(*(undefined4 *)((int)DAT_8c22e744 + *piVar1));
  _syIntAdrChk_dumpline(PTR_s_R0_7__8c22e780,0x2d,8);
  iVar12 = (int)DAT_8c22e746;
  uVar9 = *(undefined4 *)(*piVar1 + iVar12);
  *(undefined4 *)(*piVar1 + iVar12) = *(undefined4 *)(*piVar1 + 4);
  _syIntAdrChk_dumpline(PTR_s_R8_15__8c22e784,0x35,8);
  puVar3 = PTR_s_R0_7_B___8c22e788;
  *(undefined4 *)(*piVar1 + iVar12) = uVar9;
  _syIntAdrChk_dumpline(puVar3,2,8);
  (*(code *)puVar2)(PTR_s_MACL__8c22e78c);
  (*(code *)puVar10)(*(undefined4 *)(*piVar1 + iVar12));
  (*(code *)puVar2)(PTR_s_MACH__8c22e790);
  (*(code *)puVar10)(*(undefined4 *)((int)DAT_8c22e748 + *piVar1));
  (*(code *)puVar2)(PTR_s_VBR__8c22e794);
  (*(code *)puVar10)(*(undefined4 *)((int)DAT_8c22e74a + *piVar1));
  (*(code *)puVar2)(PTR_s_GBR__8c22e798);
  (*(code *)puVar10)(*(undefined4 *)((int)DAT_8c22e74c + *piVar1));
  (*(code *)puVar2)(PTR_s_DBR__8c22e79c);
  (*(code *)puVar10)(*(undefined4 *)*piVar1);
  (*(code *)puVar2)(PTR_s_PR__8c22e7a0);
  (*(code *)puVar10)(*(undefined4 *)((int)DAT_8c22e74e + *piVar1));
  (*(code *)puVar2)(PTR_s_PC__8c22e7a4);
  (*(code *)puVar10)(*(undefined4 *)((int)DAT_8c22e750 + *piVar1));
  (*(code *)puVar2)(PTR_s_SR__8c22e7a8);
  (*(code *)puVar10)(*(undefined4 *)((int)DAT_8c22e752 + *piVar1));
  puVar4 = PTR_DAT_8c22e8ac;
  puVar3 = PTR_DAT_8c22e7ac;
  uVar6 = 0;
  do {
    if ((int)uVar6 < 0) {
      uVar8 = ~(~uVar6 + 1 & 3) + 1;
    }
    else {
      uVar8 = uVar6 & 3;
    }
    if (uVar8 == 0) {
      (*(code *)puVar2)(puVar4);
    }
    puVar11 = (undefined4 *)(PTR_DAT_8c22e8b0 + uVar6 * 4);
    (*(code *)puVar10)(*puVar11);
    (*(code *)puVar2)(PTR_DAT_8c22e8b4);
    (*(code *)puVar10)(*(undefined4 *)*puVar11);
    (*(code *)puVar2)(puVar3);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x45);
  (*(code *)puVar2)(puVar4);
  puVar10 = PTR_s_Please__cancel_the_interrupt_fro_8c22e8b8;
  if (iVar7 != 0) {
    puVar10 = PTR_s_Please__cancel_the_interrupt_fro_8c22e8bc;
  }
  (*(code *)puVar2)(puVar10);
  puVar2 = PTR__syIntAdrChk_getchar_8c22e8c0;
  do {
    cVar5 = (*(code *)puVar2)();
  } while (cVar5 != '\r');
  *DAT_8c22e8c4 = (uint)param_1;
  (*(code *)PTR__syIntAdrChk_finish_8c22e8c8)();
  return;
}

