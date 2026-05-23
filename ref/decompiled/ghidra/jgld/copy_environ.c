/* Ghidra decompiled: jgld.dll */
/* Function: copy_environ @ 0x1009BBF0 */
/* Body size: 238 addresses */


/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2003 Debug */

int * __cdecl copy_environ(int *param_1)

{
  int *piVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int local_14;
  int *local_10;
  int *local_c;
  
  local_14 = 0;
  local_10 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    while (iVar3 = *local_10, local_10 = local_10 + 1, iVar3 != 0) {
      local_14 = local_14 + 1;
    }
    piVar1 = (int *)__malloc_dbg(local_14 * 4 + 4,2,0x101207f0,0x146);
    if (piVar1 == (int *)0x0) {
      __amsg_exit(9);
    }
    local_c = piVar1;
    for (local_10 = param_1; *local_10 != 0; local_10 = local_10 + 1) {
      uVar6 = 0x14f;
      pcVar5 = "setenv.c";
      uVar4 = 2;
      sVar2 = _strlen((char *)*local_10);
      iVar3 = __malloc_dbg(sVar2 + 1,uVar4,(int)pcVar5,uVar6);
      *local_c = iVar3;
      if (*local_c != 0) {
        FUN_1007f760((uint *)*local_c,(uint *)*local_10);
      }
      local_c = local_c + 1;
    }
    *local_c = 0;
  }
  return piVar1;
}

