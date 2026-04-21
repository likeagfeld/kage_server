// entry: 8c099acc
// name: FUN_8c099acc
// signature: undefined FUN_8c099acc(void)


void FUN_8c099acc(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if ((((int)*(char *)(param_2 + 3) & 0x80U) != 0) &&
     (*(int *)(param_2 + 4) == *(int *)(DAT_8c099b02 + param_1))) {
    iVar2 = (*(code *)PTR_FUN_8c099b8c)(*(undefined4 *)(DAT_8c099b7c + param_1));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),
                 PTR_s_ERROR__Fail_Leave_From_Room_Requ_8c099ca8);
      (**(code **)(*(int *)(param_1 + 0x28) + 0x68))
                (param_1 + *(int *)(*(int *)(param_1 + 0x28) + 0x60),PTR_s_Force_Logouted__8c099cac)
      ;
      (*(code *)PTR_FUN_8c099cb0)(*(undefined4 *)(DAT_8c099c9c + param_1));
      (*(code *)PTR_FUN_8c099cb4)(*(undefined4 *)(DAT_8c099c9c + param_1));
      if (*(int *)(DAT_8c099c9e + param_1) != 0) {
        (*(code *)PTR_FUN_8c099cb8)();
        iVar2 = *(int *)(*(int *)(DAT_8c099c9e + param_1) + 0x28);
        (**(code **)(iVar2 + 0x2c))(*(int *)(DAT_8c099c9e + param_1) + *(int *)(iVar2 + 0x24));
        iVar2 = *(int *)(DAT_8c099c9e + param_1);
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x28) + 0x14))
                    (iVar2 + *(int *)(*(int *)(iVar2 + 0x28) + 0xc),3);
          *(undefined4 *)(DAT_8c099c9e + param_1) = 0;
        }
      }
      if (*(int *)(DAT_8c099ca0 + param_1) != 0) {
        (*(code *)PTR_FUN_8c099cb8)();
        iVar2 = *(int *)(*(int *)(DAT_8c099ca0 + param_1) + 0x28);
        (**(code **)(iVar2 + 0x2c))(*(int *)(DAT_8c099ca0 + param_1) + *(int *)(iVar2 + 0x24));
        iVar2 = *(int *)(DAT_8c099ca0 + param_1);
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x28) + 0x14))
                    (iVar2 + *(int *)(*(int *)(iVar2 + 0x28) + 0xc),3);
          *(undefined4 *)(DAT_8c099ca0 + param_1) = 0;
        }
      }
      if (*(int *)(DAT_8c099ca2 + param_1) != 0) {
        (*(code *)PTR_FUN_8c099cbc)();
        (*(code *)PTR_FUN_8c099cb8)(*(undefined4 *)(DAT_8c099ca2 + param_1));
        iVar2 = *(int *)(*(int *)(DAT_8c099ca2 + param_1) + 0x28);
        (**(code **)(iVar2 + 0x2c))(*(int *)(DAT_8c099ca2 + param_1) + *(int *)(iVar2 + 0x24));
        iVar2 = *(int *)(DAT_8c099ca2 + param_1);
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x28) + 0x14))
                    (iVar2 + *(int *)(*(int *)(iVar2 + 0x28) + 0xc),3);
          *(undefined4 *)(DAT_8c099ca2 + param_1) = 0;
        }
        *(undefined4 *)(DAT_8c099ca4 + param_1) = 0;
        *(undefined4 *)(DAT_8c099ca6 + param_1) = 0;
      }
      (*(code *)PTR_FUN_8c099cc0)(param_1);
      *(undefined4 *)(param_1 + 100) = 7;
    }
    else {
      *(undefined4 *)(DAT_8c099b7e + param_1) = 0;
      if (*(int *)(DAT_8c099b80 + param_1) != 0) {
        (*(code *)PTR_FUN_8c099b90)();
        iVar2 = *(int *)(*(int *)(DAT_8c099b80 + param_1) + 0x28);
        (**(code **)(iVar2 + 0x2c))(*(int *)(DAT_8c099b80 + param_1) + *(int *)(iVar2 + 0x24));
        iVar2 = *(int *)(DAT_8c099b80 + param_1);
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x28) + 0x14))
                    (iVar2 + *(int *)(*(int *)(iVar2 + 0x28) + 0xc),3);
          *(undefined4 *)(DAT_8c099b80 + param_1) = 0;
        }
      }
      puVar1 = PTR_FUN_8c099b94;
      *(undefined4 *)(DAT_8c099b82 + param_1) = 0;
      *(undefined4 *)(DAT_8c099b84 + param_1) = 0;
      *(undefined4 *)(DAT_8c099b86 + param_1) = 9;
      (*(code *)puVar1)(*(undefined4 *)(DAT_8c099b88 + param_1));
    }
  }
  return;
}

