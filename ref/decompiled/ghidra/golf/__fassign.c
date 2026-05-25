/* Ghidra decompiled: golf.exe */
/* Function: __fassign @ 0x004A75E7 */


/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (flag != 0) {
    FUN_004abab9(&local_c);
    *(undefined4 *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
    return;
  }
  FUN_004abae6(&number,number);
  *(char **)argument = number;
  return;
}

