/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006edb0 @ 0x1006EDB0 */


undefined4 __cdecl
FUN_1006edb0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && ((*(uint *)(param_2 + 8) & 0x80) != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_2 + 0x70);
      local_8 = 0x80;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 0x74);
      local_8 = 0x80;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = (uint)*(byte *)(param_2 + 0x78);
      local_8 = 0x80;
    }
  }
  return local_8;
}

