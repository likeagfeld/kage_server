// entry: 8c09758c
// name: FUN_8c09758c
// signature: undefined FUN_8c09758c(void)


void FUN_8c09758c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  ushort *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint local_20;
  
  iVar8 = (int)DAT_8c0976ea;
  if (*(int *)(DAT_8c0976ec + param_1) != 0) {
    if (((*(uint *)((int)DAT_8c0976ee + *(int *)(DAT_8c0976ec + param_1)) &
         *(uint *)(DAT_8c0976f0 + param_1)) != 0) &&
       (iVar6 = *(int *)(DAT_8c0976f2 + param_1) + -1, *(int *)(DAT_8c0976f2 + param_1) = iVar6,
       iVar6 < 1)) {
      *(undefined4 *)(DAT_8c0976f2 + param_1) = 2;
      iVar6 = *(int *)(DAT_8c0976f4 + param_1) + 1;
      *(int *)(DAT_8c0976f4 + param_1) = iVar6;
      if (iVar6 == 1) {
        (*(code *)PTR_FUN_8c0977d8)(param_1);
      }
      else if (iVar6 == 2) {
        (*(code *)PTR_FUN_8c0977dc)(param_1);
      }
      else {
        if (iVar6 == 3) {
          (*(code *)PTR_FUN_8c0977e0)(param_1);
        }
        *(undefined4 *)(DAT_8c0976f4 + param_1) = 0;
      }
    }
    if (0 < *(int *)(DAT_8c0976f6 + param_1)) {
      if (*(int *)(DAT_8c0976f8 + param_1) < 1) {
        FUN_8c0984c0(param_1);
        *(undefined4 *)(DAT_8c0977ce + param_1) = 2;
      }
      else {
        *(int *)(DAT_8c0976f8 + param_1) = *(int *)(DAT_8c0976f8 + param_1) + -1;
      }
    }
    puVar5 = PTR_FUN_8c097d20;
    puVar4 = PTR_FUN_8c097b88;
    puVar3 = PTR_FUN_8c097a3c;
    puVar2 = PTR_FUN_8c097970;
    puVar1 = PTR_FUN_8c09795c;
    iVar10 = *(int *)(DAT_8c0976ec + param_1);
    iVar6 = *(int *)(iVar10 + 0x48);
    if (iVar6 == 6) {
      *(undefined4 *)(iVar10 + 0x48) = 0;
      FUN_8c09840c(param_1);
      iVar10 = *(int *)(DAT_8c09794e + param_1);
    }
    else if (iVar6 == 0xd) {
      *(undefined4 *)(iVar10 + 0x48) = 0;
      *(int *)((int)&local_20 + DAT_8c09793a + iVar8) = (int)&local_20 + iVar8;
      (*(code *)puVar1)((int)&local_20 + iVar8,0,4);
      uVar11 = DAT_8c097960;
      puVar12 = *(ushort **)((int)&local_20 + DAT_8c09793a + iVar8);
      *(byte *)((int)puVar12 + 1) = *(byte *)((int)puVar12 + 1) & 1 | 0x1a;
      iVar6 = (int)DAT_8c09793c;
      *puVar12 = *puVar12 & (ushort)uVar11;
      if ((*(int *)(iVar6 + param_1) < 0) ||
         (*(int *)(DAT_8c09793e + param_1) != *(int *)(DAT_8c097940 + param_1))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      *(ushort **)((int)&local_20 + DAT_8c097942 + iVar8) = puVar12 + 1;
      *(undefined **)((int)&local_20 + DAT_8c097944 + iVar8) = PTR_FUN_8c097964;
      (*(code *)PTR_FUN_8c097964)(uVar11);
      (**(code **)((int)&local_20 + DAT_8c097944 + iVar8))
                (*(undefined4 *)((int)&local_20 + DAT_8c097942 + iVar8),
                 *(uint *)(DAT_8c097946 + param_1) & 0xffff);
      (*(code *)PTR_FUN_8c097968)(*(undefined4 *)(DAT_8c09794a + param_1),(int)&local_20 + iVar8,4);
      *(undefined4 *)((int)DAT_8c09794c + *(int *)(DAT_8c09794a + param_1)) = 0;
      iVar10 = *(int *)(DAT_8c09794e + param_1);
    }
    else if (iVar6 == 0xe) {
      iVar6 = (int)DAT_8c097950;
      *(undefined4 *)(iVar10 + 0x48) = 0;
      *(int *)((int)&local_20 + DAT_8c097952 + iVar8) = (int)&local_20 + iVar6 + iVar8;
      (*(code *)puVar1)(0,4);
      uVar11 = DAT_8c097960;
      puVar12 = *(ushort **)((int)&local_20 + DAT_8c097952 + iVar8);
      *(byte *)((int)puVar12 + 1) = *(byte *)((int)puVar12 + 1) & 1 | 0x1c;
      iVar6 = (int)DAT_8c09793c;
      *puVar12 = *puVar12 & (ushort)uVar11;
      if ((*(int *)(iVar6 + param_1) < 0) ||
         (*(int *)(DAT_8c09793e + param_1) != *(int *)(DAT_8c097940 + param_1))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      *(ushort **)((int)&local_20 + DAT_8c097954 + iVar8) = puVar12 + 1;
      *(undefined **)((int)&local_20 + DAT_8c097944 + iVar8) = PTR_FUN_8c097964;
      (*(code *)PTR_FUN_8c097964)(uVar11);
      (**(code **)((int)&local_20 + DAT_8c097944 + iVar8))
                (*(uint *)(DAT_8c097946 + param_1) & 0xffff);
      (*(code *)PTR_FUN_8c097968)
                (*(undefined4 *)(DAT_8c09794a + param_1),(int)&local_20 + DAT_8c097950 + iVar8,4);
      (*(code *)PTR_FUN_8c09796c)(param_1);
      *(undefined4 *)(DAT_8c097956 + param_1) = 1;
      iVar10 = *(int *)(DAT_8c09794e + param_1);
    }
    else if (iVar6 == 0xf) {
      iVar6 = (int)DAT_8c097b62;
      *(undefined4 *)(iVar10 + 0x48) = 0;
      *(int *)((int)&local_20 + DAT_8c097b64 + iVar8) = (int)&local_20 + iVar6 + iVar8;
      (*(code *)puVar4)(0,4);
      uVar11 = DAT_8c097b8c;
      *(undefined4 *)(DAT_8c097b66 + param_1) = 1;
      *(undefined4 *)(DAT_8c097b68 + param_1) = 0;
      puVar12 = *(ushort **)((int)&local_20 + DAT_8c097b64 + iVar8);
      *(byte *)((int)puVar12 + 1) = *(byte *)((int)puVar12 + 1) & 1 | 0x1e;
      iVar6 = (int)DAT_8c097b6a;
      *puVar12 = *puVar12 & (ushort)uVar11;
      if ((*(int *)(iVar6 + param_1) < 0) ||
         (*(int *)(DAT_8c097b6c + param_1) != *(int *)(DAT_8c097b6e + param_1))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      *(ushort **)((int)&local_20 + DAT_8c097b70 + iVar8) = puVar12 + 1;
      iVar13 = 0;
      *(undefined **)((int)&local_20 + DAT_8c097b72 + iVar8) = PTR_FUN_8c097b90;
      (*(code *)PTR_FUN_8c097b90)(uVar11);
      iVar14 = 0;
      iVar10 = 8;
      (**(code **)((int)&local_20 + DAT_8c097b72 + iVar8))
                (*(uint *)(DAT_8c097b74 + param_1) & 0xffff);
      (*(code *)PTR_FUN_8c097b94)
                (*(undefined4 *)(DAT_8c097b78 + param_1),(int)&local_20 + DAT_8c097b62 + iVar8,4);
      (*(code *)PTR_FUN_8c097b98)(*(undefined4 *)(DAT_8c097b7a + param_1));
      *(int *)((int)&local_20 + DAT_8c097b7e + iVar8) = param_1 + DAT_8c097b7c;
      iVar6 = *(int *)(DAT_8c097b80 + param_1);
      do {
        puVar1 = PTR_FUN_8c097e70;
        iVar7 = *(int *)(iVar13 * 0x14 + *(int *)((int)&local_20 + DAT_8c097b7e + iVar8) + 0xc);
        if ((iVar7 == 1) || (iVar7 == 2)) {
          iVar15 = 0;
          iVar7 = iVar14;
          if (0 < iVar6) {
            do {
              iVar15 = iVar15 + 1;
              iVar14 = iVar7 + 1;
              (*(code *)puVar1)(*(undefined4 *)(DAT_8c097e58 + param_1),iVar7,iVar13);
              iVar6 = *(int *)(DAT_8c097e5a + param_1);
              iVar7 = iVar14;
            } while (iVar15 < iVar6);
          }
        }
        else if (iVar7 == 3) {
          iVar7 = 0;
          if (0 < iVar6) {
            *(undefined **)((int)&local_20 + DAT_8c097b82 + iVar8) = PTR_FUN_8c097b9c;
            iVar15 = iVar14;
            do {
              iVar7 = iVar7 + 1;
              iVar14 = iVar15 + 1;
              (**(code **)((int)&local_20 + DAT_8c097b82 + iVar8))
                        (*(undefined4 *)(DAT_8c097b7a + param_1),iVar15,iVar13);
              iVar6 = *(int *)(DAT_8c097b80 + param_1);
              iVar15 = iVar14;
            } while (iVar7 < iVar6);
          }
        }
        else {
          iVar14 = iVar14 + iVar6;
        }
        iVar10 = iVar10 + -1;
        iVar13 = iVar13 + 1;
      } while (iVar10 != 0);
      *(undefined4 *)(DAT_8c097b84 + param_1) = 1;
      iVar10 = *(int *)(DAT_8c097b7a + param_1);
    }
    else if (iVar6 == 0x10) {
      iVar6 = (int)DAT_8c097a1c;
      *(undefined4 *)(iVar10 + 0x48) = 0;
      *(int *)((int)&local_20 + DAT_8c097a1e + iVar8) = (int)&local_20 + iVar6 + iVar8;
      (*(code *)puVar3)(0,4);
      *(undefined4 *)(DAT_8c097a20 + param_1) = 0;
      *(undefined4 *)(DAT_8c097a22 + param_1) = 0;
      uVar11 = DAT_8c097a40;
      puVar12 = *(ushort **)((int)&local_20 + DAT_8c097a1e + iVar8);
      *(byte *)((int)puVar12 + 1) = *(byte *)((int)puVar12 + 1) & 1 | 0x20;
      iVar6 = (int)DAT_8c097a24;
      *puVar12 = *puVar12 & (ushort)uVar11;
      if ((*(int *)(iVar6 + param_1) < 0) ||
         (*(int *)(DAT_8c097a26 + param_1) != *(int *)(DAT_8c097a28 + param_1))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      *(ushort **)((int)&local_20 + DAT_8c097a2a + iVar8) = puVar12 + 1;
      *(undefined **)((int)&local_20 + DAT_8c097a2c + iVar8) = PTR_FUN_8c097a44;
      (*(code *)PTR_FUN_8c097a44)(uVar11);
      (**(code **)((int)&local_20 + DAT_8c097a2c + iVar8))
                (*(uint *)(DAT_8c097a2e + param_1) & 0xffff);
      (*(code *)PTR_FUN_8c097a48)
                (*(undefined4 *)(DAT_8c097a32 + param_1),(int)&local_20 + DAT_8c097a1c + iVar8,4);
      *(undefined4 *)(DAT_8c097a34 + param_1) = 0;
      *(undefined4 *)(DAT_8c097a36 + param_1) = 0;
      *(undefined4 *)((int)DAT_8c097a38 + *(int *)(DAT_8c097a32 + param_1)) = 0;
      iVar10 = *(int *)(DAT_8c097a3a + param_1);
    }
    else if (iVar6 == 0x16) {
      iVar6 = (int)DAT_8c097cf0;
      *(undefined4 *)(iVar10 + 0x48) = 0;
      *(int *)((int)&local_20 + DAT_8c097cf2 + iVar8) = (int)&local_20 + iVar6 + iVar8;
      (*(code *)puVar5)(0,4);
      uVar11 = DAT_8c097d24;
      puVar12 = *(ushort **)((int)&local_20 + DAT_8c097cf2 + iVar8);
      *(byte *)((int)puVar12 + 1) = *(byte *)((int)puVar12 + 1) & 1 | 0x26;
      iVar6 = (int)DAT_8c097cf4;
      *puVar12 = *puVar12 & (ushort)uVar11;
      if ((*(int *)(iVar6 + param_1) < 0) ||
         (*(int *)(DAT_8c097cf6 + param_1) != *(int *)(DAT_8c097cf8 + param_1))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      *(ushort **)((int)&local_20 + DAT_8c097cfa + iVar8) = puVar12 + 1;
      *(undefined **)((int)&local_20 + DAT_8c097cfc + iVar8) = PTR_FUN_8c097d28;
      (*(code *)PTR_FUN_8c097d28)(uVar11);
      (**(code **)((int)&local_20 + DAT_8c097cfc + iVar8))
                (*(uint *)(DAT_8c097cfe + param_1) & 0xffff);
      (*(code *)PTR_FUN_8c097d2c)
                (*(undefined4 *)(DAT_8c097d02 + param_1),(int)&local_20 + DAT_8c097cf0 + iVar8,4);
      if (((-1 < *(int *)(DAT_8c097cf4 + param_1)) &&
          (*(int *)(DAT_8c097cf6 + param_1) == *(int *)(DAT_8c097cf8 + param_1))) &&
         ((*(uint *)(*(int *)(*(int *)(DAT_8c097d04 + param_1) + 0x30) + 0x1c) & DAT_8c097d30) != 0)
         ) {
        (*(code *)PTR_FUN_8c097e60)();
      }
      (*(code *)PTR_FUN_8c097d34)(param_1);
      puVar1 = PTR_FUN_8c097d38;
      *(undefined4 *)(DAT_8c097d06 + param_1) = 0;
      (*(code *)puVar1)(*(undefined4 *)(DAT_8c097d08 + param_1));
      puVar1 = PTR_FUN_8c097d3c;
      *(undefined4 *)(DAT_8c097d0a + param_1) = 8;
      iVar8 = (*(code *)puVar1)(0);
      *(int *)(DAT_8c097d0c + param_1) = iVar8;
      (**(code **)(*(int *)(iVar8 + 0x28) + 0x20))(iVar8 + *(int *)(*(int *)(iVar8 + 0x28) + 0x18));
      (*(code *)PTR_FUN_8c097d40)(param_1,*(undefined4 *)(DAT_8c097d0c + param_1));
      (*(code *)PTR_FUN_8c097d44)(*(undefined4 *)(DAT_8c097d0c + param_1));
      (*(code *)PTR_FUN_8c097d48)(*(undefined4 *)(DAT_8c097d0c + param_1));
      iVar6 = 0;
      iVar8 = (int)DAT_8c097d12;
      *(uint *)((int)DAT_8c097d10 + *(int *)(DAT_8c097d0c + param_1)) =
           *(uint *)((int)DAT_8c097d10 + *(int *)(DAT_8c097d0c + param_1)) | (int)DAT_8c097d0e;
      iVar8 = param_1 + iVar8;
      iVar10 = 8;
      do {
        if (*(int *)(iVar8 + 0xc) != 0) {
          iVar6 = iVar6 + 1;
        }
        iVar10 = iVar10 + -1;
        iVar8 = iVar8 + 0x14;
      } while (iVar10 != 0);
      if (iVar6 == 1) {
        *(undefined4 *)(DAT_8c097d14 + param_1) = 1;
      }
      *(undefined4 *)(DAT_8c097d16 + param_1) = 3;
      *(uint *)(DAT_8c097d18 + param_1) = *(uint *)(DAT_8c097d18 + param_1) | 4;
      *(undefined4 *)((int)DAT_8c097d1a + *(int *)(DAT_8c097d02 + param_1)) = 0;
      iVar10 = *(int *)(DAT_8c097d1c + param_1);
    }
    else if (iVar6 == 0x17) {
      *(undefined4 *)(iVar10 + 0x48) = 0;
      (*(code *)puVar2)(*(undefined4 *)(DAT_8c097958 + param_1));
      iVar10 = *(int *)(DAT_8c09794e + param_1);
    }
    else if (iVar6 == 0x18) {
      *(undefined4 *)(iVar10 + 0x48) = 0;
      *(undefined4 *)((int)&local_20 + DAT_8c0976fc + iVar8) =
           *(undefined4 *)((int)DAT_8c0976fa + *(int *)(DAT_8c0976ec + param_1));
      *(undefined4 *)((int)&local_20 + DAT_8c0976fe + iVar8) = 0;
      *(int *)((int)&local_20 + DAT_8c097702 + iVar8) = param_1 + DAT_8c097700;
      *(undefined4 *)((int)&local_20 + DAT_8c097704 + iVar8) = 8;
      *(undefined4 *)((int)&local_20 + DAT_8c097706 + iVar8) = 0;
      *(int *)((int)&local_20 + DAT_8c097708 + iVar8) = param_1;
      iVar6 = *(int *)((int)&local_20 + DAT_8c097706 + iVar8);
      do {
        uVar9 = *(uint *)((int)&local_20 + DAT_8c0976fe + iVar8);
        if ((int)uVar9 < 0) {
          uVar9 = 1 >> (~uVar9 & 0x1f) + 1;
        }
        else {
          uVar9 = 1 << (uVar9 & 0x1f);
        }
        if (((*(uint *)((int)&local_20 + DAT_8c0976fc + iVar8) & uVar9) != 0) &&
           (*(int *)(*(int *)((int)&local_20 + DAT_8c097702 + iVar8) + iVar6 + 0xc) == 3)) {
          (*(code *)PTR_FUN_8c09770c)
                    (*(int *)((int)&local_20 + DAT_8c097702 + iVar8) +
                     *(int *)((int)&local_20 + DAT_8c0976fe + iVar8) * 0x14,0,0x14);
        }
        iVar6 = iVar6 + 0x14;
        *(int *)((int)&local_20 + DAT_8c0976fe + iVar8) =
             *(int *)((int)&local_20 + DAT_8c0976fe + iVar8) + 1;
        iVar10 = *(int *)((int)&local_20 + DAT_8c097704 + iVar8) + -1;
        *(int *)((int)&local_20 + DAT_8c097704 + iVar8) = iVar10;
      } while (iVar10 != 0);
      param_1 = *(int *)((int)&local_20 + DAT_8c0977be + iVar8);
      *(undefined4 *)((int)DAT_8c0977c2 + *(int *)(DAT_8c0977c0 + param_1)) = 0;
      iVar10 = *(int *)(DAT_8c0977c0 + param_1);
    }
    else if (iVar6 == 0x19) {
      *(undefined4 *)(iVar10 + 0x48) = 0;
      *(undefined4 *)(DAT_8c0977d0 + param_1) = 0;
      (*(code *)PTR_FUN_8c0977e4)(*(undefined4 *)(DAT_8c0977d2 + param_1));
      *(undefined4 *)(DAT_8c0977d4 + param_1) = 8;
      iVar10 = *(int *)(DAT_8c0977c0 + param_1);
    }
    if ((*(uint *)(DAT_8c0977c4 + param_1) & *(uint *)(DAT_8c0977c6 + iVar10)) != 0) {
      if (*(int *)(DAT_8c0977c8 + param_1) != 0) {
        (*(code *)PTR_FUN_8c097e64)(param_1);
        *(undefined4 *)(DAT_8c097e52 + param_1) = 0;
      }
      if (*(int *)(DAT_8c0977c2 + param_1) != 0) {
        (*(code *)PTR_FUN_8c097e68)(param_1);
        *(undefined4 *)(DAT_8c097e54 + param_1) = 0;
      }
      if (*(int *)(DAT_8c0977ca + param_1) != 0) {
        (*(code *)PTR_FUN_8c097e6c)(param_1);
        *(undefined4 *)(DAT_8c097e56 + param_1) = 0;
      }
    }
  }
  return;
}

