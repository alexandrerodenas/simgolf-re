/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10051720 @ 0x10051720 */


undefined4 __cdecl FUN_10051720(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      iVar2 = param_1;
      param_1 = *(int *)(iVar2 + -4);
      *(int *)(iVar2 + -4) = iVar1;
      iVar1 = iVar2;
    } while (param_1 != 0);
    if (iVar2 != 0) {
      do {
        iVar1 = *(int *)(iVar2 + -4);
        (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),iVar2 + -8);
        iVar2 = iVar1;
      } while (iVar1 != 0);
      return 0;
    }
  }
  return 0;
}

