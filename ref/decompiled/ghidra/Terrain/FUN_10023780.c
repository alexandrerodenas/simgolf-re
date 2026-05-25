/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10023780 @ 0x10023780 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10023780(void *param_1)

{
  void *this;
  byte *local_18;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_101122b4 == 0) {
    FUN_1002a400(param_1);
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1011087c,0x104);
  DAT_10110840 = &DAT_1011087c;
  if (*DAT_10112310 == 0) {
    local_18 = &DAT_1011087c;
  }
  else {
    local_18 = DAT_10112310;
  }
  FUN_10023860(local_18,(undefined4 *)0x0,(byte *)0x0,&local_10,&local_8);
  this = (void *)(local_8 + local_10 * 4);
  local_c = (undefined4 *)__malloc_dbg(this,this,2,"stdargv.c",0x80);
  if (local_c == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10023860(local_18,local_c,(byte *)(local_c + local_10),&local_10,&local_8);
  _DAT_10110824 = local_10 + -1;
  _DAT_10110828 = local_c;
  return;
}

