// entry: 8c1774d0
// name: FUN_8c1774d0
// signature: undefined FUN_8c1774d0(void)


undefined4 FUN_8c1774d0(int param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar1 = DAT_8c1777e8;
  puVar8 = (uint *)(DAT_8c1775cc + param_1);
  uVar5 = (uint)DAT_8c1775ce;
  puVar7 = (uint *)(DAT_8c1775ca + param_1);
  uVar6 = (uint)DAT_8c1775d0;
  if (param_2 == 1) {
    if (param_3 == DAT_8c1775d2) {
      if (*param_4 == 0) {
        uVar6 = *(uint *)(DAT_8c1776f2 + param_1) & 0xfffffffe;
      }
      else {
        uVar6 = *(uint *)(DAT_8c1776f2 + param_1) | 1;
      }
      *(uint *)(DAT_8c1776f2 + param_1) = uVar6;
      return 0;
    }
    if (param_3 == DAT_8c1775d4) {
      if (*param_4 == 0) {
        uVar6 = *(uint *)(DAT_8c1776f2 + param_1) & 0xfffffffd;
      }
      else {
        uVar6 = *(uint *)(DAT_8c1776f2 + param_1) | 2;
      }
      *(uint *)(DAT_8c1776f2 + param_1) = uVar6;
      return 0;
    }
    if (param_3 == DAT_8c1775d6) {
      if (*param_4 != 0) {
        *(uint *)(DAT_8c1776f2 + param_1) = *(uint *)(DAT_8c1776f2 + param_1) | 4;
        return 0;
      }
      *(uint *)(DAT_8c1776f2 + param_1) = *(uint *)(DAT_8c1776f2 + param_1) & 0xfffffffb;
      return 0;
    }
    if (param_3 == DAT_8c1775d8) {
      iVar4 = (int)DAT_8c1776f4;
      uVar6 = *param_4;
      goto LAB_8c177882;
    }
    if (param_3 == DAT_8c1775da) {
      iVar4 = (int)DAT_8c1776f6;
      uVar6 = *param_4;
    }
    else {
      if (param_3 == DAT_8c1775dc) {
        iVar4 = (int)DAT_8c1776f8;
        uVar6 = *param_4;
        goto LAB_8c1778b4;
      }
      if (param_3 != DAT_8c1775de) {
        if (param_3 == DAT_8c1775e0) {
          if (*param_4 == 0) {
            *puVar7 = *puVar7 & (int)DAT_8c1777da;
            return 0;
          }
          uVar6 = *puVar7 | (int)DAT_8c1777d8;
        }
        else {
          if (param_3 == DAT_8c1775e2) {
            if (*param_4 != 0) {
              *puVar7 = *puVar7 | 0x80;
              return 0;
            }
            *puVar7 = *puVar7 & (int)DAT_8c1777dc;
            return 0;
          }
          if (param_3 == DAT_8c1775e4) {
            if (*param_4 == 0) {
              *puVar7 = *puVar7 & 0xffffffdf;
              return 0;
            }
            uVar6 = *puVar7 | 0x20;
          }
          else {
            if (param_3 == DAT_8c1775e6) {
              *puVar7 = *puVar7 | 2;
              if (*param_4 < *puVar1) {
                uVar2 = (undefined2)*param_4;
              }
              else {
                uVar2 = (undefined2)*puVar1;
              }
              *(undefined2 *)(puVar7 + 1) = uVar2;
              return 0;
            }
            if (param_3 == DAT_8c1775e8) {
              *puVar7 = *puVar7 | 4;
              puVar7[2] = *param_4;
              return 0;
            }
            if (param_3 == DAT_8c1775ea) {
              if (*param_4 != 0) {
                *puVar7 = *puVar7 | 8;
                return 0;
              }
              *puVar7 = *puVar7 & 0xfffffff7;
              return 0;
            }
            if (param_3 == DAT_8c1775ec) {
              if (*param_4 == 0) {
                *puVar7 = *puVar7 & (int)DAT_8c1777de;
                return 0;
              }
              uVar6 = *puVar7 | uVar6;
            }
            else {
              if (param_3 != DAT_8c1775ee) {
                if (param_3 == DAT_8c1775f0) {
                  if (*param_4 == 0) {
                    *puVar8 = *puVar8 & (int)DAT_8c1777e4;
                    return 0;
                  }
                  uVar6 = *puVar8 | (int)DAT_8c1777e2;
                }
                else if (param_3 == DAT_8c1775f2) {
                  if (*param_4 == 0) {
                    *puVar8 = *puVar8 & 0xfffffff7;
                    return 0;
                  }
                  uVar6 = *puVar8 | 8;
                }
                else if (param_3 == DAT_8c1775f4) {
                  if (*param_4 == 0) {
                    *puVar8 = *puVar8 & (int)DAT_8c1778b8;
                    return 0;
                  }
                  uVar6 = *puVar8 | uVar6;
                }
                else if (param_3 == DAT_8c1775f6) {
                  if (*param_4 == 0) {
                    *puVar8 = *puVar8 & (int)DAT_8c1778ba;
                    return 0;
                  }
                  uVar6 = *puVar8 | uVar5;
                }
                else {
                  if (param_3 != DAT_8c1775f8) {
                    if (param_3 == DAT_8c1775fa) {
                      iVar4 = (int)DAT_8c1778bc;
                      uVar6 = *param_4;
                    }
                    else {
                      if (param_3 == DAT_8c1776dc) {
                        *(char *)(DAT_8c1778be + param_1) = (char)*param_4;
                        return 0;
                      }
                      if (param_3 == DAT_8c1776de) {
                        if (*param_4 != 0) {
                          *puVar8 = *puVar8 | 0x20;
                          return 0;
                        }
                        *puVar8 = *puVar8 & 0xffffffdf;
                        return 0;
                      }
                      if (param_3 == DAT_8c1776e0) {
                        iVar4 = (int)DAT_8c1778c0;
                        uVar6 = *param_4;
                      }
                      else {
                        if (param_3 == DAT_8c1776e2) {
                          if (*param_4 != 0) {
                            *puVar8 = *puVar8 | 0x40;
                            return 0;
                          }
                          *puVar8 = *puVar8 & 0xffffffbf;
                          return 0;
                        }
                        if (param_3 != DAT_8c1776e4) {
                          if (param_3 != DAT_8c1776e6) {
                            if (param_3 == DAT_8c1776e8) {
                              iVar4 = (int)DAT_8c1778c6;
                              uVar6 = *param_4;
                            }
                            else {
                              if (param_3 == DAT_8c1776ea) {
                                iVar4 = (int)DAT_8c1778c8;
                                uVar6 = *param_4;
                                goto LAB_8c1778ac;
                              }
                              if (param_3 == DAT_8c1776ec) {
                                iVar4 = (int)DAT_8c1778ca;
                                uVar6 = *param_4;
                              }
                              else {
                                if (param_3 == DAT_8c1776ee) {
                                  iVar4 = (int)DAT_8c1778cc;
                                  uVar6 = *param_4;
                                  goto LAB_8c1778ac;
                                }
                                if (param_3 != DAT_8c1776f0) goto LAB_8c1779e4;
                                iVar4 = (int)DAT_8c1778ce;
                                uVar6 = *param_4;
                              }
                            }
LAB_8c1778b4:
                            *(uint *)(iVar4 + param_1) = uVar6;
                            return 0;
                          }
                          iVar4 = (int)DAT_8c1778c4;
                          uVar6 = *param_4 * 5;
                          goto LAB_8c1778ac;
                        }
                        iVar4 = (int)DAT_8c1778c2;
                        uVar6 = *param_4;
                      }
                    }
LAB_8c177882:
                    *(uint *)(iVar4 + param_1) = uVar6;
                    return 0;
                  }
                  if (*param_4 == 0) {
                    *puVar8 = *puVar8 & 0xfffffffb;
                    return 0;
                  }
                  uVar6 = *puVar8 | 4;
                }
                *puVar8 = uVar6;
                return 0;
              }
              if (*param_4 == 0) {
                *puVar7 = *puVar7 & (int)DAT_8c1777e0;
                return 0;
              }
              uVar6 = *puVar7 | uVar5;
            }
          }
        }
        *puVar7 = uVar6;
        return 0;
      }
      iVar4 = (int)DAT_8c1777d6;
      uVar6 = *param_4;
    }
LAB_8c1778ac:
    *(uint *)(iVar4 + param_1) = uVar6;
    return 0;
  }
  if (param_2 != 0) {
    return 0xffffffe6;
  }
  if (param_3 == DAT_8c17796a) {
    if ((*puVar7 & (int)DAT_8c177986) == 0) {
      uVar6 = 0;
      goto LAB_8c1779c8;
    }
LAB_8c177966:
    uVar6 = 1;
LAB_8c1779c8:
    *param_4 = uVar6;
    return 0;
  }
  if (param_3 == DAT_8c17796c) {
    if ((*puVar7 & 0x80) == 0) {
      uVar6 = 0;
      goto LAB_8c1779e0;
    }
    goto LAB_8c1779bc;
  }
  if (param_3 == DAT_8c17796e) {
    uVar6 = (uint)*(ushort *)(DAT_8c177988 + param_1);
    goto LAB_8c1779d8;
  }
  if (param_3 == DAT_8c177970) {
    uVar6 = *(uint *)(DAT_8c17798a + param_1);
    goto LAB_8c1779e0;
  }
  if (param_3 != DAT_8c177972) {
    if (param_3 == DAT_8c177974) {
      if ((uVar5 & *puVar8) == 0) {
        uVar6 = 0;
        goto LAB_8c1779c8;
      }
      goto LAB_8c177966;
    }
    if (param_3 == DAT_8c177976) {
      if ((uVar6 & *puVar8) == 0) {
        uVar6 = 0;
        goto LAB_8c1779e0;
      }
    }
    else {
      if (param_3 == DAT_8c177978) {
        if ((*puVar8 & 4) == 0) {
          uVar6 = 0;
          goto LAB_8c1779d8;
        }
        goto LAB_8c1779a0;
      }
      if (param_3 == DAT_8c17797a) {
        uVar6 = *(uint *)(DAT_8c177a0c + param_1);
        goto LAB_8c1779c8;
      }
      if (param_3 == DAT_8c17797c) {
        *(undefined1 *)param_4 = *(undefined1 *)(DAT_8c177a0e + param_1);
        return 0;
      }
      if (param_3 != DAT_8c17797e) {
        if (param_3 == DAT_8c177980) {
          uVar6 = *(uint *)(DAT_8c177a10 + param_1);
          goto LAB_8c1779c8;
        }
        if (param_3 == DAT_8c177982) {
          if ((*puVar8 & 0x40) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          goto LAB_8c1779d8;
        }
        if (param_3 != DAT_8c177984) {
LAB_8c1779e4:
          uVar3 = (*(code *)PTR_FUN_8c177a14)();
          return uVar3;
        }
        uVar6 = *(uint *)(DAT_8c177a12 + param_1);
        goto LAB_8c1779e0;
      }
      if ((*puVar8 & 0x20) == 0) {
        uVar6 = 0;
        goto LAB_8c1779e0;
      }
    }
LAB_8c1779bc:
    uVar6 = 1;
LAB_8c1779e0:
    *param_4 = uVar6;
    return 0;
  }
  if ((*puVar8 & 8) == 0) {
    uVar6 = 0;
    goto LAB_8c1779d8;
  }
LAB_8c1779a0:
  uVar6 = 1;
LAB_8c1779d8:
  *param_4 = uVar6;
  return 0;
}

