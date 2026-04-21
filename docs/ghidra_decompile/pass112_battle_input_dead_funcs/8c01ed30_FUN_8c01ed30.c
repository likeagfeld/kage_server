// entry: 8c01ed30
// name: FUN_8c01ed30
// signature: undefined FUN_8c01ed30(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8c01ed30(uint *param_1)

{
  uint in_r0;
  uint in_r2;
  
  if (((in_r0 & 8) == 0) == in_r2) {
    if (*_DAT_8c01edac == '\x01') {
      *_DAT_8c01edac = '\0';
    }
    else {
      *_DAT_8c01edac = '\x01';
    }
    *param_1 = *param_1 | 8;
  }
  return;
}

