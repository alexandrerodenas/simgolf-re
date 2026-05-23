/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042c60 @ 0x10042C60 */
/* Body size: 70 addresses */


undefined4 * __cdecl FUN_10042c60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_1 == 2) {
    uVar3 = 0xb8;
  }
  else {
    if (param_1 != 1) {
      return (undefined4 *)0x0;
    }
    uVar3 = 0x21c;
  }
  puVar1 = _malloc(uVar3);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return puVar1;
}

