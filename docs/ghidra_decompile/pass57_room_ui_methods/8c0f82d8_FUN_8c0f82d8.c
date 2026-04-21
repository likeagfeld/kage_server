// entry: 8c0f82d8
// name: FUN_8c0f82d8
// signature: undefined FUN_8c0f82d8(void)


/* WARNING: Removing unreachable block (ram,0x8c0f835c) */
/* WARNING: Removing unreachable block (ram,0x8c0f8354) */
/* WARNING: Removing unreachable block (ram,0x8c0f834c) */
/* WARNING: Removing unreachable block (ram,0x8c0f8344) */
/* WARNING: Removing unreachable block (ram,0x8c0f833c) */
/* WARNING: Removing unreachable block (ram,0x8c0f8334) */
/* WARNING: Removing unreachable block (ram,0x8c0f832c) */
/* WARNING: Removing unreachable block (ram,0x8c0f8324) */
/* WARNING: Removing unreachable block (ram,0x8c0f831c) */
/* WARNING: Removing unreachable block (ram,0x8c0f8314) */
/* WARNING: Removing unreachable block (ram,0x8c0f830c) */
/* WARNING: Removing unreachable block (ram,0x8c0f8304) */
/* WARNING: Removing unreachable block (ram,0x8c0f82fc) */
/* WARNING: Removing unreachable block (ram,0x8c0f82f4) */
/* WARNING: Removing unreachable block (ram,0x8c0f82ec) */
/* WARNING: Removing unreachable block (ram,0x8c0f82e4) */
/* WARNING: Removing unreachable block (ram,0x8c0f82e8) */
/* WARNING: Removing unreachable block (ram,0x8c0f82f0) */
/* WARNING: Removing unreachable block (ram,0x8c0f82f8) */
/* WARNING: Removing unreachable block (ram,0x8c0f8300) */
/* WARNING: Removing unreachable block (ram,0x8c0f8308) */
/* WARNING: Removing unreachable block (ram,0x8c0f8310) */
/* WARNING: Removing unreachable block (ram,0x8c0f8318) */
/* WARNING: Removing unreachable block (ram,0x8c0f8320) */
/* WARNING: Removing unreachable block (ram,0x8c0f8328) */
/* WARNING: Removing unreachable block (ram,0x8c0f8330) */
/* WARNING: Removing unreachable block (ram,0x8c0f8338) */
/* WARNING: Removing unreachable block (ram,0x8c0f8340) */
/* WARNING: Removing unreachable block (ram,0x8c0f8348) */
/* WARNING: Removing unreachable block (ram,0x8c0f8350) */
/* WARNING: Removing unreachable block (ram,0x8c0f8358) */
/* WARNING: Removing unreachable block (ram,0x8c0f8360) */

