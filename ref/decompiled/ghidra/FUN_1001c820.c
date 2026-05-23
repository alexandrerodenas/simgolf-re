/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001c820 @ 0x1001C820 */
/* Body size: 61 addresses */


void __fastcall FUN_1001c820(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(uint *)(param_1 + 0x3c);
  puVar3 = *(undefined4 **)(param_1 + 0x2c);
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  uVar2 = thunk_FUN_10028560((void *)(param_1 + 0x28),(uint)*(ushort *)(param_1 + 0x3c));
  *(undefined1 *)(*(int *)(param_1 + 0x2c) + (uVar2 & 0xffff)) = 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

