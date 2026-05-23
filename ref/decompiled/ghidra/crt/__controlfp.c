/* Ghidra decompiled: jgld.dll */
/* Function: __controlfp @ 0x1008E4D0 */
/* Body size: 26 addresses */


/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = FUN_1008e480(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}

