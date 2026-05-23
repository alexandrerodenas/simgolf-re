/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001420 @ 0x10001420 */
/* Body size: 41 addresses */


void FUN_10001420(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_10057b14;
  while (puVar1 = puVar2, DAT_10057b1c != 0) {
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
      puVar2 = DAT_10057b14;
    }
  }
  return;
}

