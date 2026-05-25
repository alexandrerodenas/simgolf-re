/* Ghidra decompiled: jgld.dll */
/* Function: __fassign @ 0x10083760 */


/* Library Function - Single Match
    __fassign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FUN_1008f260(&local_10,(byte *)number);
    *(uint *)argument = local_10;
  }
  else {
    FUN_1008f1e0(&local_c,(byte *)number);
    *(uint *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}

