/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004f900 @ 0x1004F900 */
/* Body size: 77 addresses */


undefined4 __cdecl FUN_1004f900(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    if (piVar1 != (int *)0x0) {
      FUN_10050e10(piVar1,param_1,&param_1);
    }
    (**(code **)(iVar2 + 0x24))(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x1c));
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

