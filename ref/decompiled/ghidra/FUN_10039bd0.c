/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039bd0 @ 0x10039BD0 */
/* Body size: 41 addresses */


undefined4 __fastcall FUN_10039bd0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x60))();
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_100b4a20 != (void *)0x0) {
    uVar2 = thunk_FUN_1000c2f0(DAT_100b4a20,param_1,3);
    return uVar2;
  }
  return 0x13;
}

