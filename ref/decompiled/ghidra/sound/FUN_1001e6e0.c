/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001e6e0 @ 0x1001E6E0 */
/* Body size: 27 addresses */


undefined4 __fastcall FUN_1001e6e0(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 local_2;
  
  iVar1 = 0;
  puVar2 = &stack0x00000005;
  do {
    *(undefined1 *)((int)&local_2 + iVar1) = *puVar2;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + -1;
  } while (iVar1 < 2);
  local_2 = (undefined2)((uint)param_1 >> 0x10);
  return CONCAT22((short)((uint)iVar1 >> 0x10),local_2);
}

