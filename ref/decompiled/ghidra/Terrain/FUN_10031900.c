/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10031900 @ 0x10031900 */


undefined4 __cdecl FUN_10031900(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

{
  byte bVar1;
  DWORD DVar2;
  int iVar3;
  void *this;
  uint local_ac;
  int local_a4;
  CHAR local_90 [128];
  LPSTR local_10;
  void *local_c;
  int local_8;
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar3 = FUN_10032930(param_2,param_3,(LPWSTR)&DAT_10110a38,4,0);
    if (iVar3 != 0) {
      *(undefined1 *)param_4 = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        if (DAT_10066268 < 2) {
          bVar1 = (&DAT_10110a38)[local_a4 * 2];
          local_ac = *(ushort *)(PTR_DAT_1006605c + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_10110a38)[local_a4 * 2];
          local_ac = FUN_1001e6d0((uint)bVar1,4);
        }
        if (local_ac == 0) break;
        *(byte *)param_4 = (char)*param_4 * '\n' + -0x30 + bVar1;
        local_a4 = local_a4 + 1;
      }
      return 0;
    }
    return 0xffffffff;
  }
  local_10 = local_90;
  local_8 = 0;
  local_c = (void *)FUN_10032ad0(param_2,param_3,local_10,0x80,0);
  if (local_c == (void *)0x0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) || (iVar3 = FUN_10032ad0(param_2,param_3,(LPSTR)0x0,0,0), iVar3 == 0)) ||
       (local_10 = (LPSTR)__malloc_dbg(this,iVar3,2,"inithelp.c",0x58), local_10 == (LPSTR)0x0))
    goto LAB_10031a4d;
    local_8 = 1;
    local_c = (void *)FUN_10032ad0(param_2,param_3,local_10,iVar3,0);
    if (local_c == (void *)0x0) goto LAB_10031a4d;
  }
  iVar3 = __malloc_dbg(local_c,local_c,2,"inithelp.c",99);
  *param_4 = iVar3;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,(size_t)local_c);
    if (local_8 != 0) {
      __free_dbg(local_10,2);
    }
    return 0;
  }
LAB_10031a4d:
  if (local_8 != 0) {
    __free_dbg(local_10,2);
  }
  return 0xffffffff;
}

