/* Ghidra decompiled: jgld.dll */
/* Function: getSystemCP @ 0x10091990 */


/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 2003 Debug */

UINT __cdecl getSystemCP(UINT param_1)

{
  DAT_10128974 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_10128974 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_10128974 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_10128974 = 1;
    param_1 = DAT_1012899c;
  }
  return param_1;
}

