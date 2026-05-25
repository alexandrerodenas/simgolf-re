/* Ghidra decompiled: binkw32.dll */
/* Function: __fassign @ 0x3002D703 */


/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_3002fd24(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_3002fd51(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}

