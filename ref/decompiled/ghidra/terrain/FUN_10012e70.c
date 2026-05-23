/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10012e70 @ 0x10012E70 */
/* Body size: 62 addresses */


void __cdecl FUN_10012e70(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(&DAT_100687f8 + param_3 * 4 + param_2 * 0x24 + param_1 * 900) = param_4;
  return;
}

