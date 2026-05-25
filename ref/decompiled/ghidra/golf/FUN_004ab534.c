/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ab534 @ 0x004AB534 */


void * FUN_004ab534(int param_1,int param_2)

{
  void *_Dst;
  LPVOID pvVar1;
  int iVar2;
  uint _Size;
  uint uVar3;
  
  _Size = param_1 * param_2;
  uVar3 = _Size;
  if (_Size < 0xffffffe1) {
    if (_Size == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
  }
  do {
    if (uVar3 < 0xffffffe1) {
      if (_Size < DAT_004e4bdc || _Size - DAT_004e4bdc == 0) {
        FUN_004a79b2(9);
        _Dst = (void *)FUN_004a7dbc(_Size);
        FUN_004a7a13(9);
        if (_Dst != (void *)0x0) {
          _memset(_Dst,0,_Size);
          return _Dst;
        }
      }
      pvVar1 = HeapAlloc(DAT_0084215c,8,uVar3);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
    }
    if (DAT_00840b18 == 0) {
      return (void *)0x0;
    }
    iVar2 = FUN_004a8567(uVar3);
  } while (iVar2 != 0);
  return (void *)0x0;
}

