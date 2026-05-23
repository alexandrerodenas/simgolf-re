/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004b134 @ 0x1004B134 */
/* Body size: 125 addresses */


int * __cdecl FUN_1004b134(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if ((_Size < DAT_1005664c || (int)_Size - (int)DAT_1005664c == 0) &&
         (piVar1 = FUN_1004864d(_Size), piVar1 != (int *)0x0)) {
        _memset(piVar1,0,(size_t)_Size);
        return piVar1;
      }
      piVar1 = HeapAlloc(DAT_100593dc,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_10057e34 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10048df8(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}

