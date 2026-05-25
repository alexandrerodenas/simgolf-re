/* Ghidra decompiled: golf.exe */
/* Function: FUN_00449210 @ 0x00449210 */


void __fastcall FUN_00449210(undefined4 param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  DAT_00820f18 = local_1;
  DAT_00820f1c = operator_new(0xc);
  *(void **)DAT_00820f1c = DAT_00820f1c;
  *(void **)((int)DAT_00820f1c + 4) = DAT_00820f1c;
  DAT_00820f20 = 0;
  return;
}

