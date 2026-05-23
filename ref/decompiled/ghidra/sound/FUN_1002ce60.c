/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ce60 @ 0x1002CE60 */
/* Body size: 49 addresses */


undefined4 __fastcall FUN_1002ce60(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x20))();
  piVar1 = param_1 + 0x16;
  iVar2 = 0x28;
  do {
    if ((undefined *)*piVar1 != (undefined *)0x0) {
      FUN_1004249a((undefined *)*piVar1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

