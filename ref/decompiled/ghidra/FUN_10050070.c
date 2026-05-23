/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10050070 @ 0x10050070 */
/* Body size: 110 addresses */


int * __cdecl FUN_10050070(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x3c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,param_3);
  piVar1[9] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
    return (int *)0x0;
  }
  piVar1[10] = iVar2 + param_3;
  piVar1[0xd] = param_2;
  *piVar1 = 0;
  FUN_1004ffd0(piVar1,param_1,piVar1 + 0xe);
  return piVar1;
}

