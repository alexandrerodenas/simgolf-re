/* Ghidra decompiled: Terrain.dll */
/* Function: getSystemCP @ 0x10029F70 */


/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_1011099c = 0;
  if (param_1 == 0xfffffffe) {
    DAT_1011099c = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_1011099c = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_1011099c = 1;
    param_1 = DAT_101109b8;
  }
  return param_1;
}

