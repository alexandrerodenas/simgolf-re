/* Ghidra decompiled: jgl.dll */
/* Function: get_graphsy_object_ptr @ 0x1003AE70 */


void get_graphsy_object_ptr(void)

{
  undefined4 *puVar1;
  
                    /* 0x3ae70  1  get_graphsy_object_ptr */
  puVar1 = operator_new(0x14c);
  if (puVar1 != (undefined4 *)0x0) {
    DAT_10057d84 = FUN_1003aec0(puVar1);
    DAT_10057b08 = DAT_10057d84;
    return;
  }
  DAT_10057d84 = (undefined4 *)0x0;
  DAT_10057b08 = (undefined4 *)0x0;
  return;
}

