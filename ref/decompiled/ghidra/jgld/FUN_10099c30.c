/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10099c30 @ 0x10099C30 */


undefined4 __cdecl FUN_10099c30(int param_1,LCID param_2,LCTYPE param_3,int *param_4)

{
  byte bVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  uint local_ac;
  int local_a4;
  CHAR local_90 [128];
  LPSTR local_10;
  uint local_c;
  int local_8;
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar4 = FUN_1009aeb0(param_2,param_3,(LPWSTR)&DAT_10128a10,4,0);
    if (iVar4 != 0) {
      *(undefined1 *)param_4 = 0;
      local_a4 = 0;
      while( true ) {
        if (3 < local_a4) {
          return 0;
        }
        if (DAT_10125998 < 2) {
          bVar1 = (&DAT_10128a10)[local_a4 * 2];
          local_ac = *(ushort *)(PTR_DAT_1012578c + (uint)bVar1 * 2) & 4;
        }
        else {
          bVar1 = (&DAT_10128a10)[local_a4 * 2];
          local_ac = FUN_10089800((uint)bVar1,4);
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
  local_c = FUN_1009b050(param_2,param_3,local_10,0x80,0);
  if (local_c == 0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) || (uVar3 = FUN_1009b050(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (local_10 = (LPSTR)__malloc_dbg(uVar3,2,0x101206f0,0x58), local_10 == (LPSTR)0x0))
    goto LAB_10099d7d;
    local_8 = 1;
    local_c = FUN_1009b050(param_2,param_3,local_10,uVar3,0);
    if (local_c == 0) goto LAB_10099d7d;
  }
  iVar4 = __malloc_dbg(local_c,2,0x101206f0,99);
  *param_4 = iVar4;
  if (*param_4 != 0) {
    _strncpy((char *)*param_4,local_10,local_c);
    if (local_8 != 0) {
      __free_dbg(local_10,2);
    }
    return 0;
  }
LAB_10099d7d:
  if (local_8 != 0) {
    __free_dbg(local_10,2);
  }
  return 0xffffffff;
}

