/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002aa90 @ 0x1002AA90 */


undefined4 __thiscall FUN_1002aa90(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  int iVar1;
  
  if ((*(byte *)this & 1) != 0) {
    iVar1 = PostThreadMessageA(*(DWORD *)((int)this + 0x1c),param_1,param_2,param_3);
    while (iVar1 == 0) {
      OutputDebugStringA(s_PostMesage_Fail__10063e68);
      Sleep(100);
      iVar1 = PostThreadMessageA(*(DWORD *)((int)this + 0x1c),param_1,param_2,param_3);
    }
    return 0;
  }
  return 0x15;
}

