/* Ghidra decompiled: jgld.dll */
/* Function: FID_conflict:__open @ 0x100908E0 */
/* Body size: 63 addresses */


/* Library Function - Multiple Matches With Different Base Names
    __open
    __wopen
   
   Library: Visual Studio 2003 Debug */

int __cdecl FID_conflict___open(char *_Filename,int _OpenFlag,...)

{
  uint uVar1;
  uint in_stack_0000000c;
  
  uVar1 = FUN_10090920(_Filename,_OpenFlag,0x40,in_stack_0000000c);
  return uVar1;
}

