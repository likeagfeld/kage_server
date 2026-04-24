// entry: 8c079298
// name: FUN_8c079298
// signature: undefined FUN_8c079298(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c079298(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar10;
  int unaff_r11;
  int iVar11;
  uint unaff_r12;
  int iVar12;
  undefined4 extraout_fr1;
  double dVar13;
  float fVar14;
  undefined4 *puVar15;
  double dVar16;
  int iVar17;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  uint uStack0000000c;
  undefined4 uStack0000001c;
  
  uVar6 = unaff_r12 & 0xffff;
  uStack0000000c =
       (int)*(short *)(unaff_r11 + uVar6 * 0x1e + 2) + (int)*(short *)(unaff_r10 + uVar6 * 0x1e + 2)
       + (int)*(short *)(unaff_r9 + uVar6 * 0x1e + 2);
  if (10 < (int)uStack0000000c) {
    uStack0000000c = 10;
  }
  iVar10 = 0;
  iVar11 = 0x18;
  uVar6 = (*_DAT_8c07926c)(*(undefined4 *)(_DAT_8c079266 + unaff_r8));
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44(_DAT_8c079270,extraout_fr1);
    param_1 = _DAT_8c079270;
  }
  else {
    dVar13 = (double)CONCAT44(_DAT_8c079274,_DAT_8c079270);
  }
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44((float)(int)uVar6,param_1);
  }
  else {
    dVar16 = (double)(int)uVar6;
  }
  puVar15 = _DAT_8c079278;
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*_DAT_8c079278);
    puVar15 = _DAT_8c079274;
  }
  if (in_FPSCR_PR == '\0') {
    fVar14 = (float)((ulonglong)dVar13 >> 0x20) / SUB84(dVar16,0);
  }
  else {
    fVar14 = (float)((ulonglong)(dVar13 / dVar16) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    iVar17 = (int)((fVar14 + (float)puVar15) * SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20))
    ;
  }
  else {
    iVar17 = (int)dVar16;
  }
  iVar12 = *(int *)(*(int *)(_DAT_8c079268 + unaff_r8) + 0x58) + 4;
  do {
    iVar2 = (*(code *)PTR_FUN_8c07927c)(*(undefined4 *)(_DAT_8c079268 + unaff_r8),iVar10,0xffffffff)
    ;
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_FUN_8c079280)(iVar10 * 6 + iVar12 + 2,4);
      if (iVar2 != 0) {
        uVar3 = (*(code *)PTR_FUN_8c079284)(*(undefined4 *)(_DAT_8c079268 + unaff_r8),iVar10);
        if (uVar6 <= uVar3) goto LAB_8c079244;
        iVar2 = iVar10 * 6 + iVar12;
        *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) & (ushort)_DAT_8c079288;
        iVar2 = iVar10 * 6 + iVar12;
        *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) & 0xf;
      }
      uVar3 = (*_DAT_8c07928c)(*(undefined4 *)(_DAT_8c079268 + unaff_r8),iVar10);
      uVar1 = *(ushort *)(param_2 + 0x54);
      if (uVar3 == uVar1) {
        iVar7 = *(int *)(_DAT_8c0793c8 + unaff_r8);
        iVar11 = (*(code *)PTR_FUN_8c0793d4)((int)DAT_8c0793ca);
        iVar8 = *(int *)(iVar7 + 0x20);
        iVar2 = (*(code *)PTR_FUN_8c0793d4)(6);
        if (*(int *)((iVar8 * iVar11 + iVar2) * 4 + *(int *)(_DAT_8c0793cc + iVar7)) == 0) {
          uVar4 = (*(code *)PTR_FUN_8c0794f4)(6);
          uVar5 = (*(code *)PTR_FUN_8c0794f4)((int)DAT_8c0794e6);
          (*(code *)PTR_FUN_8c0794f8)(iVar7,uVar4,uVar5,(uint)uVar1);
          pcVar9 = PTR_DAT_8c0794fc + DAT_8c0794e8;
          if (*pcVar9 == '\0') {
            uStack0000001c = *DAT_8c07950c;
          }
          else {
            uStack0000001c = *DAT_8c079500;
          }
          (*(code *)PTR_FUN_8c079504)(pcVar9[1]);
          (*(code *)PTR_FUN_8c079508)(uStack0000001c,pcVar9[2],pcVar9[3],0);
          FUN_8c079324();
          return;
        }
        iVar11 = iVar12 + iVar10 * 6;
        *(byte *)(iVar11 + 3) = *(byte *)(iVar11 + 3) & 0xf | 0x40;
        uVar4 = (*(code *)PTR_FUN_8c0793d4)(6);
        (*(code *)PTR_FUN_8c0793d8)(uVar4,iVar12 + iVar10 * 6,6);
        uVar4 = (*(code *)PTR_FUN_8c0793d4)((int)DAT_8c0793ca);
        (*(code *)PTR_FUN_8c0793d8)(uVar4,(int)DAT_8c0793ca);
        (*(code *)PTR_FUN_8c0793d8)
                  (uStack0000000c & 0xffff,iVar12 + iVar10 * 6 + 2,(int)DAT_8c0793ce);
        (*(code *)PTR_FUN_8c0793d8)((int)DAT_8c0793d0);
        (*(code *)PTR_FUN_8c0793dc)(*(undefined4 *)(DAT_8c0793d2 + unaff_r8),iVar10,iVar17);
        FUN_8c07924a();
        return;
      }
    }
LAB_8c079244:
    iVar11 = iVar11 + -1;
    iVar10 = iVar10 + 1;
    if (iVar11 == 0) {
      return;
    }
  } while( true );
}

