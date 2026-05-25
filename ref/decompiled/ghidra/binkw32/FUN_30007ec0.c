/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007ec0 @ 0x30007EC0 */


void __cdecl FUN_30007ec0(undefined4 *param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (**(code **)(*(int *)*param_1 + 0x30))((int *)*param_1,0,0,1);
    if (iVar1 != -0x7787ff6a) break;
    Sleep(10);
    (**(code **)(*(int *)*param_1 + 0x50))((int *)*param_1);
  }
  param_1[0xd] = 0;
  return;
}