uint FUN_8c0f82d8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int in_r0;
  uint in_r1;
  bool bVar5;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar6;
  
  if (in_r0 == 0) {
    *DAT_8c0f8378 = DAT_8c0f837c;
    return 0;
  }
  uVar3 = (uint)((in_r1 & 0x80000000) != 0);
  uVar1 = uVar3 - in_r0;
  bVar4 = uVar3 < uVar1;
  uVar3 = in_r1 << 2;
  bVar5 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 * 2 | (uint)((in_r1 & 0x40000000) != 0);
  if (bVar4) {
    if (bVar4) {
      uVar2 = uVar1 + in_r0;
      bVar6 = uVar2 < uVar1;
      if (!bVar5) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar6 = uVar1 < uVar2;
      if (bVar5) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar6 = uVar1 < uVar2;
    if (!bVar5) {
      bVar6 = !bVar6;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar6) {
    if (bVar6) {
      uVar2 = uVar1 + in_r0;
      bVar7 = uVar2 < uVar1;
      if (!bVar5) {
        bVar7 = !bVar7;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar7 = uVar1 < uVar2;
      if (bVar5) {
        bVar7 = !bVar7;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar7 = uVar1 < uVar2;
    if (!bVar5) {
      bVar7 = !bVar7;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000000) != 0);
  if (bVar7) {
    if (bVar7) {
      uVar2 = uVar1 + in_r0;
      bVar8 = uVar2 < uVar1;
      if (!bVar5) {
        bVar8 = !bVar8;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar8 = uVar1 < uVar2;
      if (bVar5) {
        bVar8 = !bVar8;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar8 = uVar1 < uVar2;
    if (!bVar5) {
      bVar8 = !bVar8;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000000) != 0);
  if (bVar8) {
    if (bVar8) {
      uVar2 = uVar1 + in_r0;
      bVar9 = uVar2 < uVar1;
      if (!bVar5) {
        bVar9 = !bVar9;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar9 = uVar1 < uVar2;
      if (bVar5) {
        bVar9 = !bVar9;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar9 = uVar1 < uVar2;
    if (!bVar5) {
      bVar9 = !bVar9;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000000) != 0);
  if (bVar9) {
    if (bVar9) {
      uVar2 = uVar1 + in_r0;
      bVar10 = uVar2 < uVar1;
      if (!bVar5) {
        bVar10 = !bVar10;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar10 = uVar1 < uVar2;
      if (bVar5) {
        bVar10 = !bVar10;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar10 = uVar1 < uVar2;
    if (!bVar5) {
      bVar10 = !bVar10;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000000) != 0);
  if (bVar10) {
    if (bVar10) {
      uVar2 = uVar1 + in_r0;
      bVar11 = uVar2 < uVar1;
      if (!bVar5) {
        bVar11 = !bVar11;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar11 = uVar1 < uVar2;
      if (bVar5) {
        bVar11 = !bVar11;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar11 = uVar1 < uVar2;
    if (!bVar5) {
      bVar11 = !bVar11;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000000) != 0);
  if (bVar11) {
    if (bVar11) {
      uVar2 = uVar1 + in_r0;
      bVar12 = uVar2 < uVar1;
      if (!bVar5) {
        bVar12 = !bVar12;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar12 = uVar1 < uVar2;
      if (bVar5) {
        bVar12 = !bVar12;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar12 = uVar1 < uVar2;
    if (!bVar5) {
      bVar12 = !bVar12;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000000) != 0);
  if (bVar12) {
    if (bVar12) {
      uVar2 = uVar1 + in_r0;
      bVar13 = uVar2 < uVar1;
      if (!bVar5) {
        bVar13 = !bVar13;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar13 = uVar1 < uVar2;
      if (bVar5) {
        bVar13 = !bVar13;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar13 = uVar1 < uVar2;
    if (!bVar5) {
      bVar13 = !bVar13;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000000) != 0);
  if (bVar13) {
    if (bVar13) {
      uVar2 = uVar1 + in_r0;
      bVar14 = uVar2 < uVar1;
      if (!bVar5) {
        bVar14 = !bVar14;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar14 = uVar1 < uVar2;
      if (bVar5) {
        bVar14 = !bVar14;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar14 = uVar1 < uVar2;
    if (!bVar5) {
      bVar14 = !bVar14;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800000) != 0);
  if (bVar14) {
    if (bVar14) {
      uVar2 = uVar1 + in_r0;
      bVar15 = uVar2 < uVar1;
      if (!bVar5) {
        bVar15 = !bVar15;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar15 = uVar1 < uVar2;
      if (bVar5) {
        bVar15 = !bVar15;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar15 = uVar1 < uVar2;
    if (!bVar5) {
      bVar15 = !bVar15;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400000) != 0);
  if (bVar15) {
    if (bVar15) {
      uVar2 = uVar1 + in_r0;
      bVar16 = uVar2 < uVar1;
      if (!bVar5) {
        bVar16 = !bVar16;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar16 = uVar1 < uVar2;
      if (bVar5) {
        bVar16 = !bVar16;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar16 = uVar1 < uVar2;
    if (!bVar5) {
      bVar16 = !bVar16;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200000) != 0);
  if (bVar16) {
    if (bVar16) {
      uVar2 = uVar1 + in_r0;
      bVar17 = uVar2 < uVar1;
      if (!bVar5) {
        bVar17 = !bVar17;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar17 = uVar1 < uVar2;
      if (bVar5) {
        bVar17 = !bVar17;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar17 = uVar1 < uVar2;
    if (!bVar5) {
      bVar17 = !bVar17;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100000) != 0);
  if (bVar17) {
    if (bVar17) {
      uVar2 = uVar1 + in_r0;
      bVar18 = uVar2 < uVar1;
      if (!bVar5) {
        bVar18 = !bVar18;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar18 = uVar1 < uVar2;
      if (bVar5) {
        bVar18 = !bVar18;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar18 = uVar1 < uVar2;
    if (!bVar5) {
      bVar18 = !bVar18;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000) != 0);
  if (bVar18) {
    if (bVar18) {
      uVar2 = uVar1 + in_r0;
      bVar19 = uVar2 < uVar1;
      if (!bVar5) {
        bVar19 = !bVar19;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar19 = uVar1 < uVar2;
      if (bVar5) {
        bVar19 = !bVar19;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar19 = uVar1 < uVar2;
    if (!bVar5) {
      bVar19 = !bVar19;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000) != 0);
  if (bVar19) {
    if (bVar19) {
      uVar2 = uVar1 + in_r0;
      bVar20 = uVar2 < uVar1;
      if (!bVar5) {
        bVar20 = !bVar20;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar20 = uVar1 < uVar2;
      if (bVar5) {
        bVar20 = !bVar20;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar20 = uVar1 < uVar2;
    if (!bVar5) {
      bVar20 = !bVar20;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000) != 0);
  if (bVar20) {
    if (bVar20) {
      uVar2 = uVar1 + in_r0;
      bVar21 = uVar2 < uVar1;
      if (!bVar5) {
        bVar21 = !bVar21;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar21 = uVar1 < uVar2;
      if (bVar5) {
        bVar21 = !bVar21;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar21 = uVar1 < uVar2;
    if (!bVar5) {
      bVar21 = !bVar21;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000) != 0);
  if (bVar21) {
    if (bVar21) {
      uVar2 = uVar1 + in_r0;
      bVar22 = uVar2 < uVar1;
      if (!bVar5) {
        bVar22 = !bVar22;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar22 = uVar1 < uVar2;
      if (bVar5) {
        bVar22 = !bVar22;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar22 = uVar1 < uVar2;
    if (!bVar5) {
      bVar22 = !bVar22;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000) != 0);
  if (bVar22) {
    if (bVar22) {
      uVar2 = uVar1 + in_r0;
      bVar23 = uVar2 < uVar1;
      if (!bVar5) {
        bVar23 = !bVar23;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar23 = uVar1 < uVar2;
      if (bVar5) {
        bVar23 = !bVar23;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar23 = uVar1 < uVar2;
    if (!bVar5) {
      bVar23 = !bVar23;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000) != 0);
  if (bVar23) {
    if (bVar23) {
      uVar2 = uVar1 + in_r0;
      bVar24 = uVar2 < uVar1;
      if (!bVar5) {
        bVar24 = !bVar24;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar24 = uVar1 < uVar2;
      if (bVar5) {
        bVar24 = !bVar24;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar24 = uVar1 < uVar2;
    if (!bVar5) {
      bVar24 = !bVar24;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000) != 0);
  if (bVar24) {
    if (bVar24) {
      uVar2 = uVar1 + in_r0;
      bVar25 = uVar2 < uVar1;
      if (!bVar5) {
        bVar25 = !bVar25;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar25 = uVar1 < uVar2;
      if (bVar5) {
        bVar25 = !bVar25;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar25 = uVar1 < uVar2;
    if (!bVar5) {
      bVar25 = !bVar25;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000) != 0);
  if (bVar25) {
    if (bVar25) {
      uVar2 = uVar1 + in_r0;
      bVar26 = uVar2 < uVar1;
      if (!bVar5) {
        bVar26 = !bVar26;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar26 = uVar1 < uVar2;
      if (bVar5) {
        bVar26 = !bVar26;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar26 = uVar1 < uVar2;
    if (!bVar5) {
      bVar26 = !bVar26;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800) != 0);
  if (bVar26) {
    if (bVar26) {
      uVar2 = uVar1 + in_r0;
      bVar27 = uVar2 < uVar1;
      if (!bVar5) {
        bVar27 = !bVar27;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar27 = uVar1 < uVar2;
      if (bVar5) {
        bVar27 = !bVar27;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar27 = uVar1 < uVar2;
    if (!bVar5) {
      bVar27 = !bVar27;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400) != 0);
  if (bVar27) {
    if (bVar27) {
      uVar2 = uVar1 + in_r0;
      bVar28 = uVar2 < uVar1;
      if (!bVar5) {
        bVar28 = !bVar28;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar28 = uVar1 < uVar2;
      if (bVar5) {
        bVar28 = !bVar28;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar28 = uVar1 < uVar2;
    if (!bVar5) {
      bVar28 = !bVar28;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200) != 0);
  if (bVar28) {
    if (bVar28) {
      uVar2 = uVar1 + in_r0;
      bVar29 = uVar2 < uVar1;
      if (!bVar5) {
        bVar29 = !bVar29;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar29 = uVar1 < uVar2;
      if (bVar5) {
        bVar29 = !bVar29;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar29 = uVar1 < uVar2;
    if (!bVar5) {
      bVar29 = !bVar29;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100) != 0);
  if (bVar29) {
    if (bVar29) {
      uVar2 = uVar1 + in_r0;
      bVar30 = uVar2 < uVar1;
      if (!bVar5) {
        bVar30 = !bVar30;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar30 = uVar1 < uVar2;
      if (bVar5) {
        bVar30 = !bVar30;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar30 = uVar1 < uVar2;
    if (!bVar5) {
      bVar30 = !bVar30;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80) != 0);
  if (bVar30) {
    if (bVar30) {
      uVar2 = uVar1 + in_r0;
      bVar31 = uVar2 < uVar1;
      if (!bVar5) {
        bVar31 = !bVar31;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar31 = uVar1 < uVar2;
      if (bVar5) {
        bVar31 = !bVar31;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar31 = uVar1 < uVar2;
    if (!bVar5) {
      bVar31 = !bVar31;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40) != 0);
  if (bVar31) {
    if (bVar31) {
      uVar2 = uVar1 + in_r0;
      bVar32 = uVar2 < uVar1;
      if (!bVar5) {
        bVar32 = !bVar32;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar32 = uVar1 < uVar2;
      if (bVar5) {
        bVar32 = !bVar32;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar32 = uVar1 < uVar2;
    if (!bVar5) {
      bVar32 = !bVar32;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20) != 0);
  if (bVar32) {
    if (bVar32) {
      uVar2 = uVar1 + in_r0;
      bVar33 = uVar2 < uVar1;
      if (!bVar5) {
        bVar33 = !bVar33;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar33 = uVar1 < uVar2;
      if (bVar5) {
        bVar33 = !bVar33;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar33 = uVar1 < uVar2;
    if (!bVar5) {
      bVar33 = !bVar33;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10) != 0);
  if (bVar33) {
    if (bVar33) {
      uVar2 = uVar1 + in_r0;
      bVar34 = uVar2 < uVar1;
      if (!bVar5) {
        bVar34 = !bVar34;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar34 = uVar1 < uVar2;
      if (bVar5) {
        bVar34 = !bVar34;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar34 = uVar1 < uVar2;
    if (!bVar5) {
      bVar34 = !bVar34;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 8) != 0);
  if (bVar34) {
    if (bVar34) {
      uVar2 = uVar1 + in_r0;
      bVar35 = uVar2 < uVar1;
      if (!bVar5) {
        bVar35 = !bVar35;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar35 = uVar1 < uVar2;
      if (bVar5) {
        bVar35 = !bVar35;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar35 = uVar1 < uVar2;
    if (!bVar5) {
      bVar35 = !bVar35;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 4) != 0);
  if (bVar35) {
    if (bVar35) {
      bVar36 = uVar1 + in_r0 < uVar1;
      if (!bVar5) {
        bVar36 = !bVar36;
      }
    }
    else {
      bVar36 = uVar1 < uVar1 - in_r0;
      if (bVar5) {
        bVar36 = !bVar36;
      }
    }
  }
  else {
    bVar36 = uVar1 < uVar1 - in_r0;
    if (!bVar5) {
      bVar36 = !bVar36;
    }
  }
  return (((((((((((((((((((((((((((((((uint)!bVar4 << 1 | (uint)!bVar6) << 1 | (uint)!bVar7) << 1 |
                                    (uint)!bVar8) << 1 | (uint)!bVar9) << 1 | (uint)!bVar10) << 1 |
                                 (uint)!bVar11) << 1 | (uint)!bVar12) << 1 | (uint)!bVar13) << 1 |
                              (uint)!bVar14) << 1 | (uint)!bVar15) << 1 | (uint)!bVar16) << 1 |
                           (uint)!bVar17) << 1 | (uint)!bVar18) << 1 | (uint)!bVar19) << 1 |
                        (uint)!bVar20) << 1 | (uint)!bVar21) << 1 | (uint)!bVar22) << 1 |
                     (uint)!bVar23) << 1 | (uint)!bVar24) << 1 | (uint)!bVar25) << 1 | (uint)!bVar26
                  ) << 1 | (uint)!bVar27) << 1 | (uint)!bVar28) << 1 | (uint)!bVar29) << 1 |
              (uint)!bVar30) << 1 | (uint)!bVar31) << 1 | (uint)!bVar32) << 1 | (uint)!bVar33) << 1
          | (uint)!bVar34) << 1 | (uint)!bVar35) << 1 | (uint)!bVar36;
}

