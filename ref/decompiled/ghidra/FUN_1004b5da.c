/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004b5da @ 0x1004B5DA */
/* Body size: 27 addresses */


void __cdecl FUN_1004b5da(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

