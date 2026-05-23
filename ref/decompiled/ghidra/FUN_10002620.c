/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10002620 @ 0x10002620 */
/* Body size: 41 addresses */


undefined4 __thiscall FUN_10002620(void *this,char *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe4))();
  if (*piVar1 != 8) {
    return 0x17;
  }
  uVar2 = FUN_100066a0(this,param_1);
  return uVar2;
}

