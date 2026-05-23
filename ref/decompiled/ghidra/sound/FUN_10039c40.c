/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039c40 @ 0x10039C40 */
/* Body size: 43 addresses */


undefined4 __fastcall FUN_10039c40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_10034ac0(param_1 + 0x70);
  if ((*(byte *)(param_1 + 0xcc) & 4) != 0) {
    thunk_FUN_1000c2f0(DAT_100b4a20,param_1,6);
  }
  return uVar1;
}

