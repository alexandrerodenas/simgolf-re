/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039b30 @ 0x10039B30 */


undefined4 __fastcall FUN_10039b30(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x5c))();
  if (1 < param_1[0x50e]) {
    iVar2 = 1;
    piVar3 = param_1 + 0x510;
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        thunk_FUN_10039b30((int *)*piVar3);
        if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar3)(1);
        }
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < param_1[0x50e]);
    param_1[0x50e] = 1;
  }
  if ((*(byte *)(param_1 + 0x32) & 2) != 0) {
    uVar1 = thunk_FUN_100340b0(param_1 + 0x1c);
    param_1[0x11] = param_1[0x11] & 0xfffffffe;
    return uVar1;
  }
  return 0x14;
}

