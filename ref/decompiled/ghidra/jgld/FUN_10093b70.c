/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10093b70 @ 0x10093B70 */


uint * FUN_10093b70(void)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int local_8;
  
  bVar1 = true;
  if (DAT_10126184 == (uint *)0x0) {
    DAT_10126184 = (uint *)__malloc_dbg(0x351,2,0x1011fe98,0x167);
  }
  *(undefined1 *)DAT_10126184 = 0;
  for (local_8 = 1; __strcats(DAT_10126184,3), local_8 < 5; local_8 = local_8 + 1) {
    FUN_1007f770(DAT_10126184,(uint *)&DAT_1011fe90);
    iVar2 = _strcmp((char *)(&DAT_10126184)[local_8 * 3],(char *)(&DAT_10126184)[(local_8 + 1) * 3])
    ;
    if (iVar2 != 0) {
      bVar1 = false;
    }
  }
  puVar3 = DAT_10126184;
  if (bVar1) {
    __free_dbg(DAT_10126184,2);
    DAT_10126184 = (uint *)0x0;
    puVar3 = (uint *)PTR_DAT_1012619c;
  }
  return puVar3;
}

