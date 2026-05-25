/* Ghidra decompiled: Terrain.dll */
/* Function: __controlfp @ 0x10026CE0 */


/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = FUN_10026c90(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}

