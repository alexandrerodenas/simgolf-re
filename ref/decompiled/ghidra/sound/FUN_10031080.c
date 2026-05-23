/* Ghidra decompiled: sound.dll */
/* Function: FUN_10031080 @ 0x10031080 */
/* Body size: 72 addresses */


undefined4 __fastcall FUN_10031080(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    return 0xd;
  }
  if (DAT_100b4a20 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_100b4a20 + 0x6c))();
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffffffdb | 1;
      thunk_FUN_1000c2f0(DAT_100b4a20,param_1,1);
      return 0;
    }
  }
  return 1;
}

