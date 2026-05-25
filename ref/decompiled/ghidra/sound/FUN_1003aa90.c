/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003aa90 @ 0x1003AA90 */


void FUN_1003aa90(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = _malloc(0x2544);
  if (local_8 != (undefined4 *)0x0) {
    FUN_1003aae0(local_8);
  }
  local_8 = (undefined4 *)0x1003aada;
  FUN_100431ce();
  return;
}

