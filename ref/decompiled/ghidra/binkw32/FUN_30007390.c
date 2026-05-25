/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007390 @ 0x30007390 */


void __cdecl FUN_30007390(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 100) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x68) + param_2 * 4) + 4) = param_3;
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x68) + param_2 * 4) + 0x10);
    *puVar1 = *puVar1 & 0xfffffffe;
    if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
      waveOutWrite(*(HWAVEOUT *)(param_1 + 100),
                   *(LPWAVEHDR *)(*(int *)(param_1 + 0x68) + param_2 * 4),0x20);
    }
  }
  return;
}

