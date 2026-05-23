/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004cd2b @ 0x1004CD2B */
/* Body size: 204 addresses */


undefined4 __cdecl FUN_1004cd2b(char *param_1,byte *param_2)

{
  byte bVar1;
  size_t _Count;
  byte *_Source;
  char *_Dest;
  
  _Source = param_2;
  _memset(param_1,0,0x88);
  if (*param_2 != 0) {
    if ((*param_2 != 0x2e) || (param_2[1] == 0)) {
      param_2 = (byte *)0x0;
      while( true ) {
        _Count = FUN_1004ed10(_Source,&DAT_1005f3f8);
        if (_Count == 0) {
          return 0xffffffff;
        }
        bVar1 = _Source[_Count];
        if (param_2 == (byte *)0x0) {
          if (0x3f < (int)_Count) {
            return 0xffffffff;
          }
          _Dest = param_1;
          if (bVar1 == 0x2e) {
            return 0xffffffff;
          }
        }
        else if (param_2 == (byte *)0x1) {
          if (0x3f < (int)_Count) {
            return 0xffffffff;
          }
          if (bVar1 == 0x5f) {
            return 0xffffffff;
          }
          _Dest = param_1 + 0x40;
        }
        else {
          if (param_2 != (byte *)0x2) {
            return 0xffffffff;
          }
          if ((bVar1 != 0) && (bVar1 != 0x2c)) {
            return 0xffffffff;
          }
          _Dest = param_1 + 0x80;
        }
        _strncpy(_Dest,(char *)_Source,_Count);
        if (bVar1 == 0x2c) {
          return 0;
        }
        if (bVar1 == 0) break;
        param_2 = param_2 + 1;
        _Source = _Source + _Count + 1;
      }
      return 0;
    }
    FUN_1004a010((uint *)(param_1 + 0x80),(uint *)(param_2 + 1));
  }
  return 0;
}

