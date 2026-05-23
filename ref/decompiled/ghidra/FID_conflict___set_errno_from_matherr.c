/* Ghidra decompiled: jgld.dll */
/* Function: FID_conflict:__set_errno_from_matherr @ 0x1008BF30 */
/* Body size: 58 addresses */


/* Library Function - Multiple Matches With Different Base Names
    __set_errno
    __set_errno_from_matherr
   
   Library: Visual Studio */

errno_t __cdecl FID_conflict___set_errno_from_matherr(int _Value)

{
  if (_Value == 1) {
    _Value = FUN_100904d0();
    *(undefined4 *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    _Value = FUN_100904d0();
    *(undefined4 *)_Value = 0x22;
  }
  return _Value;
}

