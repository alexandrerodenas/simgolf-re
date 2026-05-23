/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000fec0 @ 0x1000FEC0 */
/* Body size: 20 addresses */


undefined4 __fastcall FUN_1000fec0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  if ((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x68), iVar1 == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

