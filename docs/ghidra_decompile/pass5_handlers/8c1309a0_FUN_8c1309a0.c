// entry: 8c1309a0
// name: FUN_8c1309a0
// signature: undefined FUN_8c1309a0(void)


void FUN_8c1309a0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  puVar6 = PTR_FUN_8c130bd4;
  puVar5 = PTR_FUN_8c130a4c;
  sVar1 = *(short *)PTR_DAT_8c130a48;
  sVar2 = *(short *)(PTR_DAT_8c130a48 + 2);
  sVar3 = *(short *)(PTR_DAT_8c130a48 + 4);
  sVar4 = *(short *)(PTR_DAT_8c130a48 + 6);
  if (param_2 == 0) {
    (*(code *)PTR_FUN_8c130a4c)(*(undefined4 *)(DAT_8c130a2e + param_1),0);
    (*(code *)puVar5)(*(undefined4 *)(DAT_8c130a30 + param_1),0);
    (*(code *)puVar5)(*(undefined4 *)(DAT_8c130a32 + param_1),0);
    (*(code *)puVar5)(*(undefined4 *)(DAT_8c130a34 + param_1),0);
  }
  else if (param_2 == 1) {
    (*(code *)PTR_FUN_8c130bd4)(*(undefined4 *)(DAT_8c130bcc + param_1),1);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bce + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd0 + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd2 + param_1),0);
    uVar7 = (*(code *)PTR_FUN_8c130bd8)(*(undefined4 *)(DAT_8c130bcc + param_1),9);
    (*(code *)PTR_FUN_8c130bdc)(uVar7,(int)sVar1,(int)sVar2);
  }
  else if (param_2 == 2) {
    (*(code *)PTR_FUN_8c130bd4)(*(undefined4 *)(DAT_8c130bcc + param_1),1);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bce + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd0 + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd2 + param_1),0);
    uVar7 = (*(code *)PTR_FUN_8c130bd8)(*(undefined4 *)(DAT_8c130bcc + param_1),9);
    (*(code *)PTR_FUN_8c130bdc)(uVar7,(int)sVar3,(int)sVar4);
  }
  else if (param_2 == 3) {
    (*(code *)PTR_FUN_8c130bd4)(*(undefined4 *)(DAT_8c130bcc + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bce + param_1),1);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd0 + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd2 + param_1),0);
  }
  else if (param_2 == 4) {
    (*(code *)PTR_FUN_8c130bd4)(*(undefined4 *)(DAT_8c130bcc + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bce + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd0 + param_1),1);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd2 + param_1),0);
    uVar7 = (*(code *)PTR_FUN_8c130bd8)(*(undefined4 *)(DAT_8c130bd0 + param_1),8);
    (*(code *)PTR_FUN_8c130bdc)(uVar7,(int)sVar1,(int)sVar2);
  }
  else if (param_2 == 5) {
    (*(code *)PTR_FUN_8c130bd4)(*(undefined4 *)(DAT_8c130bcc + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bce + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd0 + param_1),1);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd2 + param_1),0);
    uVar7 = (*(code *)PTR_FUN_8c130bd8)(*(undefined4 *)(DAT_8c130bd0 + param_1),8);
    (*(code *)PTR_FUN_8c130bdc)(uVar7,(int)sVar3,(int)sVar4);
  }
  else if (param_2 == 6) {
    (*(code *)PTR_FUN_8c130bd4)(*(undefined4 *)(DAT_8c130bcc + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bce + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd0 + param_1),0);
    (*(code *)puVar6)(*(undefined4 *)(DAT_8c130bd2 + param_1),1);
  }
  return;
}

