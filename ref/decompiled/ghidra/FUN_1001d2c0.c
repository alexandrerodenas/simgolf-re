/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001d2c0 @ 0x1001D2C0 */
/* Body size: 115 addresses */


void __cdecl FUN_1001d2c0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10066050 == param_1) {
    PTR_LOOP_10066050 = param_1[1];
  }
  if (param_1 == &PTR_LOOP_10064030) {
    DAT_10064040 = 0xffffffff;
  }
  else {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_101122c0,0,param_1);
  }
  return;
}

