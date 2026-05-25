/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008a900 @ 0x1008A900 */


void FUN_1008a900(void)

{
  size_t sVar1;
  int iVar2;
  int *local_10;
  int local_c;
  uint *local_8;
  
  if (DAT_1012b38c == 0) {
    FUN_10091e20();
  }
  local_c = 0;
  for (local_8 = DAT_101287b4; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    if ((char)*local_8 != '=') {
      local_c = local_c + 1;
    }
    sVar1 = _strlen((char *)local_8);
  }
  local_10 = (int *)__malloc_dbg(local_c * 4 + 4,2,0x1011f95c,0x6d);
  DAT_10128770 = local_10;
  if (local_10 == (int *)0x0) {
    __amsg_exit(9);
  }
  for (local_8 = DAT_101287b4; (char)*local_8 != '\0'; local_8 = (uint *)((int)local_8 + sVar1 + 1))
  {
    sVar1 = _strlen((char *)local_8);
    if ((char)*local_8 != '=') {
      iVar2 = __malloc_dbg(sVar1 + 1,2,0x1011f95c,0x79);
      *local_10 = iVar2;
      if (*local_10 == 0) {
        __amsg_exit(9);
      }
      FUN_1007f760((uint *)*local_10,local_8);
      local_10 = local_10 + 1;
    }
  }
  __free_dbg(DAT_101287b4,2);
  DAT_101287b4 = (uint *)0x0;
  *local_10 = 0;
  DAT_1012b37c = 1;
  return;
}

