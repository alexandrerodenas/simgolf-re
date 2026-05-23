/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10065300 @ 0x10065300 */
/* Body size: 110 addresses */


void FUN_10065300(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_2;
  if (param_2 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_101286b0);
    __chkesp();
  }
  else if (param_2 == 1) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_101286b0);
    __chkesp();
  }
  local_8 = 0x10065368;
  __chkesp();
  return;
}

