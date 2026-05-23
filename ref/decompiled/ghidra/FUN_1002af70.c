/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002af70 @ 0x1002AF70 */
/* Body size: 256 addresses */


uint * __fastcall FUN_1002af70(void *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_10066c4c == (uint *)0x0) {
    DAT_10066c4c = (uint *)__malloc_dbg(param_1,0x351,2,"setlocal.c",0x167);
  }
  *(undefined1 *)DAT_10066c4c = 0;
  for (local_8 = 1; __strcats(DAT_10066c4c,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_10018590(DAT_10066c4c,(uint *)&DAT_100608a0);
    iVar2 = _strcmp((char *)(&DAT_10066c4c)[local_8 * 3],(char *)(&DAT_10066c4c)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_10066c4c;
  if (bVar1) {
    __free_dbg(DAT_10066c4c,2);
    DAT_10066c4c = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_10066c64;
  }
  return puVar3;
}

