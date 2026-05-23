/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000adc0 @ 0x1000ADC0 */
/* Body size: 118 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000adc0(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 == _DAT_1005f1e0) {
    DAT_10070a14 = 0;
  }
  else if (param_1 == 90.0) {
    DAT_10070a14 = 1;
  }
  else if (param_1 == 180.0) {
    DAT_10070a14 = 2;
  }
  else {
    DAT_10070a14 = 3;
  }
  return;
}

