/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10078be0 @ 0x10078BE0 */
/* Body size: 55 addresses */


/* WARNING: Removing unreachable block (ram,0x10078c0b) */

char * __cdecl FUN_10078be0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return 
  "\n libpng version 1.0.5 - October 15, 1999\n   Copyright (c) 1995, 1996 Guy Eric Schalnat, Group 42, Inc.\n   Copyright (c) 1996, 1997 Andreas Dilger\n   Copyright (c) 1998, 1999 Glenn Randers-Pehrson\n"
  ;
}

