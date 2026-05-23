/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004f8b0 @ 0x1004F8B0 */
/* Body size: 68 addresses */


undefined4 __cdecl FUN_1004f8b0(int param_1)

{
  uint *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(uint **)(param_1 + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    FUN_1004ffd0(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),param_1,&param_1);
    return 0;
  }
  return 0xfffffffe;
}

