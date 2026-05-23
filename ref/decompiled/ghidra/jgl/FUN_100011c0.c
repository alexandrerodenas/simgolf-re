/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100011c0 @ 0x100011C0 */
/* Body size: 138 addresses */


void __thiscall FUN_100011c0(void *this,LPCVOID param_1)

{
  LPCVOID lpBaseAddress;
  DWORD DVar1;
  
  lpBaseAddress = *(LPCVOID *)((int)this + 4);
  if (param_1 < lpBaseAddress) {
    FUN_10001170((int)this);
    return;
  }
  if (lpBaseAddress != (LPCVOID)0x0) {
    UnmapViewOfFile(lpBaseAddress);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(HANDLE *)((int)this + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  DVar1 = SetFilePointer(*(HANDLE *)((int)this + 8),(int)param_1 - (int)lpBaseAddress,(PLONG)0x0,0);
  if (DVar1 == 0xffffffff) {
    FUN_10001170((int)this);
    return;
  }
  SetEndOfFile(*(HANDLE *)((int)this + 8));
  if (*(HANDLE *)((int)this + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  return;
}

