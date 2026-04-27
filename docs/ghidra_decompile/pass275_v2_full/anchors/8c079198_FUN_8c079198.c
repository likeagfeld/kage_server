// entry: 8c079198
// name: FUN_8c079198
// signature: undefined FUN_8c079198(void)


void FUN_8c079198(undefined4 param_1,int param_2,undefined2 param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int unaff_r8;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 extraout_fr1;
  double dVar13;
  float fVar14;
  undefined4 *puVar15;
  double dVar16;
  int iVar17;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack0000001c;
  
  iVar10 = 0;
  iVar11 = 0x18;
  uVar2 = (*(code *)PTR_FUN_8c07926c)(*(undefined4 *)(DAT_8c079266 + unaff_r8));
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44((undefined4)DAT_8c079270,extraout_fr1);
    param_1 = (undefined4)DAT_8c079270;
  }
  else {
    dVar13 = (double)CONCAT44(DAT_8c079270._4_4_,(undefined4)DAT_8c079270);
  }
  if (in_FPSCR_PR == '\0') {
    dVar16 = (double)CONCAT44((float)(int)uVar2,param_1);
  }
  else {
    dVar16 = (double)(int)uVar2;
  }
  puVar15 = DAT_8c079278;
  if (in_FPSCR_SZ == '\0') {
    dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*DAT_8c079278);
    puVar15 = DAT_8c079270._4_4_;
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
  iVar12 = *(int *)(*(int *)(DAT_8c079268 + unaff_r8) + 0x58) + 4;
  do {
    iVar3 = (*(code *)PTR_FUN_8c07927c)(*(undefined4 *)(DAT_8c079268 + unaff_r8),iVar10,0xffffffff);
    if (iVar3 != 0) {
      iVar3 = (*(code *)PTR_FUN_8c079280)(iVar10 * 6 + iVar12 + 2,4);
      if (iVar3 != 0) {
        uVar4 = (*(code *)PTR_FUN_8c079284)(*(undefined4 *)(DAT_8c079268 + unaff_r8),iVar10);
        if (uVar2 <= uVar4) goto LAB_8c079244;
        iVar3 = iVar10 * 6 + iVar12;
        *(ushort *)(iVar3 + 4) = *(ushort *)(iVar3 + 4) & (ushort)DAT_8c079288;
        iVar3 = iVar10 * 6 + iVar12;
        *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) & 0xf;
      }
      uVar4 = (*(code *)PTR_FUN_8c07928c)(*(undefined4 *)(DAT_8c079268 + unaff_r8),iVar10);
      uVar1 = *(ushort *)(param_2 + 0x54);
      if (uVar4 == uVar1) {
        iVar7 = *(int *)(DAT_8c0793c8 + unaff_r8);
        iVar11 = (*(code *)PTR_FUN_8c0793d4)((int)DAT_8c0793ca);
        iVar8 = *(int *)(iVar7 + 0x20);
        iVar3 = (*(code *)PTR_FUN_8c0793d4)(6);
        if (*(int *)((iVar8 * iVar11 + iVar3) * 4 + *(int *)(DAT_8c0793cc + iVar7)) == 0) {
          uVar5 = (*(code *)PTR_FUN_8c0794f4)(6);
          uVar6 = (*(code *)PTR_FUN_8c0794f4)((int)DAT_8c0794e6);
          (*(code *)PTR_FUN_8c0794f8)(iVar7,uVar5,uVar6,(uint)uVar1);
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
        uVar5 = (*(code *)PTR_FUN_8c0793d4)(6);
        (*(code *)PTR___bfswu_8c0793d8)(uVar5,iVar12 + iVar10 * 6,6);
        uVar5 = (*(code *)PTR_FUN_8c0793d4)((int)DAT_8c0793ca);
        (*(code *)PTR___bfswu_8c0793d8)(uVar5,(int)DAT_8c0793ca);
        (*(code *)PTR___bfswu_8c0793d8)(param_3,iVar12 + iVar10 * 6 + 2,(int)DAT_8c0793ce);
        (*(code *)PTR___bfswu_8c0793d8)((int)DAT_8c0793d0);
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

