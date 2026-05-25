/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020ee0 @ 0x10020EE0 */


undefined4 __fastcall FUN_10020ee0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x2b) & 4) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x5c))();
    if (iVar2 != 0) {
      uVar1 = param_1[0x2b];
      param_1[0x2b] = uVar1 | 4;
      param_1[0x2b] = uVar1 | 0xc;
      if (DAT_100b4a1c != (void *)0x0) {
        thunk_FUN_1000a240(DAT_100b4a1c,param_1,2,0,0);
      }
    }
  }
  return 0;
}

