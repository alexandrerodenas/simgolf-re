/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006bd0 @ 0x10006BD0 */


void __fastcall FUN_10006bd0(int param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0xb4) != 0) && (*(int *)(param_1 + 0xd4) != 0)) {
    *(int *)(param_1 + 200) =
         *(int *)(param_1 + 0xd4) /
         (int)(*(uint *)(param_1 + 0xb4) / (uint)*(ushort *)(param_1 + 0xe4));
    lVar1 = __ftol();
    *(int *)(param_1 + 0xc0) = (int)lVar1;
  }
  return;
}

