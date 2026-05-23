/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a64b8 @ 0x004A64B8 */
/* Body size: 42 addresses */


undefined4 FUN_004a64b8(LPCSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  if (DVar2 != 0) {
    FUN_004a9099(DVar2);
    return 0xffffffff;
  }
  return 0;
}

