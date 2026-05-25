/* Ghidra decompiled: golf.exe */
/* Function: FUN_00470a10 @ 0x00470A10 */


void FUN_00470a10(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (&DAT_00571ff7)[DAT_0059bf90 * 0x2e];
  *(byte *)((int)&DAT_005722e8 + param_2 + param_1 * 0x32) = ((cVar1 != '\x02') - 1U & 0xfd) + 0x14;
  if (cVar1 == '\x02') {
    (&DAT_0053caf0)[param_1 * 0x32 + param_2] = (&DAT_0053caf0)[param_1 * 0x32 + param_2] & 0xfcdf;
  }
  return;
}

