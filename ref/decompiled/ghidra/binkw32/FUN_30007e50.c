/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007e50 @ 0x30007E50 */


void __cdecl FUN_30007e50(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (**(code **)(*(int *)*param_1 + 0x2c))
                      ((int *)*param_1,param_1[3] * param_2,param_1[3],param_1 + 0xf,param_1 + 0xe,
                       param_1 + 0x11,param_1 + 0x10,0);
    if (iVar1 != -0x7787ff6a) break;
    Sleep(10);
    (**(code **)(*(int *)*param_1 + 0x50))((int *)*param_1);
  }
  return;
}

