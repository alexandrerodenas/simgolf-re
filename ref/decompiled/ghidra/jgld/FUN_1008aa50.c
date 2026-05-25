/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008aa50 @ 0x1008AA50 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008aa50(void)

{
  byte *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_1012b38c == 0) {
    FUN_10091e20();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10128854,0x104);
  DAT_10128780 = &DAT_10128854;
  if (*DAT_1012b350 == 0) {
    local_18 = &DAT_10128854;
  }
  else {
    local_18 = DAT_1012b350;
  }
  FUN_1008ab30(local_18,(undefined4 *)0x0,(byte *)0x0,&local_10,&local_8);
  local_c = (undefined4 *)__malloc_dbg(local_8 + local_10 * 4,2,0x1011f968,0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1008ab30(local_18,local_c,(byte *)(local_c + local_10),&local_10,&local_8);
  _DAT_10128764 = local_10 + -1;
  _DAT_10128768 = local_c;
  return;
}

