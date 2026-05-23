/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100153c0 @ 0x100153C0 */
/* Body size: 42 addresses */


int __fastcall FUN_100153c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1 + 0x44;
}

