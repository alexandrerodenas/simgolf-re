/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000a5d0 @ 0x1000A5D0 */
/* Body size: 52 addresses */


undefined4 __thiscall FUN_1000a5d0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x4d0) = param_1;
  return 0;
}

