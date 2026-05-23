/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003c960 @ 0x1003C960 */
/* Body size: 146 addresses */


void __cdecl FUN_1003c960(undefined4 param_1,uint param_2,int param_3)

{
  BOOL BVar1;
  int iVar2;
  HWND pHStack_4;
  
  (**(code **)(*DAT_10057d90 + 0xc))(param_2,param_3);
  if (param_3 != 0) {
    if ((param_2 < 0x60) || (0x6f < param_2)) {
      iVar2 = (**(code **)(*DAT_10057b08 + 0x138))();
      while (iVar2 != 0) {
        iVar2 = (**(code **)(*DAT_10057b08 + 0x138))();
      }
    }
    else {
      BVar1 = PeekMessageA((LPMSG)&stack0xffffffdc,pHStack_4,0x102,0x102,1);
      if (BVar1 != 0) {
        do {
          BVar1 = PeekMessageA((LPMSG)&stack0xffffffdc,pHStack_4,0x102,0x102,1);
        } while (BVar1 != 0);
        return;
      }
    }
  }
  return;
}

